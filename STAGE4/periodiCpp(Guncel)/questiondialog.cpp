#include "questiondialog.h"


QuestionDialog::QuestionDialog(const Question& question, QString correctOption, QWidget *parent)
    : QDialog{parent}
{
    this->correctOption = correctOption;

    QVBoxLayout *layout = new QVBoxLayout(this);

    // Display the question text along with its order
    lblQuestionText = new QLabel("Q" + QString::number(question.getOrderOfQuestion()) + "- " + question.getQuestionText(), this);
    layout->addWidget(lblQuestionText);

    // Create a button group for radio buttons to handle exclusive selection
    QButtonGroup *buttonGroup = new QButtonGroup(this);
    this->options = question.getOptions();

    for(const QString &option : options){
        //Use radioButton to represent individual options
        QRadioButton *radioButton = new QRadioButton(option, this);
        layout->addWidget(radioButton);
        buttonGroup->addButton(radioButton);
        optionRadioButtons.append(radioButton);
        connect(radioButton, SIGNAL(clicked()), this, SLOT(radioButtonClicked()));
    }

    // No "Next" button here
    setLayout(layout);
}

void QuestionDialog::onButtonClick() {

    close();
}

void QuestionDialog::radioButtonClicked()
{
    markedOptions.clear(); // Clear previous selections
    for (QRadioButton *radioButton : optionRadioButtons) {
        if (radioButton->isChecked()) {
            //Save the marked option
            markedOptions.append(radioButton->text());
        }
    }
}

QVector<QString> QuestionDialog::getMarkedOptions() const
{
    return markedOptions;
}


QString QuestionDialog::getCorrectOption() const
{
    return correctOption;
}

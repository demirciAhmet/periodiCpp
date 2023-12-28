#include "questiondialog.h"


QuestionDialog::QuestionDialog(const Question& question,QString correctOption, QWidget *parent)
    : QDialog{parent}
{
    this->correctOption = correctOption;
    QVBoxLayout *layout = new QVBoxLayout(this);

    lblQuestionText = new QLabel("Q" + QString::number(question.getOrderOfQuestion()) + "- " + question.getQuestionText(), this);
    layout->addWidget(lblQuestionText);

    QButtonGroup *buttonGroup = new QButtonGroup(this);
    this->options = question.getOptions();

    for(const QString &option : options){
        QRadioButton *radioButton = new QRadioButton(option, this);
        layout->addWidget(radioButton);
        buttonGroup->addButton(radioButton);
        optionRadioButtons.append(radioButton);
        connect(radioButton, SIGNAL(clicked()), this, SLOT(radioButtonClicked()));
    }
    QPushButton *pushButton = new QPushButton("Next", this);
    layout->addWidget(pushButton);
    connect(pushButton, &QPushButton::clicked, this, &QuestionDialog::onButtonClick);
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

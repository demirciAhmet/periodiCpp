#include "challengedialog.h"

ChallengeDialog::ChallengeDialog(QDialog *parent)
    : QDialog{parent}
{
    QWidget *window = new QWidget;
    QLabel *lblMainText = new QLabel("Welcome the challenge mode. In this mode you have 50 questions and 5 minutes to solve these questions.");
    startButton = new QPushButton("Start the challenge!");
    scoreButton = new QPushButton("Show the highest score.");
    QVBoxLayout *layout = new QVBoxLayout(window);
    layout->addWidget(lblMainText);
    layout->addWidget(startButton);
    layout->addWidget(scoreButton);
    setLayout(layout);


    connect(startButton, &QPushButton::clicked, this, &ChallengeDialog::onButtonClicked);
    ScoreManager* scoreManager = new ScoreManager(parent);
    connect(scoreButton, &QPushButton::clicked, scoreManager, &ScoreManager::onButtonClicked);


}

void ChallengeDialog::onButtonClicked(){
    Question *question1 = new Question("Which one is not noble gase?", {"Xenon", "Argon", "Hellium", "Lithium", "Radon"}, 1);
    Question *question2 = new Question("Which one is not metal?", {"Hydrogen", "Gallium", "Sodium", "Lithium", "Indium"}, 2);
    Question *question3 = new Question("Which one is not lanthanoid?", {"Cerium", "Zinc", "Holmium", "Terbium", "Lutetium"}, 3);
    Question *question4 = new Question("Which one is actinoid?", {"Thorium", "Platinum", "Thallium", "Antimony", "Hassium"}, 4);
    Question *question5 = new Question("Which one is metalloid?", {"Nickel", "Germanium", "Francium", "Galium", "Bromine"}, 5);
    Question *question6 = new Question("Which one has higher electronegativity?", {"Hydrogen", "Cadmium", "Boron", "Polonium", "Fluorine"}, 6);
    Question *question7 = new Question("Which one has higher energy level?", {"Copper", "Oganesson", "Hafnium", "Silicon", "Osmium"}, 7);
    Question *question8 = new Question("Which one has higher weight?", {"Caesium", "Potassium", "Dubnium", "Vanadium", "Arsenic"}, 8);
    Question *question9 = new Question("Which one has higher density?", {"Neptunium", "Beryllium", "Manganese", "Aluminium", "Argon"}, 9);
    Question *question10 = new Question("Which one has higher electron affinity?", {"Titanium", "Barium", "Iron", "Oxygen", "Astatine"}, 10);
    Question *question11 = new Question("Which one has lower melting point?", {"Carbon", "Germanium", "Neon", "Xenon", "Chlorine"}, 11);
    Question *question12 = new Question("Which one has higher boiling point?", {"Manganese", "Mercury", "Tantalum", "Astatine", "Selenium"}, 12);
    Question *question13 = new Question("Which one has higher hardness?", {"Tungsten", "Gold", "Cadmium", "Aluminium", "Tellurium"}, 13);
    Question *question14 = new Question("Which one has higher young modulus coefficient?", {"Vanadium", "Ruthenium", "Silicon", "Arsenic", "Antimony"}, 14);
    Question *question15 = new Question("Which one has higher conductivity?", {"Silver", "Krypton", "Boron", "Copper", "Iron"}, 15);
    Question *question16 = new Question("Which one is not alkali metal?", {"Rubidium", "Francium", "Sodium", "Potassium", "Silver"}, 16);
    Question *question17 = new Question("Which one is not alkaline earth metal?", {"Barium", "Magnesium", "Calcium", "Cobalt", "Beryllium"}, 17);
    Question *question18 = new Question("At 100 celcius, which is not a liquid?", {"Rubidium", "Oxygen", "Caesium", "Sodium", "Gallium"}, 18);
    Question *question19 = new Question("At 100 celcius, which one is a gas?", {"Neon", "Gallium", "Germanium", "Silicon", "Bismuth"}, 19);
    Question *question20 = new Question("At 100 celcius, which one is a solid?", {"Argon", "Neon", "Xenon", "Radon", "Zirconium"}, 20);
    Question *question21 = new Question("Which one was discovered later?", {"Moscovium", "Mercury", "Hassium", "Cerium", "Actinium"}, 21);
    Question *question22 = new Question("Which one was discovered earlier?", {"Arsenic", "Boron", "Iodine", "Iron", "Terbium"}, 22);
    Question *question23 = new Question("Which one is a transition metal?", {"Osmium", "Germanium", "Bromine", "Sodium", "Bromine"}, 23);
    Question *question24 = new Question("Which one is a reactive nonmetal?", {"Platinum", "Zirconium", "Selenium", "Galium", "Chlorine"}, 24);
    Question *question25 = new Question("Which one is a post-transition metal?", {"Thallium", "Ruthenium", "Francium", "Caesium", "Lithium"}, 25);
    Question *question26 = new Question("Which one has a lower weight?", {"Lithium", "Nihonium", "Nitrogen", "Bromine", "Xenon"}, 26);
    Question *question27 = new Question("Which one is not a halogen?", {"Chlorine", "Oxygen", "Bromine", "Tennessine", "Iodine"}, 27);
    Question *question28 = new Question("Which one is not a pnictogen?", {"Antimony", "Bismuth", "Moscovium", "Phosphorus", "Indium"}, 28);
    Question *question29 = new Question("Which one is a chalcogen?", {"Gallium", "Polonium", "Francium", "Thallium", "Thallium"}, 29);
    Question *question30 = new Question("Which one has higher electron affinity?", {"Yttrium", "Calcium", "Cadmium", "Beryllium", "Cadmium"}, 30);
    Question *question31 = new Question("Which one has higher boiling point?", {"Helium", "Xenon", "Krypton", "Argon", "Radon"}, 31);
    Question *question32 = new Question("Which one has lower melting point?", {"Carbon", "Germanium", "Tin", "Lead", "Boron"}, 32);
    Question *question33 = new Question("Which one has the higher ionization energy?", {"Nickel", "Seaborgium", "Rutherfordium", "Terbium", "Helium"}, 33);
    Question *question34 = new Question("Which one has the lower ionization energy?", {"Caesium", "Niobium", "Mercury", "Silicon", "Bromine"}, 34);
    Question *question35 = new Question("Which one has the higher Van der Waals radius?", {"Rhenium", "Tellurium", "Niobium", "Rubidium", "Neptunium"}, 35);
    Question *question36 = new Question("At 0 celcius, which one is a solid?", {"Radon", "Nitrogen", "Tennessine", "Roentgenium", "Yttrium"}, 36);
    Question *question37 = new Question("At 1000 celcius, which one is a liquid?", {"Beryllium", "Magnesium", "Cadmium", "Polonium", "Ytterbium"}, 37);
    Question *question38 = new Question("Which one is a nonmetal?", {"Vanadium", "Zirconium", "Indium", "Argon", "Aluminium"}, 38);
    Question *question39 = new Question("Which one has higher atomic number?", {"Lawrencium", "Gadolinium", "Indium", "Promethium", "Dubnium"}, 39);
    Question *question40 = new Question("Which one has lower weight?", {"Boron", "Lithium", "Mercury", "Molybdenum", "Sulfur"}, 40);
    Question *question41 = new Question("Which one has higher electronegativity?", {"Caesium", "Gold", "Aluminium", "Polonium", "Oganesson"}, 41);
    Question *question42 = new Question("Which one is pnictogen?", {"Copper", "Phosphorus", "Francium", "Silver", "Bromine"}, 42);
    Question *question43 = new Question("Which one is halogen?", {"Rubidium", "Strontium", "Palladium", "Galium", "Astatine"}, 43);
    Question *question44 = new Question("Which one is in group 5A", {"Indium", "Silicon", "Iron", "Chlorine", "Radon"}, 44);
    Question *question45 = new Question("Which one is noble gas?", {"Strontium", "Technetium", "Krypton", "Copper", "Lead"}, 45);
    Question *question46 = new Question("What is the name of the element with the symbol Pd?", {"Lead", "Praseodymium", "Protactinium", "Radium", "Palladium"}, 46);
    Question *question47 = new Question("Which one has lower hardness?", {"Gold", "Sodium", "Antimony", "Bismuth", "Iridium"}, 47);
    Question *question48 = new Question("Which one has lower electron affinity?", {"Tantalum", "Tungsten", "Barium", "Strontium", "Calcium"}, 48);
    Question *question49 = new Question("Which one has lower young modulus coefficient?", {"Scandium", "Vanadium", "Cobalt", "Galium", "Zinc"}, 49);
    Question *question50 = new Question("Which one has lower conductivity?", {"Xenon", "Krypton", "Argon", "Neon", "Helium"}, 50);

    challenge = new Challenge({question1, question2, question3, question4, question5, question6, question7,question8,question9,
                               question10, question11, question12, question13, question14,question15, question16, question17, question18,question19,
                               question20, question21, question22, question23, question24,question25, question26, question27, question28,question29,
                               question30, question31, question32, question33, question34,question35, question36, question37, question38,question39,
                               question40, question41, question42, question43, question44,question45, question46, question47, question48,question49, question50});

    QuestionDialog* arr[] = {new QuestionDialog(*question1,  "Lithium", this),
                             new QuestionDialog(*question2, "Hydrogen", this),
                             new QuestionDialog(*question3, "Zinc", this),
                             new QuestionDialog(*question4, "Thorium",  this),
                             new QuestionDialog(*question5,  "Germanium",  this),
                             new QuestionDialog(*question6,  "Fluorine",  this),
                             new QuestionDialog(*question7,  "Oganesson",  this),
                             new QuestionDialog(*question8,  "Dubnium",  this),
                             new QuestionDialog(*question9,  "Neptunium",  this),
                             new QuestionDialog(*question10,  "Astatine",  this),
                             new QuestionDialog(*question11,  "Neon",  this),
                             new QuestionDialog(*question12,  "Tantalum",  this),
                             new QuestionDialog(*question13,  "Tungsten",  this),
                             new QuestionDialog(*question14,  "Ruthenium",  this),
                             new QuestionDialog(*question15,  "Silver",  this),
                             new QuestionDialog(*question16,  "Silver",  this),
                             new QuestionDialog(*question17,  "Cobalt",  this),
                             new QuestionDialog(*question18,  "Oxygen",  this),
                             new QuestionDialog(*question19,  "Neon",  this),
                             new QuestionDialog(*question20,  "Zirconium",  this),
                             new QuestionDialog(*question21,  "Moscovium",  this),
                             new QuestionDialog(*question22,  "Iron",  this),
                             new QuestionDialog(*question23,  "Osmium",  this),
                             new QuestionDialog(*question24,  "Chlorine",  this),
                             new QuestionDialog(*question25,  "Thallium",  this),
                             new QuestionDialog(*question26,  "Lithium",  this),
                             new QuestionDialog(*question27,  "Oxygen",  this),
                             new QuestionDialog(*question28,  "Indium",  this),
                             new QuestionDialog(*question29,  "Polonium",  this),
                             new QuestionDialog(*question30,  "Yttrium",  this),
                             new QuestionDialog(*question31,  "Radon",  this),
                             new QuestionDialog(*question32,  "Tin",  this),
                             new QuestionDialog(*question33,  "Helium",  this),
                             new QuestionDialog(*question34,  "Caesium",  this),
                             new QuestionDialog(*question35,  "Tellurium",  this),
                             new QuestionDialog(*question36,  "Yttrium",  this),
                             new QuestionDialog(*question37,  "Magnesium",  this),
                             new QuestionDialog(*question38,  "Argon",  this),
                             new QuestionDialog(*question39,  "Lawrencium",  this),
                             new QuestionDialog(*question40,  "Lithium",  this),
                             new QuestionDialog(*question41,  "Gold",  this),
                             new QuestionDialog(*question42,  "Phosphorus",  this),
                             new QuestionDialog(*question43,  "Astatine",  this),
                             new QuestionDialog(*question44,  "Indium",  this),
                             new QuestionDialog(*question45,  "Krypton",  this),
                             new QuestionDialog(*question46,  "Palladium",  this),
                             new QuestionDialog(*question47,  "Sodium",  this),
                             new QuestionDialog(*question48,  "Calciumf",  this),
                             new QuestionDialog(*question49,  "Scandium",  this),
                             new QuestionDialog(*question50,  "Xenon",  this)};

    int count = 0;
    challenge->executionOfQuestionDialogs(arr,  count);
}


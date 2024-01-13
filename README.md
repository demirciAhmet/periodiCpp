
# Introduction

PeriodiCpp is a periodic table application with several features: A user-friendly interface allows you to interact with the periodic table by clicking to the element form the periodic table or just by searching it from search bar. The integrated quizzes help you to learn the periodic table. PeriodiCpp has two interesting quiz modes: "Level Mode" and "Challenge Mode" where users can test their knowledge with built-in levels or against the clock, earn points and do their best. 

# Updates After the Presentation:

- Added videos for the application that also includes newly implemented features.
- **Table Section:** Add a search bar functionality to Table Section. You can search by the element symbol or name (we can easily configure for searchings by other properties like the discoverer of the element or something else.) and when you press the search button, the element dialog opens as when you click directly to an element.
- **Quiz Section:** Improved GUI for the Quiz Section (we firstly implement the GUI of the quiz section quiz section by just coding. Now the GUI of the quiz section is transferred to form file). LevelDialog and ChallengeDialog classes no longer exist. Their function is fulfilled by the QuizSection class
- **Quiz Section:** Scores are now in txt file. When you close the application, the scores will still be available.
- Code improvements: Now we have cleaner and more efficient code.
- Added doxygen documentation lines.
- Since we have completed the core application, we can easily add new features and sections.

# Installation

1. Clone the repository
2. Select corresponding build directory that starts with `PeriodiCpp-*` for operating system you are using. 
3. Run the executable.

**Note:** If you encounter any problems, you can use the source codes in `https://github.com/terrabladex/periodiCpp-Storage/tree/main/Project-Source-Codes` to run the project:
1. Open the project in QT Creator.
2. Build and run the project. 

# Images
![GUI1](https://github.com/terrabladex/periodiCpp-Storage/blob/main/Images%26Videos/table.png)

---
![GUI2](https://github.com/terrabladex/periodiCpp-Storage/blob/main/Images%26Videos/search.png)

---
![GUI3](https://github.com/terrabladex/periodiCpp-Storage/blob/main/Images%26Videos/dialog.png)

# Videos

## Table Section:
[![youtube-video](https://github.com/terrabladex/periodiCpp-Storage/blob/main/Images%26Videos/thumbnail-1.png)](https://www.youtube.com/watch?v=vmsg-YQF934)

## Quiz Section
[![drive-video](https://github.com/terrabladex/periodiCpp-Storage/blob/main/Images%26Videos/thumbnail-2.png)](https://drive.google.com/file/d/1bGTderI94wLy3AZxFVH3SCE07SR-N0VC/view?usp=sharing)

# Doxygen
I used the APT package for Doxygen.

# Conclusion

In this project, we implement our first complete GUI application with C++. Since we didn't know Qt(or similar) enough, it was challenging to learn it from scratch. The hardest parts of the project were mostly Qt related.

# Group 03 Members:

- Mehmet Emre Cebeci - 21050111037
- Ahmet Kaan Demirci - 21050111031
- Mustafa Özdemir - 21050111016
- Teoman Güven - 23050151039

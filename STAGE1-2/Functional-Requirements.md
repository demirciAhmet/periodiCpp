

# Functional Requirements

# General Application Requirements

- There will be a menu, the user will be able to select the desired section from the menu:
  - **Table Section (Default)**
  - **Search Section**
  - **Learn Section**
  - **Quiz Section**
  - **Compounds Section**
  - **Achievements Section** 
  - **Settings Section**

# Periodic Table Section Requirements

- The user will be able to choose the periodic table colouring according to the properties they want in the periodic table, there will be special colouring for each option.
  - Classes (Default)
  - Blocks
  - Metallic
  - Phase
  - Radioactivity
- The user will determine which property he/she wants to display the elements in the table
  - Simple
  - Detailed   
  - Element name (Default)
  - Atomic weight
  - Discovery Year
  - Electron configuration
  - Elements per shell
  - Common oxidations
  - Melting Point
  - Boiling Point
  - Density
  - Cas Number
- There will be two different modes for viewing the periodic table:
- In Default mode, the element information mode will be pop-up and more detailed.
- In Wide mode, the element information will be simplified on the left side.
- The user will be able to select the element he/she wants to obtain information from the periodic table:
  - In the pop-up window, the picture or the model of the element can be changed, and clicking on it will switch between the two.
  - In the window that opens, there will be information about the element. Some possible informations:
    - Brief Information Part:
      - Name
      - Description
      - Discovered by
      - Discovery Tear
    - Element Properties Part:
      - Atom Number
      - Atomic Weight
      - Group Number
      - Period
      - Block
      - Radioactivity
    - Atomic Properties Part:
      - Electron configuration
      - Electrons Per Shell
      - Oxidation States
      - Common Oxidation States
      - Electronegativity 
      - Covalent Radius
      - Van der Waals Radius
    - Physical Properties Part:
      - Appearance
      - Phase
      - Melting Point
      - Density
      - Heat of Fusion
      - Heat of Vaporization
      - Molar Heat Capacity

# Search Section Requirements

- Display elements in a listed form.
- The user will be able to search for the desired element

# Learn Section Requirements

- There will be a section where the user can learn the properties of the periodic table.
 
# Quiz Section Requirements

- There will be various Quiz modes, the user will choose one of the modes:
      1. Levels:
        - level1, level2, level3, level4 (as the user finishes levels, others are unlocked, basic questions about elements)
      2. Challange Mode:
        - Try to get the highest score in this time-limited mode!
- There will be an automatic recording system, even if the user closes the application, he will be able to continue from the level he left when he reopens it.
- The scorekeeper for Challange mode will give a score according to the element and time the user knows correctly.
- The user will be able to see the highest score of all times.

# Compounds Section Requirements

- Example: H and O are entered, the compounds that can be formed from the entered elements are displayed.

# Achievements Section Requirements

- There will be achievements related to quizzes.
- example1: Completing level 1 in Level mode (possible achievement name: "fire, water, earth, wood!")
- example2: Completing all Levels (possible achievement name: "")
- example3: In challange mode, reach score at least 1000 (possible achievement name: "Chemistry Master")

# Settings Section Requirements

- Dark-Light mode
- Language
- Window mode: fullscreen, windowed...
- Report a bug



# Noted Specifications:

- 




# Notes

- Periyodik Tablo Bölümü İçinElement özelliklerini bilgi alacağımız kaynağa göre seçersek çok daha az uğraşmış oluruz.
- Periyodik tablo özellikleri için en az uğraştıracak olanlar seçilebilir, böylelikle hem genel proje detaylı gözükür hem biz az uğraşırız
- Multiple language desteği: (çeviri yapmamıza gerek yok sadece projeyi çoklu dili destekleyecek şekilde geliştirmek)
***Quiz Bölümü İçin Notlar: ***
- Veri tutmak için bulut sistemlerinden birinde server açılabilir: aws, gcs, microsoft azure vb.
- Server işine girersek temel düzeyde server öğrenmiş oluruz ve bu bize epey fayda salar fakat biraz zamanımızı alabilir.
- Server işine girmezsek kazandığımız zamanı GUI gelişimine harcayabiliriz.
- Oyun projesi geliştirenler oyun hakkında düşünerek çok zaman kaybediyorlar, biz ise bu zamanı proje detaylarına harcayarak çok güzel bir proje çıkartabiliriz.
# Görseller

- görseller için images-of-elements.com
- [https://www.webelements.com/_media/periodicity/tables/periodicity_cityscape_white/abund_crust_city_w.png]

# Silinen Özellikler
  - Eksikleim bölümü
  - Favorilerim bölümü
  - Daily Challanges Bölümü

  #### Olası Quiz Bölümü 1
    - Kullanıcı quiz bölümüne girdiğinde 2 seçenek karşısına çıkacak: Hazır quizler ve Topluluk Quizleri.
      - Topluluk quizleri için yıldız verme sistemi olacak, quiz hazırlamak için kullanıcının giriş yapması gerekmektedir.
  
  #### Olası Quiz Bölümü 2
    - Kullanıcı quiz bölümüne girdiğinde 2 seçenek karşısına çıkacak: Hazır quizler ve Özel Quizler.
      - Daha önce biri (ör. bir öğretmen) quiz hazırlayacak ve bu hazırlanan quiz veri olarak sunucuda depolanacak, hazır link hazırlayana verilecek ve paylaştığı kişilere bu linki verip quiz çözdürebilecek
  
  #### Olası Quiz Bölümü 3
    - Kullanıcı quiz bölümüne girdiğinde 2 seçenek karşısına çıkacak: Quizler ve Soru Hazırlayıcı.
      - Kullanıcı soru hazırlayıcıyı kullanarak kendi bilgisayarına indirmek üzere soru hazırlayabilecek (bu bölümün aktif olması için kullanıcıya başlangıçta kullanım amacı sorulabilir: öğrenci, öğretmen, kimya meraklısı. Kullanıcı öğretmeni seçerse buton aktif olabilir.


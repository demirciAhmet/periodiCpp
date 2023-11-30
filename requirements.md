# Functional Requirements

# General Application Requirements

- Menü olacak, kullanıcı menüden istediği bölümü seçebilecek:
  - **Table Section (Default)**
  - **Search Section
  - **Learn Section**
  - **Quiz Section**
  - **Compounds Section**
  - **Achievements Section** 
  - **Settings Section**

# Periodic Table Section Requirements

- Kullanıcı, periyodik tabloda istediği özelliklere göre periyodik tablo renklendirmesini seçebilecek, her bir seçenek için özel renklendirme olacak
      - Classes (Default)
      - Blocks
      - Metallic
      - Phase
      - Radioactivity
  - Elementleri tabloda hangi özellik ile görüntülemek istediğini kullanıcı belirleyecek
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
- Periyodik tabloyu görüntülemek için iki farklı mod olacak:
  - Default modda element bilgilendirme kipi açılır pencere şekilde olacak ve daha detaylı olacak.
  - Wide modda elementin bilgileri basitleştirilmiş şekilde sol tarafta gözükecek.
- Kullanıcı, bilgisini edinmek istediği elementi periyodik tablo üzerinden seçebilecek:
    - Açılan pencerede elementin resmi veya modeli değiştirilebilir şekilde olacak, üstüne tıklayınca ikisi arasında geçiş yapılabilir olacak.
    - Açılan pencerede Element hakkında bilgiler olacak. Olası bazı bilgiler:
      - Brief Information Part:
        - Name
        - Description
        - Keşfeden kişi
        - Discovery Tear
      - Element Properties Part:
        - Atom Number
        - Atomic Weight
        - Group Number
        - Periot
        - Block
        - Radyoaktivite
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

- Listelenmiş bir şekilde elementleri görüntüleyebilecek
- İstediği elementi aratabilecek
# Learn Section

- Kullanıcının periyodik tablo özelliklerini öğrenebileceği bir bölüm olacak.
- Bilgi alınabilecek özellikler ayrı ayrı hazırlanacak, kullanıcı seçeceği özellik hakkında bilgi sahibi olacak
# Quiz Section

- Çeşitli Quiz modları olacak, kullanıcı modlardan birini seçecek:
      1. Levels:
        - level1, level2, level3, level4 (kullanıcı levelleri bitirdikçe diğerlerinin kilidi açılır, elementler ile ilgili temel sorular)
      2. Challange Mode:
        - Süre kısıtlaması olan bu modda en yüksek puanı elde etmeye çalışın!
- Otomatik kayıt sistemi olacak, kullanıcı uygulamayı kapatsa bile yeniden açtığında kaldığı level'dan devam edebilecek.
- Challange modu için skor tutucu kullanıcının doğru bildiği element ve süreye göre bir skor verecek.
- Rekoru ise tüm zamanların en yüksek skorunu verecek.

# Compounds Section Requirements

- Ör: H ve O girilir, girilen elementlerden oluşabilecek bileşikler gözükür.

# Achievements Section Requirements

- Quizler ile alakalı başarımlar olacak.
- örnek1: Level modunda 1 bölümü tamamlamak (olası başarım ismi: "ateş, su, toprak, tahta!")
- örnek2: Level modununu tamamlamak (olası başarım ismi: "")
- örnek3: Zamana karşı modda imkansız zorluğu tamamlamak (olası başarım ismi: "Chemistry Master")

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


# Functional requirements

#### In the General Application Interface

- Kullanıcı, kullanmak istediği özelliği menüden seçecek:
  - Home
  - Menü:
    - Home (Periyodik tablo)
      - Kullanıcı, periyodik tabloda istediği özelliklere göre elementleri görebilecek:
        - Category
        - Block
        - Metallic
        - Atomic Weight
        - Electron Configuration
        - Common Oxidations
        - Melting Point
        - Boiling Point
        - Density
        - Phase
        - Radioactivity
        - Discovery Year
        - CAS Number
    - Quiz Bölümü (Çeşitli quiz modları)
      - Level modu:
        - level1, level2, level3, level4 (kullanıcı levelleri bitirdikçe diğerlerinin kilidi açılır, elementler ile ilgili temel sorular)
      - Zamana karşı mod:
        - Süre ve soru zorluğu olarak çeşitli zorluk seçenekleri: kolay, orta, zor, imkansız...
    - Daily Challange
    - Achievements (Quizlerle alakalı başarımlar)
      - Level modununu tamamlamak
      - Zamana karşı modda  

#### In the Periodic Table Interface

- Kullanıcı, görmek istediği elementi periyodik tablo üzerinden seçebilecek.
  - Kullanıcı seçtiği elementin özelliklerini görecek:
    - INFO:
      - Name
      - Description
      - Keşfeden kişi
      - Discovery Tear
    - Element Properties:
      - Atom Number
      - Atomic Weight
      - Group Number
      - Periot
      - Block
      - Eadyoaktivite
    - Atomic Properties:
      - Elementin görseli (figür olarak)  
      - Electron configuration
      - Electrons Per Shell
      - Oxidation States
      - Common Oxidation States
      - Electronegativity 
      - Covalent Radius
      - Van der Waals Radius
    - Physical Properties:
      - Appearance
      - Phase
      - Melting Point
      - Density
      - Heat of Fusion
      - Heat of Vaporization
      - Molar Heat Capacity
    - Other properties:
      - Crystal Structure
      - Speed of Sound
      - CAS Number
    - SHOW ISOTOPES (Elementin Izotoplarını göstermek için buton)
- Kullanıcı, listeden seçtiği özelliğe bağlı olarak farklı özelliklere göre elementleri listeleyebilecek.


#### In the Quiz Application

- Kullanıcı burada seçeceği soru sayısına bağlı olarak elementlerin kısaltmasıyla alakalı bir quiz çözecek. (30 saniye, 1 dakika)
- Skor tutucu kullanıcının doğru bildiği element ve süreye göre bir skor verecek.
- Yüksek skor tutucu ise tüm zamanların en yüksek skorunu verecek.

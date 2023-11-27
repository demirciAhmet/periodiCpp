# Functional Requirements

#### General Application Interface

- Kullanıcı, kullanmak istediği özelliği menüden seçecek:
  - Menü:
    - Periyodik Tablo Bölümü
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
      - Kullanıcı burada seçeceği soru sayısına bağlı olarak elementlerin kısaltmasıyla alakalı bir quiz çözecek.
      - Otomatik kayıt sistemi olacak, kullanıcı uygulamayı kapatsa bile yeniden açtığında kaldığı yerden quizleri çözmeye devam edebilecek.
      - Skor tutucu kullanıcının doğru bildiği element ve süreye göre bir skor verecek.
      - Yüksek skor tutucu ise tüm zamanların en yüksek skorunu verecek.
      - Çeşitli quiz modları olacak:
        - Level modu:
          - level1, level2, level3, level4 (kullanıcı levelleri bitirdikçe diğerlerinin kilidi açılır, elementler ile ilgili temel sorular)
        - Zamana karşı mod:
          - Süre ve soru zorluğu olarak çeşitli zorluk seçenekleri: kolay, orta, zor, imkansız...  (30 saniye, 1 dakika, ...)
    - Kimyasal Reaksiyon Denkleştirme:
      - Ör: H20 + HCOOH input olarak girilir, sonuç gözükür.
    - Daily Challange
    - Achievements (Quizlerle alakalı başarımlar)
      - Level modunda 1 bölümü tamamlamak (olası başarım ismi: "Hiç fena değil.")
      - Level modununu tamamlamak (olası başarım ismi: "ateş, su, toprak, tahta!")
      - Zamana karşı modda imkansız zorluğu tamamlamak (olası başarım ismi: "Chemistery Master")

#### Periodic Table Interface

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
    - İzotopları gösterme butonu (Elementin Izotoplarını göstermek için buton)
    - Olası bileşikleri gösterme butonu (seçilen elemente olası bileşik örnekleri verir)
- Kullanıcı, seçtiği özelliğe bağlı olarak elementleri periyodik tablo üzerinden görebilecek.
- Kullanıcı, seçtiği özelliğe bağlı olarak elementlerin sıralamasını görebilecek ( ör. en radyoaktif elementten en aza doğru sıralama)

# Non-Functional Requirements

# Functional Requirements

#### General Application Requirements (as Interface)

- Kullanıcı, kullanmak istediği özelliği menüden seçebilecek:
  - Menü:
    - **Periyodik Tablo Bölümü**
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
    - **Search Bar Bölümü** (burada elementler listeli olarak gözükür, oradan element seçilebilir veya element aratılabilir)
    - **Tablo Özelliklerini Öğrenme Bölümü:** (bu bölümde yukarıdaki periyodik tablo özellikleri hakkında ayrı ayrı öğretici bölümler vardır)
    - **Quiz Bölümü** (Çeşitli quiz modları)
      - Çeşitli quiz modları olacak:
        - Level modu:
          - level1, level2, level3, level4 (kullanıcı levelleri bitirdikçe diğerlerinin kilidi açılır, elementler ile ilgili temel sorular)
        - Zamana karşı mod:
          - Süre ve soru zorluğu olarak çeşitli zorluk seçenekleri: kolay, orta, zor, imkansız...  (30 saniye, 1 dakika, ...)
      - Otomatik kayıt sistemi olacak, kullanıcı uygulamayı kapatsa bile yeniden açtığında kaldığı level'dan devam edebilecek.
      - Skor tutucu kullanıcının doğru bildiği element ve süreye göre bir skor verecek.
      - Skor rekoru ise tüm zamanların en yüksek skorunu verecek.
    - **Kimyasal Reaksiyon Denkleştirme Bölümü**
      - Ör: H20 + HCOOH input olarak girilir, sonuç gözükür.
    - **Daily Challanges Bölümü**
    - **Achievements Bölümü** (Quizlerle alakalı başarımlar)
      - örnek1: Level modunda 1 bölümü tamamlamak (olası başarım ismi: "Hiç fena değil.")
      - örnek2: Level modununu tamamlamak (olası başarım ismi: "ateş, su, toprak, tahta!")
      - örnek3: Zamana karşı modda imkansız zorluğu tamamlamak (olası başarım ismi: "Chemistery Master")
    - **Favoriler Bölümü** (elementler favori olarak eklenebilir ve bu bölümde gözükür)
    - **Settings Bölümü**
      - Themes
      - Report a bug

#### Olası Quiz Bölümü 1 (ZOR)
  - Kullanıcı quiz bölümüne girdiğinde 2 seçenek karşısına çıkacak: Hazır quizler ve Topluluk Quizleri.
    - Topluluk quizleri için yıldız verme sistemi olacak, quiz hazırlamak için kullanıcının giriş yapması gerekmektedir.

#### Olası Quiz Bölümü 2 (ZOR)
  - Kullanıcı quiz bölümüne girdiğinde 2 seçenek karşısına çıkacak: Hazır quizler ve Özel Quizler.
    - Daha önce biri (ör. bir öğretmen) quiz hazırlayacak ve bu hazırlanan quiz veri olarak sunucuda depolanacak, hazır link hazırlayana verilecek ve paylaştığı kişilere bu linki verip quiz çözdürebilecek

#### Olası Quiz Bölümü 3 (ORTA-ZOR)
  - Kullanıcı quiz bölümüne girdiğinde 2 seçenek karşısına çıkacak: Quizler ve Soru Hazırlayıcı.
    - Kullanıcı soru hazırlayıcıyı kullanarak kendi bilgisayarına indirmek üzere soru hazırlayabilecek (bu bölümün aktif olması için kullanıcıya başlangıçta kullanım amacı sorulabilir: öğrenci, öğretmen, kimya meraklısı. Kullanıcı öğretmeni seçerse buton aktif olabilir.

#### Olası Quiz Bölümü 4 (KOLAY)
  - Sadece hazır quizler olacak, kullanıcının karşısına modlar çıkacak: level modu, zamana karşı mod...

#### Quiz Bölümü İçin Notlar: 
- Veri tutmak için bulut sistemlerinden birinde server açılabilir: aws, gcs, microsoft azure vb.
- Server işine girersek temel düzeyde server öğrenmiş oluruz ve bu bize epey fayda salar fakat biraz zamanımızı alabilir.
- Server işine girmezsek kazandığımız zamanı GUI gelişimine harcayabiliriz.
- Oyun projesi geliştirenler oyun hakkında düşünerek çok zaman kaybediyorlar, biz ise bu zamanı proje detaylarına harcayarak çok güzel bir proje çıkartabiliriz.




-Kullanıcı, çeşitli seçeneklerle karşılaşacak: Hazır Quizler, Community Quizzes
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
    - İzotopları gösterme butonu olacak( Elementin Izotoplarını göstermek için buton)
    - Olası bileşikleri gösterme butonu olacak (seçilen elemente olası bileşik örnekleri verir)
- Kullanıcı, seçtiği özelliğe bağlı olarak elementleri periyodik tablo üzerinden görebilecek.
- Kullanıcı, seçtiği özelliğe bağlı olarak elementlerin sıralamasını görebilecek ( ör. en radyoaktif elementten en aza doğru sıralama)

# Non-Functional Requirements

# Notes

- görseller için images-of-elements.com
- Element özellikleri nested olarak olacak
- 

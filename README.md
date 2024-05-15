Kitap Sistemi

Bu proje, bir kitap sistemi oluşturmayı amaçlamaktadır. Kullanıcılar, kitap ekleyebilir, kitap bilgilerini güncelleyebilir ve kitapları silebilirler. Proje, C programlama dili ile yazılmıştır ve terminal üzerinden çalıştırılabilir.
İçindekiler

    Özellikler
    Kullanılan Veri Yapıları
    Fonksiyonlar
    Nasıl Çalıştırılır
    Örnek Kullanım

Özellikler

    Kitap Ekleme: Kullanıcı, kitap adı, yazar adı ve numara bilgilerini girerek yeni bir kitap ekleyebilir.
    Kitap Güncelleme: Kullanıcı, kitap numarasını girerek, mevcut bir kitabın adını ve yazarını güncelleyebilir.
    Kitap Silme: Kullanıcı, kitap numarasını girerek bir kitabı silebilir.

Kullanılan Veri Yapıları

c

#define MAX_KITAP 100
#define MAX_STR 258

typedef struct {
    char kitapAdi[MAX_STR];
    char yazarAdi[MAX_STR];
    int numara;
    int varMi; // Kitap var mı yok mu kontrolü için.
} Kitap;

Kitap kitaplar[MAX_KITAP];

Bu yapı, kitapları saklamak için kullanılır. MAX_KITAP sabiti, maksimum kitap sayısını belirtir. MAX_STR sabiti, kitap ve yazar adlarının maksimum uzunluğunu belirtir. varMi alanı, kitabın var olup olmadığını kontrol etmek için kullanılır.
Fonksiyonlar
kitapEkle()

Kullanıcıdan kitap adı, yazar adı ve numara bilgilerini alır ve kitaplar dizisine ekler. Eğer kitaplar dizisinde boş bir yer bulunamazsa, bir hata mesajı verir.
kitapGuncelle()

Kullanıcıdan güncellenecek kitabın numarasını alır ve o numaraya sahip kitabı bulup adını ve yazarını günceller. Eğer kitap bulunamazsa, bir hata mesajı verir.
kitapSil()

Kullanıcıdan silinecek kitabın numarasını alır ve o numaraya sahip kitabı bulup siler (varMi alanını 0 yapar). Eğer kitap bulunamazsa, bir hata mesajı verir.
main()

Kullanıcıya bir menü sunar ve seçilen işlemi gerçekleştirir. Geçersiz bir seçim yapıldığında, hata mesajı gösterir.
Nasıl Çalıştırılır

    Kodu bir dosyaya kaydedin (örneğin kitap_sistemi.c).
    Bir terminal açın ve dosyanın bulunduğu dizine gidin.
    Aşağıdaki komut ile derleyin:

    sh

gcc kitap_sistemi.c -o kitap_sistemi

Programı çalıştırmak için aşağıdaki komutu kullanın:

sh

    ./kitap_sistemi

Örnek Kullanım

Program çalıştırıldığında, aşağıdaki gibi bir menü göreceksiniz:

Kitap Sistemine Hoş Geldiniz

1-Kitap Ekle
2-Kitap Güncelle
3-Kitap Sil
Bir Seçenek Seçin:

    Kitap Ekleme:
        1 seçeneğini girin.
        Kitap adı, yazar adı ve numarasını girin.
        Örneğin:

        yaml

    Kitap Adı: Sefiller
    Yazar Adı: VictorHugo
    Kitaba bir numara verin: 1

Kitap Güncelleme:

    2 seçeneğini girin.
    Güncellenecek kitabın numarasını girin.
    Yeni kitap adı ve yazar adını girin.
    Örneğin:

    Güncellenecek kitap numarası: 1
    Yeni Kitap Adı: Sefiller
    Yeni Yazar Adı: VictorHugo

Kitap Silme:

    3 seçeneğini girin.
    Silinecek kitabın numarasını girin.
    Örneğin:

        Silinecek kitap numarası: 1

Program bu şekilde kullanıcıdan aldığı bilgilere göre işlemleri gerçekleştirir ve uygun mesajları ekrana basar.

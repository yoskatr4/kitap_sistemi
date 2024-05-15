#include <stdio.h>
#include <string.h>

#define MAX_KITAP 100
#define MAX_STR 258

typedef struct {
    char kitapAdi[MAX_STR];
    char yazarAdi[MAX_STR];
    int numara;
    int varMi; // Kitap var mı yok mu kontrolü için.
} Kitap;

Kitap kitaplar[MAX_KITAP];

void kitapEkle() {
    char kitapAdi[MAX_STR] = "";
    char yazarAdi[MAX_STR] = "";
    int numara;

    printf("Kitap Adı: ");
    scanf("%s", kitapAdi);
    printf("Yazar Adı: ");
    scanf("%s", yazarAdi);
    printf("Kitaba bir numara verin: ");
    scanf("%d", &numara);

    // Kitabı diziye ekle
    for (int i = 0; i < MAX_KITAP; i++) {
        if (!kitaplar[i].varMi) { // Boş bir yer bul
            strcpy(kitaplar[i].kitapAdi, kitapAdi);
            strcpy(kitaplar[i].yazarAdi, yazarAdi);
            kitaplar[i].numara = numara;
            kitaplar[i].varMi = 1; // Kitabın var olduğunu işaretle
            printf("%s isimli yazarın %s isimli kitap %d numarası ile eklendi\n", yazarAdi, kitapAdi, numara);
            return;
        }
    }

    printf("Kitap listesi dolu!\n");
}

void kitapGuncelle() {
    int numara;
    printf("Güncellenecek kitap numarası: ");
    scanf("%d", &numara);

    for (int i = 0; i < MAX_KITAP; i++) {
        if (kitaplar[i].varMi && kitaplar[i].numara == numara) {
            printf("Yeni Kitap Adı: ");
            scanf("%s", kitaplar[i].kitapAdi);
            printf("Yeni Yazar Adı: ");
            scanf("%s", kitaplar[i].yazarAdi);
            printf("Kitap bilgileri güncellendi.\n");
            printf("Kitap adı : %s\nYazar : %s\n",kitaplar[i].kitapAdi,kitaplar[i].yazarAdi);
            return;
        }
    }

    printf("Kitap numarası bulunamadı!\n");
}

void kitapSil() {
    int numara;
    printf("Silinecek kitap numarası: ");
    scanf("%d", &numara);

    for (int i = 0; i < MAX_KITAP; i++) {
        if (kitaplar[i].varMi && kitaplar[i].numara == numara) {
            kitaplar[i].varMi = 0; // Kitabı sil
            printf("Kitap silindi.\n");
            return;
        }
    }

    printf("Kitap numarası bulunamadı!\n");
}

int main() {
    int i = 1;
    while (i == 1) {
        printf("Kitap Sistemine Hoş Geldiniz\n\n1-Kitap Ekle\n2-Kitap Güncelle\n3-Kitap Sil\nBir Seçenek Seçin: ");
        int secim;
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                kitapEkle();
                break;
            case 2:
                kitapGuncelle();
                break;
            case 3:
                kitapSil();
                break;
            default:
                printf("Geçersiz seçim!\n");
                break;
        }
    }

    return 0;
}

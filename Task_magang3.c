#include <stdio.h>
#include <stdint.h>

// =======================
// Kasus 1: Penjumlahan Variabel
// =======================
void kasus1() {
    int a = 1, b = 2;
    int calculate;

    // Operasi penjumlahan
    calculate = a + b; // a=1, b=2, calculate = 3
    printf("Kasus 1: Hasil penjumlahan a dan b adalah: %d\n", calculate);

    // Modifikasi nilai a
    a = a + 1; // a sekarang bernilai 2
    printf("Kasus 1: Nilai a setelah ditambah 1 adalah: %d\n\n", a);
}

// =======================
// Kasus 2: Input dan Output Variabel
// =======================
void kasus2() {
    int integer1;
    printf("Kasus 2: Masukkan sebuah bilangan bulat: ");
    scanf("%d", &integer1); // Mengambil input dan menyimpannya ke integer1
    printf("Kasus 2: Bilangan yang Anda masukkan adalah: %d\n\n", integer1);
}

// =======================
// Kasus 3: Ukuran Memori dan Tipe Data
// =======================
void kasus3() {
    uint8_t eightBitVariable = 250; // Memakai 8-bit memori
    unsigned int unsignedInt = 255; // Standar 32-bit untuk unsigned int
    printf("Kasus 3: eightBitVariable: %d, ukuran memori: %lu bytes\n", eightBitVariable, sizeof(eightBitVariable));
    printf("Kasus 3: unsignedInt: %u, ukuran memori: %lu bytes\n\n", unsignedInt, sizeof(unsignedInt));
}

// =======================
// Kasus 4: Operasi Float dan Pembagian
// =======================
void kasus4() {
    float floatValue1 = 20.0f;
    float floatValue2 = 30.0f;
    float dividedValue = floatValue1 / floatValue2; // 20 / 30 = 0.666...
    printf("Kasus 4: Hasil pembagian %.2f / %.2f adalah: %.2f\n\n", floatValue1, floatValue2, dividedValue);
}

// =======================
// Kasus 5: Manipulasi String dan Karakter
// =======================
void kasus5() {
    char stringArray[][6] = {"Arund", "Taib", "Anton"}; // Array string dengan elemen tetap
    printf("Kasus 5: Nama ketiga pada array string adalah: %s\n", stringArray[2]);

    // Menampilkan setiap karakter dalam string
    printf("Kasus 5: Karakter-karakter dalam nama ketiga:\n");
    for (int i = 0; stringArray[2][i] != '\0'; i++) { // Iterasi hingga null terminator
        printf("%c ", stringArray[2][i]);
    }
    printf("\n\n");
}

// =======================
// Kasus 6: Operasi Aritmatika
// =======================
void kasus6() {
    int a = 5, b = 2;
    printf("Kasus 6: Operasi Aritmatika\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n\n", a, b, a % b);
}

// =======================
// Kasus 7: Operasi Bitwise
// =======================
void kasus7() {
    unsigned int a = 5, b = 9;
    printf("Kasus 7: Operasi Bitwise\n");
    printf("a & b = %u\n", a & b);
    printf("a | b = %u\n", a | b);
    printf("a ^ b = %u\n", a ^ b);
    printf("~a = %u\n", ~a);
    printf("b << 1 = %u\n", b << 1);
    printf("b >> 1 = %u\n\n", b >> 1);
}

// =======================
// Kasus 8: Percabangan
// =======================
void kasus8() {
    int nilai;
    printf("Kasus 8: Percabangan\n");
    printf("Masukkan nilai ujian: ");
    scanf("%d", &nilai);

    if (nilai >= 80) {
        printf("Nilai : A\n");
    } else if (nilai >= 70) {
        printf("Nilai : B\n");
    } else if (nilai >= 60) {
        printf("Nilai : C\n");
    } else {
        printf("Nilai : D\n");
    }
    printf("\n");
}

// =======================
// Kasus 9: Perulangan dan Sorting
// =======================
void kasus9() {
    int arr[5] = {10, 2, 5, 11, 3};
    int tmp;

    printf("Kasus 9: Perulangan dan Sorting (Bubble Sort)\n");
    printf("Array sebelum sorting: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    printf("Array setelah sorting: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

// =======================
// Kasus 10: Switch Case
// =======================
void kasus10() {
    int hari;
    printf("Kasus 10: Switch Case\n");
    printf("Masukkan angka (1-7) untuk memilih hari: ");
    scanf("%d", &hari);

    switch (hari) {
        case 1:
            printf("Hari Senin\n");
            break;
        case 2:
            printf("Hari Selasa\n");
            break;
        case 3:
            printf("Hari Rabu\n");
            break;
        case 4:
            printf("Hari Kamis\n");
            break;
        case 5:
            printf("Hari Jumat\n");
            break;
        case 6:
            printf("Hari Sabtu\n");
            break;
        case 7:
            printf("Hari Minggu\n");
            break;
        default:
            printf("Hari tidak valid\n");
            break;
    }
    printf("\n");
}

int main() {
    // Menjalankan semua kasus secara berurutan
    kasus1();
    kasus2();
    kasus3();
    kasus4();
    kasus5();
    kasus6();
    kasus7();
    kasus8();
    kasus9();
    kasus10();

    return 0;
}
// End of program
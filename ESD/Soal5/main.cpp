#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int hitungKombinasiUsername(const string& namaLengkap) {
    int panjangNama = namaLengkap.length();
    int jumlahKombinasi = 0;

    for (int i = 0; i < pow(2, panjangNama); ++i) {
        string username = "";
        for (int j = 0; j < panjangNama; ++j) {
            if (i & (1 << j)) {
                char karakter = tolower(namaLengkap[j]);
                if (karakter != ' ') {
                    username += karakter;
                }
            }
        }

        if (username.length() > 0 && username.length() <= 6) {
            jumlahKombinasi++;
        }
    }
    return jumlahKombinasi;
}

int main() {
    string namaLengkap = "Naip Lovyu";
    int jumlahKombinasi = hitungKombinasiUsername(namaLengkap);
    printf("Jumlah kombinasi username yang mungkin: %d\n", jumlahKombinasi);

    return 0;
}

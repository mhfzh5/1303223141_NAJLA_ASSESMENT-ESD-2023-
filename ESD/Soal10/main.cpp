#include <iostream>

using namespace std;

void hitungKembalian(int totalPembayaran, int totalBelanja) {
    cout << "{ ";
    const int pecahan[] = {100000, 50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100};
    const int jumlahPecahan = sizeof(pecahan) / sizeof(pecahan[0]);

    int selisih = totalPembayaran - totalBelanja;

    for (int i = 0; i < jumlahPecahan; ++i) {
        int jumlahPecahan = selisih / pecahan[i];

        if (jumlahPecahan > 0) {
            cout << "\"" << pecahan[i] << "\" : " << jumlahPecahan;
            selisih %= pecahan[i];

            if (selisih > 0) {
                cout << ", ";
            }
        }
    }

    cout << " }\n";
}

int main() {
    hitungKembalian(10000, 7500);
    hitungKembalian(5000, 1100);
    hitungKembalian(178000, 90500);

    return 0;
}

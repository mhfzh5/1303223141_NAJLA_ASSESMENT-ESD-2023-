#include <iostream>
#include <string>

using namespace std;

int main() {
    // Urutan kedatangan tamu
    string guests[] = {"Ningguang", "Hutao", "Xiao", "Childe"};

    // Kebiasaan unik setiap tamu
    bool cakeChecked = false;  // Kue belum diperiksa oleh siapapun
    bool giftGiven = false;    // Tidak ada yang memberikan kado
    bool photoTaken = false;   // Foto belum diambil oleh Xiao
    bool waterPlaced = false;  // Air mineral belum diletakkan oleh Childe

    int i = 0;
    while (i < sizeof(guests) / sizeof(guests[0])) {
        const string& guest = guests[i];

        if (guest == "Ningguang") {
            cakeChecked = true;
        } else if (guest == "Hutao") {
            giftGiven = true;
        } else if (guest == "Xiao") {
            photoTaken = true;
        } else if (guest == "Childe") {
            waterPlaced = true;
        }

        ++i;
    }

    // Menentukan siapa yang paling mungkin mengambil kue
    string culprit = "Tidak Ada Informasi";
    if (!cakeChecked) {
        culprit = "Ningguang";
    } else if (!giftGiven) {
        culprit = "Hutao";
    } else if (!photoTaken) {
        culprit = "Xiao";
    } else if (!waterPlaced) {
        culprit = "Childe";
    }

    // Menampilkan hasil
    cout << "Yang paling mungkin mengambil kue: " << culprit << endl;

    return 0;
}

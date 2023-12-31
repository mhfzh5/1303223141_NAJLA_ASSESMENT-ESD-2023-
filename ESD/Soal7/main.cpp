#include <iostream>
#include <iterator>

using namespace std;

string pindah(string pesan) {
    string hasilDeskripsi = "";

    // Inisialisasi iterator untuk perulangan while
    string::iterator it = pesan.begin();

    // Loop menggunakan while
    while (it != pesan.end()) {
        char karakter = *it;

        if (isalpha(karakter)) {
            char hurufDeskripsi = karakter - 5;

            if((isupper(karakter) && hurufDeskripsi < 'A') || (islower(karakter) && hurufDeskripsi < 'a')) {
                hurufDeskripsi += 26;
            }
            hasilDeskripsi += hurufDeskripsi;
        } else {
            hasilDeskripsi += karakter;
        }

        // Pindah ke iterasi berikutnya
        ++it;
    }

    return hasilDeskripsi;
}

int main() {
    cout << pindah("xfqfr bfmdz") << endl;
    cout << pindah("gjxtp lzj rfz ifkyfw jxi snm") << endl;
    cout << pindah("gwt, gjxtp qz rfz rfpfs in bfwlty lfp?") << endl;
    cout << pindah("fpz xfdfsl pfrz, rfz lfp ofin ufhfwpz") << endl;
    cout << pindah("dfsl pnwnr xynhpjw otrtp pz pnhp ifwn lwzu") << endl;

    return 0;
}

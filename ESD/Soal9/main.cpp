#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menentukan anak yang paling banyak disebut
string findMostMentionedKid(string kids[], int n) {
    string mostMentionedKid = "";
    int maxMentions = 0;

    // Menghitung jumlah penyebutan setiap anak
    for (int i = 0; i < n; ++i) {
        int mentions = 1;  // Setidaknya satu kali penyebutan untuk setiap anak
        for (int j = i + 1; j < n; ++j) {
            if (kids[i] == kids[j]) {
                mentions++;
            }
        }

        // Memeriksa apakah anak tersebut lebih banyak disebut
        if (mentions > maxMentions) {
            maxMentions = mentions;
            mostMentionedKid = kids[i];
        } else if (mentions == maxMentions) {
            mostMentionedKid += " dan " + kids[i];
        }
    }

    // Menampilkan hasil
    if (maxMentions == 1) {
        return "Semuanya anak baik";
    } else {
        return mostMentionedKid + " Nackal";
    }
}

int main() {
    string kids[] = {"Bagas", "Dimas", "Bagas", "Bagas", "Bagas", "Indra", "Gilang", "Gilang", "Hana", "Fajar", "Fajar"};
    cout << findMostMentionedKid(kids, sizeof(kids) / sizeof(kids[0])) << endl;
    string kids1[] = {"Bagas", "Dimas", "Fajar", "Bagas", "Indra", "Gilang", "Gilang", "Bagas", "Fajar", "Fajar"};
    cout << findMostMentionedKid(kids1, sizeof(kids1) / sizeof(kids1[0])) << endl;
    string kids2[] = {"Bagas", "Dimas", "Bagas", "Bagas", "Bagas", "Indra", "Gilang", "Gilang", "Hana", "Fajar", "Fajar"};
    cout << findMostMentionedKid(kids2, sizeof(kids2) / sizeof(kids2[0])) << endl;
    string kids3[] = {"Aisyah", "Bagas", "Dewi", "Dimas", "Eka", "Fajar", "Gilang", "Hana", "Indra", "Jihan"};
    cout << findMostMentionedKid(kids3, sizeof(kids3) / sizeof(kids3[0])) << endl;

    return 0;
}

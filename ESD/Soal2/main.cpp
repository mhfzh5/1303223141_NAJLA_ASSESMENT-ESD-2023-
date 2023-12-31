#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string S) {
    string P = S;

    // Menghapus spasi dari string
    S.erase(remove_if(S.begin(), S.end(), ::isspace), S.end());
    P.erase(remove_if(P.begin(), P.end(), ::isspace), P.end());
    // Menghapus tanda baca
    S.erase(remove_if(S.begin(), S.end(), ::ispunct), S.end());
    P.erase(remove_if(P.begin(), P.end(), ::ispunct), P.end());
    //Konversi semua karakter menjadi huruf kecil
    transform(S.begin(), S.end(), S.begin(), ::tolower);
    transform(P.begin(), P.end(), P.begin(), ::tolower);

    reverse(P.begin(), P.end());

    if(S == P) {
        return "eureeka!";
    } else {
        return "suka blyat";
    }
}

int main()
{
    string S;
    getline(cin, S);
    cout << isPalindrome(S);
    return 0;
}

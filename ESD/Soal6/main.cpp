#include <iostream>
using namespace std;

int countPrice(int AGK, int APP, int AB, int ET, int EJ) {
    AGK = AGK*15000 + (5/100)*(AGK*15000);
    APP = (APP*13000) + (5/100)*(APP*13000);
    AB = (AB*20000) + (5/100)*(AB*20000);
    ET = (ET*5000) + (3/100)*(ET*5000);
    EJ = (EJ*7000) + (3/100)*(EJ*7000);
    int total = AGK+APP+AB+ET+EJ;
    return total + (15/100)*total;
}

int main() {
    printf("Rehan Whangsap \t: %d\n", countPrice(0,0,2,1,0));
    printf("Amba Roni \t: %d\n", countPrice(0,1,0,1,0));
    printf("Faiz Ngawi \t: %d\n", countPrice(1,1,1,1,1));

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

// Struktur data untuk menyimpan informasi produk
struct Product {
    string name;
    string category;
    int price;
};

// Struktur data untuk menyimpan informasi pelanggan dan minat mereka
struct Customer {
    string name;
    string interests[2]; // Maksimal 2 minat per pelanggan
};

// Fungsi untuk memberikan rekomendasi produk berdasarkan minat pelanggan
void getRecommendedProducts(const Customer& customer, const Product products[], int productsSize) {
    cout << "Rekomendasi produk untuk " << customer.name << ": [";

    int i = 0;
    while (i < sizeof(customer.interests) / sizeof(customer.interests[0])) {
        int j = 0;
        while (j < productsSize) {
            if (products[j].category == customer.interests[i]) {
                cout << "\"" << products[j].name << "\"";
                if (i < sizeof(customer.interests) / sizeof(customer.interests[0]) - 1) {
                    cout << ", ";
                }
            }
            ++j;
        }
        ++i;
    }

    cout << "]" << endl;
}

int main() {
    // Data pelanggan dan minat mereka
    Customer customers[] = {
        {"Rina", {"elektronik", "musik"}},
        {"Budi", {"fashion", "musik"}},
        {"Hartono", {"olahraga", "elektronik"}}
    };

    // Data produk
    Product products[] = {
        {"TV", "elektronik", 1000},
        {"headphone", "elektronik", 200},
        {"baju", "fashion", 50},
        {"gitar", "musik", 300},
        {"sepatu", "olahraga", 80},
        {"kamera", "elektronik", 600}
    };

    // Memperoleh rekomendasi produk untuk setiap pelanggan
    int idx = 0;
    while (idx < sizeof(customers) / sizeof(customers[0])) {
        getRecommendedProducts(customers[idx], products, sizeof(products) / sizeof(products[0]));
        ++idx;
    }

    return 0;
}

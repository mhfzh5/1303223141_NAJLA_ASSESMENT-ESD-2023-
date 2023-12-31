#include <iostream>
using namespace std;

void calculateStats(float X[], int size, float &rendah, float &tinggi, float &average) {
    rendah = X[0]; tinggi = X[0]; average = 0;

    for (int i = 0; i < size; i++) {
        if (X[i] < rendah) {
            rendah = X[i];
        }
        if (X[i] > tinggi) {
            tinggi = X[i];
        }
        average += X[i];
    }

    average /= size;
}

int main()
{
    float rendah, tinggi, average;

    float X[10] = {4.5, 2.0, 1.5, 3.0, 2.5, 4.0, 5.0, 3.5, 2.0, 1.0};
    calculateStats(X, sizeof(X) / sizeof(X[0]), rendah, tinggi, average);
    printf("[%.1f, %.1f, %.1f]\n",rendah,tinggi,average);

    float P[10] = {5,4,2.5,5,3.6,1.1,3.6,4,4.2,1.5};
    calculateStats(P, sizeof(P) / sizeof(P[0]), rendah, tinggi, average);
    printf("[%.1f, %.1f, %.1f]\n",rendah,tinggi,average);

    return 0;
}

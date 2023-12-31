#include <iostream>
using namespace std;

bool cekDuplicate (int *arr, int length) {
    for(int i=0; i<length; i++) {
        for(int j=i+1; j<length; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr [21] = {20,1,3,2,4,6,8,5,7,9,11,13,15,10,12,14,16,18,20,17,19};
    int length = sizeof(arr)/sizeof(arr[0]);
    cout << boolalpha << cekDuplicate(arr, length);
    return 0;
}

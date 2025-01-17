#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 5, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

   
    unordered_map<int, int> freq;


    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Pairs with |a[i] - a[j]| = " << k << " are:" << endl;

    for (int i = 0; i < n; i++) {
        if (freq[arr[i] + k] > 0) {
            cout << "(" << arr[i] << ", " << arr[i] + k << ")" << endl;
        }
     
        if (freq[arr[i] - k] > 0) {
            cout << "(" << arr[i] << ", " << arr[i] - k << ")" << endl;
        }
        freq[arr[i]]--;
    }

    return 0;
}

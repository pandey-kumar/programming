#include<iostream>
#include<climits> // For INT_MIN
using namespace std;

int main() {
    int arr[] = {2, -4, 1, 5, 1, 2, 6, -8, 7, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int cSum = 0; 
    int mSum = INT_MIN; 

    for (int i = 0; i < n; i++) {
        cSum += arr[i];
        if (cSum > mSum) {
            mSum = cSum; 
        }
        if (cSum < 0) {
            cSum = 0; 
        }
    }

    cout << "Maximum Subarray Sum: " << mSum << endl;

    return 0;
}

#include <iostream>
using namespace std;

int countInversions(int arr[], int size) {
    int inversions = 0;
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
                inversions++;
            }
        }
    }
    
    return inversions;
}

int main() {
    int arr[] = {7, 2, 6, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"\n";
    cout << "Number of inversions: " << countInversions(arr, size) << endl;
    return 0;
}

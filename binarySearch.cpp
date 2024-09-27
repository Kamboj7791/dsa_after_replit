#include<iostream>
using namespace std;

int BinarySearch(int arr[], int key, int n) {
    int start = 0;
    int end = n - 1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int even[6] = {2,4,6,8,10,12};
    int odd[6] = {1,3,5,7,9,11};
    int result = BinarySearch(even, 8, 6);
    cout << "index is " << result << endl;
    return 0;
}
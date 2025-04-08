#bruteforce
#include <iostream>
#include <vector>
using namespace std;

// Pass-by-reference: modifies the original vector
void reverseVector(vector<int>& arr) {
    int start = 0, end = arr.size() - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Pass-by-value: works on a copy (original vector unchanged)
void printVector(vector<int> arr) {
    for (int num : arr) {
        cout << num << " ";
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    reverseVector(nums); // Original vector is reversed
    printVector(nums);   // Output: 4 3 2 1
    return 0;
}

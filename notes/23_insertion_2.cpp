#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = temp;
    }
}

int main() {
    vector<int> numbers = {5, 2, 8, 12, 1, 6, 3};
    
    cout << "Before sorting: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    
    insertionSort(numbers);
    
    cout << "\nAfter sorting: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    
    return 0;
}

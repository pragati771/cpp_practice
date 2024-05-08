#include <iostream>
using namespace std;

// Function to rotate the elements of an array to the left by a given number of positions
void rotateLeft(int arr[], int size, int positions) {
    // Ensure positions is within array size
    positions = positions % size;
    cout<<positions<<endl;
    
    // Rotate the elements
    for (int i = 0; i < positions; i++) {
        int temp = arr[0];
        for (int j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
}

int main() {
    int size, positions;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the number of positions to rotate left: ";
    cin >> positions;
    
    // Rotate the array to the left by the specified number of positions
    rotateLeft(arr, size, positions);
    
    cout << "Array after rotating left by " << positions << " positions: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}


#include <iostream>

using namespace std;

int main() {
    int size; // No hardcoded value
    cout << "Please enter the number of salaries: ";
    cin >> size;
    int *salArray = new int[size];
    
    
    // Input salaries
    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i + 1) << ": ";
        cin >> *(salArray + i); // We need to dereferance the pointer to access the memory block
    }

    // Apply increment formula
    for (int i = 0; i < size; i++) {
        *(salArray + i) += *(salArray + i) / (i + 1);
    }

    // Display updated salaries
    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++) {
        cout << *(salArray + i) << " ";
    }
    // Free allocated memory
    delete [] salArray;
    cout << endl;
    return 0;
}

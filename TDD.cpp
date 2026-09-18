#include <iostream>
#include <cassert>

using namespace std;

bool isSorted(const int* arr, const int size) {
    if (size <= 1) {
        return true;
    }
    for (int i = 0; i < size - 1; i++) {
        if (*(arr + i) > *(arr + i + 1)) {
            return false;
        }
    }

    return true;
}

// PART 1: Write the Tests First
// 1. An array already sorted in ascending order
void testSortedArray() {
    int arr[] = { 1, 2, 3, 4, 5 };
    assert(isSorted(arr, 5) == true);
}

// 2. An unsorted array
void testUnsortedArray() {
    int arr[] = { 1, 4, 3, 5, 6 };
    assert(isSorted(arr, 5) == false);
}

// 3. A sorted array containing duplicate values
void testDuplicateValues() {
    int arr[] = { 1, 2, 2, 3, 5 };
    assert(isSorted(arr, 5) == true);
}

// 4. An array containing only one element
void testSingleElement() {
    int arr[] = { 10 };
    assert(isSorted(arr, 1) == true);
}

// 5. An array sorted in descending order
void testDescendingArray() {
    int arr[] = { 5, 4, 3, 2, 1 };
    assert(isSorted(arr, 5) == false);
}

// 6. An array containing negative values
void testNegativeValues() {
    int arr[] = { -5, -3, -1, 0, 2 };
    assert(isSorted(arr, 5) == true);
}

// 7.1. User-Designed Case 1: Empty Array
void testEmptyArray() {
    int* arr = nullptr; // Empty arr case
    assert(isSorted(arr, 0) == true);
}

// 7.2. User-Designed Case 2: All identical elements
void testAllIdentical() {
    int arr[] = { 7, 7, 7, 7 };
    assert(isSorted(arr, 4) == true);
}


int main() {
    cout << "Starting TDD Tests\n" << endl;

    testSingleElement();
    cout << "test single_element ran succesfully\n";
    system("pause");

    testSortedArray();
    cout << "test sorted_array ran succesfully\n";
    system("pause");

    testDuplicateValues();
    cout << "test duplicate_values ran succesfully\n";
    system("pause");

    testUnsortedArray();
    cout << "test unsorted_array ran succesfully\n";
    system("pause");

    testDescendingArray();
    cout << "test decesding_order ran succesfully\n";
    system("pause");

    testNegativeValues();
    cout << "test negative_values ran succesfully\n";
    system("pause");

    testEmptyArray();
    cout << "test empty_array ran succesfully\n";
    system("pause");

    testAllIdentical();
    cout << "test identical_array ran succesfully\n";
    system("pause");

    cout << "\nAll TDD tests done successfully!" << endl;
    return 0;
}
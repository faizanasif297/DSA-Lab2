#include <iostream>
using namespace std;

void analyze_pointer(int* ptr) {
    // Incase the pointer passes is a null pointer
    if (ptr == nullptr) {
        cout << "Pointer is null." << endl;
        return;
    }
    /* Printing to console the address and value of memory block
       that the pointer is pointing to */
    cout << "Memory Location (Address): " << ptr << endl;
    cout << "Value Pointed To:          " << *ptr << "\n" << endl;
}

int main()
{
    // Stack int value initialization and passing to func
    int iValue = 2349;
    analyze_pointer(&iValue);
    // Heap int vlaue initialization and passing to func
    int* heapPtr = new int;
    *heapPtr = 10;
    analyze_pointer(heapPtr);
    // Freeing memory resources after use
    delete heapPtr;
    heapPtr = nullptr;
    system("pause");
    return 0;
}

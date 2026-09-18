#include <iostream>
#include <string>

using namespace std;

int main() {
    // Dynamically allocating memory
    string *dynamicString = new string;

    // Get input from the user
    cout << "Enter a string to reverse: ";
    // getline instead of cin to not truncate string incase space is typed
    getline(cin, *dynamicString);
    
    int length = (*dynamicString).length();

    for (int i = 0; i < length / 2; i++) {
        // Temporary variable for holding the character while swapping
        char temp = (*dynamicString)[i];
        (*dynamicString)[i] = (*dynamicString)[length - 1 - i];
        (*dynamicString)[length - 1 - i] = temp;
    }

    // Displaying the reversed result
    cout << "Reversed string: " << *dynamicString << endl;

    // Free the allocated memory and clear the pointer
    delete dynamicString;
    dynamicString = nullptr;
    system("pause");
    return 0;
}

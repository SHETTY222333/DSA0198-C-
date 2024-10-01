#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numberList;  // Create a vector to store integers
    int number, moreNumbers;

    // Insert the first number
    cout << "Enter a number: ";
    cin >> number;
    numberList.push_back(number);  // Add the first number to the vector

    // Option to insert more numbers
    cout << "How many more numbers would you like to insert? ";
    cin >> moreNumbers;

    // Insert additional numbers into the list
    for (int i = 0; i < moreNumbers; ++i) {
        cout << "Enter another number: ";
        cin >> number;
        numberList.push_back(number);  // Add the number to the vector
    }

    // Display the list of inserted numbers
    cout << "Numbers in the list: ";
    for (int i = 0; i < numberList.size(); ++i) {
        cout << numberList[i] << " ";  // Print each number in the list
    }
    cout << endl;

    return 0;
}

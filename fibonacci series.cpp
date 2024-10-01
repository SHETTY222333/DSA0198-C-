#include <iostream>
using namespace std;

int main() {
    int terms;
    
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> terms;
 
    if (terms <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        unsigned long long first = 0, second = 1, next;
       
        cout << "Fibonacci series up to " << terms << " terms:" << endl;

        for (int i = 1; i <= terms; ++i) {
            if (i == 1) {
                cout << first << " ";
            } else if (i == 2) {
                cout << second << " ";
            } else {
                next = first + second;
                first = second;
                second = next;
                cout << next << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

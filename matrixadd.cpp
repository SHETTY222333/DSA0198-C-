#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    // Input elements for the first matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Adding two matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }

    // Display the result
    cout << "Resultant matrix after addition:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

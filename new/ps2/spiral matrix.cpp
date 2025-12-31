#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int matrix[10][10];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    cout << "Spiral order: ";

    while (top <= bottom && left <= right) {

        // Left to Right
        for (int i = left; i <= right; i++)
            cout << matrix[top][i] << " ";
        top++;

        // Top to Bottom
        for (int i = top; i <= bottom; i++)
            cout << matrix[i][right] << " ";
        right--;

        // Right to Left
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                cout << matrix[bottom][i] << " ";
            bottom--;
        }

        // Bottom to Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << matrix[i][left] << " ";
            left++;
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int matrix[3][3];

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right) {

        // Left to Right
        for (int i = left; i <= right; i++)
            matrix[top][i] = num++;
        top++;

        // Top to Bottom
        for (int i = top; i <= bottom; i++)
            matrix[i][right] = num++;
        right--;

        // Right to Left
        for (int i = right; i >= left; i--)
            matrix[bottom][i] = num++;
        bottom--;

        // Bottom to Top
        for (int i = bottom; i >= top; i--)
            matrix[i][left] = num++;
        left++;
    }

    // Print Matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;

int diagonalDifference(const vector<vector<int>>& arr) {
    int n = arr.size();
    int primarySum = 0;
    int secondarySum = 0;

    for (int i = 0; i < n; i++) {
        primarySum += arr[i][i];               // Elements: [0][0], [1][1], [2][2]...
        secondarySum += arr[i][n - 1 - i];     // Elements: [0][n-1], [1][n-2], [2][n-3]...
    }

    return std::abs(primarySum - secondarySum);
}

int main() {
    // Example 3x3 Matrix
    vector<vector<int>> matrix = {
        {11, 2, 4},
        {4, 5, 6},
        {10, 8, -12}
    };

    int result = diagonalDifference(matrix);
    cout << "Absolute Diagonal Difference: " << result << endl;

    return 0;
}

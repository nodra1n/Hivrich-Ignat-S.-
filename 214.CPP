// 54.	Дана строка. Если символы в ней упорядочены по алфавиту,
#include <iostream>
#include <vector>
using namespace std;
int main() {
int n, m;
cout << "Enter the number of rows: ";
cin >> n;
cout << "Enter the number of columns: ";
cin >> m;
const int N = n; const int M = m;
int matrix[N][M];

    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) {
            matrix[i][j] = 0;
        }
        cout << "\n";
    }

    if (N > 1 && M > 1) {
        matrix[0][0] = 1;
        matrix[0][M - 1] = 1;
        matrix[N - 1][0] = 1;
        matrix[N - 1][M - 1] = 1;
    }

    cout << "The resulting matrix is:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
return 0;

}
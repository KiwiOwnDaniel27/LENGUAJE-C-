#include <iostream>

using namespace std;

int main() {
    int fil, col;
    cout << "Filas: ";
    cin >> fil;
    cout << "Columnas: ";
    cin >> col;

    int m[fil][col];
    int traza = 0;

    for (int i = 0; i < fil; i++) {
        cout << " Fila " << i + 1 << ":" << endl;

        for (int j = 0; j < col; j++) {
            cout << "(" << j + 1 << "/" << col << "): ";
            cin >> m[i][j];

            if (i == j) {
                traza += m[i][j];
            }
        }
    }

    cout << "Traza: " << traza << endl;

    return 0;
}

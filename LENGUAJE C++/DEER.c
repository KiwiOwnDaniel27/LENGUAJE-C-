#include <iostream>
#include<conio.h>

int main() {
    int numbers[10];
    int sum = 0;
    int count = 0;


    cout << "Ingrese 10 n�meros enteros:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 3 == 0) {
            sum += numbers[i];
            count++;
        }
    }

    cout << "Suma total: " << sum << endl;
    cout << "N�mero de veces que se realiz� la suma: " << count << endl;

    return 0;
}

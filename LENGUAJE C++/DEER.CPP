#include <iostream>

using namespace std;

int main()
{
    int numbers[10];
    int sum = 0;
    int count = 0;


    cout << "Ingrese 10 números enteros:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Número " << i+1 << ": ";
        cin >> numbers[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] % 3 == 0)
        {
            sum += numbers[i];
            count++;
        }
    }

    cout << "Suma total: " << sum << endl;
    cout << "Número de veces que se realizó la suma: " << count << endl;

    return 0;
}

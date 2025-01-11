#include <iostream>
using namespace std;

def calculate_trace():
    fil = int(input("Filas: "))
    col = int(input("Columnas: "))

    if fil != col:
        raise ValueError("La matriz debe ser cuadrada para calcular la traza.")

    m = [[0 for _ in range(col)] for _ in range(fil)]
    traza = 0

    for i in range(fil):
        print(f"Fila {i + 1}:")
        for j in range(col):
            print(f"({j + 1}/{col}): ", end="")
            m[i][j] = int(input())

            if i == j:
                traza += m[i][j]

    print(f"\nTraza: {traza}")


if __name__ == "__main__":
    calculate_trace()

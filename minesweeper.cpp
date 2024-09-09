#include <iostream>

using namespace std;

int main()
{

    int A[100][100];
    int B[100][100];

    bool errorStatus = 0;

    cout << "Ingresa la cantidad de filas: ";
    int filas;
    cin >> filas;

    cout << "Ingresa la cantidad de columnas: ";
    int columnas;
    cin >> columnas;

    if ((filas > 2 && filas < 100) && (columnas > 2 && columnas < 100))
    {
        errorStatus = false;
    }
    else{
        cout<< "ERROR. Las filas y columnas deben ser mayores de 2 y menores de 100."<<endl;
        errorStatus = true;
    }
    

    for (int i = 0; i < filas; i++)
    {
        if (errorStatus == false)
        {

            for (int j = 0; j < columnas; j++)
            {
                cout << "Ingresa el elemento en la posicion (" << i << "," << j << "):";
                int entering;
                cin >> entering;

                if (entering == 1 || entering == 0)
                {
                    A[i][j] = entering;
                    cout << endl;
                    errorStatus = false;
                }
                else
                {

                    cout << "ERROR, solo puede ingresar 0 o 1." << endl;
                    errorStatus = true;
                    break;
                }
            }
        }
    }

    if (errorStatus == false)
    {

        cout << "--------------------" << endl;

        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }

        cout << "--------------------" << endl;

        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {

                if ((i == 0) && (j == 0))
                {
                    // Esquina superior izquierda
                    int value = A[i][j] + A[i][j + 1] + A[i + 1][j] + A[i + 1][j + 1];
                    B[i][j] = value;
                }
                else if ((i == 0) && (j == (columnas - 1)))
                {
                    // Esquina superior derecha
                    int value = A[i][j] + A[i][j - 1] + A[i + 1][j] + A[i + 1][j - 1];
                    B[i][j] = value;
                }
                else if ((i == (filas - 1)) && (j == 0))
                {
                    // Esquina inferior izquierda
                    int value = A[i][j] + A[i][j + 1] + A[i - 1][j] + A[i - 1][j + 1];
                    B[i][j] = value;
                }
                else if ((i == (filas - 1)) && (j == (columnas - 1)))
                {
                    int value = A[i][j] + A[i][j - 1] + A[i - 1][j] + A[i - 1][j - 1];
                    B[i][j] = value;
                }
                else if ((i == 0) && ((j != 0) && (j != (columnas - 1))))
                {
                    // Lateral superior
                    int value = A[i][j] + A[i][j + 1] + A[i][j - 1] + A[i + 1][j] + A[i + 1][j + 1] + A[i + 1][j - 1];
                    B[i][j] = value;
                }
                else if ((i == (filas - 1)) && ((j != 0) && (j != (columnas - 1))))
                {
                    // Lateral inferior
                    int value = A[i][j] + A[i][j + 1] + A[i][j - 1] + A[i - 1][j] + A[i - 1][j + 1] + A[i - 1][j - 1];
                    B[i][j] = value;
                }

                else if ((j == 0) && ((i != 0) && (i != (filas - 1))))
                {
                    // Lateral izquierdo
                    int value = A[i][j] + A[i + 1][j] + A[i - 1][j] + A[i][j + 1] + A[i + 1][j + 1] + A[i - 1][j + 1];
                    B[i][j] = value;
                }
                else if ((j == (columnas - 1)) && ((i != 0) && (i != (filas - 1))))
                {
                    // Lateral derecho
                    int value = A[i][j] + A[i + 1][j] + A[i - 1][j] + A[i][j - 1] + A[i + 1][j - 1] + A[i - 1][j - 1];
                    B[i][j] = value;
                }
                else
                {
                    // I nterior
                    int value = A[i][j] + A[i + 1][j] + A[i - 1][j] + A[i][j + 1] + A[i + 1][j + 1] + A[i - 1][j + 1] + A[i][j - 1] + A[i + 1][j - 1] + A[i - 1][j - 1];
                    B[i][j] = value;
                }
            }
        }

        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                cout << B[i][j] << " ";
            }
            cout << endl;
        }

        return 0;
    }
}
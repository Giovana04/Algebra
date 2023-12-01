#include <iostream>
using namespace std;

int linhaA, colunaA, linhaB, colunaB;

void somamatrizes(int matrizA[][1000], int linhaA, int colunaA, int matrizB[][1000], int linhaB, int colunaB);

int main()
{ 
    cout << "Digite o numero de linhas e colunas para matriz A: " << endl;
    cin >> linhaA >> colunaA;

    cout << "Digite o número de linhas e colunas para matriz B: " << endl;
    cin >> linhaB >> colunaB;

    int matrizA[linhaA][1000], matrizB[linhaB][1000];

    cout << "Digite os elementos da matriz A: " << endl;
    for (int i = 0; i < linhaA; i++)
    {
        for (int j = 0; j < colunaA; j++)
        {
            cout << "Digite matrizA[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    cout << "Digite os elementos da matriz B:" << endl;
    for (int i = 0; i < linhaB; i++)
    {
        for (int j = 0; j < colunaB; j++)
        {
            cout << "Digite matrizB[" << i << "][" << j << "]: ";
            cin >> matrizB[i][j];
        }
    }
    somamatrizes(matrizA, linhaA, colunaA, matrizB, linhaB, colunaB);
}


void somamatrizes(int matrizA[][1000], int linhaA, int colunaA, int matrizB[][1000], int linhaB, int colunaB)
{
    int matrizC[linhaA][colunaB] = {0};

    if (colunaA != linhaB)
    {
        cout << "Numero de colunas da matriz A nao é igual ao número de linhas da matriz B. A multiplicaçao nao e possivel." << endl;
        return;
    }

    for (int i = 0; i < linhaA; i++)
    {
        for (int j = 0; j < colunaB; j++)
        {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    cout << "Resultado da multiplicação:" << endl;
    for (int i = 0; i < linhaA; i++)
    {
        for (int j = 0; j < colunaB; j++)
        {
            cout << matrizC[i][j] << " ";
        }
        cout << endl;
    }
}
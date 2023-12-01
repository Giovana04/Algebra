#include <iostream>
using namespace std;

int linhaA, colunaA, linhaB, colunaB;

void multiplicacaomatrizes(int matrizA[][1000], int linhaA, int colunaA, int matrizB[][1000], int linhaB, int colunaB);

int main()
{ 
    cout << "Digite o numero de linhas e colunas para matriz A: " << endl;
    cin >> linhaA >> colunaA;

    cout << "Digite o número de linhas e colunas para matriz B: " << endl;
    cin >> linhaB >> colunaB;
    if (colunaA != linhaB)
        {
            cout << "Numero de colunas da matriz A nao é igual ao número de linhas da matriz B. A multiplicaçao nao e possivel." << endl;
            return 1;
        }
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
    multiplicacaomatrizes(matrizA, linhaA, colunaA, matrizB, linhaB, colunaB);
    return 0;
}


void multiplicacaomatrizes(int matrizA[][1000], int linhaA, int colunaA, int matrizB[][1000], int linhaB, int colunaB)
{
    int matrizC[linhaA][colunaB];
    for (int i = 0; i < linhaA; i++)
    {
        for (int j = 0; j < colunaB; j++)
        {
            matrizC[i][j] = 0;
        }
    }

    for (int i = 0; i < linhaA; i++)
    {
        for (int j = 0; j < colunaB; j++)
        {
            for (int k = 0; k < colunaA; k++)
            {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
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

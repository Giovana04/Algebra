#include <iostream>
using namespace std;

int tamanho, linha, coluna; 

int main(){
    cout << "Digite o tamanho da matriz: " << endl;
    cin >> tamanho;
    linha = tamanho;
    coluna = tamanho + 1;
    double div, m, matriz[linha][coluna];

    cout << "Digite os elementos da matriz: " << endl;
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if (j == coluna - 1)
            {
                cout << endl << "Valor após o igual, ";
            }
            cout << "Digite matriz [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    
    for(int a = 0; a < linha; a++){
        if(matriz[a][a] != 0)
        div = matriz[a][a];
        for(int j = 0; j < coluna; j++){
            matriz[a][j] = matriz[a][j]/div;
        }
        for(int i = 0; i < linha; i++){
            if(a != i){
                if(matriz[i][a] != 0){
                    m = matriz[i][a];
                    for(int j = 0; j < coluna; j++){
                        matriz[i][j] = matriz[i][j] - (m*matriz[a][j]);                 
                    }
                }
            }
        }
    }

    cout << endl << "Matriz resultante após a eliminação de Gauss:" << endl;
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }


    cout << endl << "Solucoes:" << endl;
    for (int i = 0; i < linha; i++) {
        cout << "x" << i + 1 << " = " << matriz[i][coluna - 1] << endl;
    }
}
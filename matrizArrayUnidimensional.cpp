#include <iostream>

using namespace std;

int main(){

    int matriz[3][3], arrayUnidimensional[9];
    int k = 0; ///indice para el arrayUnidimensional

    ///armar la matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Elementos [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    ///convertir la matriz en un array unido
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
                arrayUnidimensional[k++] = matriz[i][j];
        }
    }

    ///mostrar el array
    cout << "Array resultado: " << endl;
    for(int i = 0; i < 9; i++){
        cout << arrayUnidimensional[i] << " ";
    }

    return 0;
}

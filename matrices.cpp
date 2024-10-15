#include <iostream>

using namespace std;

int main(){
    int matriz [2][2];
    int suma = 0;

    cout << "Ingrese los elemntos de la matriz " << endl;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << "Elementos [" << i << "][" << j << "]: ";
            cin >> matriz [i][j];
            suma += matriz [i][j];
        }
    }
    cout << "La suma de los elementos es: " << suma;
    return 0;
}

/* posiciones
00 01
10 11

*/

#include <iostream>

using namespace std;

int main(){

    int largoDelArray = 5;
    int array[largoDelArray];
    ///string array[largoDelArray], para los nombres

    ///Asi ingresamos elemnetos a un array
    cout << "Ingrese los numeros del array " << endl;
    for(int i = 0; i < largoDelArray; i++){
        cin >> array[i];
    }

    cout << endl;

    ///mostramos el array
    cout << "Mostrando array: " << endl;
    for(int i = 0; i < largoDelArray; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    ///algoritmo para el metodo de burbuja
    for(int i = 0; i < largoDelArray - 1; i++){
        for(int j = 0; j < largoDelArray - i - 1; j++){
            if(array[j] > array[j + 1]){
                ///aca van a pasar los intercambios
                int aux = array[j];
                ///string aux = array[j]:
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }

    cout << "Numeros ordenados: " << endl;

    for(int i = 0; i < largoDelArray; i++){
        cout << array[i] << " ";
    }

    return 0;
}

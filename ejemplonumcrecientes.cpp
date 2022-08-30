

#include <iostream>

using namespace std;
int main()
{
    int n1, n2,n3;

    cout << "Ingrese 3 números para verificar que sean cecientes" << endl;
    cin >> n1 >> n2 >> n3;  // SE DEBEN DE DECLARAR LAS VARIABES SEPARADAS
    if (n1 < n2 && n2 < n3)
    {
        cout << "Sus números están en orden creciente" << endl;
    }
    else
    {
        cout << "Sus números no están en orden creciente" << endl;  // favor de agregar los saltos de linea con \n
        return main();
        
    }

    system("pause");
}

#include <iostream>

using namespace std;

void inicializa(int arreglo[])
{
    for (int ix = 0; ix < 5; ++ix)
    {
        arreglo[ix] = 0;
    }
}

bool estaLleno(int arreglo[])
{
    int contador = 0;
    for (int ix = 0; ix < 5; ++ix)
    {
        if (arreglo[ix] != 0)
        {
            contador = contador + 1;
        }
    }
    return contador == 5;
}

int cantidad(int arreglo[], int valor)
{
    int contador = 0;
    for (int ix = 0; ix < 5; ++ix)
    {
        if (arreglo[ix] == valor)
        {
            contador = contador + 1;
        }
    }
    return contador;
}

void inserta(int arreglo[])
{
    if (estaLleno(arreglo))
    {
        cout << "esta lleno" << endl;
        return;
    }
    int posicion;
    cout << "Posicion?" << endl;
    cin >> posicion;
    if (posicion < 0 || posicion > 4)
    {
        cout << "error de posicion" << endl;
        return;
    }
    int valor;
    cout << "valor?";
    cin >> valor;
    if (cantidad(arreglo, valor) >= 1)
    {
        cout << "hay duplicado" << endl;
    }
    else
    {
        arreglo[posicion] = valor;
        cout << "correcto" << endl;
    }
}

void elimina(int arreglo[])
{
    int posicion;
    cout << "Posicion?" << endl;
    cin >> posicion;
    if (posicion < 0 || posicion > 4)
    {
        cout << "error de posicion" << endl;
        return;
    }
    arreglo[posicion] = 0;
    cout << "correcto" << endl;
}

void imprime(int arreglo[])
{
    for (int ix = 0; ix < 5; ++ix)
    {
        cout << arreglo[ix] << ' ';
    }
    cout << endl;
    cout << "correcto" << endl;
}

int main()
{
    int opcion;
    int arreglo[5];
    inicializa(arreglo);

    do
    {
        cout << "1.- Insertar" << endl;
        cout << "2.- Eliminar" << endl;
        cout << "3.- Consultar" << endl;
        cout << "4.- Salir" << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
        {
            inserta(arreglo);
            break;
        }
        case 2:
        {
            elimina(arreglo);
            break;
        }
        case 3:
        {
            imprime(arreglo);
            break;
        }
        }
    } while (opcion != 4);
    cout << "correcto" << endl;
    system("pause");
    return 0;
}

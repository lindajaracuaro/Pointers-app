// F 16.3 Uso de nombre, referencia y apuntador.cpp : This file contains an example of how to use pointers 
//

#include <iostream>

using namespace std;

 class cuenta {

 public:
     int x;
     void PrintValue() { cout << x << endl << endl; }

};


int main()
{
    //Para poder trabajar con las clases, se debe de crear un objeto en el cuerpo, el cual se vinculará con la clase y así podremos conectar funciones y variables.

    cuenta contador,                            //Crea el objeto contador
           *ptrCont = &contador,                //Declaración e inicialización de puntero   ||  El puntero puede interactuar con toda la interfaz de cuenta
           &RefCont = contador;                 //Declaración e inicialización de referencia
    

    cout << "Utilizando el nombre del objeto "<< endl <<"Asigna 7 a x y lo imprime\t\t";
    contador.x = 7;
    contador.PrintValue();

    cout << "Utilizando una referencia" << endl << "Asigna 8 a x y lo imprime\t\t";
    RefCont.x = 8;
    RefCont.PrintValue();

    cout << "Utilizando un apuntador" << endl << "Asigna 10 a x y lo imprime\t\t";
    ptrCont->x = 10;                            //Al miembro x se le asignará el valor de 10 
    ptrCont->PrintValue();

    return 0;
}


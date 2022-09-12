/*
    Romero Escamilla Oscar Eduardo
    22110112
    2P
    Programación Orientada a Objetos
    Descripción de programa:
        - Desarrollo de 3 figuras con el método draw en c++
*/

#include <iostream>
#include "Figure.h"

using namespace std;

/// Clase del menú
class InputManager 
{  
    public:
         int row, column, opc;
        
        void run()
        { 
            cout<<"1.Cuadrado\n 2.Triangulo\n 3.Rombo";
        
            switch (opc)
            {
                        case 1:
                            cout<<"Ingresa las filas del cuadrado\n";
                            cin>>row;
                            cout<<"Ingresa las columnas cuadrado";
                            cin>>column;
                            Figure::Square::draw(row,column);
                            break;
                        case 2:
                            cout<<"Ingresa las filas del triangulo\n";
                            cin>>row;
                            cout<<"Ingresa las columnas del triangulo";
                            cin>>column;
                            Figure::Triangle::draw2(row,column);
                            break;
                        case 3:
                            cout<<"Ingresa las filas del rombo\n";
                            cin>>row;
                            cout<<"Ingresa las columnas del rombo";
                            cin>>column;
                            Figure::Diamond::draw3(row,column);
                            break;
                        default:
                            cout<<"No se eligio ninguna de las opciones";
                            break;
            }
        };

};

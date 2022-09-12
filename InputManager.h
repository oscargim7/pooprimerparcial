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
         int medida, position, opc;
        
        void run()
        { 
            cout<<"1.Cuadrado\n 2.Triangulo\n 3.Rombo";
        
            switch (opc)
            {
                        case 1:
                            cout<<"Ingresa las medidas del cuadrado\n";
                            cin>>medida;
                            cout<<"Ingresa la posicion en donde se encuentra el cuadrado";
                            cin>>position;
                            Figure::Square::draw(medida,position);
                            break;
                        case 2:
                            cout<<"Ingresa las medidas del triangulo\n";
                            cin>>medida;
                            cout<<"Ingresa la posicion en donde se encuentra";
                            cin>>position;
                            Figure::Triangle::draw2(medida,position);
                            break;
                        case 3:
                            cout<<"Ingresa las medidas del rombo\n";
                            cin>>medida;
                            cout<<"Ingresa la posicion en donde se encuentra";
                            cin>>position;
                            Figure::Diamond::draw3(medida,position);
                            break;
                        default:
                            cout<<"No se eligio ninguna de las opciones";
                            break;
            }
        };

};

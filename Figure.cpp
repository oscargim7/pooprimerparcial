/*
    Romero Escamilla Oscar Eduardo
    22110112
    2P
    Programación Orientada a Objetos
    Descripción de programa:
        - Desarrollo de 3 figuras con el método draw en c++
*/

#include <iostream>
#include "InputManager.h"
#include "Figure.h"
#pragma once

using namespace std;

int main ()
{
    InputManager a;
    //Se manda a llamar al método del menú
    a.run();

    return 0;
}
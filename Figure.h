/*
    Romero Escamilla Oscar Eduardo
    22110112
    2P
    Programación Orientada a Objetos
    Descripción de programa:
        - Desarrollo de 3 figuras con el método draw en c++
*/

#include <iostream>
using namespace std;

class Figure
{
    class Square
    {
        public:
        int row, column;

        //Métodos que dibujan las figuras
            void draw()
            {
                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < column; j++)
                    {
                        std::cout<<" * ";
                    }
                    
                }
            }
    };

    class Triangle
    {
        public:
        int row, column;

        //Metodo que dibuja la figura
            void draw2()
            {
                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < column; j++)
                    {
                        std::cout<<" * ";
                    }
                    
                }
            }
    };

    class Diamond
    {
        public:
        int row, column;

        //Metodo que dibuja la figura
            void draw3()
            {
                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < column; j++)
                    {
                        std::cout<<" * ";
                    }
                    
                }
            }
    };
     
    /// Métodos que enlazan las clases de las figuras con el método draw
    void lienzo(Square*square)
    {
        square->draw();
    };

    void lienzo2(Triangle*triangle)
    {
        triangle->draw2();
    };

    void lienzo3(Diamond*diamond)
    {
        diamond->draw3();
    };
    
};
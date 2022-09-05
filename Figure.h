#include <iostream>
using namespace std;

class Figure
{
    public:
        int row, column;

        //Metodo que dibuja la figura
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
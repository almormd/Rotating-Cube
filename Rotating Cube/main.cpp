//
//  main.cpp
//  Rotating Cube
//
//  Created by Aleksandr Morozov on 2/16/25.
//

#include "screen.h"

int main()
{
    Screen screen;
    
    for(int i = 0; i < 100; i++)
    {
        screen.pixel(rand()%640, rand()%480);
    }
    
    while(true)
    {
        screen.show();
        screen.input();
    }
    return 0;
}

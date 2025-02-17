//
//  main.cpp
//  Rotating Cube
//
//  Created by Aleksandr Morozov on 2/16/25.
//

#include <SDL2/SDL.h>
#include <vector>
#include <iostream>

int main() {
}

class Screen
{
    SDL_Event e;
    SDL_Window* window;
    SDL_Renderer* renderer;
    std::vector<SDL_FPoint> points;
    
    Screen ()
    {
        SDL_Init(SDL_INIT_VIDEO);
        SDL_CreateWindowAndRenderer(640*2, 480*2, 0, &window, &renderer);
    }
    
    void pixel(float x, float y)
    {
        points.emplace_back(x,y);
    }
    
    void show()
    {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    }
};


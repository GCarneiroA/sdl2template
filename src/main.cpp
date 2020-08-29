

#include <SDL2/SDL.h>

bool Running = true;
SDL_Event mainEvent;

int main(int argc, char **argv)
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window *window = SDL_CreateWindow(
        "SDL2template",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640,
        480,
        0
    );
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);

    // main application loop
    while (Running) {
        
        // main application events
        while (SDL_PollEvent(&mainEvent)) {
            // Quit event
            if (mainEvent.type == SDL_QUIT) {
                Running = false;
            }
        }

    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

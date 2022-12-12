#include "initiateNewGameWindow.h"

void newgameWindowLoad(void)
{
    //Level-1 start button

    window.surface = IMG_Load("images/buttons/level1.png");

    if (!window.surface)
    {
        printf("newgameWindowlevelOneButton Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    newgameWindowlevelOneButton.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!newgameWindowlevelOneButton.tex)
    {
        printf("newgameWindowlevelOneButton  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(newgameWindowlevelOneButton.tex, NULL, NULL, &newgameWindowlevelOneButton.rect.w, &newgameWindowlevelOneButton.rect.h);
    newgameWindowlevelOneButton.rect.w = (int)330;
    newgameWindowlevelOneButton.rect.h = (int)130;
    newgameWindowlevelOneButton.rect.x = (int)WINDOW_WIDTH / 2 - 165;
    newgameWindowlevelOneButton.rect.y = (int)WINDOW_HEIGHT / 2 - 65;

}

void newGameWindowCleanUp()
{

    SDL_DestroyTexture(newgameWindowlevelOneButton.tex);
    //SDL_DestroyTexture(newgameWindowlevelTwoButton.tex);
    IMG_Quit();
}

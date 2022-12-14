#include "drawNewgameWindow.h"

void updateAnimationSpeedForNewgameWindow()
{

    startMountainsAnimationSpeed -= 1;
    if (startMountainsAnimationSpeed < -welcomeWindowMountains.rect.w)
    {
        startMountainsAnimationSpeed = 0;
    }
}
void drawNewgameWindowFunction()
{
    updateAnimationSpeedForNewgameWindow();
    welcomeWindowSky.rect.x = startSkyAnimationSpeed;
    welcomeWindowBirds.rect.x = startBirdsAnimationSpeed;
    welcomeWindowMountains.rect.x = startMountainsAnimationSpeed;
    SDL_RenderClear(app.rend);

    SDL_RenderCopy(app.rend, welcomeWindowSky.tex, NULL, &welcomeWindowSky.rect);
    welcomeWindowSky.rect.x = startSkyAnimationSpeed + welcomeWindowSky.rect.w;
    SDL_RenderCopy(app.rend, welcomeWindowSky.tex, NULL, &welcomeWindowSky.rect);

    SDL_RenderCopy(app.rend, welcomeWindowMountains.tex, NULL, &welcomeWindowMountains.rect);
    welcomeWindowMountains.rect.x = startMountainsAnimationSpeed + welcomeWindowMountains.rect.w;
    SDL_RenderCopy(app.rend, welcomeWindowMountains.tex, NULL, &welcomeWindowMountains.rect);

    SDL_RenderCopy(app.rend, welcomeWindowTrees.tex, NULL, &welcomeWindowTrees.rect);

    SDL_RenderCopy(app.rend, welcomeWindowGameTitle.tex, NULL, &welcomeWindowGameTitle.rect);
    SDL_RenderCopy(app.rend, newgameWindowlevelOneButton.tex, NULL, &newgameWindowlevelOneButton.rect);
    //SDL_RenderCopy(app.rend, newgameWindowlevelTwoButton.tex, NULL, &newgameWindowlevelTwoButton.rect);
    SDL_RenderCopy(app.rend, back.tex, NULL, &back.rect);
}

#include "drawWelcomeWindow.h"

void updateAnimationSpeedForWelcomeWindow()
{
    

    startMountainsAnimationSpeed -= 1;
    if (startMountainsAnimationSpeed < -welcomeWindowMountains.rect.w)
    {
        startMountainsAnimationSpeed = 0;
    }
}
void drawWelcomeWindowFunction()

{

    updateAnimationSpeedForWelcomeWindow();
    // updating components positions
    welcomeWindowSky.rect.x = startSkyAnimationSpeed;
    welcomeWindowBirds.rect.x = startBirdsAnimationSpeed;
    welcomeWindowMountains.rect.x = startMountainsAnimationSpeed;
    SDL_RenderClear(app.rend);

    SDL_RenderCopy(app.rend, welcomeWindowSky.tex, NULL, &welcomeWindowSky.rect);
    welcomeWindowSky.rect.x = startSkyAnimationSpeed + welcomeWindowSky.rect.w; //updating to render consequetively
    SDL_RenderCopy(app.rend, welcomeWindowSky.tex, NULL, &welcomeWindowSky.rect);


    SDL_RenderCopy(app.rend, welcomeWindowMountains.tex, NULL, &welcomeWindowMountains.rect);
    welcomeWindowMountains.rect.x = startMountainsAnimationSpeed + welcomeWindowMountains.rect.w;
    SDL_RenderCopy(app.rend, welcomeWindowMountains.tex, NULL, &welcomeWindowMountains.rect);

    SDL_RenderCopy(app.rend, welcomeWindowTrees.tex, NULL, &welcomeWindowTrees.rect);

    SDL_RenderCopy(app.rend, welcomeWindowGameTitle.tex, NULL, &welcomeWindowGameTitle.rect);
    SDL_RenderCopy(app.rend, welcomeWindowNewgameButton.tex, NULL, &welcomeWindowNewgameButton.rect);
	
}

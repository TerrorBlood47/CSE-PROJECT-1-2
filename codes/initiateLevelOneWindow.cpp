#include "initiateLevelOneWindow.h"

void levelOneWindowLoad(void)
{
	
    //sky load

    window.surface = IMG_Load("images/levelone/sky.png");

    if (!window.surface)
    {
        printf("levelOneWindowSky Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowSky.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelOneWindowSky.tex)
    {
        printf("sky_  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(levelOneWindowSky.tex, NULL, NULL, &levelOneWindowSky.rect.w, &levelOneWindowSky.rect.h);
    levelOneWindowSky.rect.w = (int)WINDOW_WIDTH;
    levelOneWindowSky.rect.h = (int)WINDOW_HEIGHT;
    levelOneWindowSky.rect.x = (int)0;
    levelOneWindowSky.rect.y = (int)0;

	

    //sun load
    window.surface = IMG_Load("images/levelone/Moon.png");

    if (!window.surface)
    {
        printf("levelOneWindowSun Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowSun.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelOneWindowSun.tex)
    {
        printf("levelOneWindowSun  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(levelOneWindowSun.tex, NULL, NULL, &levelOneWindowSun.rect.w, &levelOneWindowSun.rect.h);
    levelOneWindowSun.rect.w = (int)700;
    levelOneWindowSun.rect.h = (int)400;
    levelOneWindowSun.rect.x = WINDOW_WIDTH / 2 + 100;
    levelOneWindowSun.rect.y = 20;

    //clouds load
    window.surface = IMG_Load("images/levelone/clouds-min.png");

    if (!window.surface)
    {
        printf("levelOneWindowClouds Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowClouds.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelOneWindowClouds.tex)
    {
        printf("levelOneWindowClouds Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(levelOneWindowClouds.tex, NULL, NULL, &levelOneWindowClouds.rect.w, &levelOneWindowClouds.rect.h);
    levelOneWindowClouds.rect.w = (int)WINDOW_WIDTH - 200;
    levelOneWindowClouds.rect.h = (int)226;
    levelOneWindowClouds.rect.x = (int)0;
    levelOneWindowClouds.rect.y = 50;

    //mountains load

    window.surface = IMG_Load("images/levelone/build.png");
	
    if (!window.surface)
    {
        printf("levelOneWindowMountains Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
	SDL_SetColorKey(window.surface, SDL_TRUE, SDL_MapRGB(window.surface->format, 255, 255, 255));
	
    levelOneWindowMountains.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelOneWindowMountains.tex)
    {
        printf("levelOneWindowMountains  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(levelOneWindowMountains.tex, NULL, NULL, &levelOneWindowMountains.rect.w, &levelOneWindowMountains.rect.h);
    levelOneWindowMountains.rect.w = (int)WINDOW_WIDTH;
    levelOneWindowMountains.rect.h = (int)650;
    levelOneWindowMountains.rect.x = (int)0;
    levelOneWindowMountains.rect.y = (int)300;	

    //treeshade load
    window.surface = IMG_Load("images/levelone/lamp.png");

    if (!window.surface)
    {
        printf("levelOneWindowTreeShade Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowTreeShade.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelOneWindowTreeShade.tex)
    {
        printf("levelOneWindowTreeShade  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(levelOneWindowTreeShade.tex, NULL, NULL, &levelOneWindowTreeShade.rect.w, &levelOneWindowTreeShade.rect.h);
    levelOneWindowTreeShade.rect.w = (int)WINDOW_WIDTH;
    levelOneWindowTreeShade.rect.h = (int)357;
    levelOneWindowTreeShade.rect.x = (int)0;
    levelOneWindowTreeShade.rect.y = (int)450;

    // trees load
    window.surface = IMG_Load("images/levelone/fench.png");

    if (!window.surface)
    {
        printf("levelOneWindowTrees Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowTrees.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelOneWindowTrees.tex)
    {
        printf("levelOneWindowTrees  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(levelOneWindowTrees.tex, NULL, NULL, &levelOneWindowTrees.rect.w, &levelOneWindowTrees.rect.h);
    levelOneWindowTrees.rect.w = (int)WINDOW_WIDTH;
    levelOneWindowTrees.rect.h = (int)207;
    levelOneWindowTrees.rect.x = (int)0;
    levelOneWindowTrees.rect.y = (int)600;

    //track load
    window.surface = IMG_Load("images/levelone/track.png");

    if (!window.surface)
    {
        printf("levelOneWindowTrack Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowTrack.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelOneWindowTrack.tex)
    {
        printf("track Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(levelOneWindowTrack.tex, NULL, NULL, &levelOneWindowTrack.rect.w, &levelOneWindowTrack.rect.h);
    levelOneWindowTrack.rect.w = (int)WINDOW_WIDTH;
    levelOneWindowTrack.rect.h = (int)200;
    levelOneWindowTrack.rect.x = (int)0;
    levelOneWindowTrack.rect.y = (int)790;

    window.surface = IMG_Load("images/levelone/run2.png");

    if (!window.surface)
    {
        printf("levelOneWindowCharacter Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowCharacter.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!levelOneWindowCharacter.tex)
    {
        printf("levelOneWindowCharacter Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(levelOneWindowCharacter.tex, NULL, NULL, &levelOneCharacterTexturewidth, &levelOneCharacterTextureheight);
    levelOneCharacterFramewidth = levelOneCharacterTexturewidth / 4 + 1;
    levelOneCharacterFrameheight = levelOneCharacterTextureheight / 2;
    levelOneWindowCharacter.rect.w = levelOneCharacterFramewidth;
    levelOneWindowCharacter.rect.h = levelOneCharacterFrameheight;
    levelOneWindowCharacter.rect.x = 0;
    levelOneWindowCharacter.rect.y = 0;
    characterFramePosition.rect.w = levelOneCharacterFramewidth - 140; // character sprite mota hoy plus korle, cikon hoy minus korle
    characterFramePosition.rect.h = levelOneCharacterFrameheight - 180;
    characterFramePosition.rect.x = levelOneCharacterXposition;
    characterFramePosition.rect.y = 665;



    
    window.surface = IMG_Load("images/levelone/finish.png");

    if (!window.surface)
    {
        printf("levelOneFinish Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneFinish.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!levelOneFinish.tex)
    {
        printf("levelOneFinish Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(levelOneFinish.tex, NULL, NULL, &levelOneFinish.rect.w, &levelOneFinish.rect.h);
    levelOneFinish.rect.w = (int)200;
    levelOneFinish.rect.h = (int)600;
    levelOneFinish.rect.x = (int)FinishLine;
    levelOneFinish.rect.y = (int)260;



    //initialInstruction load

    window.surface = IMG_Load("images/newcomponents/instruction.png");

    if (!window.surface)
    {
        printf("initial Instructions Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    initialInstructions.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);
    if (!initialInstructions.tex)
    {
        printf("initial InstructionsTexture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(initialInstructions.tex, NULL, NULL, &initialInstructions.rect.w, &initialInstructions.rect.h);
    initialInstructions.rect.w = (int)472;
    initialInstructions.rect.h = (int)465;
    initialInstructions.rect.x = (int)WINDOW_WIDTH / 2 - 236;
    initialInstructions.rect.y = (int)WINDOW_HEIGHT / 2 - 232;

    //function calling to load rewards and obstacles and effects

    levelOneCoinsLoad();
    levelOneObstacleLoad();
    levelOneCoinsEffectLoad();
    levelOneLifeLoad();
    levelOneLifeLossLoad();
    updateScore();
}
// function to destroy all the textures used
void levelOneWindowCleanUp()
{

    SDL_DestroyTexture(levelOneWindowSky.tex);
    SDL_DestroyTexture(levelOneWindowMountains.tex);
    SDL_DestroyTexture(levelOneWindowTreeShade.tex);
    SDL_DestroyTexture(levelOneWindowTrees.tex);
    SDL_DestroyTexture(levelOneWindowClouds.tex);
    SDL_DestroyTexture(levelOneWindowTrack.tex);
    SDL_DestroyTexture(levelOneWindowCharacter.tex);
    SDL_DestroyTexture(initialInstructions.tex);
    SDL_DestroyTexture(levelOneFinish.tex);
    SDL_DestroyTexture(levelOneWindowSun.tex);
    IMG_Quit();
}

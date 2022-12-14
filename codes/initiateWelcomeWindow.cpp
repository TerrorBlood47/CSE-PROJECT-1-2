#include "initiateWelcomeWindow.h"

void welcomeWindowLoad(void)
{
    // Welcome Window Backgroud Sky

    window.surface = IMG_Load("./images/frontbackground/sky.png");
    if (!window.surface)
    {
        printf("Welcome window sky Surface Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcomeWindowSky.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!welcomeWindowSky.tex)
    {
        printf("Welcome window sky Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(welcomeWindowSky.tex, NULL, NULL, &welcomeWindowSky.rect.w, &welcomeWindowSky.rect.h);
    welcomeWindowSky.rect.w = (int)WINDOW_WIDTH;
    welcomeWindowSky.rect.h = (int)400;
    welcomeWindowSky.rect.x = 0;
    welcomeWindowSky.rect.y = 0;

    

    // Welcome Window Backgroud Mountains

    window.surface = IMG_Load("./images/frontbackground/frontmountain.png");
    if (!window.surface)
    {
        printf("welcomeWindowMountains Surface Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcomeWindowMountains.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!welcomeWindowMountains.tex)
    {
        printf("welcomeWindowMountains Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(welcomeWindowMountains.tex, NULL, NULL, &welcomeWindowMountains.rect.w, &welcomeWindowMountains.rect.h);
    welcomeWindowMountains.rect.w = (int)WINDOW_WIDTH;
    welcomeWindowMountains.rect.h = (int)800;
    welcomeWindowMountains.rect.x = 0;
    welcomeWindowMountains.rect.y = 200;

    // Welcome Window Backgroud Trees

    window.surface = IMG_Load("./images/frontbackground/fronttree.png");
    if (!window.surface)
    {
        printf("welcomeWindowTrees Surface Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    welcomeWindowTrees.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!welcomeWindowTrees.tex)
    {
        printf("welcomeWindowTrees Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(welcomeWindowTrees.tex, NULL, NULL, &welcomeWindowTrees.rect.w, &welcomeWindowTrees.rect.h);
    welcomeWindowTrees.rect.w = (int)400;
    welcomeWindowTrees.rect.h = (int)WINDOW_HEIGHT;
    welcomeWindowTrees.rect.x = -100;
    welcomeWindowTrees.rect.y = 0;
    

    // Welcome Window Game Logo

    window.surface = IMG_Load("images/riotlogo.png");

    if (!window.surface)
    {
        printf("welcomeWindowGameTitle Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    welcomeWindowGameTitle.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!welcomeWindowGameTitle.tex)
    {
        printf("welcomeWindowGameTitle  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    SDL_QueryTexture(welcomeWindowGameTitle.tex, NULL, NULL, &welcomeWindowGameTitle.rect.w, &welcomeWindowGameTitle.rect.h);
    
    /* adjusting the poster for wide screen */
    welcomeWindowGameTitle.rect.w = (int)241;
    welcomeWindowGameTitle.rect.h = (int)181;
    welcomeWindowGameTitle.rect.x = (int)WINDOW_WIDTH / 2 - 120;
    welcomeWindowGameTitle.rect.y = (int)WINDOW_HEIGHT / 2 - 460;

    // Welcome Window Play  Button

    window.surface = IMG_Load("images/buttons/START.png");

    if (!window.surface)
    {
        printf("welcomeWindowNewgameButton Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    welcomeWindowNewgameButton.tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
    SDL_FreeSurface(window.surface);

    if (!welcomeWindowNewgameButton.tex)
    {
        printf("welcomeWindowNewgameButton  Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    SDL_QueryTexture(welcomeWindowNewgameButton.tex, NULL, NULL, &welcomeWindowNewgameButton.rect.w, &welcomeWindowNewgameButton.rect.h);
    welcomeWindowNewgameButton.rect.w = (int)291;
    welcomeWindowNewgameButton.rect.h = (int)373;
    welcomeWindowNewgameButton.rect.x = (int)WINDOW_WIDTH / 2 - 146;
    welcomeWindowNewgameButton.rect.y = (int)WINDOW_HEIGHT / 2 + 200;
}

void welcomeWindowCleanUp() // cleaning up components textures and surfaces
{

    SDL_DestroyTexture(welcomeWindowSky.tex);
    SDL_DestroyTexture(welcomeWindowBirds.tex);
    SDL_DestroyTexture(welcomeWindowMountains.tex);
    SDL_DestroyTexture(welcomeWindowTrees.tex);
    SDL_DestroyTexture(welcomeWindowGameTitle.tex);
    SDL_DestroyTexture(welcomeWindowNewgameButton.tex);
    
    IMG_Quit();
}

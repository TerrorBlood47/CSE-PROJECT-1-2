#include "initiateObstacle.h"

//function to load obstacles of levelone
void levelOneObstacleLoad(void)
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            window.surface = IMG_Load("images/levelone/obstacles/zombie1.png");
            if (!window.surface)
            {
                printf("Obstacle[i] Error: %s\n", IMG_GetError());
                SDL_DestroyRenderer(app.rend);
                SDL_DestroyWindow(app.window);
                SDL_Quit();
                exit(1);
            }

            levelOneWindowObstacle[i].tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
            SDL_FreeSurface(window.surface);
            if (!levelOneWindowObstacle[i].tex)
            {
                printf("Obstacle[i] Texture %s\n", SDL_GetError());
                SDL_DestroyRenderer(app.rend);
                SDL_DestroyWindow(app.window);
                SDL_Quit();
                exit(1);
            }
            SDL_QueryTexture(levelOneWindowObstacle[i].tex, NULL, NULL,&levelOneWindowObstacle[i].rect.w, &levelOneWindowObstacle[i].rect.h);
            
            levelOneWindowObstacle[i].rect.w = 200;
            levelOneWindowObstacle[i].rect.h = 70;
            levelOneWindowObstacle[i].rect.x = (int)WINDOW_WIDTH + 100;
            levelOneWindowObstacle[i].rect.y = (int)700;
            
        }

        if (i == 1)
        {
            window.surface = IMG_Load("images/levelone/obstacles/zombie2.png");
            if (!window.surface)
            {
                printf("Obstacle[i] Error: %s\n", IMG_GetError());
                SDL_DestroyRenderer(app.rend);
                SDL_DestroyWindow(app.window);
                SDL_Quit();
                exit(1);
            }

            levelOneWindowObstacle[i].tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
            SDL_FreeSurface(window.surface);
            if (!levelOneWindowObstacle[i].tex)
            {
                printf("Obstacle[i]  Texture %s\n", SDL_GetError());
                SDL_DestroyRenderer(app.rend);
                SDL_DestroyWindow(app.window);
                SDL_Quit();
                exit(1);
            }

            SDL_QueryTexture(levelOneWindowObstacle[i].tex, NULL, NULL, &levelOneWindowObstacle[i].rect.w, &levelOneWindowObstacle[i].rect.h);
            levelOneWindowObstacle[i].rect.w = (int)224;
            levelOneWindowObstacle[i].rect.h = (int)136;
            levelOneWindowObstacle[i].rect.x = (int)WINDOW_WIDTH + 100;
            levelOneWindowObstacle[i].rect.y = (int)700;
        }

        if (i == 2)
        {
            window.surface = IMG_Load("images/levelone/obstacles/zombieboss.png");
            if (!window.surface)
            {
                printf("Obstacle[i] Error: %s\n", IMG_GetError());
                SDL_DestroyRenderer(app.rend);
                SDL_DestroyWindow(app.window);
                SDL_Quit();
                exit(1);
            }

            levelOneWindowObstacle[i].tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
            SDL_FreeSurface(window.surface);
            if (!levelOneWindowObstacle[i].tex)
            {
                printf("Obstacle[i]  Texture %s\n", SDL_GetError());
                SDL_DestroyRenderer(app.rend);
                SDL_DestroyWindow(app.window);
                SDL_Quit();
                exit(1);
            }

            SDL_QueryTexture(levelOneWindowObstacle[i].tex, NULL, NULL, &levelOneWindowObstacle[i].rect.w, &levelOneWindowObstacle[i].rect.h);
            levelOneWindowObstacle[i].rect.w = (int)102;
            levelOneWindowObstacle[i].rect.h = (int)93;
            levelOneWindowObstacle[i].rect.x = (int)WINDOW_WIDTH * 3;
            levelOneWindowObstacle[i].rect.y = (int)700;
        }
        if (i == 3)
        {
            window.surface = IMG_Load("images/levelone/obstacles/zombie3.png");
            if (!window.surface)
            {
                printf("Obstacle[i] Error: %s\n", IMG_GetError());
                SDL_DestroyRenderer(app.rend);
                SDL_DestroyWindow(app.window);
                SDL_Quit();
                exit(1);
            }

            levelOneWindowObstacle[i].tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
            SDL_FreeSurface(window.surface);
            if (!levelOneWindowObstacle[i].tex)
            {
                printf("Obstacle[i]  Texture %s\n", SDL_GetError());
                SDL_DestroyRenderer(app.rend);
                SDL_DestroyWindow(app.window);
                SDL_Quit();
                exit(1);
            }

            SDL_QueryTexture(levelOneWindowObstacle[i].tex, NULL, NULL, &levelOneWindowObstacle[i].rect.w, &levelOneWindowObstacle[i].rect.h);
            levelOneWindowObstacle[i].rect.w = (int)200;
            levelOneWindowObstacle[i].rect.h = (int)100;
            levelOneWindowObstacle[i].rect.x = (int)WINDOW_WIDTH * 3;
            levelOneWindowObstacle[i].rect.y = (int)200;
        }
        if (i == 4)
        {
            window.surface = IMG_Load("images/levelone/obstacles/getlife.png");
            if (!window.surface)
            {
                printf("Obstacle[i] Error: %s\n", IMG_GetError());
                SDL_DestroyRenderer(app.rend);
                SDL_DestroyWindow(app.window);
                SDL_Quit();
                exit(1);
            }

            levelOneWindowObstacle[i].tex = SDL_CreateTextureFromSurface(app.rend, window.surface);
            SDL_FreeSurface(window.surface);
            if (!levelOneWindowObstacle[i].tex)
            {
                printf("Obstacle[i]  Texture %s\n", SDL_GetError());
                SDL_DestroyRenderer(app.rend);
                SDL_DestroyWindow(app.window);
                SDL_Quit();
                exit(1);
            }

            SDL_QueryTexture(levelOneWindowObstacle[i].tex, NULL, NULL, &levelOneWindowObstacle[i].rect.w, &levelOneWindowObstacle[i].rect.h);
            levelOneWindowObstacle[i].rect.w = (int)50;
            levelOneWindowObstacle[i].rect.h = (int)50;
            levelOneWindowObstacle[i].rect.x = (int)WINDOW_WIDTH * 3;
            levelOneWindowObstacle[i].rect.y = (int)450 - rand() % 300;
        }
        
    }
}

//funtion to destroy the textures of obstacles
void levelOneObstacleCleanUp()
{
    for (int i = 0; i < 5; i++)
    {
        SDL_DestroyTexture(levelOneWindowObstacle[i].tex);
    }
}

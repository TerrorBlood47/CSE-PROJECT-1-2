#include "updateScore.h"
void updateScore()
{
	sprintf(L1ScoreString, "%i", L1CurrentScore);
	
    levelOneWindowScoreText.surface = TTF_RenderText_Solid(variables.font, L1ScoreString, variables.color);

    if (!levelOneWindowScoreText.surface)
    {
        printf("levelOneWindowScoreText Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }

    levelOneWindowScoreText.tex = SDL_CreateTextureFromSurface(app.rend, levelOneWindowScoreText.surface);
    if (!levelOneWindowScoreText.tex)
    {
        printf("levelOneWindowScoreText Texture %s\n", SDL_GetError());
        SDL_DestroyRenderer(app.rend);
        SDL_DestroyWindow(app.window);
        SDL_Quit();
        exit(1);
    }
    SDL_QueryTexture(levelOneWindowScoreText.tex, NULL, NULL, &levelOneWindowScoreText.rect.w, &levelOneWindowScoreText.rect.h);
    levelOneWindowScoreText.rect.w = (int)levelOneWindowScoreText.surface->w;
    levelOneWindowScoreText.rect.h = (int)levelOneWindowScoreText.surface->h;
    levelOneWindowScoreText.rect.x = (int)150;
    levelOneWindowScoreText.rect.y = (int)45;
}
void levelOneScoreCleanUp() //cleaing up the textures and surfaces
{
    SDL_DestroyTexture(levelOneWindowScoreText.tex);
    SDL_FreeSurface(levelOneWindowScoreText.surface);
}

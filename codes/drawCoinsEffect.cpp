#include "drawCoinsEffect.h"

//funtion to delay the effect after getting a coin
void coineffectdelay()
{
    for (int i = 0; i < 5; i++)
    {
        if (levelOneWindowCoins[i].rect.x == 300)
        {
            levelOneWindowCoinsEffect[i].rect.h = 0;
            levelOneWindowCoinsEffect[i].rect.w = 0;
        }
    }
}
//funtion to determine what happens after getting a coin
void coinseffectupdateanimation()
{

    L1PointEffectAnimationSpeed[0] -= 8;
    if (L1PointEffectAnimationSpeed[0] < -1280)
    {
        L1PointEffectAnimationSpeed[0] = WINDOW_WIDTH;
        //setting the coin getting effect to zero when new window arrives
        levelOneWindowCoinsEffect[0].rect.h = 0;
        levelOneWindowCoinsEffect[0].rect.w = 0;
        levelOneWindowCoinsEffect[0].rect.y = levelOneWindowCoins[0].rect.y;
    }

    L1PointEffectAnimationSpeed[1] -= 7;
    if (L1PointEffectAnimationSpeed[1] < -1280)
    {
        L1PointEffectAnimationSpeed[1] = WINDOW_WIDTH;

        levelOneWindowCoinsEffect[1].rect.h = 0;
        levelOneWindowCoinsEffect[1].rect.w = 0;
        levelOneWindowCoinsEffect[1].rect.y = levelOneWindowCoins[1].rect.y;
    }

    L1PointEffectAnimationSpeed[2] -= 6;
    if (L1PointEffectAnimationSpeed[2] < -1280)
    {
        L1PointEffectAnimationSpeed[2] = WINDOW_WIDTH;

        levelOneWindowCoinsEffect[2].rect.h = 0;
        levelOneWindowCoinsEffect[2].rect.w = 0;
        levelOneWindowCoinsEffect[2].rect.y = levelOneWindowCoins[2].rect.y;
    }

    L1PointEffectAnimationSpeed[3] -= 5;
    if (L1PointEffectAnimationSpeed[3] < -1280)
    {
        L1PointEffectAnimationSpeed[3] = WINDOW_WIDTH;

        levelOneWindowCoinsEffect[3].rect.h = 0;
        levelOneWindowCoinsEffect[3].rect.w = 0;
        levelOneWindowCoinsEffect[3].rect.y = levelOneWindowCoins[3].rect.y;
    }

    L1PointEffectAnimationSpeed[4] -= 4;
    if (L1PointEffectAnimationSpeed[4] < -1280)
    {
        L1PointEffectAnimationSpeed[4] = WINDOW_WIDTH;

        levelOneWindowCoinsEffect[4].rect.h = 0;
        levelOneWindowCoinsEffect[4].rect.w = 0;
        levelOneWindowCoinsEffect[4].rect.y = levelOneWindowCoins[4].rect.y;
    }
}
//funtion to show the effect after getting a coin
void drawCoinsEffectFunction()
{
    coinseffectupdateanimation();
    coineffectdelay();
    for (int i = 0; i < 5; i++)
    {

        SDL_RenderCopy(app.rend, levelOneWindowCoinsEffect[i].tex, NULL, &levelOneWindowCoinsEffect[i].rect);
        levelOneWindowCoinsEffect[i].rect.x = L1PointEffectAnimationSpeed[i] + 100;
        SDL_RenderCopy(app.rend, levelOneWindowCoinsEffect[i].tex, NULL, &levelOneWindowCoinsEffect[i].rect);
    }
}

#include "collisionLevelOne.h"

void collision()
{   
    
    for (int i = 0; i < 5; i++)
    {
        if (SDL_HasIntersection(&characterFramePosition.rect, &levelOneWindowCoins[i].rect))
        {   
            Mix_VolumeChunk(levelOneCoingain, 40);
            Mix_PlayChannel(-1, levelOneCoingain, 0);
            levelOneWindowCoins[i].rect.h = 0;
            levelOneWindowCoins[i].rect.w = 0;
            levelOneWindowCoinsEffect[i].rect.h = int(100);
            levelOneWindowCoinsEffect[i].rect.w = int(100);
            levelOneCurrentScore += 1;
            coineffectdelay();
        }
    }
    for (int i = 0; i < 4; i++)
    {
	    if (SDL_HasIntersection(&characterFramePosition.rect, &levelOneWindowObstacle[i].rect))
	    {   
	        Mix_PlayChannel(-1, hitLevelOne, 0);
	        SDL_SetTextureColorMod(levelOneWindowCharacter.tex, 255, 0, 0);
	        levelOneWindowObstacle[i].rect.h = 0;
	        levelOneWindowObstacle[i].rect.w = 0;
	        levelOneLifeAnimationSpeed[i] = 700;
	        levelOneLifeLoss[i].rect.h = int(60);
	        levelOneLifeLoss[i].rect.w = int(60);
	        levelOneCurrentScore -= 1;
	        
	        if (lifeSize >= 1)
	        {
	            lifeSize--;
	            break;
	        }
	    }
    }
    if (SDL_HasIntersection(&characterFramePosition.rect, &levelOneWindowObstacle[4].rect))
	    {   
	        Mix_PlayChannel(-1, hitLevelOne, 0);
	        SDL_SetTextureColorMod(levelOneWindowCharacter.tex, 255, 0, 0);
	        levelOneWindowObstacle[4].rect.h = 0;
	        levelOneWindowObstacle[4].rect.w = 0;
	        levelOneCurrentScore += 10;
	        
	        
	    }
}


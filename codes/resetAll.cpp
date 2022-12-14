#include "resetAll.h"

void resetAll() // Resetting all the variables
{
    variables.gameWindowBegin = 1;
    variables.levelOne = 0;
    variables.chooseLevel = 0;
    variables.levelOneCompleted = 0;
    variables.newScore = 0;
    space = 0;
    levelOneWindowTrack.rect.x = 0;
    variables.levelOnegameOver = 0;
    
    lifeSize = 4;
    
    updateScore();
    
	L1SkyAnimationSpeed = 0;
    levelOneMountainsAnimationSpeed = 0;
    levelOneTreeShadeAnimationSpeed = 0;
    levelOneTreesAnimationSpeed = 0;
    levelOneCloudsAnimationSpeed = 0;
    levelOneTrackAnimationSpeed = 0;

    L1CharXpos = 0;
    L1CharYpos = 665;

    for (int i = 0; i < 5; i++)
    {
        L1PointEffectAnimationSpeed[i] = 0;
        L1PointAnimationSpeed[i] = 0;
    }

    for (int i = 0; i < 5; i++)
    {
        levelOneObstacleAnimationSpeed[i] = 1380;
        levelOneLifeAnimationSpeed[i] = 700;
        levelOneLifeLoss[i].rect.w = (int)0;
        levelOneLifeLoss[i].rect.h = (int)0;
    }
    FinishLine = 30000;
    count = 0;
    L1CurrentScore = 0;
    
    SDL_SetTextureColorMod(levelOneWindowCharacter.tex, 255, 255, 255);
}

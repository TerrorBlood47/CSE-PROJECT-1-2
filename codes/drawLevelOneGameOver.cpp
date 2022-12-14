#include "drawLevelOneGameOver.h"

//updating the component speeds for the gameover window
void updateAnimationSpeedForLevelOneGameOver()
{   
    //getting the current time
    L1BackgroundPrevtime = L1BackgroundCurrenttime;
    L1BackgroundCurrenttime = SDL_GetTicks();
    L1BackgroundDeltatime = (L1BackgroundCurrenttime - L1BackgroundPrevtime) / 20.0f;

    L1BackgroundFrametime += L1BackgroundDeltatime;
    if (L1BackgroundFrametime >= (0.25f))
    {
        L1BackgroundFrametime = 0.0;

        L1SkyAnimationSpeed -= 0.412;
        if (L1SkyAnimationSpeed < -levelOneWindowSky.rect.w)
        {
            L1SkyAnimationSpeed = 0;
        }
        levelOneCloudsAnimationSpeed -= 0.812;
        if (levelOneCloudsAnimationSpeed < -levelOneWindowClouds.rect.w)
        {
            levelOneCloudsAnimationSpeed = 0;
        }
        levelOneMountainsAnimationSpeed -= 1.625;
        if (levelOneMountainsAnimationSpeed < -levelOneWindowMountains.rect.w)
        {
            levelOneMountainsAnimationSpeed = 0;
        }

        levelOneTreeShadeAnimationSpeed -= 2.125;
        if (levelOneTreeShadeAnimationSpeed < -levelOneWindowTreeShade.rect.w)
        {
            levelOneTreeShadeAnimationSpeed = 0;
        }

        levelOneTreesAnimationSpeed -= 4.25;
        if (levelOneTreesAnimationSpeed < -levelOneWindowTrees.rect.w)
        {
            levelOneTreesAnimationSpeed = 0;
        }

        levelOneTrackAnimationSpeed -= 5.5;
        if (levelOneTrackAnimationSpeed < -levelOneWindowTrack.rect.w)
        {
            levelOneTrackAnimationSpeed = 0;
        }
    }
}
//funtion to render the components of the gameover window
void drawLevelOneGameOverFunction()
{
    //what will happen if the game is over
    if (variables.levelOnegameOver == 1)
    {
        updateAnimationSpeedForLevelOneGameOver();
    }
    if (lifeSize == 0 && variables.levelOnegameOver == 1)
    {
        updateScore();
    }

    levelOneWindowSky.rect.x = L1SkyAnimationSpeed;
    levelOneWindowMountains.rect.x = levelOneMountainsAnimationSpeed;
    levelOneWindowTreeShade.rect.x = levelOneTreeShadeAnimationSpeed;
    levelOneWindowTrees.rect.x = levelOneTreesAnimationSpeed;
    levelOneWindowClouds.rect.x = levelOneCloudsAnimationSpeed;
    levelOneWindowTrack.rect.x = levelOneTrackAnimationSpeed;
    //rendering all the elements of the gameover window
    SDL_RenderClear(app.rend);

    SDL_RenderCopy(app.rend, levelOneWindowSky.tex, NULL, &levelOneWindowSky.rect);
    levelOneWindowSky.rect.x = L1SkyAnimationSpeed + levelOneWindowSky.rect.w;
    SDL_RenderCopy(app.rend, levelOneWindowSky.tex, NULL, &levelOneWindowSky.rect);

    SDL_RenderCopy(app.rend, levelOneWindowSun.tex, NULL, &levelOneWindowSun.rect);

    SDL_RenderCopy(app.rend, levelOneWindowClouds.tex, NULL, &levelOneWindowClouds.rect);
    levelOneWindowClouds.rect.x = levelOneCloudsAnimationSpeed + levelOneWindowClouds.rect.w;
    SDL_RenderCopy(app.rend, levelOneWindowClouds.tex, NULL, &levelOneWindowClouds.rect);

    SDL_RenderCopy(app.rend, levelOneWindowMountains.tex, NULL, &levelOneWindowMountains.rect);
    levelOneWindowMountains.rect.x = levelOneMountainsAnimationSpeed + levelOneWindowMountains.rect.w;
    SDL_RenderCopy(app.rend, levelOneWindowMountains.tex, NULL, &levelOneWindowMountains.rect);

    SDL_RenderCopy(app.rend, levelOneWindowTreeShade.tex, NULL, &levelOneWindowTreeShade.rect);
    levelOneWindowTreeShade.rect.x = levelOneTreeShadeAnimationSpeed + levelOneWindowTreeShade.rect.w;
    SDL_RenderCopy(app.rend, levelOneWindowTreeShade.tex, NULL, &levelOneWindowTreeShade.rect);

    SDL_RenderCopy(app.rend, levelOneWindowTrees.tex, NULL, &levelOneWindowTrees.rect);
    levelOneWindowTrees.rect.x = levelOneTreesAnimationSpeed + levelOneWindowTrees.rect.w;
    SDL_RenderCopy(app.rend, levelOneWindowTrees.tex, NULL, &levelOneWindowTrees.rect);

    SDL_RenderCopy(app.rend, levelOneWindowTrack.tex, NULL, &levelOneWindowTrack.rect);
    levelOneWindowTrack.rect.x = levelOneTrackAnimationSpeed + levelOneWindowTrack.rect.w;
    SDL_RenderCopy(app.rend, levelOneWindowTrack.tex, NULL, &levelOneWindowTrack.rect);

    SDL_RenderCopy(app.rend, levelOneWindowScore.tex, NULL, &levelOneWindowScore.rect);
    //SDL_RenderCopy(app.rend, levelOneWindowHighScore.tex, NULL, &levelOneWindowHighScore.rect);
    SDL_RenderCopy(app.rend, levelOneWindowScoreText.tex, NULL, &levelOneWindowScoreText.rect);
    //SDL_RenderCopy(app.rend, levelOneWindowHighScoreText.tex, NULL, &levelOneWindowHighScoreText.rect);
    //rendering the gameover message
    SDL_RenderCopy(app.rend, levelOneCompletedOverlay.tex, NULL, &levelOneCompletedOverlay.rect);
    SDL_RenderCopy(app.rend, levelOneGameOverMessage.tex, NULL, &levelOneGameOverMessage.rect);
    SDL_RenderCopy(app.rend, back.tex, NULL, &back.rect);
}

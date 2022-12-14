#include "drawLevelOneWindow.h"

//funtion to add the animation effects
void updateAnimationSpeedForLevelOneWindow()
{
    //getting the current time 
    L1CharPrevtime = L1CharCurrentime;
    L1CharCurrentime = SDL_GetTicks();
    L1CharDeltatime = (L1CharCurrentime - L1CharPrevtime) / 380.0f;
    

    L1CharJumpPrevtime = L1CharJumpCurrenttime;
    L1CharJumpCurrenttime = SDL_GetTicks();
    L1CharJumpDeltatime = (L1CharJumpCurrenttime - L1CharJumpPrevtime) / 40.0f;
    
	
	L1BackgroundPrevtime = L1BackgroundCurrenttime;
	L1BackgroundCurrenttime = SDL_GetTicks();
	L1BackgroundDeltatime = (L1BackgroundCurrenttime - L1BackgroundPrevtime) / 40.0f;
	
	
	
    //character sprite movement
    L1CharFrametime += L1CharDeltatime;
    if (L1CharFrametime >= (0.25f))
    {
        L1CharFrametime = 0.0;
        levelOneWindowCharacter.rect.x += L1CharFramewidth;

        if (levelOneWindowCharacter.rect.x >= L1CharTexturewidth)
        {
            levelOneWindowCharacter.rect.x = 0;
        }
    }
    
	
    //when the character reaches the end
    if (characterFramePosition.rect.x >= levelOneFinish.rect.x + 10)
    {
        variables.levelOneCompleted = 1;
        variables.levelOne = 0;
    }

    L1BackgroundFrametime += L1BackgroundDeltatime;
    if (L1BackgroundFrametime >= (0.25f))
    {
        L1BackgroundFrametime = 0.0;
        
        L1SkyAnimationSpeed -= 0.412;
        //setting the movement speed for sky
        if (L1SkyAnimationSpeed < -levelOneWindowSky.rect.w)
        {
            L1SkyAnimationSpeed = 0;
        }
         //setting the movement speed for mountains
        levelOneMountainsAnimationSpeed -= 1.625;
        if (levelOneMountainsAnimationSpeed < -levelOneWindowMountains.rect.w)
        {
            levelOneMountainsAnimationSpeed = 0;
        }
         //setting the movement speed for treeshade
        levelOneTreeShadeAnimationSpeed -= 2.125;
        if (levelOneTreeShadeAnimationSpeed < -levelOneWindowTreeShade.rect.w)
        {
            levelOneTreeShadeAnimationSpeed = 0;
        }
         //setting the movement speed for trees
        levelOneTreesAnimationSpeed -= 4.25;
        if (levelOneTreesAnimationSpeed < -levelOneWindowTrees.rect.w)
        {
            levelOneTreesAnimationSpeed = 0;
        }
          //setting the movement speed for track
        levelOneTrackAnimationSpeed -= 5.5;
        if (levelOneTrackAnimationSpeed < -levelOneWindowTrack.rect.w)
        {
            levelOneTrackAnimationSpeed = 0;
        }
        	//setting the velocity of sun
        levelOneSunAnimationSpeed -= 0.943;
        if (levelOneSunAnimationSpeed < -2*levelOneWindowSun.rect.w + 250)
        {
            levelOneSunAnimationSpeed = levelOneWindowSun.rect.w;
        }
    }
    //resetting the character position
    if (L1CharYpos <= 40)
    {
        L1CharYpos = 40;
    }
    if (L1CharXpos >= 1100)
    {
        L1CharXpos = 1100;
    }
    if (L1CharYpos >= 665)
    {
        L1CharYpos = 665;
    }
    if (L1CharXpos < 50)
    {
        L1CharXpos = 50;
    }
   
    characterFramePosition.rect.x = L1CharXpos; // Setting the character in the window position
    characterFramePosition.rect.y = L1CharYpos;
	
	
    //setting the jump effect
    L1CharJumpFrametime += L1CharJumpDeltatime;

    if (L1CharJumpFrametime >= (0.25f))
    {
        L1CharJumpFrametime = 0.0f;
        if (L1CharYpos < 665)
        {
            L1CharYpos += SCROLL_SPEED / 70;
            L1CharXpos += SCROLL_SPEED / 150;
        }
    }

    if (lifeSize == 0)
    {
        variables.levelOne = 0;
        variables.levelOnegameOver = 1;
        Mix_PlayChannel(-1, gameOver, 0);
    }
    FinishLine -= 3;


}
//funtion to load all the animations
void drawLevelOneWindowFunction()
{

    if (variables.levelOne == 1 && space == 1)
    {
        updateAnimationSpeedForLevelOneWindow();
        updateScore();
    }
    //characterFramePosition.rect.x = L1CharXpos;
    //setting the clouds animation speed
    levelOneCloudsAnimationSpeed -= 0.912;
    if (levelOneCloudsAnimationSpeed < -levelOneWindowClouds.rect.w)
    {
        levelOneCloudsAnimationSpeed = 0;
    }
    
    levelOneWindowSky.rect.x = L1SkyAnimationSpeed;
    levelOneWindowMountains.rect.x = levelOneMountainsAnimationSpeed;
    levelOneWindowTreeShade.rect.x = levelOneTreeShadeAnimationSpeed;
    levelOneWindowTrees.rect.x = levelOneTreesAnimationSpeed;
    levelOneWindowClouds.rect.x = levelOneCloudsAnimationSpeed;
    levelOneWindowTrack.rect.x = levelOneTrackAnimationSpeed;
    levelOneFinish.rect.x = FinishLine;

    //rendering all the objects
    SDL_RenderClear(app.rend);
    
    //rendering the elements everytime new window comes
    SDL_RenderCopy(app.rend, levelOneWindowSky.tex, NULL, &levelOneWindowSky.rect);
    levelOneWindowSky.rect.x = L1SkyAnimationSpeed + levelOneWindowSky.rect.w;
    SDL_RenderCopy(app.rend, levelOneWindowSky.tex, NULL, &levelOneWindowSky.rect);

    SDL_RenderCopy(app.rend, levelOneWindowSun.tex, NULL, &levelOneWindowSun.rect);
    levelOneWindowSun.rect.x = levelOneSunAnimationSpeed + levelOneWindowSun.rect.w;
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
    SDL_RenderCopy(app.rend, levelOneWindowScoreText.tex, NULL, &levelOneWindowScoreText.rect);
    if (variables.levelOne == 1 && space == 0)
        SDL_RenderCopy(app.rend, initialInstructions.tex, NULL, &initialInstructions.rect);

    if (variables.levelOne == 1 && space == 1)
    {
        SDL_RenderCopy(app.rend, levelOneWindowCharacter.tex, &levelOneWindowCharacter.rect, &characterFramePosition.rect);
    }

    SDL_RenderCopy(app.rend, back.tex, NULL, &back.rect);
    
    //calling the functions for showing rewards and obstacles
    if (variables.levelOne == 1 && space == 1)
    {
        drawCoinsFunction();
        levelOneDrawObstacleFunction();
        
        //calling the funtion to detect collision
        collision();
        drawCoinsEffectFunction();
        levelOneDrawLifeFunction();
        levelOneDrawLifeLossFunction();
    }
    SDL_RenderCopy(app.rend, levelOneFinish.tex, NULL, &levelOneFinish.rect);
}

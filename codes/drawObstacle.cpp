#include "drawObstacle.h"

//function to control the speeeds of the obstacles
void levelOneObstacleUpdateAnimation()
{
	
	levelOneObstacleAnimationSpeed[0] -= 5;
	//reloading the obstacles everytime new window arrives
	if (levelOneObstacleAnimationSpeed[0] < -400)
	{
	    levelOneObstacleAnimationSpeed[0] = WINDOW_WIDTH + 100;
	    levelOneWindowObstacle[0].rect.w = (int)200;
	    levelOneWindowObstacle[0].rect.h = (int)70;
	}
	
	levelOneObstacleAnimationSpeed[1] -= 5;
	if (levelOneObstacleAnimationSpeed[1] < -WINDOW_WIDTH - 100)
	{
	    levelOneObstacleAnimationSpeed[1] = WINDOW_WIDTH * 2;
	    levelOneWindowObstacle[1].rect.w = (int)224;
	    levelOneWindowObstacle[1].rect.h = (int)136;
	}

	levelOneObstacleAnimationSpeed[2] -= 5;
	if (levelOneObstacleAnimationSpeed[2] < -WINDOW_WIDTH - 100)
	{
	    levelOneObstacleAnimationSpeed[2] = WINDOW_WIDTH * 3;
	    levelOneWindowObstacle[2].rect.w = (int)102;
	    levelOneWindowObstacle[2].rect.h = (int)93;
	}
	levelOneObstacleAnimationSpeed[3] -= 5;
	if (levelOneObstacleAnimationSpeed[3] < -WINDOW_WIDTH - 100)
	{
	    levelOneObstacleAnimationSpeed[3] = WINDOW_WIDTH * 3;
	    levelOneWindowObstacle[3].rect.w = (int)200;
	    levelOneWindowObstacle[3].rect.h = (int)100;
	}
	levelOneObstacleAnimationSpeed[4] -= 8;
	if (levelOneObstacleAnimationSpeed[4] < -WINDOW_WIDTH - 100)
	{
	    levelOneObstacleAnimationSpeed[4] = WINDOW_WIDTH * 4;
	    levelOneWindowObstacle[4].rect.w = (int)50;
	    levelOneWindowObstacle[4].rect.h = (int)50;
	    
	    levelOneWindowObstacle[4].rect.y = (int)450 - rand() % 300;
	}
}
//funtion to load the obstacle animations
void levelOneDrawObstacleFunction()
{
    levelOneObstacleUpdateAnimation();
    //rendering the obstacles
    for (int i = 0; i < 5; i++)
    {
        levelOneWindowObstacle[i].rect.x = levelOneObstacleAnimationSpeed[i] + 500 * i;
        SDL_RenderCopy(app.rend, levelOneWindowObstacle[i].tex, NULL, &levelOneWindowObstacle[i].rect);
    }
}

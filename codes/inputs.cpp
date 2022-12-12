#include "inputs.h"

void doInput(void)
{
    SDL_Event event;

    while (SDL_PollEvent(&event))
    {

        if (event.type == SDL_QUIT)
        {
            exit(0);
        }
        //level one Key Events

        if (variables.levelOne == 1)
        {
		    if (event.type == SDL_KEYDOWN)
		    {
		    	if (event.key.keysym.scancode == SDL_SCANCODE_SPACE)
                {
                    space = 1;
                } 
	            if (event.key.keysym.scancode == SDL_SCANCODE_UP)
	            {
	                levelOneCharacterYposition -= levelOneMoveSpeed * levelOneCharacterDeltatime + 300;
	                
	                SDL_SetTextureColorMod(levelOneWindowCharacter.tex, 255, 255, 255);
	            }
	            else if (event.key.keysym.scancode == SDL_SCANCODE_DOWN)
	            {
	                levelOneCharacterYposition += levelOneMoveSpeed * levelOneCharacterDeltatime + 300;
	                SDL_SetTextureColorMod(levelOneWindowCharacter.tex, 255, 255, 255);
	            }
	            else if (event.key.keysym.scancode == SDL_SCANCODE_RIGHT)
	            {
					levelOneCharacterXposition += 50;
					SDL_SetTextureColorMod(levelOneWindowCharacter.tex, 255, 255, 255);
                    
	                
	                SDL_SetTextureColorMod(levelOneWindowCharacter.tex, 255, 255, 255);
	            }
	            else if (event.key.keysym.scancode == SDL_SCANCODE_LEFT)
	            {
	            	levelOneCharacterXposition -= 50;
	                SDL_SetTextureColorMod(levelOneWindowCharacter.tex, 255, 255, 255);
	            }
		    }
		        
        }

    
    }

    // mouse events for all levels

    int mousex, mousey;
    int buttons = SDL_GetMouseState(&mousex, &mousey);
    if (buttons & SDL_BUTTON(SDL_BUTTON_LEFT))
    {
    	//level choosing page
        if (variables.gameWindowBegin == 1 && (mousex >= welcomeWindowNewgameButton.rect.x && mousex <= (welcomeWindowNewgameButton.rect.x + welcomeWindowNewgameButton.rect.w) && mousey >= welcomeWindowNewgameButton.rect.y && mousey <= (welcomeWindowNewgameButton.rect.y + welcomeWindowNewgameButton.rect.h)))
        {
            variables.chooseLevel = 1;
            variables.levelOne = 0;
            variables.gameWindowBegin = 0;
            variables.levelOneCompleted = 0;
            
            variables.levelOnegameOver = 0;
             Mix_VolumeMusic(128); //adjusting volume
            Mix_PlayChannel(-1, click, 0);
        }
        
        if (variables.chooseLevel == 1 && (mousex >= newgameWindowlevelOneButton.rect.x && mousex <= (newgameWindowlevelOneButton.rect.x + newgameWindowlevelOneButton.rect.w) && mousey >= newgameWindowlevelOneButton.rect.y && mousey <= (newgameWindowlevelOneButton.rect.y + newgameWindowlevelOneButton.rect.h)))
        {
            
            variables.levelOne = 1;
            variables.chooseLevel = 0;
            variables.gameWindowBegin = 0;
            variables.levelOneCompleted = 0;
           
            variables.levelOnegameOver = 0;
            
            Mix_VolumeMusic(90); //adjusting volume
            Mix_PlayMusic(whoWeWantToBe, 0);
            Mix_PlayChannel(-1, click, 0);
        }


        //after tapping BACK button in the game
        if (mousex >= back.rect.x && mousex <= (back.rect.x + back.rect.w) && mousey >= back.rect.y && mousey <= (back.rect.y + back.rect.h))
        {

            if (variables.levelOneCompleted == 1  || variables.levelOne == 1 || variables.levelOnegameOver == 1)
            {	 Mix_VolumeMusic(128); //adjusting volume
                Mix_PlayMusic(background, -1);
            }

            resetAll();
        }
    }
}
 

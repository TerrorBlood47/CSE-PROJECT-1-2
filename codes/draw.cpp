#include "draw.h"
void prepareScene(void) //Calling functions based on players command
{

    if (variables.gameWindowBegin == 1)
    {
        drawWelcomeWindowFunction();
    }

    if (variables.chooseLevel == 1)
    {
        drawNewgameWindowFunction();
    }

    if (variables.levelOne == 1)
    {
        drawLevelOneWindowFunction();
    }
    if (variables.levelOneCompleted == 1)
    {
        drawLevelOneCompletedFunction();
    }
    if (variables.levelOnegameOver == 1)
    {
        drawLevelOneGameOverFunction();
    }
    
}

void presentScene(void) //Presenting the Window
{
    SDL_RenderPresent(app.rend);
}

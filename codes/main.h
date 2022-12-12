#include "commonHeaders.h"

App app;
component
    //welcome window Components

    welcomeWindowSky,
    welcomeWindowBirds,
    welcomeWindowMountains,
    welcomeWindowTrees,
    welcomeWindowGameTitle,
    welcomeWindowNewgameButton,
    
    //newgame Window Components

    newgameWindowlevelOneButton,

    //level One Components

    levelOneWindowSky,
    levelOneWindowSun,
    levelOneWindowMountains,
    levelOneWindowTreeShade,
    levelOneWindowTrees,
    levelOneWindowClouds,
    levelOneWindowTrack,
    levelOneWindowCharacter,
    levelOneWindowScore,
    levelOneWindowScoreText,
    levelOneCompletedOverlay,
    levelOneCompletedMessage,
    levelOneFinish, initialInstructions,
    levelOneWindowCoins[5],
    levelOneWindowObstacle[5],
    levelOneWindowLife[6],
    levelOneWindowCoinsEffect[5],
    levelOneLifeLoss[5],

    window,
    

    //Level Two Components
	characterFramePosition,


    levelOneGameOverOverlay,
    levelOneGameOverMessage,

	back;

Variables variables;

extern void cleanup(void);
extern void initSDL(void);
extern void prepareScene(void);
extern void presentScene(void);
extern void doInput(void);

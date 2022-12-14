#include "commonHeaders.h"
extern App app;
extern component

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
    levelOneFinish,
    initialInstructions,

    characterFramePosition,
    
    levelOneWindowCoins[5],
    levelOneWindowObstacle[5],

    back;

extern Variables variables;
extern void updateScore(void);
extern void drawCoinsFunction(void);
extern void levelOneDrawObstacleFunction(void);
extern void levelOneDrawLifeFunction(void);
extern void levelOneDrawLifeLossFunction();

extern void collision(void);
extern void drawCoinsEffectFunction(void);

#include "variablesLevelOne.h"

// welcome window animation speed

float welcomeWindowSkyAnimationSpeed = 0;
float welcomeWindowMountainsAnimationSpeed = 0;
float welcomeWindowBirdsAnimationSpeed = 0;

float levelOneSkyAnimationSpeed = 0, levelOneMountainsAnimationSpeed = 0,
      levelOneTreeShadeAnimationSpeed = 0, levelOneTreesAnimationSpeed = 0,
      levelOneTrackAnimationSpeed = 0, levelOneCloudsAnimationSpeed = 0, levelOneSunAnimationSpeed = 0;

int levelOneCharacterFramewidth = 0, levelOneCharacterFrameheight = 0,
    levelOneCharacterTexturewidth = 0, levelOneCharacterTextureheight = 0;

float levelOneCharacterFrametime = 0;
int levelOneCharacterPrevtime = 0;
int levelOneCharacterCurrentime = 0;
float levelOneCharacterDeltatime = 0;

char levelOneScoreString[10];
int levelOneCurrentScore = 0;


float levelOneMoveSpeed = 0;

     

int space = 0;

float levelOneCharacterXposition = 200,
      levelOneCharacterYposition = 665;

int levelOneCharacterJumpCurrenttime = 0, levelOneCharacterJumpPrevtime = 0;
float levelOneCharacterJumpDeltatime = 0, levelOneCharacterJumpFrametime = 0;


int levelOneBackgroundCurrenttime = 0, levelOneBackgroundPrevtime = 0;
float levelOneBackgroundDeltatime = 0, levelOneBackgroundFrametime = 0;

int levelOnePointEffectAnimationSpeed[5];
int levelOnePointAnimationSpeed[5];
int levelOneObstacleAnimationSpeed[5] = {1380, 1380, 1380, 1380, 1380};
int levelOneLifeAnimationSpeed[5] = {700, 700, 700, 700, 700};
int FinishLine = 30000;
int count = 0;

int lifeSize = 5;

Mix_Music *background, *whoWeWantToBe;
Mix_Chunk *levelOneCoingain, *hitLevelOne, *gameOver, *click;

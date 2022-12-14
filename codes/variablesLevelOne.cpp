#include "variablesLevelOne.h"

// welcome window animation speed

float startSkyAnimationSpeed = 0;
float startMountainsAnimationSpeed = 0;
float startBirdsAnimationSpeed = 0;

/////////////
float L1SkyAnimationSpeed = 0, levelOneMountainsAnimationSpeed = 0,
      levelOneTreeShadeAnimationSpeed = 0, levelOneTreesAnimationSpeed = 0,
      levelOneTrackAnimationSpeed = 0, levelOneCloudsAnimationSpeed = 0, levelOneSunAnimationSpeed = 0;
/////////////pore zisan er sathe kotha bolte hobe eta niye


int L1CharFramewidth = 0, L1CharFrameheight = 0,
    L1CharTexturewidth = 0, L1CharTextureheight = 0;

float L1CharFrametime = 0;
int L1CharPrevtime = 0;
int L1CharCurrentime = 0;
float L1CharDeltatime = 0;

char L1ScoreString[10];
int L1CurrentScore = 0;


float L1MoveSpeed = 0;

     

int space = 0;

float L1CharXpos = 200,
      L1CharYpos = 665;

int L1CharJumpCurrenttime = 0, L1CharJumpPrevtime = 0;
float L1CharJumpDeltatime = 0, L1CharJumpFrametime = 0;


int L1BackgroundCurrenttime = 0, L1BackgroundPrevtime = 0;
float L1BackgroundDeltatime = 0, L1BackgroundFrametime = 0;

int L1PointEffectAnimationSpeed[5];
int L1PointAnimationSpeed[5];
int levelOneObstacleAnimationSpeed[5] = {1380, 1380, 1380, 1380, 1380};
int levelOneLifeAnimationSpeed[5] = {700, 700, 700, 700, 700};
int FinishLine = 30000;
int count = 0;

int lifeSize = 5;

Mix_Music *background, *whoWeWantToBe;
Mix_Chunk *levelOneCoingain, *hitLevelOne, *gameOver, *click;

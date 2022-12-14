#include <SDL2/SDL_mixer.h>
extern float startSkyAnimationSpeed;
extern float startMountainsAnimationSpeed;
extern float startBirdsAnimationSpeed;

extern float L1SkyAnimationSpeed, levelOneMountainsAnimationSpeed,
    levelOneTreeShadeAnimationSpeed, levelOneTreesAnimationSpeed,
    levelOneTrackAnimationSpeed, levelOneCloudsAnimationSpeed, levelOneSunAnimationSpeed;

extern int L1CharFramewidth, L1CharFrameheight,
    L1CharTexturewidth, L1CharTextureheight;

extern float L1CharFrametime;
extern int L1CharPrevtime;
extern int L1CharCurrentime;
extern float L1CharDeltatime;

extern float L1MoveSpeed;

extern char L1ScoreString[10];
extern int L1CurrentScore;

extern int space;

extern float L1CharXpos,
    L1CharYpos;

extern int L1CharJumpCurrenttime, L1CharJumpPrevtime;
extern float L1CharJumpDeltatime, L1CharJumpFrametime;


extern int L1BackgroundCurrenttime, L1BackgroundPrevtime;
extern float L1BackgroundDeltatime, L1BackgroundFrametime;

///////////////
extern int  L1PointEffectAnimationSpeed[5],
    L1PointAnimationSpeed[5], levelOneObstacleAnimationSpeed[5], levelOneLifeAnimationSpeed[5];
///////////////POINT=?,LIFE=??

extern int FinishLine;
extern int count;
extern int lifeSize;
extern Mix_Music *background, *whoWeWantToBe;
extern Mix_Chunk *levelOneCoingain, *hitLevelOne, *gameOver, *click;

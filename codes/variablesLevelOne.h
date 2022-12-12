#include <SDL2/SDL_mixer.h>
extern float welcomeWindowSkyAnimationSpeed;
extern float welcomeWindowMountainsAnimationSpeed;
extern float welcomeWindowBirdsAnimationSpeed;

extern float levelOneSkyAnimationSpeed, levelOneMountainsAnimationSpeed,
    levelOneTreeShadeAnimationSpeed, levelOneTreesAnimationSpeed,
    levelOneTrackAnimationSpeed, levelOneCloudsAnimationSpeed, levelOneSunAnimationSpeed;

extern int levelOneCharacterFramewidth, levelOneCharacterFrameheight,
    levelOneCharacterTexturewidth, levelOneCharacterTextureheight;

extern float levelOneCharacterFrametime;
extern int levelOneCharacterPrevtime;
extern int levelOneCharacterCurrentime;
extern float levelOneCharacterDeltatime;

extern float levelOneMoveSpeed;

extern char levelOneScoreString[10];
extern int levelOneCurrentScore;

extern int space;

extern float levelOneCharacterXposition,
    levelOneCharacterYposition;

extern int levelOneCharacterJumpCurrenttime, levelOneCharacterJumpPrevtime;
extern float levelOneCharacterJumpDeltatime, levelOneCharacterJumpFrametime;


extern int levelOneBackgroundCurrenttime, levelOneBackgroundPrevtime;
extern float levelOneBackgroundDeltatime, levelOneBackgroundFrametime;

extern int  levelOnePointEffectAnimationSpeed[5],
    levelOnePointAnimationSpeed[5], levelOneObstacleAnimationSpeed[5], levelOneLifeAnimationSpeed[5];

extern int FinishLine;
extern int count;
extern int lifeSize;
extern Mix_Music *background, *whoWeWantToBe;
extern Mix_Chunk *levelOneCoingain, *hitLevelOne, *gameOver, *click;

typedef struct
{
    SDL_Renderer *rend;
    SDL_Window *window;
} App; // for creating the window

typedef struct
{
    SDL_Surface *surface;
    SDL_Texture *tex;
    SDL_Rect rect;
} component; // this structure is used to create all the elements of the game

typedef struct
{
    int chooseLevel, gameWindowBegin = 1, levelOne = 0,
                     levelOneCompleted = 0, levelOnegameOver = 0, newScore = 0;
    TTF_Font *font;
    SDL_Color color;

} Variables; //for creating variables for window creating and destroying

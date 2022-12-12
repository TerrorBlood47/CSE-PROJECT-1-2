#include "main.h"
int main(){

    memset(&app, 0, sizeof(App));
    initSDL();
    atexit(cleanup);
    Mix_PlayMusic(background, -1); 
    while (1)
    {
        prepareScene(); 
        doInput();  
        presentScene(); 
    }
    return 0;
}

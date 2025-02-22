
/*
 *  Simple chess game made using SDL3 and SDL_Image
 */

#define SDL_MAIN_USE_CALLBACKS 1 /* use the callbacks instead of main() */
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

#define APP_NAME "sdl3-chess"
#define SCREEN_WIDHT 1280
#define SCREEN_HEIGHT 720

/* We will use this renderer to draw into this window every frame. */
static SDL_Window *window = NULL;
static SDL_Renderer *renderer = NULL;

/* This function runs once at startup. */
SDL_AppResult
SDL_AppInit(void **appstate, int argc, char *argv[]) {
        SDL_SetAppMetadata(APP_NAME, "1.0", APP_NAME);

        if (!SDL_Init(SDL_INIT_VIDEO)) {
                SDL_Log("Couldn't initialize SDL: %s", SDL_GetError());
                return SDL_APP_FAILURE;
        }

        if (!SDL_CreateWindowAndRenderer(APP_NAME, SCREEN_WIDHT, SCREEN_HEIGHT, 0, &window, &renderer)) {
                SDL_Log("Couldn't create window/renderer: %s", SDL_GetError());
                return SDL_APP_FAILURE;
        }
  return SDL_APP_CONTINUE; /* carry on with the program */
}

/* This function runs when a new event (mouse input, keypresses, etc) occurs. */
SDL_AppResult
SDL_AppEvent(void *appstate, SDL_Event *event) {
        if (event->type == SDL_EVENT_QUIT) {
                return SDL_APP_SUCCESS; /* end the program */
        }
        return SDL_APP_CONTINUE;
}

/* This function runs once per frame. */
SDL_AppResult
SDL_AppIterate(void *appstate) {
        return SDL_APP_CONTINUE;
}
/* This function runs once at shutdown. */
void
SDL_AppQuit(void *appstate, SDL_AppResult result) {

}

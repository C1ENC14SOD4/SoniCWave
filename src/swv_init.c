#include <swv_init.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>

int SWV_Init() {

	if(SDL_Init(SDL_INIT_AUDIO) < 0) {
		return -1;
	}

	if(Mix_OpenAudio(48000, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
		return -1;
	}
	
	return 0;
}

void SWV_Finish() {

	Mix_CloseAudio();
	SDL_Quit();

}

#include <SDL.h>

int main(int argc, char* argsv[])
{
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window* window = SDL_CreateWindow("Test",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		1024,
		720,
		SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN);

	bool running = true;
	while (running)
	{
		SDL_Event e;
		SDL_PollEvent(&e);

		if (e.type == SDL_QUIT)
			running = false;
	}

	SDL_DestroyWindow(window);

	SDL_Quit();
	return 0;
}
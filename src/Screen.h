/*
 * Screen.h
 *
 *  Created on: 26Mar.,2018
 *      Author: sooriyasilva
 */

#ifndef SCREEN_H_
#define SCREEN_H_
#include <SDL.h>

namespace npscreen {

class Screen {

public:
	const static int SCREEN_WIDTH = 800;
	const static int SCREEN_HEIGHT = 600;

private:
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer1;
	Uint32 *m_buffer2;

public:
	Screen();
	bool init();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	bool processEvents();
	void boxBlur();
	void update();
	void clear();
	void close();
	~Screen();
};

} /* namespace npscreen */

#endif /* SCREEN_H_ */

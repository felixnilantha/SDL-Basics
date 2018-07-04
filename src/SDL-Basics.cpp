#include <iostream>
#include <SDL.h>
#include "Screen.h"
#include "Swam.h"

using namespace std;
using namespace npscreen;

int main() {

	srand(time(NULL));

	Screen screen;

	if (screen.init() == false) {
		cout << "Error initializing SDL" << endl;
	}

	Swam swam;

	while (true) {

		int elapsed = SDL_GetTicks();

		swam.update(elapsed);

		const Particle* const pParticle = swam.getParticles();
		for (int i = 0; i < Swam::NPARTICLES; i++) {
			Particle particle = pParticle[i];

			unsigned char red =
					(unsigned char) (1 + sin(elapsed * 0.0001) * 128);
			unsigned char green = (unsigned char) (1
					+ sin(elapsed * 0.0002) * 128);
			unsigned char blue = (unsigned char) (1
					+ sin(elapsed * 0.0003) * 128);

			int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
			int y = particle.m_y * (Screen::SCREEN_WIDTH / 2)
					+ Screen::SCREEN_HEIGHT / 2;

			screen.setPixel(x, y, red, green, blue);

		}

		screen.boxBlur();
		screen.update();

		if (screen.processEvents() == false) {
			break;

		}

	}

	return 0;
}

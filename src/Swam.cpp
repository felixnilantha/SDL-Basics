/*
 * Swam.cpp
 *
 *  Created on: 27Mar.,2018
 *      Author: sooriyasilva
 */

#include "Swam.h"

namespace npscreen {

Swam::Swam() :
		lastTime(0) {
	m_pParticle = new Particle[NPARTICLES];
}

Swam::~Swam() {
	delete[] m_pParticle;

}
void Swam::update(int elapsed) {

	int interval = elapsed - lastTime;

	for (int i = 0; i < Swam::NPARTICLES; i++) {
		m_pParticle[i].update(interval);

	}
	lastTime = elapsed;
}

} /* namespace npscreen */

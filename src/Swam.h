/*
 * Swam.h
 *
 *  Created on: 27Mar.,2018
 *      Author: sooriyasilva
 */

#ifndef SWAM_H_
#define SWAM_H_

#include "Particle.h"

namespace npscreen {

class Swam {
public :
	const static int NPARTICLES = 5000;
private:
	int lastTime;
	Particle *m_pParticle;
public:
	Swam();
	virtual ~Swam();
	const Particle * const getParticles(){
		return m_pParticle;
	}
	void update(int elapsed);


};

} /* namespace npscreen */

#endif /* SWAM_H_ */

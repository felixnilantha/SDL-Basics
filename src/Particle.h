/*
 * Particle.h
 *
 *  Created on: 27Mar.,2018
 *      Author: sooriyasilva
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace npscreen {

struct Particle { // members are public by default
	double m_x;
	double m_y;

private:

	double m_speed;
	double m_direction;

private:
	void init();

public:
	Particle();
	virtual ~Particle();
	void update(int interval);
};

} /* namespace npscreen */

#endif /* PARTICLE_H_ */

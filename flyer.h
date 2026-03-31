#pragma once
#include "position.h"

class Flyer
{
protected:
	Position pt;
	Velocity v;
	bool dead;
	double radius;
public:
	Position getPosition() const { return pt; };
	Velocity getVelocity() const { return v;  };
	bool isDead() const { return dead; };
	virtual void draw() = 0;
	virtual void move() = 0;
	virtual void kill();
};

void Flyer::kill() {
	dead = true;
};
#include "utils.h"

Car::Car()
{
	brain = Network(NETWORK_STRUCTURE);
	score = 0.;
	position;
	corners;
	sprite;
	alive;
}

Car::Car(const Car& car)
{
}

void Car::operator=(const Car& car)
{
}

std::array<double, 2> Car::think()
{
	return std::array<double, 2>();
}

void Car::update()
{
}

void Car::recreate_from(const Car& car)
{
}
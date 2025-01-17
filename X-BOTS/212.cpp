#include "212.h"


void X212::initialiser(char Nom, int Direction, int Force,
	int Vitesse, int Vision)
{
	setNom(Nom);

	if (Direction >= 0 || Direction < 4)
	{
		setDirection(Direction);
	}
	else
	{
		setDirection(0);
	}

	setForce(Force);
	setVitesse(Vitesse);
	setVision(Vision);
}

void X212::mouvement(int& x, int& y)
{
	int deplacement = vitesse + 1;
	switch (direction)
	{
	case 0: x -= deplacement; break;
	case 1: y += deplacement; break;
	case 2: x += deplacement; break;
	case 3: y -= deplacement; break;
	}

	x = max(min(x, 9), 0);
	y = max(min(x, 9), 0);
}

void X212::superCourse(int& x, int& y)
{
	int deplacement = vitesse + (vitesse * force/10);
	switch (direction)
	{
	case 0: x -= deplacement; break;
	case 1: y += deplacement; break;
	case 2: x += deplacement; break;
	case 3: y -= deplacement; break;
	}

	x = max(min(x, 9), 0);
	y = max(min(x, 9), 0);
}

void X212::esquive(int& x, int& y, int xDanger, int yDanger)
{
	//TODO
}
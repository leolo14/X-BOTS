#include "W000.h"

W000::W000(string Nom, int Direction, int Force, int Vitesse, int Vision)
{
	setNom(Nom);
	setDirection(Direction);
	setForce(Force);
	setVitesse(Vitesse);
	setVision(Vision);

	Compteur::ajouterConstructeur();
}

W000::W000(const W000& w000)
{
	nom = w000.nom;
	direction = w000.direction;
	force = w000.force;
	vitesse = w000.vitesse;
	vision = w000.vision;

	Compteur::ajouterConstructeurCopie();
}

void W000::initialiser(string Nom, int Direction, int Force, int Vitesse, int Vision)
{
	setNom(Nom);
	setDirection(Direction);
	setForce(Force);
	setVitesse(Vitesse);
	setVision(Vision);
}

void W000::setDirection(int Direction)
{
	if (Direction < 0)
	{
		direction = 0;
	}
	else if (Direction > 3)
	{
		direction = 3;
	}
	else
	{
		direction = Direction;
	}
}

void W000::bloquer(int xAmi, int yAmi, int& x, int& y, int xEnnemi, int yEnnemi)
{
	//TODO
}

void W000::bouger(int& x, int& y) const
{
	int deplacement = vitesse + 2;
	switch (direction)
	{
	case 0: x -= deplacement; break;
	case 1: y += deplacement; break;
	case 2: x += deplacement; break;
	case 3: y -= deplacement; break;
	}
	x = max(min(x, 9), 0);
	y = max(min(y, 9), 0);
}
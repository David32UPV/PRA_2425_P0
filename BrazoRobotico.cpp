#include "BrazoRobotico.h"

// Constructor rellenado
BrazoRobotico::BrazoRobotico(){
	x = 0;
	y = 0;
	z = 0;
	sujetandoObjeto = false;
}

// Getters rellenados (consultores)
double BrazoRobotico::getx(){
	return x;
}

double BrazoRobotico::gety(){
	return y;
}

double BrazoRobotico::getz(){
	return z;
}

bool BrazoRobotico::getSujetandoObjeto(){
	return sujetandoObjeto;
}

// Métodos de la clase rellenados
void BrazoRobotico::coger(){
	sujetandoObjeto = true;
}

void BrazoRobotico::soltar(){
	sujetandoObjeto = false;
}

void BrazoRobotico::mover(double x, double y, double z){
	this->x = x;
	this-y = y;
	this->z = z;
}


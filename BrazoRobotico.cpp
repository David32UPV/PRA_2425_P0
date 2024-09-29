#include "BrazoRobotico.h"
#include <iostream>

// Constructor rellenado
BrazoRobotico::BrazoRobotico(double x, double y, double z, bool sujetandoObjeto){
	this->x = x;
	this->y = y;
	this->z = z;
	this->sujetandoObjeto = sujetandoObjeto;
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
bool BrazoRobotico::coger(){
	return sujetandoObjeto = true;
}

bool BrazoRobotico::soltar(){
	return sujetandoObjeto = false;
}

void BrazoRobotico::mover(double x, double y, double z){
	this->x = x;
	this->y = y;
	this->z = z;
	std::cout << "Me he movido a las coordenadas: " << this->x << ", " << this->y << ", " << this->z << std::endl;
}


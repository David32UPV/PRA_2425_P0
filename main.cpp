#include "BrazoRobotico.h"
#include <iostream>

int main(){
	
	double x = 0;
	double y = 0;
	double z = 0;
	bool sujetandoObjeto = false;
	// Nos creamos un objeto de la clase BrazoRobotico y trabajaremos a partir de ahora con él
	BrazoRobotico br(x, y, z, sujetandoObjeto);
	std::cout << "Empiezo en la posición: " << x << ", " << y << ", " << z << std::endl;

	// Llamamos a los consultores, los cuales no modifican el estado de los atributos definido en el constructor de la clase
	double consultarx = br.getx();
	double consultary = br.gety();
	double consultarz = br.getz();
	bool sujetaObjeto = br.getSujetandoObjeto();

	// El Robot ha de coger un objeto
	bool coger = br.coger();
	std::cout << "He cogido un objeto en las coordenadas: " << x << ", " << y << ", " << z << std::endl;

	// El robot ha de moverse con el objeto cogido a las coordenadas que yo le indico
	br.mover(2, 2, 2);

	// Actualizamos coordenadas
	x = 2;
	y = 2;
	z = 2;

	// Despues de moverse con el objeto cogido, el robot ha de soltar dicho objeto
	bool soltar = br.soltar();
	std::cout << "He soltado un objeto en las coordenadas: " << x << ", " << y << ", " << z << std::endl;

	return 0;
}

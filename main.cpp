#include "BrazoRobotico.h"
#include <iostream>

using namespace std;

int main(){
	
	// Nos creamos un objeto de la clase BrazoRobotico y trabajaremos a partir de ahora con él
	BrazoRobotico br;
	
	// Llamamos a los consultores, los cuales no modifican el estado de los atributos definido en el constructor de la clase
	double conultarx = br.getx(0);
	double conultary = br.gety(0);
	double conultarz = br.getz(0);
	bool sujetaObjeto = br.getSujetandoObjeto(false);

	// El Robot ha de coger un objeto
	if(br.coger() == true)
		sdt::cout << "He cogido un objeto" << std::endl;

		// El robot ha de moverse con el objeto cogido a las coordenadas que yo le indico
		br.mover(2, 2, 2);
		sdt::cout << "Me voy a mover con el objeto cogido a la posición del espacio (x = 2, y = 2, z = 2)" << std::endl;


		// Despues de moverse con el objeto cogido, el robot ha de soltar dicho objeto
		br.soltar();
		sdt::cout << "He soltado un objeto" << std::endl;

	
	else
		std::cout << "No he cogido ningún objeto" << std::endl;


	return 0;
}

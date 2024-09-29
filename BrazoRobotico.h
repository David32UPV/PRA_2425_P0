#include <iostream>
using namespace std;

class BrazoRobotico{

	private:

		// Coordenadas x, y, z del espacio 3D
		double  x, y, z;
		bool sujetandoObjeto;
	
	public:
		
		// Constuctor
		BrazoRobotico();
				
		// Consultores(getters) para los 4 atributos privados (i.e. 4 consultores)
		double getx();
		double gety();
		double getz();
		bool getsujetandoObjeto();

		// Métodos de la clase
		void coger();
		void soltar();
		void mover(double x, double y, double z);

};


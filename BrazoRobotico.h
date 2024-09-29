
class BrazoRobotico{

	private:

		// Coordenadas x, y, z del espacio 3D
		double  x, y, z;
		bool sujetandoObjeto;
	
	public:
		
		// Constuctor
		BrazoRobotico(double x, double y, double z, bool sujetandoObjeto);
				
		// Consultores(getters) para los 4 atributos privados (i.e. 4 consultores)
		double getx();
		double gety();
		double getz();
		bool getSujetandoObjeto();

		// Métodos de la clase
		bool coger();
		bool soltar();
		void mover(double x, double y, double z);

};


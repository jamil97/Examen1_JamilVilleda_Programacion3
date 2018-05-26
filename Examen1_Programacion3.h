#ifndef EXAMEN1_PROGRAMACION3_H
#define EXAMEN1_PROGRAMACION3_H
#include <string>
using std::string;

class Examen1_Programacion3{

	public: 
		char** tableroJuego;
		int contpiezasX = 12;
		int contpiezasO = 12;
		string jugador1; 
		string jugador2;
	public: 
		Examen1_Programacion3();
		void crearTablero();
		void imprimirTablero();
		void piezasX(char);
		void piezasO(char);
		void verificarPiezasEnemigas();
		void verificarTurnos(char, char);



};

#endif

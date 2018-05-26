#include "Examen1_Programacion3.h"
#include <iostream>

using namespace std;

int main(){
	char negras = 'x';
	char blancas = 'o';
	Examen1_Programacion3* Ex = new Examen1_Programacion3();
	Ex->imprimirTablero();
	Ex->verificarTurnos(negras, blancas);
	
	return 0;

}



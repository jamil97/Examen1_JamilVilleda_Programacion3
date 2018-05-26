#include "Examen1_Programacion3.h"
#include <iostream>
#include <string>
using std::string;

using namespace std;

Examen1_Programacion3::Examen1_Programacion3(){

	crearTablero();
	

}

void Examen1_Programacion3::crearTablero(){

	cout<<"              Damas Chinas"<<endl;

	tableroJuego = new char* [8];

	for(int i =0; i<8; i++){		
		tableroJuego[i] = new char[8];
	}

	for(int i =0; i<8; i++){
		for(int j = 0; j<8; j++){
			tableroJuego[i][j] = ' ';
		}
	}
	tableroJuego[0][1] = 'x';
	tableroJuego[0][3] = 'x';
	tableroJuego[0][5] = 'x';
	tableroJuego[0][7] = 'x';
	tableroJuego[1][0] = 'x';
	tableroJuego[1][2] = 'x';
	tableroJuego[1][4] = 'x';
	tableroJuego[1][6] = 'x';
	tableroJuego[2][1] = 'x';
	tableroJuego[2][3] = 'x';
	tableroJuego[2][5] = 'x';
	tableroJuego[2][7] = 'x';
	tableroJuego[5][0] = 'o';
	tableroJuego[5][2] = 'o';
	tableroJuego[5][4] = 'o';
	tableroJuego[5][6] = 'o';
	tableroJuego[6][1] = 'o';
	tableroJuego[6][3] = 'o';
	tableroJuego[6][5] = 'o';
	tableroJuego[6][7] = 'o';
	tableroJuego[7][0] = 'o';
	tableroJuego[7][2] = 'o';
	tableroJuego[7][4] = 'o';
	tableroJuego[7][6] = 'o';


	cout<<"Ingrese nombre del jugador 1: "<<endl;
	cin>>jugador1;
	cout<<"Ingrese nombre del jugador 2: "<<endl;
	cin>>jugador2;


}

void Examen1_Programacion3::imprimirTablero(){

	for(int i =0; i<8; i++){
		cout<<i;
		for(int j = 0; j<8; j++){
			cout<<" [ "<<tableroJuego[i][j]<<" ]";
		}	
		cout<<endl;
	}
}

void Examen1_Programacion3::piezasX(char pieza){
	
	int piezaTomadaX = 0;
	int piezaTomadaY = 0;

	int posX = 0;
	int posY = 0;

		cout<<"Ingrese porfavor la posicion en X donde esta la pieza que desea mover: "<<endl;
		cin>>piezaTomadaX;
	
		cout<<"Ingrese la posicion en Y donde esta la pieza que desea mover la pieza: "<<endl;
		cin>>piezaTomadaY;
	

		while(tableroJuego[piezaTomadaX][piezaTomadaY]=='o'){
			cout<<"-----------------------------------"<<endl;
			cout<<"Porfavor elija una de las piezas X."<<endl;
			cout<<"Ingrese la posicion en X de la pieza: "<<endl;
			cin>>piezaTomadaX;
			cout<<"Ingrese la posicion en Y de la pieza: "<<endl;
			cin>>piezaTomadaY;
			cout<<"-----------------------------------"<<endl;

		}

		while(piezaTomadaX>7||piezaTomadaY >7){
		cout<<"Numero de casillas no valido ingrese numero de casillas validos porfavor: "<<endl;
		cout<<"Ingrese porfavor la posicion en X donde esta la pieza que desea mover: "<<endl;
		cin>>piezaTomadaX;
		cout<<"Ingrese la posicion en Y donde esta la pieza que desea mover la pieza: "<<endl;
		cin>>piezaTomadaY;	
		}


		cout<<"Ingrese la posicion en X donde desea mover dicha pieza: "<<endl;
		cin>>posX;
		cout<<"Ingrese la posicion en Y donde desea mover dicha pieza: "<<endl;
		cin>>posY;
		

		while(tableroJuego[posX][posY]=='x'||tableroJuego[posX][posY]=='o') {
			cout<<"-----------------------------------"<<endl;
			cout<<"Posicion ocupada, porfavor ingrese una casilla vacia. "<<endl;	
			cout<<"Ingrese posicion en X de la pieza a mover: "<<endl;
			cin>>piezaTomadaX;
			cout<<"Ingrese posicion en Y de la pieza a mover: "<<endl;
			cin>>piezaTomadaY;
			cout<<"Ingrese la posicion donde desea mover la pieza en X: "<<endl;
			cin>>posX;
			cout<<"Ingrese la posicion donde desea mover la pieza en Y: "<<endl;
			cin>>posY;
			cout<<"-----------------------------------"<<endl;
			
		}

		if(tableroJuego[piezaTomadaX+1][piezaTomadaY+1]=='o'&&tableroJuego[piezaTomadaX+2][piezaTomadaY+2]==' '&&
				posX+2==piezaTomadaX&&posY+2==piezaTomadaY){
			tableroJuego[posX][posY] = 'x';
			tableroJuego[posX+1][posY+1] = ' ';
			contpiezasX --;
		}

		if(tableroJuego[piezaTomadaX+1][piezaTomadaY-1]=='o'&&tableroJuego[piezaTomadaX+2][piezaTomadaY-2]==' '&&
				posX-2==piezaTomadaX&&posY+2==piezaTomadaY){
			tableroJuego[posX][posY] = 'x';
			tableroJuego[posX+1][posY+1] = ' ';
			contpiezasX --;

		
		}

		while(piezaTomadaX>posX&&piezaTomadaY==posY||piezaTomadaX<posX&&piezaTomadaY==posY||
				piezaTomadaX+1<posX&&piezaTomadaY+1<posY||piezaTomadaX+1<posX&&piezaTomadaY-1>posY){
			cout<<"-----------------------------------"<<endl;
			cout<<"Movimiento no permitido. "<<endl;
			cout<<"Ingrese posicion en X de la pieza a mover: "<<endl;
			cin>>piezaTomadaX;
			cout<<"Ingrese posicion en Y de la pieza a mover: "<<endl;
			cin>>piezaTomadaY;
			cout<<"Ingrese la posicion donde desea mover la pieza en X: "<<endl;
			cin>>posX;
			cout<<"Ingrese la posicion donde desea mover la pieza en Y: "<<endl;
			cin>>posY;
			cout<<"-----------------------------------"<<endl;

		
		}


		if(tableroJuego[piezaTomadaX][piezaTomadaY] == 'x'){
			tableroJuego[posX][posY] = 'x';
			tableroJuego[piezaTomadaX][piezaTomadaY] = ' ';
		}
}

void Examen1_Programacion3::verificarTurnos(char x, char o){

	while(contpiezasX != 0|| contpiezasO != 0){
		cout<<"Turno de "<<jugador1<<". Piezas O"<<endl;
		piezasO(o);
		imprimirTablero();
		cout<<"Turno de "<<jugador2<<". Piezas X"<<endl;
		piezasX(x);
		imprimirTablero();
	}

}

void Examen1_Programacion3::piezasO(char pieza){
	
	int piezaTomadaX = 0;
	int piezaTomadaY = 0;

	int posX = 0;
	int posY = 0;

		cout<<"Ingrese porfavor la posicion en X donde esta la pieza que desea mover: "<<endl;
		cin>>piezaTomadaX;
		cout<<"Ingrese la posicion en Y donde esta la pieza que desea mover la pieza: "<<endl;
		cin>>piezaTomadaY;

		while(piezaTomadaX>7||piezaTomadaY >7){
		cout<<"Numero de casillas no valido ingrese numero de casillas validos porfavor: "<<endl;
		cout<<"Ingrese porfavor la posicion en X donde esta la pieza que desea mover: "<<endl;
		cin>>piezaTomadaX;
		cout<<"Ingrese la posicion en Y donde esta la pieza que desea mover la pieza: "<<endl;
		cin>>piezaTomadaY;
			
		}

		while(tableroJuego[piezaTomadaX][piezaTomadaY]=='x'){
			cout<<"-----------------------------------"<<endl;
			cout<<"Porfavor elija una de las piezas O."<<endl;
			cout<<"Ingrese la posicion en X de la pieza: "<<endl;
			cin>>piezaTomadaX;
			cout<<"Ingrese la posicion en Y de la pieza: "<<endl;
			cin>>piezaTomadaY;
			cout<<"-----------------------------------"<<endl;

		}	

		cout<<"Ingrese la posicion en X donde desea mover dicha pieza: "<<endl;
		cin>>posX;
		cout<<"Ingrese la posicion en Y donde desea mover dicha pieza: "<<endl;
		cin>>posY;

		if(tableroJuego[piezaTomadaX-1][piezaTomadaY+1] == 'x' && tableroJuego[piezaTomadaX-2][piezaTomadaY+2]==' '&&
			 posX+2==piezaTomadaX&&posY-2==piezaTomadaY){
			tableroJuego[posX][posY] = '0';
			tableroJuego[posX+1][posY-1] = ' ';
			contpiezasX --;
		
		}

		if(tableroJuego[piezaTomadaX-1][piezaTomadaY-1]=='x'&&tableroJuego[piezaTomadaX-2][piezaTomadaY-2] == ' '
				&&posX+2==piezaTomadaX&&posY+2==piezaTomadaY){
			tableroJuego[posX][posY] = '0';
			tableroJuego[posX+1][posY+1] = ' ';
			contpiezasX --;
		}

		while(tableroJuego[posX][posY]=='x'||tableroJuego[posX][posY]=='o') {
			cout<<"-----------------------------------"<<endl;
			cout<<"Posicion ocupada, porfavor ingrese una casilla vacia. "<<endl;	
			cout<<"Ingrese posicion en X de la pieza a mover: "<<endl;
			cin>>piezaTomadaX;
			cout<<"Ingrese posicion en Y de la pieza a mover: "<<endl;
			cin>>piezaTomadaY;
			cout<<"Ingrese la posicion donde desea mover la pieza en X: "<<endl;
			cin>>posX;
			cout<<"Ingrese la posicion donde desea mover la pieza en Y: "<<endl;
			cin>>posY;
			cout<<"-----------------------------------"<<endl;
		}

		while(piezaTomadaX<posX&&piezaTomadaY==posY||piezaTomadaX>posX&&piezaTomadaY==posY||
				piezaTomadaX>posX&&piezaTomadaY+1<posY||piezaTomadaX>posX&&piezaTomadaY-1>posY){
			cout<<"-----------------------------------"<<endl;
			cout<<"Movimiento no permitido. "<<endl;
			cout<<"Ingrese posicion en X de la pieza a mover: "<<endl;
			cin>>piezaTomadaX;
			cout<<"Ingrese posicion en Y de la pieza a mover: "<<endl;
			cin>>piezaTomadaY;
			cout<<"Ingrese la posicion donde desea mover la pieza en X: "<<endl;
			cin>>posX;
			cout<<"Ingrese la posicion donde desea mover la pieza en Y: "<<endl;
			cin>>posY;			cout<<"-----------------------------------"<<endl;
		}

		if(tableroJuego[piezaTomadaX][piezaTomadaY] == 'o'){
			tableroJuego[posX][posY] = 'o';
			tableroJuego[piezaTomadaX][piezaTomadaY] = ' ';
		}

}




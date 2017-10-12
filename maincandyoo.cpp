//Maincandyoo.cpp
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include "Ficha.h"
#include "GeneradorEtiquetas.h"
#include "GeneradorSimbolos.h"
#include "Juego.h"
#include "Tablero.h"
#include "Terminal.h"

using namespace std;

int main(){
	srand(time(0));
	GeneradorEtiquetas ge("abcdefghijklmnopqrstuvwxyz");
	GeneradorSimbolos gs("%$@#&");
	Ficha f;
	Terminal te;
	Juego j("JFVL", 20);
	Tablero tr(5,5);
	tr.inicializarse(gs, ge);
	te.limpiarPantalla();
	while(j.verificarFinal==false){
		j.mostrarInformacion();
		tr.dibujarse();
		te.leerMovimiento(etiqueta1, etiqueta2);
		tr.obtenerFicha(f.getEtiqueta);
		tr.obtenerFicha(posFila, posColumna);
		f.intercambiarSimbolos(otraFicha)
		tr.buscarTripletaFilas(posFila, posColumna);
		if(f.reemplazarTripletaFilas(posFila, posColumna, ge.GeneradorSimbolos)){
			j.aumentarPuntaje(puntajeN)
		}
		if(f.reemplazarTripletaColumnas(posFila, posColumna, ge.GeneradorSimbolos)){
			j.aumentarPuntaje(puntajeN)
		}
		j.reducirMovimientos();
		j.verificarFinal();
	}
}

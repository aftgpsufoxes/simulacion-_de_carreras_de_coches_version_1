#include <iostream>
#include <cstdlib>
using namespace std;

const int LONG_CARRETERA = 9;
const int MAX_PASOS = 3;
const int TIEMPO_PARADO = 2;
const bool DEBUG = true;

bool esSorpresa(int posCoche) {
	bool esSorpresa;
	if (posCoche % 4 == 0) {
		esSorpresa = true;
	}
	else {
		esSorpresa = false;
	}
	return esSorpresa;
}

bool esClavo(int posCoche) {
	int divisores = 0, dividendo = 2;
	bool esClavo;

	while (dividendo < posCoche && dividendo == 0) {
		if (posCoche % dividendo == 0) {
			divisores = divisores + 1;
		}
		dividendo = dividendo + 1;
	}

	if (dividendo != 0) {
		esClavo = false;
	}
	else {
		esClavo = false;
	}
	return esClavo;
}

int buscaPosicionSorpresa(int posCoche) {
	int n, buscaPosicionSorpresa;
	n = 0 + rand() % (1 + 1 - 0);
	if (n == 0) {
		buscaPosicionSorpresa = posCoche + 4;
	}
	else if (n == 1) {
		buscaPosicionSorpresa = posCoche - 4;
	}
	return buscaPosicionSorpresa;
}

bool esPrimo(int n) {
	bool esPrimo;
	int dividendo, divisor;
	dividendo = 2;
	divisor = 0;
	while (dividendo < n && divisor == 0) {
		if (n % dividendo == 0) {
			divisor = divisor + 1;
		}
		dividendo = dividendo + 1;
	}
	if (divisor != 0) esPrimo = false;
	else esPrimo = true;
	return esPrimo;
}

int avanza() {
	int pasos;
	pasos = MAX_PASOS + rand() % (0 + 1 - MAX_PASOS);
	return pasos;
}

bool haLlegado(int posCoche) {
	bool haLlegado;
	if (posCoche == LONG_CARRETERA) haLlegado = true;
	else haLlegado = false;
	return haLlegado;
}

int main() {
	srand(time(NULL));

	char seguir_Simulacion;
	int posCoche;
	posCoche = 0;
	seguir_Simulacion = 'S';
	if (seguir_Simulacion == 'S') {
		cout << "*** Empieza la simulacion. El coche esta en la posicion " << posCoche << endl;
		while (DEBUG == true) {
			cout << "Avanza el coche... " << avanza << endl;
		}
	}
}
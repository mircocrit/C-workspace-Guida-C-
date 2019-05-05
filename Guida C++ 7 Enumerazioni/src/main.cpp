/*#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

// "frutta" è l'identificativo della enum
enum frutta { mela, pera, banana, pesca, kiwi }; // enum senza identificativo
enum { mela, pera, banana, pesca, kiwi };

// Assegnazione esplicita di valori ad ogni enumeratore.
//enum frutta { mela = 0, pera = 1, banana = 2, pesca = 3, kiwi = 4 };
// Se alcuni valori non sono assegnati, essi vengono posti uguali al valore precedente + 1: //

int main(){
	mela = 0, pera = 1, banana = 2, pesca = 9, kiwi = 10;
	return 0;
}

//enum frutta { mela, pera=1, banana, pesca = 9, kiwi };
// Attenzione: le costanti usate possono essere solamente intere con o senza segno
//enum frutta { mela, pera = 0.5f /*valore non ammesso!!, banana, pesca = -10, kiwi };


/*
  enum frutta : unsigned char {
  mela, pera = -1, // errore: valore negativo
  banana = 32, // ok: 32 è un numero positivo e rappresentabile in 8 bit
  pesca = 1024, // errore: valore fuori intervallo kiwi
  };

 */

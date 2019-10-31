<<<<<<< HEAD
/*
 Tematem zadania jest algorytm weryfikacji numeru karty kredytowej.
 Prawidłowy numer karty może mieć różną liczbę cyfr, np. 
 VISA 13 lub 16
 Master Card 16
 American Express 15

 Weryfikację numeru karty można przeprowadzić algorytmem Luhna:
=======
// ==================================================================
// Prosze napisac: liste, która przechowuje pary liczb
// oraz funkcje startList, add, remove, freeList, ktore:
// startList(int) - zwraca nowa liste o podanym poczatkowym rozmiarze. 
// add(pair) - umieszcza pare na liscie.
// freeList - zwalnia pamiec
// Pojemnosc listy prosze dostosowac do liczby elementow,
// tzn. zwiekszyc pojemnosc gdy liczba elementow ja przekroczy
>>>>>>> b05d538016925a0ebd2da1ddd3786ef0aceec623

 jeśli numer karty jest krótszy od 16 cyfr to przed numerem dopisujemy zera,
 kolejne cyfry numeru mnożymy przez współczynniki wagowe,
 kolejno 2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
 sumujemy wszystkie CYFRY otrzymanego wyniku,
 numer karty jest prawidłowy jeśli ostatnia cyfra wyniku sumowania jest równa 0. 

 Przykład:
  2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1   -> wagi
* 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 2   -> nr karty 
---------------------------------
2*1 1*2 2*3 1*4 2*5 1*6 2*7 1*8 2*9 1*0 2*1 1*2 2*3 1*4 2*5 1*2  
 2   2   6   4  10   6  14   8  18   0   2   2   6   4  10   2 
 2 + 2 + 6 + 4+1+0 + 6+1+4 + 8+1+8 + 0 + 2 + 2 + 6 + 4+1+0 + 2=60
                     
           60 mod 10 = 0 ----> cyfra kontrolna prawidłowa


<<<<<<< HEAD
 Proszę napisac dwie funkcje: 
 - do obliczania cyfry kontrolnej (find_ctrl) 
 - sprawdzającą poprawność numeru (number_correct).
 

 */


=======

#include "Pair.h"
#include "ListFunctions.h"
#include "ListFunctions.h"
>>>>>>> b05d538016925a0ebd2da1ddd3786ef0aceec623
#include <iostream>
#include "check_number.h"
#include "check_number.h"


int main() {
  const char* visa = "4222222222222";
  char ctrl = find_ctrl(visa);

  std::cout << visa << "\t" << ctrl << std::endl;

<<<<<<< HEAD
  visa = "4111111111111111";
  ctrl = find_ctrl(visa);
  std::cout << visa << "\t" << ctrl << std::endl;
=======
int main ()
{
	#ifdef DEBUG
	std::cout<< "Tryb debugowania" << std::endl;
	#endif

	Pair *pairsList = NULL;
	int listSize=2;
	int pairsNumber=0;
	startList(&pairsList, listSize);
	Pair pair1={-0.86, 0.35};
	Pair pair2={-0.34, 0.65};
	Pair pair3={ 0.34, 0.65};
	Pair pair4={ 0.86, 0.35};

	add(&pairsList, pair1, &listSize, &pairsNumber);
	add(&pairsList, pair2, &listSize, &pairsNumber);
	add(&pairsList, pair3, &listSize, &pairsNumber);
	add(&pairsList, pair4, &listSize, &pairsNumber);
	
	printList(pairsList, pairsNumber);

	freeList(&pairsList);
>>>>>>> b05d538016925a0ebd2da1ddd3786ef0aceec623

  /// weryfikacja 
  visa = "4012888888881881"; 
  if ( number_correct(visa) ) {
    std::cout << "numer " << visa << " jest poprawny " << std::endl; 
  }

  visa = "4222222723122"; 
  if (not number_correct(visa) ) {
    std::cout << "numer " << visa << " nie jest poprawny " << std::endl; 
  }
  return 0;
}

<<<<<<< HEAD
/* wynik

4222222222222	0
4111111111111111	0
numer 4012888888881881 jest poprawny 
numer 4222222723122 nie jest poprawny 

 */
=======
/* 
//wynik dzialania programu:
( -0.86, 0.35)
( -0.34, 0.65)
( 0.34, 0.65)
( 0.86, 0.35)
//
//wynik dzialania z flaga -DDEBUG:
//
Tryb debugowania
Alokacja pamieci
Dodawanie 0 elementu
Dodawanie 1 elementu
Dodawanie 2 elementu
Dodawanie 3 elementu
( -0.86, 0.35)
( -0.34, 0.65)
( 0.34, 0.65)
( 0.86, 0.35)

Zwalnianie pamieci

*/
>>>>>>> b05d538016925a0ebd2da1ddd3786ef0aceec623

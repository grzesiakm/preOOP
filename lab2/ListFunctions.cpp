#include "Pair.h"
#include "ListFunctions.h"


void startList(Pair** pairsList, int listSize){
	*pairsList = (Pair*)realloc(*pairsList, sizeof(Pair)*listSize);
	return;
}

void add(Pair** pairsList, Pair pair, int* listSize, int* pairsNumber){
	if(*pairsNumber >= *listSize){
		(*listSize)+=2;
		startList(pairsList, *listSize);
		add(pairsList, pair, listSize, pairsNumber); 
	}
	else {
		(*pairsList)[*pairsNumber][0] = pair[0];
		(*pairsList)[*pairsNumber][1] = pair[1];
		(*pairsNumber)++;
	}
	return;
}

void printList(Pair* pairsList, int pairsNumber){
	for(int i=0; i<pairsNumber; i++)
		std::cout <<"(" << pairsList[i][0] << ", "<< pairsList[i][1] <<")"<< std::endl;
	return;
}

void freeList(Pair** pairsList){
	free(*pairsList);
	return;
}




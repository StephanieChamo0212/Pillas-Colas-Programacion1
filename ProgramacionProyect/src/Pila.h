/*
 * Pila.h
 *
 *  Created on: 17/06/2016
 *      Author: steph
 */

#ifndef PILA_H_
#define PILA_H_


#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Pila {
	char letter;
	Pila * siguiente;
};

Pila * Inicio;
Pila * aux;
Pila * Fin;


void Push(char letter2){
	if (Inicio==NULL){
		Inicio= new(Pila);
		Inicio->letter=letter2;
		Fin=Inicio;
	}else{
		aux=new(Pila);
		aux->siguiente=Inicio;
		aux->letter=letter2;
		Inicio=aux;
	}
	Fin->siguiente=NULL;
}



void Top(){
	aux= Inicio;
	if(Inicio==NULL){
		cout <<"No se encontraron nodos en pila" << endl;
	}else{
		while (aux != NULL ){
			cout <<aux->letter<< endl;
			aux = aux->siguiente;

	}
}
}

void Pop(){
	aux= Inicio;
	if(Inicio==NULL){
		cout <<"No se encontraron nodos en pila" << endl;
	}else{
		if(aux != NULL ){
			cout <<aux->letter<< endl;
		}
	}
}


void Mostrar(){
	struct Pila *aux2=NULL;
	if (Inicio==NULL){
		cout<<"No se encontraron nodos en pila" << endl;
	}
	else {
		aux=Inicio;
		Inicio=Inicio->siguiente;
		aux2=aux;
		aux2->siguiente=aux->siguiente;

	}
}

void Contador(){
	int contador=0;
	aux= Inicio;
	if(Inicio==NULL){
		cout <<"No se encontraron nodos en pila" << endl;
	}else{
		while (aux != NULL ){
            contador++;
			aux = aux->siguiente;
	}
	cout<<"Nodos en pila: "<<contador<<endl;
}
}


#endif /* PILA_H_ */

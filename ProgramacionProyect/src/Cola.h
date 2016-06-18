/*
 * Cola.h
 *
 *  Created on: 17/06/2016
 *      Author: steph
 */

#ifndef COLA_H_
#define COLA_H_


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;



struct Cola {
	char letter;
	Cola * siguiente;
};

Cola * Inicio;
Cola * auxliar;
Cola * Fin;

void Push(char letter2){
	if (Inicio==NULL){
		Inicio= new(Cola);
		Inicio->letter=letter2;
		Fin=Inicio;
	}else{
		auxliar=new(Cola);
		Fin->siguiente=auxliar;
		auxliar->letter=letter2;
		Fin=auxliar;
	}
	Fin->siguiente=NULL;
}

void Mostrar(){
	auxliar= Inicio;
	if(Inicio==NULL){
		cout <<"No hay nodos en cola" << endl;
	}else{
		while (auxliar != NULL ){
			cout <<auxliar->letter<< endl;
			auxliar = auxliar->siguiente;

	}
}
}

void Top(){
	auxliar= Inicio;
	if(Inicio==NULL){
		cout <<"No se encontraron nodos en cola" << endl;
	}else{
		if(auxliar != NULL ){
			cout <<auxliar->letter<< endl;
		}
	}
}

void Pop(){
	struct Cola *aux2=NULL;
	if (Inicio==NULL){
		cout<<"No se encontraron nodos en cola" << endl;
	}
	else {
		auxliar=Inicio;
		Inicio=Inicio->siguiente;
		aux2=auxliar;
		aux2->siguiente=auxliar->siguiente;

	}
}

void Contador(){
	int contador=0;
	auxliar= Inicio;
	if(Inicio==NULL){
		cout <<"No hay nodos enColados" << endl;
	}else{
		while (auxliar != NULL ){
            contador++;

			auxliar = auxliar->siguiente;
	}
	cout<<"Nodos en cola:  "<<contador<<endl;
}
}



#endif /* COLA_H_ */

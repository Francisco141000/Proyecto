#include<stdio.h>
#include<stdlib.h>
typedef struct Listar{	
	int r;
	struct Listar *sigr;
}nod;



nod *CrearNodor(nod *Listar,int m){
	nod *nuevor, *auxr;
	nuevor = (nod*)malloc(sizeof(nod));
	if (nuevor != NULL){
		nuevor->r=m;
		nuevor->sigr=NULL;	
		if( Listar == NULL){
			Listar = nuevor;
		}
		else{
			auxr = Listar;
			while (auxr->sigr !=NULL){
				auxr=auxr->sigr;
			}
			auxr->sigr=nuevor;
		}
	}
	else{
		printf("\n No se pudo reservar la memoria correctamente");
	}
	return Listar;
}


void imprimirr(nod *Listar,int m){
	int d=1;
	printf("\n Matriz Resultante (Suma)\n");
	while (Listar!= NULL){
		if(d==1){
			printf("\n |");
		}
		printf("%4d",Listar->r);
		if (d==m){
			printf("| \n");
			d=0;
		}
		Listar=Listar->sigr;
		d++;		
	}
}


typedef struct Lista2{	
	int y;
	struct Lista2 *sig2;
}node;



node *CrearNode(node *Lista2,int m){
	node *nuevo2, *aux2;
	nuevo2 = (node*)malloc(sizeof(node));
	if (nuevo2 != NULL){
		nuevo2->y=m;
		nuevo2->sig2=NULL;	
		if( Lista2 == NULL){
			Lista2 = nuevo2;
		}
		else{
			aux2 = Lista2;
			while (aux2->sig2 !=NULL){
				aux2=aux2->sig2;
			}
			aux2->sig2=nuevo2;
		}
	}
	else{
		printf("\n No se pudo reservar la memoria correctamente");
	}
	return Lista2;
}


void imprimir2(node *Lista2,int m){
	int b=1;
	printf("\n Matriz B\n");
	while (Lista2!= NULL){
		if(b==1){
			printf("\n |");
		}
		printf("%3d",Lista2->y);
		if (b==m){
			printf("| \n");
			b=0;
		}
		Lista2=Lista2->sig2;
		b++;		
	}
}

typedef struct Lista1{	
	int x;
	struct Lista1 *sig;
}nodo;



nodo *CrearNodo(nodo *Lista1,int m){
	nodo *nuevo, *aux;
	nuevo = (nodo*)malloc(sizeof(nodo));
	if (nuevo != NULL){
		nuevo->x=m;
		nuevo->sig=NULL;	
		if( Lista1 == NULL){
			Lista1 = nuevo;
		}
		else{
			aux = Lista1;
			while (aux->sig !=NULL){
				aux=aux->sig;
			}
			aux->sig=nuevo;
		}
	}
	else{
		printf("\n No se pudo reservar la memoria correctamente");
	}
	return Lista1;
}


void imprimir(nodo *Lista1,int m){
	int c=1;
	printf("\n Matriz A\n");
	while (Lista1!= NULL){
		if(c==1){
			printf("\n |");
		}
		printf("%3d",Lista1->x);
		if (c==m){
			printf("| \n");
			c=0;
		}
		Lista1=Lista1->sig;
		c++;		
	}
}




void guardarSuma(nod *Listar,int m){
	int cont01=1;
	FILE *flujo=fopen("Matriz-Resultante.txt","w");
	if(flujo== NULL){
		perror("Error al crear el archivo\n");	
	}
	else{
		while(Listar!=NULL){
			if(cont01==1){
			fprintf(flujo,"\n|");
			}
			fprintf(flujo,"%5d",Listar->r);	
			Listar=Listar->sigr;
			if(cont01==m){
			fprintf(flujo,"|\n");
			cont01=0;
			}
			cont01++;
		}	
		fprintf(flujo,"\n");
	}
	fclose(flujo);
}

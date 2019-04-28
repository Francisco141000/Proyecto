#include<stdio.h>
#include<stdlib.h>
#include"matrices.h"
int main(){
	nod  *Listar=NULL;
	node *Lista2=NULL;
	nodo *Lista=NULL;
	int i,n,m,x,y,res,esp;
	printf("\tIntroduce el orden de la matriz a operar\n");
	printf("\tLa matriz debe ser de orden   m x n \n");
	printf("\tdonde : ");
	printf(" m= renglon \t");
	printf(" n= columna\n");
	printf("\nm=");
	scanf("%d",&m);
	printf("\nn=");
	scanf("%d",&n);
	for(esp=0;esp<40;esp++){
		printf("\n\n");
	}
	printf("\n\n");
	printf("\tMatriz de orden : %d X %d\n",m,n);
	printf("\tDame los valores de la primera matriz a operar\n");
	for(i=0;i<m*n;i++){
		scanf("%d",&x);
		Lista=CrearNodo(Lista,x);
	}
	for(esp=0;esp<40;esp++){
		printf("\n\n");
	}
	printf("\n\n");
	printf("\tMatriz de orden : %d X %d\n",m,n);
	printf("\tDame los valores de la segunda matriz a operar\n");
	for(i=0;i<m*n;i++){
		scanf("%d",&y);
		Lista2=CrearNode(Lista2,y);
	}
	for(esp=0;esp<40;esp++){
		printf("\n\n");
	}
	printf("\n\n");
	imprimir(Lista,m);
	imprimir2(Lista2,m);
	while (Lista != NULL){
		res=(Lista->x)+(Lista2->y);
		Listar=CrearNodor(Listar,res);
		Lista=Lista->sig;
		Lista2=Lista2->sig2;
   }
	imprimirr(Listar,m);
	guardarSuma(Listar,m);
}

	

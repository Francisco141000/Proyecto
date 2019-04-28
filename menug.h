#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<complex.h>
#include"matrices.h"
#include "complejos.h"

void menu(char op){
	printf("\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
	    printf("\n\t\tHola amigo\n");
	    printf("\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
	    printf("\n\tA que opcion quieres ingresar?\n");
	    printf("\n\ta.-Calculadora de numeros complejos-\n");
	    printf("\n\tb.-Operaciones de matrices-\n");
	    printf("\n\tc.-Polinomios de grado 2\n");
	    printf("\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
	    scanf("%c",&op);
	    fflush(stdin);
	    system("cls");
		switch(op)
        {
    	    case 'a':
    	    	leer ();
                suma ();
                leer ();
                producto ();
                potencia ();
    	    	break;
    	    case 'b':
    	    	nodo  *Listar=NULL;
	            node *Lista2=NULL;
	            nodo *Lista1=NULL;
    	    	int n,i,m,x,y,res,esp;
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
    	    	break;
    	    case 'c':
    	    	printf("\nHasta que grado quieres sumar los polinomio?: ");
	            scanf("%d",&g);
	
	            for(i=0;i<2;i++){
		         printf("\npolinomio %d\n", i+1);
		         if(i==0){
	              for(j=0;j<g+1;j++){
	    	       if(j==0){
	    		    printf("Ingresa el termino independiente: ");
	    		    scanf("%f", &coefi[j]);
	    	       }else{
			        printf("Ingresa el coeficiente de grado %d: ", j);
			        scanf("%f", &coefi[j]);
			        }
	              }
	             }
	             else{
	              for(j=0;j<g+1;j++){
	    	       if(j==0){
	    		    printf("Ingresa el termino independiente: ");
	    		    scanf("%f", &coefi2[j]);
	    	       }else{
			        printf("Ingresa el coeficiente de grado %d: ", j);
			        scanf("%f", &coefi2[j]);
			        }
	              }
		         }
                }
    
	            for(j=0;j<g;j++){
		         res[j]=coefi[j]+coefi2[j];
	            }
	            printf("\n\tPolinomio 1\t  +\t\tPolinomio 2\t  =\tResultado de la matriz\n\n");
                for(i=0;i<2;i++){
    	         if(i==0){
    	          printf("(");
	              for(j=g;j>=0;j--){
	    	       if(j==0){
	    		    printf(" %3.2f ", coefi[j]);
	    	       }else{
			        printf(" %3.2fx%c%d +", coefi[j], 94, j);
			        }
	              }
	              printf(") + (");
		         }else{
		          for(j=g;j>=0;j--){
	    	       if(j==0){
	    		    printf(" %3.2f ", coefi2[j]);
	    	       }else{
			        printf(" %3.2fx%c%d +", coefi2[j], 94, j);
			        }
	              }
	              printf(")");
	              }
                }
	            printf(" = (");
	            for(j=g;j>=0;j--){
		         if(j==0){
			      printf(" %3.2f ", res[j]);
		         }
		          else{
			      printf(" %3.2fx%c%d +", res[j], 94, j);
		          }
	            }
	            printf(")\n");
	            
	            if(poli==NULL){
		         printf("\nError en la creacion del archivo\n");
	            }else{
		         fprintf(poli, "\n\tPolinomio 1\t  +\t\tPolinomio 2\t  =\tResultado de la matriz\n\n");
		         for(i=0;i<2;i++){
    	          if(i==0){
    	           fprintf(poli, "\n(");
	                for(j=g;j>=0;j--){
	    	         if(j==0){
	    		      fprintf(poli, " %3.2f ", coefi[j]);
	    	         }else{
			          fprintf(poli, " %3.2fx%c%d +", coefi[j], 94, j);
			          }
	                }
	               fprintf(poli, ") + (");
		          }else{
		           for(j=g;j>=0;j--){
	    	        if(j==0){
	    		    fprintf(poli, " %3.2f ", coefi2[j]);
	    	        }else{
			         fprintf(poli, " %3.2fx%c%d +", coefi2[j], 94, j);
			         }
	               }
	               fprintf(poli, ")");
	               }
                 }
	            fprintf(poli, " = (");
	            for(j=g;j>=0;j--){
		         if(j==0){
			      fprintf(poli, " %3.2f ", res[j]);
		         }
		         else{
			     fprintf(poli, " %3.2fx%c%d +", res[j], 94, j);
		         }
	            }
	             fprintf(poli, ")\n");
	             }
	            fflush(poli);
                fclose(poli);
    
                printf("\nSe a creado un archivo con la operacion llamado: archivop\n");
    	    	break;
    	    default:
    	    	printf("\n Opcion invalida ");
    	    	break;
    	    printf("\nQuieres volver a ver el menu principal? Ingresa 5\n");
	        scanf("%d",&re);
	        system("cls");
        }
				
}

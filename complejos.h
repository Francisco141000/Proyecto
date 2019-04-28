int a,b,c,d;

//leer
void leer()
{
  FILE *archivo;
  archivo = fopen ("complejos.txt","w");
  system ("cls");
  printf ("Inserta z1\n");
  scanf ("%d   %di",&a,&b);
  system ("cls");
  printf ("Inserta z2\n");
  scanf ("%d   %di",&c,&d);
  system ("cls");
  system ("cls");
}

//suma
void suma()
{
  FILE *archivo;
  archivo = fopen ("complejos.txt","a");
  int sumaReal, sumaImg;
  system ("cls");
  sumaReal = a + c;
  sumaImg = b + d;
  fprintf (archivo,"\nSUMA\n");
  printf ("\nSUMA\n");
  fprintf (archivo,"\nEl resultado es:\n");
  printf ("\nEl resultado es:\n");
  if (b>=0 && d>=0)
    {
      fprintf (archivo,"\n[ %d + %di ] + [ %d + %di ] = [ %d + %di ]\n",a,b,c,d,sumaReal,sumaImg);
      printf ("\n[ %d + %di ] + [ %d + %di ] = [ %d + %di ]\n",a,b,c,d,sumaReal,sumaImg);
    }
  else
    if (b<0 && d<0)
    {
      fprintf (archivo,"\n[ %d  %di ] + [ %d  %di ] = [ %d  %di ]\n",a,b,c,d,sumaReal,sumaImg);
      printf ("\n[ %d  %di ] + [ %d  %di ] = [ %d  %di ]\n",a,b,c,d,sumaReal,sumaImg);
    }
    else
      if (b<0 && d>=0)
	{
	  fprintf (archivo,"\n[ %d  %di ] + [ %d + %di ] = [ %d + %di ]\n",a,b,c,d,sumaReal,sumaImg);
	  printf ("\n[ %d  %di ] + [ %d + %di ] = [ %d + %di ]\n",a,b,c,d,sumaReal,sumaImg);
	}
      else
	if (b>=0 && d<0)
	  {
	    fprintf (archivo,"\n[ %d + %di ] + [ %d  %di ] = [ %d  %di ]\n",a,b,c,d,sumaReal,sumaImg);
	    printf ("\n[ %d + %di ] + [ %d  %di ] = [ %d  %di ]\n",a,b,c,d,sumaReal,sumaImg);
	  }
  system ("pause");
}

//producto
void producto ()
{
  FILE *archivo;
  archivo = fopen ("complejos.txt","a");
  int parteReal, parteImg;
  system ("cls");
  parteReal=(a*c)-(b*d);
  parteImg=(a*d)+(b*c);
  fprintf (archivo,"\nPRODUCTO\n");
  printf ("\nPRODUCTO\n");
  fprintf (archivo,"\nEl resultado es:\n");
  printf ("\nEl resultado es:\n");
  if (b>=0 && d>=0)
    {
      fprintf (archivo,"\n[ %d + %di ] * [ %d + %di ] = [ %d + %di ]\n",a,b,c,d,parteReal,parteImg);
      printf ("\n[ %d + %di ] * [ %d + %di ] = [ %d + %di ]\n",a,b,c,d,parteReal,parteImg);
    }
  else
    if (b<0 && d<0)
    {
      fprintf (archivo,"\n[ %d  %di ] * [ %d  %di ] = [ %d  %di ]\n",a,b,c,d,parteReal,parteImg);
      printf ("\n[ %d  %di ] * [ %d  %di ] = [ %d  %di ]\n",a,b,c,d,parteReal,parteImg);
    }
    else
      if (b<0 && d>=0)
	{
	  fprintf (archivo,"\n[ %d  %di ] * [ %d + %di ] = [ %d + %di ]\n",a,b,c,d,parteReal,parteImg);
	  printf ("\n[ %d  %di ] * [ %d + %di ] = [ %d + %di ]\n",a,b,c,d,parteReal,parteImg);
	}
      else
	if (b>=0 && d<0)
	  {
	    fprintf (archivo,"\n[ %d + %di ] * [ %d  %di ] = [ %d  %di ]\n",a,b,c,d,parteReal,parteImg);
	    printf ("\n[ %d + %di ] * [ %d  %di ] = [ %d  %di ]\n",a,b,c,d,parteReal,parteImg);
	  }
  system ("pause");
}

//potencia
void potencia ()
{
  FILE *archivo;
  archivo = fopen ("complejos.txt","a");
  int n;
  system ("cls");
  fprintf (archivo,"\nPOTENCIA\n");
  printf ("\nPOTENCIA\n");
  printf ("\nIngrese z\n");
  scanf ("%d   %di",&a,&b);
  double complex z = a + b * I;
  printf ("\nIndique la potencia\n");
  scanf ("%i",&n);
  double complex potencia = cpow(z,n);
  system ("cls");
  printf ("\nEl resultado es:\n");
  fprintf (archivo,"\nz^n = %.2f + %.2fi\n",creal(potencia),cimag(potencia));
  printf ("\nz^n = %.2f + %.2fi\n",creal(potencia),cimag(potencia));
  system ("pause");
}

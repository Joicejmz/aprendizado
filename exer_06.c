//feito por Joice :P

/*6) Fa�a um programa que leia um n�mero inteiro e positivo. Se o n�mero lido for menor que 7,
calcule o seu fatorial. Se for maior ou igual a 7, calcule a soma de 1 at� o n�mero lido. */
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include<windows.h>
#include<unistd.h>
void gotoxy(int x, int y); // declaro fun��es que chamarei dentro do int main; elas est�o abaixo da fun��o principal
void tela();

int main (){
	setlocale(LC_ALL,"Portuguese");
		
	int numero, soma=0, fatorial, i;
	
		system("cls");
 	system("color F2"); 
	tela();	
 		gotoxy(80,10);
	
	printf("\n\t <<<<< Digite um n�mero inteiro e positivo >>>>>  : ");
	scanf("%d",&numero);
	
	if(numero < 7){
	
	for(fatorial=1;numero>1; numero--){
		fatorial=fatorial*numero;
	                   
  }
  printf("\n\t * O fatorial do n�mero escolhido � = %d\n", fatorial);
	

		
	}else{
		for(i=0;i<numero;i++){
		soma=i+1;
		}
		printf("\n\t * Somando de 1 em 1 at� o n�mero escolhido: %d\n",soma);
	}
	getch();
}


//Fun��o de posicionamento
void gotoxy(int x, int y){
	COORD c;
	c.X = x - 1;
	c.Y = y - 1;
	SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

//Fun��o desenha moldura de tela
void tela(){
	int	c,l;
	
	
	
	//Desenha as linhas horizontais
	for(c=1; c<=237; c++){
	    gotoxy(c,1); printf("*");
	    gotoxy(c,5); printf("*");
	    gotoxy(c,60); printf("*");
		
	}
    // Desenha as linhas verticais
	for( l=1;l<=60;l++){
	    gotoxy(1,l); printf(":");
	    gotoxy(237,l); printf(":");
	    Sleep(5);
	}
    gotoxy(100,3);
    printf("Exerc�cio 6 - lista 2");
}

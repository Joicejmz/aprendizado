//feito por Joice :P

/*Fazer um programa para mostrar os N primeiros m�ltiplos de um inteiro K, onde N e K s�o lidos e s�o n�meros inteiros e positivos. Informar tamb�m a soma desses N m�ltiplos.*/

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<windows.h>
#include<windows.h>
#include<unistd.h>
void gotoxy(int x, int y); // declaro fun��es que chamarei dentro do int main; elas est�o abaixo da fun��o principal
void tela();

int main(){
setlocale(LC_ALL,"Portuguese_Brazil");

int k, soma=0, i, multiplo;

	system("cls");
 	system("color 5F"); 
	tela();	
 		 gotoxy(85,10);// apresenta��o ao usu�rio
		 printf("|.... Ol�! Vamos descobrir quais s�o os primeiros m�ltiplos de qualquer n�mero? .....|");
		 gotoxy(80,12);
		 printf(":::::: Digite um n�mero inteiro e positivo e veja quais seus m�ltiplos at� chegar nele ;) ::::::");
		 gotoxy(80,14);
		 printf("Digite um n�mero: ");// entrada do dado
		 gotoxy(99,14);
		 scanf("%d", &k);
		 gotoxy(80,16);
		printf("#### M�ltiplos desse n�mero: ####\n");
 	
		gotoxy(80,18);
 			for(i=0;i<=k;i++){//come�a o procesamento e mostra 1 sa�da
 				 multiplo=k*i;
	 			 printf(" %d",multiplo);
 				 soma=multiplo+soma;
 				 }
 		gotoxy(80,20);
		printf("A soma dos m�ltiplos �: %d \n\n\n",soma);//mostra a outra sa�da

system("pause");
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
		Sleep(4);
	}
    // Desenha as linhas verticais
	for( l=1;l<=60;l++){
	    gotoxy(1,l); printf(":");
	    gotoxy(237,l); printf(":");
	    Sleep(7);
	}
    gotoxy(100,3);
    printf("Exerc�cio 2 - lista 2");
}


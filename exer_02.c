//feito por Joice :P

/*Fazer um programa para mostrar os N primeiros múltiplos de um inteiro K, onde N e K são lidos e são números inteiros e positivos. Informar também a soma desses N múltiplos.*/

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<windows.h>
#include<windows.h>
#include<unistd.h>
void gotoxy(int x, int y); // declaro funções que chamarei dentro do int main; elas estão abaixo da função principal
void tela();

int main(){
setlocale(LC_ALL,"Portuguese_Brazil");

int k, soma=0, i, multiplo;

	system("cls");
 	system("color 5F"); 
	tela();	
 		 gotoxy(85,10);// apresentação ao usuário
		 printf("|.... Olá! Vamos descobrir quais são os primeiros múltiplos de qualquer número? .....|");
		 gotoxy(80,12);
		 printf(":::::: Digite um número inteiro e positivo e veja quais seus múltiplos até chegar nele ;) ::::::");
		 gotoxy(80,14);
		 printf("Digite um número: ");// entrada do dado
		 gotoxy(99,14);
		 scanf("%d", &k);
		 gotoxy(80,16);
		printf("#### Múltiplos desse número: ####\n");
 	
		gotoxy(80,18);
 			for(i=0;i<=k;i++){//começa o procesamento e mostra 1 saída
 				 multiplo=k*i;
	 			 printf(" %d",multiplo);
 				 soma=multiplo+soma;
 				 }
 		gotoxy(80,20);
		printf("A soma dos múltiplos é: %d \n\n\n",soma);//mostra a outra saída

system("pause");
}


//Função de posicionamento
void gotoxy(int x, int y){
	COORD c;
	c.X = x - 1;
	c.Y = y - 1;
	SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}

//Função desenha moldura de tela
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
    printf("Exercício 2 - lista 2");
}


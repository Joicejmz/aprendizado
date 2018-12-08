//feito por Joice :P

/*Faça um programa que solicite ao usuário 10 números inteiros e, ao final, informe a quantidade de números ímpares e pares lidos. Calcule também a soma dos números pares e a
média dos números ímpares.*/
#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<windows.h>
#include<unistd.h>
void gotoxy(int x, int y); // declaro funções que chamarei dentro do int main; elas estão abaixo da função principal
void tela();

int main(){
setlocale(LC_ALL,"Portuguese_Brazil");

int contPar=0, contImpar=0, numero, i, soma=0, resul, somaImpar=0;// se não zerar esses itens dá probleminha na maioria das vezes 
float media;

	system("cls");
 	system("color 0A"); 
	tela();	
 		gotoxy(80,10);
		printf("->->-> Digite 10 números inteiros <-<-<-\n");
gotoxy(80,12);
for(i=0;i<10;i++){//aqui começa a lógica/processamento
	printf("\n \t \t %dº número: ", i+1);
	scanf("%d",&numero);
	resul=numero%2;
		if(resul==0) {
		contPar++;
		soma=numero+soma;
		}else{
			contImpar++;
			somaImpar=somaImpar+numero;
	}
}
media=somaImpar/contImpar;//tem que fazer fora do laço
	system("pause");
	system("cls");
	system("color A0");
	tela();
	gotoxy(80,10);
	printf("Números pares digitados: %d",contPar);
	gotoxy(80,12);
	printf("Números ímpares digitados: %d",contImpar);
	gotoxy(80,14);
	printf("Soma dos números pares digitados: %d", soma);
	gotoxy(80,16);
	printf("Média dos números ímpares digitados: %2.2f\n",media);
return 0;
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
	    Sleep(4);
	}
    gotoxy(100,3);
    printf("Exercício 4 - lista 2");
}

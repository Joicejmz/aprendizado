//feito por Joice :P

/*Fa�a um programa que solicite ao usu�rio 10 n�meros inteiros e, ao final, informe a quantidade de n�meros �mpares e pares lidos. Calcule tamb�m a soma dos n�meros pares e a
m�dia dos n�meros �mpares.*/
#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<windows.h>
#include<unistd.h>
void gotoxy(int x, int y); // declaro fun��es que chamarei dentro do int main; elas est�o abaixo da fun��o principal
void tela();

int main(){
setlocale(LC_ALL,"Portuguese_Brazil");

int contPar=0, contImpar=0, numero, i, soma=0, resul, somaImpar=0;// se n�o zerar esses itens d� probleminha na maioria das vezes 
float media;

	system("cls");
 	system("color 0A"); 
	tela();	
 		gotoxy(80,10);
		printf("->->-> Digite 10 n�meros inteiros <-<-<-\n");
gotoxy(80,12);
for(i=0;i<10;i++){//aqui come�a a l�gica/processamento
	printf("\n \t \t %d� n�mero: ", i+1);
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
media=somaImpar/contImpar;//tem que fazer fora do la�o
	system("pause");
	system("cls");
	system("color A0");
	tela();
	gotoxy(80,10);
	printf("N�meros pares digitados: %d",contPar);
	gotoxy(80,12);
	printf("N�meros �mpares digitados: %d",contImpar);
	gotoxy(80,14);
	printf("Soma dos n�meros pares digitados: %d", soma);
	gotoxy(80,16);
	printf("M�dia dos n�meros �mpares digitados: %2.2f\n",media);
return 0;
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
	    Sleep(4);
	}
    gotoxy(100,3);
    printf("Exerc�cio 4 - lista 2");
}

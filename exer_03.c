//feito por Joice :P

//3) Fa�a um programa para mostrar a soma e a m�dia dos 10 primeiros termos da s�rie de Fibonacci: 0 1 1 2 3 5 8 �

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


int atual=1, anterior=0, proximo, cont=1, soma=0;
float media;

	system("cls");
 	system("color 5F"); 
	tela();	
 		gotoxy(67,10);
		printf("*o* *o* Curiosidades sobre a sequ�ncia de Fibonacci at� o 10� termo *o* *o*");
		while(cont<=5){                                           // se eu colocar cont<=10 ele pega 20 termos, pois estou pedindo pra ele mostrar anterior e pr�ximo 
  	//	printf("\n%d\n",atual);   // s� mostrar: (o exerc�cio n�o pede para mostrar, isso � algo pra eu poder conferir e depois fazer o que o exerc�cio pede)
        proximo=atual+anterior;
   		anterior=anterior+atual;
   		atual=atual+proximo;
   //	printf("%d",anterior);// s� mostrar: (o exerc�cio n�o pede para mostrar, isso � algo pra eu poder conferir e depois fazer o que o exerc�cio pede)
    	soma=soma+atual;
	    cont++;
        }
        
		media=soma/10;// calculei a m�dia fora pq dentro do la�o dava problema se colocasse desse jeito; n�o tentei...
		gotoxy(80,12);
		printf("Soma dos 10 primeiros n�meros �: %d",soma);
		gotoxy(80,14);
		printf("M�dia dos 10 primeiros n�meros �: %2.2f",media);
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
		Sleep(5);
	}
    // Desenha as linhas verticais
	for( l=1;l<=60;l++){
	    gotoxy(1,l); printf(":");
	    gotoxy(237,l); printf(":");
	    Sleep(5);
	}
    gotoxy(100,3);
    printf("Exerc�cio 3 - lista 2");
}





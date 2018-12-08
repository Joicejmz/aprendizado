//feito por Joice :P

//Fazer um programa para mostrar os 20 primeiros número impares.

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

int numero, resul, i;

	system("cls");
 	system("color F5"); 
	tela();	
 	
	 	gotoxy(80,10);//entrada, processamento e saída tudo no laço "for"
		printf("Veja os 20 primeiros números ímpares\n\n");
			for(i=1;i<40;i++){
				resul=i%2;
				if (resul!=0) printf("\t %d ",i ); 
				if (resul=0) printf("\n\n");
				}
getch();
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
		Sleep(5);
	}
    // Desenha as linhas verticais
	for( l=1;l<=60;l++){
	    gotoxy(1,l); printf(":");
	    gotoxy(237,l); printf(":");
	    Sleep(7);
	}
    gotoxy(100,3);
    printf("Exercício 1 - lista 2");
}



//feito por Joice :P

/*Uma determinada empresa armazena para cada funcion�rio (10 no total) uma ficha contendo o
c�digo, o n�mero de horas trabalhadas e o seu n� de dependentes.
Considerando que:
a. A empresa paga 12 reais por hora e 40 reais por dependentes.
b. Sobre o sal�rio s�o feitos descontos de 8,5% para o INSS e 5% para IR.
Fa�a um programa para ler o c�digo, n�mero de horas trabalhadas e n�mero de dependentes de
cada funcion�rio. Ap�s a leitura, escreva qual o c�digo, os valores descontados para cada tipo de
imposto e finalmente o sal�rio l�quido de cada um dos funcion�rios.*/

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<unistd.h>
void gotoxy(int x, int y); // declaro fun��es que chamarei dentro do int main; elas est�o abaixo da fun��o principal
void tela();

# define funcionario 10
int main(){
setlocale(LC_ALL,"Portuguese_Brazil");

char nome_funcionario[funcionario][30];
char codigo[funcionario][7];

int horas_trabalhadas, dependentes, i, pagamento[funcionario], pagamento_dependentes[funcionario];
float salario_liquido[funcionario];
char opcao;
opcao='0';

		
	while(opcao!='3'){//nesse caso fazer um menu (while com switch case)� melhor!
		system("cls");
	 	system("color 0B"); 
		tela();	
		gotoxy(70,9);
		printf("�.�.� BEM-VINDO AO PROGRAMA DE CADASTRO DE FUNCION�RIOS �.�.�");
		gotoxy(80,11);
		printf("# 1- Cadastrar o(a) funcion�rio(a)");
		gotoxy(80,13);
		printf("# 2-Visualizar ficha dos funcion�rios");
		gotoxy(80,15);
		printf("# 3-Sair");
		fflush(stdin);
		gotoxy(80,17);
		printf("# Digite a op��o: ");
			gotoxy(98,17);
			scanf("%c", &opcao);
	printf("\n");
	switch(opcao){
		case '1': //  inserir os dados e fazer os c�lculos
		system("pause");
		system("cls");
		system("color 7C");
		tela();
		gotoxy(80,13);
		printf("Entre com os seguintes dados\n");
			for(i=0;i<funcionario;i++){
			
				printf("\n\t-> Nome: ");
			
					scanf("%s", &nome_funcionario[i]);
						fflush(stdin);
				
				printf("\t-> C�digo: ");
				
					scanf("%s", &codigo[i]);
				
				printf("\t-> Quantidade de horas trabalhadas: ");
					
					scanf("%d", &horas_trabalhadas);
						fflush(stdin);
			
				printf("\t-> Quantidade de dependentes de: ");
				
					scanf("%d", &dependentes);
						fflush(stdin);
						
					// aproveitei e fiz o processamento aqui mesmo no cadastro
						pagamento[i]=horas_trabalhadas*12;
						pagamento_dependentes[i]=dependentes*40;
						salario_liquido[i]=(pagamento[i]+pagamento_dependentes[i])-((0.085)+(0.05));
						
			} 
			break;
			
		case '2':// agora aqui s� mostro as coisas
			system("pause");
			system("cls");
			system("color 8E");
			tela();
			gotoxy(83,13);
			printf("��� Dados de colaboradores que t�m cadastro:���");
			gotoxy(80,14);
			printf("Descontos para todos: 0,085 para o INSS e 0,05 para IR.");
			
			printf("\n\n\t NOME \t C�DIGO  PAGAMENTO\n ");
			for(i=0;i<funcionario;i++){
			
				printf("\n\t %s \t %s \t %2.2f \n",nome_funcionario[i], codigo[i],salario_liquido[i] );	
			}
				system("pause");
				system("cls");
			break;
				
		case '3'://saindo do menu
				system("pause");
				system("cls");
				system("color F2");
				tela();
				gotoxy(80,13);
				printf("Voc� sair� do programa. \n\n\n\n");
			break;
				
		
			
		default: //pra avisar se o usu�rio escolheu algi que n�o existe
				system("pause");
				system("cls");
				system("color 4F");
				tela();
				gotoxy(80,13);
				printf("Escolha entre cadastrar, visualizar ou sair!!\n\n");
				system("pause");
			break;
	}//fecha switch
	}//fecha while
system("pause");
}//fecha a fun��o principal int main


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
	    
	}
    gotoxy(100,3);
    printf("Exerc�cio 5 - lista 2");
}
	

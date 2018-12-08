//feito por Joice :P

/*Uma determinada empresa armazena para cada funcionário (10 no total) uma ficha contendo o
código, o número de horas trabalhadas e o seu nº de dependentes.
Considerando que:
a. A empresa paga 12 reais por hora e 40 reais por dependentes.
b. Sobre o salário são feitos descontos de 8,5% para o INSS e 5% para IR.
Faça um programa para ler o código, número de horas trabalhadas e número de dependentes de
cada funcionário. Após a leitura, escreva qual o código, os valores descontados para cada tipo de
imposto e finalmente o salário líquido de cada um dos funcionários.*/

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<unistd.h>
void gotoxy(int x, int y); // declaro funções que chamarei dentro do int main; elas estão abaixo da função principal
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

		
	while(opcao!='3'){//nesse caso fazer um menu (while com switch case)é melhor!
		system("cls");
	 	system("color 0B"); 
		tela();	
		gotoxy(70,9);
		printf("§.§.§ BEM-VINDO AO PROGRAMA DE CADASTRO DE FUNCIONÁRIOS §.§.§");
		gotoxy(80,11);
		printf("# 1- Cadastrar o(a) funcionário(a)");
		gotoxy(80,13);
		printf("# 2-Visualizar ficha dos funcionários");
		gotoxy(80,15);
		printf("# 3-Sair");
		fflush(stdin);
		gotoxy(80,17);
		printf("# Digite a opção: ");
			gotoxy(98,17);
			scanf("%c", &opcao);
	printf("\n");
	switch(opcao){
		case '1': //  inserir os dados e fazer os cálculos
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
				
				printf("\t-> Código: ");
				
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
			
		case '2':// agora aqui só mostro as coisas
			system("pause");
			system("cls");
			system("color 8E");
			tela();
			gotoxy(83,13);
			printf("§§§ Dados de colaboradores que têm cadastro:§§§");
			gotoxy(80,14);
			printf("Descontos para todos: 0,085 para o INSS e 0,05 para IR.");
			
			printf("\n\n\t NOME \t CÓDIGO  PAGAMENTO\n ");
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
				printf("Você sairá do programa. \n\n\n\n");
			break;
				
		
			
		default: //pra avisar se o usuário escolheu algi que não existe
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
}//fecha a função principal int main


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
	    
	}
    gotoxy(100,3);
    printf("Exercício 5 - lista 2");
}
	

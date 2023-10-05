#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro() //Fun��o respons�vel por cadastrar os alunos no sistema
{	
    //inicio da cria�ao de variavel/string
    char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    //final da cria�ao de variavel/string
    
    printf("Digite o CPF:"); //coletando informa��o do aluno
    scanf("%s", cpf); //%s refere-se a string
    
    strcpy(arquivo, cpf); //respons�vel por copiar os valores das string
    
    FILE *file; //criar o arquivo
    file = fopen(arquivo, "w"); //criar o arquivo e o ''w'' significa escrever
    fprintf(file,cpf); // salvar o valor da vari�vel
    fclose (file); // fecha o arquivo
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose (file);
    
    printf("Digite o Nome do Aluno(a):");
    scanf("%s", nome);
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose (file);
    
    printf("Digite o Sobrenome do Aluno(a):");
    scanf("%s", sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file, sobrenome);
    fclose(file);
    
      file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose (file);
    
    printf("Digite a Data de Nascimento do Aluno(a):");
    scanf("%s", cargo);
    
    file = fopen(arquivo, "a");
    fprintf(file, cargo);
    fclose(file);
    
    system("pause");
    
  
}

int consulta()
{
   setlocale(LC_ALL, "Portuguese");
   
   char cpf[40];
   char conteudo[200];
   
   printf("Digite o CPF do Aluno(a):");
   scanf("%s", cpf);
   
   FILE *file;
   file = fopen(cpf, "r");
   
   if(file == NULL)
   {
   	printf("Aluno(a) n�o Registrado!\n");
   }
   
   while(fgets(conteudo, 200, file) != NULL)
   {
   	printf("Essas S�o as Informa��es do Aluno(a)!\n");
   	printf("%s", conteudo);
   	printf("\n");
   }
    
    system("pause");
   
   
   
}

int deletar()
{
    char cpf[40];
    
    printf("Digite o CPF do Aluno(a):");
    scanf("%s", cpf);
    
    remove(cpf);
    
    FILE *file;
    file = fopen(cpf, "r");
    
    if(file == NULL)
    {
     printf("Aluno(a) N�o Registrado!\n");
     system("pause");
	}

}


int main ()
    {
	int opcao=0; //definindo as vari�sveis
	int laco=1;

	for(laco=1;laco=1;)
    {
	  
    
       system("cls"); //responsavel por limpar a tela
    
    
    
       setlocale(LC_ALL, "Portuguese"); //definindo a linguagem
   
       printf ("###Banco de Dados dos Alunos###\n\n"); //inicio do menu
       printf ("Escolha uma op��o abaixo:\n\n");
       printf ("1-Registrar Nome do Aluno(a)\n");
       printf ("2-Consultar Nome do Aluno(a)\n");
       printf ("3-Deletar Nome do Aluno(a)\n"); 
       printf ("4-Sair do Sistema\n\n");
       printf ("Op��o: "); //fim do menu

       scanf("%d", &opcao); //armazenando a escolha do usu�rio
     
       system("cls"); 
       
       switch(opcao) //inicio da sele��o
	    {
       	 case 1: 
       	 registro(); //chamada de fun��es 
	     break;
	     
	     case 2:
	     consulta();
	     break;
       
         case 3:
         deletar();
	     break;
	     
	     case 4:
	     printf("Obrigado por Utilizar nosso Sistema!\n");
	     return 0;
	     break;
	     
	     default:
	     printf("Opc�o Invalida!\n\n");
	     system("pause");
	     break;

}

}


}
 
  
		  
		  

   


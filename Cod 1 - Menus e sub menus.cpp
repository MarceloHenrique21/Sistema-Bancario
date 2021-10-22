#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>



            FILE *arq;
            
            char *result;
            char linhas[200][100];
            char mat[200][4][100];
            char menu1;
            
            
            
            int tot,x,escolha1;
//-----------------------------------------------------------------------------------
void apresenta(){
     
                 
                 for (x=0;x<=tot;x++)
                       
                        printf("%s\n\n",linhas[x]);
                      
 }
 
 //-------------------------------------------------------------------------------------------
void le_arquivo1() {
     
     
     
     arq = fopen("Clientes.txt", "r"); //leitura
     
     
             if (arq == NULL) // Se houve erro na abertura
     
                printf("Problemas na abertura do arquivo\n");
               
               
                                  else {
                           
                                          tot=0;
                             
                             
             
             
                  while (!feof(arq)){
                                        
                                               
                         result = fgets(linhas[tot], 100, arq); // o 'fgets' le  ate 99 caracteres ou ate o '\n'
                            
            
            if (linhas[tot][strlen(linhas[tot])-1]=='\n')
              
               linhas[tot][strlen(linhas[tot])-1]='\0'; //caso o ultimo caracter seja /n, sera substituido por /0 (fin de string)
                 
                 tot++;
               }
               
                         fclose(arq);
                         tot--;
                     }
                     
                    }

//--------------------------------------------------------------------------------

void tela2(){
     
     
     printf("\n\n\n");
     printf("1 - Ir para menu de consultas \n\n");
     printf("2 - ir para o menu de inclusão de dados \n\n");
     printf("3 - Ir para menu de exclusão de dados \n\n");
     printf("4 - Ir para menu de alteração de dados \n\n");
     printf("5 - Ir para os creditos da aplicação \n\n");
     
     printf("\n\n");
     
     printf("Digite uma das opções para prosseguir: ");
     scanf("%i", &escolha1);
     printf("\n\n");
     
     
     
     
     }

int main(){
    
        // Biblioteca para utilizar acentuação em portugues   
    	setlocale(LC_ALL, "portuguese");

            //le o arquivo texto Clientes
            le_arquivo1();
    
                    //Apresenta os dados do arquivo texto clientes
                     apresenta();


       // Congela a tela durante 3 segundos
        Sleep(2000);
        
        // limpa a tela dps de ter apresentado os arquivos
        system("cls");
     
     
            
                             //Apresenta a primeira tela de menu do sistema
                             tela2();
                             
 //------------------------------------- MENU DE CONSULTAS --------------------------------------------------------------------------                            
                             switch(escolha1){
                                      
                                     case 1:
                                      //congela a tela por 1 segundo antes de encaminhar o usuario para o proximo menu 
                                      Sleep(1000);
                                           
                                           // limpa a tela do menu anterior 
                                           system("cls");
                                           
                                           printf("\n\n  MENU DE CONSULTAS \n\n");
                                           printf("falta terminar \n\n");
                                           
                                           
                                           printf("\n\n");
                                           printf("1 - Consultar clientes por cidade ou estado \n\n");
                                           printf("2 - Total em aberto \n\n");
                                           printf("3 - Total recebido \n\n");
                                           printf("4 - total geral \n\n");
                                           
                                           printf("\n\n\n");
                                           
                                           
                                           
                                           break;
                                           
 //-----------------------------MENU DE INCLUSAO DE DADOS----------------------------------------------------------------------------------
                                           
                              case 2:
                                      //congela a tela por 1 segundo antes de encaminhar o usuario para o proximo menu 
                                      Sleep(1000);
                                           
                                           // limpa a tela do menu anterior 
                                           system("cls");
                                           
                                           printf("\n\n  MENU DE INCLUSAO DE DADOS \n\n");
                                           printf("falta fazer \n\n");
                                                      
                                                      break;
 //------------------------------MENU DE EXCLUSAO DE DADOS---------------------------------------------------------------------------------                                                     
                                                      
                                  case 3:
                                                                 
                                      //congela a tela por 1 segundo antes de encaminhar o usuario para o proximo menu 
                                      Sleep(1000);
                                           
                                           // limpa a tela do menu anterior 
                                           system("cls");
                                           
                                           printf("\n\n  MENU DE EXCLUSAO DE DADOS \n\n");
                                           printf("falta fazer \n\n");
                                                      
                                                                 break;
  //------------------------------MENU DE ALTERAÇÃO DE DADOS---------------------------------------------------------------------------------                                                               
                                   case 4:
                                                                            
                                      //congela a tela por 1 segundo antes de encaminhar o usuario para o proximo menu 
                                      Sleep(1000);
                                           
                                           // limpa a tela do menu anterior 
                                           system("cls");
                                           
                                           printf("\n\n  MENU DE ALTERAÇÃO DE DADOS \n\n");
                                           printf("falta fazer \n\n");
                                                      
                                                                            break;
  //--------------------------------CREDITO COM NOSSOS NOMES-------------------------------------------------------------------------------                                                                          
                                     case 5:
                                                                                           
                                          //congela a tela por 1 segundo antes de encaminhar o usuario para o proximo menu 
                                          Sleep(1000);
                                               
                                               // limpa a tela do menu anterior 
                                               system("cls");
                                               
                                               printf("\n\n  CREDITO COM NOSSOS NOMES \n\n");
                                               printf("falta fazer \n\n");
                                                          
                                                                               break;
                                      
                                      }
                           
//---------------------------------------------------------------------------------------------------------------                           
		system("pause");
	return (0);
}

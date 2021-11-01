#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

FILE *arqcli;
FILE *arqpar;

    struct registroParc{
           
           char numero [8];
           char codCli [5];
           char dataVenc [9];
           char DataReceb [9];
           char valor [6];
           char codBanc [4];

           };
           
           
          

            struct registroCli{
            char codigo[10];
            char nome [50];
            char cidade [30];
            char uf[3];
            char cpf[15];
            bool status;
            
            };
            
//================================================
            
            char linha[200];
            char tmp[200];
            struct registroCli cli[200];
            struct registroParc parc[200];

 //=================================================     
int opmen1,totcli,p,col, totparce;
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
void separa(){
     p=0;
	 while (linha[col]!='"' && col<strlen(linha))  {
            tmp[p]=linha[col];
            col++; //posicao na linha
            p++; //posicao no campo
          }
          col=col+3;
          tmp[p]='\0';     
     }
//----------------------------------------------------------------------------
void le_cliente(){
char *result;
  arqcli = fopen("clientes.txt", "r"); //leitura
  if (arqcli == NULL)  // Se houve erro na abertura
  
     printf("Problemas na abertura do arquivo\n");
  else   
   { 
      totcli=0;
      printf("\n\nestamos lendo o arquivo texto de cliente...\n\n");
      Sleep(2000);
	  while (!feof(arqcli))
      {
	      result = fgets(linha, 200, arqcli);  // o 'fgets' le ate 99 caracteres ou ate o '\n'
          if (linha[strlen(linha)-1]=='\n')
                linha[strlen(linha)-1]='\0'; //caso o ultimo caracter seja /n, sera substituido por /0 (fin de string)
	      //linha=""6969","ELETRONICA BRILHASOM","FEIRA DE SANTANA","BA","0","075-221-8708   ","0","63.193.700/0001-60","
	      col=1;
	      
         separa();
            	      strcpy(cli[totcli].codigo,tmp);
            	      
                      separa();
            	      strcpy(cli[totcli].nome,tmp);
            	      
            	      separa();
            	      strcpy(cli[totcli].cidade,tmp);
            	      
            	      separa();
            	      strcpy(cli[totcli].uf,tmp);
            	      
            	      separa();
            	      strcpy(cli[totcli].cpf,tmp);
	      
	      separa(); //lixo1
	      separa(); //lixo2
	      separa(); //lixo3
	      
	    
	      

     
          
          totcli++;  
         
      }
      fclose(arqcli);	
      totcli--;
      printf("importacao concluida. \n\n\n");
      Sleep(2000);
   } 
}
//----------------------------------------------------------------------------


void le_parcela(){
char *result; 
  arqpar = fopen("parcelas.txt", "r"); //leitura
  if (arqpar == NULL)  // Se houve erro na abertura
  
     printf("Problemas na abertura do arquivo\n");
  else   
   { 
      totcli=0;
      printf("\n\nestamos lendo o arquivo texto de Parcelas...\n\n");
      Sleep(2000);
	  while (!feof(arqpar))
      {
	      result = fgets(linha, 200, arqpar);  // o 'fgets' le ate 99 caracteres ou ate o '\n'
          if (linha[strlen(linha)-1]=='\n')
                linha[strlen(linha)-1]='\0'; //caso o ultimo caracter seja /n, sera substituido por /0 (fin de string)
	      //linha=""6969","ELETRONICA BRILHASOM","FEIRA DE SANTANA","BA","0","075-221-8708   ","0","63.193.700/0001-60","
	      col=1;
	      
                      separa();
         	          strcpy(parc[totparce].numero,tmp);
            	      
                      separa();
            	      strcpy(parc[totparce].codCli,tmp);
            	      
            	      separa();
            	      strcpy(parc[totparce].dataVenc,tmp);
            	      
            	      separa();
            	      strcpy(parc[totparce].DataReceb,tmp);
            	      
            	      separa();
            	      strcpy(parc[totparce].valor,tmp);
            	      
           	          separa();
            	      strcpy(parc[totparce].codBanc,tmp);
	      
	      separa(); //lixo1
	      separa(); //lixo2
	      separa(); //lixo3
	      
	    
	      

     
          
          totparce++;  
         
      }
      fclose(arqpar);	
      totparce--;
      printf("importacao concluida. \n\n\n");
      Sleep(2000);
   } 
}
//----------------------------------------------------------------------------
void Creditos(){
     
        system("cls");
               printf("\n\n                         Programa feito por: ");
               Sleep(1500);
               printf("\n          -  Emelin\n\n");
               Sleep(1000);
               printf("\n          -  Gabriel\n\n");
               Sleep(1000);
               printf("\n          -  Marcelo\n\n");
               Sleep(1000);
               printf("\n          -  Rudi\n\n");
               Sleep(5000);
               system("cls");
               printf("\n\n                              Obrigado!\n\n\n");
               
               Sleep(1500);
               
               system("cls");
               system("pause");
          
     }
     
//--------------------------------------------------------------------------------------------------------------------     
void importarCliente(){
     
     
          setlocale(LC_ALL, "portuguese");
              
             system("cls");
              le_cliente();
              
                for (int x=0; x<totcli; x++){
                                                         
        printf("|||Código do cliente: %s -  Nome do Cliente: %s - Uf: %s ~~~\n\n\n",cli[x].codigo,cli[x].nome,cli[x].uf);    
                                         
                                            }
                                            
                                            system("pause");
                                            
     
     
     
     }
     
//-----------------------------------------------------------------------------------------------------------------------------

void importarParcelas(){
     
setlocale(LC_ALL, "portuguese");
              
      system("cls");
      le_parcela();
              
     for (int x=0; x<totparce; x++){
                                                         
        printf("|||Numero da parcela: %s -  Codigo do Cliente: %s - data de vencimento: %s ~~~\n\n\n",parc[x].numero,parc[x].codCli,parc[x].dataVenc);    
                                        
                                          }
                                            
         system("pause");
          
     
     
     
     
     }
//---------------------------------------------------------------------------------------------------
void menu_principal(){
     
     system("cls");  
     printf("\n\n\n");
     printf("1 - Importacao \n\n");
     printf("2 - clientes \n\n");
     printf("3 - parcelas \n\n");
     printf("4 - consultas \n\n");
     printf("5 - creditos \n\n");
     printf("6 - fim \n\n");
     
     printf("\n\n");
     
     printf("Digite uma das opções para prosseguir: ");
     scanf("%i", &opmen1);
     printf("\n\n");
     
     
     
     switch(opmen1){
                    
        case 1:
             
         importarCliente();
             
              break;
        case 2:
              //menu_cliente();
              printf("escolheu opcao 2");

              break;      
     
     
    
    
    
    
     case 3: 
       
          importarParcelas();
          
          break;
          
         
         
         
         
          case 5:
               
            Creditos();
               
               break;
     }

}

//----------------------------------------------------------------------------

int main(){
    
  
      menu_principal();
   
    system("pause");
   
}

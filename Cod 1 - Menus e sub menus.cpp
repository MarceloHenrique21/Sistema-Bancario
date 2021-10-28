#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

FILE *arqcli;
FILE *arqpar;


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
 //=================================================     
int opmen1,totcli,p,col;
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
//----------------------------------------------------------------------------

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
              setlocale(LC_ALL, "portuguese");
              
             system("cls");
              le_cliente();
              
                for (int x=0; x<totcli; x++){
                                                         
        printf("|||Código do cliente: %s -  Nome do Cliente: %s - Uf: %s ~~~\n\n\n",cli[x].codigo,cli[x].nome,cli[x].uf);    
                                         
                                            }
                                            
                                            system("pause");
                                            
              //le_parcela();
              break;
        case 2:
              //menu_cliente();
              printf("escolheu opcao 2");

              break;      
     
     }

}

//----------------------------------------------------------------------------

int main(){
    
  
      menu_principal();
   
    system("pause");
   
}

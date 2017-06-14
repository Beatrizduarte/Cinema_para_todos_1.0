#include <stdio.h>
#include <string.h>
#include "poltro.h"	
	int filme,sessao; //VARIAVEIS DE ESCOLHA PARA O DIA DA SEMANA, FILME E SESSÃO
	int normal,estudante,idoso; // VARIAVEIS TIPO DE INGRESSO
	char matriz[1][8][16],outra='S'; // VARIAVEIS DA MATRIZ
	int fileira,coluna,psicao[8][16],pagar; // VARIAVEIS PARA A ESCOLHA DA LUGAR E FORMA DE PAGAMENTO
	float soma1,soma2,soma3,total; // VARIAVEIS DO CALCULO FINAL
	FILE *arq; // INCLUÇÃO DE ARQUIVO 
	

imprimir_linha_12(){ // A PRIMEIRA FUNÇAO E RESPONSAVEL POR TODA A PARTE ONDE E NECESSARIO OBTER INFORMAÇÕES DO USUARIO

					printf("\n\t********************************************************************\n");
					printf("\n\t\t\tQUANTOS INGRESSOS NORMAIS: ");  scanf("%d",&normal);// IMPRESSÃO E ESCOLHA DO TIPO DE INGRESSOS
						printf("\n\t\t\tQUANTOS INGRESSOS ESTUDANTES: ");  scanf("%d",&estudante);
						printf("\n\t\t\tQUANTOS INGRESSOS IDOSO: ");  scanf("%d",&idoso);
					// ENTRADA DA ESCOLHA DA POLTRONA 
					printf("********************************************************************\n");
							printf("\n\n");
							printf("\n\t\t\tESCOLHA A POLTRONA\n");
							printf("\n\n");
						// O SISTEMA CHAMA AS FUNÇOES DA BIBLIOTECA 'POLTRO.H'
											imprimir_linha_2();
											imprimir_linha_11();
											imprimir_linha_20();
											imprimir_linha_29();  // IMPRIME NA TELA AS POLTRONAS
											imprimir_linha_38();
											imprimir_linha_47();
											imprimir_linha_56();
											imprimir_linha_65();
											printf("\n\n");	
					printf("********************************************************************\n");
						printf("\n\n");
							printf("\n\t\t\tESCOLHA A FILEIRA\n"); // ESCOLHA DA FILEIRA 
								printf("\n\t\t\t\t[H]-1\n\t\t\t\t[G]-2\n\t\t\t\t[F]-3\n\t\t\t\t[E]-4\n\t\t\t\t[D]-5\n\t\t\t\t[C]-6\n\t\t\t\t[B]-7\n\t\t\t\t[A]-8\n"); 
					printf("\n\t********************************************************************\n");
						
			    for (fileira=0; fileira<8; fileira++) 
					for (coluna=0; coluna<16; coluna++) // MATRIZ
						strcpy(matriz[fileira][coluna], "VAGO");
			 
			while (outra == 'S' || outra == 's'){
					printf("\n\t\t\tINFORMA A FILEIRA: "); scanf("%d",&fileira); //IMPRESSÃO DA FILEIRA E COLUNA
						printf("\n\t\t\tINFORME A COLUNA: "); scanf("%d",&coluna); 
							printf("\n\t********************************************************************\n");
					
					while(getchar() != '\n'); // LIMPA BUFFER DE ENTRADA
						if (strcmp(matriz[fileira][coluna], "VAGO") == 0) 
							strcpy(matriz[fileira][coluna], "SOLD"); 
							else 
							// CASO O CADEIRA JA TENHA SIDO ESCOLHIDA E APRESENTADO ESSA MENSAGEM AO USUARIO
							printf("\n\t\t\tCADEIRA OCUPADA ESCOLHA OUTRA CADEIRA\n"); 
							// SISTEMA PERGUNTA AO USUARIO SE ELE DESEJA ESCOLHER UM OUTRO LOCAL
						printf("\n\t\t\tDESEJA ESCOLHER OUTRO LUGAR? [S/N]:"); scanf("%c",&outra); 
					printf("\n\t********************************************************************\n");
				}
					printf("\n\n");
					// SISTEMA FAZ O CALCULO DA VENDA DOS INGRESSOS COM O VALOR PARA CADA TIPO E O TOTAL
					soma1=21.50*normal;
							soma3=0;
								total=soma1+soma2+soma3;
									soma2=10.75*estudante;
					printf("\n\t\t\tO VALOR A SER PAGO E:\n");
						printf("\n\t\t\tR$%.2f PARA INGRESSOS NORMAIS\n\t\t\tR$%.2f PARA INGRESSOS PARA ESTUDADES",soma1,soma2);
						printf("\n\t\t\tR$%.2f PARA INGRESSOS PARA IDOSOS\n",soma3);
							printf("\n\t\t\tO VALOR TOTAL A SER PAGO E:R$%.2f",total);
							printf("\n\n");
					printf("\n\t********************************************************************\n");
					// FORMAS DE PAGAMENTO
					printf("\n\t\tQUAL A FORMA DE PAGAMENTO [1]-DEBITO,[2]-CREDITO,[3]-DINHEIRO\n");
					printf("\n\t\t\tOPCAO:"); scanf("%d",&pagar);
					if(pagar==1){
						printf("\n\t\t\tINSIRA O CARTAO\n");
						printf("\n\t\t\tPAGAMENTO COM DEBITO REALIZADO\n");
						printf("\n\t\t\tPODE RETIRAR O CARTAO\n");
					}
						if(pagar==2){
							printf("\n\t\t\tINSIRA O CARTAO\n");
							printf("\n\t\t\tPAGAMENTO COM CREDITO REALIZADO\n");
							printf("\n\t\t\tPODE RETIRAR O CARTAO\n");
						}
							if(pagar==3){
							printf("\n\t\t\tPAGAMENTO COM DINHEIRO REALIZADO\n");
							}
			
					// O SISTEMA ENTÃO IMPRIMI PARA O USUARIO TODAS AS ESCOLHA FEITA DESDE O INICIO DO PROGRAMA
					
					printf("\n\t********************************************************************\n");
					printf("\n\t\t\t\tTicket \n");
					printf("\n\t********************************************************************\n");
					// E SALVO UM ARQUIVO COM AS INFORMAÇÕES
					arq =fopen("bilhete.txt","w");			
		}		
imprimir_linha_10(){ // FUNÇÃO PARA A IMPRESSÃO DO FILME E BILHETE
					printf("\n\t\t\t\tESCOLHA O SEU FILME\n");
					printf("\n\t\t\t[1]-ESCRITORES DA LIBERDADE\n\t\t\t[2]-HOJE EU QUERO VOLTA SOZINHO");
					printf("\n\t\t\t[3]-WALL-E\n\t\t\t[4]-ALGUEM FALOU DE RACISMO\n");
					printf("\n\t\t\tOPCAO: "); scanf("%d",&filme);
				switch(filme){
					case 1:
						printf("\n\t********************************************************************\n");
							printf("\n\t\tO FILME ESCOLHIDO FOI: *ESCRITORES DA LIBERDADE*\n");
								printf("\n\t\tESCOLHA A SESSAO:[14]-14H [16]-16H [18]-18H\n"); // IMPRESSÃO E ESCOLHA DA SESSÃO
									printf("\n\t\tOPCAO:"); scanf("%d",&sessao);
								
					imprimir_linha_12(); // E CHAMADO A FUNÇÃO QUE OBTEM INFORMAÇÕES DO USUARIO
					
					fprintf(arq,"\n\t\tO FILME ESCOLHIDO FOI:\n\t\tESCRITORES DA LIBERDADE\n\t\tA SESSAO ESCOLHIDA: %dH\n\t\tOS LUGARES ESCOLHIDOS:\n\t\tFILEIRA:%d, COLUNA:%d\n\t\t\t\tSALA 4",sessao,fileira,coluna);
						fclose(arq);
						// DEPOIS ESSÃOS INFORMAÇÕES SÃO IMPRESSAS NA TELA
						arq =fopen("bilhete.txt","r");
						fscanf(arq,"%d %d %d",&sessao,&fileira,&coluna);
				printf("\n\t\t\tO FILME ESCOLHIDO FOI:\n\t\t\tESCRITORES DA LIBERDADE\n\t\t\tA SESSAO ESCOLHIDA: %dH\n\t\t\tOS LUGARES ESCOLHIDOS:\n\t\t\tFILEIRA:%d, COLUNA:%d\n\t\t\t\tSALA 4",sessao,fileira,coluna);
						fclose(arq);
							
						printf("\n\t********************************************************************\n");
						printf("\n\t\t\tTENHA UM OTIMO FILME\n");
						printf("\n\t********************************************************************\n");
						
					break;
					// OUTRA ESCOLHA
					case 2:
						printf("\n\t********************************************************************\n");
						printf("\n\t\tO FILME ESCOLHIDO FOI: *HOJE EU QUERO VOLTA SOZINHO*\n");
							printf("\n\t\tESCOLHA A SESSAO:[15]-15H [17]-17H [19]-19H\n"); // IMPRESSÃO E ESCOLHA DA SESSÃO
								printf("\n\t\tOPCAO:"); scanf("%d",&sessao);
								
					imprimir_linha_12();
					
					fprintf(arq,"\n\t\tO FILME ESCOLHIDO FOI:\n\t\tHOJE EU QUERO VOLTA SOZINHO\n\t\tA SESSAO ESCOLHIDA: %dH\n\t\tOS LUGARES ESCOLHIDOS:\n\t\tFILEIRA:%d, COLUNA:%d\n\t\t\t\tSALA 2",sessao,fileira,coluna);
						fclose(arq);
						// DEPOIS ESSÃOS INFORMAÇÕES SÃO IMPRESSAS NA TELA
							arq =fopen("bilhete.txt","r");
							fscanf(arq,"%d %d %d",&sessao,&fileira,&coluna);
				printf("\n\t\tO FILME ESCOLHIDO FOI:\n\t\tHOJE EU QUERO VOLTA SOZINHO\n\t\tA SESSAO ESCOLHIDA: %dH\n\t\tOS LUGARES ESCOLHIDOS:\n\t\tFILEIRA:%d, COLUNA:%d\n\t\t\t\tSALA 2",sessao,fileira,coluna);
							fclose(arq);
							
						printf("\n\t********************************************************************\n");
						printf("\n\t\t\tTENHA UM OTIMO FILME\n");
						printf("\n\t********************************************************************\n");
						
					break;
					// OUTRA ESCOLHA
					case 3:
						printf("\n\t********************************************************************\n");
						printf("\n\t\tO FILME ESCOLHIDO FOI: *WALL-E*\n");
							printf("\n\t\tESCOLHA A SESSAO:[14]-14H [16]-16H [18]-18H\n"); // IMPRESSÃO E ESCOLHA DA SESSÃO
								printf("\n\t\tOPCAO:"); scanf("%d",&sessao);
					imprimir_linha_12();
					fprintf(arq,"\n\t\tO FILME ESCOLHIDO FOI:\n\t\tWALL-E\n\t\tA SESSAO ESCOLHIDA: %dH\n\t\tOS LUGARES ESCOLHIDOS:\n\t\tFILEIRA:%d, COLUNA:%d\n\t\t\t\tSALA 3",sessao,fileira,coluna);
						fclose(arq);
						// DEPOIS ESSÃOS INFORMAÇÕES SÃO IMPRESSAS NA TELA
							arq =fopen("bilhete.txt","r");
							fscanf(arq,"%d %d %d",&sessao,&fileira,&coluna);
				printf("\n\t\t\tO FILME ESCOLHIDO FOI:\n\t\t\tWALL-E\n\t\t\tA SESSAO ESCOLHIDA: %dH\n\t\t\tOS LUGARES ESCOLHIDOS:\n\t\t\tFILEIRA:%d, COLUNA:%d\n\t\t\t\tSALA 3",sessao,fileira,coluna);
							fclose(arq);
							
						printf("\n\t********************************************************************\n");
						printf("\n\t\t\tTENHA UM OTIMO FILME\n");
						printf("\n\t********************************************************************\n");
						
					break;
					// OUTRA ESCOLHA
					case 4:
						printf("\n\t********************************************************************\n");
						printf("\n\t\tO FILME ESCOLHIDO FOI: *ALGUEM FALOU DE RACISMO*\n");
							printf("\n\t\tESCOLHA A SESSAO:[14]-14H [16]-16H [18]-18H\n"); // IMPRESSÃO E ESCOLHA DA SESSÃO
								printf("\n\t\tOPCAO:"); scanf("%d",&sessao);
					imprimir_linha_12();
					fprintf(arq,"\n\t\tO FILME ESCOLHIDO FOI:\n\t\tALGUEM FALOU DE RACISMO\n\t\tA SESSAO ESCOLHIDA: %dH\n\t\tOS LUGARES ESCOLHIDOS:\n\t\tFILEIRA:%d, COLUNA:%d\n\t\t\t\tSALA 1",sessao,fileira,coluna);
						fclose(arq);
						// DEPOIS ESSÃOS INFORMAÇÕES SÃO IMPRESSAS NA TELA
							arq =fopen("bilhete.txt","r");
							fscanf(arq,"%d %d %d",&sessao,&fileira,&coluna);
				printf("\n\t\t\tO FILME ESCOLHIDO FOI:\n\t\t\tALGUEM FALOU DE RACISMO\n\t\t\tA SESSAO ESCOLHIDA: %dH\n\t\t\tOS LUGARES ESCOLHIDOS:\n\t\t\tFILEIRA:%d, COLUNA:%d\n\t\t\t\tSALA 1",sessao,fileira,coluna);
							fclose(arq);
							
						printf("\n\t********************************************************************\n");
						printf("\n\t\t\tTENHA UM OTIMO FILME\n");
						printf("\n\t********************************************************************\n");
						
					break;
			}
}
imprimir_linha180(){ // FUNÇÃO PARA OUTROS DIAS DA SEMANA
					printf("\n\t\t\t\tESCOLHA O SEU FILME\n");
					printf("\n\t\t\t[1]-PROCURANDO NEMO\n\t\t\t[2]-CURTINDO A VIDA ADOIDADO");
					printf("\n\t\t\t[3]-NA NATUREZA SELVAGEM\n");
					printf("\n\t\t\tOPCAO: "); scanf("%d",&filme);
				switch(filme){
					case 1:
						printf("\n\t********************************************************************\n");
						printf("\n\t\tO FILME ESCOLHIDO FOI: *PROCURANDO NEMO*\n");
							printf("\n\t\tESCOLHA A SESSAO:[14]-14H [16]-16H [18]-18H\n"); // IMPRESSÃO E ESCOLHA DA SESSÃO
								printf("\n\t\tOPCAO:"); scanf("%d",&sessao);
					imprimir_linha_12();
					fprintf(arq,"\n\t\tO FILME ESCOLHIDO FOI:\n\t\tPROCURANDO NEMO\n\t\tA SESSAO ESCOLHIDA: %dH\n\t\tOS LUGARES ESCOLHIDOS:\n\t\tFILEIRA:%d, COLUNA:%d\n\t\t\t\tSALA 4",sessao,fileira,coluna);
						fclose(arq);
						// DEPOIS ESSÃOS INFORMAÇÕES SÃO IMPRESSAS NA TELA
							arq =fopen("bilhete.txt","r");
							fscanf(arq,"%d %d %d",&sessao,&fileira,&coluna);
				printf("\n\t\t\tO FILME ESCOLHIDO FOI:\n\t\t\tPROCURANDO NEMO\n\t\t\tA SESSAO ESCOLHIDA: %dH\n\t\t\tOS LUGARES ESCOLHIDOS:\n\t\t\tFILEIRA:%d, COLUNA:%d\n\t\t\t\tSALA 4",sessao,fileira,coluna);
							fclose(arq);
							
						printf("\n\t********************************************************************\n");
						printf("\n\t\t\tTENHA UM OTIMO FILME\n");
						printf("\n\t********************************************************************\n");
						
					break;
					// OUTRA ESCOLHA
					case 2:
						printf("\n\t********************************************************************\n");
						printf("\n\t\tO FILME ESCOLHIDO FOI: *CURTINDO A VIDA ADOIDADO*\n");
							printf("\n\t\tESCOLHA A SESSAO:[15]-15H [17]-17H [19]-19H\n"); // IMPRESSÃO E ESCOLHA DA SESSÃO
								printf("\n\t\tOPCAO:"); scanf("%d",&sessao);
					imprimir_linha_12();
					fprintf(arq,"\n\t\tO FILME ESCOLHIDO FOI:\n\t\tCURTINDO A VIDA ADOIDADO\n\t\tA SESSAO ESCOLHIDA: %dH\n\t\tOS LUGARES ESCOLHIDOS:\n\t\tFILEIRA:%d, COLUNA:%d\n\t\t\t\tSALA 2",sessao,fileira,coluna);
						fclose(arq);
						// DEPOIS ESSÃOS INFORMAÇÕES SÃO IMPRESSAS NA TELA
							arq =fopen("bilhete.txt","r");
							fscanf(arq,"%d %d %d",&sessao,&fileira,&coluna);
				printf("\n\t\t\tO FILME ESCOLHIDO FOI:\n\t\t\tCURTINDO A VIDA ADOIDADO\n\t\t\tA SESSAO ESCOLHIDA: %dH\n\t\t\tOS LUGARES ESCOLHIDOS:\n\t\t\tFILEIRA:%d, COLUNA:%d\n\t\t\t\tSALA 2",sessao,fileira,coluna);
							fclose(arq);
							
						printf("\n\t********************************************************************\n");
						printf("\n\t\t\tTENHA UM OTIMO FILME\n");
						printf("\n\t********************************************************************\n");
						
					break;
					// OUTRA ESCOLHA
					case 3:
						printf("\n\t********************************************************************\n");
						printf("\n\t\tO FILME ESCOLHIDO FOI: *NA NATUREZA SELVAGEM*\n");
							printf("\n\t\tESCOLHA A SESSAO:[14]-14H [16]-16H [18]-18H\n"); // IMPRESSÃO E ESCOLHA DA SESSÃO
								printf("\n\t\tOPCAO:"); scanf("%d",&sessao);
								
					imprimir_linha_12();
					
					fprintf(arq,"\n\t\tO FILME ESCOLHIDO FOI:\n\t\tNA NATUREZA SELVAGEM\n\t\tA SESSAO ESCOLHIDA: %dH\n\t\tOS LUGARES ESCOLHIDOS:\n\t\tFILEIRA:%d, COLUNA:%d\n\t\t\t\tSALA 3",sessao,fileira,coluna);
						fclose(arq);
						// DEPOIS ESSÃOS INFORMAÇÕES SÃO IMPRESSAS NA TELA
							arq =fopen("bilhete.txt","r");
							fscanf(arq,"%d %d %d",&sessao,&fileira,&coluna);
				printf("\n\t\t\tO FILME ESCOLHIDO FOI:\n\t\t\tNA NATUREZA SELVAGEM\n\t\t\tA SESSAO ESCOLHIDA: %dH\n\t\t\tOS LUGARES ESCOLHIDOS:\n\t\t\tFILEIRA:%d, COLUNA:%d\n\t\t\t\tSALA 3",sessao,fileira,coluna);
							fclose(arq);
							
						printf("\n\t********************************************************************\n");
						printf("\n\t\t\tTENHA UM OTIMO FILME\n");
						printf("\n\t********************************************************************\n");
						
					break;
		}
}
void main(){
	int semana;
	
	system ("color F0"); // COMANDO PARA MUDANÇA DA COR DO FUNDO E DA LETRA 
	
	do{
				printf("\n\t********************************************************************\n");
				printf("\n\t\t\tBEM VINDOS AO CINEMA PARA TODOS\n");
				printf("\n\t********************************************************************\n");
					printf("\n\t\t\tHOJE E %s\n",__DATE__); // E INFORMANDO AO CLIENTE A DATA ATUAL
					printf("\n\t\t\tSAO %s\n",__TIME__); // E INFORMADO AO CLIENTE AS HORAS
					printf("\n\t********************************************************************\n");
				printf("\n\t\t\tESCOLHA O DIA DA SEMANA\n"); // CLIENTE ESCOLHE O DIA QUE DESEJA ASSISTIR O FILME
				printf("\n\t\t[2]-SEGUNDA\n\t\t[3]-TERCA\n\t\t[4]-QUARTA\n\t\t[5]-QUINTA\n\t\t[6]-SEXTA\n\t\t[7]-SABADO\n\t\t[8]-DOMINGO\n");
				printf("\n\t\t\tOPCAO:"); scanf("%d",&semana);
		
		if(semana==2){
			printf("\n\t\tO DIA DA SEMANA ESCOLHIDO FOI *SEGUNDA-FEIRA*\n");
				imprimir_linha_10(); // A FUNÇÃO DOS FILMES DE SEGUNDA E CHAMADO
		}
			if(semana==3){
				printf("\n\t\tO DIA DA SEMANA ESCOLHIDO FOI *TERCA-FEIRA*\n");
					imprimir_linha180(); ;// A FUNÇÃO DOS OUTROS DIAS DA SEMANA E CHAMADO
			}	
				if(semana==4){
					printf("\n\t\tO DIA DA SEMANA ESCOLHIDO FOI *QUARTA-FEIRA*\n");
						imprimir_linha180();// A FUNÇÃO DOS OUTROS DIAS DA SEMANA E CHAMADO
				}	
					if(semana==5){
						printf("\n\t\tO DIA DA SEMANA ESCOLHIDO FOI *QUINTA-FEIRA*\n");
							imprimir_linha180();// A FUNÇÃO DOS OUTROS DIAS DA SEMANA E CHAMADO
					}	
						if(semana==6){
							printf("\n\t\tO DIA DA SEMANA ESCOLHIDO FOI *SEXTA-FEIRA*\n");
								imprimir_linha180();// A FUNÇÃO DOS OUTROS DIAS DA SEMANA E CHAMADO
						}	
							if(semana==7){
								printf("\n\t\tO DIA DA SEMANA ESCOLHIDO FOI *SABADO*\n");
									imprimir_linha180();// A FUNÇÃO DOS OUTROS DIAS DA SEMANA E CHAMADO
							}	
								if(semana==8){
									printf("\n\t\tO DIA DA SEMANA ESCOLHIDO FOI *DOMINGO*\n");
										imprimir_linha180();// A FUNÇÃO DOS OUTROS DIAS DA SEMANA E CHAMADO
				
								}			
	}
	while(semana);
	system("pause");
}

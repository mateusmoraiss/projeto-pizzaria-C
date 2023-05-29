#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define VOLTAR printf(" Digite outro valor para voltar\n");
#define LIMPAR system("cls");
#define BUFF fflush(stdin);
 int main(void){
 		printf(" \t\t\t\t_________________________________________________________________________________________\n");
 		printf("\t\t\t\t|'########::'########:::::'########::'####:'########:'########::::'###::::'####::'######: |\n");
 		printf("\t\t\t\t|##.... ##: ##.... ##:::: ##.... ##:. ##::..... ##::..... ##::::'## ##::: ####:'##... ##: |\n");
 		printf("\t\t\t\t|##:::: ##: ##:::: ##:::: ##:::: ##:: ##:::::: ##::::::: ##::::'##:. ##::. ##:: ##:::..:: |\n");
 		printf("\t\t\t\t|########:: ########::::: ########::: ##::::: ##::::::: ##::::'##:::. ##:'##:::. ######:: |\n");
 		printf("\t\t\t\t|##.....::: ##.....:::::: ##.....:::: ##:::: ##::::::: ##::::: #########:..:::::..... ##: |\n");
 		printf("\t\t\t\t|##:::::::: ##::::::::::: ##::::::::: ##::: ##::::::: ##:::::: ##.... ##:::::::'##::: ##: |\n");
 		printf("\t\t\t\t|##:::::::: ##::::::::::: ##::::::::'####: ########: ########: ##:::: ##:::::::. ######:: |\n");
 		printf("\t\t\t\t|..:::::::::..::::::::::::..:::::::::....::........::........::..:::::..:::::::::......:: |\n");
 		printf("\t\t\t\t|_________________________________________________________________________________________|\n");
		system ("pause");
		
 	int senha, senha1,senha_a,opp=0,salarios[20]={0},slr=0,senha_a1,vlr=0,senha_b,senha_b1,q=0,op,pizzas=0,massa=425,molho=10000,qq=0,qqq=0,calabresa=10000,queijo=10000,presunto=10000,ovo=432,bacon=8000,catupiry=6000,cheddar=6000,cebola=87,oregano=500,caramelo=5000,pimentao=67,manjericao=1000;
	int banana=100,canela=1000,chocolate=10000,frango=15000,vendas[3000]={0},bruto=0,milho=7000,v=0,doce=12000,azeitona=11000,tomate=56,gjesus=180,dolly=180,goianinho=180,mineiro=180,bare=180,itubaina=180,fresh=99,delvalle=99,kaiser=240; // x = contador de tentativas, op = opcao, 
	int pedidos=0,x=0,bebidas=0,p[20]={0}; 
	char extrato[1000]="",extrato1[1000]="";
	salarios[0]=3000;
	salarios[1]=1100;
	salarios[2]=1000;
	salarios[3]=1000;
		struct textos{
			char reclamacoes[1000];
		}textos[20],t1,t2,t3,t4,t5,t6,t7,t8,t9;
		struct funcionarios{
				char nome[2000];
				char cpf[1000];
				char tel[1300];
				char funcao[1000];
			}funcionarios[9],f1,f2,f3,f4,f5,f6,f7,f8,f9; 	
			
		struct clientes{
				char nome[2000];
				char endereco[1000];
				char tel[1300];
			}clientes[9],c1,c2,c3,c4,c5,c6; 
	 
	 	senha=1212;             //senha administrador
		senha_a= 2304;                 // senha estoque
		senha_b= 2805;                   //senha caixa
 		
 	
	 //        LOGIN
	 do{
 		system("cls");
 		if(x>0){	
 			printf("Senha invalida\n\n\n");
		 }
		 if(x>1){
		 	printf("VOCE TEM 01 TENTATIVA\n\n");
		 }
		 if(x>2){
		 	return 0;
		 }
 	printf(" Funcao desejada:\n");
	 printf("(1) ADM \n");
	 printf("(2) Estoquista\n");
	 printf("(3) Caixa\n");
	 scanf("%d",&opp);
 	switch (opp){
	 case 1:
		 printf("insira sua senha: ");
		scanf("%d",&senha1);
		 break;
	case 2:
		printf("insira sua senha: ");
		scanf("%d",&senha_a1);
		 break;
	case 3:
		 printf("insira sua senha: ");
		scanf("%d",&senha_b1); 
		 break; 
	 default:
	   printf("selecione uma opcao valida \n");
		 break;
	 }
 	x++;
 }while(senha!=senha1&&senha_a!=senha_a1&&senha_b!=senha_b1);
 	
 	do{
	 
 	system("cls");
 	
  	
	 printf("------------------------------------\n");
	 
	 printf(" | 1-FINANCEIRO                    | \n");                 
	 printf(" |                                 | \n");
	 printf(" | 2-PEDIDOS                       | \n");
	 printf(" |                                 | \n");
	 printf(" | 3-ESTOQUE                       | \n");  
	 printf(" |                                 | \n");   
	 printf(" | 4-PESSOAL                       | \n");       
	 printf(" |                                 | \n");   
	 printf(" | 5-CLIENTES                      | \n");
	 printf(" |                                 | \n");   
	 printf(" | 6-RECLAMACOES                   | \n");
	  x=0;
	printf("------------------------------------\n");
	
 	
	 	
 	scanf("%d",&op);
 	
 	switch(op){
 		case 1:
			//FINANCEIRO
			if(opp==1){
			 			system("cls");
			 			printf(" F I N A N C E I R O\n\n");
			 			printf("(1) Entrada\n(2) Saida\n\n");
			 	VOLTAR		
			 			scanf("%d",&op);
			 			//opcoes financeiro
			 		switch(op){
			 				case 1:
			 			LIMPAR	
						 printf("(1) Caixa \n(2) Gerenciar caixa \n");
						 VOLTAR
							scanf("%d",&op);
							if(op==1){//A
							LIMPAR
			 			printf("Entrada total do caixa: %d R$ \n \n",bruto);
			 					for(x=0;x<v;x++){
			 						
			 					printf("Venda %d  TOTAL=%d\n",x+1,vendas[x]);
								 	bruto=bruto+vendas[x];
								 }
			 					
			 					system("pause");
							}//A
							else{
								LIMPAR
								printf("(1) Adcionar R$ \n(2) Remover R$ \n");
								scanf("%d",&op);
									if(op==1){
										printf("Valor a adicionar: ");
										scanf("%d",&vlr);
										bruto=bruto+vlr;
								LIMPAR		printf("%d R$ adcionados ao caixa!\n\n",vlr);
										system("pause");
									}
									if(op==2){
										printf("Valor a remover: ");
										scanf("%d",&vlr);
										printf("R$");
										bruto=bruto-vlr;
								LIMPAR		printf("%d R$ removidos do caixa!\n\n",vlr);
										system("pause");
									}
							}
			 					break;
			 				case 2:
			 				LIMPAR	
								printf("(1) Salarios\n");
			 					printf("(2) Cadastrar novo contrato  \n");
			 					scanf("%d",&op);
			 						if(op==1){
			 							LIMPAR
			 					printf("Salarios: \n");
			 						printf("ADM: %d R$\n",salarios[0]);
			 						printf("Pizzaiolos: %d R$\n",salarios[1]);
			 						printf("Caixa: %d R$\n",salarios[2]);
			 						printf("Atendente: %d R$\n",salarios[3]);
			 					}else{
			 						system("cls");
			 						printf("(1) ADM: \n");
			 						printf("(2) Pizzaiolo: \n");
			 						printf("(3) Caixa: \n");
									printf("(4) Atendente: \n");
									scanf("%d",&op);
										if(op==1){
											system("cls");
											printf("ADM \n");
											printf("Digite o valor a acrescentar: ");
											scanf("%d",&slr);
											salarios[0]=salarios[0]+slr;
										}
										if(op==2){
											system("cls");
											printf("Pizzaiolo \n");
											printf("Digite o valor a acrescentar: ");
											scanf("%d",&slr);
											salarios[1]=salarios[1]+slr;
										}
										if(op==3){
											system("cls");
											printf("CAIXA \n");
											printf("Digite o valor a acrescentar: ");
											scanf("%d",&slr);
											salarios[2]=salarios[2]+slr;											
										}
										if(op==4){
											system("cls");
											printf("ATENDENTE \n");
											printf("Digite o valor a acrescentar: ");
											scanf("%d",&slr);
											salarios[3]=salarios[3]+slr;
										}			 						
								 }			 						
			 					system("pause");
								 break;
												  }
		
						 }
						// 
break;
		case 2: 
			// Pedidos
			if(opp==1||opp==3){
				system("cls");
						do{
							printf("P I Z Z A S  E  B E B I D A S \n"); // fazer tabela de sabores 
							printf(" (1) PIZZAS \n");
							printf(" (2) BEBIDAS \n");
							printf(" (3) EXTRATO\n");
							printf(" (4) PIZZAS MAIS VENDIDAS\n");
							printf(" (5) FINALIZAR PEDIDO\n");
						VOLTAR
							scanf("%d",&op);
								if(op == 1 ){
									
									do{
									system("cls");
									printf(" ______________________________________________________________________________________________  \n");	
									printf("|(1)Calabresa --------------------------------------------------------------------------- 15 R$|\n");
									printf("|(2)Frango    --------------------------------------------------------------------------- 15 R$|\n");
									printf("|(3)Napolitana -------------------------------------------------------------------------- 15 R$|\n");
									printf("|(4)Frango com catupiry ----------------------------------------------------------------- 18 R$|\n");
									printf("|(5)Portuguesa -------------------------------------------------------------------------- 18 R$|\n");
									printf("|(6)Bacon com cheddar ------------------------------------------------------------------- 18 R$|\n");
									printf("|(7)A moda    --------------------------------------------------------------------------- 23 R$|\n");
									printf("|(8)Chocolate --------------------------------------------------------------------------- 16 R$|\n");
									printf("|(9)Banana com canela ------------------------------------------------------------------- 16 R$|\n");
									printf("|(10)Doce de leite ---------------------------------------------------------------------- 16 R$|\n");
									printf("|(0)Parar pedidos                                                                              |\n");
									printf("|______________________________________________________________________________________________|\n");
									scanf("%d",&op);
									// PEDIDOS PROCESSAMENTO
										
											if(op==1){
											
											pedidos=pedidos+15;
											printf("Pedido: Calabresa.\n");
											printf("Subtotal: %d \n",pedidos);	
											strcat(extrato,"Calabresa\n");								
											massa=massa-1;
											molho=molho-300;
											queijo=queijo-200;
											calabresa=calabresa-200;
											azeitona=azeitona-80;
											oregano=oregano-5;
											cebola=cebola-1;
											p[0]++;
												system("pause");}
											if(op==2){
											
											pedidos=pedidos+15;
											printf("Pedido: Frango.\n");
											printf("Subtotal: %d \n",pedidos);											
											strcat(extrato,"Frango\n");
											massa=massa-1;
											molho=molho-200;
											frango=frango-200;
											milho=milho-30;
											p[1]++;
												system("pause");}
											if(op==3){
											
											pedidos=pedidos+15;
											printf("Pedido: Napolitana.\n");
											printf("Subtotal: %d \n",pedidos);
											strcat(extrato,"Napolitano\n");
											massa=massa-1;
											molho=molho-300;
											queijo=queijo-300;
											tomate=tomate-1;
											oregano=oregano-5;
											manjericao=manjericao-5;
											p[2]++;
												system("pause");}
											if(op==4){
											
											pedidos=pedidos+18;
											printf("Pedido: Frango com catupiry.\n");
											printf("Subtotal: %d \n",pedidos);
											strcat(extrato,"Frango C/ catupiry\n");
											massa=massa-1;
											molho=molho-200;
											queijo=queijo-300;
											frango=frango-200;
											catupiry=catupiry-100;
											azeitona=azeitona-80;
											p[3]++;
												system("pause");}
											if(op==5){
											
											pedidos=pedidos+18;
											printf("Pedido: Portuguesa.\n");
											printf("Subtotal: %d \n",pedidos);
											strcat(extrato,"Portuguesa\n");
											massa=massa-1;
											molho=molho-200;
											queijo=queijo-200;
											presunto=presunto-200;
											ovo=ovo-2;
											cebola=cebola-1;
											azeitona=azeitona-80;
											tomate=tomate-1;
											pimentao=pimentao-1;
											p[4]++;
												system("pause");}
											if(op==6){
											
											pedidos=pedidos+18;
											printf("Pedido: Bacon com cheddar.\n");
											printf("Subtotal: %d \n",pedidos);											
											strcat(extrato,"Bacon com cheddar\n");
											massa=massa-1;
											molho=molho-200;
											queijo=queijo-300;
											bacon=bacon-500;
											cheddar=cheddar-100;
											p[5]++;
												system("pause");}
											if(op==7){
											
											pedidos=pedidos+23;
											printf("Pedido: A moda.\n");
											printf("Subtotal: %d \n",pedidos);
											strcat(extrato,"A moda\n");
											massa=massa-1;
											molho=molho-200;
											queijo=queijo-300;
											presunto=presunto-200;
											calabresa=calabresa-200;
											bacon=bacon-350;
											p[6]++;
												system("pause");}
											if(op==8){
											
											pedidos=pedidos+16;
											printf("Pedido: Chocolate.\n");
											printf("Subtotal: %d \n",pedidos);
											strcat(extrato,"Chocolate\n");
											massa=massa-1;
											queijo=queijo-300;
											chocolate=chocolate-400;
											p[7]++;
												system("pause");}
											if(op==9){
											
											pedidos=pedidos+16;
											printf("Pedido: Banana com canela.\n");
											printf("Subtotal: %d \n",pedidos);
											strcat(extrato,"Banana com canela\n");
											massa=massa-1;
											queijo=queijo-300;
											caramelo=caramelo-100;
											banana=banana-2;
											canela=canela-5;
											p[8]++;
												system("pause");}
											if(op==10){
											
											pedidos=pedidos+16;
											printf("Pedido: Doce de leite.\n");
											printf("Subtotal: %d \n",pedidos);
											strcat(extrato,"Doce de leite\n");
											massa=massa-1;
											queijo=queijo-300;
											doce=doce-100;
											p[9]++;
												system("pause");}
											
								
																		}while(op!=0);
									system("pause");}
							
							
								if(op == 2){
									do{
									if(x>0){
										system("cls");
									}
									
									
									printf("_______________________________________________________________________________________________\n");	
									printf("|(1)Guarana Jesus --------------------------------------------------------------------- 8 R$   |\n");
									printf("|(2)Dolly    -------------------------------------------------------------------------- 5 R$   |\n");
									printf("|(3)Goianinho ------------------------------------------------------------------------- 4 R$   |\n");
									printf("|(4)Mineiro --------------------------------------------------------------------------- 5 R$   |\n");
									printf("|(5)Bare ------------------------------------------------------------------------------ 4 R$   |\n");
									printf("|(6)Itubaina -------------------------------------------------------------------------- 4 R$   |\n");
									printf("|(7)Fresh  ---------------------------------------------------------------------------- 3 R$   |\n");
									printf("|(8)Del Valle ------------------------------------------------------------------------- 8 R$   |\n");
									printf("|(9)Kaiser ---------------------------------------------------------------------------- 7 R$   |\n");
									printf("|(0)Parar pedidos                                                                              |\n");
									printf("|______________________________________________________________________________________________|\n");
									scanf("%d",&op);
												if(op==1){
											
											bebidas=bebidas+8;
											
											printf("Pedido: Guarana Jesus.\n");
											printf("Subtotal: %d \n",bebidas);
											strcat(extrato1,"Guarana Jesus\n");
											gjesus=gjesus-1;																				
										x++;
												system("pause");}
											if(op==2){
											
											bebidas=bebidas+5;
											printf("Pedido: Dolly.\n");
											printf("Subtotal: %d \n",bebidas);
											strcat(extrato1,"Dolly\n");
											dolly=dolly-1;											
											x++;
												system("pause");}
											if(op==3){
											
											bebidas=bebidas+4;
											printf("Pedido: Goianinho.\n");
											printf("Subtotal: %d \n",bebidas);
											strcat(extrato1,"Goianinho\n");
											goianinho=goianinho-1;
											x++;
												system("pause");}
											if(op==4){
											
											bebidas=bebidas+5;
											printf("Pedido: Mineiro.\n");
											printf("Subtotal: %d \n",bebidas);
											strcat(extrato1,"Mineiro\n");
											mineiro=mineiro-1;
											x++;
												system("pause");}
											if(op==5){
											
											bebidas=bebidas+4;
											printf("Pedido: Bare.\n");
											printf("Subtotal: %d \n",bebidas);
											strcat(extrato1,"Bare\n");
											bare=bare-1;
											x++;
												system("pause");}
											if(op==6){
											
											bebidas=bebidas+4;
											printf("Pedido: Itubaina.\n");
											printf("Subtotal: %d \n",bebidas);
											strcat(extrato1,"Itubaina\n");
											itubaina=itubaina-1;											
											x++;
												system("pause");}
											if(op==7){
											
											bebidas=bebidas+3;
											printf("Pedido: Fresh.\n");
											printf("Subtotal: %d \n",bebidas);
											strcat(extrato1,"Fresh\n");
											fresh=fresh-1;
											x++;
												system("pause");}
											if(op==8){
											
											bebidas=bebidas+8;
											printf("Pedido: Del Valle.\n");
											printf("Subtotal: %d \n",bebidas);
											strcat(extrato1,"Del Valle\n");
											delvalle=delvalle-1;
											x++;
												system("pause");}
											if(op==9){
											
											bebidas=bebidas+7;
											printf("Pedido: Kaiser.\n");
											printf("Subtotal: %d \n",bebidas);
											strcat(extrato1,"Kaiser\n");
											kaiser=kaiser-1;
											x++;
												system("pause");
											
								
																		}
																
								}while(op!=0);
									
								}
									if(op==3){
										system("cls");
										printf("Total R$: %d\n",pedidos+bebidas);
										printf("Pizzas:\n");
										printf("%s",extrato);
										printf("\n\n\nBebidas:\n");
										printf("%s",extrato1);
										
										
									system("pause");	
									}	
									//finalizar
									if(op==4){
										system("cls");
										 
											
										
										printf("Calabresa: %d \n",p[0]);
										printf("Frango: %d\n",p[1]);
										printf("Napolitana: %d\n",p[2]);
										printf("Frango com catupiry: %d\n",p[3]);
										printf("Portuguesa: %d\n",p[4]);
										printf("Bacon com cheddar: %d\n",p[5]);
										printf("A moda: %d\n",p[6]);
										printf("Chocolate: %d\n",p[7]);
										printf("Banana com canela: %d\n",p[8]);
										printf("Doce de leite: %d\n",p[9]);
									}
									
									if(op==5){
										system("cls");
										printf("Deseja finalizar os pedidos?\n");
										printf("(1) Sim\n");
										printf("(2) Nao\n");
										scanf("%d",&op);
											if(op==1){
												
													vendas[v]=pedidos+bebidas;
													bruto=bruto+vendas[v];
													v++;
												pedidos=0;
												bebidas=0;
												strcpy(extrato," ");
												strcpy(extrato1,"\n\n\n ");
												printf("Pedidos finalizados com sucesso! \n");
												system("pause");
											}
									}								
						}while(op<3);
						system("pause"); 
						break;
					}
break;					
		case 3:
			// ESTOQUE
			if(opp==1||opp==2){
			LIMPAR
			printf("(1) I N G R E D I E N T E S\n");
			printf("(2) B E B I D A S\n");
	VOLTAR		
				scanf("%d",&op);
					if(op ==1) {
                        LIMPAR
                        printf("(1) Entrar no estoque \n");
                        printf("(2) Gerenciar o estoque \n");
                        scanf("%d",&op);
                         if(op==1){   //if dentro do if acima
					system("cls");
					printf("_______________________________________________________________________________________________\n");	
					printf("| Massa -------------------------------------------------------------------------------  %d UND \n",massa);
					printf("| Molho    ----------------------------------------------------------------------------  %d ML\n",molho);
					printf("| Calabresa ---------------------------------------------------------------------------  %d GRAMAS\n",calabresa);
					printf("| Queijo ------------------------------------------------------------------------------  %d GRAMAS\n",queijo);
					printf("| Presunto ----------------------------------------------------------------------------  %d GRAMAS \n",presunto);
					printf("| Ovo ---------------------------------------------------------------------------------  %d UND\n",ovo);
					printf("| Bacon  ------------------------------------------------------------------------------  %d GRAMAS\n",bacon);
					printf("| Frango  -----------------------------------------------------------------------------  %d GRAMAS\n",frango);
					printf("| Milho  ------------------------------------------------------------------------------  %d GRAMAS\n",milho);
					printf("| Catupiry ----------------------------------------------------------------------------  %d GRAMAS\n",catupiry);
					printf("| Cheddar ------------------------------------------------------------------------------ %d GRAMAS\n",cheddar);
					printf("| Oregano ------------------------------------------------------------------------------ %d GRAMAS\n",oregano);
					printf("| Pimentao ----------------------------------------------------------------------------- %d UND\n",pimentao);
					printf("| Manjericao --------------------------------------------------------------------------- %d GRAMAS\n",manjericao);
					printf("| Cebola ------------------------------------------------------------------------------- %d UND\n",cebola);
					printf("| Azeitona ----------------------------------------------------------------------------- %d GRAMAS\n",azeitona);
					printf("| Tomate ------------------------------------------------------------------------------- %d UND\n",tomate);
					printf("| Banana ------------------------------------------------------------------------------- %d UND\n",banana);
					printf("| Canela ------------------------------------------------------------------------------- %d GRAMAS\n",canela);
					printf("| Chocolate ---------------------------------------------------------------------------- %d GRAMAS\n",chocolate);
					printf("| Doce --------------------------------------------------------------------------------- %d GRAMAS\n",doce);
					printf("| Caramelo ----------------------------------------------------------------------------- %d GRAMAS\n",caramelo);
					printf("|______________________________________________________________________________________________\n");
					system("pause");}else{
                        system("cls");
                        printf("(1) Inserir ingredientes \n");
                        printf("(2) Remover ingredientes \n");
                            scanf("%d",&op);
                               //      GERENCIAMENTO DE ESTOQUE PIZZAS
                               // 
                                switch (op)
                                {
                                case 1:
                                LIMPAR
                      printf("_______________________________________________________________________________________________\n");	
					printf("|(1) Massa -------------------------------------------------------------------------------  %d UND \n",massa);
					printf("|(2) Molho    ----------------------------------------------------------------------------  %d ML\n",molho);
					printf("|(3) Calabresa ---------------------------------------------------------------------------  %d GRAMAS\n",calabresa);
					printf("|(4) Queijo ------------------------------------------------------------------------------  %d GRAMAS\n",queijo);
					printf("|(5) Presunto ----------------------------------------------------------------------------  %d GRAMAS \n",presunto);
					printf("|(6) Ovo ---------------------------------------------------------------------------------  %d UND\n",ovo);
					printf("|(7) Bacon  ------------------------------------------------------------------------------  %d GRAMAS\n",bacon);
					printf("|(8) Frango  -----------------------------------------------------------------------------  %d GRAMAS\n",frango);
					printf("|(9) Milho  ------------------------------------------------------------------------------  %d GRAMAS\n",milho);
					printf("|(10) Catupiry ----------------------------------------------------------------------------  %d GRAMAS\n",catupiry);
					printf("|(11) Cheddar ------------------------------------------------------------------------------ %d GRAMAS\n",cheddar);
					printf("|(12) Oregano ------------------------------------------------------------------------------ %d GRAMAS\n",oregano);
					printf("|(13) Pimentao ----------------------------------------------------------------------------- %d UND\n",pimentao);
					printf("|(14) Manjericao --------------------------------------------------------------------------- %d GRAMAS\n",manjericao);
					printf("|(15) Cebola ------------------------------------------------------------------------------- %d UND\n",cebola);
					printf("|(16) Azeitona ----------------------------------------------------------------------------- %d GRAMAS\n",azeitona);
					printf("|(17) Tomate ------------------------------------------------------------------------------- %d UND\n",tomate);
					printf("|(18) Banana ------------------------------------------------------------------------------- %d UND\n",banana);
					printf("|(19) Canela ------------------------------------------------------------------------------- %d GRAMAS\n",canela);
					printf("|(20) Chocolate ---------------------------------------------------------------------------- %d GRAMAS\n",chocolate);
					printf("|(21) Doce --------------------------------------------------------------------------------- %d GRAMAS\n",doce);
					printf("|(22) Caramelo ----------------------------------------------------------------------------- %d GRAMAS\n",caramelo);
					printf("|______________________________________________________________________________________________\n");
                        scanf("%d",&op);
                                        if(op==1){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        massa=massa+vlr;
                                        }
                                        if(op==2){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        molho=molho+vlr;       
                                        }
                                        if(op==3){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        calabresa=calabresa+vlr; 
                                        }
                                        if(op==4){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        queijo=queijo+vlr; 
                                        }
                                        if(op==5){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        presunto=presunto+vlr;
                                        }
                                        if(op==6){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        ovo=ovo+vlr; 
                                        }
                                        if(op==7){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        bacon=bacon+vlr;  
                                        }
                                        if(op==8){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        frango=frango+vlr;
                                        }
                                        if(op==9){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        milho=milho+vlr; 
                                        }
                                        if(op==10){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        catupiry=catupiry+vlr; 
                                        }
                                        if(op==11){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        cheddar=cheddar+vlr;
                                        }
                                        if(op==12){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        oregano=oregano+vlr; 
                                        }if(op==13){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        pimentao=pimentao+vlr; 
                                        }
                                        if(op==14){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        manjericao=manjericao+vlr; 
                                        }
                                        if(op==15){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        cebola=cebola+vlr; 
                                        }
                                        if(op==16){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        azeitona=azeitona+vlr; 
                                        }
                                        if(op==17){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        tomate=tomate+vlr; 
                                        }
                                        if(op==18){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        banana=banana+vlr; 
                                        }if(op==19){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        canela=canela+vlr; 
                                        }
                                        if(op==20){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        chocolate=chocolate+vlr; 
                                        }
                                        if(op==21){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        doce=doce+vlr; 
                                        }
                                        if(op==22){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        caramelo=caramelo+vlr; 
                                        }
                                    break;
                                    case 2:
                                    LIMPAR
                      printf("_______________________________________________________________________________________________\n");	
					printf("|(1) Massa -------------------------------------------------------------------------------  %d UND \n",massa);
					printf("|(2) Molho    ----------------------------------------------------------------------------  %d ML\n",molho);
					printf("|(3) Calabresa ---------------------------------------------------------------------------  %d GRAMAS\n",calabresa);
					printf("|(4) Queijo ------------------------------------------------------------------------------  %d GRAMAS\n",queijo);
					printf("|(5) Presunto ----------------------------------------------------------------------------  %d GRAMAS \n",presunto);
					printf("|(6) Ovo ---------------------------------------------------------------------------------  %d UND\n",ovo);
					printf("|(7) Bacon  ------------------------------------------------------------------------------  %d GRAMAS\n",bacon);
					printf("|(8) Frango  -----------------------------------------------------------------------------  %d GRAMAS\n",frango);
					printf("|(9) Milho  ------------------------------------------------------------------------------  %d GRAMAS\n",milho);
					printf("|(10) Catupiry ----------------------------------------------------------------------------  %d GRAMAS\n",catupiry);
					printf("|(11) Cheddar ------------------------------------------------------------------------------ %d GRAMAS\n",cheddar);
					printf("|(12) Oregano ------------------------------------------------------------------------------ %d GRAMAS\n",oregano);
					printf("|(13) Pimentao ----------------------------------------------------------------------------- %d UND\n",pimentao);
					printf("|(14) Manjericao --------------------------------------------------------------------------- %d GRAMAS\n",manjericao);
					printf("|(15) Cebola ------------------------------------------------------------------------------- %d UND\n",cebola);
					printf("|(16) Azeitona ----------------------------------------------------------------------------- %d GRAMAS\n",azeitona);
					printf("|(17) Tomate ------------------------------------------------------------------------------- %d UND\n",tomate);
					printf("|(18) Banana ------------------------------------------------------------------------------- %d UND\n",banana);
					printf("|(19) Canela ------------------------------------------------------------------------------- %d GRAMAS\n",canela);
					printf("|(20) Chocolate ---------------------------------------------------------------------------- %d GRAMAS\n",chocolate);
					printf("|(21) Doce --------------------------------------------------------------------------------- %d GRAMAS\n",doce);
					printf("|(22) Caramelo ----------------------------------------------------------------------------- %d GRAMAS\n",caramelo);
					printf("|______________________________________________________________________________________________\n");
                        scanf("%d",&op);
                                        if(op==1){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        massa=massa-vlr;
                                        }
                                        if(op==2){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        molho=molho-vlr;       
                                        }
                                        if(op==3){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        calabresa=calabresa-vlr; 
                                        }
                                        if(op==4){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        queijo=queijo-vlr; 
                                        }
                                        if(op==5){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        presunto=presunto-vlr;
                                        }
                                        if(op==6){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        ovo=ovo-vlr; 
                                        }
                                        if(op==7){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        bacon=bacon-vlr;  
                                        }
                                        if(op==8){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        frango=frango-vlr;
                                        }
                                        if(op==9){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        milho=milho-vlr; 
                                        }
                                        if(op==10){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        catupiry=catupiry-vlr; 
                                        }
                                        if(op==11){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        cheddar=cheddar-vlr;
                                        }
                                        if(op==12){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        oregano=oregano-vlr; 
                                        }if(op==13){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        pimentao=pimentao-vlr; 
                                        }
                                        if(op==14){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        manjericao=manjericao-vlr; 
                                        }
                                        if(op==15){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        cebola=cebola-vlr; 
                                        }
                                        if(op==16){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        azeitona=azeitona-vlr; 
                                        }
                                        if(op==17){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        tomate=tomate-vlr; 
                                        }
                                        if(op==18){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        banana=banana-vlr; 
                                        }if(op==19){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        canela=canela-vlr; 
                                        }
                                        if(op==20){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        chocolate=chocolate-vlr; 
                                        }
                                        if(op==21){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        doce=doce-vlr; 
                                        }
                                        if(op==22){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        caramelo=caramelo-vlr; 
                                        }
                                    break;
                                
                                default:
                                    break;
                                }
                        system("pause");
                    }
					}
					if(op==2){
                         LIMPAR
                        printf("(1) Entrar em bebidas \n");
                        printf("(2) Gerenciar bebidas \n");
                            scanf("%d",&op);
						if(op==1){
						LIMPAR       //if dentro do if
                         printf("_____________________________________________________________________________________________________\n");	
					printf("|Guarana Jesus -------------------------------------------------------------------------------- %d QTD|\n",gjesus);
					printf("|Dolly    ------------------------------------------------------------------------------------- %d QTD| \n",dolly);
					printf("|Goianinho ------------------------------------------------------------------------------------ %d QTD|\n",goianinho);
					printf("|Mineiro -------------------------------------------------------------------------------------- %d QTD|\n",mineiro);
					printf("|Bare ----------------------------------------------------------------------------------------- %d QTD|\n",bare);
					printf("|Itubaina ------------------------------------------------------------------------------------- %d QTD|\n",itubaina);
					printf("|Fresh  --------------------------------------------------------------------------------------- %d QTD|\n",fresh);
					printf("|Del Valle ------------------------------------------------------------------------------------ %d QTD|\n",delvalle);
					printf("|Kaiser --------------------------------------------------------------------------------------- %d QTD|\n",kaiser);
					printf("|____________________________________________________________________________________________________\n");	
					system("pause");						
                        }else{
                        	LIMPAR
                            printf("(1) Inserir bebidas \n");
                            printf("(2) Remover bebidas \n");
                            scanf("%d",&op);
                            switch(op){
                                case 1:
                    printf("_____________________________________________________________________________________________________\n");	
					printf("|(1)Guarana Jesus -------------------------------------------------------------------------------- %d QTD|\n",gjesus);
					printf("|(2)Dolly    ------------------------------------------------------------------------------------- %d QTD| \n",dolly);
					printf("|(3)Goianinho ------------------------------------------------------------------------------------ %d QTD|\n",goianinho);
					printf("|(4)Mineiro -------------------------------------------------------------------------------------- %d QTD|\n",mineiro);
					printf("|(5)Bare ----------------------------------------------------------------------------------------- %d QTD|\n",bare);
					printf("|(6)Itubaina ------------------------------------------------------------------------------------- %d QTD|\n",itubaina);
					printf("|(7)Fresh  --------------------------------------------------------------------------------------- %d QTD|\n",fresh);
					printf("|(8)Del Valle ------------------------------------------------------------------------------------ %d QTD|\n",delvalle);
					printf("|(9)Kaiser --------------------------------------------------------------------------------------- %d QTD|\n",kaiser);
					printf("|____________________________________________________________________________________________________\n");	
					scanf("%d",&op);
                                     if(op==1){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        gjesus=gjesus+vlr; 
                                        }
                                        if(op==2){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        dolly=dolly+vlr; 
                                        }
                                        if(op==3){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        goianinho=goianinho+vlr; 
                                        }
                                        if(op==4){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        mineiro=mineiro+vlr; 
                                        }
                                        if(op==5){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        bare=bare+vlr; 
                                        }
                                        if(op==6){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        itubaina=itubaina+vlr; 
                                        }
                                        if(op==7){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        fresh=fresh+vlr; 
                                        }
                                        if(op==8){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        delvalle=delvalle+vlr; 
                                        }
                                        if(op==9){
                                            LIMPAR
                                            printf("Valor a acrescentar: ");
                                            scanf("%d",&vlr);
                                        kaiser=kaiser+vlr; 
                                        }
                                break;   
                                case 2:
                                	LIMPAR
                                	printf("_____________________________________________________________________________________________________\n");	
					printf("|(1)Guarana Jesus -------------------------------------------------------------------------------- %d QTD|\n",gjesus);
					printf("|(2)Dolly    ------------------------------------------------------------------------------------- %d QTD| \n",dolly);
					printf("|(3)Goianinho ------------------------------------------------------------------------------------ %d QTD|\n",goianinho);
					printf("|(4)Mineiro -------------------------------------------------------------------------------------- %d QTD|\n",mineiro);
					printf("|(5)Bare ----------------------------------------------------------------------------------------- %d QTD|\n",bare);
					printf("|(6)Itubaina ------------------------------------------------------------------------------------- %d QTD|\n",itubaina);
					printf("|(7)Fresh  --------------------------------------------------------------------------------------- %d QTD|\n",fresh);
					printf("|(8)Del Valle ------------------------------------------------------------------------------------ %d QTD|\n",delvalle);
					printf("|(9)Kaiser --------------------------------------------------------------------------------------- %d QTD|\n",kaiser);
					printf("|____________________________________________________________________________________________________\n");	
					scanf("%d",&op);
                                     if(op==1){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        gjesus=gjesus-vlr; 
                                        }
                                        if(op==2){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        dolly=dolly-vlr; 
                                        }
                                        if(op==3){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        goianinho=goianinho-vlr; 
                                        }
                                        if(op==4){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        mineiro=mineiro-vlr; 
                                        }
                                        if(op==5){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        bare=bare-vlr; 
                                        }
                                        if(op==6){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        itubaina=itubaina-vlr; 
                                        }
                                        if(op==7){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        fresh=fresh-vlr; 
                                        }
                                        if(op==8){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        delvalle=delvalle-vlr; 
                                        }
                                        if(op==9){
                                            LIMPAR
                                            printf("Valor a retirar: ");
                                            scanf("%d",&vlr);
                                        kaiser=kaiser-vlr; 
                                        }
                                break; 

                                break;
                            }   //fecha o switch
                        }		//fecha o else acima	
					}	
					break;
				}
					case 4:
			LIMPAR		 	// PESSOAL
						if(opp==1){
						
					printf("(1) Funcionarios \n(2) Novos cadastros\n");
				VOLTAR
					scanf("%d",&op);
					if(op==1){
						system("cls");
						printf("| Mateus\n" );
						printf("|    CPF:159.072.285-04\n"); 
						printf("|    TEL:(61)84225498 \n");
						printf("|    FUNCAO:Pizzaiolo\n");
						printf("|\n");
						printf("| Matheus\n" );
						printf("|    CPF:308.578.753-45\n"); 
						printf("|    TEL:(61)993542575 \n");
						printf("|    FUNCAO:Pizzaiolo\n");
						printf("|\n");
						printf("| Icaro\n" );
						printf("|    CPF:374.626.250-08\n"); 
						printf("|    TEL:(61)993700442 \n");
						printf("|    FUNCAO:ADM\n");
						printf("|\n");
						printf("| Gustavo\n" );
						printf("|    CPF:192.652.326-17\n"); 
						printf("|    TEL:(61)995275495 \n");
						printf("|    FUNCAO:Pizzaiolo\n");
						printf("|\n");
						printf("| Pericles\n" );
						printf("|    CPF:285.223.495-50\n"); 
						printf("|    TEL:(61)992575493 \n");
						printf("|    FUNCAO: Atendente\n");
						printf("|\n");
						printf("| Casemiro\n" );
						printf("|    CPF:152.165.381-00\n"); 
						printf("|    TEL:(61)84356798 \n");
						printf("|    FUNCAO: Caixa\n");
						
						printf("|   %s\n",funcionarios[0].nome );
						printf("|   CPF:  %s\n",funcionarios[0].cpf); 
						printf("|   TEL:   %s \n",funcionarios[0].tel);
						printf("|   FUNCAO: %s\n",funcionarios[0].funcao);
						printf("|\n");
						printf("|   %s\n",funcionarios[1].nome );
						printf("|   CPF:  %s\n",funcionarios[1].cpf); 
						printf("|   TEL:   %s \n",funcionarios[1].tel);
						printf("|   FUNCAO: %s\n",funcionarios[1].funcao);
						printf("|\n");
						printf("|   %s\n",funcionarios[2].nome );
						printf("|   CPF:  %s\n",funcionarios[2].cpf); 
						printf("|   TEL:   %s \n",funcionarios[2].tel);
						printf("|   FUNCAO: %s\n",funcionarios[2].funcao);
						printf("|\n");
						printf("|   %s\n",funcionarios[3].nome );
						printf("|   CPF:  %s\n",funcionarios[3].cpf); 
						printf("|   TEL:   %s \n",funcionarios[3].tel);
						printf("|   FUNCAO: %s\n",funcionarios[3].funcao);
						printf("|\n");									
					
						
					}
					if(op==2){
						
						printf("insira o nome: ");
				BUFF		scanf("%[^\n]s",&funcionarios[q].nome);
						printf("insira o cpf: ");
				BUFF		scanf("%s",&funcionarios[q].cpf);
						printf("insira o telelefone: ");
				BUFF		scanf("%[^\n]s",&funcionarios[q].tel);
						printf("insira a funcao: ");
				BUFF		scanf("%[^\n]s",&funcionarios[q].funcao);
						
						q++;
						
					}
					system("pause");				 
	}
	break;
					case 5:
						if(opp==1){
							system("cls");
						printf("(1) Clientes\n");
						printf("(2) Cadastrar\n");
						scanf("%d",&op);
						if(op==1){
							system("cls");
						printf("| Neuma\n" );
						printf("|    ENDERECO: QS4 Conjunto 16 casa 22\n"); 
						printf("|    TEL:(61)999376454 \n");
						printf("|\n Augusto\n" );
						printf("|    ENDERECO: QS7 Conjunto 18 casa 14\n"); 
						printf("|    TEL:(61)994679837 \n");
						printf("|  \n %s\n",clientes[0].nome );
						printf("|   ENDERECO:  %s\n",clientes[0].endereco); 
						printf("|   TEL: %s \n",clientes[0].tel);
						printf("|\n");
						printf("|\n   %s\n",clientes[1].nome );
						printf("|   ENDERECO:  %s\n",clientes[1].endereco); 
						printf("|   TEL: %s \n",clientes[1].tel);
						printf("|\n");
						printf("|\n   %s\n",clientes[2].nome );
						printf("|   ENDERECO:  %s\n",clientes[2].endereco); 
						printf("|   TEL: %s \n",clientes[2].tel);
						printf("|\n");
						printf("|\n   %s\n",clientes[3].nome );
						printf("|   ENDERECO:  %s\n",clientes[3].endereco); 
						printf("|   TEL: %s \n",clientes[3].tel);
						printf("|\n");
						printf("|\n   %s\n",clientes[4].nome );
						printf("|   ENDERECO:  %s\n",clientes[4].endereco); 
						printf("|   TEL: %s \n",clientes[4].tel);
						printf("|\n");
						
						}else{
						printf("insira o nome: ");
			BUFF			scanf("%[^\n]s",&clientes[qq].nome);
						printf("insira o endereco: ");
			BUFF			scanf("%[^\n]s",&clientes[qq].endereco);
						printf("insira o telelefone: ");
			BUFF			scanf("%[^\n]s",&clientes[qq].tel);
						qq++;
						}
						system("pause");
						break;
					case 6:
						if(opp==1){
						
						system("cls");
						printf("RECLAMACOES\n");
						printf("(1) Reclamacoes\n");
						printf("(2) Nova reclamacao\n");
						scanf("%d",&op);
							if(op==1){
			LIMPAR					printf("Reclamacoes: \n");
								for(x=0;x<qqq;x++){
								
								printf("(%d) %s\n\n",x+1,textos[x].reclamacoes);
								                  }
								                  
						system("pause");				
							}else{
							do{
								printf("Digite a reclamacao:  ");
							
								fflush(stdin);  //BUFF
								 scanf("%[^\n]s",&textos[qqq].reclamacoes);
						LIMPAR		 printf("nova reclamacao?\n(1)Sim\n(2)Nao\n");
								 scanf("%d",&op);
								qqq++;}while(op==1);		
							}
							
        } // fecha o if de reclamacoes
		} // fecha o if que verfica se é o adm
		} // fecha o switch principal
}while(op>-1);
				
 	return 0;
 }

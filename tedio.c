#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char resp;
    char carro[50];
    char pagamentos;
    float valor,valor_juros,valor_tot,valor_parc,result;
    int parcelas;


  

    


do
{
    



    printf("\t\t\t **** TEDIO.COM ****\n");
    printf("\t\t\t **** MENU ****\n");
    printf("\topcao 1 -- COMPRA DE CARROS\n");
    printf("\topcao 2 -- VENDA DE CARROS\n");
    printf("\topcao 3 -- DINHEIRO/EMPRESTIMO\n");
    printf("\topcao 4 -- RELATORIOS\n");
    printf("\topcao 5 -- SAIR DO SISTEMA\n");
    printf("ESCOLHA A OPCAO DESEJADA A CIMA\n");
    scanf(" %c",&resp);

        switch (resp)

        {
        case '1':
        

                    printf("\t\t *** VOCE ESCOLHEU A COMPRA DE CARROS ***\t\t\n");
                
                    printf("qual o carro desejado para a compra?\n"); 
                    scanf("%49s", carro); 


                    printf("qual o valor que gostaria de pagar?\n");
                    scanf("%f",&valor);

                    printf(" deseja pagar a vista (A) ou Parcelado (P)\n");
                    scanf(" %c", &pagamentos);

                        if (pagamentos == 'P' || pagamentos == 'p')
                        {
                            printf("em quantas parcelas deseja pagar ?\n");
                            scanf("%d", &parcelas);
                            if (parcelas > 0)
                            {
                            result = valor/parcelas;
                            printf("voce escolheu parcelar em %d vezes de %.2f reais cada uma \n", parcelas,result);
                            }else{
                                printf("numero de parcelas invalido, deve ser maior que 0");
                            }
                            

                        } else if ( pagamentos == 'A' || pagamentos == 'a' ){
                        
                            printf("voce escolheu pagar o carro %s a vista  no valor de %.2f\n",carro, valor);
                        }else{

                                printf("OPCAO DE COMPRA INVALIDA");
                        }       
                   
                printf("Deseja voltar ao menu principal? (S/N): ");
                    scanf(" %c", &resp);

             
            
            break;

            case '2' :   
                    
                        
                        printf("\t\t*** VOCE ESCOLHEU VENDA DE CARRO ***\t\t\n");

                        printf("qual carro deseja vender ?\n");
                        scanf("%s", carro);
                        printf("qual o valor do carro a venda ?\n");
                        scanf("%f", &valor);
                        printf("o valor do carro a vista (A) ou parcelado /com juros (P)?\n");
                        scanf(" %c", &pagamentos);
                                if (pagamentos == 'A' || pagamentos == 'a')
                                {
                                    printf("voce escolheu o pagamento a vista do carro %s no valor de %.2f\n", carro, valor);
                                }else if (pagamentos == 'P' || pagamentos == 'p')
                                {
                                    printf("\t\t *** voce escolheu o pagamento parcelado com juros *** \t\t\n");
                                    printf("deseja parcelar em quantas vezes ? /max 10x, com 10 por cento de juros \n");
                                    scanf("%d", &parcelas);
                                    if (parcelas <= 10)
                                    {
                                    valor_juros = valor * 0.10;
                                    valor_tot = valor + valor_juros;
                                    valor_parc = valor_tot / parcelas;
                                  
                                    
                                    printf("voce escolheu pagar em %d parcelas com juros total de %.2f\n ", parcelas,valor_juros );
                                    printf("  *** o valor da parcela fica em %.2f reais ***\n", valor_parc);
                                    printf(" *** o valor total a ser pago e de %.2f  reais***\n", valor_tot);

                                    }
                                    else
                                    {
                                        printf("valor de parcerlas nao aceita o max e 10x\n");
                                    }
                                    
                                }
                                    else
                                    {
                                       printf("opcao invalida,  escolha uma opcao valida para continuar\n");
                                    }
                            
                 break;

        

                case '3' :  
                      
                       
                    
                        
                            printf("\t\t*** VOCE ESCOLHEU  DINHEIRO/EMPRESTIMO ***\t\t\n");
                            printf("valor do emprestimo com acrescimo fixo de 15 porcento ");
                            printf(" deseja retirar quanto em emprestimo?\n");
                            scanf( "%f", &valor);
                            printf("deseja pagar a vista (A) com isencao de juros, ou parcelado (P)\n");
                            scanf(" %c", &pagamentos);
                                if (pagamentos == 'A' || pagamentos =='a')
                                {
                                    printf("voce escoheu pagar o emprestimo no valor de %.2f reais a vista\n", valor);
                                }else if (pagamentos == 'P' || pagamentos == 'p' )
                                {
                                    printf("***pagamento parcelado com juros***\n");
                                    printf("deseja parcelar em quantas vezes ?, max 10x\n");
                                    scanf("%d", &parcelas);
                                    if (parcelas <= 10)
                                    {
                                        valor_juros= valor * 0.15;
                                        valor_tot = valor + valor_juros;
                                        valor_parc = valor_tot / parcelas;
                                        
                                        printf("***voce parcelou em %d parcelas com o juros total de %.2f reais ***\n", parcelas, valor_juros);
                                        printf("*** o valor da parcela fica e, %.2f reais***\n",valor_parc);
                                        printf("*** o valor total a ser pago e de %.2f reais ***\n", valor_tot);
                                    }  
                                    else
                                    {
                                        printf("valor de parcerlas nao aceita o max e 10x\n");
                                    }
                                    
                                }              
                    break;

                    case '4' :


                        do
                        {
                           
                        
        	                printf("deseja o relatorio de qual item ?\n");
                            printf("\topcao 1 -- COMPRA DE CARROS\n");
                            printf("\topcao 2 -- VENDA DE CARROS\n");
                            printf("\topcao 3 -- DINHEIRO/EMPRESTIMO\n");
                            printf("\topcao 4 -- SAIR (S/N) \n");
                            printf("\n");
                            printf("ESCOLHA A OPCAO DESEJADA A CIMA\n");
                            scanf(" %c",&resp);

                            if (resp == 'N' || resp == 'n')
                            {
                            printf("voce escolheu nao voltar ao menu ...\n");
                            }
                                    

                        } while (resp == 'S' || resp == 's');
                    break;


                case '5':
                        printf("encerrando o programa...\n");
             
        }

        printf("Deseja voltar ao menu principal? (S/N)\n");
        scanf(" %c", &resp);

        if (resp == 'n' || resp == 'N')
        {
            printf("voce escolheu sair, encerrando o programa ...");
        }
        
    
     } while (resp == 'S' || resp == 's');
        
        


return 0;
}
#include <stdio.h>

int main(){

    int votoTotal = 0;
    int votoPaulo = 0;
    int votoRenata = 0;
    int votoBranco = 0;
    int votoNulo = 0;
    int votoConfirmacao = 0;
    int opcao = 0;

    do{
        puts("\n-------URNA ELETRÔNICA-------");
        puts("\n[5] Candidato Paulo");
        puts("[7] Candidata Renata");
        puts("[0] Branco");
        puts("\n[Qualquer outro número] Nulo");
        puts("[Números Negativos] Finaliza a Urna");
        printf("\nDigite sua opção: ");
        scanf("%d", &opcao);

        if(opcao < 0){
            puts("\nUrna Encerrada!\n");
            break;
        }
        switch(opcao){
            case 5:
                printf("Você confirma seu voto em Paulo (SIM - 1 | NÃO - 0)? ");
                scanf("%d", &votoConfirmacao);
                if(votoConfirmacao == 1){
                    votoPaulo++;
                    votoTotal++;
                }
                break;
            case 7:
                printf("Você confirma seu voto em Renata (SIM - 1 | NÃO - 0)? ");
                scanf("%d", &votoConfirmacao);
                if(votoConfirmacao == 1){
                    votoRenata++;
                    votoTotal++;
                }
                break; 
            case 0:
                printf("Você confirma seu voto Branco (SIM - 1 | NÃO - 0)? ");
                scanf("%d", &votoConfirmacao);
                if(votoConfirmacao == 1){
                    votoBranco++;
                    votoTotal++;
                }
                break;
            default:
                printf("Você confirma seu voto Nulo (SIM - 1 | NÃO - 0)? ");
                scanf("%d", &votoConfirmacao);
                if(votoConfirmacao == 1){
                    votoNulo++;
                    votoTotal++;
                }
                break;
        }
    }while(opcao >= 0);

    if(votoTotal > 0){
        puts("-------RESULTADOS-------");
        printf("\nPorcentagem de Votos [PAULO]: %.2f", (100.0 * votoPaulo) / votoTotal);
        printf("\nPorcentagem de Votos [RENATA]: %.2f", (100.0 * votoRenata) / votoTotal);
        printf("\nPorcentagem de Votos [BRANCO]: %.2f", (100.0 * votoBranco) / votoTotal);
        printf("\nPorcentagem de Votos [NULO]: %.2f\n", (100.0 * votoNulo) / votoTotal);

        if(votoPaulo > votoRenata){
            puts("O vencedor da eleição é o Candidato Paulo!\n");
        }else if(votoRenata > votoPaulo){
            puts("A vencedora da eleição é a Candidata Renata!\n");
        }else{
            puts("Empate!\n");
        }
    }else{
        puts("Não houve votos!\n");
    }
    return 0;
}

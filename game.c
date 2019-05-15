#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
#include<windows.h>

int main ()
{
   setlocale(LC_ALL, "portuguese");

   int i=0, jogador=0, maquina=0, opcao=0, jogador2=0, pntjog=0, pntjog2=0, pntmaq=0, pntemp=0, opc=0, cont=0;
   char nome[16], nome2[16];

    while(i<3)
        {
   printf("\t   JJJJJJJJJJ   OOOOOOOOOO   KKK    KKK   EEEEEEEEEE    NNNN      NN   PPPPPPPPPPP    OOOOOOOOOO \n");
   printf("\t       JJJ      OOOOOOOOOO   KKK  KKK     EEE           NNNN      NN   PPP     PPPP   OOOOOOOOOO \n");
   printf("\t       JJJ      OOO    OOO   KKK KKK      EEE           NN NN     NN   PPP     PPPP   OOO    OOO \n");
   printf("\t       JJJ      OOO    OOO   KKKKKK       EEE           NN  NN    NN   PPP     PPP    OOO    OOO \n");
   printf("\t       JJJ      OOO    OOO   KKKK         EEEEEEE       NN   NN   NN   PPPPPPPPPP     OOO    OOO \n");
   printf("\t       JJJ      OOO    OOO   KKKKKK       EEE           NN    NN  NN   PPP            OOO    OOO \n");
   printf("\t   JJ  JJJ      OOO    OOO   KKK KKK      EEE           NN     NN NN   PPP            OOO    OOO \n");
   printf("\t  JJJJJJJJ      OOOOOOOOOO   KKK   KKK    EEE           NN      NNNN   PPP            OOOOOOOOOO \n");
   printf("\t   JJJJJ        OOOOOOOOOO   KKK    KKK   EEEEEEEEEE    NN       NNN   PPP            OOOOOOOOOO \n");


    system("color F0");
    Beep(250, 1000);
    Sleep(300);
    system("cls");
    Sleep(300);
    i++;

    }

   printf("\t\t ...REGRAS DO JOGOS...");
   printf("\n\t DURANTE O JOGO, O JOGADOR DEVE SELICIONAR QUAL OPÇÃO DESEJA JOGAR, SE É CONTA A MÁQUINA OU CONTRA OUTRO JOGADOR.\n ");
   printf("\n\t AS REGRAS SÃO: UMA MÃO ABERTA GANHA DE UMA FECHADA (PORQUE UM PEDAÇO DE PAPEL PODE EMBRULHAR UMA PEDRA)\n ");
   printf("\n\t UMA MÃO FECHADA GANHA DE UMA COM DOIS DEDOS ESTENDIDOS (POIS UMA PEDRA PODE AMASSAR UMA TESOURA)\n");
   printf("\n\t E UMA MÃO COM DOIS DEDOS ESTENDIDOS GANHA DE UMA MÃO ABERTA (PORQUE A TESOURA PODE CORTAR O PAPEL)\n");

   Sleep(000);


   printf("\t\n\n DIGITE SEU NOME:\n");
   printf("\t");
   scanf("%s", nome);

   system("cls");

    do
    {

   printf("\t\t       MENU\n");
   printf("\t __________________________________ \n");
   printf("\t|                                  |\n");
   printf("\t|  1 | JOGAR CONTRA A MÁQUINA      |\n");
   printf("\t|  2 | JOGAR CONTRA OUTRA PESSOA   |\n");
   printf("\t|  3 | VER PLACAR                  |\n");
   printf("\t|  4 | CRÉDITOS                    |\n");
   printf("\t|  5 | SAIR                        |\n");
   printf("\t|__________________________________|\n");

   scanf("%d", &opcao);
   system("cls");


    switch(opcao)
    {
    case 1:
        printf("\tVOCÊ ESCOLHEU JOGAR CONTRA A MÁQUINA!\n");
        do{
        printf("\tDIGITE QUAL OPÇÃO VOCÊ DESEJA\n");
        printf("\n\t 1 PARA PEDRA\n\t 2 PAPEL\n\t 3 PARA TESOURA\n");
        scanf("%d", &jogador);

        srand(time(NULL));
        maquina= (rand()%3)+ 1;

        if (jogador==1 && maquina==1)
        {

    printf("                                                                                                  \n");
    printf("               |||| ||||||                                                  |||| ||||||           \n");
    printf("              ||  ||||  |||||                   \\         /               ||  ||||  |||||        \n");
    printf("              ||  ||||  ||  |||                  \\       /                ||  ||||  ||  |||      \n");
    printf("         ||||||               |||                 \\     /            ||||||               |||    \n");
    printf("        ||    ||               ||                  \\   /            ||    ||               ||    \n");
    printf("        ||  |||               ||                    \\ /             ||  |||               ||     \n");
    printf("        ||   ||               ||                     \\              ||   ||               ||     \n");
    printf("         ||                  ||                     / \\              ||                  ||      \n");
    printf("         ||                 |                      /   \\             ||                 |        \n");
    printf("          |                |                      /     \\             |                |         \n");
    printf("           |              |                      /       \\             |              |          \n");
    printf("            |            |                      /         \\             |            |           \n");
    printf("             |           |                                                |           |           \n");
    printf("             |           |                                                |           |           \n");
    printf("                         |                                                            |           \n");
    printf("                                                                                                  \n");
    printf("                                                                                                  \n");
    printf("                                                                                                  \n");
            printf("\t\t\t   Empate!!!\n");
            pntemp++;
            break;
        }

        else if(jogador==1 && maquina==2)
        {
    printf("                                                                                                \n");
    printf("                                                                        ||||  ||||              \n");
    printf("                                                                       ||   |||  ||             \n");
    printf("                                                                       ||   |||  ||   ||||      \n");
    printf("               |||| ||||||                                             ||   |||  ||  ||  ||     \n");
    printf("              ||  ||||  |||||                   \\         /           ||   |||  ||  ||  ||     \n");
    printf("              ||  ||||  ||  |||                  \\       /     ||||   ||   |||  ||  ||  ||     \n");
    printf("         ||||||               |||                 \\     /     ||   || ||   ||   ||  ||  ||     \n");
    printf("        ||    ||               ||                  \\   /       ||   | ||   ||   ||  ||  ||     \n");
    printf("        ||  |||               ||                    \\ /         ||   ||              | ||      \n");
    printf("        ||   ||               ||                     \\          ||   ||              | ||      \n");
    printf("         ||                  ||                     / \\         ||                     |       \n");
    printf("         ||                 |                      /   \\         ||                   ||       \n");
    printf("          |                |                      /     \\         |                   |        \n");
    printf("           |              |                      /       \\         |                 |         \n");
    printf("            |            |                      /         \\         |               |          \n");
    printf("             |           |                                            |             |           \n");
    printf("             |           |                                            |             |           \n");
    printf("                         |                                                          |           \n");



            printf("\t MÁQUINA VITORIOSO\n");
            pntmaq++;

        }

        else if(jogador==1 && maquina==3)
        {
    printf("                                                                          ||||    ||||              \n");
    printf("                                                                         ||  ||  ||  ||             \n");
    printf("                                                                         ||  ||  ||  ||             \n");
    printf("                                                                         ||  ||  ||  ||             \n");
    printf("               |||| ||||||                                               ||  ||  ||  ||             \n");
    printf("              ||  ||||  |||||                   \\         /             ||  ||  ||  |||||          \n");
    printf("              ||  ||||  ||  |||                  \\       /              ||  ||  ||  ||  |||        \n");
    printf("         ||||||               |||                 \\     /          ||||||   \\  /        |||       \n");
    printf("        ||    ||               ||                  \\   /          ||    ||   \\/           ||      \n");
    printf("        ||  |||               ||                    \\ /           ||  |||                 ||       \n");
    printf("        ||   ||               ||                     \\            ||   ||                ||        \n");
    printf("         ||                  ||                     / \\            ||                   ||         \n");
    printf("         ||                 |                      /   \\            ||                  |          \n");
    printf("          |                |                      /     \\            |                 |           \n");
    printf("           |              |                      /       \\            |               |            \n");
    printf("            |            |                      /         \\            |             |             \n");
    printf("             |           |                                               |           |              \n");
    printf("             |           |                                               |           |              \n");
    printf("                         |                                                           |              \n");



            printf("\t %s VITORIOSO(A)\n", nome);
            pntjog++;


        }
        else if(jogador==2 && maquina== 1)
            {

    printf("                                                                                                     \n");
    printf("          ||||  ||||                                                                                 \n");
    printf("         ||   |||  ||                           \\         /                      |||| ||||||        \n");
    printf("         ||   |||  |||||                         \\       /                      ||  ||||  |||||     \n");
    printf("         ||   |||  ||   ||||                      \\     /                       ||  ||||  ||  |||   \n");
    printf("         ||   |||  ||  ||  ||                      \\   /                   ||||||               ||| \n");
    printf("         ||   |||  ||  ||  ||                       \\ /                   ||    ||               || \n");
    printf("  ||||   ||   |||  ||  ||  ||                        \\                    ||  |||               ||  \n");
    printf(" ||   || ||   ||   ||  ||  ||                       / \\                   ||   ||               ||  \n");
    printf("  ||   | ||   ||   ||  ||  ||                      /   \\                  ||                  ||    \n");
    printf("   ||   ||              | ||                      /     \\                  ||                 |     \n");
    printf("   ||                     |                      /       \\                  |                |      \n");
    printf("    ||                   ||                     /         \\                  |              |       \n");
    printf("     |                   |                                                     |            |        \n");
    printf("      |                 |                                                       |           |        \n");
    printf("       |               |                                                        |           |        \n");
    printf("        |             |                                                                     |        \n");
    printf("        |             |                                                                              \n");
    printf("                      |                                                                              \n");

            printf("\t\t\t   %s VITORIOSO(A)\n", nome);
            pntjog++;

            }

        else if (jogador==2 && maquina==2)
            {

    printf("                                                                                                    \n");
    printf("          ||||  ||||                                                          ||||  ||||            \n");
    printf("         ||   |||  ||                           \\         /                 ||   |||  ||           \n");
    printf("         ||   |||  |||||                         \\       /                  ||   |||  |||||        \n");
    printf("         ||   |||  ||   ||||                      \\     /                   ||   |||  ||   ||||    \n");
    printf("         ||   |||  ||  ||  ||                      \\   /                    ||   |||  ||  ||  ||   \n");
    printf("         ||   |||  ||  ||  ||                       \\ /                     ||   |||  ||  ||  ||   \n");
    printf("  ||||   ||   |||  ||  ||  ||                        \\               ||||   ||   |||  ||  ||  ||   \n");
    printf(" ||   || ||   ||   ||  ||  ||                       / \\             ||   || ||   ||   ||  ||  ||   \n");
    printf("  ||   | ||   ||   ||  ||  ||                      /   \\             ||   | ||   ||   ||  ||  ||   \n");
    printf("   ||   ||              | ||                      /     \\             ||   ||              | ||    \n");
    printf("   ||                     |                      /       \\            ||                     |     \n");
    printf("    ||                   ||                     /         \\            ||                   ||     \n");
    printf("     |                   |                                               |                   |      \n");
    printf("      |                 |                                                 |                 |       \n");
    printf("       |               |                                                   |               |        \n");
    printf("        |             |                                                     |             |         \n");
    printf("        |             |                                                     |             |         \n");
    printf("                      |                                                                   |         \n");

        printf("\t\t\t   EMPATE !!!");
        pntemp++;



            }

        else if(jogador==2 && maquina==3)
        {
    printf("                                                                                  ||||    ||||          \n");
    printf("          ||||  ||||                                                             ||  ||  ||  ||         \n");
    printf("         ||   |||  ||                           \\         /                     ||  ||  ||  ||         \n");
    printf("         ||   |||  |||||                         \\       /                      ||  ||  ||  ||         \n");
    printf("         ||   |||  ||   ||||                      \\     /                       ||  ||  ||  ||         \n");
    printf("         ||   |||  ||  ||  ||                      \\   /                        ||  ||  ||  |||||      \n");
    printf("         ||   |||  ||  ||  ||                       \\ /                         ||  ||  ||  ||  |||    \n");
    printf("  ||||   ||   |||  ||  ||  ||                        \\                     ||||||   \\  /        |||   \n");
    printf(" ||   || ||   ||   ||  ||  ||                       / \\                   ||    ||   \\/           ||  \n");
    printf("  ||   | ||   ||   ||  ||  ||                      /   \\                  ||  |||                 ||   \n");
    printf("   ||   ||              | ||                      /     \\                 ||   ||                ||    \n");
    printf("   ||                     |                      /       \\                 ||                   ||     \n");
    printf("    ||                   ||                     /         \\                 ||                  |      \n");
    printf("     |                   |                                                    |                 |       \n");
    printf("      |                 |                                                      |               |        \n");
    printf("       |               |                                                        |             |         \n");
    printf("        |             |                                                          |           |          \n");
    printf("        |             |                                                          |           |          \n");
    printf("                      |                                                                      |          \n");



        printf("\t MÁQUINA VITORIOSA\n");
        pntmaq++;

        }

        else if(jogador==3 && maquina==1)
        {

    printf("          ||||    ||||                                                                  \n");
    printf("         ||  ||  ||  ||                                                                 \n");
    printf("         ||  ||  ||  ||             \\         /                                        \n");
    printf("         ||  ||  ||  ||              \\       /                 |||| ||||||             \n");
    printf("         ||  ||  ||  |||||            \\     /                 ||  ||||  |||||          \n");
    printf("         ||  ||  ||  ||  |||           \\   /                  ||  ||||  ||  |||        \n");
    printf("    ||||||   \\  /        |||           \\ /               ||||||               |||     \n");
    printf("   ||    ||   \\/           ||           \\                ||  |||               ||     \n");
    printf("   ||  |||                 ||           / \\               ||   ||               ||     \n");
    printf("   ||   ||                ||           /   \\              ||                  ||       \n");
    printf("    ||                   ||           /     \\              ||                 |        \n");
    printf("     ||                  |           /       \\              |                |         \n");
    printf("      |                 |           /         \\              |              |          \n");
    printf("       |               |                                       |            |           \n");
    printf("        |             |                                         |           |           \n");
    printf("         |           |                                          |           |           \n");
    printf("         |           |                                                      |           \n");

                printf("\t %s VITORIOSO(A)\n", nome);
                pntjog++;

        }

        else if(jogador==3 && maquina==2)
        {
    printf("                                                                                       \n");
    printf("                                                                 ||||  ||||            \n");
    printf("          ||||    ||||                                          ||   |||  ||           \n");
    printf("         ||  ||  ||  ||                                         ||   |||  |||||        \n");
    printf("         ||  ||  ||  ||             \\         /                ||   |||  ||   ||||    \n");
    printf("         ||  ||  ||  ||              \\       /                 ||   |||  ||  ||  ||   \n");
    printf("         ||  ||  ||  |||||            \\     /                  ||   |||  ||  ||  ||   \n");
    printf("         ||  ||  ||  ||  |||           \\   /            ||||   ||   |||  ||  ||  ||   \n");
    printf("    ||||||   \\  /        |||           \\ /            ||   || ||   ||   ||  ||  ||   \n");
    printf("   ||    ||   \\/           ||           \\              ||   | ||   ||   ||  ||  ||   \n");
    printf("   ||  |||                 ||           / \\              ||   ||              | ||    \n");
    printf("   ||   ||                ||           /   \\             ||                     |     \n");
    printf("    ||                   ||           /     \\             ||                   ||     \n");
    printf("     ||                  |           /       \\             |                   |      \n");
    printf("      |                 |           /         \\             |                 |       \n");
    printf("       |               |                                      |               |        \n");
    printf("        |             |                                        |             |         \n");
    printf("         |           |                                         |             |         \n");
    printf("         |           |                                                       |         \n");

            printf("\tMÁQUINA VITORIOSA\n");
            pntmaq++;


}
        else if (jogador==3 & maquina==3)
        {
    printf("                                                                                         \n");
    printf("                                                                  ||||    ||||           \n");
    printf("          ||||    ||||                                           ||  ||  ||  ||          \n");
    printf("         ||  ||  ||  ||                                          ||  ||  ||  ||          \n");
    printf("         ||  ||  ||  ||             \\         /                 ||  ||  ||  |||||       \n");
    printf("         ||  ||  ||  ||              \\       /                  ||  ||  ||  ||  |||     \n");
    printf("         ||  ||  ||  |||||            \\     /                   ||  ||  ||  ||  |||     \n");
    printf("         ||  ||  ||  ||  |||           \\   /                ||||||  \\  /        |||   \n");
    printf("    ||||||   \\  /        |||           \\ /                ||    ||  \\/           ||  \n");
    printf("   ||    ||   \\/           ||           \\                 ||  |||                ||   \n");
    printf("   ||  |||                 ||           / \\                ||   ||               ||    \n");
    printf("   ||   ||                ||           /   \\                ||                  ||     \n");
    printf("    ||                   ||           /     \\               ||                  |       \n");
    printf("     ||                  |           /       \\               |                 |        \n");
    printf("      |                 |           /         \\               |               |         \n");
    printf("       |               |                                        |             |          \n");
    printf("        |             |                                          |           |           \n");
    printf("         |           |                                           |           |           \n");
    printf("         |           |                                                       |           \n");

    printf("\t\t\t   EMPATE !!!");
    pntemp++;

        }


            Sleep(2000);
            system("cls");

            printf("\n\n DESEJA JOGAR NOVAMENTE?\n SELECIONE 0 PARA SIM E 1 PARA NÃO\n");
            scanf("%d", &opc);

            system("cls");
        }while(opc!=1);


            break;

    case 2:


        printf("\t VOCÊ ESCOLHEU JOGAR CONTRA OUTRA PESSOA:\n");
        printf("\t JOGADOR 2, DIGITE SEU NOME\n");
        printf("\t");
        scanf("%s", nome2);
       do{
        printf("\n\t %s, DIGITE QUAL OPÇÃO VOCÊ DESEJA\n", nome);
        printf("\n\t 1 PARA PEDRA\n\t 2 PAPEL\n\t 3 PARA TESOURA\n");
        scanf("%d", &jogador);
        system("cls");
        printf("\t %s, DIGITE QUAL OPÇÃO VOCÊ DESEJA\n", nome2);
        printf("\n\t 1 PARA PEDRA\n\t 2 PAPEL\n\t 3 PARA TESOURA\n");
        scanf("%d", &jogador2);

        if (jogador==1 && jogador2==1)
            {
    printf("                                                                                                  \n");
    printf("               |||| ||||||                                                  |||| ||||||           \n");
    printf("              ||  ||||  |||||                   \\         /               ||  ||||  |||||        \n");
    printf("              ||  ||||  ||  |||                  \\       /                ||  ||||  ||  |||      \n");
    printf("         ||||||               |||                 \\     /            ||||||               |||    \n");
    printf("        ||    ||               ||                  \\   /            ||    ||               ||    \n");
    printf("        ||  |||               ||                    \\ /             ||  |||               ||     \n");
    printf("        ||   ||               ||                     \\              ||   ||               ||     \n");
    printf("         ||                  ||                     / \\              ||                  ||      \n");
    printf("         ||                 |                      /   \\             ||                 |        \n");
    printf("          |                |                      /     \\             |                |         \n");
    printf("           |              |                      /       \\             |              |          \n");
    printf("            |            |                      /         \\             |            |           \n");
    printf("             |           |                                                |           |           \n");
    printf("             |           |                                                |           |           \n");
    printf("                         |                                                            |           \n");
    printf("                                                                                                  \n");
    printf("                                                                                                  \n");
    printf("                                                                                                  \n");
            printf("\tEmpate!!!\n");
            pntemp++;

            }

        else if(jogador==1 && jogador2==2)
        {
    printf("                                                                        ||||  ||||           \n");
    printf("                                                                       ||   |||  ||          \n");
    printf("                                                                       ||   |||  |||||       \n");
    printf("                                                                       ||   |||  ||   ||||   \n");
    printf("               |||| ||||||                                             ||   |||  ||  ||  ||  \n");
    printf("              ||  ||||  |||||                                          ||   |||  ||  ||  ||  \n");
    printf("              ||  ||||  |||||                    \\       /     ||||   ||   |||  ||  ||  ||  \n");
    printf("         ||||||              |||                  \\     /     ||   || ||   ||   ||  ||  ||  \n");
    printf("        ||    ||               ||                  \\   /       ||   | ||   ||   ||  ||  ||  \n");
    printf("        ||  |||               ||                    \\ /         ||   ||              | ||   \n");
    printf("        ||   ||               ||                     \\          ||   ||              | ||   \n");
    printf("         ||                  ||                     / \\         ||                     |    \n");
    printf("         ||                 |                      /   \\         ||                   ||    \n");
    printf("          |                |                      /     \\         |                   |     \n");
    printf("           |              |                      /       \\         |                 |      \n");
    printf("            |            |                      /         \\         |               |       \n");
    printf("             |           |                                            |             |        \n");
    printf("             |           |                                            |             |        \n");
    printf("                         |                                                          |        \n");
            printf("\t %s VITORIOSO(A)", nome2);
            pntjog2++;

        }

        else if(jogador==1 && jogador2==3)
        {
    printf("                                                                          ||||    ||||           \n");
    printf("                                                                         ||  ||  ||  ||          \n");
    printf("                                                                         ||  ||  ||  ||          \n");
    printf("                                                                         ||  ||  ||  ||          \n");
    printf("               |||| ||||||                                               ||  ||  ||  ||          \n");
    printf("              ||  ||||  |||||                   \\         /             ||  ||  ||  |||||       \n");
    printf("              ||  ||||  ||  |||                  \\       /              ||  ||  ||  ||  |||     \n");
    printf("         ||||||               |||                 \\     /          ||||||   \\  /        |||    \n");
    printf("        ||    ||               ||                  \\   /          ||    ||   \\/           ||   \n");
    printf("        ||  |||               ||                    \\ /           ||  |||                 ||    \n");
    printf("        ||   ||               ||                     \\            ||   ||                ||     \n");
    printf("         ||                  ||                     / \\            ||                   ||      \n");
    printf("         ||                 |                      /   \\            ||                  |       \n");
    printf("          |                |                      /     \\            |                 |        \n");
    printf("           |              |                      /       \\            |               |         \n");
    printf("            |            |                      /         \\            |             |          \n");
    printf("             |           |                                               |           |           \n");
    printf("             |           |                                               |           |           \n");
    printf("                         |                                                           |           \n");

            printf("\t %s VITORIOSO(A)\n", nome);
            pntjog++;

        }

        else if(jogador==2 && jogador2== 1)
        {
    printf("                                                                                                     \n");
    printf("          ||||  ||||                                                                                 \n");
    printf("         ||   |||  ||                           \\         /                      |||| ||||||        \n");
    printf("         ||   |||  |||||                         \\       /                      ||  ||||  |||||     \n");
    printf("         ||   |||  ||   ||||                      \\     /                       ||  ||||  ||  |||   \n");
    printf("         ||   |||  ||  ||  ||                      \\   /                   ||||||               ||| \n");
    printf("         ||   |||  ||  ||  ||                       \\ /                   ||    ||               || \n");
    printf("  ||||   ||   |||  ||  ||  ||                        \\                    ||  |||               ||  \n");
    printf(" ||   || ||   ||   ||  ||  ||                       / \\                   ||   ||               ||  \n");
    printf("  ||   | ||   ||   ||  ||  ||                      /   \\                  ||                  ||    \n");
    printf("   ||   ||              | ||                      /     \\                  ||                 |     \n");
    printf("   ||                     |                      /       \\                  |                |      \n");
    printf("    ||                   ||                     /         \\                  |              |       \n");
    printf("     |                   |                                                     |            |        \n");
    printf("      |                 |                                                       |           |        \n");
    printf("       |               |                                                        |           |        \n");
    printf("        |             |                                                                     |        \n");
    printf("        |             |                                                                              \n");
    printf("                      |                                                                              \n");

            printf("%s VITORIOSO(A)\n", nome);
            pntjog++;

        }

        else if (jogador==2 & jogador2==2)
        {
    printf("                                                                                                    \n");
    printf("          ||||  ||||                                                           ||||  ||||           \n");
    printf("         ||   |||  ||                           \\         /                  ||   |||  ||          \n");
    printf("         ||   |||  |||||                         \\       /                   ||   |||  |||||       \n");
    printf("         ||   |||  ||   ||||                      \\     /                    ||   |||  ||   ||||   \n");
    printf("         ||   |||  ||  ||  ||                      \\   /                     ||   |||  ||  ||  ||  \n");
    printf("         ||   |||  ||  ||  ||                       \\ /                      ||   |||  ||  ||  ||  \n");
    printf("  ||||   ||   |||  ||  ||  ||                        \\                ||||   ||   |||  ||  ||  ||  \n");
    printf(" ||   || ||   ||   ||  ||  ||                       / \\              ||   || ||   ||   ||  ||  ||  \n");
    printf("  ||   | ||   ||   ||  ||  ||                      /   \\             ||   |  ||   ||   ||  ||  ||  \n");
    printf("   ||   ||              | ||                      /     \\             ||   ||               | ||   \n");
    printf("   ||                     |                      /       \\            ||                     |     \n");
    printf("    ||                   ||                     /         \\            ||                   ||     \n");
    printf("     |                   |                                               |                   |      \n");
    printf("      |                 |                                                 |                 |       \n");
    printf("       |               |                                                   |               |        \n");
    printf("        |             |                                                     |             |         \n");
    printf("        |             |                                                     |             |         \n");
    printf("                      |                                                                   |         \n");

        printf("\t\t\t   EMPATE !!!");
        pntemp++;

        }


        else if(jogador==2 && jogador2==3)
        {
    printf("                                                                                  ||||    ||||          \n");
    printf("          ||||  ||||                                                             ||  ||  ||  ||         \n");
    printf("         ||   |||  ||                           \\         /                     ||  ||  ||  ||         \n");
    printf("         ||   |||  |||||                         \\       /                      ||  ||  ||  ||         \n");
    printf("         ||   |||  ||   ||||                      \\     /                       ||  ||  ||  ||         \n");
    printf("         ||   |||  ||  ||  ||                      \\   /                        ||  ||  ||  |||||      \n");
    printf("         ||   |||  ||  ||  ||                       \\ /                         ||  ||  ||  ||  |||    \n");
    printf("  ||||   ||   |||  ||  ||  ||                        \\                     ||||||   \\  /        |||   \n");
    printf(" ||   || ||   ||   ||  ||  ||                       / \\                   ||    ||   \\/           ||  \n");
    printf("  ||   | ||   ||   ||  ||  ||                      /   \\                  ||  |||                 ||   \n");
    printf("   ||   ||              | ||                      /     \\                 ||   ||                ||    \n");
    printf("   ||                     |                      /       \\                 ||                   ||     \n");
    printf("    ||                   ||                     /         \\                 ||                  |      \n");
    printf("     |                   |                                                    |                 |       \n");
    printf("      |                 |                                                      |               |        \n");
    printf("       |               |                                                        |             |         \n");
    printf("        |             |                                                          |           |          \n");
    printf("        |             |                                                          |           |          \n");
    printf("                      |                                                                      |          \n");



            printf("\t %s VITORIOSO(A)", nome2);
            pntjog2++;

        }

        else if(jogador==3 && jogador2==1)
        {
    printf("          ||||    ||||                                                                    \n");
    printf("         ||  ||  ||  ||                                                                   \n");
    printf("         ||  ||  ||  ||             \\         /                                          \n");
    printf("         ||  ||  ||  ||              \\       /                  |||| ||||||              \n");
    printf("         ||  ||  ||  |||||            \\     /                 ||  ||||  |||||            \n");
    printf("         ||  ||  ||  ||  |||           \\   /                  ||  ||||  ||  |||          \n");
    printf("    ||||||   \\  /        |||           \\ /               ||||||               |||       \n");
    printf("   ||    ||   \\/           ||           \\                ||  |||               ||       \n");
    printf("   ||  |||                 ||           / \\               ||   ||               ||       \n");
    printf("   ||   ||                ||           /   \\              ||                  ||         \n");
    printf("    ||                   ||           /     \\              ||                 |          \n");
    printf("     ||                  |           /       \\              |                |           \n");
    printf("      |                 |           /         \\              |              |            \n");
    printf("       |               |                                       |            |             \n");
    printf("        |             |                                         |           |             \n");
    printf("         |           |                                          |           |             \n");
    printf("         |           |                                                      |             \n");
            printf("\t %s VITORIOSO(A)\n", nome);
            pntjog++;

        }

        else if(jogador==3 && jogador2==2)
        {
    printf("                                                                                        \n");
    printf("                                                                 ||||  ||||             \n");
    printf("          ||||    ||||                                          ||   |||  ||            \n");
    printf("         ||  ||  ||  ||                                         ||   |||  |||||         \n");
    printf("         ||  ||  ||  ||             \\         /                ||   |||  ||   ||||     \n");
    printf("         ||  ||  ||  ||              \\       /                 ||   |||  ||  ||  ||    \n");
    printf("         ||  ||  ||  |||||            \\     /                  ||   |||  ||  ||  ||    \n");
    printf("         ||  ||  ||  ||  |||           \\   /            ||||   ||   |||  ||  ||  ||    \n");
    printf("    ||||||   \\  /        |||           \\ /            ||   || ||   ||   ||  ||  ||    \n");
    printf("   ||    ||   \\/           ||           \\              ||   | ||   ||   ||  ||  ||    \n");
    printf("   ||  |||                 ||           / \\              ||   ||              | ||     \n");
    printf("   ||   ||                ||           /   \\             ||                     |      \n");
    printf("    ||                   ||           /     \\             ||                   ||      \n");
    printf("     ||                  |           /       \\             |                   |       \n");
    printf("      |                 |           /         \\             |                 |        \n");
    printf("       |               |                                      |               |         \n");
    printf("        |             |                                        |             |          \n");
    printf("         |           |                                         |             |          \n");
    printf("         |           |                                                       |          \n");

             printf("\t %s VITORIOSO(A)", nome2);
             pntjog2++;

        }
        else if (jogador==3 && jogador2==3)
        {
            printf("                                                                                   \n");
    printf("                                                                  ||||    ||||             \n");
    printf("          ||||    ||||                                           ||  ||  ||  ||            \n");
    printf("         ||  ||  ||  ||                                          ||  ||  ||  ||            \n");
    printf("         ||  ||  ||  ||             \\         /                 ||  ||  ||  |||||         \n");
    printf("         ||  ||  ||  ||              \\       /                  ||  ||  ||  ||  |||       \n");
    printf("         ||  ||  ||  |||||            \\     /                   ||  ||  ||  ||  |||       \n");
    printf("         ||  ||  ||  ||  |||           \\   /                ||||||   \\  /        |||     \n");
    printf("    ||||||   \\  /        |||           \\ /                ||    ||   \\/           ||    \n");
    printf("   ||    ||   \\/           ||           \\                 ||  |||                 ||     \n");
    printf("   ||  |||                 ||           / \\                ||   ||                ||      \n");
    printf("   ||   ||                ||           /   \\                ||                   ||       \n");
    printf("    ||                   ||           /     \\               ||                  |         \n");
    printf("     ||                  |           /       \\               |                 |          \n");
    printf("      |                 |           /         \\               |               |           \n");
    printf("       |               |                                        |             |            \n");
    printf("        |             |                                          |           |             \n");
    printf("         |           |                                           |           |             \n");
    printf("         |           |                                                       |             \n");

        printf("\t\t\t   EMPATE !!!");
        pntemp++;

        }
                    Sleep(2000);
                    system("cls");

                 printf("DESEJA JOGAR NOVAMENTE?\n SELECIONE 0 PARA SIM E 1 PARA NÃO\n");
                 scanf("%d", &opc);

                 system("cls");

    } while(opc!=1);

     break;


    case 3:
    {
        printf("\n Jogador 1 = %s\n", nome);
    if (nome2[0]!= ' ')
        printf("\n Jogador 2 = %s\n", nome2);
   printf("\t\t   PLACAR\n");
   printf("\t _______________________________________________\n");
   printf("\t|           MÁQUINA   JOGADOR1    JOGADOR 2 \t|\n" );printf;
   printf("\t| VITÓRIAS    %d         %d          %d     \t|\n", pntmaq, pntjog, pntjog2);
   printf("\t|                                           \t|\n" );
   printf("\t| EMPATES     %d         %d          %d     \t|\n", pntemp);
   printf("\t|_______________________________________________|\n");


            Sleep(5000);
            system("cls");
            break;
    }


    case 4:

        {
            printf("\t\t   CRÉDITOS\n");
   printf("\t ___________________________________________________________\n");
   printf("\t|       DESENVOLVIDO POR *GIOVANNA KRUK*                   |\n");
   printf("\t|       COLABORADORES:                                     |\n");
   printf("\t|                     KARINA DUTRA                         |\n");
   printf("\t|                     MATHEUS FERREIRA                     |\n");
   printf("\t|                     FÁBIO HENRIQUE                       |\n");
   printf("\t|__________________________________________________________|\n");

   Sleep(5000);
   system("cls");
   break;
        }
    }




    }while (opcao!=5);




   system("pause");

}


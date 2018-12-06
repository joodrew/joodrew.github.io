/* Fatec Americana 2018
Analise e desenvolvimento de Sistemas
Joelson Felipe Firmino */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
//funcoes externas
#include "apa1.c"
#include "apa2.c"
#include "apa3.c"
#include "matriz.c"
#include "lotofacil.c"
#include "func.c"
#include "struct.c"
/* Lista de Exercicios
Prof: Francisco Carlos Mancin */
int header()
{
    system("cls");
    //system("clear");
    printf(" _____________________________________________________\n");
    printf("                FATEC AMERICANA                       \n");
    printf("      ANALISE E DESENVOLVIMENTO DE SISTEMAS           \n");
    printf("            JOELSON FELIPE FIRMINO                    \n");
    printf(" _____________________________________________________\n");
}
int footer ()
{
    getch();
}
int main()
{
    header();
    printf("              ATIVIDADES POS AULA   \n");
    printf(" _____________________________________________________\n");
    printf(" 1  -  APA I                                          \n");
    printf(" 2  -  APA II                                         \n");
    printf(" 3  -  APA III                                        \n");
    printf(" 4  -  APA IV                                         \n");
    printf(" 5  -  APA V                                         \n");
    printf(" 6  -  APA VI                                         \n");
    printf(" 0  -  SAIR                                           \n");
    printf(" _____________________________________________________\n");
    int menu;
    while(menu)
    {
        printf(" SELECIONE UMA TAREFA(digite o valor): ");
        scanf("%d",&menu);
        if ((menu > 6) || (menu <0))
            main();
        switch(menu)
        {
        case 0:
            exit(0);
            break;
        case 1:
            apa1();
            break;
        case 2:
            apa2();
            break;
        case 3:
            apa3();
            break;
        case 4:
            main();
            break;
        case 5:
            matriz();
            break;
        case 6:
            func();
            break;
        }
    }
}

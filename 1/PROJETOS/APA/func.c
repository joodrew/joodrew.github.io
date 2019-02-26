#include <ctype.h>
#include "competidores.c"
int func()
{
    header();
    printf("                   FUNCOES          \n");
    printf(" _____________________________________________________\n");
    printf(" 1  -  CONTADOR DE VOGAIS,CONSOANTES,VAZIOS E OUTROS                             \n");
    printf(" 2  -  ANAGRAMAS                           \n");
    printf(" 3  -  CADASTRO DE COMPETIDORES                        \n");
    printf(" 4  -  STRUCT                        \n");
    printf(" 0  -  INICIO                                          \n");
    printf(" _____________________________________________________\n");
    int menu;
    while(menu)
    {
        printf(" SELECIONE UMA TAREFA(digite o valor): ");
        scanf("%d",&menu);
        if ((menu > 4) || (menu <0))
        {
            func();
        }
        switch(menu)
        {
        case 0:
            main();
            break;
        case 1:
            contstring();
            getch();
            func();
            break;
        case 2:
            anag();
            func();
            break;
        case 3:
            compt();
            func();
            break;
        case 4:
            stru();
            func();
            break;
        }
    }
}
int contstring()
{
    int vog=0,con=0,out=-1,esp=0,num=0;
    char frase[200]= {};
    char alfa[5]= {"aeiou"};
    printf(" Digite uma frase qualquer: ");
    scanf(" %[^\n]",frase);
    strlwr(frase);
    for(int i = 0; i<=strlen(frase); i++)
    {
        if(isdigit(frase[i]))
        {
            num++;
        }
        else if(isspace(frase[i]))
        {
            esp++;
        }
        else if(isalpha(frase[i]))
        {
            for (int c=0; c<5; c++)
            {
                if (frase[i]==alfa[c])
                {
                    vog++;
                    con--;
                }
            }
            con++;
        }
        else
        {
            out++;
        }
    }
    printf("VOGAIS %i CONSOANTES %i OUTROS %i ESPACO %i NUMEROS %i",vog,con,out,esp,num);
}
int anag()
{
    int tam,aux;
    char palavra[100]= {};
    printf(" Digite uma palavra qualquer: ");
    scanf("%s", palavra);
    tam=strlen(palavra);
    for(int i=0; i<tam; i++)
    {
        for(int j=0; j<tam; j++)
        {
            printf("%c",palavra[i]);
            if (palavra[i]!=palavra[j])
            {
             printf("%c",palavra[j]);
            }
        }
    }
    getch();
}

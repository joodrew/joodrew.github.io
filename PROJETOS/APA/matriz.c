#define linha 3
#define coluna 3
int m,mtz[linha][coluna]= {},mtzcalc[linha][coluna]= {},mtzant[linha][coluna]= {},mtztrans[linha][coluna]= {},col,lin,val;
int matriz()
{
MENU:
    header();
    printf("                   MATRIZES          \n");
    printf(" _____________________________________________________\n");
    exi(mtz);
    printf(" _____________________________________________________\n");
    printf(" 1  -  INSERIR DADOS NA MATRIZ                             \n");
    printf(" 2  -  EXIBIR MATRIZ                        \n");
    printf(" 3  -  SOMAR VALORES                          \n");
    printf(" 4  -  MULTIPLICAR MATRIZ                     \n");
    printf(" 5  -  EXIBIR MATRIZ TRANSPOSTA                         \n");
    printf(" 6  -  EXIBIR DIAGONAL PRINCIPAL E SECUNDARIA                         \n");
    printf(" 7  -  EXIBIR DETERMINANTE                         \n");
    printf(" 0  -  INICIO                                          \n");
    printf(" _____________________________________________________\n");
    int menu;
    while(menu)
    {
        printf(" SELECIONE UMA TAREFA(digite o valor): ");
        scanf("%d",&menu);
        if ((menu > 7) || (menu <0))
        {
            apa3();
        }
        switch(menu)
        {
        case 0:
            apa3();
            break;
        case 1:
            inserir();
            matriz();
            break;
        case 2:
            exibir();
            matriz();
            break;
        case 3:
            somamatriz();
            matriz();
            break;
        case 4:
            mult();
            matriz();
            break;
        case 5:
            transposta();
            matriz();
            break;
        case 6:
            diagonal(mtz);
            matriz();
            break;
        case 7:
            determinante(mtz);
            matriz();
            break;
        }
    }
}
int inserir()
{
    header();
    printf("                  MATRIZ 3x3                  \n");
    printf(" _____________________________________________________\n");
    printf(" Ex:             Colunas   \n");
    printf("                 V  V  V\n");
    printf("      Linhas  > 00 01 02\n ");
    printf("             > 10 11 12\n ");
    printf("             > 20 21 22\n ");
    printf(" _____________________________________________________\n");
    printf(" Inserir valores por: \n");
    printf(" 1 - Linha ");
    printf(" 2 - Coluna : ");
    scanf("%i",&m);
    printf("\n");
    if (m!= 1 && m!=2)
    {
        inserir();
    }
    switch(m)
    {
    case 1:
        for(lin=0; lin<=2; lin++)
        {
            for(col=0; col<=2; col++)
            {
                printf(" Insira o valor da Linha %i Coluna %i: ",lin+1,col+1);
                scanf("%i",&val);
                mtz[lin][col]=val;
            }
            printf("\n");
        }
        printf("\n _____________________________________________________\n");
        break;
    case 2:
        for(col=0; col<=2; col++)
        {
            for(lin=0; lin<=2; lin++)
            {
                printf(" Insira o valor da Coluna %i Linha %i: ",col+1,lin+1);
                scanf("%i",&val);
                mtz[lin][col]=val;
            }
            printf("\n");
        }
        printf("\n _____________________________________________________\n");
        break;
    }
    footer();
}
int exibir()
{
    header();
    printf("                  EXIBIR                  \n");
    printf(" _____________________________________________________\n");
    exi(mtz);
    printf(" _____________________________________________________\n");
    footer();
}
int somamatriz()
{
    header();
    printf("                SOMAR \n");
    printf(" _____________________________________________________\n");
    printf(" Somar valores por: \n");
    printf(" 1 - Linha ");
    printf(" 2 - Coluna :");
    scanf("%i",&m);
    printf("\n");
    if (m!= 1 && m!=2)
    {
        somamatriz();
    }
    switch(m)
    {
    case 1:

        for(lin=0; lin<=2; lin++)
        {
            for(col=0; col<=2; col++)
            {
                printf(" A linha %i coluna %i + ",lin+1,col+1);
                scanf("%i",&val);
                mtzant[lin][col]=mtz[lin][col];
                mtzcalc[lin][col]=val;
                mtz[lin][col]+=mtzcalc[lin][col];
            }
            printf("\n");
        }
        break;
    case 2:
        for(col=0; col<=2; col++)
        {
            for(lin=0; lin<=2; lin++)
            {
                printf(" A coluna %i linha %i + ",col+1,lin+1);
                scanf("%i",&val);
                mtzant[lin][col]=mtz[lin][col];
                mtzcalc[lin][col]=val;
                mtz[lin][col]+=mtzcalc[lin][col];
            }
            printf("\n");
        }
        break;
    }
    printf("\n _____________________________________________________\n");
    header();
    printf("                EXIBIR SOMA                 \n");
    printf(" _____________________________________________________\n");
    exi(mtzant);
    printf("\n                    + \n");
    exi(mtzcalc);
    printf("\n                    = \n");
    exi(mtz);
    printf(" _____________________________________________________\n");
    footer();
}
int mult()
{
    header();
    printf("                      MULTIPLICAR      \n");
    printf(" _____________________________________________________\n");
    printf(" Somar valores por: \n");
    printf(" 1 - Coluna ");
    printf(" 2 - Linha :");
    scanf("%i",&m);
    printf("\n");
    if (m!= 1 && m!=2)
    {
        mult();
    }
    switch(m)
    {
    case 1:
        for(col=0; col<=2; col++)
        {
            for(lin=0; lin<=2; lin++)
            {
                printf(" A Coluna %i Linha %i * ",col+1,lin+1);
                scanf("%i",&val);
                mtzant[lin][col]=mtz[lin][col];
                mtzcalc[lin][col]=val;
                mtz[lin][col]=0;
            }
            printf("\n");
        }
        for(lin=0; lin<=2; lin++)
            for(col=0; col<=2; col++)
            {
                for(lin=0; lin<=2; lin++)
                {
                    for(int c=0; c<=2; c++)
                    {
                        mtz[lin][col]+=mtzant[lin][c]*mtzcalc[c][col];
                    }
                }
            }
        break;
    case 2:
        for(lin=0; lin<=2; lin++)
        {
            for(col=0; col<=2; col++)
            {
                printf(" A Linha %i Coluna %i *  ",lin+1,col+1);
                scanf("%i",&val);
                mtzant[lin][col]=mtz[lin][col];
                mtzcalc[lin][col]=val;
                mtz[lin][col]=0;
            }
            printf("\n");
        }
        for(col=0; col<=2; col++)
        {
            for(lin=0; lin<=2; lin++)
            {
                for(int c=0; c<=2; c++)
                {
                    mtz[lin][col]+=mtzant[lin][c]*mtzcalc[c][col];
                }
            }
        }
        break;
    }
    printf("\n _____________________________________________________\n");
    header();
    printf("                EXIBIR MULT                 \n");
    printf(" _____________________________________________________\n");
    exi(mtzant);
    printf("\n                    * \n");
    exi(mtzcalc);
    printf("\n                    = \n");
    exi(mtz);
    printf(" _____________________________________________________\n");
    footer();
}
int transposta()
{
    char sn;
    int m;
    //transpor para outra variavel
    for(lin=0; lin<=2; lin++)
    {
        for(col=0; col<=2; col++)
        {
            mtztrans[col][lin]=mtz[lin][col];
        }
    }
    header();
    printf("                EXIBIR TRANSPOSTA                 \n");
    printf(" _____________________________________________________\n");
    exi(mtztrans);
    printf(" _____________________________________________________\n");
    printf(" Deseja transpor a matriz? S/N ");
    sn=getch();
    if(sn=='S' || sn=='s')
    {
        for(col=0; col<=2; col++)
        {
            for(lin=0; lin<=2; lin++)
            {
                mtz[lin][col]=mtztrans[lin][col];
            }
        }
    }
    else
    {
        matriz();
    }
}
int diagonal ()
{
    for (lin=0; lin<=2; lin++)
    {
        printf("                ");
        for(col=0; col<=2; col++)
        {
            printf("   ");
            if (lin==col)
            {
                printf("%i",mtz[lin][col]);
            }
        }
        printf("\n");
    }
    getch();
}
int exi(int matriz[lin][col])
{
    for (lin=0; lin<=2; lin++)
    {
        printf("                ");
        for(col=0; col<=2; col++)
        {
            printf(" %i ",matriz[lin][col]);
        }
        printf("\n");
    }
}
int determinante(int matriz[lin][col])
{
 int   det=((
          matriz[0][0]*matriz[1][1]*matriz[2][2])
         +
         (matriz[0][1]*matriz[1][2]*matriz[2][0])
         +
         (matriz[0][2]*matriz[1][0]*matriz[2][1])
         )
         -
         (
        (matriz[2][0]*matriz[1][1]*matriz[0][2])
        +
        (matriz[2][1]*matriz[1][2]*matriz[0][0])
        +
        (matriz[2][2]*matriz[1][0]*matriz[0][1])
        );
    printf("Determinante da matriz = %i\n",det);
    getch();
}

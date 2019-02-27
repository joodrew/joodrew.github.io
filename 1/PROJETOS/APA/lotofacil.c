int loto[15]= {},list[25]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
int tecla,tam=15;
int lotofacil()
{

    //system("clear");
    system("cls");
    cima();
    loteria();
    ordenar();
    exibirl(loto,15);
    baixo();
    printf("\n");
    tecla=getch();                  //pega o valor da tecla pressionada
    if (tecla==27)                  //tecla esc em ASCII � 27
    {                               //
        main();
    }
    else                            //se tecla nao for esc
    {                               //
        lotofacil();                     //reiniciar programa
    }
}
int loteria()
{
    int i,j,temp,num,key=0;
    srand(time(NULL));
    for(i=0; i<15; i++)             //loop de numeros sorteados
    {
        num=rand()%25;
        temp=list[num];
        for(j=i; j>=-1; j--)        //verifica��o de numero repetido
        {
            if (temp==loto[j])      //se repetido
            {                       //
                key=1;              //numero chave se repetido
            }
        }
        if(key==0)                  //se chave = 0
        {                           //
            loto[i]=temp;           //array recebe numero gerado
        }
        if(key==1)                  //se chave = 1
        {                           //
            i--;                    //posi��o da array - 1 (para manter o loop)
            key--;                  //zera o numero chave da repeti��o
        }
    }
}
int ordenar()
{
    int i, j, min, troca;
    for (i = 0; i < tam; i++)       //1� loop posi��o da array para troca
    {
        min = i;                    //min recebe posi��o atual
        for (j = i; j < tam; j++)   //2� loop encontrar o menor valor
        {
            if(loto[j] < loto[min]) //se valor da array[contador] < array[minimo]
            {                       //
                min = j;            //minimo recebe posi��o do contador
            }
        }
        if (i != min)               //se posi��o para troca for diferente do minimo depois do 2� loop
        {                           //
            troca = loto[i];        //troca recebe o valor da array[posi��o atual]
            loto[i] = loto[min];    //array[posi��o atual] recebe o valor array[minimo]
            loto[min] = troca;      //array[minimo] recebe valor troca
        }
    }
}
int exibirl(int loto[],int tam)
{
    int i;
    for (i=0; i<tam; i++)           //contador para definir posi��o na array
    {                               //
        printf("%i ",loto[i]);      //imprimi na tela arra[posi��o atual]
    }
}
int cima(){
    printf(" _____________________________________________________\n");
    printf("     $   $   $   $   $   $   $   $   $   $   $   $     \n");
    printf("   $   $   $   $   $   $   $   $   $   $   $   $   $   \n");
    printf("     $   $   $   $   $   $   $   $   $   $   $   $     \n");
    printf("   $   $   $   $   $   $   $   $   $   $   $   $   $   \n");
    printf("     $   $   $   $   $   $   $   $   $   $   $   $     \n");
    printf("   $   $   $   $   $   $   $   $   $   $   $   $   $   \n\n");
    printf("                   Loteria do Vermei                   \n");
    printf("      ");
}
int baixo(){
    printf("\n\n");
    printf("   $   $   $   $   $   $   $   $   $   $   $   $   $   \n");
    printf("     $   $   $   $   $   $   $   $   $   $   $   $     \n");
    printf("   $   $   $   $   $   $   $   $   $   $   $   $   $   \n");
    printf("     $   $   $   $   $   $   $   $   $   $   $   $     \n");
    printf("   $   $   $   $   $   $   $   $   $   $   $   $   $   \n");
    printf("     $   $   $   $   $   $   $   $   $   $   $   $     \n");
    printf(" _____________________________________________________\n");
}

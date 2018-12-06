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
    if (tecla==27)                  //tecla esc em ASCII é 27
    {                               //
        apa3();
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
        for(j=i; j>=-1; j--)        //verificação de numero repetido
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
            i--;                    //posição da array - 1 (para manter o loop)
            key--;                  //zera o numero chave da repetição
        }
    }
}
int ordenar()
{
    int i, j, min, troca;
    for (i = 0; i < tam; i++)       //1º loop posição da array para troca
    {
        min = i;                    //min recebe posição atual
        for (j = i; j < tam; j++)   //2º loop encontrar o menor valor
        {
            if(loto[j] < loto[min]) //se valor da array[contador] < array[minimo]
            {                       //
                min = j;            //minimo recebe posição do contador
            }
        }
        if (i != min)               //se posição para troca for diferente do minimo depois do 2º loop
        {                           //
            troca = loto[i];        //troca recebe o valor da array[posição atual]
            loto[i] = loto[min];    //array[posição atual] recebe o valor array[minimo]
            loto[min] = troca;      //array[minimo] recebe valor troca
        }
    }
}
int exibirl(int loto[],int tam)
{
    int i;
    for (i=0; i<tam; i++)           //contador para definir posição na array
    {                               //
        printf("%i ",loto[i]);      //imprimi na tela arra[posição atual]
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

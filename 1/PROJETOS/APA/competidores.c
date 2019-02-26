/* Escreva um programa que leia no nome de 20 competdores e
os agrupe em vetores (ou matrizes) de acordo com sua faixa
etária. O agrupadmento deverá ser reaaizado com a utaização
da função “Categoria()” */
struct competidores
{
    char nome[30];
    int idade;
    char sexo[30];
} comp[100];
//var global
int qtdc,qi=0,qj=0,qa=0,qif=0,qjf=0,qaf=0,t=0;
int infantilm[100]= {},juvenilm[100]= {},adultom[100]= {},infantilf[100]= {},juvenilf[100]= {},adultof[100]= {};
int compt()
{
    system("cls");
    header();
    printf("                   COMPETIDORES                       \n");
    printf(" _____________________________________________________\n");
    printf(" 1  -  CADASTRAR ATLETAS                              \n");
    printf(" 2  -  EDITAR DADOS *                                  \n");
    printf(" 3  -  LISTAR GRUPOS                                  \n");
    printf(" 0  -  INICIO                                         \n");
    printf(" _____________________________________________________\n");
    int mc;
    printf(" Escolha: ");
    scanf("%i",&mc);
    if(mc<0||mc>3)
    {
        compt();
    }
    switch(mc)
    {
    case 1:
        header();
        lerc();
        compt();
        break;
    case 2:
        header();
        editc();
        compt();
        break;
    case 3:
        header();
        listarcomp();
        compt();
        break;
    }
}
int lerc()
{
    printf(" Escolha a quantidade de competidores: ");
    scanf("%i",&qtdc);
    for(int i=t+1; i<=t+qtdc; i++)
    {
    cadatleta(i);
    }

    t+=qtdc;
}
int cadatleta(int i){
        printf("\n\tNome: ");
        scanf(" %[^\n]",comp[i].nome);
SEXO:
        printf("\tSexo: \n\t\t Masculino (m/M) \n\t\t Feminino (f/F)\n");
        int s=getch();
        if(s==109||s==77)
        {
            strcpy(comp[i].sexo,"Masculino");
        }
        else if(s==70||s==102)
        {
            strcpy(comp[i].sexo,"Feminino");
        }
        else
        {
            printf("Sexo Invalido");
            goto SEXO;
        }
AGE:
        printf("\tIdade: ");
        scanf("%i",&comp[i].idade);

        if (comp[i].idade<=5)
        {
            printf("Idade Invalida!");
            goto AGE;
        }
    categoria(i);
}

int categoria(int i)
{
    if(strcmp(comp[i].sexo,"Masculino")==0)
    {
        if (comp[i].idade<=10)
        {
            qi+=1;
            infantilm[qi]=i;
        }
        else if (comp[i].idade>10&&comp[i].idade<=17)
        {
            qj+=1;
            juvenilm[qj]=i;
        }
        else
        {
            qa+=1;
            adultom[qa]=i;
        }
    }
    else
    {
        if (comp[i].idade<=10)
        {
            qif+=1;
            infantilf[qif]=i;
        }
        else if (comp[i].idade>10&&comp[i].idade<=17)
        {
            qjf+=1;
            juvenilf[qjf]=i;
        }
        else
        {
            qaf+=1;
            adultof[qaf]=i;
        }
    }
}
int listarcomp()
{
    int m,mm;
    printf("1 - MASCULINO \n");
    printf("2 - FEMININO \n");
    printf("Selecione o Sexo: ");
    scanf("%i",&mm);
    if (mm<1||mm>2)
    {
        listarcomp();
    }
    switch(mm)
    {
    case 1:
LISTANDO:
        printf("1 - INFANTIL \n");
        printf("2 - JUVENIL \n");
        printf("3 - ADULTO \n");
        printf("Selecione a Categoria: ");
        scanf("%i",&m);
        if (m<1||m>3)
        {
            goto LISTANDO;
        }
        switch(m)
        {
        case 1:
            for(int i=1; i<=qi; i++)
            {
                printf("\t%s\n",comp[infantilm[i]].nome);
            }
            getch();
            break;
        case 2:
            for(int i=1; i<=qj; i++)
            {
                printf("\t%s\n",comp[juvenilm[i]].nome);
            }
            getch();
            break;
        case 3:
            for(int i=1; i<=qa; i++)
            {
                printf("\t%s\n",comp[adultom[i]].nome);
            }
            getch();
            break;
        }
        break;
    case 2:
LISTANDOF:
        printf("1 - INFANTIL \n");
        printf("2 - JUVENIL \n");
        printf("3 - ADULTO \n");
        printf("Selecione a Categoria: ");
        scanf("%i",&m);
        if (m<1||m>3)
        {
            goto LISTANDOF;
        }
        switch(m)
        {
        case 1:
            for(int i=1; i<=qif; i++)
            {
                printf("\t%s\n",comp[infantilf[i]].nome);
            }
            getch();
            break;
        case 2:
            for(int i=1; i<=qjf; i++)
            {
                printf("\t%s\n",comp[juvenilf[i]].nome);
            }
            getch();
            break;
        case 3:
            for(int i=1; i<=qaf; i++)
            {
                printf("\t%s\n",comp[adultof[i]].nome);
            }
            getch();
            break;
        }
        break;
    }
}
int editc()
{
    int j;
    printf(" LISTA DE ATLETAS \n");
    for(int i=1; i<=t; i++)
    {
        printf("ID[%i]\t%s\n",i,comp[i].nome);
    }
    printf("Alterar dados do atleta ID: ");
    scanf("%i",&j);
    cadatleta(j);
}

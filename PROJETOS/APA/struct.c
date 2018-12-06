
int totalalunos,totalmaterias;
int stru(void)
{
    system("cls");
    header();
    printf("                   STRUCT          \n");
    printf(" _____________________________________________________\n");
    printf(" 1  -  CADASTRAR ALUNOS                            \n");
    printf(" 2  -  CADASTRAR MATERIAS                           \n");
    printf(" 3  -  EDITAR NOTAS                         \n");
    printf(" 4  -  RESUMO ALUNOS                                       \n");
    printf(" 5  -  LISTAR MATERIAS                                       \n");
    printf(" 6  -  LISTAR ALUNOS                                       \n");
    printf(" 0  -  INICIO                                          \n");
    printf(" _____________________________________________________\n");
    int menu;
    while(menu)
    {
        printf(" SELECIONE UMA TAREFA(digite o valor): ");
        scanf("%d",&menu);
        printf("\n");
        if ((menu > 6) || (menu <0))
        {
            stru();
        }
        switch(menu)
        {
        case 0:
            main();
            break;
        case 1:
            cadastroaluno();
            stru();
            break;
        case 2:
            cadastromateria();
            stru();
            break;
        case 3:
            nota();
            getch();
            stru();
            break;
        case 4:
            resumoaluno();
            stru();
            break;
        case 5:
            listarmateria();
            getch();
            stru();
            break;
        case 6:
            listaraluno();
            getch();
            stru();
            break;
        }
    }
}
struct Disciplina
{
    char nome[15];
    float nota1;
    float nota2;
    float media;
} materia[50];
struct ficha
{
    char nome[30];
    struct Disciplina materia[50];
} aluno[500];

int cadastroaluno()
{
    int qntd;
    printf("Escolha a quantidade de alunos para cadastrar: ");
    scanf("%i",&qntd);
    for(int id=totalalunos+1; id<=qntd+totalalunos; id++)
    {
        printf("ID [%i] Aluno: ",id);
        scanf("%s", aluno[id].nome);
    }
    totalalunos+=qntd;
}
int cadastromateria()
{
    int qntd;
    printf("Escolha a quantidade de Materias para cadastrar: ");
    scanf("%i",&qntd);
    for(int id=totalmaterias+1; id<=totalmaterias+qntd; id++)
    {
        printf("ID [%i] Materia: ",id);
        scanf("%s", materia[id].nome);
        for(int ida=1;ida<=totalalunos;ida++){
            strcpy(aluno[ida].materia[id].nome,materia[id].nome);
        }
    }
    totalmaterias+=qntd;
}
int nota()
{
    int al,ma;
    ALUNO:
    system("cls");
    header();
    listaraluno();
    printf("Selecione o aluno ID: ");
    scanf("%i",&al);
    if(al<1 || al>totalalunos)
    {
        printf("Aluno incorreto!");
        getch();
        goto ALUNO;
    }
    MATERIA:
    system("cls");
    header();
    listarmateria();
    printf("Selecione a materia ID: ");
    scanf("%i",&ma);
    if(ma<1 || ma>totalmaterias)
    {
        printf("Materia incorreta!");
        getch();
        goto MATERIA;
    }
    system("cls");
    header();
    NOTA1:
    printf("Qual a nota 1? ");
    scanf("%f",&aluno[al].materia[ma].nota1);
    if(aluno[al].materia[ma].nota1<0||aluno[al].materia[ma].nota1>10)
        {
        printf("Nota Invalida!\n");
        getch();
        goto NOTA1;
    }
    NOTA2:
    printf("Qual a nota 2? ");
    scanf("%f",&aluno[al].materia[ma].nota2);
        if(aluno[al].materia[ma].nota2<0||aluno[al].materia[ma].nota2>10)
        {
        printf("Nota Invalida!\n");
        getch();
        goto NOTA2;
    }
    aluno[al].materia[ma].media = (aluno[al].materia[ma].nota1+aluno[al].materia[ma].nota2)/2;
    printf("A media do %s em %s e: %2.1f",aluno[al].nome,materia[ma].nome,aluno[al].materia[ma].media);
}
int resumoaluno()
{
    for(int id=1; id<=totalalunos; id++)
    {
        printf("ID:[%i] ALUNO: %s\n",id,aluno[id].nome);
        for(int idm=1; idm<=totalmaterias; idm++)
        {
            printf("\tMATERIA: %s\n",aluno[id].materia[idm].nome);
            printf("\t\tNota 1: %2.1f \n\t\tNota 2: %2.1f \n\t\tMedia: %2.1f\n\n",aluno[id].materia[idm].nota1,aluno[id].materia[idm].nota2,aluno[id].materia[idm].media);
        }
    }
    getch();
}
int listarmateria()
{
    for(int id=1; id<=totalmaterias; id++)
    {
        printf("ID: [%i] MATERIA: %s\n",id,materia[id].nome);
    }
}
int listaraluno()
{
    for(int id=1; id<=totalalunos; id++)
    {
        printf("ID: [%i] ALUNO: %s\n",id,aluno[id].nome);
    }
}

  int apa2()
  {
  MENU:
      header();
      printf("                   APA - 2          \n");
      printf(" _____________________________________________________\n");
      printf(" 1  -  SOMA                                           \n");
      printf(" 2  -  IDADE                                          \n");
      printf(" 3  -  PRODUTO                                        \n");
      printf(" 4  -  LIMPAR TELA                                    \n");
      printf(" 5  -  EXPONENCIACAO                                  \n");
      printf(" 6  -  RAIZ QUADRADA E VALOR AO CUBO                  \n");
      printf(" 7  -  RAIZ QUADRADA E VALOR AO CUBO SE POSITIVO      \n");
      printf(" 8  -  PAR OU IMPAR                                   \n");
      printf(" 9  -  FIBONACCI                                      \n");
      printf(" 10 -  ANO BISSEXTO                                   \n");
      printf(" 11 -  QUANTOS NUMEROS PARES OU IMPARES               \n");
      printf(" 12 -  NUMERO PRIMO                                   \n");
      printf(" 13 -  FATORAL                                        \n");
      printf(" 14 -  ANO BISSEXTO ENTRE 2 LIMITES                                        \n");
      printf(" 0  -  SAIR                                           \n");
      printf(" _____________________________________________________\n");
      int menu;
      while(menu)
      {
          printf(" SELECIONE UMA TAREFA(digite o valor): ");
          scanf("%d",&menu);
          if ((menu > 14) || (menu <0))
              apa2();
          switch(menu)
          {
          case 0:
              main();
              break;
          case 1:
              soma();
              apa2();
              break;
          case 2:
              idade();
              apa2();
              break;
          case 3:
              prod();
              apa2();
              break;
          case 4:
              limpa();
              apa2();
              break;
          case 5:
              expon();
              apa2();
              break;
          case 6:
              raizecubo();
              apa2();
              break;
          case 7:
              separ();
              apa2();
              break;
          case 8:
              parimpar();
              apa2();
              break;
          case 9:
              fibonacci();
              apa2();
              break;
          case 10:
              bissexto();
              apa2();
              break;
          case 11:
              qntpar();
              apa2();
              break;
          case 12:
              nprimo();
              apa2();
              break;
          case 13:
              fatoral();
              apa2();
              break;
          case 14:
              bissextofor();
              apa2();
              break;
          }
      }
  }
  int soma()
  {
      float n1,n2,s;
      header();
      printf("                       SOMA                                  \n");
      printf(" _____________________________________________________\n");
      printf(" Digite os valores a serem somados: \n");
      scanf("%f", &n1);
      printf("+\n");
      scanf("%f", &n2);
      printf("\n");
      s=n1+n2;
      printf(" _____________________________________________________\n");
      printf(" A soma resulta em: %.0f\n",s);
      printf(" _____________________________________________________\n");
      footer ();
  }
  int idade()
  {
      float dias, anos,horas,minutos,segundos;
      header();
      printf("                       IDADE                                  \n");
      printf(" _____________________________________________________\n");
      printf(" Digite uma idade: ");
      scanf("%f",&anos);
      printf("\n");
      dias=floor(anos*365.25);
      horas=dias*24;
      minutos=horas*60;
      segundos=minutos*60;
      printf(" _____________________________________________________\n");
      printf(" %.0f Anos \n %.0f Dias \n %.0f Horas \n %.0f Minutos \n %.0f Segundos \n", anos,dias,horas,minutos,segundos);
      printf(" _____________________________________________________\n");
      footer();
  }
  int prod()
  {
      header();
      char nome[20];
      int cont;
      float valor;
      double t;
      printf("                       PRODUTO                                  \n");
      printf(" _____________________________________________________\n");
      printf(" Digite o nome do produto: ");
      scanf("%20s",&nome);
      printf("\n");
      printf(" Digite o valor: R$ ");
      scanf("%f",&valor);
      printf("\n");
      printf(" Digite a quantidade: ");
      scanf("%i",&cont);
      printf("\n");
      t=valor*cont;
      printf(" _____________________________________________________\n");
      printf(" O valor de %i %s e de R$ %9.2f \n", cont,nome,t);
      printf(" _____________________________________________________\n");
      footer();
  }
  int limpa()
  {
      header();
      char nome[20];
      int cont;
      float valor;
      double t;
      printf("                       PRODUTO                                  \n");
      printf(" _____________________________________________________\n");
      printf(" Digite o nome do produto: ");
      scanf("%20s",&nome);
      printf("\n");
      printf(" Digite o valor: R$ ");
      scanf("%f",&valor);
      printf("\n");
      printf(" Digite a quantidade: ");
      scanf("%i",&cont);
      printf("\n");
      t=valor*cont;
      system("cls");
      header();
      printf(" _____________________________________________________\n");
      printf(" O valor de %i %s e de R$ %9.2f \n", cont,nome,t);
      printf(" _____________________________________________________\n");
      footer();
  }
  int expon()
  {
      header();
      int base,expo,t;
      printf("                     EXPONECIACAO                          \n");
      printf(" _____________________________________________________\n");
      printf(" Digite a base e o expoente: \n ");
      scanf("%i", &base);
      printf(" ^ \n ");
      scanf("%i",&expo);
      printf("\n");
      t=pow(base,expo);
      printf(" _____________________________________________________\n");
      printf(" A exponenciacao de %i ^ %i = %i \n",base,expo,t);
      printf(" _____________________________________________________\n");
      footer();
  }
  int raizecubo()
  {
      header();
      float valor,raiz,cubo;
      printf("                  RAIZ E AO CUBO                                 \n");
      printf(" _____________________________________________________\n");
      printf(" Digite qualquer valor: ");
      scanf("%f",&valor);
      printf("\n");
      raiz=sqrt(valor);
      cubo=pow(valor,3);
      printf(" _____________________________________________________\n");
      printf(" Do valor %.0f \n A raiz quadrada = %.2f \n Ao cubo = %.0f  \n",valor,raiz,cubo);
      printf(" _____________________________________________________\n");
      footer();
  }
  int separ()
  {
      header();
      int valor,raiz,cubo;
      printf("           RAIZ E AO CUBO SE PAR                    \n");
      printf(" _____________________________________________________\n");
      printf(" Digite qualquer valor inteiro: ");
      scanf("%i",&valor);
      printf("\n");
      if (valor%2==0)
      {
          raiz=sqrt(valor);
          cubo=pow(valor,3);
          printf(" _____________________________________________________\n");
          printf(" Do valor %i \n A raiz quadrada = %i \n Ao cubo = %i  \n",valor,raiz,cubo);
          printf(" _____________________________________________________\n");
      }
      else
      {
          printf(" _____________________________________________________\n");
          printf(" O valor e impar\n");
          printf(" _____________________________________________________\n");
      }
      footer();
  }
  int parimpar()
  {
      header();
      int valor;
      printf("                    PAR OU IMPAR                      \n");
      printf(" _____________________________________________________\n");
      printf(" Digite qualquer valor inteiro: \n");
      scanf("%i",&valor);
      if (valor%2==0)
      {
          printf(" _____________________________________________________\n");
          printf(" O valor e par \n");
          printf(" _____________________________________________________\n");
      }
      else
      {
          printf(" _____________________________________________________\n");
          printf(" O valor e impar\n");
          printf(" _____________________________________________________\n");
      }
      footer();
  }
  int bissexto()
  {
      header();
      int ano;
      printf("                 ANO BISSEXTO                                 \n");
      printf(" _____________________________________________________\n");
      printf(" Digite o ano: ");
      scanf("%i",&ano);
      printf("\n");
      if (ano%4==0 && ano%100!=0)
      {
          printf(" _____________________________________________________\n");
          printf(" O ano de %i e bissexto!\n",ano);
          printf(" _____________________________________________________\n");
      }
      else if (ano%400==0)
      {
          printf(" _____________________________________________________\n");
          printf(" O ano de %i e bissexto!\n",ano);
          printf(" _____________________________________________________\n");
      }
      else
      {
          printf(" _____________________________________________________\n");
          printf(" O ano de %i nao e bissexto!\n",ano);
          printf(" _____________________________________________________\n");
      }
      footer();
  }
  int fibonacci()
  {
      header();
      int b1,b2,b3,pos,c;
      printf("                    FIBONACCI                               \n");
      printf(" _____________________________________________________\n");
      printf(" Exibir a sequencia de fibonacci ate a posicao: ");
      scanf("%i",&pos);
      printf("\n");
      if (pos<1)
      {
          printf(" _____________________________________________________\n");
          printf(" Posicao invalida! \n");
          printf(" _____________________________________________________\n");
      }
      else
      {
          b1=1;
          b2=1;
          pos=pos-2;
          printf(" %i %i ",b1,b2);
          for(c=1; c<=pos; c++)
          {
              b3=b1+b2;
              b1=b2;
              b2=b3;
              printf("%i ", b2);
          }
          footer();
      }
  }
  int qntpar()
  {
      header();
      int li,lf,c,m,qtd=0;
      printf("            NUMEROS PARES OU IMPARES                               \n");
      printf(" _____________________________________________________\n");
      printf(" Digite o limite inicial: ");
      scanf("%i",&li);
      printf("\n");
      printf(" Digite o limite final: ");
      scanf("%i",&lf);
      printf("\n");
      printf(" _____________________________________________________\n");
      printf(" 1 - IMPARES: ");
      printf(" 2 - PARES: ");
      scanf("%i",&m);
      while (m)
      {
          if(m!=1 && m!=2)
          {
              qntpar();
          }
          switch(m)
          {
          case 1:
              printf(" _____________________________________________________\n");
              for(c=li; c<=lf; c++)
              {
                  if (c%2!=0)
                  {
                      qtd++;
                      printf(" %i ",c);
                  }
              }
              printf("\n");
              printf(" _____________________________________________________\n");
              printf(" Existem %i numeros Impares entre %i e %i\n", qtd,li,lf);
              printf(" _____________________________________________________\n");
              footer();
              apa2();
              break;
          case 2:
              printf(" _____________________________________________________\n");
              for(c=li; c<=lf; c++)
              {
                  if (c%2==0)
                  {
                      qtd++;
                      printf(" %i ",c);
                  }
              }
              printf("\n");
              printf(" _____________________________________________________\n");
              printf(" Existem %i numeros Pares entre %i e %i\n", qtd,li,lf);
              printf(" _____________________________________________________\n");
              footer();
              apa2();
              break;
          }
      }
  }
  int nprimo()
  {
      header();
      int n,c,v;
      printf("           NUMERO PRIMO                               \n");
      printf(" _____________________________________________________\n");
      printf(" Digite um valor: ");
      scanf("%i",&n);
      printf("\n");
      printf(" _____________________________________________________\n");
      if (n<=0)
      {
          nprimo();
      }
      else
      {
          v=0;
          for(c=1; c<=n; c++)
          {
              if (n%c==0)
              {
                  v++;
              }
          }
          if (v==2)
          {
              printf(" O numero %i e primo!\n",n);
              printf(" _____________________________________________________\n");
          }
          else
          {
              printf(" O numero %i nao e primo!\n",n);
              printf(" _____________________________________________________\n");
          }
          footer();
      }
  }
  int fatoral()
  {
      header();
      header();
      int n,c,f;
      printf("                 FATORAL                                \n");
      printf(" _____________________________________________________\n");
      printf(" Digite qualquer valor: ");
      scanf("%i",&n);
      printf("\n");
      f=1;
      if (n<=0)
      {
          fatoral();
      }
      else
      {
          printf(" _____________________________________________________\n");
          printf(" %i! = ",n);
          for(c=n; c>1; c--)
          {
              f*=c;
              printf(" %i .", c);
          }
          printf(" 1\n");
          printf(" %i! = %i \n",n,f);
          printf(" _____________________________________________________\n");
      }
      footer();
  }
  int bissextofor()
  {
      header();
      int ano,anof,anoi;
      printf("            ANO BISSEXTO ENTRE                                 \n");
      printf(" _____________________________________________________\n");
      printf(" Digite o ano inicial: ");
      scanf("%i",&anoi);
      printf("\n");
      printf(" Digite o ano final: ");
      scanf("%i",&anof);
      printf("\n");
      for(ano=anoi; ano<=anof; ano++)
      {
          if (ano%4==0 && ano%100!=0)
          {
              printf(" %i",ano);
          }
          else if (ano%400==0)
          {
              printf(" %i ",ano);
          }
          else {}
      }
      printf("\n");
      printf(" _____________________________________________________");
      footer();
  }

  int apa3()
  {
  MENU:
      header();
      printf("                   APA - 3          \n");
      printf(" _____________________________________________________\n");
      printf(" 1  -  GERADOR DE NUMEROS                             \n");
      printf(" 2  -  ANTERIOR E POSTERIOR                           \n");
      printf(" 3  -  VIAGEM - TEMPO E CUSTO                         \n");
      printf(" 0  -  INICIO                                          \n");
      printf(" _____________________________________________________\n");
      int menu;
      while(menu)
      {
          printf(" SELECIONE UMA TAREFA(digite o valor): ");
          scanf("%d",&menu);
          if ((menu > 3) || (menu <0))
          {
              apa3();
          }
          switch(menu)
          {
          case 0:
              main();
              break;
          case 1:
              geran();
              apa3();
              break;
          case 2:
              antpos();
              apa3();
              break;
          case 3:
              viagem();
              apa3();
              break;
          }
      }
  }

  int geran()
  {
      header();
      int min,max,validador;
      printf("                  GERADOR DE NUMEROS                  \n");
      printf(" _____________________________________________________\n");
      printf(" Digite o valor minimo: ");
      scanf("%i",&min);
      printf("\n");
      printf(" Digite o maximo: ");
      scanf("%i",&max);
      printf("\n");
      if(min>max)
      {
          geran();
      }
      printf(" Selecione entre \n 1 - Impares 2 - Pares: ");
      scanf("%i", &validador);
      printf(" _____________________________________________________\n");
      if (validador != 1 && validador != 2)
      {
          geran();
      }
      switch(validador)
      {
      case 1:
          for(min=min; min<=max; min++)
          {
              if (min%2!=0)
              {
                  printf(" %i",min);
              }
          }
          break;
      case 2:
          for(min=min; min<=max; min++)
          {
              if (min%2==0)
              {
                  printf(" %i",min);
              }
          }

          break;
      }
      printf("\n _____________________________________________________");
      footer();
  }
  int antpos()
  {
      header();
      int base,ant,prox,qnt,c;

      printf("                 ANTERIOR E POSTERIOR                  \n");
      printf(" _____________________________________________________\n");
      printf(" Digite o valor base: ");
      scanf("%i",&base);
      printf(" Digite a quantidade de numeros desejada: ");
      scanf("%i",&qnt);
      base-=qnt;
      qnt*=2;
      for(c=0; c<=qnt; c++)
      {
          prox=base+c;
          printf("%i ",prox);
      }
      printf("\n");
      printf(" _____________________________________________________");
      footer();
  }
  int viagem()
  {
      header();
      int horas,km,vel,m;
      float custo,gas,consumo,al;
      printf("               VIAGEM - TEMPO E CUSTO               \n");
      printf(" _____________________________________________________\n");
      printf(" Digite o tempo gasto em Horas: ");
      scanf("%i",&horas);
      printf("\n");
      printf(" Digite o a distancia em Km: ");
      scanf("%i",&km);
      printf("\n");
      printf(" Digite consumo em Km\\L: ");
      scanf("%f",&consumo);
      vel=km/horas;
      printf(" _____________________________________________________\n");
      printf(" 1 - Alcool\n");
      printf(" 2 - Gasolina\n");
      scanf("%i",&m);
      printf(" _____________________________________________________\n");
      printf("\n");
      if (m!=1 && m!=2)
      {
          viagem();
      }
      else
      {
          switch(m)
          {
          case 1:
              printf(" Digite o valor do litro do combustivel: R$ ");
              scanf("%f",&al);
              printf("\n");
              printf(" _____________________________________________________\n");
              custo=al*(km/consumo);
              printf(" Voce viajou %i Km numa velocidade media de %i Km/h \n E gastou R$ %.2f em Alcool",km,vel,custo);
              printf("\n");
              printf(" _____________________________________________________");
              footer();
              break;
          case 2:
              printf(" Digite o valor do litro do combustivel: R$ ");
              scanf("%f",&gas);
              printf("\n");
              printf(" _____________________________________________________\n");
              custo=gas*(km/consumo);
              printf(" Voce viajou %i Km numa velocidade media de %i Km/h \n E gastou R$ %.2f em Gasolina",km,vel,custo);
              printf("\n");
              printf(" _____________________________________________________");
              footer();
              break;
          }
      }
  }

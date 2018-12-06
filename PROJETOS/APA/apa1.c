  int apa1(){
      MENU:
      header();
      printf("                   APA - 1          \n");
      printf(" _____________________________________________________\n");
      printf(" 1  -  CUSTO AO CONSUMIDOR                            \n");
      printf(" 2  -  CELSIUS PARA FAHRENHEIT                        \n");
      printf(" 3  -  POLEGADA PARA MILIMETRO                        \n");
      printf(" 4  -  METROS PARA PES && POLEGADAS                   \n");
      printf(" 5  -  METROS PARA JARDAS                             \n");
      printf(" 6  -  VALOR FINAL DA COMPRA COM CARDAPIO             \n");
      printf(" 7  -  HIPOTENUSA                                     \n");
      printf(" 8  -  VELOCIDADE MEDIA                               \n");
      printf(" 9  -  MEDIA ANUAL                                    \n");
      printf(" 10 -  TERMINO DE AULA                                \n");
      printf(" 11 -  ORDEM CRESCENTE 3 NUMEROS                      \n");
      printf(" 12 -  EQUIVALENTE DECIMAL                            \n");
      printf(" 13 -  SEGUNDOS PARA HORAS                            \n");
      printf(" 0  -  INICIO                                         \n");
      printf(" _____________________________________________________\n");
  int menu;
  while(menu){
      printf(" SELECIONE UMA TAREFA(digite o valor): ");
      scanf("%d",&menu);
      if ((menu > 13) || (menu <0)) {apa1();};
      switch(menu){
       case 0:
           main();
              break;
       case 1:
         custoconsumidor();
       apa1();
              break;
       case 2:
           celciusfar();
       apa1();
              break;
       case 3:
          polmm();
       apa1();
              break;
       case 4:
          mpespol();
       apa1();
              break;
       case 5:
          metrojardas();
       apa1();
              break;
       case 6:
          cardapio();
       apa1();
              break;
       case 7:
          hipotenusa();
       case 8:
          velmedia();
       apa1();
              break;
       case 9:
          medanual ();
       apa1();
              break;
       case 10:
          terminoaula ();
       apa1();
              break;
       case 11:
          ordem3 ();
       apa1();
              break;
       case 12:
          bin5dec();
       case 13:
          segundohoras();
       apa1();
              break;
       }
  }
  }
  int custoconsumidor(){
      float fabrica, distribuidor, impostos, consumidor;
      system("cls");
      //system("clear");
      header();
      printf("              CUSTO AO CONSUMIDOR                     \n");
      printf(" _____________________________________________________\n");
      printf(" Digite o valor de custo de fabrica: R$ ");
      fabrica = 0;
      scanf("%e",&fabrica);
      distribuidor = fabrica * 0.12;
      impostos = fabrica * 0.45;
      consumidor = fabrica + distribuidor + impostos;
      printf(" _____________________________________________________\n");
      printf("O custo ao consumidor e de: R$ %9.2f  \n", consumidor);
      printf(" _____________________________________________________\n");
  footer();
  }
  int celciusfar(){
      float cel, far;
      system("cls");
      //system("clear");
      header();
      printf(" Digite a temperatura em Celcius: ");
      scanf("%e",&cel);
      far = cel*(9/5)+32;
      printf(" _____________________________________________________\n");
      printf("A temperatura em Farenheit e de:%9.2f o \n", far);
      printf(" _____________________________________________________\n");
      footer();
  }
  int polmm(){
      float pol, mm;
      system("cls");
      //system("clear");
      header();
      printf("              POLEGADA EM MILIMETROS                  \n");
      printf(" _____________________________________________________\n");
      printf(" Digite a chuva em Polegadas: ");
      scanf("%e",&pol);
      mm = pol * 25.4;
      printf(" _____________________________________________________\n");
      printf("A quantidade de chuva em MM e de:%9.2f mm  \n", mm);
      printf(" _____________________________________________________\n");
  footer();
  }
  int mpespol(){
  float pol, m, pes;
      system("cls");
      //system("clear");
      header();
      printf("              METROS PES E POLEGADA                   \n");
      printf(" _____________________________________________________\n");
      printf(" Digite o salto em Metros: ");
      scanf("%e",&m);
      pol = m * 39.37;
      pes = pol / 12;
      printf(" _____________________________________________________\n");
      printf("A O salto em Polegadas e de:%9.2f pol  \n", pol);
      printf("A O salto em Pes e de:      %9.2f pes  \n", pes);
      printf(" _____________________________________________________\n");
  footer();
  }
  int metrojardas(){
      float m, jardas,vmedia;
      system("cls");
      //system("clear");
      header();
      printf("              METROS JARDAS                           \n");
      printf(" _____________________________________________________\n");
      printf(" Digite os Segundos para uma corrida em 100M: ");
      scanf("%e",&m);
      vmedia = 100/m;
      jardas = (0.9144 * 100) / vmedia  ;
      printf(" _____________________________________________________\n");
      printf(" O tempo em 100 Jardas e de: %5.2f Segundos a %3.1f m/s    \n", jardas,vmedia);
      printf(" _____________________________________________________\n");
  footer();
  }
  int cardapio(){
  float ham, cheese, bat, refri, milk, soma;
      system("cls");
      //system("clear");
      header();
      printf("              CARDAPIO                           \n");
      printf(" _____________________________________________________\n");
      printf(" Seja bem vindo ao X-Burguer \n");
      printf(" Digite a quantidade de cada item desejado \n");
      printf("\n Quantos Hamburguer? ");
      scanf("%e",&ham);
      printf("\n");
      printf(" Quantos Cheeseburguer? ");
      scanf("%e",&cheese);
      printf("\n");
      printf(" Quantas Batatas Fritas? ");
      scanf("%e",&bat);
      printf("\n");
      printf(" Quantos Refrigerantes? ");
      scanf("%e",&refri);
      printf("\n");
      printf(" Quantos MilkShakes? ");
      scanf("%e",&milk);
      printf("\n");
      soma = ((ham*9.50)+(cheese*10.30)+(bat*8.50)+(refri*3.5)+(milk*7))*1.1;
      printf(" _____________________________________________________\n");
      printf(" O valor da sua compra e de: R$ %5.2f  \n", soma);
      printf(" _____________________________________________________\n");
  footer();
  }
  int hipotenusa(){
      float hipo, cat1,cat2;
      system("cls");
      //system("clear");
      header();
      printf("              HIPOTENUSA                              \n");
      printf(" _____________________________________________________\n");
      printf(" Digite os valores dos Catetos: \n ");
      scanf("%e%e",&cat1,&cat2);
      hipo = sqrt(pow(cat1,2)+pow(cat2,2));
      printf(" _____________________________________________________\n");
      printf("O valor da Hipotenusa e de:%9.2f \n", hipo);
      printf(" _____________________________________________________\n");
  footer();
      apa1();
  }
  int velmedia(){
  float km, tempo,vmedia;
      system("cls");
      //system("clear");
      header();
      printf("              VELOCIDADE MEDIA                          \n");
      printf(" _____________________________________________________\n");
      printf(" Digite as horas percorridas: ");
      scanf("%e",&tempo);
      printf(" Digite a distancia percorrida em KM: ");
      scanf("%e",&km);
      vmedia = km/tempo;
      printf(" _____________________________________________________\n");
      printf(" Velocidade media e de: %5.2f KM/h   \n", vmedia);
      printf(" _____________________________________________________\n");
  footer();
      apa1();
  }
  int medanual (){
  float n1, n2, n3,n4, media;
      system("cls");
      //system("clear");
      header();
      printf("              MEDIA ANUAL                          \n");
      printf(" _____________________________________________________\n");
      printf(" Digite as 4 notas bimestrais: \n");
      scanf("%e%e%e%e",&n1,&n2,&n3,&n4);
      media = (n1+n2+n3+n4)/4;
      printf(" _____________________________________________________\n");
      printf(" A sua media anual e de: %2.1f  \n", media);
      printf(" _____________________________________________________\n");
  footer();
  }
  int terminoaula (){
  float hora, min;
      system("cls");
      //system("clear");
      header();
      printf("              TERMINO AULA                            \n");
      printf(" _____________________________________________________\n");
      printf(" Digite a hora e o minuto da aula: \n");
      scanf("%e%e",&hora,&min);
      if (hora <= 24) {
      if (hora < 24){
          if (min < 10){
              min += 50;
          }else{
              hora +=1;
              min += 50-60;
          }}
      else
          if (hora = 24){
              if (min < 10){
                  hora = 00;
                  min += 50;
              }else{
                  hora = 00;
                  hora +=1;
                  min += 50-60;
              }
                       }
      printf(" _____________________________________________________\n");
      printf(" O final da aula sera as %2.0f : %2.0f  \n", hora,min);
      printf(" _____________________________________________________\n");
  footer();
      }
       else {
      printf(" _____________________________________________________\n");
      printf(" Hora Invalida!\n");
      printf(" _____________________________________________________\n");
      getch();
      terminoaula();
      }

  }
  int ordem3 (){
  float n1, n2,n3;
      system("cls");
      //system("clear");
      header();
      printf("              ORDENAR 3 NUMEROS                       \n");
      printf(" _____________________________________________________\n");
      printf(" Digite o primeiro numero: \n");
      scanf("%e",&n1);
      printf(" Digite o segundo numero: \n");
      scanf("%e",&n2);
      printf(" Digite o terceiro numero: \n");
      scanf("%e",&n3);
      printf(" _____________________________________________________\n");
      if (n1 < n2 && n1 <n3){
          if (n2<n3){
      printf("A ordem crescente e { %4.0f , %4.0f , %4.0f } !\n ", n1,n2,n3);
          }
          else {
              printf("A ordem crescente e { %4.0f , %4.0f , %4.0f } !\n ", n1,n3,n2);
          }
      }
      else if (n2 < n1 && n2 <n3){
          if (n1<n3){
      printf("A ordem crescente e { %4.0f , %4.0f , %4.0f } !\n ", n2,n1,n3);
          }
          else {
              printf("A ordem crescente e { %4.0f , %4.0f , %4.0f } !\n ", n2,n3,n1);
          }
      }
      else {
          if (n2<n1){
      printf("A ordem crescente e { %4.0f , %4.0f , %4.0f } !\n ", n3,n2,n1);
          }
          else {
              printf("A ordem crescente e { %4.0f , %4.0f , %4.0f } !\n ", n3,n1,n2);
          }
      }
      printf(" _____________________________________________________\n");
  footer();
      }
  int bin5dec(){
  int cbin,pot,dig,dec;
  char bin[50];
      system("cls");
      //system("clear");
      header();
      printf("        BINARIO PARA DECIMAL                \n");
      printf(" _____________________________________________________\n");
      printf(" Digite o valor Binario: \n");
      scanf("%s",&bin);
      printf(" _____________________________________________________\n");
      pot=0;
      dec=0;
      for(cbin=strlen(bin)-1; cbin>=0;cbin--){
      dig = bin[cbin];
      if(dig == '1'){
      dec += pow(2,pot);
      pot++;
      }
      else
      if(dig == '0'){
      pot++;
      }else{
      printf(" Digitos invalidos use apenas 0s e 1s");
      getch();
      bin5dec();
      }
      }
      printf(" O valor em Decimal e de: %i \n", dec);
      printf(" _____________________________________________________\n");
  footer();
      apa1();
      }
  int segundohoras() {
      float segundos, horas, minutos, hs;
      system("cls");
      //system("clear");
      header();
      printf("              SEGUNDO PARA HORAS                      \n");
      printf(" _____________________________________________________\n");
      printf(" Digite a quantidade de Segundos:  ");
      scanf("%f",&segundos);
      printf("\n");
      hs = (segundos/60)/60;
      if (hs >= 1){
      printf(" _____________________________________________________\n");
      printf("O valor em horas e de: %5.1fhs \n", hs);
      printf(" _____________________________________________________\n");
      }else{
      printf(" _____________________________________________________\n");
      printf("O valor em horas e de: %1.3fhs \n", hs);
      printf(" _____________________________________________________\n");
      }
  footer();

      apa1();
  }

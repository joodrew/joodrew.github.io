function select(num) {
    //Esconde todas Div's
    $('#idade').addClass('d-none').removeClass('d-flex');
    $('#imc').addClass('d-none').removeClass('d-flex');
    $('#calc').addClass('d-none').removeClass('d-flex');
    $('#cores').addClass('d-none').removeClass('d-flex');
    $('#calculadora').addClass('d-none').removeClass('d-flex');
    //Mostra Div Selecionada
    if (num == 1) {$('#idade').removeClass('d-none').addClass('d-flex');}
    if (num == 2) {$('#imc').removeClass('d-none').addClass('d-flex');}
    if (num == 3) {$('#calc').removeClass('d-none').addClass('d-flex');}
    if (num == 4) {$('#cores').removeClass('d-none').addClass('d-flex');}
    if (num == 5) {$('#calculadora').removeClass('d-none').addClass('d-flex');}
  }
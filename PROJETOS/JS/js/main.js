function fidade() {
  var nome, idade, idacateg;
  nome = document.getElementById('idanome').value;
  idade = document.getElementById('idaidade').value;
  if (nome == "" || idade == "") { idacateg = "" }
  else if (idade < 0 || idade > 120) {
    document.getElementById('idaresult').value = "Idade Invalida!";
  }
  else {
    if (idade <= 11) { idacateg = "Criança" }
    else if (idade <= 17) { idacateg = "Adolescente" }
    else { idacateg = "Adulto" }
    document.getElementById('idaresult').value = idanome.value + " é " + idacateg;
  }
}
function fimc() {
  var peso, altura, imcresult, imc;
  peso = document.getElementById('imcpeso').value;
  altura = document.getElementById('imcaltura').value;
  if (peso == "" || altura == "") { imcresult = "" }
  else {
    altura=altura/100;
    imcresult =peso/(altura*altura);
    if (imcresult <= 16) {
      imc = "Magreza Grave";
    }
    else if (imcresult <= 17) {
      imc = "Magreza Moderada";
    }
    else if (imcresult <= 18.5) {
      imc = "Magreza Leve";
    }
    else if (imcresult <= 25) {
      imc = "Saudável";
    }
    else if (imcresult <= 30) {
      imc = "Sobrepeso";
    }
    else if (imcresult <= 35) {
      imc = "Obesidade I";
    }
    else if (imcresult <= 40) {
      imc = "Obesidade II";
    }
    else if (imcresult >= 40) {
      imc = "Obesidade III Mórbida";
    }
    document.getElementById('imcresult').value= "IMC "+imcresult.toFixed(2)+" - "+ imc;
  }
}
function calc(num){
var n1,n2,cresult;
n1 = parseFloat(document.getElementById('cnum1').value);
n2 = parseFloat(document.getElementById('cnum2').value);
if (num==1){ cresult=n1+n2;}
if (num==2){ cresult=n1-n2;}
if (num==3){ cresult=n1*n2;}
if (num==4){ cresult=n1/n2;}
if (num==5){ cresult=n1%n2;}
document.getElementById('cresult').value=cresult;
}
function cor(co){
document.getElementById('header').style.background = co;
}

function select(num) {
  //Esconde todas Div's
  $('#idade').addClass('d-none').removeClass('d-flex');
  $('#imc').addClass('d-none').removeClass('d-flex');
  $('#calc').addClass('d-none').removeClass('d-flex');
  $('#cores').addClass('d-none').removeClass('d-flex');

  //Mostra Div Selecionada
  if (num == 1) {$('#idade').removeClass('d-none').addClass('d-flex');}
  if (num == 2) {$('#imc').removeClass('d-none').addClass('d-flex');}
  if (num == 3) {$('#calc').removeClass('d-none').addClass('d-flex');}
  if (num == 4) {$('#cores').removeClass('d-none').addClass('d-flex');}

}
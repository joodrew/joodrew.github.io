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
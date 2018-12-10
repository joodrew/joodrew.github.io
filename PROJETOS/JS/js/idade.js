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
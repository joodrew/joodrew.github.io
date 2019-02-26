function calcular(tipo,valor){
    if (tipo === 'acao')
    {
      if (valor ==='c'){
        document.getElementById('resultadoc').value = ''
      }
      if (valor ==='+' ||valor ==='-' ||valor ==='*' ||valor ==='/' ||valor ==='.'){
        document.getElementById('resultadoc').value += valor
      }
      if (valor ==='='){
      var valor_campo = eval(document.getElementById('resultadoc').value)
      document.getElementById('resultadoc').value = valor_campo
      }
    }
    else if (tipo ==='valor'){
      document.getElementById('resultadoc').value+= valor
    }
  }
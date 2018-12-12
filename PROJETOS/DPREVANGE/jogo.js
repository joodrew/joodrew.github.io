var altura = 0
var largura = 0
var up = 1
var speed = 1500
var score = 0
var toprecord = 0
var points = 0
var nivel = ''

//localstorage record
function frecord(nivel) {
    var record = localStorage.getItem(nivel)
    if (record === null) { record = 0 }
    document.getElementById('record').innerHTML = '<p>' + record + '</p>'
    toprecord = record
    console.log(nivel)
    console.log(points)
}
//defiine tamanho da tela
function boardSize() {
    altura = window.innerHeight
    largura = window.innerWidth

    console.log('Tela', largura, altura)

}

boardSize()


function play(){
    //gera posição aleatoria
    iniciarJogo()
   playrandom = setInterval(function () {
        randPos()
    }, speed)
}

function iniciarJogo() {
    nivel = document.getElementById('nivel').value
    if (nivel === '') {
        alert('Selecione um nível para iniciar o jogo')
        return false
    }   
    setNivel(nivel)
    frecord(nivel)
}
//nivel
function setNivel(nivel){ 
    if (nivel === 'geek') {
        speed = 1500
        points = 75
    } else
        if (nivel === 'nerd') {
            speed = 1000
            points = 110
        } else
            if (nivel === 'chucknorris') {
                speed = 750
                points = 150
            }
    }
function select(menu) {
    //Esconde todas Div's
    $('#inicio').addClass('d-none').removeClass('d-block');
    $('#jogo').addClass('d-none').removeClass('d-block');
    $('#gameover').addClass('d-none').removeClass('d-block');
    //Mostra Div Selecionada
    if (menu === 'jogar'){
        $('#jogo').addClass('d-block').removeClass('d-none');
        play()
    }
    if (menu === 'gameover'){
        $('#gameover').addClass('d-block').removeClass('d-none');
        
        document.getElementById('mosquito').remove()
    }
}
function randPos() {

    //remover anterior
    if (document.getElementById('mosquito')) {
        document.getElementById('mosquito').remove()
        //verifica se deixou passar
        if (up > 3) {
            //compara record

            if (toprecord < score) {
                localStorage.setItem(nivel, score)
            }
            //redireciona fim de jogo
            clearInterval(playrandom)
            select('gameover')
        }
        else {
            document.getElementById('up' + up).src = "imagens/coracao_vazio.png"
            up++
        }
    }
    //gera posição
    var X = Math.floor(Math.random() * largura) - 90
    var Y = Math.floor(Math.random() * altura) - 180
    X = X < 0 ? 0 : X
    Y = Y < 0 ? 0 : Y
    console.log('Posição', X, Y)

    //criar o elemento html
    var mosquito = document.createElement('img')
    mosquito.src = randNpc()
    mosquito.className = randSize() + ' ' + randSide()
    mosquito.style.left = X + 'px'
    mosquito.style.top = Y + 90 + 'px'
    mosquito.style.position = 'absolute'
    mosquito.id = 'mosquito'
    mosquito.onclick = function () {
        this.remove()
        //pontuação
        score += points
        if (document.getElementById('score')) {
            document.getElementById('score').innerHTML = '<p>' + score + '</p>'
        }
    }

    document.body.appendChild(mosquito)
}
function randSize() {
    var classe = Math.floor(Math.random() * 3)
    switch (classe) {
        case 0:
            return 'mosquito1'
        case 1:
            return 'mosquito2'
        case 2:
            return 'mosquito3'
    }
}
function randNpc() {
    var classe = Math.floor(Math.random() * 4)
    switch (classe) {
        case 0:
            return 'imagens/mosca1.png'
        case 1:
            return 'imagens/mosca2.png'
        case 2:
            return 'imagens/mosca3.png'
        case 3:
            return 'imagens/mosca4.png'
    }
}
function randSide() {
    var classe = Math.floor(Math.random() * 2)
    switch (classe) {
        case 0:
            return 'side-l'
        case 1:
            return 'side-r'
    }
}
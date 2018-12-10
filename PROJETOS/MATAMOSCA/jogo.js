
var altura = 0
var largura = 0
var up = 1
var time = 15
var speed = 1500

var nivel = window.location.search
nivel = nivel.replace('?','')
if (nivel==='geek'){
    speed = 1500
    time = 15
}else
if (nivel==='nerd'){
    speed = 1000
    time = 22
}else
if (nivel==='chucknorris'){
    speed = 750
    time = 30
}
//defiine tamanho da tela
function boardSize() {
    altura = window.innerHeight
    largura = window.innerWidth

    console.log('Tela', largura, altura)
}

boardSize()

function randPos() {

    //remover anterior
    if (document.getElementById('mosquito')) {
        document.getElementById('mosquito').remove()
        //verifica se deixou passar
        if (up > 3) {
            window.location.href = 'gameover.html'
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
    var classe = Math.floor(Math.random() * 3)
    switch (classe) {
        case 0:
            return 'imagens/mosca1.png'
        case 1:
            return 'imagens/mosca2.png'
        case 2:
            return 'imagens/mosca3.png'
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
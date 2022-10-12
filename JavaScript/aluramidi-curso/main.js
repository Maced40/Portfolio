function tocaSom (seletorAudio) {
    const elemento = document .querySelector(seletorAudio);

    if (elemento === null) { // ou if (elemento && elemento.localName === 'audio')

        alert('Elemento não encontrado ou seletor inválido')

    } else if (elemento.localName === 'audio') { // && = e 

        elemento.play()

    }
}

// referência constante, ou seja, nunca vai mudar
const listaDeTeclas = document.querySelectorAll('.tecla'); 

// usamos let para definir algo que sempre vai ter um valor novo
for (let contador = 0; contador < listaDeTeclas.length; contador++) {

    const tecla = listaDeTeclas[contador];
    const instrumento = tecla.classList[1];
    // template string
    const idAudio = `#som_${instrumento}`; //usado para acessar variáveis, ...

    tecla.onclick = function () { //função anônima
        tocaSom(idAudio);
    }

    tecla.onkeydown = function (evento) {

        if (evento.code === 'Space' || evento.code === 'Enter') { // == para igualar, não atribuir
            // o === também compara o tipo do dado, não só o valor
            // || = a ou
            tecla.classList.add('ativa');
        }

    }

    tecla.onkeyup = function () {
        tecla.classList.remove('ativa');
    }

}

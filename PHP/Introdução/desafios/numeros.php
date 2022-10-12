<?php
// Exiba todos os números ímpares de 0 até 100
/**
 * Uma dica: para saber se um número é ímpar ou não no PHP, podemos 
 * utilizar o operador de resto de divisão por 2 - se esse resto for 
 * igual a 0, o número é par; caso contrário, ele é ímpar.
 * */ 

for ($contador = 1; $contador < 100; $contador++) {
    if ($contador % 2 != 0 ) {
        echo $contador . PHP_EOL;
    }
}
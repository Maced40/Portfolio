<?php

$peso = 150;
$altura = 1.79;
$imc = $peso / ($altura) ** 2;

if ($imc < 16.5) {
    echo "Seu IMC está abaixo da média." . PHP_EOL . "Este é o seu IMC - $imc";
} if ($imc > 16.5 && $imc < 28.6) {
    echo "Seu IMC está na média." . PHP_EOL . "Este é o seu IMC - $imc";
} if ($imc > 28.6) {
    echo "Seu IMC está acima da média." . PHP_EOL . "Este é o seu IMC - $imc";
}

/**
 * $peso = 60;
*$altura = 1.74;
*$imc = $peso / $altura ** 2;

*echo "Seu IMC é de $imc. Você está com o IMC ";

*if ($imc < 18) {
*    echo "abaixo";
*} elseif ($imc < 25) {
*    echo "dentro";
*} else {
*        echo "acima";
*}

*echo " do recomendado";
 */
<?php

$idade = 17;
$numeroDePessoas = 2;



echo "Você só pode entrar se tiver a partir de 18 anos ou ";
echo "a partir de 16 anos se estiver acompanhado." . PHP_EOL;

//               ||    ou utilizamos $idade == 18 or $idade > 18
if ($idade >= 18) {
    echo "Você tem $idade anos. Pode entrar sozinho.";
} else if ($idade >= 16 and $numeroDePessoas > 1) {
        echo "você tem $idade anos, está acompanhado, então pode entrar.";
    } else {
        echo "Você tem apenas $idade anos. Você não pode entrar.";
}

echo PHP_EOL;
echo "Adeus!";


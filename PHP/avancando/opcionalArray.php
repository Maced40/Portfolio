<?php

$carroInfo = [
    'LMS-2232' => [
        'marca' => 'VM',
        'modelo' => 'Golf'
    ],
    'CRH-1290' => [
        'marca' => 'Ford',
        'modelo' => 'Fiesta'
    ],
    'SAM-2367' => [
        'marca' => 'Fiat',
        'modelo' => 'Uno'
    ],
];

foreach ($carroInfo as $placa => $carro){
    echo $placa . ': ' . $carro['marca'] . '-' . $carro['modelo']
    . PHP_EOL;
}
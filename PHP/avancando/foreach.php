<?php

$contasCorrentes = [
    '134.783.267-81' => [
        'titular' => 'Vinícius',
        'saldo' => 1000
    ], 
    '375.403.739-08' => [
        'titular' => 'Maria',
        'saldo' => 10000
    ], 
    '772.810.038-21' => [
        'titular' => 'Alberto',
        'saldo' => 300
    ]
];


$contasCorrentes ['136.832.990-23'] = [
    'titular' => 'Claudia',
    'saldo' => 2000
];

foreach ($contasCorrentes as $cpf => $conta) {
    echo $conta ['titular'] . ' ' . $cpf . PHP_EOL;
} 
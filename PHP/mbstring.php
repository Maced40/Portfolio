<?php

$string = 'Testes de integração com PHP';

//instalar extensão mbstring:
// https://www.php.net/manual/pt_BR/refs.international.php
echo mb_strlen($string) . PHP_EOL;
echo mb_strtoupper($string);
//strtolower para tudo ficar minúsculo


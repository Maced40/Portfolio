<?php

$array = [
    1 => 'a',
    '01' => 'b',
    1.5 => 'c',
    true => 'd'
];

foreach ($array as $item) {
    echo $item . PHP_EOL;
}
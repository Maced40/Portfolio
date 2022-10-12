<?php
/** A ideia agora é exibir a tabuada de determinado número. 
 * Ou seja, temos um número armazenado em uma variável qualquer, 
 * e queremos exibir o resultado da sua multiplicação de 1 até 9. 
 * Se tiver dúvidas, consulte o fórum da Alura. Até a solução!*/
$numero = 3;
echo "--- Tabuada Do $numero ---" . PHP_EOL;
for ($i = 1; $i < 10; $i++) {
    $r = $numero * $i;
    echo "$numero x $i = $r" . PHP_EOL;
}
echo "-- Fim da Tabuada --";

/**$numero = 7;
echo"---------   Tabuada do nº $numero   ----------".PHP_EOL;
for ($i = 1; $i < 10; $i++){
    $resultado = $numero*$i;
    echo"$numero X $i = $resultado".PHP_EOL;
}
echo"--------- fim  ----------";
*/

/** 
 * Solução do professor:
 * $ multiplicador = 3;
 * 
 * for ($i = 1; $i < 10; $i++) {
 * echo "$multiplicador x $i = " . $multiplicador * $i . PHP_EOL:
 * }
 * 
 */
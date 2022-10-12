console.log(`Trabalhando com listas`);

const listaDeDestinos = new Array (
    `Salvador`,
    `São Paulo`,
    `Rio de Janeiro`
);

listaDeDestinos.push(`Curitiba`); //adicionando um item na lista
console.log(`Destinos possíveis: ${listaDeDestinos}`);

listaDeDestinos.splice(1, //localização do item
    1); //número de itens
console.log(listaDeDestinos);

console.log([1]); //especificando o elemento
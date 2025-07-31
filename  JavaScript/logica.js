const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

function ehPar(n) {
    return n % 2 === 0;
}

readline.question('Digite um número: ', input => {
    const numero = parseInt(input);

    if (ehPar(numero)) {
        console.log("O número é par.");
    } else {
        console.log("O número é ímpar.");
    }

    console.log(`Contando até ${numero}:`);
    for (let i = 1; i <= numero; i++) {
        console.log(i);
    }

    readline.close();
});

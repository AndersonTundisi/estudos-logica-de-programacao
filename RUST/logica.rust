use std::io;

fn eh_par(n: i32) -> bool {
    n % 2 == 0
}

fn main() {
    println!("Digite um número:");
    let mut entrada = String::new();
    io::stdin().read_line(&mut entrada).expect("Erro ao ler entrada");
    let numero: i32 = entrada.trim().parse().expect("Digite um número válido");

    if eh_par(numero) {
        println!("O número é par.");
    } else {
        println!("O número é ímpar.");
    }

    println!("Contando até {}:", numero);
    for i in 1..=numero {
        println!("{}", i);
    }
}

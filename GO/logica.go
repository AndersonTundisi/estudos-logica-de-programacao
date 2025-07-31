package main

import (
    "fmt"
)

func ehPar(n int) bool {
    return n%2 == 0
}

func main() {
    var numero int
    fmt.Print("Digite um número: ")
    fmt.Scan(&numero)

    if ehPar(numero) {
        fmt.Println("O número é par.")
    } else {
        fmt.Println("O número é ímpar.")
    }

    fmt.Println("Contando até", numero, ":")
    for i := 1; i <= numero; i++ {
        fmt.Println(i)
    }
}

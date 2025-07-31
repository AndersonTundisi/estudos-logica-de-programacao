import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.print("Digite um número: ");
        int numero = entrada.nextInt();

        if (ehPar(numero)) {
            System.out.println("O número é par.");
        } else {
            System.out.println("O número é ímpar.");
        }

        System.out.println("Contando até " + numero + ":");
        for (int i = 1; i <= numero; i++) {
            System.out.println(i);
        }

        entrada.close();
    }

    public static boolean ehPar(int n) {
        return n % 2 == 0;
    }
}

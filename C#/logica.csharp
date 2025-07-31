using System;

class Program
{
    static void Main()
    {
        Console.Write("Digite um número: ");
        int numero = int.Parse(Console.ReadLine());

        if (EhPar(numero))
        {
            Console.WriteLine("O número é par.");
        }
        else
        {
            Console.WriteLine("O número é ímpar.");
        }

        Console.WriteLine("Contando até " + numero + ":");
        for (int i = 1; i <= numero; i++)
        {
            Console.WriteLine(i);
        }
    }

    static bool EhPar(int n)
    {
        return n % 2 == 0;
    }
}

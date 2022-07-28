using System;
using System.Text;
using System.Collections.Generic;
class Program
{
    static void Main(string[] args)
    {
        using StreamReader reader = new System.IO.StreamReader(Console.OpenStandardInput());
        using StreamWriter print = new System.IO.StreamWriter(Console.OpenStandardOutput());
        int count = int.Parse(reader.ReadLine());
        int[] list = new int[10001];

        for (int i = 0; i < count; i++)
        {
            list[int.Parse(reader.ReadLine())]++;
        }
        for (int i = 0; i <= 10000; i++)
        {
            if (list[i] != 0)
            {
                for (int j = 0; j < list[i]; j++)
                {
                    print.WriteLine(i);
                }
            }
        }
    }
}
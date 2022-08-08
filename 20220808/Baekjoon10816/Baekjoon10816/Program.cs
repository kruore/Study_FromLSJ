using System;
using System.Collections.Generic;
using System.Collections;
using System.Text;

class Program
{
    public static void Main(string[] args)
    {
        int[] answer = new int[20000001];
        var line = int.Parse(Console.ReadLine());
        var datas = Console.ReadLine().Split(' ');

        var line2 = int.Parse(Console.ReadLine());
        var datas2 = Console.ReadLine().Split(' ');
        int mid = 10000000;
        StringBuilder tx = new StringBuilder();

        for(int i = 0;i<line;i++)
        {
            answer[mid + int.Parse(datas[i])]++;
        }
        for(int i = 0; i < line2; i++)
        {
            tx.Append(answer[mid + int.Parse(datas2[i])] + " ");
        }
        Console.WriteLine(tx.ToString());
    }
}
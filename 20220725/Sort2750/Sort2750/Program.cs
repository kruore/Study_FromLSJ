using System;
using System.Collections.Generic;
using System.Linq;
using static System.Console;
class Program
{
    static void Main(string[] args)
    {
        var a = int.Parse(ReadLine());
        int[] datas = new int[a];
        for (int i = 0; i < a; i++)
        {
            datas[i] = int.Parse(ReadLine());
        }

        datas=Sort(datas);
    }
    static int[] Sort(int[] datas)
    {
        for (int i = 0; i < datas.Length; i++)
        {
            for (int j = i; j < datas.Length; j++)
            {
                int temp = 0;
                if (datas[i] > datas[j])
                {
                    temp = datas[i];
                    datas[i] = datas[j];
                    datas[j] = temp;
                }
                else
                {
                    continue;
                }
            }
        }
        foreach(var a in datas)
        {
            Console.WriteLine(a);
        }
        return datas;
    }
}
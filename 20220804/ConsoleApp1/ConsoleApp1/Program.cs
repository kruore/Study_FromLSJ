using System.IO;
using System;
using System.Collections;

class program
{
    static void Main(string[] args)
    {
        List<string> list = new List<string>();
        string datas=Console.ReadLine();
        list.Add(datas);
        Console.WriteLine(list[0]);
    }
}
using System;
using System.Collections.Generic;
using static System.Console;

class Programm
{
    private static LinkedList<int> A = new LinkedList<int>();
    static void Main(string[] args)
    {
        var a = int.Parse(ReadLine());
        var datas = new int[a];
        for (int i = 0; i < a; i++)
        {
            A.AddLast(int.Parse(ReadLine()));
        }

    }

    static void MergeSort(LinkedList<int> data, int left, int right)
    {
        if (data.Count > 0)
        {
            int mid = data.Count / 2 + 1;
        }

        if(left<right)
        {
            int mid = data.Count / 2;
            MergeSort(data, left, mid);
            MergeSort(data, mid+1, right);
            Merge(data, left, mid, right);
        }

    }
}
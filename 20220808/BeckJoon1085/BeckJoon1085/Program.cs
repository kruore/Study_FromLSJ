using System;
using System.Collections;
using System.Linq;

int[] x = new int[3];
int[] y = new int[3];

for(int i =0;i< 3;i++)
{
    string[] datas = Console.ReadLine().Split(' ');
    x[i] = int.Parse(datas[0]);
    y[i] = int.Parse(datas[1]);
}
int[] minx = x.GroupBy(x => x).Where(g => g.Count() == 1).Select(y => y.Key).ToArray();
int[] miny = y.GroupBy(x => x).Where(g => g.Count() == 1).Select(y => y.Key).ToArray();

Console.WriteLine($"{minx[0]} {miny[0]}");

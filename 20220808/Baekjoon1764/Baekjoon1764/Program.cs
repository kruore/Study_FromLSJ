using System;
using System.Collections.Generic;
using System.Linq;

var a = Console.ReadLine().Split(' ');
int N = int.Parse(a[0]);
int M = int.Parse(a[1]);

Dictionary<int, string> data = new Dictionary<int, string>();
List<string> answer = new List<string>();


var aString = Enumerable.Range(0, N).Select(_ => Console.ReadLine()).ToArray();
var bString = Enumerable.Range(0, M).Select(_ => Console.ReadLine()).ToArray();
Console.WriteLine(Enumerable.Intersect(aString, bString).OrderBy(x => x).Count());
foreach(var ans in Enumerable.Intersect(aString,bString).OrderBy(x=>x))
{
    Console.WriteLine(ans);
}

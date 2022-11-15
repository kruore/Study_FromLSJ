#include <math.h>
#include <iostream>
int* tree;
int A[10] = { 1,4,2,3,5,1,2,4,5,3 };
using namespace std;
long long init(int index, int start, int end)
{
    if (start == end)
        tree[index] = A[start];
    else
        tree[index] = init(index * 2 + 1, start, (start + end) / 2) + init(index * 2 + 2, (start + end) / 2 + 1, end);

    return tree[index];
}
void main()
{
    int N = 0;
     cin>> N;
    int h = ceil(log2(N));
    int tree_size = 1 << (h + 1);

    tree = new int[tree_size];
    init(0, 0, N - 1);

    delete[] tree;
}
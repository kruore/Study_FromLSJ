#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>

using namespace std;



struct Node
{
public:
	int count = 0;
	int data = 0;
};
class priority_queue
{
public:
	void push(Node node);
	void pop();
	int top();
	int size();
	void min_heapsort(int datac);

private:
	Node datas[100000];
	int _size;
};
int priority_queue::size()
{
	return _size;
}
int priority_queue::top()
{
	return datas[1].data;
}
void priority_queue::push(Node node)
{
	int here = 0;
	_size++;
	here = _size;

	while (here > 1 && datas[here / 2].count < datas[here].count)
	{
		swap(datas[here / 2], datas[here]);
		here = here / 2;
	}
}
void priority_queue::pop()
{
	if (_size < 1)
	{
		cout << "0" << "\n";
		return;
	}
	else
	{
		datas[1] = datas[_size];
		_size--;
		min_heapsort(1);
	}
}
void priority_queue::min_heapsort(int datac)
{
	int smallest = datac;
	int left = 2 * datac;
	int right = 2 * datac + 1;

	if (left <= _size && datas[left].count > datas[datac].count)
	{
		smallest = left;
	}
	if (right <= _size && datas[right].count > datas[datac].count)
	{
		smallest = right;
	}

	if (smallest != datac)
	{
		swap(datas[datac], datas[smallest]);
		min_heapsort(smallest);
	}
}


int _length;
void Solution();
void Init();
priority_queue qp;

int main()
{
	Init();
}
void Init()
{
	cin >> _length;

}
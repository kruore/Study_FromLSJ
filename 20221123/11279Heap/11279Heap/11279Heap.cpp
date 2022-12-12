#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>

using namespace std;


class priority_queue
{
private:
	int queue_size = 0;
public:
	void enqueue(int arr[], int val);
	int dequeue(int arr[]);
	void max_heapify(int arr[], int i);
};

void priority_queue::enqueue(int arr[], int val)
{
	int i = 0;
	queue_size++;
	i = queue_size;
	arr[i] = val;

	while (i > 1 && arr[i / 2] < arr[i])
	{
		swap(arr[i / 2], arr[i]);
		i = i / 2;
	}
}
int priority_queue::dequeue(int arr[])
{
	if (queue_size < 1)
	{
		return 0;
	}
	else
	{
		int answer = arr[1];
		arr[1] = arr[queue_size];
		queue_size--;

		max_heapify(arr, 1);
		return answer;
	}
}
void priority_queue::max_heapify(int arr[], int val)
{
	int largest = val;
	int left = 2 * val;
	int right = 2 * val + 1;

	if (left <= queue_size && arr[left] > arr[val])
	{
		largest = left;
	}
	if (right <= queue_size && arr[right] > arr[largest])
	{
		largest = right;
	}

	if (largest != val)
	{
		swap(arr[val], arr[largest]);
		max_heapify(arr, largest);
	}
}


int _length;
void Solution();
void Init();
int a[300000];
vector<int> datc;
int main()
{
	Init();
}
void Init()
{
	collection;
	cin >> _length;
	priority_queue queue;
	for (int i = 0; i < _length; i++)
	{
		int data;
		cin >> data;
		if (data == 0)
		{
			datc.push_back(queue.dequeue(a));
		}
		else
		{
			queue.enqueue(a, data);
		}
	}

	for (int i = 0; i < datc.size(); i++)
	{
		cout << datc[i] << "\n";
	}
}

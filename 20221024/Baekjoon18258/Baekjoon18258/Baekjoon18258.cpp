#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#define MAXVALUE (2000001)
#include <iostream>
#include <vector>

using namespace std;
void Solution();
void Init();
int _length;
struct queue {
	queue* prev;
	queue* next;
	int __size;
	int _data;
	queue* init(queue* head) {
		head = new queue();
		head->prev = head;
		head->next = head;
		head->__size = 0;
		head->_data = -1;
		return head;
	}
	void push(queue* head, int data) {
		queue* tmp;
		tmp = new queue();
		tmp->_data = data;

		if (head->__size == 0) { // 빔
			tmp->prev = head;
			head->next = tmp;
		}
		else { // 이전에 들어왔어서 비어있지 않음
			queue* last = head->prev;
			tmp->prev = head->prev;
			last->next = tmp;
		}
		tmp->next = head;
		head->prev = tmp;
		head->__size += 1;
	}
	int pop(queue* head) {
		if (head->__size == 0) {
			return -1;
		}
		int result = head->next->_data;
		queue* erase = head->next;
		head->next = head->next->next;
		head->next->prev = head;
		free(erase);
		head->__size -= 1;
		return result;
	}
	int size(queue* head) {
		return head->__size;
	}
	int empty(queue* head) {
		return (head->__size == 0);
	}
	int front(queue* head) {
		if (empty(head)) {
			return -1;
		}
		int result = head->next->_data;
		return result;
	}
	int back(queue* head) {
		if (empty(head)) {
			return -1;
		}
		int result = head->prev->_data;
		return result;
	}
};

int main()
{
	Init();
}

void Init()
{
	collection;
	queue Queue;
	cin >> _length;
	for (int i = 0; i < _length; i++)
	{
		string datas;
		cin >> datas;
		if (datas == "push")
		{
			int values;
			cin >> values;
			queue.push(values);
		}
		else if (datas == "pop")
		{
			if (queue.size() != 0)
			{
				cout << queue.pop() << "\n";
				queue.pop();
			}
			else
			{
				cout << "-1" << "\n";
			}
		}
		else if (datas == "size")
		{
			cout << queue.size() << "\n";
		}
		else if (datas == "empty")
		{
			cout << queue.empty() << "\n";
		}
		else if (datas == "front")
		{
			cout << queue.front() << "\n";
		}
		else if (datas == "back")
		{
			cout << queue.back() << "\n";
		}
	}
}
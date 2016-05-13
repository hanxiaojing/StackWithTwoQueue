#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//两个队列实现一个栈
#include<queue>

template<class T>
class Stack
{
public:
	void appendTail(const T& x)
	{
		q1.push(x);
	}

	void deleteTail()
	{
		if (q2.empty())
		{
			while (!q1.empty())
			{
				q2.push(q1.front());
				q1.pop();
			}
			cout << q2.front() << "  ";
			q2.pop();
		}
		else
		{
			cout << q2.front() << "  ";
			q2.pop();
		}
	}
private:
	queue<T> q1;
	queue<T> q2;

};


void Test()
{
	Stack<int> s;
	s.appendTail(1);
	s.appendTail(2);
	s.appendTail(3);
	s.appendTail(4);
	s.deleteTail();
	s.deleteTail();
	s.deleteTail();
	s.deleteTail();

}

int main()
{
	Test();
	system("pause");
	return 0;
}
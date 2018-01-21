#include <iostream>
#include <stack>

using namespace std;

class MyQueue {
	public:
		MyQueue(){}
		void inQueue(int a);
		int deQueue();
	private:
		stack<int> a;
		stack<int> b;
};


void MyQueue::inQueue(int item) {
	a.push(item);
}


int MyQueue::deQueue(){
	int item;
	if (!b.empty()) {
		item = b.top();
	}
	else {
		while (!a.empty()) {
			b.push(a.top());
			a.pop();
		}
		item = b.top();
	}
	b.pop();
	return item;
}


int main(int argc, char** argv) {
	MyQueue myQueue;

	myQueue.inQueue(3);
	myQueue.inQueue(7);
	myQueue.inQueue(8);
	cout << myQueue.deQueue() << endl;
	cout << myQueue.deQueue() << endl;
	myQueue.inQueue(9);
	cout << myQueue.deQueue() << endl;
	return 0;
}


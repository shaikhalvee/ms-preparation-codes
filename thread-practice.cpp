#include <bits/stdc++.h>
using namespace std;

/// c++11 thread practice
/// utilizing 3 types of different callables

/**
	A callable object is passed in thread object.
	Callable object is of 3 types->
		- function pointer
		- function object
		- lambda expression
*/

// a dummy function
void myFunc(int id)
{
	cout << "function callable thread id :" << id << endl;
}
void myFuncLoop(int id)
{
	for(int i = 0; i < id; i++) cout << "function pointer as callable with id " << i << "\n";
}

// a callable object
class threadObj
{
public:
	void operator () (int x)
	{
		for (int i = 0; i < x; i++) cout << "function object as callable with id " << i << "\n";
	}
};

int main()
{
	cout << "Thread 1 2 3 are operating independently" << endl;

	// function pointer callable
	thread th1(myFuncLoop, 3);

	// function object
	thread th2(threadObj(), 3);

	// lambda expression
	auto f = [] (int x) {
		for (int i = 0; i < x; i++) cout << "lambda expression as callable with id " << i << "\n";
	};
	thread th3(f, 3);

	// wait for threads to finish
	th1.join();
	th2.join();
    th3.join();


	return 0;
}


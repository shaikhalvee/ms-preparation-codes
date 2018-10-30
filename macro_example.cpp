#include <bits/stdc++.h>
#define MULTIPLY(a, b) (a)*(b)
#define merge(a, b) a##b
#define get(a) #a

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);

	cout << MULTIPLY(2+3, 3+5) << endl;	// Output: 40
	cout << merge(12, 34) << endl;	// merge(as, we) -> cout << aswe; error. Because aswe is not defined.
									// merge(12, 34) -> cout << 1234; correct.
	cout << get(123) << endl;	// "123" -> const char [4]
	// using \ macro can be extended to next line

	printf("Current File :%s\n", __FILE__ );	// Total filepath. D:\Important_docu....
	printf("Current Date :%s\n", __DATE__ );	// Oct 30 2018
	printf("Current Time :%s\n", __TIME__ );	// 15:37:01
	printf("Line Number :%d\n", __LINE__ );		// 21

	/*
	for further visit this page:
		https://www.geeksforgeeks.org/interesting-facts-preprocessors-c/
	*/

	return 0;
}

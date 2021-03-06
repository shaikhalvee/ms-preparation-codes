#include<bits/stdc++.h>

using namespace std;

void print(unsigned num)
{
    if (num < 10) {
		printf("%u", num);
		return;
    }
    print(num / 10);
    printf("%u", num % 10);
    return;
}

void print_reverse(unsigned num)
{
    cout << num % 10;
    if (num > 10) {
		print_reverse(num / 10);
    }
}

int main()
{
	ios_base::sync_with_stdio(0);
	unsigned input;
	cin >> input;
	//print(input);
	cout << endl;
	print_reverse(input);
	return 0;
}

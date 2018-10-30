#include<bits/stdc++.h>

using namespace std;

void print(unsigned num)
{
    if (num < 10) {
		printf("%u ", num);
		return;
    }
    print(num / 10);
    printf("%u ", num % 10);
    return;
}

int main()
{
	ios_base::sync_with_stdio(0);
	unsigned input;
	cin >> input;
	print(input);
	return 0;
}

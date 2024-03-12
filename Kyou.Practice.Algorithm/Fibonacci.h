#pragma once
#include <iostream>
using namespace std;
class Fibonacci
{
public:
	void run() {
		cout << "509. ì³²¨ÄÇÆõÊý" << endl;
		int res = fib(10);
		cout << res << endl;
		cout << endl;
	}
	//0 1 1 2 3 5
	int fib(int n) {
		if (n <= 0) return 0;
		if (n == 1) return 1;
		return fib(n - 1) + fib(n - 2);
	}
};


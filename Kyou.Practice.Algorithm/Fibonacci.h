#pragma once
#include <iostream>
using namespace std;
class Fibonacci
{
public:
	void run() {
		cout << "509. ì³²¨ÄÇÆõÊý µÝ¹é" << endl;

		int res = fib(10);
		cout << res << endl;

		cout << "509. ì³²¨ÄÇÆõÊý µü´ú" << endl;
		res = fib_iteration(10);
		cout << res << endl;

		cout << endl;
	}
	//0 1 1 2 3 5
	int fib(int n) {
		if (n <= 0) return 0;
		if (n == 1) return 1;
		return fib(n - 1) + fib(n - 2);
	}

	// 0 1 1 2 3 5 8
	int fib_iteration(int n) {
		if (n <= 0) return 0;
		if (n == 1) return 1;
		int a = 0;
		int b = 1;
		while (n > 1) {
			int tmp = b;
			b = a + b;
			a = tmp;
			n--;
		}
		return b;
	}
};


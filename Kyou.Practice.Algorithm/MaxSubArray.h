#pragma once
#include <iostream>

using namespace std;

class MaxSubArray
{
public:
	int maxSub(int arr[]) {
		int max = INT_MIN;
		int cur = arr[0];
		int n = sizeof(arr);
		for (int i = 1; i < n; i++)
		{
			if (cur > 0) {
				cur = cur + arr[i];
			}
			else {
				cur = arr[i];
			}
			if (cur > max) {
				max = cur;
			}
		}
		return max;
	}

	void run() {
		cout << "53. 最大子数组和" << endl;

		int arr[] = { -2,1,-3,4,-1,2,1,-5,4 };
		int res = maxSub(arr);
		cout << res << endl;

		cout << endl;
	}
};


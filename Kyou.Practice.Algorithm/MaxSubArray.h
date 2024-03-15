#pragma once
#include <iostream>
using namespace std;

class MaxSubArray
{
public:
	int maxSub(int arr[], int n) {
		int max = INT_MIN;
		int cur = arr[0];
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
	
	//动态规划 dp[i] = dp[i-1] + nums[i] 定义：以 num[i] 结尾的最大子数组和
	int maxSub1(int arr[], int n) {
		int dp[10000] = {};
		dp[0] = arr[0];
		for (int i = 1; i < n; i++)
		{
			if (dp[i - 1] > 0) {
				dp[i] = dp[i - 1] + arr[i];
			}
			else {
				dp[i] = arr[i];
			}
		}
		int max = dp[0];
		for (int i = 1; i < n; i++)
		{
			if (max < dp[i])
				max = dp[i];
		}
		return max;
	}

	void run() {
		cout << "53. 最大子数组和" << endl;

		int arr[] = { -2,1,-3,4,-1,2,1,-5,4 };
		//int res = maxSub(arr, end(arr) - begin(arr));
		int res = maxSub1(arr, end(arr) - begin(arr));
		cout << res << endl;

		cout << endl;
	}
};


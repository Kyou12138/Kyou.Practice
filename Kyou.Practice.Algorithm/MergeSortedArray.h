#pragma once
#include <iostream>
#include <vector>
using namespace std;

class MergeSortedArray
{
public:
	void merge(vector<int>& nums1, int m, vector<int> nums2, int n) {
		vector<int> res(m + n);
		int p1 = 0;
		int p2 = 0;
		int cur = 0;
		while (p1 < m && p2 < n) {
			if (nums1[p1] < nums2[p2]) {
				res[cur] = nums1[p1];
				p1++;
			}
			else {
				res[cur] = nums2[p2];
				p2++;
			}
			cur++;
		}
		while (p1 < m) {
			res[cur] = nums1[p1];
			p1++;
			cur++;
		}
		while (p2 < m) {
			res[cur] = nums2[p2];
			p2++;
			cur++;
		}

		for (int i = 0; i < m + n; i++)
		{
			cout << res[i] << " ";
		}
		cout << endl;
	}

	void run() {
		cout << "88. 合并两个有序数组" << endl;
		vector<int> nums1 = { 1,2,3,0,0,0 };
		int m = 3;
		vector<int> nums2 = { 2,5,6 };
		int n = 3;
		merge(nums1, m, nums2, n);
		cout << endl;
	}
};


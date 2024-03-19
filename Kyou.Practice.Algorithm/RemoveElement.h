#pragma once
#include <iostream>
#include <vector>
using namespace std;
class RemoveElement
{
public:
	int removeElement(vector<int>& nums, int val) {
		int i = 0;
		int j = 0;
		while (i < nums.size()) {
			if (nums[i] != val) {
				nums[j] = nums[i];
				j++;
			}
			i++;
		}
		return j;
	}

	void run() {
		cout << "27. ÒÆ³ýÔªËØ" << endl;

		vector<int> input = { 0,1,2,2,3,0,4,2 };
		int count = removeElement(input, 2);
		
		for (int i = 0; i < count; i++)
		{
			cout << input[i] << " ";
		}
		cout << endl;

		cout << endl;
	}
};


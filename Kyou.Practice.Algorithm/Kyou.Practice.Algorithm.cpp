// Kyou.Practice.Algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ReverseLinkedList.h"
#include "Fibonacci.h"
#include "MaxSubArray.h"
#include "MergeSortedArray.h"
#include "RemoveElement.h"

int main()
{
    std::cout << "Hello World!\n";

    //leetcode 206. 反转链表
    ReverseLinkedList* r206= new ReverseLinkedList();
    r206->run();

    //leetcode 509. 斐波那契数
    Fibonacci* f509 = new Fibonacci();
    f509->run();

    //leetcode 53. 最大子数组和
    MaxSubArray* m53 = new MaxSubArray();
    m53->run();

    //leetcode 88. 合并两个有序数组
    MergeSortedArray* m88 = new MergeSortedArray();
    m88->run();

    //leetcode 27. 移除元素
    RemoveElement* r27 = new RemoveElement();
    r27->run();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

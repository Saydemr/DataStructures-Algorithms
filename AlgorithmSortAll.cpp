#include "AlgorithmSortAll.h"
#include <iostream>
#include <ctime>

using namespace std;


AlgorithmSortAll::AlgorithmSortAll(int k) : SelectionAlgorithm(k)
{

}

int AlgorithmSortAll::select() {
	int size = 0;
	int kth = -1;
	cin >> size;

	int* unsorted = new int[size];
	
	for (int i = 0; i < size; i++)
	{
		cin >> unsorted[i];
	}

	insertionSort(unsorted,size);
	
	kth = unsorted[k - 1];
	
	delete[] unsorted;
	
	return kth;
}
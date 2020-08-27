#include "AlgorithmSortK.h"
#include <iostream>
#include <ctime>

using namespace std;

AlgorithmSortK::AlgorithmSortK(int k) : SelectionAlgorithm(k)
{

}


int AlgorithmSortK::select() {
	int size = 0;
	int kth = -1;
	cin >> size;

	int* unsorted = new int[k];

	for (int i = 0; i < k; i++)
	{
		cin >> unsorted[i];
	}

	insertionSort(unsorted,k);
	
	
	for (int i = k; i < size; i++)
	{
		int temp = 0;
		cin >> temp;
		
		if (temp > unsorted[k-1])
		{
			unsorted[k - 1] = temp;
			for (int i = 0; (unsorted[k - i - 1] > unsorted[k - i - 2]); i++)
			{
				int temptemp = unsorted[k - 2 - i];
				unsorted[k - 2 - i] = temp; 
				unsorted[k - 1 - i] = temptemp;
			}
		}
		
	}
	kth = unsorted[k - 1];



	return kth;
}
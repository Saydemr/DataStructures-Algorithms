#include "SelectionAlgorithm.h"


SelectionAlgorithm::SelectionAlgorithm(int k) 
{
	this->k = k;
}

int SelectionAlgorithm::select() {
	return 0;
}


void SelectionAlgorithm::insertionSort(int* array, int size) {
	
	for (int i = 1; i < size; i++)
	{
		int pivot = array[i];
		int j = i;

		while ((j > 0) && (array[j-1] < pivot))
		{
			array[j] = array[j - 1];
			j = j - 1;

		}
		array[j] = pivot;
	}
	
	
}

void SelectionAlgorithm::qinsertionSort(int* array, int left, int right) 
{
	for (int i = left + 1; i < right+1; i++)
	{
		int pivot = array[i];
		int j = i;

		while ((j > left) && (array[j - 1] < pivot)) 
		{
			array[j] = array[j - 1];
			j = j - 1;

		}
		array[j] = pivot;
	}
}

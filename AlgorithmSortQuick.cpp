#include "AlgorithmSortQuick.h"
#include <iostream>


using namespace std;


AlgorithmSortQuick::AlgorithmSortQuick(int k) : SelectionAlgorithm(k)
{

}

int AlgorithmSortQuick::quickselect(int* numbers, int left, int right, int k) 
{
	
	if ((right - left) < 10) 
	{	
		int result = 0;
		qinsertionSort(numbers, left, right);
		result = numbers[left + k - 1];
		return result;
	}
	else
	{
		
		int pivoti = (left + right) / 2;
		if (numbers[pivoti] > numbers[left])
		{
			qswap(numbers, left, pivoti);
		}
		if (numbers[right] > numbers[left])
		{
			qswap(numbers, left, right);
		}
		if (numbers[right] > numbers[pivoti])
		{
			qswap(numbers, right, pivoti);
		}
		
		qswap(numbers, left + 1, pivoti);




		int pivot = numbers[left+1];
		
		int i = right;
		int j = left + 1;
		while (true)
		{
			
			while (numbers[--i] < pivot){}
			while (pivot < numbers[++j]){}
			
			if (i > j)
			{
				qswap(numbers, i, j);
			}
			else
			{
				break;
			}
		}
		qswap(numbers, i, left + 1);
		
		pivoti = i;
		int psize = pivoti - left + 1;

		if (k < psize)
		{
			return quickselect(numbers, left, pivoti - 1, k);
		}
		else if (k == psize)
		{
			return pivot;
		}
		else
		{
			return quickselect(numbers, pivoti + 1, right, k-psize);
		}
		
	}
}

int AlgorithmSortQuick::select() 
{
	int size = 0;
	cin >> size;

	int* numbers = new int[size];

	for (int i = 0; i < size; i++)
	{
		cin >> numbers[i];
	}

	int result = quickselect(numbers, 0, size - 1, k);

	delete[] numbers;
	return result;

}

void AlgorithmSortQuick::qswap(int*array, int one, int two) 
{
	int temp = array[one];
	array[one] = array[two];
	array[two] = temp;
}

#include "AlgorithmSortHeap.h"
#include "BinaryHeap.h"

#include <iostream>
using namespace std;

AlgorithmSortHeap::AlgorithmSortHeap(int k) : SelectionAlgorithm(k)
{

}

int AlgorithmSortHeap::select() 
{	
	int n = 0;
	cin >> n;

	BinaryHeap* peculiar = new BinaryHeap(k);
	int newbie = 0;
	
	for (int i = 0; i < k; i++) // n/2 * log(n/2)
	{
		cin >> newbie;
		peculiar->insert(newbie);	
	}

	for (int l = k; l < n; l++) //  n/2
	{
		int comp = peculiar->getMin();
		cin >> newbie;
		
		if (comp < newbie) //  n/2 * log(n/2) 
		{
			peculiar->deleteMin(); // log (n/2)
			peculiar->insert(newbie); // log(n/2)
		}
		
	}

	int result = peculiar->getMin();
	
	return result;
}
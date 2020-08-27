#ifndef _SELECTIONALGORITHM_
#define _SELECTIONALGORITHM_

class SelectionAlgorithm
{
public:
	SelectionAlgorithm(int);
	
	virtual int select();
	void insertionSort(int*, int);
	void qinsertionSort(int*, int, int);

protected:
	int k;

};
#endif // !_SELECTIONALGORITHM_

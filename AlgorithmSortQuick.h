#ifndef _ALGORITHMSORTQUICK_
#define _ALGORITHMSORTQUICK_

#include "SelectionAlgorithm.h"

class AlgorithmSortQuick : public SelectionAlgorithm
{
public:

	AlgorithmSortQuick(int);
	int quickselect(int*, int, int, int);
	int select();
	void qswap(int*,int, int);

};



#endif // !_ALGORITHMSORTQUICK_


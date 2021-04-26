// pasko_19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ListProcessor.h"

int main()
{
	List* lst = init(5);

	lst = addElemEnd(lst, 25);

	List* tmpLst = lst;
	while (true)
	{
		printf("%i\n", tmpLst->Field);

		if (tmpLst->Prev != NULL)
		{
			tmpLst = tmpLst->Prev;
		}
		else
		{
			break;
		}
	}

	return 0;
}

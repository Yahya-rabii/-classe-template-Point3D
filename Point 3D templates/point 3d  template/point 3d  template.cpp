#include <iostream>
#include "Point3D.h"
#include "Segment.h"

int main()
{
	typedef double t;

	Point3D<t> a0(2, 5, 2);
	Point3D<t> a1(1, 4, 5);
	Point3D<t> b1(6, 7 ,8);


	Point3D<t> a2(5, 6, 7);
	Point3D<t> b2(1, 2, 3);

	Segment<t> h1(a1,b1);
	Segment<t> h2(a2,b2);

	bool h;
	h = h1.difference(h2);


	if (h) {

		printf("il y a une difference \n");

	}
	else
	{
		printf("il n'ya pas une difference \n");

	}

	h= h1.existance(a0);

	if (h) {

		printf("a0 existe dans h1 \n");

	}
	else
	{
		printf("a0 n'existe pas dans h1 \n");

	}

	t t1;

	t1 = h1.longueur();

	printf("la distance entre les point 3D de h1 = %f \n",t1);


}


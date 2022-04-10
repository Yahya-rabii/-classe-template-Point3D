#pragma once
#include "Point3D.h"

template<class t> class Point3D;
template<class t>


class Segment
{
private:

	Point3D<t> A;
	Point3D<t> B;

public:
	Segment();
	Segment(Point3D<t> a, Point3D<t> b);
	Segment(const Segment<t> &S);

	t longueur()const;
	bool difference(const Segment<t> &S)const;

	bool existance(const Point3D<t> &p)const;

};

template<class t>
inline Segment<t>::Segment()
{
	this->A;
	this->B;
}

template<class t>
inline Segment<t>::Segment(Point3D<t> a, Point3D<t> b)
{
	this->A = a;
	this->B = b;
}

template<class t>
inline Segment<t>::Segment(const Segment<t>& S)
{
	this->A = S.A;
	this->B = S.B;
}

template<class t>
inline t Segment<t>::longueur() const
{
	t dis = 0;
	dis = this->A.distance_p(this->B);

	return dis;
}

template<class t>
inline bool Segment<t>::difference(const Segment<t>& S) const
{

	if (this->longueur() != S.longueur())
	{

		return true;

	}

	else
	{

		if (this->A.cmp_po(S.A) || this->B.cmp_po(S.B))
		{

			return true;

		}

		else
		{
			return false;
		}





	}


}

template<class t>
inline bool Segment<t>::existance(const Point3D<t>& p) const
{
	t max_abs = 0;
	t min_abs = 0;
	t max_ord = 0;
	t min_ord = 0;

	max_abs = this->A.max_absX(this->B);
	min_abs = this->A.min_absX(this->B);
	max_ord = this->A.max_ordY(this->B);
	min_ord = this->A.min_ordY(this->B);

	if (p.comparer(min_abs, max_abs, min_ord, max_ord))
	{

		return true;

	}

	else
	{
		return false;
	}


}

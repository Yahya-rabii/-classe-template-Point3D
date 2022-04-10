#pragma once
#include <cmath>
#include <iostream>

template <class t>

class Point3D
{

private:

	t X;
	t Y;
	t Z;

public:
	Point3D();
	Point3D(t x, t y, t z);
	Point3D(const Point3D<t>& p);
	t distance_p(const Point3D<t>& p)const;
	bool cmp_po(const Point3D<t>& p)const;

	t min_absX(const Point3D<t>& p)const;
	t max_absX(const Point3D<t>& p)const;
	t min_ordY(const Point3D<t>& p)const;
	t max_ordY(const Point3D<t>& p)const;

	bool comparer(t min_x, t max_x, t min_y, t max_y) const;

};

template<class t>
inline Point3D<t>::Point3D()
{

	this->X = 0;
	this->Y = 0;
	this->Z = 0;
}

template<class t>
inline Point3D<t>::Point3D(t x, t y, t z)
{
	this->X = x;
	this->Y = y;
	this->Z = z;

}

template<class t>
inline Point3D<t>::Point3D(const Point3D<t>& p)
{

	this->X = p.X;
	this->Y = p.Y;
	this->Z = p.Z;
}

template<class t>
inline t Point3D<t>::distance_p(const Point3D<t>& p) const
{
	t dis = 0;

	dis = sqrt(pow(p.X - this->X, 2) + pow(p.Y - this->Y, 2) + pow(p.Z - this->Z, 2));

	return dis;
}

template<class t>
inline bool Point3D<t>::cmp_po(const Point3D<t>& p) const
{
	if (this->X == p.X)
	{
		if (this->Y == p.Y)
		{
			if (this->Z == p.Z)

			{

				return false;

			}

			else return true;
		}
		else return true;
	}
	else return true;
}

template<class t>
inline t Point3D<t>::min_absX(const Point3D<t>& p) const
{
	t minabs = 0;

	if (this->X < p.X) {

		minabs = this->X;

	}

	else if (p.X < this->X)
	{

		minabs = p.X;

	}

	return minabs;
}

template<class t>
inline t Point3D<t>::max_absX(const Point3D<t>& p) const
{
	t maxabs = 0;

	if (this->X > p.X) {

		maxabs = this->X;

	}

	else if (p.X > this->X)
	{

		maxabs = p.X;

	}

	return maxabs;
}

template<class t>
inline t Point3D<t>::min_ordY(const Point3D<t>& p) const
{
	t minord = 0;

	if (this->Y < p.Y) {

		minord = this->Y;

	}

	else if (p.Y < this->Y)
	{

		minord = p.Y;

	}

	return minord;
}

template<class t>
inline t Point3D<t>::max_ordY(const Point3D<t>& p) const
{
	t maxord = 0;

	if (this->Y > p.Y) {

		maxord = this->Y;

	}

	else if (p.Y > this->Y)
	{

		maxord = p.Y;

	}

	return maxord;
}

template<class t>
inline bool Point3D<t>::comparer(t min_x, t max_x, t min_y, t max_y) const
{
	if (this->X > min_x && this->X < max_x)
	{

		if (this->Y > min_y && this->Y < max_y)
		{

			return true;

		}

		else return false;

	}
	else return false;
}

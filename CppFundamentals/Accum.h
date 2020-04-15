#pragma once

template <class T>
class Accum
{
public:
	Accum(T start): total(start) 
	{
	}

	T operator+=(T const& t) 
	{
		return total = total + t;
	}

	T GetTotal() const
	{
		return total;
	}

private:
	T total;
};

template <>
class Accum<Person>
{
public:
	Accum(int start) : total(start)
	{
	}

	int operator+=(Person const& t)
	{
		return total = total + t.GetNumber();
	}

	int GetTotal() const
	{
		return total;
	}

private:
	int total;
};


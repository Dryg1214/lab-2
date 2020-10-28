#include "cpp-function.h"
#include "c-fuction.h"
#include <iostream>
namespace cpp
{
	double function::get_a() const
	{
		return a;
	}
	double function::get_b() const
	{
		return b;
	}
	double function::get_c() const
	{
		return c;
	}
	function function::sum(const function& h)
	{
		return function(a + h.a, b + h.b, c + h.c);
	}
	function function::sum_(const function& h, const function& d)
	{
		return function(h.a+d.a, h.b+d.b, h.c+d.c);
	}
	function function::sub(const function& h)
	{
		return function(a - h.a, b - h.b, c - h.c);
	}
	function function::derivative() const
	{
		return function(0, 2*a, b);
	}
	double function::value(double x)
	{
		return (a * x * x + b * x + c);
	}
}
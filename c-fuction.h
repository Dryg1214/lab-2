namespace c
{
	struct function
	{
		double a, b, c;
	};
	function sum(const function &h, const function& d);
	function sub(const function &h, const function& d);
	function derivative(const function &h);
	double value(const function &h, double x);
}
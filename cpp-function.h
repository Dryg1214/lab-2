namespace cpp
{
	class function//ax^2 + bx + c
	{
	private:
		double a, b, c;
	public:
		function()
		{
			a = b = c = 1;
		}
		function(double d, double e, double f)
		{
			a = d, b = e, c = f;
		}
		double get_a() const;
		double get_b() const;
		double get_c() const;
		function sum(const function& h);
		static function sum_(const function& h, const function& d);
		function sub(const function& h);
		function derivative() const;
		double value(double x);
	};
}
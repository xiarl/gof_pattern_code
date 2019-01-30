
namespace ProxyNS
{
	class Point
	{
		friend std::ostream & operator<<(std::ostream & os, const Point & pt);
		friend std::istream & operator>>(std::istream & is, Point & pt);		
	public:
		Point(int x,int y);

		static Point Zero;

		bool operator==(const Point & rp);

	private:
		int _x;
		int _y;
	};

	std::ostream & operator<<(std::ostream & os, const Point & pt);
	std::istream & operator>>(std::istream & is, Point & pt);


	class Event
	{

	};
}

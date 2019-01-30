
namespace CompositeNS
{
	class FloppyDisk : public Equipment
	{
	public:
		explicit FloppyDisk(const char *);
		virtual ~FloppyDisk();

		virtual Watt Power();
		virtual Currency NetPrice();
		virtual Currency DiscountPrice();
	};
}
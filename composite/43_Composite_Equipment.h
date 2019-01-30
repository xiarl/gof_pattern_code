
namespace CompositeNS
{

	class Equipment
	{
	public:
		virtual ~Equipment();

		const char * Name(){return _name;}

		virtual Watt Power();
		virtual Currency NetPrice();
		virtual Currency DiscountPrice();

		virtual void Add(Equipment *);
		virtual void Remove(Equipment *);
		virtual Iterator<Equipment*> * CreateIterator();

	protected:
		explicit Equipment(const char *);
	private:
		const char * _name;
	};
}

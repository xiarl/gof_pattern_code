
namespace MementoNS
{
	class Memento
	{
	public:
		// narrow public interface
		virtual ~Memento();
	private:
		// private members accessible only to Originator
		friend class Originator;// !!!!! friend !!!!
		Memento();

		void SetState(State *);
		State * GetState();
		//...
	private:
		State * _state;
		//...
	};
}

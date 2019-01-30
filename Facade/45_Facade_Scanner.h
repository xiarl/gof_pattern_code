
namespace FacadeNS
{
	class Scanner
	{
	public:
		Scanner(std::istream &);
		virtual ~Scanner();

		virtual Token & Scan();
	private:
		std::istream & _inputStream;
		Token _currToken;
	};
}



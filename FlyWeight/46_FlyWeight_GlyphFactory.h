
namespace FlyWeightNS
{
	class GlyphFactory
	{
	public:
		const static int NCHARCODES = 128;
		GlyphFactory();
		virtual ~GlyphFactory();

		virtual Character * CreateCharacter(char );
		virtual Row * CreateRow();
		virtual Column * CreateCloumn();
		//...
	private:
		Character * _character[NCHARCODES];
	};
}

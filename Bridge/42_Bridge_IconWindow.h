
namespace Bridge
{
	class IconWindow : public Window
	{
	public:
		/*explicit*/ IconWindow(View * contents, const char * pstr);
		// ...
		virtual void DrawContents();

	private:
		const char * _bitmapName;
	};
}

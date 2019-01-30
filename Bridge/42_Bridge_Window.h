
namespace Bridge
{
	class View;
	class Point;
	class WindowImp;

	class Window
	{
	public:
		explicit Window(View * contents);

		//requests handled by widow
		virtual void DrawContents();

		virtual void Open();
		virtual void Close();
		virtual void Iconify();
		virtual void Deiconify();

		//requests forwarded to implementation
		virtual void SetOrigin(const Point & at);
		virtual void SetExtent(const Point & extent);
		virtual void Raise();
		virtual void Lower();
		virtual void DrawLine(const Point &, const Point &);
		virtual void DrawRect(const Point &, const Point &);
		virtual void DrawPolygon(const Point [], int n);
		virtual void DrawText(const char *, const Point &);

	protected:
		WindowImp * GetWindowImp();
		View * GetView();
	private:
		WindowImp * _imp;
		View * _conntents; // the window's contents
	};
}

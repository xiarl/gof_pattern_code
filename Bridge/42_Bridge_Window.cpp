#include "42_Bridge_View.h"

#include "42_Bridge_Point.h"
#include "42_Bridge_Coord.h"
#include "42_Bridge_WindowImp.h"

#include "42_Bridge_Window.h"
#include "42_Bridge_WindowSystemFactory.h"

namespace Bridge
{

	Window::Window(View * contents)
	{
		_imp = 0;
		//...
		_conntents = 0;
		//...
	}

	void Window::DrawContents()
	{
	}

	void Window::Open()
	{
	}
	void Window::Close()
	{
	}
	void Window::Iconify()
	{
	}
	void Window::Deiconify()
	{
	}


	void Window::SetOrigin(const Point & at)
	{
	}
	void Window::SetExtent(const Point & extent)
	{
	}
	void Window::Raise()
	{
	}
	void Window::Lower()
	{
	}
	void Window::DrawLine(const Point &, const Point &)
	{
	}
	void Window::DrawRect(const Point & p1, const Point & p2)
	{
		WindowImp * imp = GetWindowImp();
		imp->DeviceRect(p1.X(), p1.Y(), p2.X(), p2.Y());
	}
	void Window::DrawPolygon(const Point [], int n)
	{
	}
	void Window::DrawText(const char *, const Point &)
	{
	}

	WindowImp * Window::GetWindowImp()
	{
		if(_imp == 0)
		{
			_imp = WindowSystemFactory::Instance()->MakeWindowImp();
		}
		return _imp;
	}
	View * Window::GetView()
	{
		return _conntents;
	}

}

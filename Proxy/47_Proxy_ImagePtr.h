
namespace ProxyNS
{
	extern Image * LoadAnImageFile(const char *);
	//external function

	class ImagePtr
	{
	public:
		ImagePtr(const char * imageFile);
		virtual ~ImagePtr();

		virtual Image * operator->();
		virtual Image & operator*();
	private:
		Image * LoadImage();
	private:
		Image * _image;
		const char * _imageFile;
	};


}

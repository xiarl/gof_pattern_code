#include "5_10_TemplateMethod_interface.h"
#include <string>

class DrawApplication :public Application
{
private:
	std::string _name;
private:
	virtual bool CanOpenDocument(const char *);
	virtual Document * DoCreateDocument();
	virtual void AboutToOpenDocument(Document *doc);
};

class DrawDocument :public Document
{
private:
	virtual void DoRead();
};


class SpreadsheetApplication :public Application
{
private:
	std::string _name;
private:
	virtual bool CanOpenDocument(const char *);
	virtual Document * DoCreateDocument();
	virtual void AboutToOpenDocument(Document *doc);
};

class SpreadsheetDocument :public Document
{
private:
	virtual void DoRead();
};

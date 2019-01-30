
#include "5_10_TemplateMethod_app.h"

//接口
bool Application::CanOpenDocument(const char *)
{

	return false;
}
//接口
Document * Application::DoCreateDocument(/*const char * name*/)
{
	Document * docptrGet = 0;
// 	if (name && strlen(name) > 3)
// 	{
// 		if (strlen(name)== 4)
// 		{
// 			docptrGet = new DrawDocument;
// 		}
// 		else if (strlen(name) == 5)
// 		{
// 			docptrGet = new SpreadsheetDocument;
// 		}
// 		else
// 		{
// 		}
// 	}
	return docptrGet;
}
//接口
void Application::AboutToOpenDocument(Document *doc)
{
	if (doc)
	{
	}
}


void Application::AddDocument(Document * doc)
{
	if (doc)
	{
	}
}
//OpenDocument 中定义了打开一个文档的主要步骤。
//它检查文档是否可以打开创建与应用相关的Document对象，
//将对象加入文档集合中，并从一个文件中读取该Document
void Application::OpenDocument(const char *name)
{
	if (! CanOpenDocument(name))//调用接口，多态实现
	{
		// cannot handle this document
		return;
	}

	Document * doc = DoCreateDocument();//调用接口，多态实现
	if (doc)
	{
		_docs.insert(doc);
		AboutToOpenDocument(doc);//调用接口，多态实现
		doc->Open();
		doc->DoRead();
	}
}

//子类多态化 具体实现 接口
bool DrawApplication::CanOpenDocument(const char *name)
{
	if (name)
	{
		_name = (name);
		return true;
	}
	else
	{
		return false;
	}
}
//子类多态化 具体实现 接口
void DrawApplication::AboutToOpenDocument(Document *doc)
{
	if (doc)
	{
	}
}
//子类多态化 具体实现 接口
Document * DrawApplication::DoCreateDocument()
{
	if (!_name.empty())
	{
		return new DrawDocument;
	}
	return 0;
}

//子类多态化 具体实现 接口
bool SpreadsheetApplication::CanOpenDocument(const char * name)
{
	if (name)
	{
		_name = (name);
		return true;
	}
	else
	{
		return false;
	}
}

//子类多态化 具体实现 接口
void SpreadsheetApplication::AboutToOpenDocument(Document *doc)
{
	if (doc)
	{
	}
}
//子类多态化 具体实现 接口
Document * SpreadsheetApplication::DoCreateDocument()
{
	if (! _name.empty())
	{
		return new SpreadsheetDocument;
	}
	return 0;
}


//接口
void Document::DoRead()
{

}

void Document::Save()
{

}
void Document::Open()
{

}
void Document::Close()
{

}

//子类多态化 具体实现 接口
void DrawDocument::DoRead()
{

}

//子类多态化 具体实现 接口
void SpreadsheetDocument::DoRead()
{

}

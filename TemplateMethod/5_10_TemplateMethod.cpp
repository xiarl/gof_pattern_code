
#include "5_10_TemplateMethod_app.h"

//�ӿ�
bool Application::CanOpenDocument(const char *)
{

	return false;
}
//�ӿ�
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
//�ӿ�
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
//OpenDocument �ж����˴�һ���ĵ�����Ҫ���衣
//������ĵ��Ƿ���Դ򿪴�����Ӧ����ص�Document����
//����������ĵ������У�����һ���ļ��ж�ȡ��Document
void Application::OpenDocument(const char *name)
{
	if (! CanOpenDocument(name))//���ýӿڣ���̬ʵ��
	{
		// cannot handle this document
		return;
	}

	Document * doc = DoCreateDocument();//���ýӿڣ���̬ʵ��
	if (doc)
	{
		_docs.insert(doc);
		AboutToOpenDocument(doc);//���ýӿڣ���̬ʵ��
		doc->Open();
		doc->DoRead();
	}
}

//�����̬�� ����ʵ�� �ӿ�
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
//�����̬�� ����ʵ�� �ӿ�
void DrawApplication::AboutToOpenDocument(Document *doc)
{
	if (doc)
	{
	}
}
//�����̬�� ����ʵ�� �ӿ�
Document * DrawApplication::DoCreateDocument()
{
	if (!_name.empty())
	{
		return new DrawDocument;
	}
	return 0;
}

//�����̬�� ����ʵ�� �ӿ�
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

//�����̬�� ����ʵ�� �ӿ�
void SpreadsheetApplication::AboutToOpenDocument(Document *doc)
{
	if (doc)
	{
	}
}
//�����̬�� ����ʵ�� �ӿ�
Document * SpreadsheetApplication::DoCreateDocument()
{
	if (! _name.empty())
	{
		return new SpreadsheetDocument;
	}
	return 0;
}


//�ӿ�
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

//�����̬�� ����ʵ�� �ӿ�
void DrawDocument::DoRead()
{

}

//�����̬�� ����ʵ�� �ӿ�
void SpreadsheetDocument::DoRead()
{

}

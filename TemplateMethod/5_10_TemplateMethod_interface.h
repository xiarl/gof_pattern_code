#include <set>

class Document;

class Application
{
private:
	std::set<Document *> _docs;
public:
	void OpenDocument(const char *);

private:
	virtual bool CanOpenDocument(const char *);
	virtual Document * DoCreateDocument();
	virtual void AboutToOpenDocument(Document *doc);

	void AddDocument(Document * doc);
};

class Document
{
public:
	virtual void DoRead();
	
public:
	void Save();
	void Open();
	void Close();
};


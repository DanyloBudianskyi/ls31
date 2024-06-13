#pragma once
#include "Date.h"
#include "string"
using namespace std;

class Soft
{
protected:
	string title;
	string company;
public:
	Soft();
	Soft(string title, string company);
	virtual ~Soft();

	void setTitle(string title);
	void setCompany(string company);

	string getTitle()const;
	string getCompany()const;

	virtual void showInfo()const = 0;
	virtual bool isAvailable()const = 0;

};


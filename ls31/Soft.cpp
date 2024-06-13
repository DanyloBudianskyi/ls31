#include "Soft.h"

Soft::Soft()
{
    title = "Empty";
    company = "Empty";
}

Soft::Soft(string title, string company)
{
    this->title = title;
    this->company = company;
}

Soft::~Soft(){}

void Soft::setTitle(string title){ this->title = title; }

void Soft::setCompany(string company){ this->company = company; }

string Soft::getTitle() const { return title; }

string Soft::getCompany() const{ return company; }

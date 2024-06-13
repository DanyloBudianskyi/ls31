#include "FreeSoft.h"

FreeSoft::FreeSoft() : Soft("Free", "Company")
{

}

FreeSoft::FreeSoft(string title, string company) : Soft(title, company)
{
}

void FreeSoft::showInfo() const
{
    cout << "Title: " << getTitle() << endl;
    cout << "Company: " << getCompany() << endl;
    cout << "Available: " << isAvailable() << endl;
}

bool FreeSoft::isAvailable() const
{
    return true;
}

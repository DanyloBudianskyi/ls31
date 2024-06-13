#include "TimeLimitedSoft.h"

TimeLimitedSoft::TimeLimitedSoft()
{
    install = Date(2000,1,1);
    days = 0;
}

TimeLimitedSoft::TimeLimitedSoft(string title, string company, Date install, int days) : Soft(title, company)
{
    this->install = install;
    this->days = days;
}

void TimeLimitedSoft::setInstall(Date install){ this->install = install; }

void TimeLimitedSoft::setDays(int days){ this->days = days; }

Date TimeLimitedSoft::getInstall() const
{
    return install;
}

int TimeLimitedSoft::getDays() const
{
    return days;
}

void TimeLimitedSoft::showInfo() const
{
    cout << "Title: " << title << endl;
    cout << "Company: " << company << endl;
    cout << "Install date: " << install << endl;
    cout << "Free days: " << days << endl;
    cout << "Is available: " << isAvailable() << endl;
}

bool TimeLimitedSoft::isAvailable() const
{
    return install + days > Date();
}

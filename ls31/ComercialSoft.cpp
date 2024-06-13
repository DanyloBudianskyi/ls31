#include "ComercialSoft.h"

ComercialSoft::ComercialSoft()
{
    price = 0;
}

ComercialSoft::ComercialSoft(string title, string company, Date install, int days, float price) : TimeLimitedSoft(title,company,install,days)
{
    this->price = price;
}

void ComercialSoft::setPrice(float price)
{
    this->price = price;
}

float ComercialSoft::getPrice() const
{
    return price;
}

void ComercialSoft::showInfo() const
{
    TimeLimitedSoft::showInfo();
    cout << "Price: " << price << endl;
}

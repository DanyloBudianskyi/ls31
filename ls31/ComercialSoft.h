#pragma once
#include "TimeLimitedSoft.h"
class ComercialSoft : public TimeLimitedSoft
{
	float price;
public:
	ComercialSoft();
	ComercialSoft(string title, string company, Date install, int days, float price);

	void setPrice(float price);
	float getPrice()const;

	void showInfo()const override;
};


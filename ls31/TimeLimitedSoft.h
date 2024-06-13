#pragma once
#include "Soft.h"
class TimeLimitedSoft : public Soft
{
protected:
	Date install;
	int days;
public:
	TimeLimitedSoft();
	TimeLimitedSoft(string title, string company, Date install, int days);

	void setInstall(Date install);
	void setDays(int days);

	Date getInstall()const;
	int getDays()const;

	void showInfo()const override;
	bool isAvailable()const override;
};


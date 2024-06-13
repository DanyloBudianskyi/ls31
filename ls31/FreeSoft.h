#pragma once
#include "Soft.h"
class FreeSoft : public Soft
{
public:
	FreeSoft();
	FreeSoft(string title, string company);

	void showInfo()const override;
	bool isAvailable()const override;
};


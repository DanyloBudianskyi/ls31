#include "FreeSoft.h"
#include "TimeLimitedSoft.h"

int main()
{
    Soft* obj = new FreeSoft("Paint", "Microsoft");
    
    TimeLimitedSoft* obj2 = new TimeLimitedSoft("Photoshop", "Adobe", Date() - 7, 3);
    obj2->showInfo();
}
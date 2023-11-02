#include <stdio.h>
#include "main2.h"






System *ptrStruct=&mySystem;




int main (void)
{


ptrStruct->subsystem1.data=3;

printf("the value of data is %d",ptrStruct->subsystem1.data);

 // Now call the printing function
    printing();

    return 1;
}
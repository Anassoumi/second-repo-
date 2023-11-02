#include "main2.h"
#include <stdio.h>


extern System *ptrStruct;


void printing ()
{
    ptrStruct->subsystem1.data=6;
printf("the value of data is %d",ptrStruct->subsystem1.data);
}

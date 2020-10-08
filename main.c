#include <stdio.h>
#include <stdlib.h>
#include "hbm.h"
#include "test_hbm.h"

int main()
{
    int my_hbm = hbm();					/* Add function call */
    printf("HBM = %d", my_hbm);
    test_main_hbm();
    return 0;
}

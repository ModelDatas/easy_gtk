#include <stdio.h>
#include <stdlib.h>

int add_gtk_line(int a,int b)
{

    if(a == NULL ||b == NULL)
    {
        return 0;
    }
    int c;
    c = a + b;
    return c;
}

void open_calc_mspaint()
{
    system("start  calc && mspaint");
}

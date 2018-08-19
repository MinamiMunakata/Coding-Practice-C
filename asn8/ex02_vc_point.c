#include "vc_point.h"

void set_point(t_point *point)
{
    point->x = 86;
    point->y = 89;
}
int main(void)
{
    t_point point;
    set_point(&point);
    return 0;
}
#include<stdio.h>
struct code{
    int x;
    int y;
    struct code*ptr;
};
int main(){
    struct code var1;
    struct code var2;
    var1.x=5;
    var1.y=7;
    var1.ptr=NULL;
    
    var2.x=55;
    var2.y=74;
    var2.ptr=NULL;

    var1.ptr=&var2;
    printf("%d %d\n",var1.ptr->x,var1.ptr->y);
    printf("%d %d\n",var1.x,var1.y);
}

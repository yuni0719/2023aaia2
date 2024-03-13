#include <stdio.h>
int main()
{
    int a = 3; ///這裡可以改一改，看它做幾次
    while(a>0)
    {
        printf("a是%d\n", a); ///一直印
        a--; /// a-= 1 的縮寫
    }

    for(int b=3;b>0;b--) {
        printf("b是%d\n", b);
    }
}

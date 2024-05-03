/// week11-2.cpp 璶ノ縵猭
/// 玡糶猭, 璶30窾*30窾=900货Ω
/// ノ縵猭, 璶30窾+炳奔êㄇ, е20窾
#include <stdio.h>
int main()
{
    int BOUND = 20000, ans = 0;
    int table[300000] = {}; ///倒﹍, 常干0
    for(int i=2; i<BOUND; i++)
    {
        if(table[i]==0)
        {
            ans++;
            for(int k=i*i; k<BOUND; k+=i)
            {
                table[k] = -1;
            }
        }
    }
    printf("借计Τ: %d \n", ans);
}

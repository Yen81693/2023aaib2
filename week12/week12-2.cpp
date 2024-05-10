#include <stdio.h>
int main()
{
    int n = 2;
    int a[2][3] = {{10,20}, {11,22} };
    int b[2][3] = {{2,1}, {3,2} };
    int c[2][2];
    ///Part 1 會讀a[i][j]。先設好, 就不用再讀
    ///Part 2 會讀b[i][j]。先設好, 就不用再讀
    for(int i=0; i<n; i++) ///Part 3印資料
    {
        for(int j=0; j<n; j++)
        {
            int * p1 = & a[i][j];///為了在Tutor有箭頭
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
}

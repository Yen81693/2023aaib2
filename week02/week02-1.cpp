
///�ƲߤW§�� printf() ��f�榡
#include <stdio.h>
int main()
{
    int a , b ;
    printf("�п�J��Ӿ��:");
    scanf("%d %d" , &a , &b );
    printf("�A��J�F2�ӼƦr,�����[�k:\n");
    printf("%5d\n", a );
    printf("%5d\n", b );
    printf("-------\n");
    printf("%5d\n", a+b );
}
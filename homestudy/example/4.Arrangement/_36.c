//예제 36
//1부터 10까지의 수를 리스트에 저장하고 출력하기
//i가 1부터 시작해 1씩 증가하며 10까지 반복하며 i 값을 리스트 a[ i-1 ]에 저장한다.
//결국 a[0]에는 1, a[1]에는 2, a[2]에는 3, ..., a[9]에는 10이 저장된다.

#include <stdio.h>
int main()
{
    int i, a[10];
    for (i = 1; i <= 10; i++)
        a[i - 1] = i;
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int len, end1, start2, end2, cnt;
    int start1 = 0;
    printf("정수 입력 : ");
    scanf("%d", &len);
    
    char arr[len][len];
    int offset = (len%2==0);
    int ll = (int)len/2;

    /* 초기화 */
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len; j++)
        {
            arr[i][j] = ' ';
        }
    }
    
    /* 별찍기 */
    for(int i=0; i<len; i++)
    {
        if(i==ll || i==(ll-offset))
        {
            
            end1 = len-1;

            for(int j=start1; j<=end1; j++)
            {
                arr[i][j] = '*';
            }  
        }
        else
        {   
            if(i<ll)
            {
                end1 = i;
                start2 = len-1-i;
                end2 = len-1;

                for(int j=start1; j<=end1; j++)
                {
                    arr[i][j] = '*';                    
                }
                for(int j=start2; j<=end2; j++)
                {
                    arr[i][j] = '*';
                }
            }
            else
            {
                end1 = len-1-i;
                start2 = (len-1)-((len-1)-i);
                end2 = len-1;
                for(int j=start1; j<=end1; j++)
                {
                    arr[i][j] = '*';                    
                }
                for(int j=start2; j<=end2; j++)
                {
                    arr[i][j] = '*';
                }
            }
        }
    }

    /* 출력 */
    printf("\n");
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len; j++)
        {
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}
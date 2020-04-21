/*
1 2 abc 3 def

4 ghi 5 jkl 6 mno

7 pqrs 8 tuv 9 wxyz

* 0 #
*/
//一个数组，列存放字母，按字母时，遍历数组，j相加，求j的总和
#include<stdio.h>
int main()
{
    int sum=0;
    char word[200][200]={
    " abc"," def"," ghi"," jkl"," mno"," pqrs"," tuv"," wxyz","  "
    };
    char wo;
    while(scanf("%c",&wo)==1)
    {
        for(int i=0;i<9;i++)
            for(int j=0;j<5;j++)
                if(word[i][j]==wo)
                    sum+=j;
    }
    printf("%d",sum);
    return 0;

}

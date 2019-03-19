#include <string.h>
#include <stdio.h>
int main()
{
char produto [20][10];
    
    printf("Digite os produtos \n");
    
    for(int i=0;i<=5;i++)
    {
        fgets(produto[i],20,stdin);
    }

    printf("Exibindo\n");

    for(int j=0;j<=5;j++)
    {
        printf("%s", produto[j]);
    }
}

#include<stdio.h>
int main()
{
    int a[10];
    int i,j,n;
    FILE *fp;
    FILE *fw;
    fw=fopen("//Users//a20161104588//Desktop//sort1//","w");
    fp=fopen("//Users//a20161104588//Desktop//sort1//","r");
    for(i=0;i<10;i++)
    {
        scanf("%d",& a[i]);
    }
    for(j=0;j<9;j++)
    {
        for(i=0;i<9-j;i++)
            if(a[i]<a[i+1])
            {
                n=a[i];a[i]=a[i+1];a[i+1]=n;
            }
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
        fprintf(fp,"%d",a[i]);
    }
    fclose(fp);
    return 0;
}

  #include <stdio.h>
char name[100][80];
int grade[100];
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
     scanf("%s %d",name,&grade[i]);
    }

        for(int k=0;k<N-1;k++)
        {
         for(int i=0;i<N-1;i++)
         {
             if(grade[i]<grade[i+1])
             {
                 int temp=grade[i];
                 grade[i]=grade[i+1];
                 grade[i+1]=temp;


             }
            }
        }

        for(int i=0;i<N;i++)
        {
          printf("%s %d\n",name[i],grade[i]);
        }

}

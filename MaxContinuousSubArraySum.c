#include <stdio.h>
#include<stdlib.h>

int maxSubArraySum(int *ptr, int n)
{
       int mf = 0, mend = 0;

   for (int i = 0; i < n; i++)
   {
       mend = mend + ptr[i];
       if (mend < 0){

           mend = 0;

           }


       /* Do not compare for all elements. Compare only
          when  max_ending_here > 0 */
       else if (mf < mend)
       {
           mf = mend;

       }

   return mf;
}

int main()
{
int *ptr;
int n,i;
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
    scanf("%d",&ptr[i]);
}
int max_sum= maxSubArraySum(ptr,n);
printf("%d",max_sum);
return 0;
}



import java.util.Arrays;
import java.util.Scanner;
class FrustratedCoder {
    public static void main(String args[] ) throws Exception {
       Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        int a[] =new int[n];
        for(int i=0;i<n;i++)
        {
           a[i]=sc.nextInt();
        }
        Arrays.sort(a);
        int sum=0;
        /*int max = n-1;
        
        for(int i=n-1;i>0;i--)
        {
           
           if(a[i] < a[max])
           {
            max--;
           }
           else
           {
               sum=sum+a[i];
           }
        }*/
        ///second solution
        for(int i=1;i<n;i++)
        {
        	if(a[i]-a[i-1]>0)
        	{
        		a[i-1]=0;
        	}
        	else
        	{
        		int j=i-1;
        		while(j>=0)
        		{
        			if(a[j]!=0&&a[i]-a[j]>0)
        			{
        				a[j]=0;
        				break;
        			}
        			else
        				j--;
        		}
        	}
        		
        }
        
        for(int i=0;i<n;i++)
        	sum=sum+a[i];
        System.out.println(sum);
 
        sc.close();
    }
}
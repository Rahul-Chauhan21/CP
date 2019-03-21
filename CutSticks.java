
import java.util.Arrays;
import java.util.Scanner;
public class CutSticks {
	public static void main(String[] args) 
	{
		Scanner sc= new Scanner(System.in);
		
		int n=sc.nextInt();
		
		int a[]= new int[n];
		
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		
		Arrays.sort(a);
		
		int remain = n;
		   System.out.println(remain);
				
			 int shortest = a[0];
		    for (int i = 1; i < n; i++) {
		        if (a[i] != shortest) {
		            shortest = a[i];
		            remain = n - i;
		            System.out.println(remain);
		        }
		    }
		sc.close();
	}
}
	

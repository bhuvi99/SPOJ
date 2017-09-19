import java.util.Scanner;
import java.util.Arrays;
public class VOTERS{

	public static void main(String args[]){
		Scanner in = new Scanner(System.in);
		int n=in.nextInt()+in.nextInt()+in.nextInt(),i,j=0,count=0;
		int a[]= new int[n];
		int result[]= new int[n];		
		for(i=0;i<n;i++)
			a[i]=in.nextInt();
		Arrays.sort(a);
		for(i=0;i<n-1;i++)
			if(a[i]==a[i+1]){
				result[j++]=a[i];
				++i;
			}	
		System.out.println(j);
		for(i=0;i<j;i++)
			System.out.println(result[i]);	
	}
}

import java.util.Scanner;
public class RESQ{

	public static void main(String arsgs[]){
		
		Scanner in = new Scanner(System.in);
		int testcases=in.nextInt();	
		long n,a,b,ans=Long.MAX_VALUE;
		while(testcases-->0){
			n=in.nextInt();
			double sn=Math.sqrt(n);
			ans=Long.MAX_VALUE;
			for(int i=1;i<=sn;i++)
				if(n%i==0){
					a=n/i;
					ans=ans<a-i?ans:a-i;
				}
		if(n==1)
			ans=0;
		System.out.println(ans);
					
		}
	}
}

import java.util.Scanner;
public class LEPERMUT{


	public static void main(String args[]){
		
		Scanner in = new Scanner(System.in);
		int inversions,testcases=in.nextInt(),n,i,j;
		while(testcases-->0){
			n=in.nextInt();
			inversions=0;
			int a[]=new int[n];
			for(i=0;i<n;i++)
				a[i]=in.nextInt();
			for(i=0;i<n;i++){
				for(j=i+1;j<n;j++)
					if(a[i]>a[j])
						inversions++;
			}
			for(i=0;i<n-1;i++)
				if(a[i]>a[i+1])
					inversions--;
			if(inversions==0)
				System.out.println("YES");
			else
				System.out.println("NO");
			
			
			
		
		}
	}
}

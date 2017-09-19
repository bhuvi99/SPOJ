import java.util.Scanner;
public class  DIVIDING{

	public static void main(String args[]){
	
		Scanner in = new Scanner(System.in);
		int n=in.nextInt(),sum=0;
		for(int i=0;i<n;i++)
			sum+=in.nextInt();
		if(sum==(n*(n+1))/2)
			System.out.println("YES");
		else
			System.out.println("NO");
	
	}
}

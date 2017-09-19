import java.util.Scanner;
public class ERROR{


	public static void main(String args[]){
		
		Scanner in = new Scanner(System.in);
		int testcases,n,i,j;
		String s;
		char c;
		boolean good;
		testcases=in.nextInt();
		while(testcases-->0){
			s=in.next();
			n=s.length();
			good=false;
			for(i=0;i<n;i++){
				c=s.charAt(i);
				if(i+2<n&&((c=='0'&&s.charAt(i+1)=='1'&&s.charAt(i+2)=='0')||(c=='1'&&s.charAt(i+1)=='0'&&s.charAt(i+2)=='1'))){
					good=true;	
					break;
				}
					
			
			
			}			
			if(good)
				System.out.println("Good");
			else
				System.out.println("Bad");	
		}
	}
}

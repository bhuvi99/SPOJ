import java.util.Scanner;
public class RIGHTRI{
	
		static double distance(int x1,int y1,int x2,int y2){
		return (Math.pow((x1-x2),2)+Math.pow((y1-y2),2));
		}
		static boolean isRectangle(int x1,int y1,int x2, int y2, int x3, int y3){
			
			double b,c,a=distance(x1,y1,x2,y2);
				   b=distance(x2,y2,x3,y3);
				   c=distance(x1,y1,x3,y3);
				 return c==a+b||a==b+c||b==a+c;	
		}
		public static void main(String args[]){
		
			Scanner in = new Scanner(System.in);
			int t=in.nextInt(),count=0;
			while(t-->0)
				if(isRectangle(in.nextInt(),in.nextInt(),in.nextInt(),in.nextInt(),in.nextInt(),in.nextInt()))
					count++;
			System.out.println(count);
		
		}
}

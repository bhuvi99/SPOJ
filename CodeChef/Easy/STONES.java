import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Hashtable;
public class STONES{

	public static void main(String args[]) throws IOException{
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	int len_s,i,len_j,match,testcases=Integer.parseInt(br.readLine());
	String s,j;
	char c;
	while(testcases-->0){

		Hashtable<Character,Integer> hash = new Hashtable<Character,Integer>(52);	
		s=br.readLine();
		j=br.readLine();
		match=0;
		len_s=s.length();
		len_j=j.length();
		for(i=0;i<len_s;i++){
			 c= s.charAt(i);		
			if(!hash.containsKey(c))
				hash.put(c,1);
			/*else
				hash.put(c,hash.get(c)+1);
		*/}
		for(i=0;i<len_j;i++){
			c=j.charAt(i);
			if(hash.containsKey(c))
			match++;			
			
		}
		System.out.println(match);
	}

	}
}

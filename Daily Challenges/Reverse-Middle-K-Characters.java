import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		String s = sc.nextLine();
		int k = sc.nextInt();
		int len=s.length(),i=0,j=len;
		while(true){
		    String sub = s.substring(i,j);
		    if(sub.length()==k){
		        break;
		    }
		    i++;
		    j--;
		}
		String bf = s.substring(0,i);
		String af = s.substring(j,len);
		String mid = new StringBuffer(s.substring(i,j)).reverse().toString();
		System.out.print(bf+mid+af);

	}
}
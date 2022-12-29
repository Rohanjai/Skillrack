import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		int x =sc.nextInt();
		int y = sc.nextInt();
		int s = x+y;
		int ctr=0;
		while(s>0){
		    ctr++;
		    s/=10;
		}
		System.out.print((ctr==x) ? x+y : x);
        
	}
}
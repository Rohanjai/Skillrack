import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		int n =sc.nextInt();
		int s1=0,s2=0;
		for(int i=0;i<n;i++){
		    var t = sc.nextInt();
		    s1+=(t%10);
		    s2+=(t/10%10);
		}
		System.out.print(s2+" "+s1);
	}
}
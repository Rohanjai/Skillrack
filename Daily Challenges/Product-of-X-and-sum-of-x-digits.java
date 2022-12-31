import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		int n = sc.nextInt();
		int x = sc.nextInt();
		int s=0;
		while(n>0){
		    s+=(n%10);
		    n/=10;
		}
		System.out.print(s*x);

	}
}
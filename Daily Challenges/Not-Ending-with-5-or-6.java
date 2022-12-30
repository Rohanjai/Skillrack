import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		boolean print = false;
		int n =sc.nextInt();
		int x = sc.nextInt();
		for(int i=0;i<n;i++){
		    long t = sc.nextLong();
		    t=(t*t)+x;
		    if(t%10!=5 && t%10!=6){
		        System.out.print(t+" ");
		        print=true;
		    }
		}
		if(!print){
		    System.out.print(-1);
		}

	}
}
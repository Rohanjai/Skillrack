import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		int n = sc.nextInt();
		int ctr=0;
		while(n!=0){
		    if(n%2==0){
		        n/=2;
		    }
		    else{
		        n-=1;
		    }
		    ctr++;
		}
		System.out.print(ctr);

	}
}
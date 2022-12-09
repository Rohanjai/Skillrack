import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc= new Scanner(System.in);
		String s=sc.nextLine();
		int n=s.length();
		String a=s.substring(s.length()/2);
		a+=s.substring(0,s.length()/2);
		int ctr=1;
		for(int i=n;i>=1;i--){
		    for(int j=i;j>1;j--){
		        System.out.print("*");
		    }
		    if(ctr<=n){
		        System.out.println(a.substring(0,ctr++));
		    }
		}

	}
}
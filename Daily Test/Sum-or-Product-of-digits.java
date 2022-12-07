import java.util.*;
public class Hello {

    public static void main(String[] args) {
		long n=new Scanner(System.in).nextLong();
		if(n%2==1){
		    int pro=1;
		    while(n>0){
		        pro*=(n%10);
		        n/=10;
		    }
		    System.out.print(pro);
		}
		else{
		    int sum=0;
		    while(n>0){
		        sum+=(n%10);
		        n/=10;
		    }
		    System.out.print(sum);
		}

	}
}
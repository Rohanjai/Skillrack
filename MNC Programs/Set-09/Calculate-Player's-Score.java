import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int temp=n;
		int rev=0;
		if(n>0){
		    while(n!=0){
		        int rem=n%10;
		        rev=rev*10+rem;
		        n/=10;
		    }
		    System.out.print(temp-rev);
		}
		else if(n<0){
		    temp*=-1;
		    while(temp!=0){
		        int rem=temp%10;
		        rev=rev*10+rem;
		        temp/=10;
		    }
		    System.out.print(n-(rev*-1));
		}

	}
}
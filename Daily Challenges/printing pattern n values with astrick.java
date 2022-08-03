import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int ctr=1;
		for(int i=1;i<=n+n+1;i++){
		    System.out.print("*");
		}
		System.out.println();
		for(int i=0;i<n+n+1;i++){
		    if(i%2==0)
		    System.out.print("*");
		    else{
		        System.out.print(ctr);
		        ctr++;
		    }
		}
		System.out.println();
		for(int i=1;i<=n+n+1;i++){
		    System.out.print("*");
		}

	}
}

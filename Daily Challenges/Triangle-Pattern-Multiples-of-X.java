import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		int n = sc.nextInt();
		int x = sc.nextInt();
		int val=1;
		for(int i=1;i<=n;i++){
		    for(int j=1;j<=i;j++){
		        if(val%x==0)
		            System.out.print("* ");
		        else
		        System.out.print(val+" ");
		        val++;
		    }
		    System.out.println();
		}

	}
}
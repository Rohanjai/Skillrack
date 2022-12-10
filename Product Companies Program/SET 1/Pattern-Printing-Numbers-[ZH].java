import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc =new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=1;i<=n;i++){
		    int d=n,ctr=i;
		    System.out.print(ctr+" ");
		    for(int j=0;j<(n-i);j++){
		        ctr+=d;
		        System.out.print(ctr+" ");
		        d--;
		    }
		    System.out.println();
		}

	}
}
import java.util.*;
public class Hello {

    public static void main(String[] args) {
	    var sc = new Scanner(System.in);
	    int n = sc.nextInt();
	    for(int i=1;i<=n;i++){
	        var sq = i*i;
	        System.out.print(Integer.toBinaryString(sq)+" ");
	    }

	}
}
import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		int n  = sc.nextInt();
		int sum=0;
		for(int i=1;i<=n;i++){
		    if(i%2==1){
		        sum+=i;
		    }
		    else{
		        sum-=i;
		    }
		}
        System.out.print(sum);
	}
}
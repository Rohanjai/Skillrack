import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int a=sc.nextInt();
		int x=sc.nextInt();
		int y=sc.nextInt();
		int ctr=0;
		int amt=x+y;
		while(a>0){
		    if(a-amt>=0){
		        //System.out.println(a-amt);
		        ctr++;
		    }
		    a-=amt;
		}
		System.out.println(ctr);

	}
}
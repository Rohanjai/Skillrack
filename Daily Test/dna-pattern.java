import java.util.*;
public class Hello {
    
    public static void rhombus(int n){
        
        int k=0;
        
        for(int i=(n/2)-1;i>=0;i--,k+=2)
            System.out.println("-".repeat(i)+"*"+"-".repeat(k)+"*");
        
        k-=4;
        
        for(int i=1;i<(n/2)-1;i++,k-=2)
        System.out.println("-".repeat(i)+"*"+"-".repeat(k)+"*");
    }

    public static void main(String[] args) {
		
		Scanner s=new Scanner(System.in);
		
		int n=s.nextInt();
		
		for(int i=1;i<=(n/2);i++)
		rhombus(n);
		
		System.out.print("-".repeat((n/2)-1)+"**");

	}
}
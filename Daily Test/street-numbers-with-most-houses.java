import java.util.*;
public class Hello {
    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] a = new int[n];
		int max = -1;
		for(int i=0;i<n;i++){
		    String s = sc.next();
		    s = s.replace("*","");
		    a[i] = s.length();
		    if(max<a[i]){
		        max = a[i];
		    }
		}
		for(int i=0;i<n;i++){
		    if(a[i] == max){
		        System.out.print((i+1)+" ");
		    }
		}
	}
}
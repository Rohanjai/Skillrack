import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		int n = sc.nextInt();
		for(int i=0;i<n;i++){
		    char ch='A';
		    for(int j=0;j<(n-i-1);j++){
		        System.out.print("*");
		    }
		    for(int j=0;j<i+1;j++){
		        System.out.print((char)(ch+j));
		    }
		    for(int j=i-1;j>=0;j--){
		        System.out.print((char)(ch+j));
		    }
		    
		    System.out.println();
		}

	}
}

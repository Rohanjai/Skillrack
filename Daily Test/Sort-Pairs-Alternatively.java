import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
		
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		int a[] = new int[n];
		int b[] = new int[n];
		
		int c[] = new int[n];
		int id[] = new int[n];
		
		for(int i=0;i<n;i++){
		    a[i] = sc.nextInt();
		    b[i] = sc.nextInt();
		    
		    if(i%2==0) c[i] = a[i];
		    else c[i] = b[i];
		    
		    id[i] = i;
		    
		}
		
		for(int i=0;i<n;i++){
		    for(int j=1;j<(n-i);j++){
		        if(c[j-1]>c[j]){
		            
		            int t = c[j-1];
		            c[j-1] = c[j];
		            c[j] = t;
		            
		            t = id[j-1];
		            id[j-1] = id[j];
		            id[j] = t;
		            
		        }
		    }
		}
		
		
		for(int i=0;i<n;i++){
		    System.out.println(a[id[i]]+" "+b[id[i]]);
		}

	}
}

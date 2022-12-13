import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		char str[] = sc.nextLine().toCharArray();
		int i,j;
		for(i=0,j=str.length-1;i<j;i++,j--){
		    System.out.print(str[i]+""+str[j]);
		    if(str[i]==str[j]){
		        return;
		    }
		}
		if(str.length%2==1){
		    System.out.print(str[i]);
		}

	}
}
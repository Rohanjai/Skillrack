import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		char s1[]=sc.nextLine().toCharArray();
		char s2[]=sc.nextLine().toCharArray();
		int ctr=0;
		for(int i=0;i<s1.length;i++){
		    if(s1[i]==s2[ctr]){
		        ctr++;
		    }
		    if(ctr==s2.length){
		        break;
		    }
		}
		if(ctr==s2.length){
		    System.out.print("YES");
		}
		else{
		    System.out.print("NO");
		}

	}
}
import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		int way=1,pre=1;
		char s[] = sc.nextLine().toCharArray();
		int l = s.length;
		if(s[l-1]=='0'){
		    way=0;
		}
		for(int i=l-2;i>=0;i--){
		    int b=pre;
		    pre=way;
		    if(s[i]=='0'){
		        way=0;
		        continue;
		    }
		    int n=Integer.parseInt(s[i]+""+s[i+1]);
		    if(n<=26){
		        way+=b;
		    }
		}
		System.out.print(way);
	}
}
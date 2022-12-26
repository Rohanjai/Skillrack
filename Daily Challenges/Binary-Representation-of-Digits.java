import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		String s = sc.nextLine();
		for(int i=0;i<s.length();i++){
		    int x = Integer.parseInt(String.valueOf(s.charAt(i)));
		    String ans = Integer.toBinaryString(x);
		    for(int j=ans.length();j<4;j++){
		        System.out.print("0");
		    }
		    System.out.println(ans);
		}

	}
}
import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		String s = sc.nextLine();
		for(int i=0;i<s.length();i++){
		    for(int j=0;j<=i;j++){
		        System.out.print(s.charAt(i));
		    }
		    System.out.println();
		}

	}
}
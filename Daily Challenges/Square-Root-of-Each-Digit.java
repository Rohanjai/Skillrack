import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		String s = sc.nextLine();
		for(int i=0;i<s.length();i++){
		    int x = Integer.parseInt(String.valueOf(s.charAt(i)));
		    System.out.printf("%.2f ",Math.sqrt(x));
		}

	}
}
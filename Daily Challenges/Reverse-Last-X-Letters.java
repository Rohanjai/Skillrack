import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		String s = sc.nextLine();
		int n = sc.nextInt();
		String s2 = s.substring(s.length()-n);
		StringBuilder b = new StringBuilder(s2);
		System.out.print(s.substring(0,s.length()-n)+""+b.reverse().toString());

	}
}
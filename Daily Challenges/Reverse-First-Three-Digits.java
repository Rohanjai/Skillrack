import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		String s = sc.nextLine();
		System.out.println((Integer.parseInt(new StringBuilder(s).reverse().toString().substring(s.length()-3,s.length()))));

	}
}
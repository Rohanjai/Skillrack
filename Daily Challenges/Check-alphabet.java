import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		String s = sc.nextLine();
		int x=sc.nextInt();
		char ch ='a';
		ch+=x;
		ch--;
		System.out.print(s.contains(Character.toString(ch)) ? "yes" : "no");

	}
}
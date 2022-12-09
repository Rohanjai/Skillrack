import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		String s=sc.nextLine();
		int x=sc.nextInt();
		StringBuffer b = new StringBuffer(s.substring(s.length()-x));
		System.out.print(s.substring(0,s.length()-x));
        System.out.print(b.reverse().toString());
	}
}
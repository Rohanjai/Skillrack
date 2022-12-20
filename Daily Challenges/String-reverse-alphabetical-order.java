import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		char s[] = sc.nextLine().toCharArray();
		Arrays.sort(s);
		String ans = new String(s);
		for(int i=ans.length()-1;i>=0;i--)
		System.out.print(ans.charAt(i));


	}
}
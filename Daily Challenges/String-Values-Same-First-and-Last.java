import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		char s1[]=sc.nextLine().toCharArray();
		char s2[]= sc.nextLine().toCharArray();
		System.out.print(((s1[0]==s2[0])&&(s1[s1.length-1]==s2[s2.length-1])) ? "YES" : "NO");

	}
}
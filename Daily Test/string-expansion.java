import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		for(int i=1;i<=s.length();i++){
		    System.out.print(s.substring(0,i));
		}

	}
}
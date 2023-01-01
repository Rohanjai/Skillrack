import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		String s = sc.nextLine();
		for(int i=0;i<s.length();i++){
		    int x=Integer.parseInt(Character.toString(s.charAt(i)));
		    for(int j=0;j<x;j++){
		        System.out.print(s.charAt(i));
		    }
		}

	}
}

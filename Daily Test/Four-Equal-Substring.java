import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		String s = sc.nextLine();
		String sub = s.substring(0,s.length()/4);
		String t="";
		for(int i=0;i<4;i++){
		    t+=sub;
		}
		if(s.equals(t)){
		    System.out.print("yes");
		    return;
		}
		System.out.print("no");

	}
}
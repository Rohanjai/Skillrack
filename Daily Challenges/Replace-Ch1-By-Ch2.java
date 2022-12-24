import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		String s = sc.nextLine();
		char ch1=sc.next().charAt(0);
		char ch2=sc.next().charAt(0);
		for(int i=0;i<s.length();i++){
		    if(s.charAt(i)==ch1){
		        System.out.print(ch2);
		    }
		    else{
		        System.out.print(s.charAt(i));
		    }
		}

	}
}
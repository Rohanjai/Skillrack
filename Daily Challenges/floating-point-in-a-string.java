import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
public class Hello {

    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
        Pattern pat=Pattern.compile("[0-9]*\\.[0-9]*");
        Matcher m=pat.matcher(s);
        while(m.find()){
            System.out.println(m.group());
        }

	}
}
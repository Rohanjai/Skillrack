import java.util.*;
public class Hello {
    public static int countcons(String S){
        int ctr=0;
        for(int i=0;i<S.length();i++){
            char ch = Character.toLowerCase(S.charAt(i));
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                continue;
            }
            else{
                ctr++;
            }
        }
        return ctr;
    }
    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		String s1 = sc.nextLine();
		String s2 = sc.nextLine();
        if(countcons(s1)>countcons(s2)){
            System.out.println(s1);
        }
        else if(countcons(s2)>countcons(s1)){
            System.out.print(s2);
        }
        else{
            System.out.print( (s1.length()> s2.length()) ? s1:s2 );
        }
	}
}
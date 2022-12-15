import java.util.*;
public class Hello {
    public static boolean isVowel(char ch){
        ch = Character.toLowerCase(ch);
        if(ch=='a' || ch=='e' || ch=='i' ||ch=='o' ||ch=='u'){
            return true;
        }
        return false;
    }
    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		char s[] = sc.nextLine().toCharArray();
		for(int i=0;i<s.length;i++){
		    if(isVowel(s[i])){
		        if(Character.isUpperCase(s[i])){
		            System.out.print(Character.toLowerCase(s[i]));
		        }
		        else{
		            System.out.print(Character.toUpperCase(s[i]));
		        }
		    }
		    else{
		        System.out.print(s[i]);
		    }
		}
		

	}
}
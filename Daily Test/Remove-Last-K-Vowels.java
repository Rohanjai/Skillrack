import java.util.*;
public class Hello {
    public static boolean isVowel(char ch){
        ch=Character.toLowerCase(ch);
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		char s[] = sc.next().toCharArray();
		int l = s.length;
        int k = sc.nextInt();
        int j=0;
        for(int i=l-1;i>=0;i--){
            if(isVowel(s[i]) && j<k){
                s[i]='@';
                j++;
                continue;
            }
            
        }
        for(char c:s){
            if(c!='@'){
                System.out.print(c);
            }
        }
	}
}
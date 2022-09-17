import java.util.*;
public class Hello {
    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s1=sc.nextLine();
		int len=s1.length();
		StringBuilder sb=new StringBuilder(s1);
		sb.reverse();
		String s2=sb.toString();
		char [][]pat=new char[len][len];
		for(int i=0;i<len;i++){
		    for(int j=0;j<len;j++){
		        pat[i][j]='*';
		    }
		}
		for(int i=0;i<len;i++){
		    pat[len/2][i]=s1.charAt(i);
		    pat[i][len/2]=s1.charAt(i);
		    pat[i][i]=s2.charAt(i);
		    pat[i][len-i-1]=s2.charAt(i);
		}
		for(int i=0;i<len;i++){
		    for(int j=0;j<len;j++){
		        System.out.print(pat[i][j]);
		    }
		    System.out.println();
		}

	}
}
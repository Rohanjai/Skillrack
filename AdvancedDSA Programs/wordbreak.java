/*
This method is using backtracking method
*/ 

import java.util.*;
public class Hello {
    public static void wordBreak(int n,List<String> dict,String s){
        String ans="";
        wordBreakUtil(n,s,dict,ans);
    }
    public static void wordBreakUtil(int n,String s,List<String> dict,String ans){
        for(int i=1;i<=n;i++){
            String prefix=s.substring(0,i);
            if(dict.contains(prefix)){
                if(i==n){
                    ans+=prefix;
                    System.out.println(ans);
                    return;
                }
                wordBreakUtil(n-i,s.substring(i,n),dict,ans+prefix+" ");
            }
        }
    }
    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s1=sc.nextLine();
		String s[]=s1.split(" ");
		String s2=sc.nextLine();
		int n1=s2.length();
		//System.out.println(s2);
		List<String> dict=Arrays.asList(s);
		wordBreak(n1,dict,s2);

	}
}
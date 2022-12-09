import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc=new Scanner(System.in);
		String s=sc.nextLine();
		int n=s.length();
		if(n%2==1){
		    String s1=s.substring(0,(n/2)+1);
		    String s2=s.substring(n/2,n);
		    StringBuffer a = new StringBuffer(s1);
		    StringBuffer b = new StringBuffer(s2);
		    String s4=a.reverse().toString();
		    String s3=b.reverse().toString();
		    if(s3.equals(s2)){
		        System.out.print(s3);
		    }
		    if(s1.equals(s4)){
		        System.out.print(s4);
		    }
		}
		else{
		    String s1=s.substring(0,n/2);
		    String s2=s.substring(n/2,n);
		    StringBuffer a=new StringBuffer(s1);
		    StringBuffer b = new StringBuffer(s2);
		    String s3=b.reverse().toString();
		    String s4=a.reverse().toString();
		    if(s3.equals(s2)){
		        System.out.print(s3);
		    }
		    if(s1.equals(s4)){
		        System.out.print(s4);
		    }
		}

	}
}
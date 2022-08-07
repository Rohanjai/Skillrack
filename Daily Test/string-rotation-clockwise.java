import java.util.*;
public class Hello {
    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String a=sc.nextLine();
		String b=sc.nextLine();
		boolean flag=false;
		String res="";
		for(int i=0;i<b.length();i++)
		{
		    res=b.substring(i,b.length())+b.substring(0,i);
		    if(res.equals(a))
		    {
		        flag=true;
		    }
		    else{
		        res="";
		    }
		}
		if(flag)
		{
		    System.out.print("YES");
		}
		else{
		    System.out.print("NO");
		}

	}
}
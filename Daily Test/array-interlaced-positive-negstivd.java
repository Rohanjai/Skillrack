import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int min=101;
		sc.nextLine();
		String[] a=new String[n];
		for(int i=0;i<n;++i) {
		    String s=sc.nextLine();
		    min=Math.min(s.length(),min);
		    a[i]=s;
		}
        int i=0;
        String res="";
        while(i<min) {
            char ch=a[0].charAt(i);
            int f=0;
            for(int j=1;j<n;++j) {
                if(a[j].charAt(i)!=ch) {
                    f=1;
                    break;
                }
            }
            if(f==0) res+=ch;
            i++;
        }
        System.out.print(res.length()>0?res:-1);
    }
}
import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int R = sc.nextInt(), C=sc.nextInt();
		char[][] m = new char[R][C];
		for(int i=0; i<R; i++){
		    for(int j=0; j<C; j++){
		        m[i][j] = sc.next().charAt(0);
		    }
		}
		String N = Integer.toBinaryString(sc.nextInt());
		int len = N.length(), count=0;
		for(int i=0; i<R; i++){
		    String s="";
		    for(int j=0; j<C; j++){
		        s+=m[i][j];
		    }
		    for(int j=0; j<=s.length()-len; j++){
		        String sub = s.substring(j,len+j);
		        if(sub.equals(N))   count++;
		    }
		}
		for(int i=0; i<C; i++){
		    String c="";
		    for(int j=0; j<R; j++){
		        c+=m[j][i];
		    }
		    for(int j=0; j<=c.length()-len; j++){
		        String cSub = c.substring(j,len+j);
		        if(cSub.equals(N))  count++;
		    }
		}
		System.out.println(count);
	}
}
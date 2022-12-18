import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		boolean odd=true;
		String s = sc.nextLine();
		int y = Integer.parseInt(String.valueOf(s.charAt(0)));
		if(y%2==0){
		    odd=false;
		    System.out.print(y);
		}
		else{
		    System.out.print(y);
		}
		for(int i=1;i<s.length();i++){
		    int x = Integer.parseInt(String.valueOf(s.charAt(i)));
		    if(x%2==0 && odd){
		        break;
		    }
		    else if(x%2!=0 && !odd){
		        break;
		    }
		    if(x%2==0 && !odd){
		        System.out.print(x);
		    }
		    else{
		        System.out.print(x);
		    }
		}

	}
}
import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		char s[]=sc.nextLine().toCharArray();
		int index=0,ctr;
		boolean flag=false;
		for(int i=0;i<s.length;i++){
		    index+=i;
		    ctr=i;
		    for(int j=0;j<=i;j++){
		        if(index+ctr<s.length){
		            System.out.print(s[index + ctr]+" ");
		        }
		        else{
		            System.out.print("* ");
		            flag=true;
		        }
		        ctr-=1;
		    }
		    
		    if(flag==true || index+i==s.length-1){
		        break;
		    }
		    System.out.println();
		}

	}
}
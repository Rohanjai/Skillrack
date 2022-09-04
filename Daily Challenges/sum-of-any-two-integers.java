import java.util.*;
public class Hello {

    public static void main(String[] args) {
	   Scanner in=new Scanner(System.in);
	   int a=in.nextInt();
	   in.nextLine();
	   String s=in.nextLine();
	   String[] s1=s.split("\\s+");
       List<Integer> b=new ArrayList<Integer>();
	   for(String d:s1){
	       int as=Integer.valueOf(d);
	       b.add(as);
	   }
	   Collections.sort(b);
	   for(int i=0; i<b.size()-1; i++){
	       for(int j=i+1; j<b.size(); j++){
	               if(b.get(i)+b.get(j)==a){
	               System.out.println(b.get(i)+" "+b.get(j));
	               b.set(j,-10000000);
	               break;
	           }
	       }
	   }

	}
}
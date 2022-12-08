import java.util.*;
public class Hello {

    public static void main(String[] args) {
		ArrayList<Integer> l =new ArrayList<>();
		var sc=new Scanner(System.in);
		while(sc.hasNext()){
		    l.add(sc.nextInt());
		}
		int pro=1;
        for(int i:l){
            pro*=i;
        }
        for(int i:l){
            System.out.print(pro/i +" ");
        }
        
	}
}
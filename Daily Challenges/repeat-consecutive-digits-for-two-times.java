import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		long n=sc.nextLong();
		ArrayList<Long> l=new ArrayList<>();
		while(n!=0){
		    l.add(n%10);
		    n/=10;
		}
		Collections.reverse(l);
		for(int i=0;i<l.size();i++){
		    int occurance=Collections.frequency(l,l.get(i));
		    if(occurance>1){
		        System.out.print(l.get(i));
		    }
		    else if(occurance==1){
		        String temp=Long.toString(l.get(i));
		        System.out.print(temp+temp);
		    }
		}

	}
}
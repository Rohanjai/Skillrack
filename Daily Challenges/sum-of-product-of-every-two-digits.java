import java.util.*;
public class Hello {
    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		long n=sc.nextLong();
		int digits=0;
		long temp=n;
		long sum=0;
		while(temp!=0){
		    temp/=10;
		    digits++;
		}
		ArrayList<Long> l=new ArrayList<>();
        if(digits%2!=0){
            l.add(n%10);
            n/=10;
            while(n!=0){
                l.add(n%100);
                n/=100;
            }
            Collections.reverse(l);
            for(int i=0;i<l.size();i+=2){
                long ans1=l.get(i);
                if(i+1<l.size()){
                    long ans2=l.get(i+1);
                    sum+=ans1*ans2;
                }
                if(i==l.size()-1){
                    sum+=ans1;
                }
            }
        }
        else{
            while(n!=0){
                l.add(n%100);
                n/=100;
            }
            Collections.reverse(l);
            for(int i=0;i<l.size();i+=2){
                long ans1=l.get(i);
                if(i+1<l.size()){
                    long ans2=l.get(i+1);
                    sum+=ans1*ans2;
                }
                if(i==l.size()-1){
                    sum+=ans1;
                }
            }
        }
        System.out.print(sum);
	}
}
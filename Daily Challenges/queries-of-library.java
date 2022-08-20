import java.util.*;
public class Hello {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int num=sc.nextInt();
        TreeMap<Integer,Integer>counter=new TreeMap<>(Collections.reverseOrder());
        int max=-1;
        for(int ind=0;ind<num;ind++)
        {
            int val=sc.nextInt();
            int abs=Math.abs(val);
            if(counter.containsKey(abs))
            {
                int fin_val=counter.get(abs);
                fin_val+=val;
                counter.put(abs,fin_val);
            }
            else
            {
                counter.put(abs,val);
            }
        }
        
        for(Integer ans:counter.keySet())
        {
            int temp=counter.get(ans);
            if(temp/ans>max)
            {
                max=temp/ans;
            }
        }
        for(Integer ans:counter.keySet())
        {
            int temp=counter.get(ans);
            if(temp/ans==max)
            System.out.print(ans+" ");
        }
	}
}
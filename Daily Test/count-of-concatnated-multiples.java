import java.util.*;
public class Hello
{

    public static void main(String[] args) 
    {
		Scanner sc=new Scanner(System.in);
		int N=sc.nextInt(),X=sc.nextInt();
		int array[]=new int[N];
		for(int i=0;i<N;i++)
		   array[i]=sc.nextInt();
		int counter=0;
		for(int i=0;i<N;i++)
		{
		    for(int j=0;j<N;j++)
		    {
		        if(i!=j)
		        {
		            int A=Integer.parseInt(""+array[i]+array[j]);
		            if(A%X==0)
		               counter++;
		        }
		    }
		}
		System.out.print(counter);

	}
}
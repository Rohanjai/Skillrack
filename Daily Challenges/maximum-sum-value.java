import java.util.*;
public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
    
        int[] arr = new int[n];
        for(int i = 0 ; i<n ;i++)
        {
            arr[i] = sc.nextInt();
        }
        
        int max = arr[0];
        int count = arr[0];
       
        for(int i = 0 ;i<n-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
                count+=arr[i+1];
             
            }
            else
            {
                count=arr[i+1];
            }
            if(count>max)
            max=count;
        }
      
        System.out.print(max);
    }
}
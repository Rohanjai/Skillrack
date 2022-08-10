import java.util.*;
public class Hello {

    public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String[] arr = sc.nextLine().split("\\s+");
		while(sc.hasNext()){
		    int n = sc.nextInt()%arr.length;
		    int index = n;
		    do{
		        System.out.print(arr[index]+" ");
		        index = (++index)%arr.length;
		    }while(index!=n);
		    System.out.println();
		}
	}
}
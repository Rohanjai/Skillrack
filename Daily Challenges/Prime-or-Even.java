import java.util.*;
public class Hello {
    public static boolean isPrime(int n){
        if(n == 1){
            return false;
        }
        else if(n==2){
            return true;
        }
        else{
            for(int i=2;i<=Math.sqrt(n);i++){
                if(n%i==0){
                    return false;
                }
            }
        }
        return true;
    }
    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		int n = sc.nextInt();
		System.out.print((isPrime(n) || n%2==0) ? "valid" : "invalid");

	}
}
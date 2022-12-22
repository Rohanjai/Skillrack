import java.util.*;
public class Hello {

    public static void main(String[] args) {
		var sc = new Scanner(System.in);
		int n = sc.nextInt();
		String bin = Integer.toBinaryString(n);
		int l = bin.length(),s=1,ls=l-2;
		System.out.println(bin);
        for(int i=1;i<l-1;i++){
            for(int j=0;j<l;j++){
                if(i!=0 && j!=0 && i!=l-1 && j!=l-1){
                    System.out.print("*");
                }
                else{
                    if(j==0)
                    System.out.print(bin.charAt(s++));
                    else if(j==l-1)
                    System.out.print(bin.charAt(ls--));
                }
            }
            System.out.println();
        }
        System.out.print(new StringBuffer(bin).reverse().toString());
	}
}
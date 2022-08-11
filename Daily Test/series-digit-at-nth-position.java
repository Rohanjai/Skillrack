import java.util.*;
class Hello{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int m=sc.nextInt();
        int n=sc.nextInt();
        String s="";
        for(int i=1;i<=m;i++){
            s+=Integer.toString(i);
        }
        System.out.print(s.charAt(n-1));
    }
}
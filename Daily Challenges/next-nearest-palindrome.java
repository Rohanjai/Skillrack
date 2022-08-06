import java.util.*;
public class Hello {
    public static String nearestPali(long x){
        String s=String.valueOf(x);
        int len=s.length();
        StringBuilder sb=new StringBuilder();
        sb.append(s.substring(0,(len+1)/2));
        long small,medium,large,start=Long.valueOf(s);
        if(start<=11){
            return String.valueOf(start==11 ? 9 : start -1);
        }
        long fhalf=Long.valueOf(sb.toString());
        if(len%2==0){
            medium=getPaliHalf(fhalf,null);
            if(s.charAt(len/2-1)=='0' && isPowerOf10(fhalf)){
                small=getPaliHalf(fhalf-1,null)*10+9;
            }
            else{
                small=getPaliHalf(fhalf-1,null);
            }
            if(s.charAt(len/2-1)=='9' && isPowerOf10(fhalf+1)){
                large=getPaliHalf(fhalf+1,"mid");
            }
            else{
                large=getPaliHalf(fhalf+1,null);
            }
        }
        else{
            medium=getPaliHalf(fhalf,"mid");
            if(s.charAt(len/2)=='0' && isPowerOf10(fhalf)){
                small=getPaliHalf(fhalf-1,null);
            }
            else{
                small=getPaliHalf(fhalf-1,"mid");
            }
            if(s.charAt(len/2)=='9' && isPowerOf10(fhalf+1)){
                large=getPaliHalf((fhalf+1)/10,null);
            }
            else{
                large=getPaliHalf(fhalf+1,"mid");
            }
        }
        return smallPali(start,small,medium,large);
    }
    public static long getPaliHalf(long x,String s){
        StringBuilder sb = new StringBuilder(String.valueOf(x));
        sb.append(new StringBuilder(sb).reverse());
        if(s != null){
        sb.deleteCharAt(sb.length()/2);
        }
        return Long.valueOf(sb.toString());
    }
    public static String smallPali(long start,long small,long medium,long large){
        Long diff=Math.abs(start-small), res=small;
        if(diff>Math.abs(start-medium) && Math.abs(start-medium)>0){
            diff=Math.abs(start-medium);
            res=medium;
        }
        if(diff > Math.abs(start-large)){
            res=large;
        }
        return String.valueOf(res);
    }
    public static boolean isPowerOf10(long x){
        while(x%10 == 0){
            x/=10;
        }
        if(x==1){
            return true;
        }
        return false;
    }

    public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.print(nearestPali(sc.nextLong()));
    }
}
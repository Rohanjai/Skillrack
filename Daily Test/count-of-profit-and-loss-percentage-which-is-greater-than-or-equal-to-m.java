import java.util.*;
public class Hello {
    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		double[] profit=new double[n];
		double[] loss=new double[n];
		int pctr=0,lctr=0,cp,sp;
		for(int i=0;i<n;i++){
		    cp=sc.nextInt();
		    sp=sc.nextInt();
		    if(cp<sp){
		        profit[i]=((sp-cp)*100)/cp;
		        loss[i]=0;
		    }
		    else{
		        loss[i]=((cp-sp)*100)/cp;
		        profit[i]=0;
		    }
		}
		int m=sc.nextInt();
		for(int i=0;i<n;i++){
		    if(profit[i]>=m){
		        pctr++;
		    }
		    if(loss[i]>=m){
		       lctr++;
		    }
		}
		System.out.print(pctr+" "+lctr);

	}
}
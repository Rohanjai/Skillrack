  public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int i;
		for(i=1;i<=n;i++){
		    for(int j=1;j<i;j++){
		        System.out.print("*");
		    }
		    System.out.print(i);
		    for(int j=1;j<=((n-i)*2-1);j++){
		        System.out.print("*");
		    }
		    if(i==n){
		        for(int j=1;j<i;j++){
		            System.out.print("*");
		        }
		    }
		    if(i!=n){
		        System.out.print(i);
		        for(int j=1;j<i;j++){
		            System.out.print("*");
		        }
		    }
		    System.out.println();
		}
		for(i=n-1;i>=1;i--){
		    for(int j=1;j<i;j++){
		        System.out.print("*");
		    }
		    System.out.print(i);
		    for(int j=0;j<((n-i)*2-1);j++){
		        System.out.print("*");
		    }
		    System.out.print(i);
		    for(int j=1;j<i;j++){
		        System.out.print("*");
		    }
		    System.out.println();
		}

	}
}
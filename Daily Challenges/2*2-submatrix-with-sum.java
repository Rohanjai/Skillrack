class Hello{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int r=sc.nextInt();
        int c=sc.nextInt();
        int arr[][]=new int[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        int sum=sc.nextInt();
        int temp;
        for(int i=0;i<r-1;i++){
            for(int j=0;j<c-1;j++){
                temp=arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i+1][j+1];
                if(temp==sum){
                    System.out.println(arr[i][j]+" "+arr[i][j+1]);
                    System.out.print(arr[i+1][j]+" "+arr[i+1][j+1]);
                    return;
                }
            }
        }
    }
}

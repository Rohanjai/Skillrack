N=int(input())
arr=list(map(int,input().split()))
print(*[num for num in arr if num%2!=0],*[num for num in arr if num%2==0])
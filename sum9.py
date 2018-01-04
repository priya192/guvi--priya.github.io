n = int(input("enter array size"))
k = int(input("enter any no."))
arr = []
sum=0
for i in range(1,n+1):
    arr.append(int(input("")))

print(arr)
for i in range(0,k):
    sum += arr[i]

print(sum)
    

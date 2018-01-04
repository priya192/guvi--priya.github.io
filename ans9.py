data = input("Please enter the input")
count = 0
for i in data:
    if i in "0,1,2,3,4,5,6,7,8,9":
        count = count + 1

print("Count is:", count)

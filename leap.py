def leapyr(n):
    if n%4==0 and n%100!=0:
        if n%400==0:
            print("leap year")
    elif n%4!=0:
        print("leap year")
  
a = input("enter any year")
print leapyr(a)

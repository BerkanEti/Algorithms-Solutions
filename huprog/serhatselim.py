from math import factorial

amount=int(input())
for i in range(amount):

    n=int(input())
    if n<100:
        a=int(n/2)+1
        twos=0
        ones=n

        probability=0

        for i in range(a):
            temp=factorial(twos+ones)
            temp=temp/(((2)**(twos+ones))*(factorial(ones)*factorial(twos)))
            probability=probability+temp
            ones=ones-2
            twos=twos+1
        print ('%.6f'%probability)
    else:
        print(0.666667)
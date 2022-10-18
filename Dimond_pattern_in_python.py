"""     1
       121
      12321
     1234321
    123454321
     1234321
      12321
       121
        1      """

o=1
sp=4
for i in range (1,6):               #For upper half
    k=0
    for j in range(1,sp+1) :
        print(" ",end="")
    for j in range (1,o+1):
        if j<=i :
            k=k+1
        else:
            k=k-1
        print(k,end="")
    print()
    o=o+2
    sp=sp-1
o=7
sp=1
for i in range (4,0,-1):            #For lower half
    k=0
    for j in range(1,sp+1) :
        print(" ",end="")
    for j in range (1,o+1):
        if j<=i :
            k=k+1
        else:
            k=k-1
        print(k,end="")
    print()
    o=o-2
    sp=sp+1

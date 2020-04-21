'''
R B C D E
2E>C+D交换，否则不交换
'''
r_,b_,c_,d_,e_=input().split()
r=int(r_)
b=int(b_)
c=int(c_)
d=int(d_)
e=int(e_)
if r>b:
    if 2*e>c+d:
        print((r-b)*c+2*e*b)
    else:
        print(r*c+b*d)
else:
    if 2*e > c+d:
        print((b-r)*d+2*e*r)
    else:
        print(r*c+b*d)

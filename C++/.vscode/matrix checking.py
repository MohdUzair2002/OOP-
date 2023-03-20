# a=int (input("enter the no of rows "))
# i=0
# m=[]
# while (i<a):
#    c=[]
#    j=0
#    while (j<a):
#        d=int(input(f"Enter the elemnt{i}{j}"))
#        c.append(d)
#        j+=1
#    m.append(c)
#    i+=1
# print(m)
# from re import S

M=[[1,2,3],[24,4,6],[7,8,9]]

def Gauss_Jordan(M):
    n=len(M) 
    r_muultiplly=lambda r,s:[s*i for i in r]
    r_subtract=lambda r1,r2:[r1[i]-r2[i] for i in range (len(r1))]                                  
    for j in range (n):
        for i in range (n):
            if i!=j:
                M[i]=r_subtract(M[i],r_muultiplly(M[j],M[i][j]/M[j][j]))
            else:
                M[i]=r_muultiplly(M[i],1/M[i][j])
    print(M)
print(Gauss_Jordan(M))
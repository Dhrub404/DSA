# pattern 

# : square 
# n=int(input("Enter the number"))
# for i in range (n):
    
#     for j in range (n):
#         print("* ",end="")
#     print()    


# HOLLOW square
# n=int(input("ENTER the number"))
# for i in range (n):
#     for j in range (n):
#         if(i==0 or i==n-1 or j==0 or j==n-1):
#             print("* ",end="")
#         else:
#             print("  ",end="")
#     print()


# for i in range (3):
#     for j in range (3):
#         print(i+1,end=" ")
#     print()


# for i in range (3):
#     for j in range (3):
#         print(j+1, end=" ")
#     print()


# a=1
# for i in range (3):
#     for j in range (3):
#         print(a, end=" ")
#         a+=1
#     print()



# k=1
# for i in range (1,5):
#     for j in range(1,i):
#         print(k, end=" ")
#         k+=1
#     print()


# inverse numeric pyramid
num=1
for i in range (5,1,-1):
    for j in range (i):
        print(" ", end="")
    for j  in range (i):
        print (num, end=" ")
        num+=1
    print()
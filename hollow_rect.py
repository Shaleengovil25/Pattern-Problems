def hollow_rectangle(n, m):

for i in range(1, n+1):

for j in range(1, m+1):

if(i == 1 or i == n or j == 1 or j == m):

print(“*”, end = “”)

else:

print(” “, end = “”)

print()



rows = int(input(“Enter the number of rows : “))

columns = int(input(“Enter the number of columns : “))

hollow_rectangle(rows, columns)

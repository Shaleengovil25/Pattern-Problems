# Python3 program to print the given pattern
def pattern(n):
# For traversing of rows
for i in range(1, n+1):
	# For traversing of columns
	for j in range(1, n+1):
	# Conditions for left-diagonal and right-diagonal
	if i == j or i+j == n+1:
		if i+j == (n+1):
		print('/', end = '')
		else:
		print('\\', end = '')
	else:
		print('*', end = '')
	print('')
	
if __name__ == '__main__':
n = 8
pattern(n)


import math
print('Hello, welcome to the 2nd-degree equations solving program!')
print('A 2nd-degree equation has the form: ax^2 + bx + c !')
a = int(input('Enter a: '))
b = int(input('Enter b: '))
c = int(input('Enter c: '))
if a==0:
	if b==0:
		if c==0:
			print('The equation is true for all real numbers!')
		else:
			print('No solution!')
	else:
		if c==0:
			print('The solution is x = 0!')
		else:
			print('The solution is x = ' + str(-c/b))
else:
	if b==0:
		if c==0:
			print('The solution is x = 0!')
		elif c>0:
			print('No solution!')
		else:
			print('The solutions are:\n x1 = ' + str(math.sqrt(-c/a)))
			print('\nx2 = ' + str(-math.sqrt(-c/a)))
	else:
		delta = b*b-4*a*c
		ans1 = (math.sqrt(delta)*(-1)-b)/(2*a)
		ans2 = (math.sqrt(delta)-b)/(2*a)
		print('The solutions are:\nx1 = ' + str(ans1))
		print('\nx2 = ' + str(ans2))


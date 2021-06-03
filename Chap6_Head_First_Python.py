def sanitize(times):
	if '-' in times:
		splitter = '-'
	elif ':' in times:
		splitter = ':'
	else:
		return times
	(mins, secs) = times.split(splitter)
	return (mins + '.' + secs)
try:
	name = []
	birthday = []
	with open('C:/Users/Admin/Documents/Python/james2.txt') as data1:
		data = data1.readline()
		(n, b, d) = data.strip().split(',',2)
		name.append(n)
		birthday.append(b)
		james = d.split(',')
		new_james = [sanitize(i) for i in james]
		print(name[0] + "'s fastest times are: " + str(sorted(set(new_james))[0:3]))
	with open('C:/Users/Admin/Documents/Python/julie2.txt') as data2:
		data = data2.readline()
		(n, b, d) = data.strip().split(',',2)
		name.append(n)
		birthday.append(b)
		julie = d.split(',')
		new_julie = [sanitize(i) for i in julie]
		print(name[1] + "'s fastest times are: " + str(sorted(set(new_julie))[0:3]))	
	with open('C:/Users/Admin/Documents/Python/mikey2.txt') as data3:
		data = data3.readline()
		(n, b, d) = data.strip().split(',',2)
		name.append(n)
		birthday.append(b)
		mikey = d.split(',')
		new_mikey = [sanitize(i) for i in mikey]
		print(name[2] + "'s fastest times are: " + str(sorted(set(new_mikey))[0:3]))
	with open('C:/Users/Admin/Documents/Python/sarah2.txt') as data4:
		data = data4.readline()
		(n, b, d) = data.strip().split(',',2)
		name.append(n)
		birthday.append(b)
		sarah = d.split(',')
		new_sarah = [sanitize(i) for i in sarah]
		print(name[3] + "'s fastest times are: " + str(sorted(set(new_sarah))[0:3]))
except IOError as e:
	print("File error: " + str(e)) 
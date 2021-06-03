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
	with open('C:/Users/Admin/Documents/Python/james.txt') as file1:
		data = file1.readline()
		james = data.strip().split(',')
		new_james = []
		for i in james:
			new_james.append(sanitize(i))
	with open('C:/Users/Admin/Documents/Python/julie.txt') as file2:
		data = file2.readline()
		julie = data.strip().split(',')
		new_julie = []
		for i in julie:
			new_julie.append(sanitize(i))
	with open('C:/Users/Admin/Documents/Python/mikey.txt') as file3:
		data = file3.readline()
		mikey = data.strip().split(',')
		new_mikey = []
		for i in mikey:
			new_mikey.append(sanitize(i))
	with open('C:/Users/Admin/Documents/Python/sarah.txt') as file4:
		data = file4.readline()
		sarah = data.strip().split(',')
		new_sarah = [sanitize(i) for i in sarah]
	print(sorted(set(new_james), reverse=True))
	print(sorted(set(new_julie), reverse=True))
	print(sorted(set(new_mikey), reverse=True))
	print(sorted(set(new_sarah), reverse=True))
except NameError as name:
	print('File error: ' + str(name))


class AthleteList (list):
	def __init__(self, a_name, a_dob = 0, a_times = []):
		list.__init__([])
		self.name = a_name
		self.dob = a_dob
		self.times = a_times
	def top3(self):
		return (sorted(set(sanitize(i) for i in self.times))[0:3])
def sanitize(times):
	if ':' in times:
		splitter = ':'
	elif '-' in times:
		splitter = '-'
	else:
		return times
	(mins, secs) = times.split(splitter)
	return (mins + '.' + secs)
def get_data(filename):
	try:
		with open(filename) as d:
			data = d.readline()
			(name, dob, ath) = data.strip().split(',',2)
			athlete = []
			athlete = ath.split(',')
			a = AthleteList(name, dob, athlete)
			return a		
	except IOError as er:
		print('File error' + str(er))		
james = get_data('C:/Users/Admin/Documents/Python/james2.txt') 
julie = get_data('C:/Users/Admin/Documents/Python/julie2.txt') 
mikey = get_data('C:/Users/Admin/Documents/Python/mikey2.txt') 
sarah = get_data('C:/Users/Admin/Documents/Python/sarah2.txt') 
print(james.name + "'s fastest times are: " + str(james.top3()))
print(julie.name + "'s fastest times are: " + str(julie.top3()))
print(mikey.name + "'s fastest times are: " + str(mikey.top3()))
print(sarah.name + "'s fastest times are: " + str(sarah.top3()))
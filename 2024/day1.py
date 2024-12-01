f = open("a")
x = f.readlines()
a = 0
y = [int(i[0:5]) for i in x]; y.sort()
z = [int(i[8:13]) for i in x]; z.sort()
for i in range(len(x)):
				a += abs(y[i]-z[i])
print(a)
#part2
a = 0
for i in range(len(x)):
				a += y[i] * z.count(y[i])
print(a)
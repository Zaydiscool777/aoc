f = open("a")
x = f.readlines()
l = 0
def isit(i):
				y = False
				z = False
				j = [int(j) for j in i.split()]
				z = (j[0] > j[1])
				for k in range(len(j)-1):
								if abs(j[k] - j[k+1]) > 3 or abs(j[k] - j[k+1]) < 1:
												y = True
								if not (j[k] > j[k+1]) == z:
												y = True
				return not y
# part 1: tally trues from isit(i) for i in x
for i in x:
				if isit(i):
								l += 1
				else:
								for m in range(len([int(j) for j in i.split()])):
												n = [int(j) for j in i.split()]
												n.pop(m)
												if isit(' '.join([str(k) for k in n])):
																l += 1
																break
print(l)
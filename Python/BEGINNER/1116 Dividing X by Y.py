tests = int(input())
while tests != 0:
	x, y = map(int, input().split())
	if y == 0:
		print("divisao impossivel")
	else:
		print("%.1f" % (x/y))
	tests -= 1

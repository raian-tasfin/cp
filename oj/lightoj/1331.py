import math

T = int(input())
for t in range(1, T+1):
	r1, r2, r3 = [float(x) for x in input().split()]

	semiPerim  = sum([r1, r2, r3])

	a, b, c = r2+r3, r3+r1, r1+r2

	A = math.acos((b**2 + c**2 - a**2) / (2 * b * c))
	B = math.acos((c**2 + a**2 - b**2) / (2 * c * a))
	C = math.acos((a**2 + b**2 - c**2) / (2 * a * b))

	# print(r1, r2, r3)
	# print(A, B, C)

	area = math.sqrt(semiPerim * (semiPerim - a) * (semiPerim - b) * (semiPerim - c))

	area -= 0.5 * A * r1**2
	area -= 0.5 * B * r2**2
	area -= 0.5 * C * r3**2

	print("Case %d: %0.10f" % (t, area))

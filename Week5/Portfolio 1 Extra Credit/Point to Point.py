
print("Welcome to the 2D Distance Program!")
x1, y1 = map(float, input("Enter the first point of the plane? Ex.) (12 14)\n").split())
x2, y2 = map(float, input("Enter the second point of the plane? Ex.) (12 14)\n").split())

print("Calculating the distance now...\n")

x3 = (x1+x2) / 2
y3 = (y1+y2) / 2

print(f"The midpoint from the points ({x1}, {y1}) and ({x2}, {y2}) is ({x3}, {y3}).\n")

print("Thank you for using the 2D Distance Program!")
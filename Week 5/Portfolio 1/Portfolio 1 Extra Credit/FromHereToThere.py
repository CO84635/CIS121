import math

print("Welcome to the 2D Distance Program!")
x1, y1 = map(float, input("Enter the first point of the plane? Ex.) (12 14)\n").split())
x2, y2 = map(float, input("Enter the second point of the plane? Ex.) (12 14)\n").split())

print("Calculating the distance now...\n")

distance = math.sqrt(((x2 - x1) ** 2) + ((y2 - y1) ** 2))

print(f"The distance from the points ({x1}, {y1}) and ({x2}, {y2}) is {distance}.\n")
print("Thank you for using the 2D Distance Program!")


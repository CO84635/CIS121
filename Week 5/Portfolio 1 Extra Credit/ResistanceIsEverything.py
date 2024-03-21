
print("Welcome to the Resistor Calculation Program\n")

resistor_1 = float(input("Please enter the first Resistor value:\n"))
resistor_2 = float(input("Plase enter the second resistor value\n"))
print(f"Thank you! You have entered {resistor_1} ohms and {resistor_2} ohms!")

total_resist = resistor_1 + resistor_2
parallel_value = 1/((1/resistor_1)+(1/resistor_2))

print(f"If your resistors are place in series, they will total to {total_resist} ohms.\n")
print(f"The equivalent resistance of the resistors in parallel {parallel_value} ohms.")

print("Thank you for using the Resistor Calculation Program! Have a good one.")


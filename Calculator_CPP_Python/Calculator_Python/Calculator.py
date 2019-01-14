a = int (input('Enter the number a: '))
b = int (input('Enter the number b: '))

choice = int (input("\n" + " |  Choose an action: " + " \n 1 Addition \n 2 Subtraction \n 3 Multiplication \n 4 Division \n \n"))

if choice == 1:

    result = a + b
    print ("\n" + " |  Result = " + str(result) + "\n")

elif choice == 2:

    result = a - b
    print ("\n" + " |  Result = " + str(result) + "\n")

elif choice == 3:

    result = a * b
    print ("\n" + " |  Result = " + str(result) + "\n")

elif choice == 4:

    result = a / b
    print ("\n" + " |  Result = " + str(result) + "\n")

else:
	print ("\n" + " |  This action is not listed \n")

input("Press \"Enter\" to complete the program...")
import sys
print("A program that allows a user to calculate the Fibonacci Sequence from an interval\n")

while True: #Main prorgam loop
    while True: #Keep asking until the user enters a valid input.
        print("Enter the Nth Fibonacci number you wish to calculate\n(such as 5,50,1000,9999), or QUIT to quit:")
        response = input().upper()
        #print(f"The number you enter is {response}")
    
        if response == 'QUIT':
            print('Thanks for playing!')
            sys.exit()

        if response.isdecimal() and int(response) !=0:
            nth = int(response)
            break
        
        print('Please enter a number greater than 0, or QUIT')
    print()

        #Handle the special cases if the user enter 1 or 2
    if nth ==1:
            print('0\n')
            print('The #1 Fibonacci number is 0.')
            continue

    elif nth==2:
            print('0,1\n')
            print('The #2 Fibonacci number is 1.')
            continue

        #Display a warning if the user entered a large number:
    if nth >=10000:
            print('WARNING: This will take a while to display on the \nscreen. If you want to quit this program before it is\n done, press Ctrl-C.')
            print('screen. If you want to quit this program before it is')
            print('done, press Ctrl-C.')
            input('Press Enter to begin...')
            
        #Calculate the Nth Fibonacci number:
    secondToLastNumber = 0
    lastNumber = 1
    fibNumbersCalculated = 2
    print('0, 1, ',end='')  #Display the first two Fiboncacci numbers.

        #Display all the later numbers of the Fibonacci numbers.
    while True:
            nextNumber = secondToLastNumber + lastNumber
            fibNumbersCalculated +=1

            #Display the next number in the sequence:
            print(nextNumber, end = '')
            #Check if we've found the Nth number the user wants:
            if fibNumbersCalculated == nth: 
                print()
                print()
                print('The #', fibNumbersCalculated, ' Fibonacci ', 'number is ', nextNumber, sep='')
                break 

             # Print a comma in between the sequence numbers:
            print(', ',end='')

            #Shift the last two numbers:
            secondToLastNumber = lastNumber
            lastNumber = nextNumber
    

 

    
    
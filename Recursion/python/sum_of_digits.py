""" Sum of digits using recursion ~ contributed by Rishabh Singhal: rish-singhal.github.io """

def sum_of_digits(num):
    """ Recursive function to calculate sum of digits """
    if not num:
        return 0
    # returning last digit + sum_of_digits(remaining number after
    # removing last digit)
    return (num%10) + sum_of_digits(num//10)

def main():
    """ main function to take input """
    n = int(input("Enter a number:"))
    print("Sum of digits:", sum_of_digits(n))

if __name__ == "__main__":
    main()

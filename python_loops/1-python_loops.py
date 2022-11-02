name = input("Please enter your first name: ")
age = int(input("Enter your age: "))

if age < 18:
    print("sorry {}, you are too young and not qualified".format(name))
elif age >= 18 and age <= 40:
    print("Welcome {}, You have access to continue!!!".format(name))
else:
    print("Oops, You are too old to be here, {}".format(name))

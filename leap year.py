year = int(input("Enter year: "))
leap = False
if year%4 == 0:
    if year%100==0 and year%400!=0:
        leap = False
    else:
        leap = True
if leap is True:
    print(year,"is a leap year")
else:
    print(year,"is not a leap year")

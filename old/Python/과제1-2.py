m = int(input())

km = m / 1000
mile = m / 1609
inch = m * 39.37
feet = m * 3.281

print('{0} m to km = {1:.2f} km\n{0} m to mile = {2:.2f} mile\n{0} m to inch = {3:.2f} inch\n{0} m to feet = {4:.2f} feet'.format(str(m), km, (mile), (inch), (feet)))
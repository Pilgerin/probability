# Python lab live demo for structured and modular programming with Shape.py 
# Use as a guide for the lab assignment to make the more advanced Shapes.py 
 
import math,sys    # Python Library needed for access to math.pi and math.pow() 
 
def main(): 
    inNum = getInput("Input some number: ") 
    while inNum != 0:                           # Loop ends when zero input 
       if inNum > 0: 
          calculateSquare(inNum); 
          calculateAreaSquare(inNum)
       else: 
          print("Input value", inNum, "is not greater than zero!") 
          calculateAreaCircle(inNum);
		  
       inNum = getInput("Input next number: ") 
    print("End of Program") 
     
def calculateSquare(side): 
    perimeter = side * 4 
    print("Square with side", side, "has a perimeter", perimeter) 
 
 
def calculateAreaSquare(side):
	area = math.pow(side,2)
	print("Square with side", side, "has area", area)

def calculateAreaCircle (radius):
	radius = abs(radius)
	area = math.pi * math.pow(radius,2)
	print("Circle with radius", radius, "has area", area)
	circumference = math.pi * radius * 2
	print("Circle with radius", radius, "has circumference", circumference)

def getInput(prompt):
     try:
         number = float(input(prompt))
     except:
         print("\nEnd of Program")
         sys.exit()
     return number  
 
main()

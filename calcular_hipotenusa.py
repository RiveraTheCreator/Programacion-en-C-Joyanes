
import math

def calculate_hypotenuse(a, b):
  """Calculates the hypotenuse of a right triangle using the Pythagorean theorem.

  Args:
    a: Length of side a.
    b: Length of side b.

  Returns:
    The length of the hypotenuse.
  """
  return math.sqrt(a**2 + b**2)

# Get input from the user
a = float(input("Enter the length of side a: "))
b = float(input("Enter the length of side b: "))

# Calculate the hypotenuse
hypotenuse = calculate_hypotenuse(a, b)

# Print the result
print("The length of the hypotenuse is:", hypotenuse)

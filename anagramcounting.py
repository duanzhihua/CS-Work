from collections import Counter
import math
import sys

while True:
    try:
        input = raw_input()
        numer = math.factorial(len(input))
        letters = Counter(input)
        denom = 1
        for key in letters:
            denom = denom*(math.factorial(int(letters[key])))
        result = numer/denom
        print(result)
    except EOFError:
        break
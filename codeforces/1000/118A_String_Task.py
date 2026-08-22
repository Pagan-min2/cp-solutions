str = input()
revised_str = ""
for char in str:
    if(char == 'A'  or char == "E" or char == "I" or char == "O" or char == "U" or char == "Y" or char == "a" or char == "e" or char == "i" or char == "o" or char == "u" or char == "y"):
        revised_str += ""
    else:
        revised_str += "." + char

print(revised_str.lower())
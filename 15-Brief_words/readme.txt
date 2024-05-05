# Algorithm : 

# input of string and number.
# pass this value into BriefWord function.
# Initialize: An empty stack and the length of the input string.
# Process String: Iterate through each character of the string:
# If the stack is empty, push the current character onto the stack.
# If the stack is not empty and the top element is greater than the current character, and k is greater than 0, pop elements from the stack that are greater than the current character and decrement k until the condition is no longer met or the stack is empty. Then, push the current character onto the stack.
# If the top element is less than or equal to the current character, push the current character onto the stack.
# Final Adjustments: If k is still greater than 0 after processing the string, pop k elements from the stack.
# Reversing and Trimming: Construct a string by popping all elements from the stack and reversing the order.
# Handling Leading Zeros: Skip any leading zeros in the constructed string.
# Output: Return the final string, or "0" if the string is empty.

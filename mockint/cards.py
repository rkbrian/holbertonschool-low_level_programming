import math
"""pseudo code"""

card_list = [1, 2, 4, 5, 6, ...]
count = 0

for i in range(len(card_list)):
        if card_list[i] + 1 in card_list:
                count += 1
print(count)

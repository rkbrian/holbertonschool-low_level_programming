import math

genreList = ['T', 'd', 'b', 'a', 'b', 'b', 'a']
itemli = []
countli = []

for i in range(len(genreList)):
        if genreList[i] not in itemli:
                itemli.append(i)
                countli.append(1)
        else:
                for j in range(len(itemli)):
                        if itemli[j] == genreList[i]:
                                countli[j] += 1
while itemli != []:
        for i in range(len(countli)):
                if countli[i] == max(countli):
                        print(itemli[i]*countli[i],end="")
                        countli.pop(countli[i])
                        itemli.pop(itemli[i])
def test(num):
    n = str(num)
    sameIndex = []
    numList = []
    lastSame = 0
    finalString = ""
    for i in range(len(n)-1):
        if n[i] != n[i+1]:
            sameIndex.append(lastSame)
            lastSame = i
            sameIndex.append(lastSame)
            lastSame += 1
            # print("trigger diff")
            # print(i)
    sameIndex.append(lastSame)        
    sameIndex.append(len(n))       
    # print(sameIndex)
    for y in range(len(sameIndex)):
        if y%2 == 0:
            if sameIndex[y+1] == 0:
                numList.append(n[sameIndex[0]])
            else:
                numList.append(n[sameIndex[y]:sameIndex[y+1]+1])
    # print (numList)                
    for x in range(len(numList)):
        #if number happens less than 2 times aka 1 time
        if len(numList[x]) < 2:
            printTwice = numList[x] + numList[x]
            finalString += printTwice
            # print (printTwice)
        else:
            # print (numList[x])
            finalString += numList[x]
    print (finalString)

n=int(input()) 
test(n) 
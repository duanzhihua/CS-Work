while True:
    result = ""
    n = int(raw_input())
    if(n == -1):
        break
    war = [0]*n
    matrix = []
    for i in range(0,n):
        matrix.append([])
        matrix[i] = raw_input().split()

    weak = 1
    for i in range(0,n):
        weak = 1
        for j in range(0,n):
            if weak == 0:
                break
            if matrix[i][j]=="1":
                for k in range(0,n):
                    if weak == 0:
                        break
                    if matrix[j][k]=="1":
                        for m in range(0,n):
                            if matrix[k][m]=="1":
                                if m == i:
                                    weak = 0
                                    war[i]= 1
                                    if weak == 0:
                                        break
    for i in range(0,n):
        if war[i]==0:
            result = result + str(i) + " "
    print result

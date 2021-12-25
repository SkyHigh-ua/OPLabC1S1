from re import findall, match
def inputcode(): # Введення коду
    lst = []
    string = input("Введіть фрагмент коду:\n")
    while string:
        lst.append(string)
        string = input()
    return lst
    
def findiden(lst): # Пошук ідентифікаторів в кодi
    res=[]
    for i in lst:
        i = findall(r'[a-zA-Z_]\w*\s?[-+*/%\s]?=\s?[^=][-+*/%\w\s\(\)=,"\']*\b', i)
        for j in i:
            res += findall(r'[a-zA-Z_]\w*', j)[1:]
    return res

def printiden(lst): # Виведення ідентифікаторів
    if len(lst)!=0:
        print("Знайдений такий набір ідентифікаторів: ", end="")
        for i in range(len(lst)):
            if i+1<len(lst):
                print(lst[i], end=", ")
            else:
                print(lst[i])
    else:
        print("Ідентифікаторів в правій частині операторів присвоєння не знайдено") 

code = inputcode()
result = findiden(code)
printiden(result)
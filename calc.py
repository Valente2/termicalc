run=True
while run==True:
    cmd=input("#")
    if cmd=="add":
        numa=input("enter num 1 ")
        numb=input("enter num 2 ")
        ans=int(numa)+int(numb)
        print(ans)
    if cmd=="sub":
        numa=input("enter num 1 ")
        numb=input("enter num 2 ")
        ans=int(numa)-int(numb)
        print(ans)
    if cmd=="mult":
        numa=input("enter num 1 ")
        numb=input("enter num 2 ")
        ans=int(numa)*int(numb)
        print(ans)
    if cmd=="divi":
        numa=input("enter num 1 ")
        numb=input("enter num 2 ")
        ans=int(numa)/int(numb)
        print(ans)
    if cmd=="exp":
        numa=input("enter num 1 ")
        numb=input("enter num 2 ")
        ans=int(numa)**int(numb)
        print(ans)
    if cmd=="exit":
        run=False
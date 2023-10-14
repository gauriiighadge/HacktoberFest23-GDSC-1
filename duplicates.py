a = int(input("Size of 1st array->"))
list1 = [int(input()) for i in range(a)]
b = int(input("Size of 2nd array->"))
list2 = [int(input()) for i in range(b)]
print("Duplicates are:", *(set(list1) & set(list2)))

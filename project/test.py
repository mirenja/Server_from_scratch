def binarySearch(arr, x):
    """
    Returns the index of the first encounter of x in arr
    If the element x is not found return -1
    """
    # Search space bounds
    l = 0 # lower bound
    u = len(arr) - 1 # upper bound
   
    print(f"l is {l}")
    print(f"u is {u}")

    while l <= u:  # looping condition, the lower bound must be larger than upper bound

        mid = int(l + (u - l)/2) # index of the element in the middle
        #print(l, mid, n)
        print(f"mid is {mid}")

        # Check if the middle element is equal to x
        if arr[mid] == x:
            return mid

        # If x is greater, ignore left half
        elif arr[mid] < x:
            l = mid + 1
            print(f"newl is {l}")
        

        # If x is smaller, ignore right half
        else:
            u = mid - 1
            print(f"newmid is {mid}")
            print(f"newu is {u}")

    # exit loop -> element not present
    return -1
arr = [1, 2, 3, 4, 5]
x = 10
position = binarySearch(arr,x)
print(f"sound on index is {position}")
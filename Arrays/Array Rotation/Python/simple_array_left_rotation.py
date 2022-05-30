def rotate(d, size, arr):
    new = []
    new.extend(arr[d:])
    new.extend(arr[:d])
    return new

def main():
    size = int(input('Enter size of array: '))
    d = int(input('Enter number of rotations: '))
    arr = [x for x in range(1, size+1)]
    new_arr = rotate(d, size, arr)
    print(new_arr)
    
main()
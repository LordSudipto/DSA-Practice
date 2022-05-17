import timeit


def lin_search(List, target_value):
    """
    :param List: Input list
    :param target_value: Value to search for in the input.
    :return: Position of value in input if found, else return null.
    """

    for i in range(0, len(List)):
        if List[i] == target_value:
            return i
    return None


def verify(result):
    if result is not None:
        print(f'Element found at {result}')
    else:
        print('Element not found')


n = int(input('Enter size of list: '))
target = int(input('Enter a number to search: '))
new_list = [x for x in range(1, n+1)]

start = timeit.default_timer()

res = lin_search(new_list, target)
verify(res)

stop = timeit.default_timer()
print(f'Time taken: {stop - start}s')

def count_frequency(arr):
    frequency_dict = {}

    for num in arr:
        frequency_dict[num] = frequency_dict.get(num, 0) + 1

    print("Element\tFrequency")
    for key, value in frequency_dict.items():
        print(f"{key}\t{value}")

if __name__ == "__main__":
    arr = [1, 2, 3, 2, 4, 1, 5, 3, 2, 1]
    count_frequency(arr)

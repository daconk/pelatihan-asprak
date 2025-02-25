def has_duplicate_dictionary(lst):
    # dictionary ini berisi key:value, dimana key adalah
    # item yang terdapat di list dan value adalah seberapa
    # sering item tersebut muncul di list
    frequency = {}
    for item in lst:
        if item in frequency:
            frequency[item] += 1
            return True  # Menemukan duplikat
        else:
            frequency[item] = 1
    return False  # Tidak ada duplikat


def has_duplicate_set(lst):
    # set ini berisi item yang sudah pernah dilihat dalam lst
    seen = set()
    for item in lst:
        if item in seen:
            return True  # Menemukan duplikat
        else:
            seen.add(item)
    return False  # Tidak ada duplikat


def main():
    lst = [1, 2, 3, 4, 5, 6, 7, 7]
    print("Menggunakan metode dictionary:", has_duplicate_dictionary(lst))
    print("Menggunakan metode set:", has_duplicate_set(lst))


# Cek Commit
if __name__ == "__main__":
    main()
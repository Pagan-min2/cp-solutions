number_of_students, cutoff_students = map(int, input().split())

marks = list(map(int, input().split()))

marks.sort(reverse=True)

cutoff_marks = marks[cutoff_students - 1]

counter = 0

for x in range(number_of_students):
    if cutoff_marks <= marks[x] and marks[x] > 0:
        counter = counter + 1

print(counter)
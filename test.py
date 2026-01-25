from operator import itemgetter
student_scores = [('Robert', 8), ('Alice', 9), ('Tina', 8)]
print(sorted(student_scores, key=itemgetter(1, 0)))
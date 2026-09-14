# Mean and Variance of Exam Scores

scores = [50, 65, 60, 75, 70]

# mean
mean = sum(scores) / len(scores)

# Calculate population variance
variance = sum((x - mean) ** 2 for x in scores) / len(scores)

print("Exam Scores:", scores)
print("Mean =", mean)
print("Variance =", variance)
# Spam / Not Spam Prediction using Bayes' Theorem

p_spam = 0.40
p_free_given_spam = 0.70
p_free = 0.34

# Bayes' Theorem
p_spam_given_free = (p_free_given_spam * p_spam) / p_free

print("P(Spam | Free) =", p_spam_given_free)
print("P(Spam | Free) =", round(p_spam_given_free * 100, 2), "%")
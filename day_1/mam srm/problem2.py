# Car Price Prediction using Linear Regression

import numpy as np
from sklearn.linear_model import LinearRegression

# Car age in years
X = np.array([[1], [2], [3], [4], [5]])

# Price of car in lakhs
y = np.array([9, 8, 7, 6, 5])

# Create Linear Regression model
model = LinearRegression()

# Train the model
model.fit(X, y)

# Predict price of a 3-year-old car
age = np.array([[3]])
predicted_price = model.predict(age)

print("Coefficient:", model.coef_[0])
print("Intercept:", model.intercept_)
print("Predicted price for a 3-year-old car:",
      predicted_price[0], "lakhs")
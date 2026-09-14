import pandas as pd

# Load dataset
#data = pd.read_csv("students.csv")
data = pd.read_csv("/Users/nitinraj/Downloads/students.csv")
# Display complete dataset
print("Dataset:")
print(data)

# Shape
print("\nShape of Dataset:")
print(data.shape)

# First 5 rows
print("\nFirst 5 Rows:")
print(data.head())

# Information
print("\nDataset Information:")
data.info()

# Statistical Summary
print("\nStatistical Summary:")
print(data.describe())

# Missing Values
print("\nMissing Values:")
print(data.isnull().sum())
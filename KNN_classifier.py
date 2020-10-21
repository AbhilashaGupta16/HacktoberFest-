# import the necessary packages
import numpy as np
import pandas as pd
from sklearn import neighbors, metrics
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import LabelEncoder 
import matplotlib.pyplot as plt

#import the data set from drive
#Download the dataset here: https://archive.ics.uci.edu/ml/datasets/Car+Evaluation
data = pd.read_csv('car.data')

X = data[['buying',
          'maint',
          'safety'
          ]].values

Y = data[['class']]

# Encode the values as the rows are strings

LE = LabelEncoder()
for i in range(len(X[0])):
    X[:, i] = LE.fit_transform(X[:, i])


label_mapping = {
    'unacc': 0,
    'acc': 1,
    'good': 2,
    'vgood': 3
}
Y['class'] = Y['class'].map(label_mapping)

#Split the dataset into test and training set
X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.2)

#Define the model

knn = neighbors.KNeighborsClassifier(n_neighbors=25, weights='uniform')
#Train the model

knn.fit(X_train, Y_train)


prediction = knn.predict(X_test)
accuracy = metrics.accuracy_score(Y_test, prediction)

#print("Prediciton:", prediction)
print("Accuracy:", accuracy)

#Custom prediction:
a = 32 # Change this value to obtain different results
print("Input: ", X[a])
print("New Prediction: ", knn.predict(X)[a])


# ML Syllabus Notes

## 1. Machine Learning kya hota hai?

- Machine Learning ek aisi technique hai jisme machine data se seekh kar decisions leti hai.
- Iska use prediction, classification, clustering aur pattern detection mein hota hai.
- ML ke main types hain:
  - Supervised Learning
  - Unsupervised Learning
  - Reinforcement Learning

## 2. Supervised Learning

- Isme model ko labeled data diya jata hai.
- Input aur output dono known hote hain.
- Main tasks:
  - Regression: continuous output
  - Classification: discrete output
- Common algorithms:
  - Linear Regression
  - Logistic Regression
  - Decision Tree
  - Random Forest
  - SVM
  - Naive Bayes
  - KNN

## 3. Unsupervised Learning

- Isme data labeled nahi hota.
- Model khud patterns dhoondhta hai.
- Main tasks:
  - Clustering
  - Association
  - Dimensionality Reduction
- Common algorithms:
  - K-Means
  - Hierarchical Clustering
  - DBSCAN
  - PCA

## 4. Reinforcement Learning

- Isme agent environment mein action karta hai aur reward/punishment receive karta hai.
- Goal: maximum reward lana.
- Examples: robotics, gaming, self-driving systems.

## 5. Data Preprocessing

- Missing values handle karna
- Categorical data ko numeric mein convert karna
- Feature scaling: Standardization aur Normalization
- Train-test split karna
- Outliers ko handle karna
- Feature selection aur feature engineering

## 6. Linear Regression

- Continuous output ke liye use hota hai.
- Formula: y = mx + c
- Goal: best-fit line banana.
- Use cases: house price prediction, sales forecasting.
- Metrics: MSE, RMSE, MAE, R-squared

## 7. Logistic Regression

- Classification ke liye use hota hai.
- Output 0 ya 1 ke beech hota hai.
- Sigmoid function use hota hai.
- Use cases: spam detection, disease prediction.

## 8. Decision Tree

- Tree structure mein decision rules based on features.
- Easy to understand aur visualize.
- Problem: overfitting.
- Solution: pruning aur limiting depth.

## 9. Random Forest

- Multiple decision trees ka ensemble.
- Better accuracy aur less overfitting.
- Robust model hota hai.

## 10. Support Vector Machine (SVM)

- Classification aur regression dono mein use hota hai.
- Best boundary ya hyperplane find karta hai.
- Kernel functions use hote hain.

## 11. K-Nearest Neighbors (KNN)

- Prediction ke liye nearest neighbors ka use karta hai.
- Simple aur intuitive model hai.
- Large datasets mein slow ho sakta hai.

## 12. Naive Bayes

- Probabilistic classifier hai.
- Bayes theorem par based hai.
- Text classification mein popular hai.
- Example: spam filtering.

## 13. K-Means Clustering

- Unsupervised learning ka popular algorithm hai.
- Data ko K clusters mein divide karta hai.
- Steps:
  1. K centers choose karo
  2. Points ko nearest center mein assign karo
  3. Centers update karo
  4. Repeat karo

## 14. Hierarchical Clustering

- Data ko tree-like structure mein group karta hai.
- Agglomerative aur Divisive methods use hote hain.
- Small datasets mein useful hota hai.

## 15. Dimensionality Reduction

- Features ko reduce karke simpler model banana.
- PCA (Principal Component Analysis) common hai.
- Helps in visualization, speed aur overfitting control.

## 16. Model Evaluation Metrics

- Accuracy
- Precision
- Recall
- F1 Score
- Confusion Matrix
- ROC-AUC
- Cross-Validation

## 17. Overfitting aur Underfitting

- Overfitting: training data par achha, test data par weak
- Underfitting: model bahut simple hai aur dono par weak
- Solution: regularization, more data, feature selection, pruning

## 18. Bias-Variance Tradeoff

- Bias: model kitna simple hai
- Variance: data ke small changes par kitna react karta hai
- Best model balanced tradeoff provide karta hai

## 19. Neural Networks Basics

- Inspired by human brain.
- Neurons, weights, bias aur activation functions use hote hain.
- Deep Learning neural networks ka advanced form hai.

## 20. Important exam differences

- Regression vs Classification
- Supervised vs Unsupervised
- Clustering vs Classification
- Precision vs Recall
- Bias vs Variance
- Overfitting vs Underfitting

## 21. Important exam tips

- Definitions yaad rakho
- Algorithms ke use cases yaad rakho
- Confusion matrix aur metrics practice karo
- Comparative differences likh kar revise karo
- Short notes aur flowcharts bana lo

## 22. Short revision summary

- Supervised learning: labeled data
- Unsupervised learning: unlabeled data
- Regression: continuous output
- Classification: discrete output
- Clustering: similar data ko group karna
- Evaluation metrics decide karte hain model kitna accha hai

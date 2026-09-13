# Unit II – Neural Networks and Training

## 1. Neural Network Kya Hai?

Neural network biological brain se inspire hokar banaya gaya computational model hai. Isme neurons ke groups form karte hain aur inke through information process hota hai.

### Basic Structure

- Input layer
- Hidden layers
- Output layer

### Main Idea

Input data ko process karke output generate karna.

---

## 2. Perceptron

Perceptron neural network ka simplest form hai. Ye input values ko weights aur bias ke saath combine karta hai aur output generate karta hai.

### Formula

Output roughly kisi threshold function ke basis par decide hota hai.

---

## 3. Weights and Bias

### Weights

Weights inputs ko adjust karte hain. Ye model ki learning ko control karte hain.

### Bias

Bias neuron ko shift karne mein help karta hai. Isse model ko better fit dene mein madad milti hai.

---

## 4. Activation Functions

Activation functions non-linearity introduce karte hain. Ye neural network ko complex patterns samajhne mein help karte hain.

### Common Activation Functions

- Sigmoid
- Tanh
- ReLU
- Softmax

### Why Important

Without activation functions, neural network sirf linear relationships hi samajh sakta hai.

---

## 5. Loss Function

Loss function model ke predicted output aur actual output ke beech error measure karta hai.

### Common Loss Functions

- Mean Squared Error
- Cross-Entropy Loss

### Purpose

Loss kam karna hi training ka goal hai.

---

## 6. Gradient Descent

Gradient descent ek optimization technique hai jisme weights ko update karke loss ko minimize kiya jata hai.

### Main Idea

Loss function ke gradient ka use karna aur parameters ko us direction mein adjust karna jahan loss kam ho.

### Types

- Batch Gradient Descent
- Stochastic Gradient Descent
- Mini-batch Gradient Descent

---

## 7. Backpropagation

Backpropagation training ka core process hai. Isme error ko output layer se input layer tak propagate kiya jata hai aur weights update hote hain.

### Importance

Ye deep networks ko train karne ke liye bohot important hai.

---

## 8. Multilayer Neural Network

Jab neural network mein multiple hidden layers hote hain, tab use deep neural network kehte hain. Ye complex patterns samajh sakta hai.

### Uses

- Image recognition
- NLP
- Speech processing

---

## 9. Weight Initialization

Initial weights ka selection training ko directly affect karta hai. Agar weights bohot bade ya bohot chhote hon to training weak ho sakti hai.

### Common Methods

- Xavier initialization
- He initialization

---

## 10. Training, Validation and Testing

### Training

Model ko data par learn karaya jata hai.

### Validation

Model ko tune karne ke liye validation data use hota hai.

### Testing

Model ko unseen data par test kiya jata hai.

---

## 11. Vanishing and Exploding Gradient Problem

Agar gradients bahut chhote ya bahut bade ho jaye to training unstable ho sakti hai.

### Solutions

- ReLU activation
- Proper initialization
- Batch normalization

---

## 12. Regularization Techniques

Regularization overfitting ko reduce karne ke liye use hoti hai.

### L1 Regularization

- Sparsity laata hai
- Feature selection mein useful

### L2 Regularization

- Weights ko small rakhta hai
- Model ko simple banata hai

### Dropout

- Randomly neurons ko off karta hai
- Overfitting ko kam karta hai

### Batch Normalization

- Training ko stable banata hai

---

## 13. Autoencoders

Autoencoder input ko compress karke phir reconstruct karta hai. Ye dimensionality reduction aur feature learning mein use hota hai.

### Main Parts

- Encoder
- Decoder

---

## 14. Hyperparameter Tuning

Hyperparameters jaise learning rate, batch size, epochs aur number of layers ka tuning model performance ko improve karta hai.

### Important Hyperparameters

- Learning rate
- Batch size
- Epochs
- Number of layers

---

## 15. Important Exam Points

- Neural network mein input, hidden aur output layers hote hain.
- Weights aur bias model ki learning ko define karte hain.
- Activation functions non-linearity introduce karte hain.
- Gradient descent aur backpropagation training ke core concepts hain.
- Regularization overfitting ko reduce karta hai.

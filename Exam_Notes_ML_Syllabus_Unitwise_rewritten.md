# Machine Learning Unit-wise Exam Notes

## 1. Introduction to Machine Learning

Machine Learning ek aisi technique hai jisme computer data ko dekh kar patterns seekhta hai aur phir future predictions ya decisions karta hai. Isme manually har rule likhne ki jagah machine ko data se seekhne ka chance diya jata hai. Ye mainly supervised, unsupervised aur reinforcement learning mein divide hoti hai.

### Scope of Machine Learning

Machine Learning ka use healthcare, finance, banking, robotics, computer vision, natural language processing, recommendation systems aur automation mein hota hai. Iski importance isliye badh rahi hai kyunki ye large datasets se valuable insights nikaal sakti hai.

### Limitations of Machine Learning

Machine Learning ke kaam karne ke liye high-quality data chahiye hota hai. Agar data incomplete ya biased hai to model sahi results nahi de sakta. Overfitting, underfitting, lack of interpretability aur high computational cost bhi iske major limitations hain.

---

## 2. Regression and Basic Statistical Concepts

Regression ek supervised learning technique hai jisme input variables ke basis par continuous output predict kiya jata hai. Jaise house price prediction, sales forecasting aur temperature prediction. Linear regression sabse basic form hai. Isme dependent variable aur independent variable ke beech linear relationship assume ki jati hai.

### Important Statistical Concepts

Mean, median, mode, variance, standard deviation, covariance aur correlation machine learning mein bahut important hain. In concepts se data ka behavior samjha jata hai aur model ki performance evaluate ki ja sakti hai.

### Probability Basics

Probability events ki likelihood ko represent karta hai. Conditional probability, Bayes theorem aur random variables machine learning ke liye important hote hain, especially probabilistic models aur Bayesian learning mein.

---

## 3. Data Preprocessing and Visualization

Data preprocessing machine learning pipeline ka ek important part hai. Isme missing values handle karna, categorical data ko numeric format mein convert karna, feature scaling aur train-test split karna shamil hota hai.

### Data Visualization

Data visualization se data ko samjha ja sakta hai. Scatter plots, histograms, bar charts aur box plots se trends, outliers aur data distribution identify ki ja sakti hai.

### Normalization and Standardization

Normalization aur standardization data ko same scale par laane ke liye use hote hain. Ye algorithms ko faster aur more accurate training mein help karte hain.

---

## 4. Hypothesis Function and Hypothesis Testing

Hypothesis function ek proposed model ya relationship hota hai jo input data ko output se connect karta hai. Ye model ka mathematical representation hota hai.

### Hypothesis Testing

Hypothesis testing ka use ye decide karne ke liye hota hai ki observed result statistically significant hai ya nahi. Null hypothesis aur alternate hypothesis iski basic concepts hain.

---

## 5. Neural Networks and Training

Neural network biological brain se inspire hokar banaya gaya model hai. Isme input layer, hidden layers aur output layer hote hain. Har neuron weights aur bias ke through information process karta hai.

### Activation Functions

Activation functions non-linearity introduce karte hain. Sigmoid, Tanh aur ReLU sabse common activation functions hain. ReLU aksar deep neural networks mein use hota hai kyunki ye training ko fast banata hai.

### Loss Function

Loss function model ke prediction aur actual output ke beech error dikhata hai. MSE aur Cross-Entropy common loss functions hain.

### Gradient Descent

Gradient descent weights ko update karne ka process hai taki loss minimize ho. Ye neural network training ka core concept hai.

### Backpropagation

Backpropagation error ko output layer se input layer tak propagate karta hai aur weights ko update karta hai. Ye deep learning mein training ka main mechanism hai.

### Regularization

Overfitting ko reduce karne ke liye L1 aur L2 regularization use hote hain. Dropout aur batch normalization bhi training ko robust banane mein help karte hain.

---

## 6. Convolutional Neural Networks (CNN)

CNN ek special type ka deep learning model hai jo images aur spatial data ke liye use hota hai. Isme convolution layer feature extraction karta hai, pooling layer size ko reduce karta hai aur dense layer final prediction karta hai.

### Important CNN Concepts

Flattening 2D feature maps ko 1D vector mein convert karta hai. Padding output size ko preserve karta hai aur stride filter ki movement step ko define karta hai. Pooling layer computation ko kam karta hai aur overfitting ko reduce karta hai.

### Applications of CNN

CNN ka use image classification, object detection, face recognition aur medical image analysis mein hota hai. Transfer learning ke through pre-trained CNN models ko new tasks ke liye reuse kiya ja sakta hai.

---

## 7. RNN, LSTM and GRU

RNN sequential data ke liye use hoti hai jahan previous information important hoti hai. Ye time-series, speech aur NLP tasks mein useful hoti hai.

### LSTM and GRU

RNN ko vanishing gradient problem ka samna karna padta hai. LSTM is problem ko solve karta hai aur long-term dependencies ko remember kar sakta hai. GRU LSTM ka simpler aur faster version hai.

### NLP Applications

Translation, text generation, sentiment analysis aur chatbot systems mein RNN, LSTM aur GRU ka use hota hai. Attention mechanism bhi sequence models ko aur better banata hai.

---

## 8. Reinforcement Learning

Reinforcement Learning ek aisa learning approach hai jisme agent environment ke saath interact karta hai aur reward ke basis par seekhta hai. Iska main goal maximum cumulative reward lana hota hai.

### Key Concepts

Agent, environment, state, action aur reward reinforcement learning ke basic elements hain. MDP ek decision-making framework provide karta hai. Bellman equations value function ko define karte hain.

### Important Algorithms

Q-learning aur SARSA popular reinforcement learning algorithms hain. Value iteration aur policy iteration bhi important methods hain.

---

## 9. SVM and Bayesian Learning

SVM ek powerful classification aur regression algorithm hai jo maximum margin boundary dhoondhta hai. Ye high-dimensional spaces mein kaam karta hai aur generally strong performance deta hai.

### Bayesian Learning

Bayesian learning probabilistic reasoning par based hoti hai. Isme prior probability, likelihood aur posterior probability ka use hota hai. Ye uncertain decisions aur probabilistic inference ke liye useful hai.

---

## 10. Applications of Machine Learning

Machine Learning ke applications computer vision, speech processing, NLP, healthcare, finance, recommendation systems aur robotics mein bohot important hain. ImageNet competition deep learning aur CNNs ki progress ko dikhane wala famous example hai.

---

## Important Exam Points

- Machine Learning data se seekh kar prediction aur decision-making karta hai.
- Supervised learning mein labeled data hota hai, unsupervised learning mein nahi.
- Regression continuous values ke liye hoti hai.
- Neural networks mein activation functions, weights, bias aur loss function important hote hain.
- Gradient descent aur backpropagation training ke core concepts hain.
- CNN images ke liye powerful model hai.
- LSTM aur GRU sequential data ke liye important hain.
- Reinforcement learning mein reward-based learning hoti hai.
- SVM aur Bayesian learning advanced machine learning approaches hain.

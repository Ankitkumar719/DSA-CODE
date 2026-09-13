# Machine Learning Unit-wise Exam Notes

## 7-Mark Answer Ready Notes

### 1. Machine Learning Kya Hai?

- Machine Learning ek aisi technique hai jisme computer data se seekh kar future predictions ya decisions leti hai.
- Isme explicit programming ki jagah data par training di jati hai.
- Ye supervised, unsupervised aur reinforcement learning mein classify hoti hai.
- Iska use healthcare, finance, NLP, computer vision aur recommendation systems mein hota hai.
- Iske main advantages hain automation, pattern recognition aur better decision making.
- Limitations mein data quality, overfitting, underfitting aur high computational cost shamil hain.

### 2. Supervised aur Unsupervised Learning

- Supervised learning mein labeled data use hota hai jahan input aur output dono known hote hain.
- Regression aur classification iske examples hain.
- Unsupervised learning mein labeled data nahi hota aur system data ko groups ya patterns mein organize karta hai.
- Clustering aur PCA iske examples hain.
- Supervised learning prediction ke liye aur unsupervised learning insight ke liye use hoti hai.

### 3. Regression Kya Hai?

- Regression continuous values ke liye use hoti hai jaise house price ya sales prediction.
- Iska main aim ek relationship establish karna hota hai input variables aur output variable ke beech.
- Linear regression sabse basic model hai jisme straight-line relationship assume ki jati hai.
- Polynomial regression complex relationships ko handle karta hai.
- Regression ko evaluate karne ke liye MSE, RMSE aur MAE use hote hain.

### 4. Neural Network Kya Hai?

- Neural network biological brain se inspire hokar banaya gaya model hai.
- Isme input layer, hidden layers aur output layer hote hain.
- Each neuron weights aur bias ke through information process karta hai.
- Activation functions jaise Sigmoid, Tanh aur ReLU non-linearity introduce karte hain.
- Neural networks complex patterns samajh sakte hain aur deep learning mein bohot important hain.

### 5. CNN Kya Hai?

- CNN specially image aur spatial data ke liye design ki gayi deep learning model hai.
- Isme convolution layer features extract karta hai, pooling layer size reduce karta hai aur dense layer final prediction karta hai.
- Flattening 2D feature maps ko 1D vector mein convert karta hai.
- Padding aur stride output size ko control karte hain.
- CNN image classification, object detection aur face recognition mein use hoti hai.

### 6. RNN, LSTM aur GRU

- RNN sequential data ke liye use hoti hai jahan previous information important hoti hai.
- RNN vanishing gradient problem ka samna karti hai.
- LSTM is problem ko solve karta hai aur long-term dependencies ko remember karta hai.
- GRU LSTM ka simpler aur faster version hai.
- Ye NLP, speech aur time-series data mein use hote hain.

### 7. Reinforcement Learning Kya Hai?

- Reinforcement learning mein agent environment ke saath interact karta hai aur reward ke basis par seekhta hai.
- Agent ka goal maximum cumulative reward lana hota hai.
- Isme agent, environment, state, action aur reward ka concept important hai.
- MDP decision-making framework provide karta hai.
- Q-learning aur SARSA popular RL algorithms hain.

### 8. SVM aur Bayesian Learning

- SVM classification aur regression dono ke liye use hoti hai aur maximum margin boundary banati hai.
- Bayesian learning probability-based reasoning par based hoti hai.
- Ye prior aur posterior probability ke concept par kaam karti hai.
- SVM aur Bayesian methods dono strong probabilistic aur mathematical models hain.

---

## Unit I – Basics of Machine Learning

### 1. Introduction to Machine Learning

- Machine Learning ek aisi technique hai jisme machine data se seekh kar decisions leti hai.
- Iska use prediction, classification, clustering aur pattern recognition mein hota hai.
- Main objective: past data se future outcomes ka estimate karna.

### 2. Scope

- AI, data science, healthcare, finance, robotics, NLP, computer vision aur recommendation systems mein use hoti hai.
- Scope bahut broad hai.

### 3. Limitations

- Data quality par depend karti hai.
- Overfitting aur underfitting issues aa sakte hain.
- Interpretability mushkil ho sakti hai.
- Large computational resources chahiye hote hain.

### 4. Regression

- Regression continuous output ke liye use hoti hai.
- Examples: house price prediction, sales forecasting.
- Common types: Linear Regression, Polynomial Regression.

### 5. Probability

- Probability events ki likelihood ko describe karta hai.
- Bayes theorem, conditional probability aur random variables important hain.

### 6. Statistics for Machine Learning

- Mean, median, mode, variance, standard deviation, covariance aur correlation important hain.
- Data ko samajhne aur model evaluate karne ke liye use hoti hai.

### 7. Linear Algebra for Machine Learning

- Vectors, matrices, eigenvalues, eigenvectors aur dot products important hain.
- Neural networks aur optimization mein use hoti hai.

### 8. Convex Optimization

- Optimization ka matlab hai best solution dhoondhna.
- Gradient-based methods aur convex functions important hain.

### 9. Data Visualization

- Graphs, charts, scatter plots aur histograms se data samjha jata hai.
- Trends aur outliers identify karne mein helpful hota hai.

### 10. Hypothesis Function

- Hypothesis function model ka proposed relationship hota hai.
- Ye input data ko output se connect karta hai.

### 11. Hypothesis Testing

- Ye decide karta hai ki observed result statistically significant hai ya nahi.
- Null hypothesis aur alternate hypothesis important hain.

### 12. Data Distributions

- Normal distribution, uniform distribution aur binomial distribution important hain.
- Data ka behavior samajhne ke liye use hoti hain.

### 13. Data Preprocessing

- Missing values handle karna.
- Categorical data ko numeric mein convert karna.
- Feature scaling aur encoding.
- Train-test split.

### 14. Data Augmentation

- Data ko artificially increase karna.
- Image aur audio tasks mein kaafi useful hai.

### 15. Normalizing Data Sets

- Data ko same scale par lane ka process.
- Standardization aur normalization important hain.

### 16. Machine Learning Models

- Model ka matlab hai training data se learn karna aur new data par predict karna.
- Types: regression, classification, clustering, neural networks.

### 17. Supervised Learning

- Labeled data par train hota hai.
- Output known hota hai.
- Examples: classification aur regression.

### 18. Unsupervised Learning

- Labeled data bina train hota hai.
- Data ko groups ya patterns mein arrange karta hai.
- Examples: clustering, PCA.

---

## Unit II – Neural Networks and Training

### 1. Neural Network Basics – Linearity vs Non-Linearity

- Linear models sirf straight-line relationship samjhte hain.
- Non-linear models complex patterns samajh sakte hain.

### 2. Activation Functions

- Sigmoid: probability-like output.
- ReLU: fast aur widely used.
- Tanh: zero-centered output.

### 3. Weights

- Weights inputs ko adjust karte hain.
- Ye model ki learning power ko define karte hain.

### 4. Bias

- Bias neuron ko shift karne mein help karta hai.
- Model ko better fit dene ke liye use hota hai.

### 5. Loss Function

- Loss function batata hai ki model kitna galat hai.
- Examples: MSE, Cross-Entropy.

### 6. Gradient Descent

- Ye sabse important topic hai.
- Model ke weights ko update karne ke liye use hota hai.
- Loss ko minimize karne ka process hai.

### 7. Multilayer Network

- Multiple layers ke through features learn kiye jate hain.
- Deep networks ke liye important hai.

### 8. Backpropagation

- Error ko backward propagate karke weights update karta hai.
- Neural network training ka core process hai.

### 9. Weight Initialization

- Initial weights ka selection training ko affect karta hai.
- Bad initialization se vanishing/exploding gradients aa sakte hain.

### 10. Training

- Model ko data par learn karaya jata hai.
- Epochs, batches aur iterations ka use hota hai.

### 11. Testing

- Model ko unseen data par test kiya jata hai.
- Generalization evaluate hoti hai.

### 12. Unstable Gradient Problem

- Gradients bahut chhote ya bade ho jaye to training weak ho jati hai.
- Solution: ReLU, Xavier/He initialization, batch normalization.

### 13. Autoencoders

- Input ko compress karke reconstruct karne ka model hai.
- Feature learning aur dimensionality reduction mein use hota hai.

### 14. Batch Normalization

- Training ko stable banata hai.
- Internal covariate shift ko reduce karta hai.

### 15. Dropout

- Overfitting ko reduce karta hai.
- Randomly neurons ko off kar diya jata hai.

### 16. L1 Regularization

- Sparsity laata hai.
- Feature selection mein helpful hai.

### 17. L2 Regularization

- Weights ko small rakhta hai.
- Overfitting ko reduce karta hai.

### 18. Momentum

- Gradient descent ko faster aur smoother banata hai.
- Oscillation ko kam karta hai.

### 19. Tuning Hyperparameters

- Learning rate, batch size, epochs aur layers ko tune karna.
- Model performance improve karne ke liye important hai.

---

## Unit III – Convolutional Neural Networks (CNN)

### 1. CNN

- Images aur spatial data ke liye powerful model hai.
- Features automatically learn karta hai.
- Very important exam topic.

### 2. Flattening

- 2D feature maps ko 1D vector mein convert karna.

### 3. Subsampling

- Spatial dimensions ko reduce karna.
- Pooling se similar kaam hota hai.

### 4. Padding

- Output size ko preserve karne ke liye edges par zeros add karna.

### 5. Stride

- Filter kitni step mein move karta hai.
- Output size ko affect karta hai.

### 6. Convolution Layer

- Feature extraction ka basic layer hai.
- Filters input par apply hote hain.

### 7. Pooling Layer

- Spatial size reduce karta hai.
- Computation ko kam karta hai aur overfitting ko reduce karta hai.

### 8. Loss Layer

- Predicted aur actual output ke beech error compute karta hai.

### 9. Dense Layer

- Fully connected layer hoti hai.
- Final classification/regression ke liye use hoti hai.

### 10. 1x1 Convolution

- Channel dimension change karne ke liye use hoti hai.
- Network ko efficient banati hai.

### 11. Inception Network

- Multiple filter sizes ka use karta hai.
- Feature extraction ko better banata hai.

### 12. Input Channels

- RGB images mein channels 3 hote hain.
- Channel concept important hai.

### 13. Transfer Learning

- Ek trained model ko dusre task ke liye reuse karna.
- Time aur data save karta hai.

### 14. One Shot Learning

- Bahut kam examples se learning karna.
- Face recognition mein use hota hai.

### 15. Dimension Reduction

- Features ko reduce karke model ko simple banana.
- PCA aur autoencoders ka use ho sakta hai.

### 16. Implementation of CNN

- CNN ko practical form mein implement karna.
- TensorFlow, Keras aur PyTorch common tools hain.

---

## Unit IV – RNN, NLP and Reinforcement Learning

### 1. Recurrent Neural Network (RNN)

- Sequential data ke liye use hoti hai.
- Previous information ko remember kar sakti hai.

### 2. LSTM

- RNN ke vanishing gradient problem ko solve karta hai.
- Long-term dependencies ko remember kar sakta hai.

### 3. GRU

- LSTM ka simpler version hai.
- Less parameters aur faster training.

### 4. Translation

- Source language ko target language mein convert karna.
- Sequence-to-sequence models mein use hota hai.

### 5. Beam Search

- Best sequence generate karne ka method hai.
- NLP mein translation aur text generation mein use hota hai.

### 6. Beam Width

- Kitne candidate sequences ko consider karna hai.
- Beam width bada hone par search expensive hota hai.

### 7. BLEU Score

- Machine translation quality evaluate karne ka metric hai.
- Higher BLEU better quality indicate karta hai.

### 8. Attention Model

- Important words par focus karta hai.
- Sequence models mein very useful hai.

### 9. Reinforcement Learning

- Agent environment ke saath interact karta hai aur reward seek karta hai.
- Goal: maximum cumulative reward.

### 10. RL Framework

- Agent, environment, state, action aur reward ka structure.

### 11. MDP

- Decision-making framework hai.
- State transition aur reward model par based hota hai.

### 12. Bellman Equations

- Value function ko recursively define karte hain.
- Dynamic programming ke liye important hai.

### 13. Value Iteration

- Optimal policy dhoondhne ka iterative method hai.

### 14. Policy Iteration

- Policy ko improve karne ka method hai.

### 15. Actor-Critic Model

- Policy aur value function dono ko learn karta hai.
- RL mein popular approach hai.

### 16. Q-Learning

- Model-free reinforcement learning method hai.
- Agent learns action-value function.

### 17. SARSA

- On-policy RL algorithm hai.
- Q-learning ke comparison mein thoda alag hai.

---

## Unit V – Applications and Advanced Topics

### 1. SVM

- Classification aur regression dono ke liye use hota hai.
- Maximum margin boundary dhoondhta hai.

### 2. Bayesian Learning

- Probabilistic reasoning par based hai.
- Bayes theorem aur posterior probability important hain.

### 3. Application of ML in Computer Vision

- Image classification, object detection aur face recognition mein use hoti hai.

### 4. Application of ML in Speech Processing

- Speech recognition, speaker identification aur audio analysis mein use hoti hai.

### 5. Application of ML in NLP

- Text classification, sentiment analysis, machine translation aur chatbots mein use hoti hai.

### 6. Case Study: ImageNet Competition

- Deep learning aur CNNs ki progress ko dikhane wala famous case study hai.

---

## Extra Revision Points

- Machine Learning ka end-to-end workflow: Data Collection -> Data Preprocessing -> Training -> Validation -> Testing -> Deployment.
- Overfitting vs Underfitting:
  - Overfitting: model training data ko bahut achhe se yaad kar leta hai, par new data par weak hota hai.
  - Underfitting: model simple hone ki wajah se patterns samajh nahi pata.
- Bias-Variance Tradeoff:
  - High bias => underfitting.
  - High variance => overfitting.
- Feature Engineering:
  - Important features ko select aur create karna model performance improve karta hai.
- Evaluation Metrics:
  - Classification ke liye Accuracy, Precision, Recall, F1-Score.
  - Regression ke liye MSE, RMSE, MAE.
- Confusion Matrix basics:
  - TP, TN, FP, FN ko samjho.
  - Precision aur Recall ka relation samjho.
- Deep Learning ke main advantages:
  - Automatic feature extraction.
  - Large datasets par strong performance.
  - Complex patterns samajhne mein powerful.

## Important Formulas

### 1. Regression and Classification

- Linear Regression: y = wx + b
- MSE = (1/n) Σ (y_i - ŷ_i)^2
- RMSE = √MSE
- MAE = (1/n) Σ |y_i - ŷ_i|
- Logistic Regression Probability: p = 1 / (1 + e^-z), where z = wx + b

### 2. Probability and Bayes

- Conditional Probability: P(A|B) = P(A ∩ B) / P(B)
- Bayes Theorem: P(A|B) = [P(B|A) P(A)] / P(B)
- Joint Probability: P(A ∩ B) = P(A) P(B|A)

### 3. Statistics

- Mean: μ = (1/n) Σ x_i
- Variance: σ^2 = (1/n) Σ (x_i - μ)^2
- Standard Deviation: σ = √σ^2
- Correlation: r = Cov(x,y) / (σ_x σ_y)

### 4. Neural Networks

- Gradient Descent: w_new = w_old - η ∂L/∂w
- Bias Update: b_new = b_old - η ∂L/∂b
- Sigmoid Activation: σ(x) = 1 / (1 + e^-x)
- Tanh Activation: tanh(x) = (e^x - e^-x) / (e^x + e^-x)
- ReLU Activation: ReLU(x) = max(0, x)
- Cross Entropy Loss: L = - Σ y log ŷ

### 5. CNN

- Output Size: O = floor((W - F + 2P) / S) + 1

### 6. Classification Metrics

- Accuracy = (TP + TN) / (TP + TN + FP + FN)
- Precision = TP / (TP + FP)
- Recall = TP / (TP + FN)
- F1 Score = 2PR / (P + R)

### 7. SVM and RL

- SVM Decision Function: f(x) = w·x + b
- Q-learning Update: Q(s,a) = Q(s,a) + α [r + γ max Q(s',a') - Q(s,a)]

---

## Simple Diagrams

### 1. Machine Learning Workflow

```text
Data Collection -> Data Preprocessing -> Feature Engineering
                     -> Training -> Validation -> Testing -> Deployment
```

### 2. Simple Neural Network

```text
Input Layer -> Hidden Layer -> Output Layer
x1, x2, x3      h1, h2, h3      y
```

### 3. CNN Flow

```text
Input Image -> Convolution -> Activation -> Pooling -> Flatten -> Dense Layer -> Output
```

---

## Important Exam Points

- High priority topics: Gradient Descent, Backpropagation, CNN, LSTM, MDP, Q-Learning.
- Medium priority topics: Regression, SVM, Bayesian Learning, Transfer Learning, Attention Model.
- Low priority topics: Hypothesis Testing, Beam Search, One-Shot Learning, Weight Initialization.
- Definitions, differences, formulas aur applications yaad rakho.
- Viva/exam ke liye algorithms ka comparison aur use cases clearly samjho.

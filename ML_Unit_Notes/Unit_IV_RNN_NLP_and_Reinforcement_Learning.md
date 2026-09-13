# Unit IV – RNN, NLP and Reinforcement Learning

## 1. Recurrent Neural Network (RNN)

RNN sequential data ke liye use hoti hai jahan current output previous information par depend karta hai. Iska use time-series, speech aur NLP mein hota hai.

### Key Feature

RNN hidden state ko maintain karti hai jo previous inputs ko remember kar sakta hai.

---

## 2. Vanishing Gradient Problem

RNN training ke dauran gradient bohot chhota ho sakta hai, jisse learning weak ho jati hai. Ye problem vanishing gradient kehlata hai.

---

## 3. LSTM

LSTM long short-term memory network hai jo vanishing gradient problem ko solve karta hai. Ye long-term dependencies ko remember kar sakta hai.

### Main Components

- Input gate
- Forget gate
- Output gate

---

## 4. GRU

GRU gated recurrent unit hai, jo LSTM ka simpler version hai. Isme kam parameters hote hain aur ye fast training provide karta hai.

---

## 5. Attention Mechanism

Attention mechanism model ko important words ya positions par focus karne mein help karta hai. Ye sequence models ko improve karta hai.

### Use Cases

- Machine translation
- Text summarization
- Image captioning

---

## 6. Translation

Translation ka matlab source language ko target language mein convert karna. Sequence-to-sequence models aur transformers isme commonly use hote hain.

---

## 7. Beam Search

Beam search best sequence generate karne ka method hai. Ye translation aur text generation mein use hota hai.

### How It Works

Multiple candidate sequences ko maintain karke best one select kiya jata hai.

---

## 8. BLEU Score

BLEU score machine translation quality evaluate karne ke liye use kiya jata hai. Higher BLEU score generally better quality ko indicate karta hai.

---

## 9. Reinforcement Learning Basics

Reinforcement Learning mein agent environment ke saath interact karta hai aur reward ke basis par seekhta hai.

### Core Components

- Agent
- Environment
- State
- Action
- Reward

---

## 10. RL Framework

Reinforcement learning ka structure action aur reward-driven hota hai. Agent ka goal maximum cumulative reward lana hota hai.

---

## 11. MDP

Markov Decision Process ek decision-making framework hai. Ye state transition aur reward model par based hota hai.

### Important Terms

- State
- Action
- Transition probability
- Reward

---

## 12. Bellman Equations

Bellman equations value function ko recursive form mein define karte hain. Ye dynamic programming aur RL mein bahut important hain.

---

## 13. Value Iteration and Policy Iteration

### Value Iteration

Optimal value function compute karta hai.

### Policy Iteration

Policy ko improve karne ka method hai.

---

## 14. Q-Learning and SARSA

### Q-Learning

Model-free RL algorithm hai aur action-value function seekhta hai.

### SARSA

On-policy RL algorithm hai jo current policy ke basis par learn karta hai.

---

## 15. Important Exam Points

- RNN sequential data ke liye use hoti hai.
- LSTM aur GRU vanishing gradient problem ko solve karte hain.
- Attention model important words par focus karta hai.
- Beam search aur BLEU score NLP mein important hain.
- Reinforcement learning mein reward-based learning hoti hai.

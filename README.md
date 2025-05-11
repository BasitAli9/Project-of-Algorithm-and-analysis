# Project-of-Algorithm-and-Analysis
# 🚀 Web Page Ranking Using HITS Algorithm in C++

This project implements the *HITS (Hyperlink-Induced Topic Search)* algorithm in *C++* to calculate *Authority* and *Hub* scores of web pages based on their link structure.

## 📚 What is HITS?

HITS is a link analysis algorithm that classifies web pages into:
- 🔍 *Authorities*: Pages that are considered reliable sources of information.
- 🧭 *Hubs*: Pages that link to many authority pages.

Each page is scored based on:
- 🔗 How many pages point to it (*Authority*)
- 📎 How many good pages it links to (*Hub*)

---

## ⚙ How It Works

1. 🧑‍💻 User enters the number of web pages (nodes).
2. 🧮 Provides an adjacency matrix showing links between pages.
3. 📥 Initializes hub and authority scores.
4. 🔁 Iteratively updates and normalizes scores.
5. 📊 Displays final scores.

---

## 🧪 Sample Input
Enter the number of nodes: 3 Enter the adjacency matrix: 0 1 1 0 0 1 1 0 0

## ✅ Sample Output

Final Authority and Hub Scores: Node 0: Authority = 0.5161, Hub = 0.6110 Node 1: Authority = 0.6804, Hub = 0.1393 Node 2: Authority = 0.5193, Hub = 0.7784

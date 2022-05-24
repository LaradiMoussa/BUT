import pyodbc
import matplotlib.pyplot as plt

conn=pyodbc.connect('DSN=BBD_Nodenot_Lakartxela')

cursor = conn.cursor()
sql= "select Article.Reference, Article.QteStock from Article where Article.prixHT > 5 order by Article.QteStock DESC"

RefArticles=[]
qteStockArticles=[]

cursor.execute(sql)

for row in cursor.fetchall():
    RefArticles.append(row[0])
    qteStockArticles.append(row[1])
    
plt.bar(RefArticles, qteStockArticles)
plt.xlabel("Reference des articles")
plt.ylabel("Stock articles")
plt.title("graphique des stocks des articles à plus de 5 euros à l'unité")
plt.show()
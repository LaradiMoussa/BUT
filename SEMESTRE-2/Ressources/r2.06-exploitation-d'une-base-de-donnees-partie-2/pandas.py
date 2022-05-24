import pyodbc
import matplotlib.pyplot as plt
import pandas as pd

conn=pyodbc.connect('DSN=BBD_Nodenot_Lakartxela')

cursor = conn.cursor()

x= input("quelle est la référenced de l'article ?")

df1 = pd.read_sql("SELECT Reference, Quantite FROM LigneDeCommande WHERE Reference LIKE ? ORDER BY Quantite DESC", conn, params=[f'{x}%'])

df1.plot(kind="bar", x="Reference", y="Quantite")
import pyodbc

conn=pyodbc.connect('DSN=BBD_Nodenot_Lakartxela')

cursor = conn.cursor()
filtre=input("Entrez le début des descriptifs qui vous intéressent : ")
sql= "select Article.* from Article where Article.Descriptif like ? and Article.Reference <> ? "
param = (f'{filtre}%', 'B12')
cursor.execute(sql, param)
for row in cursor.fetchall():
    print(row)
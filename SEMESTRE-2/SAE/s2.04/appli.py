import pyodbc
import matplotlib.pyplot as plt
import pandas as pd

conn=pyodbc.connect('DSN=BD_Accident_Lakartxela')

cursor = conn.cursor()


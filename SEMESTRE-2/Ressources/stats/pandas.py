import pandas as pd
import numpy
import matplotlib.pyplot as plt

Pic=pd.read_table('F:\BUT\SEMESTRE-2\stats\Pic.csv',sep=";", decimal=',', encoding='ANSI')

Pic['Age'].plot(kind="hist",bins=6)

plt.show()
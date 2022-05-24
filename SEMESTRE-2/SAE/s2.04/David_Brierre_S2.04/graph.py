import pyodbc
import pandas as pd
import matplotlib.pyplot as plt

def reqAI(date):
    # Préparation de la connexion à la BD avec le DSN 
    conn = pyodbc.connect('DSN=Lakartxela')   
    
    if date==0 :
        sql="SELECT MAccident.accident_id,MEtatSurface.libelle_etat_surface AS 'Etat surface' ,MIntemperie.libelle AS 'Intemperie' \
        FROM `MAccident`,MEtatSurface,MIntemperie WHERE MAccident.etat_surface_id = MEtatSurface.code_etat_surface AND MAccident.intemp_id = MIntemperie.code " 
    else : 
        sql="SELECT MAccident.accident_id,MEtatSurface.libelle_etat_surface AS 'Etat surface' ,MIntemperie.libelle AS 'Intemperie' \
        FROM `MAccident`,MEtatSurface,MIntemperie WHERE MAccident.etat_surface_id = MEtatSurface.code_etat_surface AND MAccident.intemp_id = MIntemperie.code \
        AND `date_id` IN (SELECT date_id FROM MDate WHERE YEAR(MDate.DateFormatStandard) ="+str(date)+")"
    
    dataframeEtatSurfaceIntemperie = pd.read_sql(sql,conn)
    
    graphiqueEtatSurfaceIntemperie = pd.crosstab(dataframeEtatSurfaceIntemperie["Etat surface"], dataframeEtatSurfaceIntemperie["Intemperie"], normalize="index")
    graphiqueEtatSurfaceIntemperie.plot(kind="bar",stacked=True)

    plt.title("Répartiton de la météo pour chaque état de la surface")
    plt.legend(bbox_to_anchor=(1.40, 1.0), loc="upper right")
    plt.show()

def reqAP(date):
    dicIntemperie = {"Beau temps":"Beau temps", #regrouper brouillard tempete et grele
                 "Pluie forte":"Mauvais temps",
                 "Pluie legere":"Mauvais temps",
                 "Neige":"Mauvais temps",
                 "Grele":"Mauvais temps",
                 "Brouillard":"Mauvais temps",
                 "Vent fort tempete":"Mauvais temps",
                 "Inconnu":"Temps inconnu"}
    
    conn = pyodbc.connect('DSN=Lakartxela')   
    
    if date==0 :
        sql="SELECT MAccident.accident_id AS 'Accident',MIntemperie.libelle AS 'Intemperie' \
        FROM `MAccident` JOIN MIntemperie ON MAccident.intemp_id = MIntemperie.code" 
    else : 
        sql="SELECT MAccident.accident_id AS 'Accident',MIntemperie.libelle AS 'Intemperie' \
            FROM `MAccident` JOIN MIntemperie ON MAccident.intemp_id = MIntemperie.code WHERE MAccident.date_id IN \
            (SELECT date_id FROM MDate WHERE YEAR(MDate.DateFormatStandard) ="+str(date)+")"
    
    dataframeAccidentIntemperie = pd.read_sql(sql,conn)
    dataframeAccidentIntemperie["Nombre d'accidents"] = 1
    dataframeAccidentIntemperie['Meteo'] = dataframeAccidentIntemperie['Intemperie'].map(dicIntemperie)

    graphiqueAccidentIntemperie = dataframeAccidentIntemperie[["Meteo", "Nombre d'accidents"]].groupby("Meteo").sum()
    graphiqueAccidentIntemperie = graphiqueAccidentIntemperie.sort_values("Nombre d'accidents", ascending = False)
    graphiqueAccidentIntemperie.plot(kind="pie", y="Nombre d'accidents")

    plt.text(-1.19,-1.2,"Il n\' y a aucun accident lorsqu\'il fait beau")
    plt.title("Répartition des accidents en fonction de la météo")
    plt.ylabel("")
    plt.legend("",frameon=False)
    plt.show()

def reqAE(date):
    
    conn = pyodbc.connect('DSN=Lakartxela')   
    
    if date==0 :
        sql="SELECT MAccident.accident_id AS 'Accident',MLuminosite.libelle AS 'Luminosite' FROM `MAccident` \
        JOIN MLuminosite ON MAccident.lum_id = MLuminosite.code WHERE cause_id = 86" 
    else : 
        sql="SELECT MAccident.accident_id AS 'Accident',MLuminosite.libelle AS 'Luminosite' FROM `MAccident` \
        JOIN MLuminosite ON MAccident.lum_id = MLuminosite.code WHERE cause_id = 86 AND MAccident.date_id IN \
        (SELECT date_id FROM MDate WHERE YEAR(MDate.DateFormatStandard) ="+str(date)+")"
 
    dataframeCauseLuminosite = pd.read_sql(sql,conn)
    dataframeCauseLuminosite["Nombre d'accidents par éblouissement par les phares"] = 1

    graphiqueCauseLuminosite = dataframeCauseLuminosite[["Luminosite", "Nombre d'accidents par éblouissement par les phares"]].groupby("Luminosite").sum()
    graphiqueCauseLuminosite = graphiqueCauseLuminosite.sort_values("Nombre d'accidents par éblouissement par les phares", ascending = False)
    graphiqueCauseLuminosite.plot(kind="bar")

    plt.title("Répartition des accidents par ébloussiement\npar les phares en fonction de la luminosité")
    plt.ylabel("")
    plt.legend("",frameon=False)
    plt.show()

def reqAL(date):

    conn = pyodbc.connect('DSN=Lakartxela') 
        
    if date==0 :
        sql="SELECT MLieu.lieu_id AS 'Lieu',COUNT(MAccident.lieu_id) AS Nombre FROM MAccident \
            JOIN MLieu ON MLieu.lieu_id = MAccident.lieu_id GROUP BY MAccident.lieu_id ORDER BY `Nombre` DESC LIMIT 5;"
    else :
        sql="SELECT MLieu.lieu_id AS 'Lieu',COUNT(MAccident.lieu_id) AS Nombre FROM MAccident \
            JOIN MLieu ON MLieu.lieu_id = MAccident.lieu_id WHERE MAccident.date_id IN \
            (SELECT date_id FROM MDate WHERE YEAR(MDate.DateFormatStandard) = 1984 ) GROUP BY MAccident.lieu_id ORDER BY `Nombre` DESC LIMIT 5;"
        
    dataframeAccidentLieu = pd.read_sql(sql,conn)    
    graphiqueAccidentLieu = dataframeAccidentLieu.set_index('Lieu')
        #graphiqueCauseLuminosite = graphiqueCauseLuminosite.sort_values("Nombre d'accidents par lieu", ascending = False)
    graphiqueAccidentLieu.plot(kind="bar")
    
    plt.title("Répartition des lieux par leur nombre d'accident")
    plt.ylabel("Nombre")
    plt.legend("",frameon=False)
    plt.show()


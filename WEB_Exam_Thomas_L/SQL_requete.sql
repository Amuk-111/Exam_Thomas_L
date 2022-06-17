//1 
INSERT INTO Joueur (ID_Joueur_1_Joueur, ID_Joueur_2_Joueur, joueur_1_temp_Joueur, Joueur_2_temp_Joueur) 
VALUE(Thomas, Demian, 3:00, 2:00)

//2 
INSERT INTO Joueur (ID_Joueur_1_Joueur, ID_Joueur_2_Joueur, joueur_1_temp_Joueur, Joueur_2_temp_Joueur) 
VALUE(Thomas, Demian, 3:00, 2:00)

INSERT INTO Joueur (ID_Joueur_1_Joueur, ID_Joueur_2_Joueur, joueur_1_temp_Joueur, Joueur_2_temp_Joueur) 
VALUE(Gerald, Alex, 3:00, 2:00)

INSERT INTO Joueur (ID_Joueur_1_Joueur, ID_Joueur_2_Joueur, joueur_1_temp_Joueur, Joueur_2_temp_Joueur) 
VALUE(Guillaume, Kenny, 3:00, 2:00)

INSERT INTO Joueur (ID_Joueur_1_Joueur, ID_Joueur_2_Joueur, joueur_1_temp_Joueur, Joueur_2_temp_Joueur) 
VALUE(Thomas_D, Nico, 3:00, 2:00)

INSERT INTO Joueur (ID_Joueur_1_Joueur, ID_Joueur_2_Joueur, joueur_1_temp_Joueur, Joueur_2_temp_Joueur) 
VALUE(Aurelien, JS, 3:00, 2:00)

//3
DELETE FROM Joueur
WHERE Joueur = "Nom a delet";

//4
SELECT FROM ID_Joueur_1_Joueur AND ID_Joueur_2_Joueur
FROM Partie_Joueur 
ORDER BY Joueur_1_victoire_Partie_Joueur
AND Joueur_2_victoire_Partie_Joueur

//5
SELECT FROM ID_Joueur_1_Joueur AND ID_Joueur_2_Joueur
FROM Joueur
ORDER BY joueur_1_temp_Joueur
AND Joueur_2_temp_Joueur 



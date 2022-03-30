-- phpMyAdmin SQL Dump
-- version 4.9.2
-- https://www.phpmyadmin.net/
--
-- Hôte : mysql-5.7
-- Généré le :  ven. 18 mars 2022 à 10:10
-- Version du serveur :  5.7.28
-- Version de PHP :  7.2.25

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de données :  `nodenot_bd1`
--

-- --------------------------------------------------------

--
-- Structure de la table `Article`
--

CREATE TABLE `Article` (
  `Reference` varchar(3) COLLATE utf8mb4_unicode_ci NOT NULL DEFAULT '',
  `Descriptif` varchar(255) COLLATE utf8mb4_unicode_ci DEFAULT '',
  `CodeCategorie` varchar(1) COLLATE utf8mb4_unicode_ci DEFAULT '',
  `CoutHT` decimal(6,2) NOT NULL DEFAULT '0.00',
  `PrixHT` decimal(7,2) NOT NULL DEFAULT '0.00',
  `QteStock` int(5) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Déchargement des données de la table `Article`
--

INSERT INTO `Article` (`Reference`, `Descriptif`, `CodeCategorie`, `CoutHT`, `PrixHT`, `QteStock`) VALUES
('B12', 'Beurre breton au détail ( prix par kg )', 'B', '4.25', '4.75', 11),
('B17', 'Bâtonnets de vanille ( paquet de 3 gousses )', 'G', '2.30', '3.25', 20),
('C13', 'Café lyophilisé ( pack de 10 sachets )', 'E', '2.74', '3.20', 17),
('C15', 'Café en grain( en paquet 250 g )', 'E', '2.73', '3.45', 31),
('C25', 'Café moulu ( en paquet 250 g )', 'E', '2.46', '3.20', 35),
('F25', 'Farine de froment ( paquet de 1 kg )', 'C', '0.56', '0.65', 40),
('G12', 'Foie gras de canard ( au kilo )', 'V', '29.89', '32.50', 0),
('G13', 'Foie gras d\'oie ( au kilo )', 'V', '22.33', '36.50', 44),
('G21', 'Médaillon de oie gras d\'oie ( au boîte de 200 g )', 'V', '7.12', '11.50', 20),
('H23', 'Huile d\'arachide supérieure ( bouteille 1 litre )', 'E', '2.28', '3.20', 6),
('H25', 'Huile d\'arachide supérieure ( bouteille 25 cl )', 'E', '0.82', '1.20', 2),
('J11', 'Biscottes ( paquet )', 'B', '0.81', '0.95', 0),
('J12', 'Pains au lait ( paquet  de 10 )', 'B', '0.90', '1.03', 25),
('J21', 'Biscuits boudoirs ( paquet  de 36 )', 'B', '1.28', '1.45', 34),
('K12', 'Céréales en pétale ( paquet )', 'C', '1.36', '1.60', 13),
('K16', 'Riz soufflé ( paquet )', 'C', '1.60', '1.82', 47),
('K21', 'Müesli complet ( paquet )', 'C', '2.04', '2.50', 12),
('M11', 'Moutarde à l\'ancienne ( pot de 125 g )', 'E', '1.39', '1.67', 44),
('M12', 'Moutarde à l\'estragon ( pot de 125 g )', 'E', '1.50', '1.87', 30),
('P11', 'Pruneaux séchés d\'Agen au détail ( prix au kg )', 'F', '2.30', '3.42', 34),
('Q22', 'Miel de montagne ( pot de 250 g )', 'S', '3.00', '4.10', 0),
('Q23', 'Miel d\'oranger ( pot de 250 g )', 'S', '3.25', '4.50', 29),
('Q24', 'Miel d\'accacia ( pot de 250 g )', 'S', '3.18', '4.25', 28),
('Q26', 'Miel de cactus ( pot de 250 g )', 'S', '3.95', '5.35', 0),
('Q31', 'Pollen ( pot de 200 g )', 'S', '4.54', '6.30', 6),
('S22', 'Sel fin de cuisine ( 250 g )', 'E', '0.32', '0.38', 0),
('S56', 'Sucre en morceaux ( boîte de 1 kg )', 'S', '0.82', '0.95', 10),
('S68', 'Sucre en poudre ( 500g )', 'S', '0.50', '0.57', 38),
('U12', 'Pommes de rainette ( prix au kg )', 'F', '0.95', '1.15', 7),
('U13', 'Pommes Golden ( prix au kg )', 'F', '0.98', '1.22', 44),
('U25', 'Poires William ( prix au kg )', 'F', '1.08', '1.31', 11),
('U27', 'Poires Pastraca  ( prix au kg )', 'F', '1.18', '1.43', 46),
('V45', 'Vinaigre de vin ( bouteille de 75 cl )', 'E', '1.14', '1.76', 12),
('W21', 'Marrons entiers ( boîte de 500 g )', 'F', '1.73', '2.10', 30),
('W22', 'Haricots verts extra-fins ( boîte de 500 g )', 'L', '1.31', '1.60', 0),
('W23', 'Petits pois à l\'étuvée ( boîte de 500 g )', 'L', '1.21', '1.50', 17),
('W24', 'Petites carottes nouvelles ( boîte de 500 g )', 'L', '1.09', '1.30', 26),
('W25', 'Flageolets à la graisse d\'oie ( boîte de 500 g )', 'L', '1.41', '1.70', 1);

-- --------------------------------------------------------

--
-- Structure de la table `Categorie`
--

CREATE TABLE `Categorie` (
  `CodeCategorie` varchar(1) COLLATE utf8mb4_unicode_ci NOT NULL DEFAULT '',
  `Libelle` varchar(255) COLLATE utf8mb4_unicode_ci DEFAULT '',
  `CodeTVA` varchar(1) COLLATE utf8mb4_unicode_ci DEFAULT ''
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Déchargement des données de la table `Categorie`
--

INSERT INTO `Categorie` (`CodeCategorie`, `Libelle`, `CodeTVA`) VALUES
('B', 'Boulangerie', 'R'),
('C', 'Céréales', 'R'),
('E', 'Epicerie', 'M'),
('F', 'Fruits', 'N'),
('G', 'Corps gras', 'M'),
('L', 'Légumes', 'R'),
('S', 'Sucreries', 'M'),
('V', 'Volailles', 'N');

-- --------------------------------------------------------

--
-- Structure de la table `Commande`
--

CREATE TABLE `Commande` (
  `Numero` smallint(5) NOT NULL DEFAULT '0',
  `DateCommande` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `NomClient` varchar(255) COLLATE utf8mb4_unicode_ci DEFAULT ''
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Déchargement des données de la table `Commande`
--

INSERT INTO `Commande` (`Numero`, `DateCommande`, `NomClient`) VALUES
(1101, '2007-09-13 00:00:00', 'DUPONT'),
(1102, '2007-09-13 00:00:00', 'ETCHENIQUE'),
(1107, '2007-09-13 00:00:00', 'MARTIN'),
(1115, '2007-09-13 00:00:00', 'OYHAMBURU'),
(1116, '2007-09-14 00:00:00', 'MARTIN'),
(1117, '2007-09-14 00:00:00', 'DUPONT'),
(1118, '2007-09-14 00:00:00', 'LATESTE'),
(1120, '2007-09-17 00:00:00', 'MARTIN');

-- --------------------------------------------------------

--
-- Structure de la table `LigneDeCommande`
--

CREATE TABLE `LigneDeCommande` (
  `Numero` smallint(5) NOT NULL DEFAULT '0',
  `Reference` varchar(3) COLLATE utf8mb4_unicode_ci NOT NULL DEFAULT '',
  `Quantite` smallint(5) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Déchargement des données de la table `LigneDeCommande`
--

INSERT INTO `LigneDeCommande` (`Numero`, `Reference`, `Quantite`) VALUES
(1101, 'K21', 20),
(1101, 'P11', 16),
(1101, 'Q26', 2),
(1102, 'K16', 15),
(1102, 'K21', 20),
(1102, 'U13', 16),
(1102, 'U27', 15),
(1107, 'J21', 19),
(1107, 'Q31', 11),
(1107, 'W21', 9),
(1107, 'W24', 11),
(1115, 'H25', 4),
(1115, 'K12', 15),
(1115, 'Q31', 8),
(1116, 'G21', 17),
(1116, 'H23', 1),
(1116, 'M12', 4),
(1116, 'Q31', 4),
(1116, 'S56', 2),
(1116, 'U27', 13),
(1116, 'W25', 5),
(1117, 'G21', 18),
(1117, 'H23', 19),
(1117, 'H25', 18),
(1117, 'K12', 13),
(1117, 'K16', 16),
(1117, 'M11', 6),
(1117, 'S56', 8),
(1117, 'S68', 3),
(1117, 'W21', 18),
(1117, 'W22', 17),
(1118, 'W22', 8),
(1120, 'H23', 14),
(1120, 'H25', 17),
(1120, 'J12', 6),
(1120, 'S56', 3);

-- --------------------------------------------------------

--
-- Doublure de structure pour la vue `MesArticlesPreferes`
-- (Voir ci-dessous la vue réelle)
--
CREATE TABLE `MesArticlesPreferes` (
`Descriptif` varchar(255)
,`CoutHT` decimal(6,2)
);

-- --------------------------------------------------------

--
-- Structure de la table `TVA`
--

CREATE TABLE `TVA` (
  `CodeTVA` varchar(1) COLLATE utf8mb4_unicode_ci NOT NULL DEFAULT '',
  `LibelleTVA` varchar(255) COLLATE utf8mb4_unicode_ci DEFAULT '',
  `TauxTVA` float NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Déchargement des données de la table `TVA`
--

INSERT INTO `TVA` (`CodeTVA`, `LibelleTVA`, `TauxTVA`) VALUES
('E', 'Exonéré', 0),
('M', 'Majoré', 0.075),
('N', 'Normal', 0.055),
('R', 'Réduit', 0.05);

-- --------------------------------------------------------

--
-- Structure de la vue `MesArticlesPreferes`
--
DROP TABLE IF EXISTS `MesArticlesPreferes`;
-- Erreur de lecture de structure pour la table nodenot_bd1.MesArticlesPreferes : #1142 - La commande 'SHOW VIEW' est interdite à l'utilisateur: 'tbrierre_bd'@'@172.18.0.3' sur la table 'MesArticlesPreferes'

--
-- Index pour les tables déchargées
--

--
-- Index pour la table `Article`
--
ALTER TABLE `Article`
  ADD PRIMARY KEY (`Reference`),
  ADD KEY `CodeCategorie` (`CodeCategorie`);

--
-- Index pour la table `Categorie`
--
ALTER TABLE `Categorie`
  ADD PRIMARY KEY (`CodeCategorie`),
  ADD KEY `CodeTVA` (`CodeTVA`);

--
-- Index pour la table `Commande`
--
ALTER TABLE `Commande`
  ADD PRIMARY KEY (`Numero`);

--
-- Index pour la table `LigneDeCommande`
--
ALTER TABLE `LigneDeCommande`
  ADD PRIMARY KEY (`Numero`,`Reference`),
  ADD KEY `Reference` (`Reference`);

--
-- Index pour la table `TVA`
--
ALTER TABLE `TVA`
  ADD PRIMARY KEY (`CodeTVA`);

--
-- Contraintes pour les tables déchargées
--

--
-- Contraintes pour la table `Article`
--
ALTER TABLE `Article`
  ADD CONSTRAINT `CT1` FOREIGN KEY (`CodeCategorie`) REFERENCES `Categorie` (`CodeCategorie`);

--
-- Contraintes pour la table `Categorie`
--
ALTER TABLE `Categorie`
  ADD CONSTRAINT `CT4` FOREIGN KEY (`CodeTVA`) REFERENCES `TVA` (`CodeTVA`);

--
-- Contraintes pour la table `LigneDeCommande`
--
ALTER TABLE `LigneDeCommande`
  ADD CONSTRAINT `Contrainte1` FOREIGN KEY (`Numero`) REFERENCES `Commande` (`Numero`),
  ADD CONSTRAINT `contrainte2` FOREIGN KEY (`Reference`) REFERENCES `Article` (`Reference`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;

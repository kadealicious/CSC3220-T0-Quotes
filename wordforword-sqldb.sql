--
-- File generated with SQLiteStudio v3.3.3 on Wed Feb 23 15:43:24 2022
--
-- Text encoding used: System
--
PRAGMA foreign_keys = off;
BEGIN TRANSACTION;

-- Table: author
CREATE TABLE author (authorID INTEGER PRIMARY KEY, "author-name" STRING NOT NULL UNIQUE, "num-quotes" INTEGER, authorDOB DATE, authorDOD DATE, "author-bio" STRING, "is-married" BOOLEAN, "num-children" BOOLEAN);

-- Table: categories
CREATE TABLE categories (categoryID INTEGER PRIMARY KEY, "category-name" STRING UNIQUE);

-- Table: categoryX
CREATE TABLE categoryX (categoryXID INTEGER PRIMARY KEY, quoteID INTEGER REFERENCES quote (quoteID), categoryID INTEGER REFERENCES categories (categoryID));

-- Table: quote
CREATE TABLE quote (quoteID INTEGER PRIMARY KEY, authorID INTEGER REFERENCES author (authorID) NOT NULL, categoryID INTEGER REFERENCES categories (categoryID), "quote-string" STRING, "quote-date" DATE);

COMMIT TRANSACTION;
PRAGMA foreign_keys = on;

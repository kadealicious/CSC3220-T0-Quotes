--
-- File generated with SQLiteStudio v3.3.3 on Mon Mar 7 14:49:14 2022
--
-- Text encoding used: System
--
PRAGMA foreign_keys = off;
BEGIN TRANSACTION;

-- Table: author
CREATE TABLE author (authorID INTEGER PRIMARY KEY, "author-name" STRING NOT NULL UNIQUE, "num-quotes" INTEGER, authorDOB DATE, authorDOD DATE, "author-bio" STRING, "is-married" BOOLEAN, "num-children" BOOLEAN);
INSERT INTO author (authorID, "author-name", "num-quotes", authorDOB, authorDOD, "author-bio", "is-married", "num-children") VALUES (-1, 'Unknown', NULL, NULL, NULL, NULL, NULL, NULL);
INSERT INTO author (authorID, "author-name", "num-quotes", authorDOB, authorDOD, "author-bio", "is-married", "num-children") VALUES (1, 'Carol Burnett', NULL, '04/26/1933', NULL, 'Carol Creighton Burnett is an American actress, comedian, singer, and writer. She is best known for her groundbreaking comedy variety show The Carol Burnett Show, which originally aired on CBS. It was one of the first of its kind to be hosted by a woman.', 1, 3);
INSERT INTO author (authorID, "author-name", "num-quotes", authorDOB, authorDOD, "author-bio", "is-married", "num-children") VALUES (2, 'Mitch Hedberg', NULL, '02/24/1968', '03/30/2005', 'Mitchell Lee Hedberg was an American stand-up comedian known for his surreal humor and deadpan delivery. His comedy typically featured short, sometimes one-line jokes mixed with absurd elements and non sequiturs.', 1, 0);
INSERT INTO author (authorID, "author-name", "num-quotes", authorDOB, authorDOD, "author-bio", "is-married", "num-children") VALUES (3, 'William Shakespeare', NULL, '04/??/1564', '04/23/1616', 'William Shakespeare was an English playwright, poet and actor. He is widely regarded as the greatest writer in the English language and the world''s greatest dramatist. He is often called England''s national poet and the "Bard of Avon".', 1, 3);

-- Table: categories
CREATE TABLE categories (categoryID INTEGER PRIMARY KEY, "category-name" STRING UNIQUE);
INSERT INTO categories (categoryID, "category-name") VALUES (-1, 'Miscellaneous');
INSERT INTO categories (categoryID, "category-name") VALUES (1, 'Inspirational');
INSERT INTO categories (categoryID, "category-name") VALUES (2, 'Funny');
INSERT INTO categories (categoryID, "category-name") VALUES (3, 'Realistic');
INSERT INTO categories (categoryID, "category-name") VALUES (4, 'Motivational');

-- Table: categoryX
CREATE TABLE categoryX (categoryXID INTEGER PRIMARY KEY, quoteID INTEGER REFERENCES quote (quoteID), categoryID INTEGER REFERENCES categories (categoryID));
INSERT INTO categoryX (categoryXID, quoteID, categoryID) VALUES (1, 1, 1);
INSERT INTO categoryX (categoryXID, quoteID, categoryID) VALUES (3, 3, 2);
INSERT INTO categoryX (categoryXID, quoteID, categoryID) VALUES (4, 2, 2);
INSERT INTO categoryX (categoryXID, quoteID, categoryID) VALUES (5, 5, 4);
INSERT INTO categoryX (categoryXID, quoteID, categoryID) VALUES (6, 4, -1);

-- Table: quote
CREATE TABLE quote (quoteID INTEGER PRIMARY KEY, authorID INTEGER REFERENCES author (authorID) NOT NULL, categoryID INTEGER REFERENCES categories (categoryID), "quote-string" STRING, "quote-date" DATE);
INSERT INTO quote (quoteID, authorID, categoryID, "quote-string", "quote-date") VALUES (1, 1, 1, 'When you have a dream, you’ve got to grab it and never let go.', NULL);
INSERT INTO quote (quoteID, authorID, categoryID, "quote-string", "quote-date") VALUES (2, 2, 2, 'I''m sick of following my dreams. I''m just going to ask them where they''re goin'', and hook up with them later.', NULL);
INSERT INTO quote (quoteID, authorID, categoryID, "quote-string", "quote-date") VALUES (3, 2, 2, 'An escalator can never break: it can only become stairs. You should never see an Escalator Temporarily Out Of Order sign, just Escalator Temporarily Stairs. Sorry for the convenience.', NULL);
INSERT INTO quote (quoteID, authorID, categoryID, "quote-string", "quote-date") VALUES (4, 3, -1, 'Though this be madness, yet there is method in ’t.', '??/??/1603');
INSERT INTO quote (quoteID, authorID, categoryID, "quote-string", "quote-date") VALUES (5, -1, 4, 'Life is change.  Growth is optional.  Choose wisely.', NULL);

COMMIT TRANSACTION;
PRAGMA foreign_keys = on;

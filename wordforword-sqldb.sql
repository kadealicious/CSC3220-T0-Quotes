--
-- File generated with SQLiteStudio v3.3.3 on Fri Mar 11 14:35:38 2022
--
-- Text encoding used: System
--
PRAGMA foreign_keys = off;
BEGIN TRANSACTION;

-- Table: author
CREATE TABLE author (authorID INTEGER PRIMARY KEY, author_name STRING NOT NULL UNIQUE, num_quotes INTEGER, authorDOB DATE, authorDOD DATE, author_bio STRING, is_married BOOLEAN, num_children BOOLEAN);
INSERT INTO author (authorID, author_name, num_quotes, authorDOB, authorDOD, author_bio, is_married, num_children) VALUES (-1, 'Unknown', NULL, NULL, NULL, NULL, NULL, NULL);
INSERT INTO author (authorID, author_name, num_quotes, authorDOB, authorDOD, author_bio, is_married, num_children) VALUES (1, 'Carol Burnett', NULL, '04/26/1933', NULL, 'Carol Creighton Burnett is an American actress, comedian, singer, and writer. She is best known for her groundbreaking comedy variety show The Carol Burnett Show, which originally aired on CBS. It was one of the first of its kind to be hosted by a woman.', 1, 3);
INSERT INTO author (authorID, author_name, num_quotes, authorDOB, authorDOD, author_bio, is_married, num_children) VALUES (2, 'Mitch Hedberg', NULL, '02/24/1968', '03/30/2005', 'Mitchell Lee Hedberg was an American stand-up comedian known for his surreal humor and deadpan delivery. His comedy typically featured short, sometimes one-line jokes mixed with absurd elements and non sequiturs.', 1, 0);
INSERT INTO author (authorID, author_name, num_quotes, authorDOB, authorDOD, author_bio, is_married, num_children) VALUES (3, 'William Shakespeare', NULL, '04/??/1564', '04/23/1616', 'William Shakespeare was an English playwright, poet and actor. He is widely regarded as the greatest writer in the English language and the world''s greatest dramatist. He is often called England''s national poet and the "Bard of Avon".', 1, 3);

-- Table: categories
CREATE TABLE categories (categoryID INTEGER PRIMARY KEY, category_name STRING UNIQUE);
INSERT INTO categories (categoryID, category_name) VALUES (-1, 'Miscellaneous');
INSERT INTO categories (categoryID, category_name) VALUES (1, 'Inspirational');
INSERT INTO categories (categoryID, category_name) VALUES (2, 'Funny');
INSERT INTO categories (categoryID, category_name) VALUES (4, 'Motivational');

-- Table: quote
CREATE TABLE quote (quoteID INTEGER PRIMARY KEY, authorID INTEGER REFERENCES author (authorID) NOT NULL, categoryID INTEGER REFERENCES categories (categoryID), quote_string STRING, quote_date DATE);
INSERT INTO quote (quoteID, authorID, categoryID, quote_string, quote_date) VALUES (1, 1, 1, 'When you have a dream, you’ve got to grab it and never let go.', NULL);
INSERT INTO quote (quoteID, authorID, categoryID, quote_string, quote_date) VALUES (2, 2, 2, 'I''m sick of following my dreams. I''m just going to ask them where they''re goin'', and hook up with them later.', NULL);
INSERT INTO quote (quoteID, authorID, categoryID, quote_string, quote_date) VALUES (3, 2, 2, 'An escalator can never break: it can only become stairs. You should never see an Escalator Temporarily Out Of Order sign, just Escalator Temporarily Stairs. Sorry for the convenience.', NULL);
INSERT INTO quote (quoteID, authorID, categoryID, quote_string, quote_date) VALUES (4, 3, -1, 'Though this be madness, yet there is method in ’t.', '??/??/1603');
INSERT INTO quote (quoteID, authorID, categoryID, quote_string, quote_date) VALUES (5, -1, 4, 'Life is change.  Growth is optional.  Choose wisely.', NULL);

COMMIT TRANSACTION;
PRAGMA foreign_keys = on;

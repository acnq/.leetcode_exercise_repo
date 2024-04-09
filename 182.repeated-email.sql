SELECT email FROM
  (
    SELECT email, COUNT(email) AS num 
    FROM Person 
    GROUP BY email
  ) AS statisitcs
WHERE num > 1;

SELECT email FROM Person 
GROUP BY email 
HAVING COUNT(email) > 1;
SELECT a.Name AS 'Employee'FROM Employee AS a, Employee AS b 
WHERE a.ManagerId = b.id AND a.salary > b.salary;
SELECT a.Name AS Employee 
FROM Employee AS a JOIN Employee AS b
ON a.ManagerId = b.id 
AND a.salary > b.salary

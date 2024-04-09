SELECT name AS 'Customers'
FROM Customers
WHERE id NOT IN
(
  SELECT customerId FROM Orders
);

SELECT name AS 'Customers'
FROM Customers LEFT JOIN Orders 
ON Customers.id = Orders.customerId
WHERE Orders.CustomerId IS NULL
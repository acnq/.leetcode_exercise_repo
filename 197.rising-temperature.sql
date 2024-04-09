SELECT a.id AS Id FROM weather AS a, weather AS b 
WHERE datediff(a.recordDate, b.recordData) = 1 AND a.temperature > b.temperature;
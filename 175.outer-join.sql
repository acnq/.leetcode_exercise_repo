SELECT FirstName, LastName, City, SCHEMAtate FROM
Person LEFT JOIN Address
on Person.personId = Address.personId;
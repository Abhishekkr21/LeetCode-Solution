SELECT E.name AS "Employee"
FROM Employee E
LEFT JOIN Employee B
ON E.managerId = B.id
WHERE E.salary > B.salary;

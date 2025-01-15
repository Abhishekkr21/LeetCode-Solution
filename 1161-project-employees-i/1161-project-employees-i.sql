SELECT project_id, ROUND(SUM(E.experience_years)/COUNT(*),2) AS average_years
FROM Project p 
LEFT JOIN Employee E USING (employee_id)
GROUP BY p.project_id;

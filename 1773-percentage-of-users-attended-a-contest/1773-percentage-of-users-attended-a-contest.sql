SELECT contest_id, ROUND(count(*)/(SELECT COUNT(*) FROM Users) *100,2) AS percentage
FROM Register 
LEFT JOIN Users ON Users.user_id= Register.user_id
GROUP BY Contest_id 
ORDER BY percentage DESC , contest_id ASC;

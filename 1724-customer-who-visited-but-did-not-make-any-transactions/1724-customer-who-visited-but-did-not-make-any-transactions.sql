SELECT V.customer_id, count(*) 
AS count_no_trans 
FROM Visits V 
LEFT JOIN Transactions T 
ON V.visit_id = T.visit_id
WHERE T.visit_id IS NULL 
GROUP BY V.customer_id;

# Write your MySQL query statement below
SELECT project_id , ROUND((SUM(u.experience_years) / COUNT(p.employee_id)),2) AS average_years
FROM Project P
LEFT JOIN Employee u
ON p.employee_id = u.employee_id
GROUP BY p.project_id;

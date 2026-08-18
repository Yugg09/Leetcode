# Write your MySQL query statement below
SELECT Today.id
FROM Weather Today
JOIN Weather Yesterday
 ON Today.recordDate = DATE_ADD(Yesterday.recordDate , INTERVAL 1 DAY)
  WHERE Today.temperature > Yesterday.temperature;

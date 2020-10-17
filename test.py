import numpy as np

line = np.array([2, 3, 4, 5, 6])
end = np.where(line == 2)

print(end[0][0])

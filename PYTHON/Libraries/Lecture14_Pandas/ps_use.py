## Pandas is a powerful library for data manipulation and analysis in Python. It provides data structures like Series and DataFrame, which are essential for handling structured data. Below is an example of how to use Pandas to create a DataFrame, perform some basic operations, and analyze the data.
## To use pandas, we need to import it first

import pandas as pd

## Creating a DataFrame
data = {
    'Name': ['Alice', 'Bob', 'Charlie', 'David'],
    'Age': [25, 30, 35, 40],
    'City': ['New York', 'Los Angeles', 'Chicago', 'Houston']
}   

df = pd.DataFrame(data)
print(df)

# more uses of pandas
## Basic Operations
# Display the first few rows of the DataFrame
 
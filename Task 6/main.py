#pandas is used to write the data we get into a CSV file
import pandas as pd
#pytrends is an API that can analyse Google Trends data and 
#give it back as a datalist
import pytrends
from pytrends.request import TrendReq

# execute the TrendReq method by passing the host language (hl) and timezone (tz) parameters
pytrends = TrendReq(hl='en-US', tz=360)

kw_list = ["Machine Learning"]
pytrends.build_payload(kw_list, cat=0, timeframe='all', geo='', gprop='')
data = pytrends.interest_over_time()

# The axis is to check whether the particular label is in a column or row
data = data.drop(labels=['isPartial'],axis='columns')
print(data)

dataset = []
dataset.append(data)

result = pd.concat(dataset, axis=1)
result.to_csv('Analysis.csv')

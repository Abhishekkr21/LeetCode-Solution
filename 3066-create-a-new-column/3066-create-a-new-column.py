import pandas as pd

def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
    df = employees.assign(bonus= employees.salary *2)
    return df
    
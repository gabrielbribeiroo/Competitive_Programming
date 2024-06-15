'''
O seu professor gostaria de fazer um programa com as seguintes características:
Leia uma data no formato DD/MM/AA;
Imprima a data no formato MM/DD/AA;
Imprima a data no formato AA/MM/DD;
Imprima a data no formato DD-MM-AA.
'''

def main():
    import sys
    input = sys.stdin.read().strip()
    
    dd, mm, aa = input.split("/") # Leitura da data
    
    # Imprime a data em diferentes formatos
    print(f"{mm}/{dd}/{aa}")
    print(f"{aa}/{mm}/{dd}")
    print(f"{dd}-{mm}-{aa}")

if __name__ == "__main__":
    main()

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

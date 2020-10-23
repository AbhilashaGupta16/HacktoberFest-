#This is a simple python program for Encryption and Decryption of messages



#decryption Key
decrypted = b"abcdefghijklmnopqrstuvwxyz "
#encryption Key
encrypted = b"qwertyuiopasdfghjklzxcvbnm "

encrypt_table = bytes.maketrans(decrypted, encrypted)
decrypt_table = bytes.maketrans(encrypted, decrypted)

result = ''
choice = ''
message = ''

while choice != '0':
    choice = input("\n Do you want to encrypt or decrypt the message?\n 1 to encrypt, 2 to decrypt or 0 to exit program. ")

    if choice == '1':
        message = input('\nEnter message for encryption: ')
        result = message.translate(encrypt_table)
        print(result + '\n\n')

    elif choice == '2':
        message = input('\nEnter message to decrypt: ')
        result = message.translate(decrypt_table)
        print(result + '\n\n')

    elif choice != '0':
        print('You have entered an invalid input, please try again. \n\n')

#Sample Out Put

#Do you want to encrypt or decrypt the message?
 #1 to encrypt, 2 to decrypt or 0 to exit program. 1

#Enter message for encryption: hello
#itssg



 #Do you want to encrypt or decrypt the message?
 #1 to encrypt, 2 to decrypt or 0 to exit program. 2

#Enter message to decrypt: itssg
#hello

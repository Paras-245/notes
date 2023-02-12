## Ownership of Files :
### User:
- a user is the owner of the file
- the person who created the file
### Group :
- A user-group can contain multiple users.
- all users belonging to group will have the same access permissions to the file
### Others :
- Everybody else
- neither created the file , nor he belongs to a usergroup who could own the file

## Permissions of Files :
### Read :
- authority to open and read the file
- read on directory gives you the ability to lists its content
- it is the Lowest Privelage
### Write :
- to modify the contents of file
- write on directory gives you the authority to add, remove and rename files stored
### Execute :
- you can execute program as a process
- you cant run a program unless you have execute permission
### Permissions using characters
```sh
-rw-rw-r--
File type|user|group|others|
```
- r : read
- w : write
- x : execute
### Permissions using numbers :
- 0 : for no permission 
- 1 : for execute
- 2 : for write
- 4 : for read
we add the numbers for resulting permissions
### Symbolic Mode :
- + for adding permissions 
- - for removing permission
- = sets and overrides permissions
- u : user/owner
- g : group 
- o : other 
- a : all


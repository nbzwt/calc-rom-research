Use this to disassemble a t4X rom. It's not done yet, but it will be someday.

Command line syntax:

	t4xdisassembler <source.rom> <destination.txt> [labels.txt]

source.rom - this is a t4x rom
destination.txt - this is where the disassembly will go
labels.txt - this is a labels file, optional

These file extensions can be whatever, just understand that the .rom should be
a rom and the .txt files are text files.


For the labels file, you can specify your own labels instead of using the default ones

The syntax is:
:Addr l Label

Where: 
: is literally :
Addr is the 4 nibble address
l is literally l
label is a label

For example:
:0000 l start
:1000 l page1Start
:1337 l coolioAddress
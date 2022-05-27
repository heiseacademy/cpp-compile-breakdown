ENTRY(_start)
OUTPUT_FORMAT(elf32-i386)
SECTIONS
{
    # Offset
    . = 0x01000000;
    .text :
    {
        *(.text)
    }
    .data : 
    { 
        *(.data) 
    }
    .bss : 
    { 
        *(.bss) 
    }
}

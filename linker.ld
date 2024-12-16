ENTRY(start)
SECTIONS
{
    . = 0x100000;

    .text : {
        *(.text)
    }

    .rodatat : {
        *(.rodata)
    }

    .data : {
        *(.data)
    }

    .bss : {
        *(.bss)
        *(COMMON)
    }
}

;hello.o：     文件格式 elf64-x86-64


;Disassembly of section .text:

;0000000000000000 <main>:
       	push   %rbp
       	mov    %rsp,%rbp
    	lea    0x0(%rip),%rdi        # b <main+0xb>
       	mov    $0x0,%eax
       	callq  15 <main+0x15>
       	mov    $0x0,%eax
       	pop    %rbp
       	retq   


write：     文件格式 elf64-x86-64


Disassembly of section .init:

0000000000000530 <_init>:
 530:	48 83 ec 08          	sub    $0x8,%rsp
 534:	48 8b 05 a5 0a 20 00 	mov    0x200aa5(%rip),%rax        # 200fe0 <__gmon_start__>
 53b:	48 85 c0             	test   %rax,%rax
 53e:	74 02                	je     542 <_init+0x12>
 540:	ff d0                	callq  *%rax
 542:	48 83 c4 08          	add    $0x8,%rsp
 546:	c3                   	retq   

Disassembly of section .plt:

0000000000000550 <.plt>:
 550:	ff 35 b2 0a 20 00    	pushq  0x200ab2(%rip)        # 201008 <_GLOBAL_OFFSET_TABLE_+0x8>
 556:	ff 25 b4 0a 20 00    	jmpq   *0x200ab4(%rip)        # 201010 <_GLOBAL_OFFSET_TABLE_+0x10>
 55c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000000560 <write@plt>:
 560:	ff 25 b2 0a 20 00    	jmpq   *0x200ab2(%rip)        # 201018 <write@GLIBC_2.2.5>
 566:	68 00 00 00 00       	pushq  $0x0
 56b:	e9 e0 ff ff ff       	jmpq   550 <.plt>

Disassembly of section .plt.got:

0000000000000570 <.plt.got>:
 570:	ff 25 82 0a 20 00    	jmpq   *0x200a82(%rip)        # 200ff8 <__cxa_finalize@GLIBC_2.2.5>
 576:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

0000000000000580 <_start>:
 580:	31 ed                	xor    %ebp,%ebp
 582:	49 89 d1             	mov    %rdx,%r9
 585:	5e                   	pop    %rsi
 586:	48 89 e2             	mov    %rsp,%rdx
 589:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
 58d:	50                   	push   %rax
 58e:	54                   	push   %rsp
 58f:	4c 8d 05 da 01 00 00 	lea    0x1da(%rip),%r8        # 770 <__libc_csu_fini>
 596:	48 8d 0d 63 01 00 00 	lea    0x163(%rip),%rcx        # 700 <__libc_csu_init>
 59d:	48 8d 3d 0c 01 00 00 	lea    0x10c(%rip),%rdi        # 6b0 <main>
 5a4:	ff 15 2e 0a 20 00    	callq  *0x200a2e(%rip)        # 200fd8 <__libc_start_main@GLIBC_2.2.5>
 5aa:	f4                   	hlt    
 5ab:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000005b0 <deregister_tm_clones>:
 5b0:	48 8d 3d 79 0a 20 00 	lea    0x200a79(%rip),%rdi        # 201030 <__TMC_END__>
 5b7:	48 8d 05 79 0a 20 00 	lea    0x200a79(%rip),%rax        # 201037 <__TMC_END__+0x7>
 5be:	55                   	push   %rbp
 5bf:	48 29 f8             	sub    %rdi,%rax
 5c2:	48 89 e5             	mov    %rsp,%rbp
 5c5:	48 83 f8 0e          	cmp    $0xe,%rax
 5c9:	76 15                	jbe    5e0 <deregister_tm_clones+0x30>
 5cb:	48 8b 05 fe 09 20 00 	mov    0x2009fe(%rip),%rax        # 200fd0 <_ITM_deregisterTMCloneTable>
 5d2:	48 85 c0             	test   %rax,%rax
 5d5:	74 09                	je     5e0 <deregister_tm_clones+0x30>
 5d7:	5d                   	pop    %rbp
 5d8:	ff e0                	jmpq   *%rax
 5da:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
 5e0:	5d                   	pop    %rbp
 5e1:	c3                   	retq   
 5e2:	0f 1f 40 00          	nopl   0x0(%rax)
 5e6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 5ed:	00 00 00 

00000000000005f0 <register_tm_clones>:
 5f0:	48 8d 3d 39 0a 20 00 	lea    0x200a39(%rip),%rdi        # 201030 <__TMC_END__>
 5f7:	48 8d 35 32 0a 20 00 	lea    0x200a32(%rip),%rsi        # 201030 <__TMC_END__>
 5fe:	55                   	push   %rbp
 5ff:	48 29 fe             	sub    %rdi,%rsi
 602:	48 89 e5             	mov    %rsp,%rbp
 605:	48 c1 fe 03          	sar    $0x3,%rsi
 609:	48 89 f0             	mov    %rsi,%rax
 60c:	48 c1 e8 3f          	shr    $0x3f,%rax
 610:	48 01 c6             	add    %rax,%rsi
 613:	48 d1 fe             	sar    %rsi
 616:	74 18                	je     630 <register_tm_clones+0x40>
 618:	48 8b 05 d1 09 20 00 	mov    0x2009d1(%rip),%rax        # 200ff0 <_ITM_registerTMCloneTable>
 61f:	48 85 c0             	test   %rax,%rax
 622:	74 0c                	je     630 <register_tm_clones+0x40>
 624:	5d                   	pop    %rbp
 625:	ff e0                	jmpq   *%rax
 627:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
 62e:	00 00 
 630:	5d                   	pop    %rbp
 631:	c3                   	retq   
 632:	0f 1f 40 00          	nopl   0x0(%rax)
 636:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 63d:	00 00 00 

0000000000000640 <__do_global_dtors_aux>:
 640:	80 3d e9 09 20 00 00 	cmpb   $0x0,0x2009e9(%rip)        # 201030 <__TMC_END__>
 647:	75 27                	jne    670 <__do_global_dtors_aux+0x30>
 649:	48 83 3d a7 09 20 00 	cmpq   $0x0,0x2009a7(%rip)        # 200ff8 <__cxa_finalize@GLIBC_2.2.5>
 650:	00 
 651:	55                   	push   %rbp
 652:	48 89 e5             	mov    %rsp,%rbp
 655:	74 0c                	je     663 <__do_global_dtors_aux+0x23>
 657:	48 8b 3d ca 09 20 00 	mov    0x2009ca(%rip),%rdi        # 201028 <__dso_handle>
 65e:	e8 0d ff ff ff       	callq  570 <.plt.got>
 663:	e8 48 ff ff ff       	callq  5b0 <deregister_tm_clones>
 668:	5d                   	pop    %rbp
 669:	c6 05 c0 09 20 00 01 	movb   $0x1,0x2009c0(%rip)        # 201030 <__TMC_END__>
 670:	f3 c3                	repz retq 
 672:	0f 1f 40 00          	nopl   0x0(%rax)
 676:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 67d:	00 00 00 

0000000000000680 <frame_dummy>:
 680:	48 8d 3d 61 07 20 00 	lea    0x200761(%rip),%rdi        # 200de8 <__JCR_END__>
 687:	48 83 3f 00          	cmpq   $0x0,(%rdi)
 68b:	75 0b                	jne    698 <frame_dummy+0x18>
 68d:	e9 5e ff ff ff       	jmpq   5f0 <register_tm_clones>
 692:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
 698:	48 8b 05 49 09 20 00 	mov    0x200949(%rip),%rax        # 200fe8 <_Jv_RegisterClasses>
 69f:	48 85 c0             	test   %rax,%rax
 6a2:	74 e9                	je     68d <frame_dummy+0xd>
 6a4:	55                   	push   %rbp
 6a5:	48 89 e5             	mov    %rsp,%rbp
 6a8:	ff d0                	callq  *%rax
 6aa:	5d                   	pop    %rbp
 6ab:	e9 40 ff ff ff       	jmpq   5f0 <register_tm_clones>

00000000000006b0 <main>:
#include <stdio.h>
#include <unistd.h>

int main()
{
 6b0:	55                   	push   %rbp
 6b1:	48 89 e5             	mov    %rsp,%rbp
 6b4:	48 83 ec 10          	sub    $0x10,%rsp
    char msg[] = "hello, world.\n";
 6b8:	48 b8 68 65 6c 6c 6f 	movabs $0x77202c6f6c6c6568,%rax
 6bf:	2c 20 77 
 6c2:	48 89 45 f1          	mov    %rax,-0xf(%rbp)
 6c6:	c7 45 f9 6f 72 6c 64 	movl   $0x646c726f,-0x7(%rbp)
 6cd:	66 c7 45 fd 2e 0a    	movw   $0xa2e,-0x3(%rbp)
 6d3:	c6 45 ff 00          	movb   $0x0,-0x1(%rbp)
    write(1, msg, sizeof(msg) - 1);
 6d7:	48 8d 45 f1          	lea    -0xf(%rbp),%rax
 6db:	ba 0e 00 00 00       	mov    $0xe,%edx
 6e0:	48 89 c6             	mov    %rax,%rsi
 6e3:	bf 01 00 00 00       	mov    $0x1,%edi
 6e8:	e8 73 fe ff ff       	callq  560 <write@plt>

    return 0;
 6ed:	b8 00 00 00 00       	mov    $0x0,%eax
}
 6f2:	c9                   	leaveq 
 6f3:	c3                   	retq   
 6f4:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 6fb:	00 00 00 
 6fe:	66 90                	xchg   %ax,%ax

0000000000000700 <__libc_csu_init>:
 700:	41 57                	push   %r15
 702:	41 56                	push   %r14
 704:	41 89 ff             	mov    %edi,%r15d
 707:	41 55                	push   %r13
 709:	41 54                	push   %r12
 70b:	4c 8d 25 c6 06 20 00 	lea    0x2006c6(%rip),%r12        # 200dd8 <__frame_dummy_init_array_entry>
 712:	55                   	push   %rbp
 713:	48 8d 2d c6 06 20 00 	lea    0x2006c6(%rip),%rbp        # 200de0 <__init_array_end>
 71a:	53                   	push   %rbx
 71b:	49 89 f6             	mov    %rsi,%r14
 71e:	49 89 d5             	mov    %rdx,%r13
 721:	4c 29 e5             	sub    %r12,%rbp
 724:	48 83 ec 08          	sub    $0x8,%rsp
 728:	48 c1 fd 03          	sar    $0x3,%rbp
 72c:	e8 ff fd ff ff       	callq  530 <_init>
 731:	48 85 ed             	test   %rbp,%rbp
 734:	74 20                	je     756 <__libc_csu_init+0x56>
 736:	31 db                	xor    %ebx,%ebx
 738:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
 73f:	00 
 740:	4c 89 ea             	mov    %r13,%rdx
 743:	4c 89 f6             	mov    %r14,%rsi
 746:	44 89 ff             	mov    %r15d,%edi
 749:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
 74d:	48 83 c3 01          	add    $0x1,%rbx
 751:	48 39 dd             	cmp    %rbx,%rbp
 754:	75 ea                	jne    740 <__libc_csu_init+0x40>
 756:	48 83 c4 08          	add    $0x8,%rsp
 75a:	5b                   	pop    %rbx
 75b:	5d                   	pop    %rbp
 75c:	41 5c                	pop    %r12
 75e:	41 5d                	pop    %r13
 760:	41 5e                	pop    %r14
 762:	41 5f                	pop    %r15
 764:	c3                   	retq   
 765:	90                   	nop
 766:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 76d:	00 00 00 

0000000000000770 <__libc_csu_fini>:
 770:	f3 c3                	repz retq 

Disassembly of section .fini:

0000000000000774 <_fini>:
 774:	48 83 ec 08          	sub    $0x8,%rsp
 778:	48 83 c4 08          	add    $0x8,%rsp
 77c:	c3                   	retq   

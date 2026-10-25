// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144e7e260 FUN_144e7e260 body=195 status=ok
// SIG undefined FUN_144e7e260(void)

void FUN_144e7e260(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  ushort uVar1;
  char cVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint local_res10 [2];
  
  local_res10[0] = 0x1312f76;
  (**(code **)(*param_2 + 8))(param_2,local_res10,4);
  cVar2 = FUN_144b68010(param_3);
  if (cVar2 != '\0') {
    uVar3 = FUN_144b67f80(param_3);
    cVar2 = FUN_144e61f10(uVar3);
    if (cVar2 != '\0') {
      uVar4 = 0x802;
      goto LAB_144e7e2cf;
    }
  }
  cVar2 = FUN_144b68290(param_3);
  uVar4 = 2;
  if (cVar2 != '\0') {
    uVar4 = 0x202;
  }
LAB_144e7e2cf:
  cVar2 = FUN_144e69da0(param_3);
  uVar1 = uVar4 | 0x400;
  if (cVar2 == '\0') {
    uVar1 = uVar4;
  }
  local_res10[0] = (uint)uVar1;
  (**(code **)(*param_2 + 8))(param_2,local_res10,4);
  return;
}



// FUNCTION 144e7e330 FUN_144e7e330 body=43 status=ok
// SIG undefined FUN_144e7e330(void)

undefined8 * FUN_144e7e330(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::GenericOutputFile::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 144e7e360 FUN_144e7e360 body=2799 status=ok
// SIG undefined FUN_144e7e360(void)

void FUN_144e7e360(undefined8 param_1,int param_2)

{
  char *_Dst;
  char *_Src;
  undefined8 ***pppuVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char *pcVar4;
  short *psVar5;
  undefined8 ****ppppuVar6;
  void *_Dst_00;
  ulonglong _Size;
  size_t sVar7;
  undefined8 ****_Buf;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  char *local_f0;
  ulonglong local_e8;
  int local_d8;
  undefined8 ***local_d0 [2];
  ulonglong local_c0;
  ulonglong local_b8;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d8 = param_2;
  pcVar4 = getenv("IEXDEBUGTHROW");
  if (pcVar4 != (char *)0x0) {
    DebugBreak();
  }
  pcVar4 = strerror(param_2);
  FUN_144b65a50(local_d0,param_1);
  while( true ) {
    uVar3 = local_b8;
    uVar2 = local_c0;
    pppuVar1 = local_d0[0];
    ppppuVar6 = local_d0;
    if (0xf < local_b8) {
      ppppuVar6 = (undefined8 ****)local_d0[0];
    }
    if (local_c0 < 2) break;
    sVar7 = local_c0 - 1;
    _Buf = ppppuVar6;
    while( true ) {
      psVar5 = memchr(_Buf,0x25,sVar7);
      if (psVar5 == (short *)0x0) goto LAB_144e7e587;
      if (*psVar5 == 0x5425) break;
      _Buf = (undefined8 ****)((longlong)psVar5 + 1);
      sVar7 = (longlong)ppppuVar6 + ((uVar2 - 1) - (longlong)_Buf);
    }
    uVar8 = (longlong)psVar5 - (longlong)ppppuVar6;
    if (uVar8 == 0xffffffffffffffff) break;
    _Size = 0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (pcVar4[_Size] != '\0');
    if (uVar2 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_14709e5c0();
    }
    uVar10 = 2;
    if (uVar2 - uVar8 < 2) {
      uVar10 = uVar2 - uVar8;
    }
    if (uVar10 == _Size) {
      ppppuVar6 = local_d0;
      if (0xf < uVar3) {
        ppppuVar6 = (undefined8 ****)pppuVar1;
      }
      memmove((void *)((longlong)ppppuVar6 + uVar8),pcVar4,_Size);
    }
    else {
      lVar9 = (uVar2 - uVar10) - uVar8;
      if (_Size < uVar10) {
        ppppuVar6 = local_d0;
        if (0xf < uVar3) {
          ppppuVar6 = (undefined8 ****)local_d0[0];
        }
        _Dst_00 = (void *)((longlong)ppppuVar6 + uVar8);
        memmove(_Dst_00,pcVar4,_Size);
        memmove((void *)((longlong)_Dst_00 + _Size),(void *)((longlong)_Dst_00 + uVar10),lVar9 + 1);
        local_c0 = (uVar2 - uVar10) + _Size;
      }
      else {
        uVar11 = _Size - uVar10;
        if (uVar3 - uVar2 < uVar11) {
          local_f8 = uVar10;
          local_f0 = pcVar4;
          local_e8 = _Size;
          FUN_144e7f0b0(local_d0,uVar11,0);
        }
        else {
          local_c0 = uVar2 + uVar11;
          ppppuVar6 = local_d0;
          if (0xf < uVar3) {
            ppppuVar6 = (undefined8 ****)local_d0[0];
          }
          _Dst = (char *)(uVar8 + (longlong)ppppuVar6);
          _Src = _Dst + uVar10;
          sVar7 = _Size;
          if ((_Dst < pcVar4 + _Size) && (pcVar4 <= (char *)((longlong)ppppuVar6 + uVar2))) {
            if (pcVar4 < _Src) {
              sVar7 = (longlong)_Src - (longlong)pcVar4;
            }
            else {
              sVar7 = 0;
            }
          }
          memmove(_Src + uVar11,_Src,lVar9 + 1);
          memmove(_Dst,pcVar4,sVar7);
          memcpy(_Dst + sVar7,pcVar4 + sVar7 + uVar11,_Size - sVar7);
        }
      }
    }
  }
LAB_144e7e587:
  switch(local_d8) {
  case 1:
    FUN_144e41800(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5540);
  case 2:
    FUN_144e41930(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d55b0);
  case 3:
    FUN_144e41a60(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5620);
  case 4:
    FUN_144e41b90(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5690);
  case 5:
    FUN_144e41cc0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5700);
  case 6:
    FUN_144e41df0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5770);
  case 7:
    FUN_144e41f20(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d57e0);
  case 8:
    FUN_144e42050(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5850);
  case 9:
    FUN_144e42180(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d58c0);
  case 10:
    FUN_144e422b0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5930);
  case 0xb:
    FUN_144e423e0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d59a0);
  case 0xc:
    FUN_144e42510(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5a10);
  case 0xd:
    FUN_144e42640(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5a80);
  case 0xe:
    FUN_144e42770(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5af0);
  default:
    FUN_144e41440(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5448);
  case 0x10:
    FUN_144e428a0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5b60);
  case 0x11:
    FUN_144e429d0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5bd0);
  case 0x12:
    FUN_144e42b00(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5c40);
  case 0x13:
    FUN_144e42c30(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5cb0);
  case 0x14:
    FUN_144e42d60(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5d20);
  case 0x15:
    FUN_144e42e90(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5d90);
  case 0x16:
    FUN_144e42fc0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5e00);
  case 0x17:
    FUN_144e430f0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5e70);
  case 0x18:
    FUN_144e43220(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5ee0);
  case 0x19:
    FUN_144e43350(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5f50);
  case 0x1b:
    FUN_144e435b0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6030);
  case 0x1c:
    FUN_144e436e0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d60a0);
  case 0x1d:
    FUN_144e43810(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6110);
  case 0x1e:
    FUN_144e43940(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6180);
  case 0x1f:
    FUN_144e43a70(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d61f0);
  case 0x20:
    FUN_144e43ba0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6260);
  case 0x21:
    FUN_144e43cd0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d62d0);
  case 0x22:
    FUN_144e43e00(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6340);
  case 0x24:
    FUN_144e44190(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6490);
  case 0x26:
    FUN_144e44c40(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6880);
  case 0x27:
    FUN_144e442c0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6500);
  case 0x28:
    FUN_144e44fd0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d69d0);
  case 0x29:
    FUN_144e45230(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6ab0);
  case 0x2a:
    FUN_144e44ea0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6960);
  case 100:
    FUN_144e45ce0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6ea0);
  case 0x65:
    FUN_144e45e10(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6f10);
  case 0x66:
    FUN_144e45bb0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6e30);
  case 0x67:
    FUN_144e46c50(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d7450);
  case 0x68:
    FUN_144e44b10(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6810);
  case 0x69:
    FUN_144e46eb0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d7530);
  case 0x6a:
    FUN_144e462d0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d70d0);
  case 0x6b:
    FUN_144e469f0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d7370);
  case 0x6c:
    FUN_144e46400(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d7140);
  case 0x6d:
    FUN_144e45490(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6b90);
  case 0x6e:
    FUN_144e46b20(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d73e0);
  case 0x6f:
    FUN_144e44060(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6420);
  case 0x70:
    FUN_144e46d80(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d74c0);
  case 0x71:
    FUN_144e46660(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d7220);
  case 0x72:
    FUN_144e45100(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6a40);
  case 0x73:
    FUN_144e455c0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6c00);
  case 0x74:
    FUN_144e45f40(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6f80);
  case 0x75:
    FUN_144e461a0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d7060);
  case 0x76:
    FUN_144e46070(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6ff0);
  case 0x77:
    FUN_144e46530(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d71b0);
  case 0x78:
    FUN_144e44520(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d65e0);
  case 0x79:
    FUN_144e448b0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6730);
  case 0x7a:
    FUN_144e43f30(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d63b0);
  case 0x7b:
    FUN_144e45820(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6ce0);
  case 0x7c:
    FUN_144e44780(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d66c0);
  case 0x7d:
    FUN_144e443f0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6570);
  case 0x7e:
    FUN_144e46790(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d7290);
  case 0x80:
    FUN_144e45360(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6b20);
  case 0x81:
    FUN_144e46fe0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d75a0);
  case 0x82:
    FUN_144e45a80(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6dc0);
  case 0x84:
    FUN_144e44d70(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d68f0);
  case 0x86:
    FUN_144e449e0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d67a0);
  case 0x87:
    FUN_144e45950(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6d50);
  case 0x88:
    FUN_144e456f0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6c70);
  case 0x89:
    FUN_144e44650(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d6650);
  case 0x8a:
    FUN_144e468c0(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d7300);
  case 0x8b:
    FUN_144e43480(local_a8,local_d0);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5fc0);
  }
}



// FUNCTION 144e7f060 FUN_144e7f060 body=26 status=ok
// SIG undefined FUN_144e7f060(void)

void FUN_144e7f060(undefined8 param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = _errno();
  FUN_144e7e360(param_1,*piVar2);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 144e7f080 FUN_144e7f080 body=48 status=ok
// SIG undefined FUN_144e7f080(void)

void FUN_144e7f080(void)

{
  code *pcVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144e404a0(local_38,&DAT_149bc6a9c);
  FUN_144e7f060(local_38);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 144e7f0b0 FUN_144e7f0b0 body=450 status=ok
// SIG undefined FUN_144e7f0b0(void)

undefined8 *
FUN_144e7f0b0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,size_t param_4,
             longlong param_5,void *param_6,size_t param_7)

{
  size_t _Size;
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *pvVar7;
  void *_Dst;
  
  lVar2 = param_1[2];
  uVar6 = 0x7fffffffffffffff;
  if (0x7fffffffffffffffU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_146eb22ad();
  }
  uVar3 = param_1[3];
  uVar5 = lVar2 + param_2 | 0xf;
  if ((uVar5 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar6 = uVar5;
    if (uVar5 < uVar1) {
      uVar6 = uVar1;
    }
    if (0xfff < uVar6 + 1) {
      uVar5 = uVar6 + 0x28;
      if (uVar5 <= uVar6 + 1) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      goto LAB_144e7f14f;
    }
    if (uVar6 == 0xffffffffffffffff) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_14494321d();
    }
  }
  else {
    uVar5 = 0x8000000000000027;
LAB_144e7f14f:
    lVar4 = FUN_14494321d(uVar5);
    if (lVar4 == 0) goto LAB_144e7f212;
    _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar4;
  }
  param_1[3] = uVar6;
  param_1[2] = lVar2 + param_2;
  pvVar7 = (void *)((longlong)_Dst + param_4);
  _Size = ((lVar2 - param_4) - param_5) + 1;
  if (uVar3 < 0x10) {
    memcpy(_Dst,param_1,param_4);
    memcpy(pvVar7,param_6,param_7);
    memcpy((void *)((longlong)pvVar7 + param_7),(void *)(param_4 + param_5 + (longlong)param_1),
           _Size);
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,param_4);
    memcpy(pvVar7,param_6,param_7);
    memcpy((void *)((longlong)pvVar7 + param_7),(void *)((longlong)_Src + param_5 + param_4),_Size);
    uVar6 = uVar3 + 1;
    pvVar7 = _Src;
    if (0xfff < uVar6) {
      pvVar7 = *(void **)((longlong)_Src + -8);
      uVar6 = uVar3 + 0x28;
      if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar7))) {
LAB_144e7f212:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar7,uVar6);
  }
  *param_1 = _Dst;
  return param_1;
}



// FUNCTION 144e7f290 FUN_144e7f290 body=43 status=ok
// SIG undefined FUN_144e7f290(void)

undefined8 * FUN_144e7f290(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IlmThread_3_2::ThreadPoolProvider::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 144e7f2c0 FUN_144e7f2c0 body=166 status=ok
// SIG undefined FUN_144e7f2c0(void)

void FUN_144e7f2c0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  *param_1 = IlmThread_3_2::ThreadPool::vftable;
  local_28 = 0;
  uStack_20 = 0;
  FUN_144e7fd80(param_1[1],&local_28);
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    local_18 = 0;
    uStack_10 = 0;
    FUN_144e7fd80(lVar4,&local_18);
    plVar5 = *(longlong **)(lVar4 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    thunk_FUN_1400020a8(lVar4,0x10);
  }
  return;
}



// FUNCTION 144e7f370 FUN_144e7f370 body=143 status=ok
// SIG undefined FUN_144e7f370(void)

undefined4 FUN_144e7f370(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  plVar3 = *(longlong **)(param_1 + 8);
  _Lock_shared_ptr_spin_lock();
  if (plVar3[1] != 0) {
    LOCK();
    piVar1 = (int *)(plVar3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)*plVar3;
  plVar3 = (longlong *)plVar3[1];
  _Unlock_shared_ptr_spin_lock();
  uVar6 = 0;
  if (plVar4 != (longlong *)0x0) {
    uVar6 = (**(code **)(*plVar4 + 8))(plVar4);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  return uVar6;
}



// FUNCTION 144e7f400 FUN_144e7f400 body=417 status=ok
// SIG undefined FUN_144e7f400(void)

void FUN_144e7f400(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 auStack_f8 [32];
  int local_d8 [2];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong *local_a8;
  longlong *local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8[0] = param_2;
  if (param_2 < 0) {
    FUN_144e40d70(local_88,
                  "Attempt to set the number of threads in a thread pool to a negative value.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_88,(ThrowInfo *)&DAT_14c6d50e0);
  }
  plVar2 = *(longlong **)(param_1 + 8);
  _Lock_shared_ptr_spin_lock();
  if (plVar2[1] != 0) {
    LOCK();
    piVar1 = (int *)(plVar2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)*plVar2;
  plVar2 = (longlong *)plVar2[1];
  local_a8 = plVar3;
  local_a0 = plVar2;
  _Unlock_shared_ptr_spin_lock();
  if (plVar3 == (longlong *)0x0) {
LAB_144e7f4a9:
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar2 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2);
        }
      }
    }
    if (local_d8[0] == 0) {
      local_c0 = 0;
      uStack_b8 = 0;
      FUN_144e7fd80(*(undefined8 *)(param_1 + 8),&local_c0);
      goto LAB_144e7f56f;
    }
    puVar6 = (undefined8 *)FUN_144e80610(local_98,local_d8);
    local_d0 = *puVar6;
    uStack_c8 = puVar6[1];
    *puVar6 = 0;
    puVar6[1] = 0;
    FUN_144e7fd80(*(undefined8 *)(param_1 + 8),&local_d0);
    plVar2 = local_90;
  }
  else {
    iVar5 = (**(code **)(*plVar3 + 8))(plVar3);
    if (iVar5 != param_2) {
      if (param_2 == 0) goto LAB_144e7f4a9;
      (**(code **)(*plVar3 + 0x10))(plVar3,local_d8[0]);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
    }
  }
LAB_144e7f56f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_f8);
}



// FUNCTION 144e7f5c0 FUN_144e7f5c0 body=170 status=ok
// SIG undefined FUN_144e7f5c0(void)

undefined ** FUN_144e7f5c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c7966b8) {
    FUN_144b3d300(&DAT_14c7966b8);
    if (DAT_14c7966b8 == -1) {
      DAT_14c70a398 = (undefined8 *)FUN_14494321d(0x10);
      if (DAT_14c70a398 != (undefined8 *)0x0) {
        *DAT_14c70a398 = 0;
        DAT_14c70a398[1] = 0;
      }
      FUN_144e7f400(&PTR_vftable_14c70a390,0);
      atexit((_func_5014 *)&LAB_149928780);
      _Init_thread_footer(&DAT_14c7966b8);
      return &PTR_vftable_14c70a390;
    }
  }
  return &PTR_vftable_14c70a390;
}



// FUNCTION 144e7f670 FUN_144e7f670 body=465 status=ok
// SIG undefined FUN_144e7f670(void)

void FUN_144e7f670(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c7966b8) && (FUN_144b3d300(&DAT_14c7966b8), DAT_14c7966b8 == -1)) {
    PTR_vftable_14c70a390 = (undefined *)IlmThread_3_2::ThreadPool::vftable;
    DAT_14c70a398 = (longlong *)FUN_14494321d(0x10);
    if (DAT_14c70a398 != (longlong *)0x0) {
      *DAT_14c70a398 = 0;
      DAT_14c70a398[1] = 0;
    }
    FUN_144e7f400(&PTR_vftable_14c70a390,0);
    atexit((_func_5014 *)&LAB_149928780);
    _Init_thread_footer(&DAT_14c7966b8);
  }
  plVar4 = DAT_14c70a398;
  if (param_1 == (longlong *)0x0) {
    return;
  }
  _Lock_shared_ptr_spin_lock();
  if (plVar4[1] != 0) {
    LOCK();
    piVar1 = (int *)(plVar4[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)*plVar4;
  plVar4 = (longlong *)plVar4[1];
  plVar7 = plVar3;
  _Unlock_shared_ptr_spin_lock();
  if (plVar3 == (longlong *)0x0) {
    puVar5 = (undefined8 *)param_1[1];
    (**(code **)(*param_1 + 8))(param_1);
    (**(code **)*param_1)(param_1,1,param_3,param_4,plVar7);
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)*puVar5;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FUN_144e80fc0(piVar1 + 2);
      }
      LOCK();
      piVar1[1] = piVar1[1] + -1;
      UNLOCK();
    }
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar3 = plVar4 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 != 1) {
      return;
    }
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) {
      return;
    }
    lVar6 = *plVar4;
  }
  else {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar3 = plVar4 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 != 1) {
      return;
    }
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) {
      return;
    }
    lVar6 = *plVar4;
  }
  (**(code **)(lVar6 + 8))(plVar4);
  return;
}



// FUNCTION 144e7f850 FUN_144e7f850 body=52 status=ok
// SIG undefined FUN_144e7f850(void)

undefined8 FUN_144e7f850(undefined8 param_1,ulonglong param_2)

{
  FUN_144e7f2c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144e7f890 FUN_144e7f890 body=66 status=ok
// SIG undefined FUN_144e7f890(void)

undefined8 * FUN_144e7f890(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  
  param_1[1] = param_2;
  *param_1 = IlmThread_3_2::Task::vftable;
  if (param_2 != (undefined8 *)0x0) {
    piVar2 = (int *)*param_2;
    LOCK();
    piVar2[1] = piVar2[1] + 1;
    UNLOCK();
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    if (iVar1 == 0) {
      FUN_144e80ef0(piVar2 + 2);
    }
  }
  return param_1;
}



// FUNCTION 144e7f8e0 FUN_144e7f8e0 body=11 status=ok
// SIG undefined FUN_144e7f8e0(void)

void FUN_144e7f8e0(undefined8 *param_1)

{
  *param_1 = IlmThread_3_2::Task::vftable;
  return;
}



// FUNCTION 144e7f8f0 FUN_144e7f8f0 body=43 status=ok
// SIG undefined FUN_144e7f8f0(void)

undefined8 * FUN_144e7f8f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IlmThread_3_2::Task::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144e7f920 FUN_144e7f920 body=78 status=ok
// SIG undefined FUN_144e7f920(void)

undefined8 * FUN_144e7f920(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    FUN_144e80de0(puVar1 + 1,1);
  }
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 144e7f970 FUN_144e7f970 body=99 status=ok
// SIG undefined FUN_144e7f970(void)

void FUN_144e7f970(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *param_1;
  FUN_144e80ef0(lVar2 + 8);
  iVar3 = 0;
  iVar1 = *(int *)(lVar2 + 4);
  while (0 < iVar1) {
    iVar3 = iVar3 + 1;
    if (100 < iVar3) {
      _Thrd_yield();
      iVar3 = 0;
    }
    iVar1 = *(int *)(lVar2 + 4);
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    FUN_144e80ed0(lVar2 + 8);
    thunk_FUN_1400020a8(lVar2,0x18);
  }
  return;
}



// FUNCTION 144e7f9e0 FUN_144e7f9e0 body=17 status=ok
// SIG undefined FUN_144e7f9e0(void)

undefined4 * FUN_144e7f9e0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined **)(param_1 + 2) = &DAT_14c70a3a0;
  return param_1;
}



// FUNCTION 144e7fa00 FUN_144e7fa00 body=77 status=ok
// SIG undefined FUN_144e7fa00(void)

undefined8 * FUN_144e7fa00(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar1;
  return param_1;
}



// FUNCTION 144e7fa50 FUN_144e7fa50 body=217 status=ok
// SIG undefined FUN_144e7fa50(void)

void FUN_144e7fa50(undefined8 ***param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 ****ppppuVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  undefined8 ***local_48;
  undefined1 local_40;
  undefined8 ***local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_1;
  (**(code **)(**(longlong **)(param_2 + 2) + 0x10))(*(longlong **)(param_2 + 2),local_38,*param_2);
  *param_1 = (undefined8 **)std::exception::vftable;
  local_40 = 1;
  local_48 = local_38;
  if (0xf < local_20) {
    local_48 = local_38[0];
  }
  param_1[1] = (undefined8 **)0x0;
  param_1[2] = (undefined8 **)0x0;
  __std_exception_copy(&local_48);
  *param_1 = (undefined8 **)std::runtime_error::vftable;
  if (0xf < local_20) {
    uVar6 = local_20 + 1;
    ppppuVar5 = (undefined8 ****)local_38[0];
    if (0xfff < uVar6) {
      ppppuVar5 = (undefined8 ****)local_38[0][-1];
      uVar6 = local_20 + 0x28;
      if (0x1f < (ulonglong)((longlong)local_38[0] + (-8 - (longlong)ppppuVar5))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(ppppuVar5,uVar6);
  }
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = (undefined8 **)std::system_error::vftable;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
}



// FUNCTION 144e7fb60 FUN_144e7fb60 body=87 status=ok
// SIG undefined FUN_144e7fb60(void)

undefined8 * FUN_144e7fb60(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *param_1 = std::system_error::vftable;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



// FUNCTION 144e7fbc0 FUN_144e7fbc0 body=56 status=ok
// SIG undefined FUN_144e7fbc0(void)

void FUN_144e7fbc0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [56];
  
  puVar1 = (undefined4 *)FUN_144e7f9e0(local_48,param_1);
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  FUN_144e7fa50(local_38,&local_58);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_38,(ThrowInfo *)&DAT_14c6d7610);
}



// FUNCTION 144e7fc10 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::_Parallelism_allocator<unsigned __int64>::deallocate(unsigned __int64
   * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct CHN * __ptr64>::deallocate(struct CHN * __ptr64 *
   __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<8,class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > >(class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const ,struct
   TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>::deallocate(struct
   `void __cdecl phmap::container_internal::Deallocate<8,class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
     16 names - too many to list
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 8;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e7fc60 FUN_144e7fc60 body=16 status=ok
// SIG undefined FUN_144e7fc60(void)

void FUN_144e7fc60(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e7fc80 FUN_144e7fc80 body=65 status=ok
// SIG undefined FUN_144e7fc80(void)

void FUN_144e7fc80(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x10;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e7fcd0 FUN_144e7fcd0 body=128 status=ok
// SIG undefined FUN_144e7fcd0(void)

void FUN_144e7fcd0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    for (lVar2 = lVar1; lVar2 != param_1[1]; lVar2 = lVar2 + 0x10) {
      if (*(int *)(lVar2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
        terminate();
      }
    }
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff0;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e7fd60 FUN_144e7fd60 body=16 status=ok
// SIG undefined FUN_144e7fd60(void)

void FUN_144e7fd60(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e7fd80 FUN_144e7fd80 body=229 status=ok
// SIG undefined FUN_144e7fd80(void)

void FUN_144e7fd80(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  lVar3 = *param_2;
  lVar4 = param_2[1];
  _Lock_shared_ptr_spin_lock();
  plVar5 = (longlong *)*param_1;
  *param_1 = lVar3;
  plVar6 = (longlong *)param_1[1];
  param_1[1] = lVar4;
  _Unlock_shared_ptr_spin_lock();
  if ((plVar5 != (longlong *)0x0) && (plVar5 != (longlong *)*param_2)) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)();
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



// FUNCTION 144e7fe70 FUN_144e7fe70 body=75 status=ok
// SIG undefined FUN_144e7fe70(void)

void FUN_144e7fe70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}



// FUNCTION 144e7fec0 FUN_144e7fec0 body=12 status=ok
// SIG undefined FUN_144e7fec0(void)

undefined4 FUN_144e7fec0(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xe0);
}



// FUNCTION 144e7fed0 FUN_144e7fed0 body=596 status=ok
// SIG undefined FUN_144e7fed0(void)

void FUN_144e7fed0(longlong param_1,int param_2)

{
  int *piVar1;
  uintptr_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  uintptr_t uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  void *_Dst;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  size_t _Size;
  undefined1 local_res8 [16];
  undefined8 local_res18;
  longlong local_res20;
  ulonglong auStack_60 [3];
  uintptr_t local_48;
  ulonglong uStack_40;
  
  puVar11 = (undefined8 *)(longlong)param_2;
  lVar12 = *(longlong *)(param_1 + 8);
  local_res20 = lVar12 + 0x78;
  iVar5 = _Mtx_lock(local_res20);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(lVar12 + 0xc4) == 0x7fffffff) {
    *(undefined4 *)(lVar12 + 0xc4) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  puVar13 = (undefined8 *)
            (*(longlong *)(*(longlong *)(param_1 + 8) + 0xd0) -
             *(longlong *)(*(longlong *)(param_1 + 8) + 200) >> 4);
  if (puVar11 < puVar13) {
    FUN_144e80240(param_1);
    puVar13 = (undefined8 *)0x0;
  }
  lVar12 = *(longlong *)(param_1 + 8);
  _Dst = *(void **)(lVar12 + 0xd0);
  lVar3 = *(longlong *)(lVar12 + 200);
  puVar9 = (undefined8 *)((longlong)_Dst - lVar3 >> 4);
  if (puVar11 < puVar9) {
    pvVar10 = (void *)((longlong)puVar11 * 0x10 + lVar3);
    for (pvVar6 = pvVar10; pvVar6 != _Dst; pvVar6 = (void *)((longlong)pvVar6 + 0x10)) {
      if (*(int *)((longlong)pvVar6 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
        terminate();
      }
    }
    *(void **)(lVar12 + 0xd0) = pvVar10;
  }
  else if (puVar9 < puVar11) {
    if ((undefined8 *)(*(longlong *)(lVar12 + 0xd8) - lVar3 >> 4) < puVar11) {
      FUN_144e80960((longlong *)(lVar12 + 200),puVar11,local_res8);
    }
    else {
      if ((longlong)puVar11 - (longlong)puVar9 != 0) {
        _Size = ((longlong)puVar11 - (longlong)puVar9) * 0x10;
        memset(_Dst,0,_Size);
        _Dst = (void *)((longlong)_Dst + _Size);
      }
      *(void **)(lVar12 + 0xd0) = _Dst;
    }
  }
  if (puVar13 < puVar11) {
    local_res18 = 0;
    lVar12 = (longlong)puVar13 << 4;
    do {
      puVar7 = (undefined8 *)FUN_14494321d(0x20);
      puVar9 = (undefined8 *)0x0;
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0;
        puVar7[1] = 0;
        if (*(longlong *)(param_1 + 0x10) != 0) {
          LOCK();
          piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        *puVar7 = *(undefined8 *)(param_1 + 8);
        puVar7[1] = *(undefined8 *)(param_1 + 0x10);
        puVar7[2] = param_1;
        puVar7[3] = FUN_144e80390;
        puVar9 = puVar7;
      }
      FUN_144e80cd0();
      uVar8 = _beginthreadex((void *)0x0,0,FUN_144e80d40,puVar9,0,(uint *)auStack_60);
      uVar4 = auStack_60[0];
      if (uVar8 == 0) {
        auStack_60[0] = auStack_60[0] & 0xffffffff00000000;
                    /* WARNING: Subroutine does not return */
        std::_Throw_Cpp_error(6);
      }
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 200);
      if (*(int *)(lVar12 + 8 + lVar3) != 0) {
                    /* WARNING: Subroutine does not return */
        terminate();
      }
      auStack_60[1] = 0;
      auStack_60[2] = 0;
      uStack_40 = auStack_60[0];
      auStack_60[0] = 0;
      puVar2 = (uintptr_t *)(lVar12 + lVar3);
      *puVar2 = uVar8;
      puVar2[1] = uVar4;
      puVar13 = (undefined8 *)((longlong)puVar13 + 1);
      lVar12 = lVar12 + 0x10;
      local_48 = uVar8;
    } while (puVar13 < puVar11);
  }
  lVar12 = *(longlong *)(param_1 + 8);
  LOCK();
  *(int *)(lVar12 + 0xe0) = (int)(*(longlong *)(lVar12 + 0xd0) - *(longlong *)(lVar12 + 200) >> 4);
  UNLOCK();
  _Mtx_unlock(local_res20);
  return;
}



// FUNCTION 144e80130 FUN_144e80130 body=157 status=ok
// SIG undefined FUN_144e80130(void)

void FUN_144e80130(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 local_res10;
  
  lVar1 = *(longlong *)(param_1 + 8);
  local_res10 = param_2;
  iVar4 = _Mtx_lock(lVar1 + 0x10);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(lVar1 + 0x5c) != 0x7fffffff) {
    lVar2 = *(longlong *)(param_1 + 8);
    puVar3 = *(undefined8 **)(lVar2 + 0x68);
    if (puVar3 == *(undefined8 **)(lVar2 + 0x70)) {
      FUN_144e80b30(lVar2 + 0x60,puVar3,&local_res10);
    }
    else {
      *puVar3 = param_2;
      *(longlong *)(lVar2 + 0x68) = *(longlong *)(lVar2 + 0x68) + 8;
    }
    _Mtx_unlock(lVar1 + 0x10);
    FUN_144e80fc0(*(undefined8 *)(param_1 + 8));
    return;
  }
  *(undefined4 *)(lVar1 + 0x5c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  std::_Throw_Cpp_error(6);
}



// FUNCTION 144e801d0 FUN_144e801d0 body=100 status=ok
// SIG undefined FUN_144e801d0(void)

void FUN_144e801d0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = _Mtx_lock(lVar1 + 0x78);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(lVar1 + 0xc4) != 0x7fffffff) {
    FUN_144e80240(param_1);
    _Mtx_unlock(lVar1 + 0x78);
    return;
  }
  *(undefined4 *)(lVar1 + 0xc4) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  std::_Throw_Cpp_error(6);
}



// FUNCTION 144e80240 FUN_144e80240 body=331 status=ok
// SIG undefined FUN_144e80240(void)

undefined4 FUN_144e80240(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  lVar6 = 0;
  LOCK();
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0xe4) = 1;
  UNLOCK();
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xd0) -
          *(longlong *)(*(longlong *)(param_1 + 8) + 200) >> 4;
  lVar4 = lVar8;
  if (lVar8 != 0) {
    do {
      FUN_144e80fc0(*(undefined8 *)(param_1 + 8));
      lVar4 = lVar4 + -1;
      lVar7 = lVar6;
    } while (lVar4 != 0);
    do {
      puVar5 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 200) + lVar7);
      if (*(int *)(puVar5 + 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_Cpp_error(1);
      }
      iVar3 = _Thrd_id();
      if (*(int *)(puVar5 + 1) == iVar3) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_Cpp_error(5);
      }
      local_38 = *(undefined4 *)puVar5;
      uStack_34 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_30 = *(undefined4 *)(puVar5 + 1);
      uStack_2c = *(undefined4 *)((longlong)puVar5 + 0xc);
      iVar3 = _Thrd_join(&local_38,0);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_Cpp_error(2);
      }
      lVar6 = lVar6 + 1;
      local_28 = 0;
      uStack_20 = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      lVar7 = lVar7 + 0x10;
    } while (lVar6 != lVar8);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  lVar6 = *(longlong *)(lVar4 + 200);
  lVar8 = lVar6;
  if (lVar6 != *(longlong *)(lVar4 + 0xd0)) {
    do {
      if (*(int *)(lVar8 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
        terminate();
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != *(longlong *)(lVar4 + 0xd0));
    *(longlong *)(lVar4 + 0xd0) = lVar6;
  }
  lVar4 = *(longlong *)(param_1 + 8);
  LOCK();
  puVar1 = (undefined4 *)(lVar4 + 0xe0);
  uVar2 = *puVar1;
  *puVar1 = 0;
  UNLOCK();
  LOCK();
  *(undefined1 *)(lVar4 + 0xe4) = 0;
  UNLOCK();
  return uVar2;
}



// FUNCTION 144e80390 FUN_144e80390 body=404 status=ok
// SIG undefined FUN_144e80390(void)

void FUN_144e80390(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  
  FUN_144e80ef0(*param_2);
  lVar8 = *param_2 + 0x10;
  iVar6 = _Mtx_lock(lVar8);
  do {
    if (iVar6 != 0) {
LAB_144e80509:
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(5);
    }
    if (*(int *)(lVar8 + 0x4c) == 0x7fffffff) {
      *(undefined4 *)(lVar8 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
    bVar5 = true;
    lVar1 = *param_2;
    if (*(longlong *)(lVar1 + 0x60) == *(longlong *)(lVar1 + 0x68)) {
      if (*(char *)(lVar1 + 0xe4) != '\0') {
        _Mtx_unlock(lVar8);
        plVar2 = (longlong *)param_2[1];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar2 + 1;
          lVar8 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar4 = (int *)((longlong)plVar2 + 0xc);
            iVar6 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2);
            }
          }
        }
        return;
      }
    }
    else {
      plVar7 = (longlong *)(*(longlong *)(lVar1 + 0x68) + -8);
      plVar2 = (longlong *)*plVar7;
      *(longlong **)(lVar1 + 0x68) = plVar7;
      if (lVar8 == 0) {
        FUN_144e7fbc0(1);
        goto LAB_144e80509;
      }
      _Mtx_unlock(lVar8);
      bVar5 = false;
      if (plVar2 != (longlong *)0x0) {
        puVar3 = (undefined8 *)plVar2[1];
        (**(code **)(*plVar2 + 8))(plVar2);
        (**(code **)*plVar2)(plVar2,1);
        if (puVar3 != (undefined8 *)0x0) {
          piVar4 = (int *)*puVar3;
          LOCK();
          iVar6 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            FUN_144e80fc0(piVar4 + 2);
          }
          LOCK();
          piVar4[1] = piVar4[1] + -1;
          UNLOCK();
        }
      }
    }
    if (bVar5) {
      _Mtx_unlock(lVar8);
    }
    FUN_144e80ef0(*param_2);
    lVar8 = *param_2 + 0x10;
    iVar6 = _Mtx_lock(lVar8);
  } while( true );
}



// FUNCTION 144e80530 FUN_144e80530 body=75 status=ok
// SIG undefined FUN_144e80530(void)

void FUN_144e80530(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}



// FUNCTION 144e80580 FUN_144e80580 body=142 status=ok
// SIG undefined FUN_144e80580(void)

undefined8 * FUN_144e80580(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = IlmThread_3_2::_anon_00B5BF98::DefaultThreadPoolProvider::vftable;
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  *param_1 = IlmThread_3_2::ThreadPoolProvider::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144e80610 FUN_144e80610 body=388 status=ok
// SIG undefined FUN_144e80610(void)

undefined8 * FUN_144e80610(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)FUN_14494321d(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = std::_Ref_count_obj2<IlmThread_3_2::_anon_00B5BF98::DefaultThreadPoolProvider>::
              vftable;
    uVar1 = *param_2;
    puVar2[2] = IlmThread_3_2::_anon_00B5BF98::DefaultThreadPoolProvider::vftable;
    puVar3 = (undefined8 *)FUN_14494321d(0xf8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 1) = 1;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
      *puVar3 = std::_Ref_count_obj2<IlmThread_3_2::_anon_00B5BF98::DefaultThreadPoolData>::vftable;
      memset(puVar3 + 2,0,0xe8);
      FUN_144e80de0(puVar3 + 2,0);
      _Mtx_init_in_situ(puVar3 + 4,2);
      puVar3[0xe] = 0;
      puVar3[0xf] = 0;
      puVar3[0x10] = 0;
      _Mtx_init_in_situ(puVar3 + 0x11,2);
      puVar3[0x1b] = 0;
      puVar3[0x1c] = 0;
      puVar3[0x1d] = 0;
      *(undefined4 *)(puVar3 + 0x1e) = 0;
      *(undefined1 *)((longlong)puVar3 + 0xf4) = 0;
      puVar4 = puVar3;
    }
    puVar2[3] = puVar4 + 2;
    puVar2[4] = puVar4;
    LOCK();
    *(undefined4 *)(puVar4 + 0x1e) = 0;
    UNLOCK();
    LOCK();
    *(undefined1 *)((longlong)puVar4 + 0xf4) = 0;
    UNLOCK();
    FUN_144e7fed0(puVar2 + 2,uVar1);
    puVar4 = puVar2;
  }
  *param_1 = puVar4 + 2;
  param_1[1] = puVar4;
  return param_1;
}



// FUNCTION 144e807a0 FUN_144e807a0 body=75 status=ok
// SIG undefined FUN_144e807a0(void)

void FUN_144e807a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}



// FUNCTION 144e807f0 FUN_144e807f0 body=43 status=ok
// SIG undefined FUN_144e807f0(void)

void FUN_144e807f0(longlong param_1,longlong param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    if (*(int *)(param_1 + 8) != 0) break;
    param_1 = param_1 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}



// FUNCTION 144e80820 FUN_144e80820 body=131 status=ok
// SIG undefined FUN_144e80820(void)

void FUN_144e80820(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_144e7fcd0(param_1 + 0xd8);
  _Mtx_destroy_in_situ(param_1 + 0x88);
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x80) - lVar1 & 0xfffffffffffffff8;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  _Mtx_destroy_in_situ(param_1 + 0x20);
  FUN_144e80ed0(param_1 + 0x10);
  return;
}



// FUNCTION 144e808b0 FUN_144e808b0 body=18 status=ok
// SIG undefined FUN_144e808b0(void)

void FUN_144e808b0(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144e808bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 144e808d0 FUN_144e808d0 body=43 status=ok
// SIG undefined FUN_144e808d0(void)

undefined8 * FUN_144e808d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Ref_count_obj2<IlmThread_3_2::_anon_00B5BF98::DefaultThreadPoolData>::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 144e80900 FUN_144e80900 body=13 status=ok
// SIG undefined FUN_144e80900(void)

void FUN_144e80900(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144e8090a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x10))(param_1 + 0x10,0);
  return;
}



// FUNCTION 144e80910 FUN_144e80910 body=18 status=ok
// SIG undefined FUN_144e80910(void)

void FUN_144e80910(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144e8091d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 144e80930 FUN_144e80930 body=43 status=ok
// SIG undefined FUN_144e80930(void)

undefined8 * FUN_144e80930(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Ref_count_obj2<IlmThread_3_2::_anon_00B5BF98::DefaultThreadPoolProvider>::vftable
  ;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144e80960 FUN_144e80960 body=462 status=ok
// SIG undefined FUN_144e80960(void)

void FUN_144e80960(longlong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (0xfffffffffffffff < param_2) {
    FUN_144e7fd60();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar11 = param_1[1] - *param_1 >> 4;
  uVar8 = param_1[2] - *param_1 >> 4;
  if ((0xfffffffffffffff - (uVar8 >> 1) < uVar8) ||
     ((uVar8 = (uVar8 >> 1) + uVar8, uVar10 = param_2, param_2 <= uVar8 &&
      (uVar10 = uVar8, 0xfffffffffffffff < uVar8)))) {
LAB_144e80b24:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar8 = uVar10 * 0x10;
  if (uVar8 < 0x1000) {
    if (uVar8 == 0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9 = (undefined8 *)FUN_14494321d(uVar8);
    }
  }
  else {
    if (uVar8 + 0x27 <= uVar8) goto LAB_144e80b24;
    lVar6 = FUN_14494321d();
    if (lVar6 == 0) goto LAB_144e80b1d;
    puVar9 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
    puVar9[-1] = lVar6;
  }
  lVar6 = param_2 - lVar11;
  if (lVar6 != 0) {
    memset(puVar9 + lVar11 * 2,0,lVar6 * 0x10);
  }
  puVar1 = (undefined8 *)param_1[1];
  puVar5 = puVar9;
  for (puVar7 = (undefined8 *)*param_1; puVar7 != puVar1; puVar7 = puVar7 + 2) {
    uVar3 = *puVar7;
    uVar4 = puVar7[1];
    *puVar7 = 0;
    puVar7[1] = 0;
    *puVar5 = uVar3;
    puVar5[1] = uVar4;
    puVar5 = puVar5 + 2;
  }
  lVar11 = *param_1;
  if (lVar11 != 0) {
    for (lVar6 = lVar11; lVar6 != param_1[1]; lVar6 = lVar6 + 0x10) {
      if (*(int *)(lVar6 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
        terminate();
      }
    }
    uVar8 = param_1[2] - lVar11 & 0xfffffffffffffff0;
    lVar6 = lVar11;
    if (0xfff < uVar8) {
      uVar8 = uVar8 + 0x27;
      lVar6 = *(longlong *)(lVar11 + -8);
      if (0x1f < (lVar11 - lVar6) - 8U) {
LAB_144e80b1d:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar6,uVar8);
  }
  *param_1 = (longlong)puVar9;
  param_1[1] = (longlong)(puVar9 + param_2 * 2);
  param_1[2] = (longlong)(puVar9 + uVar10 * 2);
  return;
}



// FUNCTION 144e80b30 FUN_144e80b30 body=414 status=ok
// SIG undefined FUN_144e80b30(void)

undefined8 * FUN_144e80b30(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *_Dst;
  undefined8 *puVar7;
  ulonglong uVar8;
  size_t _Size;
  
  lVar3 = *param_1;
  lVar5 = param_1[1] - lVar3 >> 3;
  if (lVar5 == 0x1fffffffffffffff) {
    FUN_144e7fc60();
    pcVar4 = (code *)swi(3);
    puVar7 = (undefined8 *)(*pcVar4)();
    return puVar7;
  }
  uVar1 = lVar5 + 1;
  uVar6 = param_1[2] - lVar3 >> 3;
  if (0x1fffffffffffffff - (uVar6 >> 1) < uVar6) {
LAB_144e80cc4:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar6 = (uVar6 >> 1) + uVar6;
  uVar8 = uVar1;
  if (uVar1 <= uVar6) {
    uVar8 = uVar6;
  }
  if (0x1fffffffffffffff < uVar8) goto LAB_144e80cc4;
  uVar6 = uVar8 * 8;
  if (uVar6 < 0x1000) {
    if (uVar6 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)FUN_14494321d(uVar6);
    }
  }
  else {
    if (uVar6 + 0x27 <= uVar6) goto LAB_144e80cc4;
    lVar5 = FUN_14494321d();
    if (lVar5 == 0) goto LAB_144e80cbd;
    puVar7 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = lVar5;
  }
  puVar2 = puVar7 + ((longlong)param_2 - lVar3 >> 3);
  *puVar2 = *param_3;
  _Src = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)_Src;
    _Dst = puVar7;
    param_2 = _Src;
  }
  else {
    memmove(puVar7,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst = puVar2 + 1;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst,param_2,_Size);
  lVar3 = *param_1;
  if (lVar3 != 0) {
    uVar6 = param_1[2] - lVar3 & 0xfffffffffffffff8;
    lVar5 = lVar3;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      lVar5 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar5) - 8U) {
LAB_144e80cbd:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar5,uVar6);
  }
  *param_1 = (longlong)puVar7;
  param_1[1] = (longlong)(puVar7 + uVar1);
  param_1[2] = (longlong)(puVar7 + uVar8);
  return puVar2;
}



// FUNCTION 144e80cd0 FUN_144e80cd0 body=106 status=ok
// SIG undefined FUN_144e80cd0(void)

void FUN_144e80cd0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    plVar5 = *(longlong **)(lVar4 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
    thunk_FUN_1400020a8(lVar4,0x20);
  }
  return;
}



// FUNCTION 144e80d40 FUN_144e80d40 body=150 status=ok
// SIG undefined FUN_144e80d40(void)

undefined8 FUN_144e80d40(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = *param_1;
  local_10 = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  (*(code *)param_1[3])(param_1[2],&local_18);
  _Cnd_do_broadcast_at_thread_exit();
  if (param_1 != (undefined8 *)0x0) {
    plVar4 = (longlong *)param_1[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return 0;
}



// FUNCTION 144e80de0 FUN_144e80de0 body=217 status=ok
// SIG undefined FUN_144e80de0(void)

void FUN_144e80de0(undefined8 *param_1,LONG param_2)

{
  HANDLE pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [16];
  undefined1 local_188 [240];
  undefined1 local_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  *param_1 = IlmThread_3_2::Semaphore::vftable;
  pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,param_2,0x7fffffff,(LPCSTR)0x0);
  param_1[1] = pvVar1;
  if (pvVar1 != (HANDLE)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1b8);
  }
  FUN_144e47110();
  FUN_1470a639e(local_198,1);
  uVar2 = FUN_144e810e0(local_98);
  uVar3 = FUN_141302cc4(local_188,"Could not create semaphore (");
  uVar2 = FUN_144b6d940(uVar3,uVar2);
  FUN_141302cc4(uVar2,&DAT_149bc6be8);
  FUN_144b65b20(local_98);
  FUN_144e40f30(local_78,local_198);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5340);
}



// FUNCTION 144e80ed0 FUN_144e80ed0 body=21 status=ok
// SIG undefined FUN_144e80ed0(void)

void FUN_144e80ed0(undefined8 *param_1)

{
  *param_1 = IlmThread_3_2::Semaphore::vftable;
                    /* WARNING: Could not recover jumptable at 0x000144e80ede. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseHandle((HANDLE)param_1[1]);
  return;
}



// FUNCTION 144e80ef0 FUN_144e80ef0 body=194 status=ok
// SIG undefined FUN_144e80ef0(void)

void FUN_144e80ef0(longlong param_1)

{
  DWORD DVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [16];
  undefined1 local_188 [240];
  undefined1 local_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
  if (DVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1b8);
  }
  FUN_144e47110();
  FUN_1470a639e(local_198,1);
  uVar2 = FUN_144e810e0(local_98);
  uVar3 = FUN_141302cc4(local_188,"Could not wait on semaphore (");
  uVar2 = FUN_144b6d940(uVar3,uVar2);
  FUN_141302cc4(uVar2,&DAT_149bc6be8);
  FUN_144b65b20(local_98);
  FUN_144e40f30(local_78,local_198);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5340);
}



// FUNCTION 144e80fc0 FUN_144e80fc0 body=196 status=ok
// SIG undefined FUN_144e80fc0(void)

void FUN_144e80fc0(longlong param_1)

{
  BOOL BVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [16];
  undefined1 local_188 [240];
  undefined1 local_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  BVar1 = ReleaseSemaphore(*(HANDLE *)(param_1 + 8),1,(LPLONG)0x0);
  if (BVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1b8);
  }
  FUN_144e47110();
  FUN_1470a639e(local_198,1);
  uVar2 = FUN_144e810e0(local_98);
  uVar3 = FUN_141302cc4(local_188,"Could not post on semaphore (");
  uVar2 = FUN_144b6d940(uVar3,uVar2);
  FUN_141302cc4(uVar2,&DAT_149bc6be8);
  FUN_144b65b20(local_98);
  FUN_144e40f30(local_78,local_198);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5340);
}



// FUNCTION 144e81090 FUN_144e81090 body=67 status=ok
// SIG undefined FUN_144e81090(void)

undefined8 * FUN_144e81090(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IlmThread_3_2::Semaphore::vftable;
  CloseHandle((HANDLE)param_1[1]);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144e810e0 FUN_144e810e0 body=159 status=ok
// SIG undefined FUN_144e810e0(void)

undefined8 * FUN_144e810e0(undefined8 *param_1)

{
  DWORD DVar1;
  longlong lVar2;
  HLOCAL local_res10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  DVar1 = GetLastError();
  DVar1 = FormatMessageA(0x1300,(LPCVOID)0x0,DVar1,0x400,(LPSTR)&local_res10,0,(va_list *)0x0);
  if (DVar1 != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)((longlong)local_res10 + lVar2) != '\0');
    FUN_144b6ebb0(param_1);
    LocalFree(local_res10);
  }
  return param_1;
}



// FUNCTION 144e81180 FUN_144e81180 body=35 status=ok
// SIG undefined FUN_144e81180(void)

undefined8 * FUN_144e81180(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144e6df70(param_2,param_3);
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 144e811b0 FUN_144e811b0 body=8 status=ok
// SIG undefined FUN_144e811b0(void)

void FUN_144e811b0(undefined8 *param_1)

{
  FUN_144b6bcf0(*param_1);
  return;
}



// FUNCTION 144e811c0 FUN_144e811c0 body=8 status=ok
// SIG undefined FUN_144e811c0(void)

void FUN_144e811c0(undefined8 *param_1)

{
  FUN_144b6bd10(*param_1);
  return;
}



// FUNCTION 144e811d0 FUN_144e811d0 body=8 status=ok
// SIG undefined FUN_144e811d0(void)

void FUN_144e811d0(undefined8 *param_1)

{
  FUN_144b6bd20(*param_1);
  return;
}



// FUNCTION 144e811e0 FUN_144e811e0 body=8 status=ok
// SIG undefined FUN_144e811e0(void)

void FUN_144e811e0(undefined8 *param_1)

{
  FUN_144b6c230(*param_1);
  return;
}



// FUNCTION 144e811f0 FUN_144e811f0 body=8 status=ok
// SIG undefined FUN_144e811f0(void)

void FUN_144e811f0(undefined8 *param_1)

{
  FUN_144b6c2d0(*param_1);
  return;
}



// FUNCTION 144e81200 FUN_144e81200 body=8 status=ok
// SIG undefined FUN_144e81200(void)

void FUN_144e81200(undefined8 *param_1)

{
  FUN_144b6c380(*param_1);
  return;
}



// FUNCTION 144e81210 FUN_144e81210 body=113 status=ok
// SIG undefined FUN_144e81210(void)

void FUN_144e81210(float *param_1,undefined4 param_2)

{
  float fVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  float local_54;
  float local_44;
  float local_34;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144b66b80(local_58,param_2,0x3f800000);
  fVar1 = local_44 + local_54 + local_34;
  *param_1 = local_54 / fVar1;
  param_1[1] = local_44 / fVar1;
  param_1[2] = local_34 / fVar1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
}



// FUNCTION 144e81290 FUN_144e81290 body=843 status=ok
// SIG undefined FUN_144e81290(void)

void FUN_144e81290(int param_1,longlong param_2,longlong param_3)

{
  undefined2 *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort *puVar4;
  longlong lVar5;
  byte bVar6;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  
  bVar6 = 0;
  if (0xd < (longlong)(param_1 + 0xd)) {
    param_3 = param_3 - param_2;
    puVar4 = (ushort *)(param_2 + 0x14);
    lVar5 = (longlong)(param_1 + 0xd) + -0xd;
    do {
      if ((bool)(bVar6 & 1)) {
        puVar1 = (undefined2 *)
                 FUN_144e66df0(local_res8,
                               (((((((((((*(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[-10] * 4)
                                          * 0.002128 -
                                         *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[-2] * 4) *
                                         0.00754) +
                                        *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[6] * 4) *
                                        0.019597) -
                                       *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0xe] * 4) *
                                       0.043159) +
                                      *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x16] * 4) *
                                      0.087929) -
                                     *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x1e] * 4) *
                                     0.186077) +
                                     *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x26] * 4) *
                                     0.627123 +
                                    *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x2e] * 4) *
                                    0.627123) -
                                   *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x36] * 4) *
                                   0.186077) +
                                  *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x3e] * 4) *
                                  0.087929) -
                                 *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x46] * 4) *
                                 0.043159) +
                                *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x4e] * 4) *
                                0.019597) -
                               *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x56] * 4) * 0.00754
                               ) + *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x5e] * 4) *
                                   0.002128);
        *(undefined2 *)((longlong)puVar4 + param_3 + -0x14) = *puVar1;
        puVar2 = (ushort *)
                 FUN_144e66df0(local_res20,
                               (((((((((((*(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[-8] * 4)
                                          * 0.002128 -
                                         *(float *)(PTR_DAT_14c731618 + (ulonglong)*puVar4 * 4) *
                                         0.00754) +
                                        *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[8] * 4) *
                                        0.019597) -
                                       *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x10] * 4) *
                                       0.043159) +
                                      *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x18] * 4) *
                                      0.087929) -
                                     *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x20] * 4) *
                                     0.186077) +
                                     *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x28] * 4) *
                                     0.627123 +
                                    *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x30] * 4) *
                                    0.627123) -
                                   *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x38] * 4) *
                                   0.186077) +
                                  *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x40] * 4) *
                                  0.087929) -
                                 *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x48] * 4) *
                                 0.043159) +
                                *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x50] * 4) *
                                0.019597) -
                               *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x58] * 4) * 0.00754
                               ) + *(float *)(PTR_DAT_14c731618 + (ulonglong)puVar4[0x60] * 4) *
                                   0.002128);
        uVar3 = *puVar2;
      }
      else {
        *(ushort *)((longlong)puVar4 + param_3 + -0x14) = puVar4[0x2a];
        uVar3 = puVar4[0x2c];
      }
      *(ushort *)((longlong)puVar4 + param_3 + -0x10) = uVar3;
      bVar6 = bVar6 + 1;
      *(ushort *)((longlong)puVar4 + param_3 + -0x12) = puVar4[0x2b];
      *(ushort *)((longlong)puVar4 + param_3 + -0xe) = puVar4[0x2d];
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144e815e0 FUN_144e815e0 body=954 status=ok
// SIG undefined FUN_144e815e0(void)

void FUN_144e815e0(int param_1,longlong *param_2,longlong param_3)

{
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  
  if (0 < param_1) {
    lVar2 = 0;
    do {
      puVar1 = (undefined2 *)
               FUN_144e66df0(local_res8,
                             (((((((((((*(float *)(PTR_DAT_14c731618 +
                                                  (ulonglong)*(ushort *)(*param_2 + lVar2 * 8) * 4)
                                        * 0.002128 -
                                       *(float *)(PTR_DAT_14c731618 +
                                                 (ulonglong)*(ushort *)(param_2[2] + lVar2 * 8) * 4)
                                       * 0.00754) +
                                      *(float *)(PTR_DAT_14c731618 +
                                                (ulonglong)*(ushort *)(param_2[4] + lVar2 * 8) * 4)
                                      * 0.019597) -
                                     *(float *)(PTR_DAT_14c731618 +
                                               (ulonglong)*(ushort *)(param_2[6] + lVar2 * 8) * 4) *
                                     0.043159) +
                                    *(float *)(PTR_DAT_14c731618 +
                                              (ulonglong)*(ushort *)(param_2[8] + lVar2 * 8) * 4) *
                                    0.087929) -
                                   *(float *)(PTR_DAT_14c731618 +
                                             (ulonglong)*(ushort *)(param_2[10] + lVar2 * 8) * 4) *
                                   0.186077) +
                                   *(float *)(PTR_DAT_14c731618 +
                                             (ulonglong)*(ushort *)(param_2[0xc] + lVar2 * 8) * 4) *
                                   0.627123 +
                                  *(float *)(PTR_DAT_14c731618 +
                                            (ulonglong)*(ushort *)(param_2[0xe] + lVar2 * 8) * 4) *
                                  0.627123) -
                                 *(float *)(PTR_DAT_14c731618 +
                                           (ulonglong)*(ushort *)(param_2[0x10] + lVar2 * 8) * 4) *
                                 0.186077) +
                                *(float *)(PTR_DAT_14c731618 +
                                          (ulonglong)*(ushort *)(param_2[0x12] + lVar2 * 8) * 4) *
                                0.087929) -
                               *(float *)(PTR_DAT_14c731618 +
                                         (ulonglong)*(ushort *)(param_2[0x14] + lVar2 * 8) * 4) *
                               0.043159) +
                              *(float *)(PTR_DAT_14c731618 +
                                        (ulonglong)*(ushort *)(param_2[0x16] + lVar2 * 8) * 4) *
                              0.019597) -
                             *(float *)(PTR_DAT_14c731618 +
                                       (ulonglong)*(ushort *)(param_2[0x18] + lVar2 * 8) * 4) *
                             0.00754) +
                             *(float *)(PTR_DAT_14c731618 +
                                       (ulonglong)*(ushort *)(param_2[0x1a] + lVar2 * 8) * 4) *
                             0.002128);
      *(undefined2 *)(param_3 + lVar2 * 8) = *puVar1;
      puVar1 = (undefined2 *)
               FUN_144e66df0(local_res20,
                             (((((((((((*(float *)(PTR_DAT_14c731618 +
                                                  (ulonglong)*(ushort *)(*param_2 + 4 + lVar2 * 8) *
                                                  4) * 0.002128 -
                                       *(float *)(PTR_DAT_14c731618 +
                                                 (ulonglong)*(ushort *)(param_2[2] + 4 + lVar2 * 8)
                                                 * 4) * 0.00754) +
                                      *(float *)(PTR_DAT_14c731618 +
                                                (ulonglong)*(ushort *)(param_2[4] + 4 + lVar2 * 8) *
                                                4) * 0.019597) -
                                     *(float *)(PTR_DAT_14c731618 +
                                               (ulonglong)*(ushort *)(param_2[6] + 4 + lVar2 * 8) *
                                               4) * 0.043159) +
                                    *(float *)(PTR_DAT_14c731618 +
                                              (ulonglong)*(ushort *)(param_2[8] + 4 + lVar2 * 8) * 4
                                              ) * 0.087929) -
                                   *(float *)(PTR_DAT_14c731618 +
                                             (ulonglong)*(ushort *)(param_2[10] + 4 + lVar2 * 8) * 4
                                             ) * 0.186077) +
                                   *(float *)(PTR_DAT_14c731618 +
                                             (ulonglong)*(ushort *)(param_2[0xc] + 4 + lVar2 * 8) *
                                             4) * 0.627123 +
                                  *(float *)(PTR_DAT_14c731618 +
                                            (ulonglong)*(ushort *)(param_2[0xe] + 4 + lVar2 * 8) * 4
                                            ) * 0.627123) -
                                 *(float *)(PTR_DAT_14c731618 +
                                           (ulonglong)*(ushort *)(param_2[0x10] + 4 + lVar2 * 8) * 4
                                           ) * 0.186077) +
                                *(float *)(PTR_DAT_14c731618 +
                                          (ulonglong)*(ushort *)(param_2[0x12] + 4 + lVar2 * 8) * 4)
                                * 0.087929) -
                               *(float *)(PTR_DAT_14c731618 +
                                         (ulonglong)*(ushort *)(param_2[0x14] + 4 + lVar2 * 8) * 4)
                               * 0.043159) +
                              *(float *)(PTR_DAT_14c731618 +
                                        (ulonglong)*(ushort *)(param_2[0x16] + 4 + lVar2 * 8) * 4) *
                              0.019597) -
                             *(float *)(PTR_DAT_14c731618 +
                                       (ulonglong)*(ushort *)(param_2[0x18] + 4 + lVar2 * 8) * 4) *
                             0.00754) +
                             *(float *)(PTR_DAT_14c731618 +
                                       (ulonglong)*(ushort *)(param_2[0x1a] + 4 + lVar2 * 8) * 4) *
                             0.002128);
      *(undefined2 *)(param_3 + 4 + lVar2 * 8) = *puVar1;
      *(undefined2 *)(param_3 + 2 + lVar2 * 8) = *(undefined2 *)(param_2[0xd] + 2 + lVar2 * 8);
      *(undefined2 *)(param_3 + 6 + lVar2 * 8) = *(undefined2 *)(param_2[0xd] + 6 + lVar2 * 8);
      lVar2 = lVar2 + 1;
    } while (lVar2 < param_1);
  }
  return;
}



// FUNCTION 144e819a0 FUN_144e819a0 body=347 status=ok
// SIG undefined FUN_144e819a0(void)

void FUN_144e819a0(float *param_1,int param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  undefined2 *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  longlong lVar9;
  ushort *puVar10;
  float fVar11;
  float fVar12;
  undefined1 local_res10 [8];
  undefined1 local_68 [2];
  undefined1 local_66 [78];
  
  if (0 < param_2) {
    puVar10 = (ushort *)(param_3 + 2);
    param_4 = param_4 - param_3;
    lVar9 = (longlong)param_2;
    do {
      if ((*(float *)(PTR_DAT_14c731618 + (ulonglong)puVar10[-1] * 4) == 0.0) &&
         (*(float *)(PTR_DAT_14c731618 + (ulonglong)puVar10[1] * 4) == 0.0)) {
        *(ushort *)(param_4 + -2 + (longlong)puVar10) = *puVar10;
        uVar5 = *puVar10;
        puVar8 = puVar10;
      }
      else {
        fVar1 = *(float *)(PTR_DAT_14c731618 + (ulonglong)*puVar10 * 4);
        fVar11 = (*(float *)(PTR_DAT_14c731618 + (ulonglong)puVar10[-1] * 4) + 1.0) * fVar1;
        fVar2 = *param_1;
        fVar12 = (*(float *)(PTR_DAT_14c731618 + (ulonglong)puVar10[1] * 4) + 1.0) * fVar1;
        fVar3 = param_1[2];
        fVar4 = param_1[1];
        puVar6 = (undefined2 *)FUN_144e66df0(local_res10,fVar11);
        *(undefined2 *)(param_4 + -2 + (longlong)puVar10) = *puVar6;
        puVar7 = (ushort *)
                 FUN_144e66df0(local_68,((fVar1 - fVar11 * fVar2) - fVar12 * fVar3) / fVar4);
        puVar8 = (ushort *)FUN_144e66df0(local_66,fVar12);
        uVar5 = *puVar7;
      }
      *(ushort *)(param_4 + (longlong)puVar10) = uVar5;
      *(ushort *)(param_4 + 2 + (longlong)puVar10) = *puVar8;
      *(ushort *)(param_4 + 4 + (longlong)puVar10) = puVar10[2];
      puVar10 = puVar10 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144e81b00 FUN_144e81b00 body=814 status=ok
// SIG undefined FUN_144e81b00(void)

void FUN_144e81b00(undefined8 param_1,int param_2,longlong *param_3,undefined8 *param_4)

{
  float fVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ushort *puVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar14 = (longlong)param_2;
  fVar15 = (float)FUN_144e81e30(*param_3);
  fVar16 = (float)FUN_144e81e30(param_3[2]);
  iVar9 = 0;
  iVar13 = (int)lVar14;
  if (0 < iVar13) {
    lVar4 = -(longlong)param_4;
    puVar8 = param_4;
    fVar17 = fVar15;
    fVar18 = fVar16;
    do {
      fVar20 = fVar15;
      fVar19 = fVar16;
      fVar16 = fVar19;
      fVar15 = fVar20;
      if (iVar9 < iVar13 + -1) {
        lVar3 = *param_3;
        uVar5 = *(ushort *)((longlong)puVar8 + lVar3 + lVar4 + 10);
        uVar10 = (ulonglong)uVar5;
        uVar2 = *(ushort *)((longlong)puVar8 + lVar3 + lVar4 + 0xc);
        uVar7 = *(ushort *)((longlong)puVar8 + lVar3 + lVar4 + 8);
        fVar16 = *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar7 * 4);
        if (*(float *)(PTR_DAT_14c731618 + uVar10 * 4) <
            *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar2 * 4)) {
          uVar5 = uVar2;
        }
        uVar6 = uVar7;
        if (fVar16 < *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar5 * 4)) {
          uVar6 = uVar5;
        }
        if (*(float *)(PTR_DAT_14c731618 + (ulonglong)uVar6 * 4) <= 0.0) {
          fVar15 = 0.0;
        }
        else {
          if (*(float *)(PTR_DAT_14c731618 + (ulonglong)uVar2 * 4) <
              *(float *)(PTR_DAT_14c731618 + uVar10 * 4)) {
            uVar10 = (ulonglong)uVar2;
          }
          uVar11 = (ulonglong)uVar7;
          if (*(float *)(PTR_DAT_14c731618 + uVar10 * 4) <= fVar16 &&
              fVar16 != *(float *)(PTR_DAT_14c731618 + uVar10 * 4)) {
            uVar11 = uVar10;
          }
          fVar15 = 1.0 - *(float *)(PTR_DAT_14c731618 + uVar11 * 4) /
                         *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar6 * 4);
        }
        lVar3 = param_3[2];
        uVar5 = *(ushort *)((longlong)puVar8 + lVar3 + lVar4 + 10);
        uVar10 = (ulonglong)uVar5;
        uVar2 = *(ushort *)((longlong)puVar8 + lVar3 + lVar4 + 0xc);
        uVar7 = *(ushort *)((longlong)puVar8 + lVar3 + lVar4 + 8);
        fVar16 = *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar7 * 4);
        if (*(float *)(PTR_DAT_14c731618 + uVar10 * 4) <
            *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar2 * 4)) {
          uVar5 = uVar2;
        }
        uVar6 = uVar7;
        if (fVar16 < *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar5 * 4)) {
          uVar6 = uVar5;
        }
        if (*(float *)(PTR_DAT_14c731618 + (ulonglong)uVar6 * 4) <= 0.0) {
          fVar16 = 0.0;
        }
        else {
          if (*(float *)(PTR_DAT_14c731618 + (ulonglong)uVar2 * 4) <
              *(float *)(PTR_DAT_14c731618 + uVar10 * 4)) {
            uVar10 = (ulonglong)uVar2;
          }
          uVar11 = (ulonglong)uVar7;
          if (*(float *)(PTR_DAT_14c731618 + uVar10 * 4) <= fVar16 &&
              fVar16 != *(float *)(PTR_DAT_14c731618 + uVar10 * 4)) {
            uVar11 = uVar10;
          }
          fVar16 = 1.0 - *(float *)(PTR_DAT_14c731618 + uVar11 * 4) /
                         *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar6 * 4);
        }
      }
      puVar12 = (ushort *)((longlong)puVar8 + (param_3[1] - (longlong)param_4));
      uVar10 = (ulonglong)puVar12[1];
      uVar5 = puVar12[2];
      uVar2 = *puVar12;
      fVar1 = *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar2 * 4);
      fVar17 = (fVar17 + fVar15 + fVar18 + fVar16) * 0.25;
      uVar7 = puVar12[1];
      if (*(float *)(PTR_DAT_14c731618 + uVar10 * 4) <
          *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar5 * 4)) {
        uVar7 = uVar5;
      }
      if (1.0 <= fVar17) {
        fVar17 = 1.0;
      }
      uVar6 = uVar2;
      if (fVar1 < *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar7 * 4)) {
        uVar6 = uVar7;
      }
      if (*(float *)(PTR_DAT_14c731618 + (ulonglong)uVar6 * 4) <= 0.0) {
        fVar18 = 0.0;
      }
      else {
        if (*(float *)(PTR_DAT_14c731618 + (ulonglong)uVar5 * 4) <
            *(float *)(PTR_DAT_14c731618 + uVar10 * 4)) {
          uVar10 = (ulonglong)uVar5;
        }
        uVar11 = (ulonglong)uVar2;
        if (*(float *)(PTR_DAT_14c731618 + uVar10 * 4) <= fVar1 &&
            fVar1 != *(float *)(PTR_DAT_14c731618 + uVar10 * 4)) {
          uVar11 = uVar10;
        }
        fVar18 = 1.0 - *(float *)(PTR_DAT_14c731618 + uVar11 * 4) /
                       *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar6 * 4);
      }
      if (fVar18 <= fVar17) {
LAB_144e81dbc:
        *puVar8 = *(undefined8 *)puVar12;
      }
      else {
        fVar17 = 1.0 - (1.0 - fVar17) * 0.25;
        if (1.0 <= fVar17) {
          fVar17 = 1.0;
        }
        if (fVar18 <= fVar17) goto LAB_144e81dbc;
        FUN_144e81ec0(puVar12,fVar17 / fVar18,param_1,puVar8);
      }
      iVar9 = iVar9 + 1;
      puVar8 = puVar8 + 1;
      lVar14 = lVar14 + -1;
      fVar17 = fVar20;
      fVar18 = fVar19;
    } while (lVar14 != 0);
  }
  return;
}



// FUNCTION 144e81e30 FUN_144e81e30 body=134 status=ok
// SIG undefined FUN_144e81e30(void)

float FUN_144e81e30(ushort *param_1)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  
  uVar6 = (ulonglong)param_1[1];
  uVar2 = param_1[2];
  uVar3 = *param_1;
  fVar1 = *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar3 * 4);
  uVar4 = param_1[1];
  if (*(float *)(PTR_DAT_14c731618 + uVar6 * 4) <
      *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar2 * 4)) {
    uVar4 = uVar2;
  }
  fVar8 = 0.0;
  uVar5 = uVar3;
  if (fVar1 < *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar4 * 4)) {
    uVar5 = uVar4;
  }
  if (0.0 < *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar5 * 4)) {
    if (*(float *)(PTR_DAT_14c731618 + (ulonglong)uVar2 * 4) <
        *(float *)(PTR_DAT_14c731618 + uVar6 * 4)) {
      uVar6 = (ulonglong)uVar2;
    }
    uVar7 = (ulonglong)uVar3;
    if (*(float *)(PTR_DAT_14c731618 + uVar6 * 4) <= fVar1 &&
        fVar1 != *(float *)(PTR_DAT_14c731618 + uVar6 * 4)) {
      uVar7 = uVar6;
    }
    fVar8 = 1.0 - *(float *)(PTR_DAT_14c731618 + uVar7 * 4) /
                  *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar5 * 4);
  }
  return fVar8;
}



// FUNCTION 144e81ec0 FUN_144e81ec0 body=517 status=ok
// SIG undefined FUN_144e81ec0(void)

void FUN_144e81ec0(ushort *param_1,float param_2,float *param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res10 [8];
  
  uVar5 = (ulonglong)param_1[1];
  if (*(float *)(PTR_DAT_14c731618 + uVar5 * 4) <=
      *(float *)(PTR_DAT_14c731618 + (ulonglong)param_1[2] * 4) &&
      *(float *)(PTR_DAT_14c731618 + (ulonglong)param_1[2] * 4) !=
      *(float *)(PTR_DAT_14c731618 + uVar5 * 4)) {
    uVar5 = (ulonglong)param_1[2];
  }
  uVar6 = (ulonglong)*param_1;
  if (*(float *)(PTR_DAT_14c731618 + (ulonglong)*param_1 * 4) <
      *(float *)(PTR_DAT_14c731618 + uVar5 * 4)) {
    uVar6 = uVar5;
  }
  fVar9 = *(float *)(PTR_DAT_14c731618 + uVar6 * 4);
  fVar7 = fVar9 - (fVar9 - *(float *)(PTR_DAT_14c731618 + (ulonglong)*param_1 * 4)) * param_2;
  fVar8 = 0.0;
  if (0.0 <= fVar7) {
    fVar8 = fVar7;
  }
  puVar4 = (ushort *)FUN_144e66df0(local_res10,fVar8);
  uVar1 = *puVar4;
  *param_4 = uVar1;
  puVar4 = (ushort *)FUN_144e66df0(local_res10);
  uVar2 = *puVar4;
  param_4[1] = uVar2;
  fVar9 = fVar9 - (fVar9 - *(float *)(PTR_DAT_14c731618 + (ulonglong)param_1[2] * 4)) * param_2;
  fVar8 = 0.0;
  if (0.0 <= fVar9) {
    fVar8 = fVar9;
  }
  puVar4 = (ushort *)FUN_144e66df0(local_res10,fVar8);
  uVar3 = *puVar4;
  param_4[2] = uVar3;
  param_4[3] = param_1[3];
  fVar9 = param_3[1] * *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar2 * 4) +
          *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar1 * 4) * *param_3 +
          param_3[2] * *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar3 * 4);
  if (0.0 < fVar9) {
    fVar9 = (*param_3 * *(float *)(PTR_DAT_14c731618 + (ulonglong)*param_1 * 4) +
             param_3[1] * *(float *)(PTR_DAT_14c731618 + (ulonglong)param_1[1] * 4) +
            param_3[2] * *(float *)(PTR_DAT_14c731618 + (ulonglong)param_1[2] * 4)) / fVar9;
    puVar4 = (ushort *)
             FUN_144e66df0(local_res10,fVar9 * *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar1 * 4))
    ;
    *param_4 = *puVar4;
    puVar4 = (ushort *)
             FUN_144e66df0(local_res10,
                           fVar9 * *(float *)(PTR_DAT_14c731618 + (ulonglong)param_4[1] * 4));
    param_4[1] = *puVar4;
    puVar4 = (ushort *)
             FUN_144e66df0(local_res10,
                           fVar9 * *(float *)(PTR_DAT_14c731618 + (ulonglong)param_4[2] * 4));
    param_4[2] = *puVar4;
  }
  return;
}



// FUNCTION 144e820d0 FUN_144e820d0 body=1344 status=ok
// SIG undefined FUN_144e820d0(void)

void FUN_144e820d0(int *param_1,int param_2,int param_3,int param_4,int *param_5,int *param_6)

{
  longlong lVar1;
  size_t sVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int *piVar16;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [4];
  uint local_d4;
  uint local_d0;
  longlong *local_c8;
  int *local_c0;
  int *local_b8;
  int *local_b0;
  int *local_a0;
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b0 = param_5;
  local_c0 = param_6;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  plVar11 = (longlong *)(param_1 + 4);
  uVar12 = 0;
  *plVar11 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  iVar3 = *param_1;
  local_c8 = plVar11;
  local_b8 = param_1;
  local_a0 = param_1;
  if ((iVar3 == 0) || (iVar3 == 1)) {
    FUN_144e834e0(plVar11,(longlong)param_1[1]);
    local_d4 = 0;
    lVar14 = *plVar11;
    if ((*(longlong *)(param_1 + 6) - lVar14) / 0x18 != 0) {
      do {
        uVar9 = 0;
        lVar1 = uVar12 * 0x18;
        plVar11 = (longlong *)(lVar1 + lVar14);
        uVar15 = (ulonglong)param_6[uVar12];
        puVar8 = (undefined8 *)plVar11[1];
        lVar14 = *plVar11;
        lVar7 = ((longlong)puVar8 - lVar14) / 6 + ((longlong)puVar8 - lVar14 >> 0x3f);
        uVar13 = (lVar7 >> 2) - (lVar7 >> 0x3f);
        if (uVar15 < uVar13) {
          lVar14 = lVar14 + uVar15 * 0x18;
          FUN_144e6eac0(lVar14,puVar8,plVar11);
          plVar11[1] = lVar14;
        }
        else if (uVar13 < uVar15) {
          if ((ulonglong)((plVar11[2] - lVar14) / 0x18) < uVar15) {
            FUN_144e83700(plVar11,uVar15,local_d8);
          }
          else {
            for (lVar14 = uVar15 - uVar13; lVar14 != 0; lVar14 = lVar14 + -1) {
              *puVar8 = 0;
              puVar8[1] = 0;
              puVar8[2] = 0;
              puVar8 = puVar8 + 3;
            }
            FUN_144e6eac0(puVar8,puVar8,plVar11);
            plVar11[1] = (longlong)puVar8;
          }
        }
        plVar11 = local_c8;
        lVar14 = *local_c8;
        lVar5 = *(longlong *)(lVar1 + 8 + lVar14) - *(longlong *)(lVar1 + lVar14);
        lVar7 = lVar5 >> 0x3f;
        uVar6 = (uint)uVar12;
        if (lVar5 / 0x18 + lVar7 != lVar7) {
          do {
            plVar10 = (longlong *)(*(longlong *)(lVar14 + lVar1) + uVar9 * 0x18);
            uVar15 = (ulonglong)local_b0[uVar12];
            pvVar4 = (void *)plVar10[1];
            lVar14 = *plVar10;
            uVar13 = (longlong)pvVar4 - lVar14 >> 3;
            if (uVar15 < uVar13) {
              pvVar4 = (void *)(lVar14 + uVar15 * 8);
LAB_144e82561:
              plVar10[1] = (longlong)pvVar4;
            }
            else if (uVar13 < uVar15) {
              if (uVar15 <= (ulonglong)(plVar10[2] - lVar14 >> 3)) {
                sVar2 = (uVar15 - uVar13) * 8;
                memset(pvVar4,0,sVar2);
                pvVar4 = (void *)((longlong)pvVar4 + sVar2);
                goto LAB_144e82561;
              }
              FUN_144b702f0(plVar10,uVar15,local_d8);
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
            lVar14 = *plVar11;
            uVar6 = local_d4;
          } while (uVar9 < (ulonglong)
                           ((*(longlong *)(lVar1 + 8 + lVar14) - *(longlong *)(lVar1 + lVar14)) /
                           0x18));
        }
        local_d4 = uVar6 + 1;
        uVar12 = (ulonglong)local_d4;
        param_6 = local_c0;
      } while ((ulonglong)local_d4 < (ulonglong)((local_c8[1] - lVar14) / 0x18));
    }
  }
  else if (iVar3 == 2) {
    FUN_144e834e0(plVar11,(longlong)(param_1[2] * param_1[1]));
    local_d0 = 0;
    if (0 < param_1[2]) {
      do {
        local_d4 = 0;
        iVar3 = param_1[1];
        piVar16 = param_5;
        uVar6 = (uint)uVar12;
        if (0 < iVar3) {
          do {
            uVar9 = 0;
            lVar1 = (longlong)(int)(iVar3 * (int)uVar12 + local_d4) * 0x18;
            plVar10 = (longlong *)(*plVar11 + lVar1);
            uVar13 = (ulonglong)*param_6;
            puVar8 = (undefined8 *)plVar10[1];
            lVar14 = *plVar10;
            lVar7 = ((longlong)puVar8 - lVar14) / 6 + ((longlong)puVar8 - lVar14 >> 0x3f);
            uVar12 = (lVar7 >> 2) - (lVar7 >> 0x3f);
            if (uVar13 < uVar12) {
              lVar14 = lVar14 + uVar13 * 0x18;
              FUN_144e6eac0(lVar14,puVar8,plVar10);
              plVar10[1] = lVar14;
              param_1 = local_b8;
            }
            else if (uVar12 < uVar13) {
              if ((ulonglong)((plVar10[2] - lVar14) / 0x18) < uVar13) {
                FUN_144e83700(plVar10,uVar13,local_d8);
              }
              else {
                for (lVar14 = uVar13 - uVar12; lVar14 != 0; lVar14 = lVar14 + -1) {
                  *puVar8 = 0;
                  puVar8[1] = 0;
                  puVar8[2] = 0;
                  puVar8 = puVar8 + 3;
                }
                FUN_144e6eac0(puVar8,puVar8,plVar10);
                plVar10[1] = (longlong)puVar8;
              }
            }
            lVar14 = *plVar11;
            lVar5 = *(longlong *)(lVar14 + 8 + lVar1) - *(longlong *)(lVar14 + lVar1);
            lVar7 = lVar5 >> 0x3f;
            if (lVar5 / 0x18 + lVar7 != lVar7) {
              lVar7 = 0;
              do {
                plVar11 = (longlong *)(*(longlong *)(lVar14 + lVar1) + lVar7);
                uVar13 = (ulonglong)*piVar16;
                pvVar4 = (void *)plVar11[1];
                lVar14 = *plVar11;
                uVar12 = (longlong)pvVar4 - lVar14 >> 3;
                if (uVar13 < uVar12) {
                  pvVar4 = (void *)(lVar14 + uVar13 * 8);
LAB_144e82317:
                  plVar11[1] = (longlong)pvVar4;
                }
                else if (uVar12 < uVar13) {
                  if (uVar13 <= (ulonglong)(plVar11[2] - lVar14 >> 3)) {
                    sVar2 = (uVar13 - uVar12) * 8;
                    memset(pvVar4,0,sVar2);
                    pvVar4 = (void *)(sVar2 + (longlong)pvVar4);
                    goto LAB_144e82317;
                  }
                  FUN_144b702f0(plVar11,uVar13,local_d8);
                }
                uVar9 = uVar9 + 1;
                lVar7 = lVar7 + 0x18;
                lVar14 = *(longlong *)(local_b8 + 4);
                param_1 = local_b8;
                plVar11 = local_c8;
              } while (uVar9 < (ulonglong)
                               ((*(longlong *)(lVar14 + 8 + lVar1) - *(longlong *)(lVar14 + lVar1))
                               / 0x18));
            }
            local_d4 = local_d4 + 1;
            iVar3 = param_1[1];
            uVar12 = (ulonglong)local_d0;
            param_6 = local_c0;
            param_5 = local_b0;
            piVar16 = piVar16 + 1;
            uVar6 = local_d0;
          } while ((int)local_d4 < iVar3);
        }
        local_d0 = uVar6 + 1;
        uVar12 = (ulonglong)local_d0;
        param_6 = param_6 + 1;
        local_c0 = param_6;
      } while ((int)local_d0 < param_1[2]);
    }
  }
  else if (iVar3 == 3) {
    FUN_144e40d70(local_98,"Bad initialisation of TileOffsets object");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_f8);
}



// FUNCTION 144e82640 FUN_144e82640 body=469 status=ok
// SIG undefined FUN_144e82640(void)

void FUN_144e82640(longlong param_1,undefined8 param_2,undefined1 *param_3,undefined1 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  uVar8 = 0;
  if ((*(longlong *)(param_1 + 0x18) - lVar4) / 0x18 != 0) {
    uVar7 = 0;
    do {
      uVar9 = 0;
      lVar1 = uVar7 * 0x18;
      lVar5 = *(longlong *)(lVar1 + 8 + lVar4) - *(longlong *)(lVar1 + lVar4);
      lVar2 = lVar5 >> 0x3f;
      if (lVar5 / 0x18 + lVar2 != lVar2) {
        do {
          uVar6 = 0;
          lVar2 = uVar9 * 0x18;
          if (*(longlong *)(lVar2 + 8 + *(longlong *)(lVar1 + lVar4)) -
              *(longlong *)(lVar2 + *(longlong *)(lVar1 + lVar4)) >> 3 != 0) {
            uVar7 = 0;
            do {
              FUN_144e5f3c0(param_2,*(longlong *)(*(longlong *)(lVar1 + lVar4) + lVar2) + uVar7 * 8)
              ;
              lVar4 = *(longlong *)(param_1 + 0x10);
              uVar6 = uVar6 + 1;
              uVar7 = (ulonglong)uVar6;
            } while (uVar7 < (ulonglong)
                             (*(longlong *)(lVar2 + 8 + *(longlong *)(lVar4 + lVar1)) -
                              *(longlong *)(lVar2 + *(longlong *)(lVar4 + lVar1)) >> 3));
          }
          uVar9 = (ulonglong)((int)uVar9 + 1);
        } while (uVar9 < (ulonglong)
                         ((*(longlong *)(lVar1 + 8 + lVar4) - *(longlong *)(lVar1 + lVar4)) / 0x18))
        ;
      }
      uVar8 = uVar8 + 1;
      uVar7 = (ulonglong)uVar8;
    } while (uVar7 < (ulonglong)((*(longlong *)(param_1 + 0x18) - lVar4) / 0x18));
  }
  cVar3 = FUN_144e83310(param_1);
  if (cVar3 == '\0') {
    *param_3 = 1;
    return;
  }
  *param_3 = 0;
  FUN_144e83280(param_1,param_2,param_4,param_5);
  return;
}



// FUNCTION 144e82820 FUN_144e82820 body=617 status=ok
// SIG undefined FUN_144e82820(void)

void FUN_144e82820(longlong param_1,longlong *param_2,byte *param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar11 = 0;
  uVar6 = 0;
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(param_1 + 0x18) - lVar2;
  lVar3 = lVar3 / 6 + (lVar3 >> 0x3f);
  lVar7 = lVar3 >> 2;
  lVar3 = lVar3 >> 0x3f;
  if (lVar7 != lVar3) {
    uVar12 = 0;
    do {
      uVar8 = 0;
      lVar5 = *(longlong *)(lVar2 + uVar12 * 0x18);
      lVar4 = *(longlong *)(lVar2 + 8 + uVar12 * 0x18) - lVar5;
      lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
      lVar10 = lVar4 >> 2;
      lVar4 = lVar4 >> 0x3f;
      if (lVar10 != lVar4) {
        do {
          lVar11 = lVar11 + (*(longlong *)(lVar5 + 8 + uVar8 * 0x18) -
                             *(longlong *)(lVar5 + uVar8 * 0x18) >> 3);
          uVar8 = (ulonglong)((int)uVar8 + 1);
        } while (uVar8 < (ulonglong)(lVar10 - lVar4));
      }
      uVar6 = uVar6 + 1;
      uVar12 = (ulonglong)uVar6;
    } while (uVar12 < (ulonglong)(lVar7 - lVar3));
  }
  local_b8 = param_2;
  if (param_2[1] - *param_2 >> 3 != lVar11) {
    FUN_144e40d70(local_a8,"Wrong offset count, not able to read from this array");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
  }
  uVar12 = 0;
  if (lVar7 != lVar3) {
    lVar3 = 0;
    lVar7 = 0;
    do {
      uVar8 = 0;
      lVar5 = *(longlong *)(lVar7 + 8 + lVar2) - *(longlong *)(lVar7 + lVar2);
      lVar11 = lVar5 >> 0x3f;
      if (lVar5 / 0x18 + lVar11 != lVar11) {
        lVar11 = 0;
        do {
          uVar9 = 0;
          if (*(longlong *)(lVar11 + 8 + *(longlong *)(lVar7 + lVar2)) -
              *(longlong *)(lVar11 + *(longlong *)(lVar7 + lVar2)) >> 3 != 0) {
            do {
              *(undefined8 *)(*(longlong *)(lVar11 + *(longlong *)(lVar7 + lVar2)) + uVar9 * 8) =
                   *(undefined8 *)(*param_2 + lVar3 * 8);
              lVar3 = lVar3 + 1;
              uVar9 = uVar9 + 1;
              lVar2 = *(longlong *)(param_1 + 0x10);
            } while (uVar9 < (ulonglong)
                             (*(longlong *)(lVar11 + 8 + *(longlong *)(lVar7 + lVar2)) -
                              *(longlong *)(lVar11 + *(longlong *)(lVar7 + lVar2)) >> 3));
          }
          uVar8 = uVar8 + 1;
          lVar11 = lVar11 + 0x18;
        } while (uVar8 < (ulonglong)
                         ((*(longlong *)(lVar7 + 8 + lVar2) - *(longlong *)(lVar7 + lVar2)) / 0x18))
        ;
      }
      uVar12 = uVar12 + 1;
      lVar7 = lVar7 + 0x18;
    } while (uVar12 < (ulonglong)((*(longlong *)(param_1 + 0x18) - lVar2) / 0x18));
  }
  bVar1 = FUN_144e83310(param_1);
  *param_3 = bVar1 ^ 1;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar12 = param_2[2] - lVar2 & 0xfffffffffffffff8;
    lVar3 = lVar2;
    if (0xfff < uVar12) {
      uVar12 = uVar12 + 0x27;
      lVar3 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar3,uVar12);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
}



// FUNCTION 144e82aa0 FUN_144e82aa0 body=169 status=ok
// SIG undefined FUN_144e82aa0(void)

void FUN_144e82aa0(int *param_1)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *param_1;
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) {
    FUN_144e40d70(local_78,"Unknown LevelMode format.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 144e82b60 FUN_144e82b60 body=483 status=ok
// SIG undefined FUN_144e82b60(void)

ulonglong FUN_144e82b60(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong *plVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_3;
  if ((((param_4 < 0) || (param_5 < 0)) || (param_2 < 0)) || (param_3 < 0)) goto LAB_144e82cb4;
  iVar2 = *param_1;
  if (iVar2 == 0) {
    if ((param_4 != 0) || (param_5 != 0)) goto LAB_144e82cb4;
    plVar1 = *(longlong **)(param_1 + 4);
    lVar4 = *(longlong *)(param_1 + 6) - (longlong)plVar1 >> 0x3f;
    in_RAX = -lVar4;
    if ((*(longlong *)(param_1 + 6) - (longlong)plVar1) / 0x18 + lVar4 == lVar4) goto LAB_144e82cb4;
    lVar4 = *plVar1;
    in_RAX = 0;
    if ((int)((plVar1[1] - lVar4) / 0x18) <= param_3) goto LAB_144e82cb4;
    in_RAX = *(longlong *)(lVar4 + 8 + lVar6 * 0x18) - *(longlong *)(lVar4 + lVar6 * 0x18) >> 3;
    iVar2 = (int)in_RAX;
  }
  else {
    if (iVar2 == 1) {
      if ((param_1[1] <= param_4) || (param_1[2] <= param_5)) goto LAB_144e82cb4;
      lVar4 = *(longlong *)(param_1 + 4);
      in_RAX = 0;
      if ((int)((*(longlong *)(param_1 + 6) - lVar4) / 0x18) <= param_4) goto LAB_144e82cb4;
      lVar5 = *(longlong *)(lVar4 + (longlong)param_4 * 0x18);
      lVar4 = *(longlong *)(lVar4 + 8 + (longlong)param_4 * 0x18) - lVar5;
      lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
    }
    else {
      if (iVar2 != 2) goto LAB_144e82cb4;
      iVar2 = param_1[1];
      if ((iVar2 <= param_4) || (param_1[2] <= param_5)) goto LAB_144e82cb4;
      lVar4 = *(longlong *)(param_1 + 4);
      in_RAX = (*(longlong *)(param_1 + 6) - lVar4) * 0x2aaaaaaaaaaaaaab;
      if ((ulonglong)((*(longlong *)(param_1 + 6) - lVar4) / 0x18) <=
          (ulonglong)((longlong)iVar2 * (longlong)param_5 + (longlong)param_4)) goto LAB_144e82cb4;
      lVar3 = (longlong)(iVar2 * param_5 + param_4);
      lVar5 = *(longlong *)(lVar4 + lVar3 * 0x18);
      lVar4 = *(longlong *)(lVar4 + 8 + lVar3 * 0x18) - lVar5;
      lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
    }
    in_RAX = 0;
    if ((int)(lVar4 >> 2) - (int)(lVar4 >> 0x3f) <= param_3) goto LAB_144e82cb4;
    in_RAX = *(longlong *)(lVar5 + 8 + lVar6 * 0x18) - *(longlong *)(lVar5 + lVar6 * 0x18) >> 3;
    iVar2 = (int)in_RAX;
  }
  if (param_2 < iVar2) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_144e82cb4:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 144e82d50 FUN_144e82d50 body=5 status=ok
// SIG undefined FUN_144e82d50(void)

longlong FUN_144e82d50(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 144e82d60 FUN_144e82d60 body=1292 status=ok
// SIG undefined FUN_144e82d60(void)

void FUN_144e82d60(longlong param_1,longlong *param_2,char param_3,char param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_538 [32];
  undefined4 local_518;
  char local_508;
  char local_507;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  int local_4f4;
  uint local_4f0;
  uint local_4ec;
  longlong local_4e8;
  undefined1 local_4e0 [8];
  undefined8 local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  undefined1 local_4b8 [96];
  longlong local_458;
  ulonglong local_450;
  undefined1 local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_538;
  lVar11 = *(longlong *)(param_1 + 0x10);
  lVar9 = *(longlong *)(param_1 + 0x18) - lVar11;
  local_4ec = 0;
  lVar13 = lVar9 >> 0x3f;
  local_508 = param_3;
  local_507 = param_4;
  local_4e8 = param_1;
  if (lVar9 / 0x18 + lVar13 != lVar13) {
    uVar12 = 0;
    do {
      uVar15 = 0;
      lVar13 = uVar12 * 0x18;
      lVar8 = *(longlong *)(lVar11 + 8 + uVar12 * 0x18) - *(longlong *)(lVar11 + lVar13);
      local_4f0 = 0;
      lVar9 = lVar8 >> 0x3f;
      local_4d0 = lVar13;
      if (lVar8 / 0x18 + lVar9 != lVar9) {
        do {
          uVar10 = 0;
          local_4c8 = uVar15 * 0x18;
          uVar14 = (uint)uVar15;
          if (*(longlong *)(local_4c8 + 8 + *(longlong *)(lVar13 + lVar11)) -
              *(longlong *)(local_4c8 + *(longlong *)(lVar13 + lVar11)) >> 3 != 0) {
            do {
              local_4d8 = (**(code **)(*param_2 + 0x20))(param_2);
              if (param_3 != '\0') {
                (**(code **)(*param_2 + 0x10))(param_2,local_4e0,4);
              }
              (**(code **)(*param_2 + 0x10))(param_2,&local_504,4);
              uVar2 = local_504;
              (**(code **)(*param_2 + 0x10))(param_2,&local_500,4);
              uVar3 = local_500;
              (**(code **)(*param_2 + 0x10))(param_2,&local_4fc,4);
              uVar4 = local_4fc;
              (**(code **)(*param_2 + 0x10))(param_2,&local_4f8,4);
              uVar5 = local_4f8;
              if (local_507 == '\0') {
                (**(code **)(*param_2 + 0x10))(param_2,&local_4f4,4);
                iVar1 = local_4f4;
                if (local_4f4 < 0) {
                  FUN_144e411f0(local_4b8,"Invalid tile size");
                    /* WARNING: Subroutine does not return */
                  _CxxThrowException(local_4b8,(ThrowInfo *)&DAT_14c6d52d8);
                }
                for (; 0x3ff < iVar1; iVar1 = iVar1 + -0x400) {
                  cVar6 = (**(code **)(*param_2 + 0x10))(param_2,local_448,0x400);
                  if (cVar6 == '\0') goto LAB_144e8311a;
                }
                if (0 < iVar1) {
                  (**(code **)(*param_2 + 0x10))(param_2,local_448,iVar1);
                }
              }
              else {
                (**(code **)(*param_2 + 0x10))(param_2,&local_458,8);
                lVar11 = local_458;
                (**(code **)(*param_2 + 0x10))(param_2,&local_450,8);
                if ((0x7fffffffffffffffU - lVar11 < local_450) ||
                   ((0x7fffffffffffffff - local_450) - lVar11 < 8)) {
                  FUN_144e411f0(local_4b8,"Invalid deep tile size");
                    /* WARNING: Subroutine does not return */
                  _CxxThrowException(local_4b8,(ThrowInfo *)&DAT_14c6d52d8);
                }
                FUN_144e48c60(param_2,(int)local_450 + 8 + (int)lVar11);
              }
LAB_144e8311a:
              param_1 = local_4e8;
              if (param_5 == '\0') {
                local_518 = uVar5;
                cVar6 = FUN_144e82b60(local_4e8,uVar2,uVar3,uVar4);
                if (cVar6 == '\0') goto LAB_144e8321d;
                local_518 = uVar5;
                puVar7 = (undefined8 *)FUN_144e82aa0(param_1,uVar2,uVar3,uVar4);
                *puVar7 = local_4d8;
              }
              uVar10 = uVar10 + 1;
              lVar11 = *(longlong *)(param_1 + 0x10);
              lVar13 = local_4d0;
              uVar14 = local_4f0;
              param_3 = local_508;
            } while ((ulonglong)uVar10 <
                     (ulonglong)
                     (*(longlong *)(local_4c8 + 8 + *(longlong *)(lVar11 + local_4d0)) -
                      *(longlong *)(local_4c8 + *(longlong *)(lVar11 + local_4d0)) >> 3));
          }
          local_4f0 = uVar14 + 1;
          uVar15 = (ulonglong)local_4f0;
        } while (uVar15 < (ulonglong)
                          ((*(longlong *)(lVar13 + 8 + lVar11) - *(longlong *)(lVar13 + lVar11)) /
                          0x18));
      }
      local_4ec = local_4ec + 1;
      uVar12 = (ulonglong)local_4ec;
    } while (uVar12 < (ulonglong)((*(longlong *)(param_1 + 0x18) - lVar11) / 0x18));
  }
LAB_144e8321d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_538);
}



// FUNCTION 144e83280 FUN_144e83280 body=123 status=ok
// SIG undefined FUN_144e83280(void)

void FUN_144e83280(undefined8 param_1,longlong *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  FUN_144e82d60(param_1,param_2,param_3,param_4,0);
  (**(code **)(*param_2 + 0x30))(param_2);
                    /* WARNING: Could not recover jumptable at 0x000144e83301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x28))(param_2,uVar1);
  return;
}



// FUNCTION 144e83310 FUN_144e83310 body=225 status=ok
// SIG undefined FUN_144e83310(void)

ulonglong FUN_144e83310(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 0x18) - lVar1;
  uVar10 = 0;
  lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
  lVar6 = lVar4 >> 2;
  lVar4 = lVar4 >> 0x3f;
  uVar3 = -lVar4;
  uVar7 = lVar6 + uVar3;
  if (lVar6 != lVar4) {
    uVar3 = 0;
    do {
      uVar8 = 0;
      lVar4 = *(longlong *)(lVar1 + uVar3 * 0x18);
      lVar6 = *(longlong *)(lVar1 + 8 + uVar3 * 0x18) - lVar4;
      lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
      lVar9 = lVar6 >> 2;
      lVar6 = lVar6 >> 0x3f;
      if (lVar9 != lVar6) {
        uVar3 = 0;
        do {
          uVar5 = 0;
          lVar2 = *(longlong *)(lVar4 + uVar3 * 0x18);
          uVar3 = *(longlong *)(lVar4 + 8 + uVar3 * 0x18) - lVar2 >> 3;
          if (uVar3 != 0) {
            do {
              if (*(longlong *)(lVar2 + uVar5 * 8) == 0) {
                return CONCAT71((int7)(uVar5 >> 8),1);
              }
              uVar5 = (ulonglong)((int)uVar5 + 1);
            } while (uVar5 < uVar3);
          }
          uVar8 = uVar8 + 1;
          uVar3 = (ulonglong)uVar8;
        } while (uVar3 < (ulonglong)(lVar9 - lVar6));
      }
      uVar10 = uVar10 + 1;
      uVar3 = (ulonglong)uVar10;
    } while (uVar3 < uVar7);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 144e83400 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned
   short,long,long) __ptr64'::`2'::FileSymbolInfo>::deallocate(struct `protected: int __cdecl
   GSI1::readHash(unsigned short,long,long) __ptr64'::`2'::FileSymbolInfo * __ptr64 const,unsigned
   __int64) __ptr64
    public: void __cdecl std::allocator<struct GSISymbolEntry>::deallocate(struct GSISymbolEntry *
   __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x18;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e83450 FUN_144e83450 body=137 status=ok
// SIG undefined FUN_144e83450(void)

void FUN_144e83450(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 != 0) {
    FUN_144e83630(*param_1,param_1[1],param_1);
    lVar1 = *param_1;
    uVar3 = ((param_1[2] - lVar1) / 0x18) * 0x18;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e834e0 FUN_144e834e0 body=242 status=ok
// SIG undefined FUN_144e834e0(void)

void FUN_144e834e0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  puVar2 = (undefined8 *)param_1[1];
  lVar4 = *param_1;
  lVar1 = ((longlong)puVar2 - lVar4) / 6 + ((longlong)puVar2 - lVar4 >> 0x3f);
  uVar3 = (lVar1 >> 2) - (lVar1 >> 0x3f);
  if (param_2 < uVar3) {
    lVar4 = lVar4 + param_2 * 0x18;
    FUN_144e83630(lVar4,puVar2,param_1);
    param_1[1] = lVar4;
    return;
  }
  if (uVar3 < param_2) {
    if ((ulonglong)((param_1[2] - lVar4) / 0x18) < param_2) {
      FUN_144e83960(param_1,param_2,local_res8);
      return;
    }
    for (lVar4 = param_2 - uVar3; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2 = puVar2 + 3;
    }
    FUN_144e83630(puVar2,puVar2,param_1);
    param_1[1] = (longlong)puVar2;
  }
  return;
}



// FUNCTION 144e835e0 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned
   short,long,long) __ptr64'::`2'::FileSymbolInfo>::deallocate(struct `protected: int __cdecl
   GSI1::readHash(unsigned short,long,long) __ptr64'::`2'::FileSymbolInfo * __ptr64 const,unsigned
   __int64) __ptr64
    public: void __cdecl std::allocator<struct GSISymbolEntry>::deallocate(struct GSISymbolEntry *
   __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x18;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e83630 FUN_144e83630 body=194 status=ok
// SIG undefined FUN_144e83630(void)

void FUN_144e83630(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    if (*param_1 != 0) {
      FUN_144e6eac0(*param_1,param_1[1],param_1);
      lVar1 = *param_1;
      uVar2 = ((param_1[2] - lVar1) / 0x18) * 0x18;
      lVar3 = lVar1;
      if (0xfff < uVar2) {
        lVar3 = *(longlong *)(lVar1 + -8);
        uVar2 = uVar2 + 0x27;
        if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar3,uVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  } while( true );
}



// FUNCTION 144e83700 FUN_144e83700 body=604 status=ok
// SIG undefined FUN_144e83700(void)

void FUN_144e83700(longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  
  if (0xaaaaaaaaaaaaaaa < param_2) {
    FUN_144e6e1f0();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar9 = (param_1[1] - *param_1) / 6 + (param_1[1] - *param_1 >> 0x3f);
  lVar9 = (lVar9 >> 2) - (lVar9 >> 0x3f);
  uVar10 = (param_1[2] - *param_1) / 0x18;
  if ((0xaaaaaaaaaaaaaaa - (uVar10 >> 1) < uVar10) ||
     ((uVar10 = (uVar10 >> 1) + uVar10, uVar12 = param_2, param_2 <= uVar10 &&
      (uVar12 = uVar10, 0xaaaaaaaaaaaaaaa < uVar10)))) {
LAB_144e83952:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar10 = uVar12 * 0x18;
  if (uVar10 < 0x1000) {
    if (uVar10 == 0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11 = (undefined8 *)FUN_14494321d(uVar10);
    }
  }
  else {
    if (uVar10 + 0x27 <= uVar10) goto LAB_144e83952;
    lVar5 = FUN_14494321d();
    if (lVar5 == 0) goto LAB_144e8394b;
    puVar11 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    puVar11[-1] = lVar5;
  }
  puVar7 = puVar11 + lVar9 * 3;
  for (lVar9 = param_2 - lVar9; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
  }
  FUN_144e6eac0(puVar7,puVar7,param_1);
  puVar7 = (undefined8 *)param_1[1];
  puVar8 = puVar11;
  for (puVar6 = (undefined8 *)*param_1; puVar6 != puVar7; puVar6 = puVar6 + 3) {
    uVar1 = puVar6[2];
    puVar6[2] = 0;
    uVar2 = puVar6[1];
    puVar6[1] = 0;
    uVar3 = *puVar6;
    *puVar6 = 0;
    *puVar8 = uVar3;
    puVar8[1] = uVar2;
    puVar8[2] = uVar1;
    puVar8 = puVar8 + 3;
  }
  FUN_144e6eac0(puVar8,puVar8,param_1);
  if (*param_1 != 0) {
    FUN_144e6eac0(*param_1,param_1[1],param_1);
    lVar9 = *param_1;
    uVar10 = ((param_1[2] - lVar9) / 0x18) * 0x18;
    lVar5 = lVar9;
    if (0xfff < uVar10) {
      uVar10 = uVar10 + 0x27;
      lVar5 = *(longlong *)(lVar9 + -8);
      if (0x1f < (lVar9 - lVar5) - 8U) {
LAB_144e8394b:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar5,uVar10);
  }
  *param_1 = (longlong)puVar11;
  param_1[1] = (longlong)(puVar11 + param_2 * 3);
  param_1[2] = (longlong)(puVar11 + uVar12 * 3);
  return;
}



// FUNCTION 144e83960 FUN_144e83960 body=604 status=ok
// SIG undefined FUN_144e83960(void)

void FUN_144e83960(longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  
  if (0xaaaaaaaaaaaaaaa < param_2) {
    FUN_144e6bd60();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar9 = (param_1[1] - *param_1) / 6 + (param_1[1] - *param_1 >> 0x3f);
  lVar9 = (lVar9 >> 2) - (lVar9 >> 0x3f);
  uVar10 = (param_1[2] - *param_1) / 0x18;
  if ((0xaaaaaaaaaaaaaaa - (uVar10 >> 1) < uVar10) ||
     ((uVar10 = (uVar10 >> 1) + uVar10, uVar12 = param_2, param_2 <= uVar10 &&
      (uVar12 = uVar10, 0xaaaaaaaaaaaaaaa < uVar10)))) {
LAB_144e83bb2:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar10 = uVar12 * 0x18;
  if (uVar10 < 0x1000) {
    if (uVar10 == 0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11 = (undefined8 *)FUN_14494321d(uVar10);
    }
  }
  else {
    if (uVar10 + 0x27 <= uVar10) goto LAB_144e83bb2;
    lVar5 = FUN_14494321d();
    if (lVar5 == 0) goto LAB_144e83bab;
    puVar11 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    puVar11[-1] = lVar5;
  }
  puVar7 = puVar11 + lVar9 * 3;
  for (lVar9 = param_2 - lVar9; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
  }
  FUN_144e83630(puVar7,puVar7,param_1);
  puVar7 = (undefined8 *)param_1[1];
  puVar8 = puVar11;
  for (puVar6 = (undefined8 *)*param_1; puVar6 != puVar7; puVar6 = puVar6 + 3) {
    uVar1 = puVar6[2];
    puVar6[2] = 0;
    uVar2 = puVar6[1];
    puVar6[1] = 0;
    uVar3 = *puVar6;
    *puVar6 = 0;
    *puVar8 = uVar3;
    puVar8[1] = uVar2;
    puVar8[2] = uVar1;
    puVar8 = puVar8 + 3;
  }
  FUN_144e83630(puVar8,puVar8,param_1);
  if (*param_1 != 0) {
    FUN_144e83630(*param_1,param_1[1],param_1);
    lVar9 = *param_1;
    uVar10 = ((param_1[2] - lVar9) / 0x18) * 0x18;
    lVar5 = lVar9;
    if (0xfff < uVar10) {
      uVar10 = uVar10 + 0x27;
      lVar5 = *(longlong *)(lVar9 + -8);
      if (0x1f < (lVar9 - lVar5) - 8U) {
LAB_144e83bab:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar5,uVar10);
  }
  *param_1 = (longlong)puVar11;
  param_1[1] = (longlong)(puVar11 + param_2 * 3);
  param_1[2] = (longlong)(puVar11 + uVar12 * 3);
  return;
}



// FUNCTION 144e83bc0 FUN_144e83bc0 body=189 status=ok
// SIG undefined FUN_144e83bc0(void)

undefined8 FUN_144e83bc0(longlong param_1,int *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 2;
  }
  if (param_3 < 0) {
                    /* WARNING: Could not recover jumptable at 0x000144e83c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x48))
                      (0,3,"Received request to allocate negative sized string (%d)",param_3);
    return uVar1;
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144e83c37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x40))(0,3,"Invalid reference to string object to initialize");
    return uVar1;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  lVar2 = (**(code **)(param_1 + 0x58))((longlong)(param_3 + 1));
  *(longlong *)(param_2 + 2) = lVar2;
  if (lVar2 == 0) {
    uVar1 = (**(code **)(param_1 + 0x38))(param_1,1);
  }
  else {
    *param_2 = param_3;
    uVar1 = 0;
    param_2[1] = param_3 + 1;
  }
  return uVar1;
}



// FUNCTION 144e83c80 FUN_144e83c80 body=88 status=ok
// SIG undefined FUN_144e83c80(void)

undefined8 FUN_144e83c80(longlong param_1,int *param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 2;
  }
  if (param_4 < 0) {
                    /* WARNING: Could not recover jumptable at 0x000144e83c9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x48))
                      (0,3,"Received request to allocate negative sized string (%d)");
    return uVar1;
  }
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144e83cb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x40))(0,3,"Invalid static string argument to initialize");
    return uVar1;
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144e83cc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x40))(0,3,"Invalid reference to string object to initialize");
    return uVar1;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = param_4;
  *(longlong *)(param_2 + 2) = param_3;
  return 0;
}



// FUNCTION 144e83ce0 FUN_144e83ce0 body=234 status=ok
// SIG undefined FUN_144e83ce0(void)

ulonglong FUN_144e83ce0(longlong param_1,int *param_2,char *param_3,int param_4)

{
  char *_Dest;
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  size_t _Size;
  
  _Size = (size_t)param_4;
  if (param_1 == 0) {
    return 2;
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144e83d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1 + 0x40))
                      (param_1,3,"Invalid (NULL) arguments to string create with length");
    return uVar2;
  }
  if (param_4 < 0) {
    uVar1 = (**(code **)(param_1 + 0x48))
                      (0,3,"Received request to allocate negative sized string (%d)",param_4);
  }
  else {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    lVar3 = (**(code **)(param_1 + 0x58))((longlong)(param_4 + 1));
    *(longlong *)(param_2 + 2) = lVar3;
    if (lVar3 != 0) {
      *param_2 = param_4;
      uVar2 = 0;
      param_2[1] = param_4 + 1;
      goto LAB_144e83d89;
    }
    uVar1 = (**(code **)(param_1 + 0x38))(param_1);
  }
  uVar2 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    return uVar2;
  }
LAB_144e83d89:
  _Dest = *(char **)(param_2 + 2);
  if (0 < param_4) {
    if (param_3 == (char *)0x0) {
      memset(_Dest,0,_Size);
    }
    else {
      strncpy(_Dest,param_3,_Size);
    }
  }
  _Dest[_Size] = '\0';
  return uVar2;
}



// FUNCTION 144e83dd0 FUN_144e83dd0 body=303 status=ok
// SIG undefined FUN_144e83dd0(void)

ulonglong FUN_144e83dd0(longlong param_1,int *param_2,char *param_3)

{
  char *_Dest;
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  uVar4 = uVar5;
  if (param_3 != (char *)0x0) {
    uVar4 = 0xffffffffffffffff;
    do {
      uVar4 = uVar4 + 1;
    } while (param_3[uVar4] != '\0');
    if (0x7ffffffe < uVar4) {
      if (param_1 == 0) {
        return 2;
      }
      uVar4 = (**(code **)(param_1 + 0x40))(param_1,3,"Invalid string too long for attribute");
      return uVar4;
    }
  }
  if (param_1 == 0) {
    return 2;
  }
  if (param_2 == (int *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x40))
                      (param_1,3,"Invalid (NULL) arguments to string create with length");
    return (ulonglong)uVar1;
  }
  iVar3 = (int)uVar4;
  if (iVar3 < 0) {
    uVar1 = (**(code **)(param_1 + 0x48))
                      (0,3,"Received request to allocate negative sized string (%d)",
                       uVar4 & 0xffffffff);
  }
  else {
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    lVar2 = (**(code **)(param_1 + 0x58))((longlong)(iVar3 + 1));
    *(longlong *)(param_2 + 2) = lVar2;
    if (lVar2 != 0) {
      *param_2 = iVar3;
      param_2[1] = iVar3 + 1;
      goto LAB_144e83eb5;
    }
    uVar1 = (**(code **)(param_1 + 0x38))(param_1);
  }
  uVar5 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    return uVar5;
  }
LAB_144e83eb5:
  _Dest = *(char **)(param_2 + 2);
  if (0 < iVar3) {
    if (param_3 == (char *)0x0) {
      memset(_Dest,0,(longlong)iVar3);
    }
    else {
      strncpy(_Dest,param_3,(longlong)iVar3);
    }
  }
  _Dest[iVar3] = '\0';
  return uVar5;
}



// FUNCTION 144e83f00 FUN_144e83f00 body=217 status=ok
// SIG undefined FUN_144e83f00(void)

undefined8 FUN_144e83f00(longlong param_1,int *param_2,char *param_3,int param_4)

{
  char *_Dest;
  undefined8 uVar1;
  size_t _Size;
  
  _Size = (size_t)param_4;
  if (param_1 == 0) {
    uVar1 = 2;
  }
  else if (param_2 == (int *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x40))(param_1,3,"Invalid string argument to string set");
  }
  else if (param_4 < 0) {
    uVar1 = (**(code **)(param_1 + 0x48))
                      (param_1,3,"Received request to assign a negative sized string (%d)",param_4);
  }
  else if (param_4 < param_2[1]) {
    _Dest = *(char **)(param_2 + 2);
    *param_2 = param_4;
    if (0 < param_4) {
      if (param_3 != (char *)0x0) {
        strncpy(_Dest,param_3,_Size);
        _Dest[_Size] = '\0';
        return 0;
      }
      memset(_Dest,0,_Size);
    }
    _Dest[_Size] = '\0';
    uVar1 = 0;
  }
  else {
    if ((*(longlong *)(param_2 + 2) != 0) && (0 < param_2[1])) {
      (**(code **)(param_1 + 0x60))();
    }
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    uVar1 = FUN_144e83ce0(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}



// FUNCTION 144e83fe0 FUN_144e83fe0 body=66 status=ok
// SIG undefined FUN_144e83fe0(void)

undefined4 FUN_144e83fe0(longlong param_1,undefined8 *param_2)

{
  if (param_1 == 0) {
    return 2;
  }
  if (param_2 != (undefined8 *)0x0) {
    if ((param_2[1] != 0) && (0 < *(int *)((longlong)param_2 + 4))) {
      (**(code **)(param_1 + 0x60))();
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return 0;
}



// FUNCTION 144e84030 FUN_144e84030 body=179 status=ok
// SIG undefined FUN_144e84030(void)

ulonglong FUN_144e84030(longlong param_1,int *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  if (param_1 != 0) {
    uVar3 = uVar2;
    if (param_2 != (int *)0x0) {
      if (*(longlong *)(param_2 + 2) != 0) {
        uVar4 = uVar2;
        if (0 < *param_2) {
          do {
            uVar1 = FUN_144e85030(param_1,*(undefined8 *)(uVar4 + *(longlong *)(param_2 + 2)));
            if (uVar1 != 0) {
              uVar3 = (ulonglong)uVar1;
            }
            uVar1 = (int)uVar2 + 1;
            uVar2 = (ulonglong)uVar1;
            uVar4 = uVar4 + 8;
          } while ((int)uVar1 < *param_2);
        }
        (**(code **)(param_1 + 0x60))(*(undefined8 *)(param_2 + 2));
      }
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
    }
    return uVar3;
  }
  return 2;
}



// FUNCTION 144e840f0 FUN_144e840f0 body=338 status=ok
// SIG undefined FUN_144e840f0(void)

undefined8 FUN_144e840f0(longlong param_1,int *param_2,char *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  char *pcVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  
  if (param_1 == 0) {
    return 2;
  }
  if (param_4 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144e8411e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(param_1 + 0x40))(param_1,3,"Invalid output pointer passed to find_by_name")
    ;
    return uVar6;
  }
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000144e8423e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(param_1 + 0x40))(param_1,3,"Invalid name passed to find_by_name");
    return uVar6;
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144e8414b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(param_1 + 0x40))(param_1,3,"Invalid list pointer passed to find_by_name");
    return uVar6;
  }
  puVar12 = *(undefined8 **)(param_2 + 4);
  if (puVar12 != (undefined8 *)0x0) {
    uVar10 = (ulonglong)*param_2;
    puVar1 = puVar12 + uVar10;
    if (0 < *param_2) {
      do {
        iVar9 = (int)uVar10;
        uVar10 = uVar10 >> 1 & 0x7fffffff;
        pbVar7 = *(byte **)puVar12[uVar10];
        lVar11 = (longlong)param_3 - (longlong)pbVar7;
        do {
          bVar2 = *pbVar7;
          if (bVar2 != pbVar7[lVar11]) {
            uVar5 = -(uint)(bVar2 < pbVar7[lVar11]) | 1;
            goto LAB_144e841b9;
          }
          pbVar7 = pbVar7 + 1;
        } while (bVar2 != 0);
        uVar5 = 0;
LAB_144e841b9:
        if (uVar5 == 0) {
          *param_4 = (undefined8 *)puVar12[uVar10];
          return 0;
        }
        if ((int)uVar5 < 0) {
          puVar12 = puVar12 + uVar10 + 1;
          uVar10 = (ulonglong)(uint)(iVar9 + (-1 - (int)uVar10));
        }
      } while (0 < (int)uVar10);
      if (puVar12 == (undefined8 *)0x0) {
        return 0xf;
      }
    }
    if (puVar12 < puVar1) {
      pcVar8 = *(char **)*puVar12;
      lVar11 = (longlong)param_3 - (longlong)pcVar8;
      do {
        cVar3 = *pcVar8;
        cVar4 = pcVar8[lVar11];
        if (cVar3 != cVar4) break;
        pcVar8 = pcVar8 + 1;
      } while (cVar4 != '\0');
      if (cVar3 == cVar4) {
        *param_4 = (undefined8 *)*puVar12;
        return 0;
      }
    }
  }
  return 0xf;
}



// FUNCTION 144e84250 FUN_144e84250 body=726 status=ok
// SIG undefined FUN_144e84250(void)

ulonglong FUN_144e84250(longlong param_1,undefined8 param_2,char *param_3,char *param_4,
                       undefined4 param_5,undefined8 *param_6,longlong *param_7)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined **ppuVar12;
  longlong local_res8;
  undefined8 local_res10;
  
  iVar11 = 0;
  local_res8 = 0;
  if (param_1 == 0) {
    return 2;
  }
  local_res10 = param_2;
  if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000144e84522. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(param_1 + 0x40))(param_1,3,"Invalid type to add_by_type");
    return uVar6;
  }
  uVar6 = FUN_144e85340();
  if ((int)uVar6 == 0) {
    uVar6 = 0xffffffffffffffff;
    uVar10 = 0xffffffffffffffff;
    do {
      uVar10 = uVar10 + 1;
    } while (param_3[uVar10] != '\0');
    bVar3 = *(byte *)(param_1 + 2);
    uVar9 = (undefined4)uVar10;
    if (bVar3 < uVar10) {
      pcVar7 = "Provided name \'%s\' too long for file (len %d, max %d)";
      param_4 = param_3;
      uVar8 = uVar9;
    }
    else {
      do {
        uVar6 = uVar6 + 1;
      } while (param_4[uVar6] != '\0');
      uVar8 = (undefined4)uVar6;
      if (uVar6 <= bVar3) {
        if (0 < DAT_14c70a650) {
          ppuVar12 = &PTR_DAT_14c70a3b0;
          do {
            pcVar7 = param_4;
            do {
              cVar1 = *pcVar7;
              cVar2 = pcVar7[(longlong)*ppuVar12 - (longlong)param_4];
              if (cVar1 != cVar2) break;
              pcVar7 = pcVar7 + 1;
            } while (cVar2 != '\0');
            if (cVar1 == cVar2) {
              lVar4 = (longlong)iVar11 * 0x18;
              if (&PTR_DAT_14c70a3b0 + (longlong)iVar11 * 3 != (undefined **)0x0) {
                uVar5 = FUN_144e856b0(param_1,&local_res8,*(undefined8 *)(&DAT_14c70a3c0 + lVar4),
                                      param_5,param_6,param_3,uVar9,0,0);
                uVar6 = (ulonglong)uVar5;
                if (uVar5 != 0) goto LAB_144e844fa;
                *(undefined **)(local_res8 + 8) = (&PTR_DAT_14c70a3b0)[(longlong)iVar11 * 3];
                *(undefined *)(local_res8 + 0x11) = (&DAT_14c70a3b8)[lVar4];
                *(undefined4 *)(local_res8 + 0x14) = *(undefined4 *)(&DAT_14c70a3bc + lVar4);
                goto LAB_144e84446;
              }
              break;
            }
            iVar11 = iVar11 + 1;
            ppuVar12 = ppuVar12 + 3;
          } while (iVar11 < DAT_14c70a650);
        }
        uVar5 = FUN_144e856b0(param_1,&local_res8,0x38,param_5,param_6,param_3,uVar9,param_4,uVar8);
        uVar6 = (ulonglong)uVar5;
        if (uVar5 == 0) {
          *(undefined4 *)(local_res8 + 0x14) = 0x1d;
LAB_144e84446:
          lVar4 = local_res8;
          uVar5 = FUN_144e85120(param_1,local_res10,local_res8,param_3);
          uVar6 = (ulonglong)uVar5;
          if (uVar5 == 0) {
            *param_7 = lVar4;
            FUN_144e85540(param_1,lVar4);
            return 0;
          }
        }
LAB_144e844fa:
        if (param_6 == (undefined8 *)0x0) {
          return uVar6;
        }
        *param_6 = 0;
        return uVar6;
      }
      pcVar7 = "Provided type name \'%s\' too long for file (len %d, max %d)";
    }
    uVar6 = (**(code **)(param_1 + 0x48))(param_1,0xc,pcVar7,param_4,uVar8,bVar3);
  }
  else if ((int)uVar6 < 0) {
    lVar4 = *param_7;
    pcVar7 = param_4;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[*(longlong *)(lVar4 + 8) - (longlong)param_4];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      uVar6 = 0;
    }
    else {
      *param_7 = 0;
      uVar6 = (**(code **)(param_1 + 0x48))
                        (param_1,3,
                         "Entry \'%s\' already in list but with different type (\'%s\' vs requested \'%s\')"
                         ,param_3,*(undefined8 *)(lVar4 + 8),param_4);
    }
  }
  return uVar6;
}



// FUNCTION 144e84530 FUN_144e84530 body=906 status=ok
// SIG undefined FUN_144e84530(void)

ulonglong FUN_144e84530(longlong param_1,int *param_2,char *param_3,int param_4,int param_5,
                       undefined8 *param_6,longlong *param_7)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  char *pcVar13;
  undefined8 *puVar14;
  longlong local_res8;
  int *local_res10;
  
  local_res8 = 0;
  if (param_1 == 0) {
    return 2;
  }
  uVar11 = 0xffffffffffffffff;
  local_res10 = param_2;
  if (param_2 == (int *)0x0) {
    pcVar13 = "Invalid list pointer to attr_list_add";
LAB_144e84712:
    uVar8 = (**(code **)(param_1 + 0x40))(param_1,3,pcVar13);
  }
  else {
    if (param_7 == (longlong *)0x0) {
      pcVar13 = "Invalid output attribute pointer location to attr_list_add";
      goto LAB_144e84712;
    }
    *param_7 = 0;
    if (param_5 < 0) {
      uVar8 = (**(code **)(param_1 + 0x48))
                        (param_1,3,"Extra data storage requested negative length (%d)",param_5);
    }
    else {
      if (param_5 < 1) {
        if (param_6 != (undefined8 *)0x0) goto LAB_144e84609;
      }
      else {
        if (param_6 == (undefined8 *)0x0) {
          uVar8 = (**(code **)(param_1 + 0x48))
                            (param_1,3,
                             "Extra data storage output pointer must be provided when requesting extra data (%d)"
                             ,param_5);
          goto LAB_144e8471a;
        }
LAB_144e84609:
        *param_6 = 0;
      }
      if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
        pcVar13 = "Invalid name to add_by_type";
        goto LAB_144e84712;
      }
      puVar14 = *(undefined8 **)(param_2 + 4);
      if (puVar14 == (undefined8 *)0x0) goto LAB_144e84766;
      uVar8 = (ulonglong)*param_2;
      puVar1 = puVar14 + uVar8;
      if (0 < *param_2) {
        do {
          iVar12 = (int)uVar8;
          uVar8 = uVar8 >> 1 & 0x7fffffff;
          puVar10 = (undefined8 *)puVar14[uVar8];
          pbVar7 = (byte *)*puVar10;
          lVar9 = (longlong)param_3 - (longlong)pbVar7;
          do {
            bVar2 = *pbVar7;
            if (bVar2 != pbVar7[lVar9]) {
              uVar6 = -(uint)(bVar2 < pbVar7[lVar9]) | 1;
              goto LAB_144e84678;
            }
            pbVar7 = pbVar7 + 1;
          } while (bVar2 != 0);
          uVar6 = 0;
LAB_144e84678:
          if (uVar6 == 0) goto LAB_144e846db;
          if ((int)uVar6 < 0) {
            puVar14 = puVar14 + uVar8 + 1;
            uVar8 = (ulonglong)(uint)(iVar12 + (-1 - (int)uVar8));
          }
        } while (0 < (int)uVar8);
        if (puVar14 == (undefined8 *)0x0) goto LAB_144e84766;
      }
      if (puVar1 <= puVar14) goto LAB_144e84766;
      puVar10 = (undefined8 *)*puVar14;
      pcVar13 = (char *)*puVar10;
      lVar9 = (longlong)param_3 - (longlong)pcVar13;
      do {
        cVar3 = *pcVar13;
        cVar4 = pcVar13[lVar9];
        if (cVar3 != cVar4) break;
        pcVar13 = pcVar13 + 1;
      } while (cVar4 != '\0');
      if (cVar3 != cVar4) goto LAB_144e84766;
LAB_144e846db:
      if ((param_6 == (undefined8 *)0x0) || (param_5 < 1)) {
        *param_7 = (longlong)puVar10;
        goto LAB_144e84724;
      }
      uVar8 = (**(code **)(param_1 + 0x48))
                        (param_1,3,
                         "Attribute \'%s\' (type %s) already in list but requesting additional data"
                         ,param_3,puVar10[1]);
    }
  }
LAB_144e8471a:
  if ((int)uVar8 != 0) {
    if (-1 < (int)uVar8) {
      return uVar8;
    }
LAB_144e84724:
    lVar9 = *param_7;
    if (*(int *)(lVar9 + 0x14) == param_4) {
      uVar11 = 0;
    }
    else {
      *param_7 = 0;
      uVar11 = (**(code **)(param_1 + 0x48))
                         (param_1,3,"Entry \'%s\' already in list but with different type (\'%s\')",
                          param_3,*(undefined8 *)(lVar9 + 8));
    }
    return uVar11;
  }
LAB_144e84766:
  do {
    uVar11 = uVar11 + 1;
  } while (param_3[uVar11] != '\0');
  if (*(byte *)(param_1 + 2) < uVar11) {
    uVar11 = (**(code **)(param_1 + 0x48))
                       (param_1,0xc,"Provided name \'%s\' too long for file (len %d, max %d)",
                        param_3,uVar11 & 0xffffffff,*(byte *)(param_1 + 2));
    return uVar11;
  }
  lVar9 = (longlong)param_4;
  if ((param_4 + -1 < 0) || (DAT_14c70a650 <= param_4 + -1)) {
    if (param_4 == 0x1d) {
      uVar11 = (**(code **)(param_1 + 0x48))
                         (param_1,3,
                          "Invalid type enum for \'%s\': the opaque type is not actually a built-in type"
                         );
      return uVar11;
    }
    uVar11 = (**(code **)(param_1 + 0x48))
                       (param_1,3,"Invalid type enum for \'%s\' in create by builtin type (type %d)"
                        ,param_3,param_4);
    return uVar11;
  }
  uVar6 = FUN_144e856b0(param_1,&local_res8,*(undefined8 *)(&DAT_14c70a3a8 + lVar9 * 0x18),param_5,
                        param_6,param_3,(int)uVar11,0,0);
  lVar5 = local_res8;
  if (uVar6 == 0) {
    *(undefined8 *)(local_res8 + 8) = (&DAT_14c70a398)[lVar9 * 3];
    *(undefined *)(local_res8 + 0x11) = (&DAT_14c70a3a0)[lVar9 * 0x18];
    *(undefined4 *)(local_res8 + 0x14) = *(undefined4 *)(&DAT_14c70a3a4 + lVar9 * 0x18);
    uVar6 = FUN_144e85120(param_1,local_res10,local_res8,param_3);
    if (uVar6 == 0) {
      *param_7 = lVar5;
      FUN_144e85540(param_1,lVar5);
      return 0;
    }
  }
  if (param_6 == (undefined8 *)0x0) {
    return (ulonglong)uVar6;
  }
  *param_6 = 0;
  return (ulonglong)uVar6;
}



// FUNCTION 144e848c0 FUN_144e848c0 body=1025 status=ok
// SIG undefined FUN_144e848c0(void)

ulonglong FUN_144e848c0(longlong param_1,int *param_2,char *param_3,int param_4,int param_5,
                       longlong *param_6,longlong *param_7)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  char *pcVar16;
  undefined8 *local_res8;
  
  local_res8 = (undefined8 *)0x0;
  if (param_1 == 0) {
    return 2;
  }
  uVar12 = 0xffffffffffffffff;
  if (param_2 == (int *)0x0) {
    uVar6 = (**(code **)(param_1 + 0x40))(param_1,3,"Invalid list pointer to attr_list_add");
LAB_144e84ab9:
    if ((int)uVar6 != 0) {
      if (-1 < (int)uVar6) {
        return uVar6;
      }
LAB_144e84ac3:
      lVar10 = *param_7;
      if (*(int *)(lVar10 + 0x14) == param_4) {
        uVar12 = 0;
      }
      else {
        *param_7 = 0;
        uVar12 = (**(code **)(param_1 + 0x48))
                           (param_1,3,
                            "Entry \'%s\' already in list but with different type (\'%s\')",param_3,
                            *(undefined8 *)(lVar10 + 8));
      }
      return uVar12;
    }
  }
  else {
    if (param_7 == (longlong *)0x0) {
      pcVar16 = "Invalid output attribute pointer location to attr_list_add";
LAB_144e84ab1:
      uVar6 = (**(code **)(param_1 + 0x40))(param_1,3,pcVar16);
      goto LAB_144e84ab9;
    }
    *param_7 = 0;
    if (param_5 < 0) {
      uVar6 = (**(code **)(param_1 + 0x48))
                        (param_1,3,"Extra data storage requested negative length (%d)",param_5);
      goto LAB_144e84ab9;
    }
    if (param_5 < 1) {
      if (param_6 != (longlong *)0x0) goto LAB_144e849a3;
    }
    else {
      if (param_6 == (longlong *)0x0) {
        uVar6 = (**(code **)(param_1 + 0x48))
                          (param_1,3,
                           "Extra data storage output pointer must be provided when requesting extra data (%d)"
                           ,param_5);
        goto LAB_144e84ab9;
      }
LAB_144e849a3:
      *param_6 = 0;
    }
    if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
      pcVar16 = "Invalid name to add_by_type";
      goto LAB_144e84ab1;
    }
    puVar8 = *(undefined8 **)(param_2 + 4);
    if (puVar8 != (undefined8 *)0x0) {
      uVar6 = (ulonglong)*param_2;
      puVar9 = puVar8 + uVar6;
      if (0 < *param_2) {
        do {
          iVar15 = (int)uVar6;
          uVar6 = uVar6 >> 1 & 0x7fffffff;
          puVar13 = (undefined8 *)puVar8[uVar6];
          pbVar7 = (byte *)*puVar13;
          lVar10 = (longlong)param_3 - (longlong)pbVar7;
          do {
            bVar1 = *pbVar7;
            if (bVar1 != pbVar7[lVar10]) {
              uVar5 = -(uint)(bVar1 < pbVar7[lVar10]) | 1;
              goto LAB_144e84a18;
            }
            pbVar7 = pbVar7 + 1;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_144e84a18:
          if (uVar5 == 0) goto LAB_144e84a7b;
          if ((int)uVar5 < 0) {
            puVar8 = puVar8 + uVar6 + 1;
            uVar6 = (ulonglong)(uint)(iVar15 + (-1 - (int)uVar6));
          }
        } while (0 < (int)uVar6);
        if (puVar8 == (undefined8 *)0x0) goto LAB_144e84b03;
      }
      if (puVar8 < puVar9) {
        puVar13 = (undefined8 *)*puVar8;
        pcVar16 = (char *)*puVar13;
        lVar10 = (longlong)param_3 - (longlong)pcVar16;
        do {
          cVar2 = *pcVar16;
          cVar3 = pcVar16[lVar10];
          if (cVar2 != cVar3) break;
          pcVar16 = pcVar16 + 1;
        } while (cVar3 != '\0');
        if (cVar2 == cVar3) {
LAB_144e84a7b:
          if ((param_6 == (longlong *)0x0) || (param_5 < 1)) {
            *param_7 = (longlong)puVar13;
            goto LAB_144e84ac3;
          }
          uVar6 = (**(code **)(param_1 + 0x48))
                            (param_1,3,
                             "Attribute \'%s\' (type %s) already in list but requesting additional data"
                             ,param_3,puVar13[1]);
          goto LAB_144e84ab9;
        }
      }
    }
  }
LAB_144e84b03:
  do {
    uVar12 = uVar12 + 1;
  } while (param_3[uVar12] != '\0');
  if (*(byte *)(param_1 + 2) < uVar12) {
    uVar12 = (**(code **)(param_1 + 0x48))
                       (param_1,0xc,"Provided name \'%s\' too long for file (len %d, max %d)",
                        param_3,uVar12 & 0xffffffff,*(byte *)(param_1 + 2));
    return uVar12;
  }
  lVar10 = (longlong)param_4;
  if ((param_4 + -1 < 0) || (DAT_14c70a650 <= param_4 + -1)) {
    if (param_4 == 0x1d) {
      uVar12 = (**(code **)(param_1 + 0x48))
                         (param_1,3,
                          "Invalid type enum for \'%s\': the opaque type is not actually a built-in type"
                         );
      return uVar12;
    }
    uVar12 = (**(code **)(param_1 + 0x48))
                       (param_1,3,"Invalid type enum for \'%s\' in create by builtin type (type %d)"
                        ,param_3,param_4);
    return uVar12;
  }
  lVar4 = *(longlong *)(&DAT_14c70a3a8 + lVar10 * 0x18);
  lVar11 = lVar4 + 0x20;
  if (lVar4 == 0) {
    lVar11 = 0x20;
  }
  lVar14 = 0;
  if (0 < param_5) {
    uVar6 = (ulonglong)((uint)lVar11 & 7);
    if (uVar6 != 0) {
      lVar14 = 8 - uVar6;
    }
    lVar11 = lVar14 + param_5 + lVar11;
  }
  puVar8 = (undefined8 *)(**(code **)(param_1 + 0x58))(lVar11);
  if (puVar8 == (undefined8 *)0x0) {
    uVar5 = (**(code **)(param_1 + 0x38))(param_1,1);
    if (uVar5 != 0) goto LAB_144e84bbe;
  }
  else {
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar9 = puVar8 + 4;
    if (lVar4 != 0) {
      puVar8[3] = puVar9;
      puVar9 = (undefined8 *)((longlong)puVar9 + lVar4);
    }
    local_res8 = puVar8;
    if (param_6 != (longlong *)0x0) {
      if (param_5 < 1) {
        *param_6 = 0;
      }
      else {
        *param_6 = (longlong)puVar9 + lVar14;
      }
    }
  }
  *local_res8 = param_3;
  local_res8[1] = (&DAT_14c70a398)[lVar10 * 3];
  *(char *)(local_res8 + 2) = (char)uVar12;
  *(undefined *)((longlong)local_res8 + 0x11) = (&DAT_14c70a3a0)[lVar10 * 0x18];
  *(undefined4 *)((longlong)local_res8 + 0x14) = *(undefined4 *)(&DAT_14c70a3a4 + lVar10 * 0x18);
  uVar5 = FUN_144e85120(param_1,param_2,local_res8,param_3);
  if (uVar5 == 0) {
    *param_7 = (longlong)local_res8;
    FUN_144e85540(param_1,local_res8);
    return 0;
  }
LAB_144e84bbe:
  if (param_6 == (longlong *)0x0) {
    return (ulonglong)uVar5;
  }
  *param_6 = 0;
  return (ulonglong)uVar5;
}



// FUNCTION 144e84cd0 FUN_144e84cd0 body=257 status=ok
// SIG undefined FUN_144e84cd0(void)

undefined8 FUN_144e84cd0(longlong param_1,int *param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  if (param_1 == 0) {
    return 2;
  }
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144e84cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_1 + 0x40))(param_1,3,"NULL attribute passed to remove");
    return uVar3;
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144e84d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_1 + 0x40))(param_1,3,"Invalid list pointer to remove attribute");
    return uVar3;
  }
  uVar4 = 0;
  iVar1 = *param_2;
  uVar5 = uVar4;
  uVar7 = uVar4;
  if (0 < iVar1) {
    do {
      iVar9 = (int)uVar7;
      if (*(longlong *)(*(longlong *)(param_2 + 2) + uVar5 * 8) == param_3) {
        if (iVar9 != -1) {
          lVar8 = (longlong)iVar9;
          iVar9 = iVar1 + -1;
          puVar10 = (undefined8 *)(*(longlong *)(param_2 + 2) + lVar8 * 8);
          *puVar10 = 0;
          if (lVar8 < iVar9) {
            puVar11 = puVar10;
            for (lVar8 = iVar9 - lVar8; puVar10 = puVar10 + 1, lVar8 != 0; lVar8 = lVar8 + -1) {
              *puVar11 = *puVar10;
              puVar11 = puVar11 + 1;
            }
          }
          plVar2 = *(longlong **)(param_2 + 4);
          *param_2 = iVar9;
          plVar6 = plVar2;
          do {
            lVar8 = plVar2[uVar4];
            if (lVar8 != param_3) {
              *plVar6 = lVar8;
              plVar6 = plVar6 + 1;
            }
            uVar4 = uVar4 + 1;
          } while ((longlong)uVar4 < (longlong)iVar1);
          uVar3 = FUN_144e85030(param_1,param_3);
          return uVar3;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      uVar7 = (ulonglong)(iVar9 + 1);
    } while ((longlong)uVar5 < (longlong)iVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000144e84d63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(param_1 + 0x40))(param_1,3,"Attribute not in list");
  return uVar3;
}



// FUNCTION 144e84de0 FUN_144e84de0 body=455 status=ok
// SIG undefined FUN_144e84de0(void)

undefined8 FUN_144e84de0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  switch(*(undefined4 *)(param_2 + 0x14)) {
  case 1:
  case 2:
  case 3:
  case 9:
  case 0x13:
  case 0x14:
  case 0x19:
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    return 0;
  case 4:
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    return 0;
  case 5:
  case 7:
  case 0xc:
    *(undefined1 *)(param_2 + 0x18) = 0;
    return 0;
  case 6:
    *(undefined8 *)(param_2 + 0x18) = 0;
    return 0;
  case 8:
  case 10:
    *(undefined4 *)(param_2 + 0x18) = 0;
    return 0;
  case 0xb:
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    return 0;
  case 0xd:
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    return 0;
  case 0xe:
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    return 0;
  case 0xf:
  case 0x10:
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    return 0;
  case 0x11:
  case 0x1c:
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    return 0;
  case 0x12:
  case 0x16:
  case 0x17:
  case 0x18:
    **(undefined8 **)(param_2 + 0x18) = 0;
    return 0;
  case 0x15:
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    return 0;
  case 0x1a:
  case 0x1b:
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    return 0;
  case 0x1d:
    puVar1 = *(undefined8 **)(param_2 + 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    return 0;
  }
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x48))
              (param_1,3,"Invalid / unimplemented type (%s) in attr_init",
               *(undefined8 *)(param_2 + 8));
  }
  return 3;
}



// FUNCTION 144e85030 FUN_144e85030 body=173 status=ok
// SIG undefined FUN_144e85030(void)

undefined4 FUN_144e85030(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(*(undefined4 *)(param_2 + 0x14)) {
  case 3:
    uVar1 = FUN_144e8aaf0(param_1,*(undefined8 *)(param_2 + 0x18));
    break;
  case 9:
    uVar1 = FUN_144e8aca0(param_1,*(undefined8 *)(param_2 + 0x18));
    break;
  case 0x11:
    uVar1 = FUN_144e8af50(param_1,*(undefined8 *)(param_2 + 0x18));
    break;
  case 0x13:
    uVar1 = FUN_144e83fe0(param_1,*(undefined8 *)(param_2 + 0x18));
    break;
  case 0x14:
    uVar1 = FUN_144e8afb0(param_1,*(undefined8 *)(param_2 + 0x18));
    break;
  case 0x1d:
    uVar1 = FUN_144e8ade0(param_1,*(undefined8 *)(param_2 + 0x18));
  }
  (**(code **)(param_1 + 0x60))(param_2);
  return uVar1;
}



// FUNCTION 144e85120 FUN_144e85120 body=539 status=ok
// SIG undefined FUN_144e85120(void)

ulonglong FUN_144e85120(longlong param_1,int *param_2,undefined8 *param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  char *pcVar15;
  int iVar16;
  longlong lVar17;
  
  iVar3 = *param_2;
  lVar12 = (longlong)iVar3;
  uVar8 = 0;
  lVar7 = *(longlong *)(param_2 + 2);
  lVar17 = *(longlong *)(param_2 + 4);
  iVar16 = iVar3 + 1;
  if (param_2[1] < iVar16) {
    uVar14 = (longlong)param_2[1] * 2;
    uVar11 = (longlong)iVar16 + 1;
    if ((ulonglong)(longlong)iVar16 <= uVar14) {
      uVar11 = uVar14;
    }
    lVar7 = (**(code **)(param_1 + 0x58))(uVar11 << 4);
    if (lVar7 == 0) {
      (**(code **)(param_1 + 0x60))(param_3);
      uVar8 = (**(code **)(param_1 + 0x38))(param_1,1);
      return uVar8;
    }
    param_2[1] = (int)uVar11;
    lVar17 = uVar11 * 8 + lVar7;
    if (0 < lVar12) {
      uVar14 = uVar8;
      do {
        puVar13 = (undefined8 *)(lVar17 + uVar14 * 8);
        *(undefined8 *)((lVar7 - lVar17) + (longlong)puVar13) =
             *(undefined8 *)(*(longlong *)(param_2 + 2) + uVar14 * 8);
        lVar1 = uVar14 * 8;
        uVar14 = uVar14 + 1;
        *puVar13 = *(undefined8 *)(*(longlong *)(param_2 + 4) + lVar1);
      } while ((longlong)uVar14 < lVar12);
    }
    if (*(longlong *)(param_2 + 2) != 0) {
      (**(code **)(param_1 + 0x60))();
    }
    *(longlong *)(param_2 + 2) = lVar7;
    *(longlong *)(param_2 + 4) = lVar17;
  }
  *(undefined8 **)(lVar7 + lVar12 * 8) = param_3;
  *(undefined8 **)(lVar17 + lVar12 * 8) = param_3;
  lVar7 = (longlong)(iVar3 + -1);
  if (-1 < iVar3 + -1) {
    do {
      plVar4 = *(longlong **)(lVar17 + lVar7 * 8);
      pbVar9 = (byte *)*param_3;
      lVar12 = *plVar4 - (longlong)pbVar9;
      do {
        bVar2 = *pbVar9;
        uVar6 = (uint)pbVar9[lVar12];
        if (bVar2 != uVar6) break;
        pbVar9 = pbVar9 + 1;
      } while (uVar6 != 0);
      if (-1 < (int)(bVar2 - uVar6)) break;
      *(longlong **)(lVar17 + 8 + lVar7 * 8) = plVar4;
      *(undefined8 **)(lVar17 + lVar7 * 8) = param_3;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  *param_2 = iVar16;
  uVar6 = FUN_144e84de0(param_1,param_3);
  if ((uVar6 != 0) && (param_1 != 0)) {
    if (param_3 == (undefined8 *)0x0) {
      pcVar15 = "NULL attribute passed to remove";
    }
    else {
      iVar3 = *param_2;
      uVar14 = uVar8;
      uVar11 = uVar8;
      if (0 < iVar3) {
        do {
          iVar16 = (int)uVar11;
          if (*(undefined8 **)(*(longlong *)(param_2 + 2) + uVar14 * 8) == param_3) {
            if (iVar16 != -1) {
              lVar7 = (longlong)iVar16;
              iVar16 = iVar3 + -1;
              puVar13 = (undefined8 *)(*(longlong *)(param_2 + 2) + lVar7 * 8);
              *puVar13 = 0;
              if (lVar7 < iVar16) {
                puVar10 = puVar13;
                for (lVar7 = iVar16 - lVar7; puVar13 = puVar13 + 1, lVar7 != 0; lVar7 = lVar7 + -1)
                {
                  *puVar10 = *puVar13;
                  puVar10 = puVar10 + 1;
                }
              }
              puVar13 = *(undefined8 **)(param_2 + 4);
              *param_2 = iVar16;
              puVar10 = puVar13;
              do {
                puVar5 = (undefined8 *)puVar13[uVar8];
                if (puVar5 != param_3) {
                  *puVar10 = puVar5;
                  puVar10 = puVar10 + 1;
                }
                uVar8 = uVar8 + 1;
              } while ((longlong)uVar8 < (longlong)iVar3);
              FUN_144e85030(param_1,param_3);
              return (ulonglong)uVar6;
            }
            break;
          }
          uVar14 = uVar14 + 1;
          uVar11 = (ulonglong)(iVar16 + 1);
        } while ((longlong)uVar14 < (longlong)iVar3);
      }
      pcVar15 = "Attribute not in list";
    }
    (**(code **)(param_1 + 0x40))(param_1,3,pcVar15);
  }
  return (ulonglong)uVar6;
}



// FUNCTION 144e85340 FUN_144e85340 body=512 status=ok
// SIG undefined FUN_144e85340(void)

undefined8
FUN_144e85340(longlong param_1,int *param_2,char *param_3,int param_4,undefined8 *param_5,
             undefined8 *param_6)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  char *pcVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144e85369. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(param_1 + 0x40))(param_1,3,"Invalid list pointer to attr_list_add");
    return uVar6;
  }
  if (param_6 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144e85393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(param_1 + 0x40))
                      (param_1,3,"Invalid output attribute pointer location to attr_list_add");
    return uVar6;
  }
  *param_6 = 0;
  if (param_4 < 0) {
                    /* WARNING: Could not recover jumptable at 0x000144e853bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(param_1 + 0x48))
                      (param_1,3,"Extra data storage requested negative length (%d)");
    return uVar6;
  }
  if (param_4 < 1) {
    if (param_5 == (undefined8 *)0x0) goto LAB_144e853fe;
  }
  else if (param_5 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144e853ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(param_1 + 0x48))
                      (param_1,3,
                       "Extra data storage output pointer must be provided when requesting extra data (%d)"
                      );
    return uVar6;
  }
  *param_5 = 0;
LAB_144e853fe:
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000144e8553c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(param_1 + 0x40))(param_1,3,"Invalid name to add_by_type");
    return uVar6;
  }
  if ((param_1 != 0) && (puVar13 = *(undefined8 **)(param_2 + 4), puVar13 != (undefined8 *)0x0)) {
    uVar10 = (ulonglong)*param_2;
    puVar1 = puVar13 + uVar10;
    if (0 < *param_2) {
      do {
        iVar9 = (int)uVar10;
        uVar10 = uVar10 >> 1 & 0x7fffffff;
        puVar11 = (undefined8 *)puVar13[uVar10];
        pbVar7 = (byte *)*puVar11;
        lVar12 = (longlong)param_3 - (longlong)pbVar7;
        do {
          bVar2 = *pbVar7;
          if (bVar2 != pbVar7[lVar12]) {
            uVar5 = -(uint)(bVar2 < pbVar7[lVar12]) | 1;
            goto LAB_144e85479;
          }
          pbVar7 = pbVar7 + 1;
        } while (bVar2 != 0);
        uVar5 = 0;
LAB_144e85479:
        if (uVar5 == 0) goto LAB_144e854c7;
        if ((int)uVar5 < 0) {
          puVar13 = puVar13 + uVar10 + 1;
          uVar10 = (ulonglong)(uint)(iVar9 + (-1 - (int)uVar10));
        }
      } while (0 < (int)uVar10);
      if (puVar13 == (undefined8 *)0x0) {
        return 0;
      }
    }
    if (puVar13 < puVar1) {
      puVar11 = (undefined8 *)*puVar13;
      pcVar8 = (char *)*puVar11;
      lVar12 = (longlong)param_3 - (longlong)pcVar8;
      do {
        cVar3 = *pcVar8;
        cVar4 = pcVar8[lVar12];
        if (cVar3 != cVar4) break;
        pcVar8 = pcVar8 + 1;
      } while (cVar4 != '\0');
      if (cVar3 == cVar4) {
LAB_144e854c7:
        if ((param_5 != (undefined8 *)0x0) && (0 < param_4)) {
          uVar6 = (**(code **)(param_1 + 0x48))
                            (param_1,3,
                             "Attribute \'%s\' (type %s) already in list but requesting additional data"
                             ,param_3,puVar11[1]);
          return uVar6;
        }
        *param_6 = puVar11;
        return 0xffffffff;
      }
    }
  }
  return 0;
}



// FUNCTION 144e85540 FUN_144e85540 body=358 status=ok
// SIG undefined FUN_144e85540(void)

void FUN_144e85540(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  byte *pbVar7;
  char *pcVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  
  if (*(int *)(param_2 + 0x14) == 0x1d) {
    pcVar5 = *(char **)(param_2 + 8);
    if (param_1 != 0) {
      if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000144e856a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x40))(param_1,3,"Invalid name passed to find_by_name");
        return;
      }
      if ((int *)(param_1 + 0x1e0) == (int *)0x0) {
                    /* WARNING: Could not emulate address calculation at 0x000144e85590 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x40))(param_1,3,"Invalid list pointer passed to find_by_name");
        return;
      }
      puVar13 = *(undefined8 **)(param_1 + 0x1f0);
      if (puVar13 != (undefined8 *)0x0) {
        iVar9 = *(int *)(param_1 + 0x1e0);
        uVar10 = (ulonglong)iVar9;
        puVar1 = puVar13 + uVar10;
        if (0 < iVar9) {
          do {
            iVar9 = (int)uVar10;
            uVar10 = uVar10 >> 1 & 0x7fffffff;
            puVar11 = (undefined8 *)puVar13[uVar10];
            pbVar7 = (byte *)*puVar11;
            lVar12 = (longlong)pcVar5 - (longlong)pbVar7;
            do {
              bVar2 = *pbVar7;
              if (bVar2 != pbVar7[lVar12]) {
                uVar6 = -(uint)(bVar2 < pbVar7[lVar12]) | 1;
                goto LAB_144e855f9;
              }
              pbVar7 = pbVar7 + 1;
            } while (bVar2 != 0);
            uVar6 = 0;
LAB_144e855f9:
            if (uVar6 == 0) goto LAB_144e85647;
            if ((int)uVar6 < 0) {
              puVar13 = puVar13 + uVar10 + 1;
              uVar10 = (ulonglong)(uint)(iVar9 + (-1 - (int)uVar10));
            }
          } while (0 < (int)uVar10);
          if (puVar13 == (undefined8 *)0x0) {
            return;
          }
        }
        if (puVar13 < puVar1) {
          puVar11 = (undefined8 *)*puVar13;
          pcVar8 = (char *)*puVar11;
          lVar12 = (longlong)pcVar5 - (longlong)pcVar8;
          do {
            cVar3 = *pcVar8;
            cVar4 = pcVar8[lVar12];
            if (cVar3 != cVar4) break;
            pcVar8 = pcVar8 + 1;
          } while (cVar4 != '\0');
          if (cVar3 == cVar4) {
LAB_144e85647:
            if (puVar11 != (undefined8 *)0x0) {
              *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x20) =
                   *(undefined8 *)(puVar11[3] + 0x20);
              *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x28) =
                   *(undefined8 *)(puVar11[3] + 0x28);
              *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x30) =
                   *(undefined8 *)(puVar11[3] + 0x30);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 144e856b0 FUN_144e856b0 body=377 status=ok
// SIG undefined FUN_144e856b0(void)

undefined8
FUN_144e856b0(longlong param_1,undefined8 *param_2,longlong param_3,int param_4,longlong *param_5,
             void *param_6,int param_7,void *param_8,int param_9)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *_Dst;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = 0x20;
  if (0 < param_7) {
    lVar5 = (longlong)(param_7 + 1) + 0x20;
  }
  if (0 < param_9) {
    lVar5 = lVar5 + (param_9 + 1);
  }
  lVar4 = 0;
  if (param_3 != 0) {
    uVar1 = (ulonglong)((uint)lVar5 & 7);
    if (uVar1 != 0) {
      lVar4 = 8 - uVar1;
    }
    lVar5 = lVar5 + param_3 + lVar4;
  }
  lVar6 = 0;
  if (0 < param_4) {
    uVar1 = (ulonglong)((uint)lVar5 & 7);
    if (uVar1 != 0) {
      lVar6 = 8 - uVar1;
    }
    lVar5 = lVar5 + param_4 + lVar6;
  }
  puVar2 = (undefined8 *)(**(code **)(param_1 + 0x58))(lVar5);
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = (**(code **)(param_1 + 0x38))(param_1,1);
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *param_2 = puVar2;
    _Dst = puVar2 + 4;
    if (0 < param_7) {
      memcpy(_Dst,param_6,(longlong)(param_7 + 1));
      *puVar2 = _Dst;
      _Dst = (undefined8 *)((longlong)_Dst + (longlong)(param_7 + 1));
      *(char *)(puVar2 + 2) = (char)param_7;
    }
    if (0 < param_9) {
      memcpy(_Dst,param_8,(longlong)(param_9 + 1));
      puVar2[1] = _Dst;
      _Dst = (undefined8 *)((longlong)_Dst + (longlong)(param_9 + 1));
      *(char *)((longlong)puVar2 + 0x11) = (char)param_9;
    }
    lVar4 = (longlong)_Dst + lVar4;
    if (param_3 != 0) {
      puVar2[3] = lVar4;
      lVar4 = lVar4 + param_3;
    }
    if (param_5 != (longlong *)0x0) {
      if (param_4 < 1) {
        *param_5 = 0;
      }
      else {
        *param_5 = lVar4 + lVar6;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 144e85830 FUN_144e85830 body=55 status=ok
// SIG undefined FUN_144e85830(void)

void FUN_144e85830(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    *(code **)(param_1 + 8) = FUN_144e860e0;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(code **)(param_1 + 0x10) = FUN_14521e930;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    *(code **)(param_1 + 0x18) = FUN_14521e970;
  }
  return;
}



// FUNCTION 144e85870 FUN_144e85870 body=468 status=ok
// SIG undefined FUN_144e85870(void)

undefined8 FUN_144e85870(longlong param_1,undefined8 *param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  undefined8 local_128 [34];
  
  iVar3 = *(int *)(param_1 + 0xc4);
  iVar21 = iVar3 + 1;
  if (param_3 != (int *)0x0) {
    *param_3 = iVar3;
  }
  if (iVar21 == 1) {
    puVar15 = (undefined8 *)(param_1 + 200);
    plVar16 = (longlong *)(param_1 + 0x1d0);
    *plVar16 = (longlong)puVar15;
LAB_144e85979:
    *(undefined4 *)((longlong)puVar15 + 4) = 4;
    puVar15[0x13] = 0xffffffffffffffff;
    puVar15[0x15] = 0xffffffffffffffff;
    *(undefined4 *)((longlong)puVar15 + 0xf4) = 0xffffffff;
    *(undefined4 *)(puVar15 + 0x17) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)((longlong)puVar15 + 0xbc) = *(undefined4 *)(param_1 + 0x7c);
    if (1 < iVar21) {
      iVar22 = 0;
      if (0 < *(int *)(param_1 + 0xc4)) {
        lVar20 = 0;
        do {
          iVar22 = iVar22 + 1;
          *(undefined8 *)(lVar20 + (longlong)plVar16) =
               *(undefined8 *)(lVar20 + *(longlong *)(param_1 + 0x1d8));
          lVar20 = lVar20 + 8;
        } while (iVar22 < *(int *)(param_1 + 0xc4));
      }
      plVar16[iVar3] = (longlong)puVar15;
    }
    if (1 < *(int *)(param_1 + 0xc4)) {
      (**(code **)(param_1 + 0x60))(*(undefined8 *)(param_1 + 0x1d8));
    }
    *(longlong **)(param_1 + 0x1d8) = plVar16;
    *(int *)(param_1 + 0xc4) = iVar21;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = puVar15;
    }
    uVar17 = 0;
  }
  else {
    memset(local_128,0,0x108);
    puVar15 = (undefined8 *)(**(code **)(param_1 + 0x58))(0x108);
    if (puVar15 != (undefined8 *)0x0) {
      plVar16 = (longlong *)(**(code **)(param_1 + 0x58))((longlong)iVar21 << 3);
      if (plVar16 != (longlong *)0x0) {
        lVar20 = 2;
        puVar18 = local_128;
        puVar19 = puVar15;
        do {
          puVar1 = puVar19 + 0x10;
          uVar17 = puVar18[1];
          uVar12 = puVar18[2];
          uVar13 = puVar18[3];
          puVar2 = puVar18 + 0x10;
          *puVar19 = *puVar18;
          puVar19[1] = uVar17;
          uVar17 = puVar18[4];
          uVar14 = puVar18[5];
          puVar19[2] = uVar12;
          puVar19[3] = uVar13;
          uVar12 = puVar18[6];
          uVar13 = puVar18[7];
          puVar19[4] = uVar17;
          puVar19[5] = uVar14;
          uVar17 = puVar18[8];
          uVar14 = puVar18[9];
          puVar19[6] = uVar12;
          puVar19[7] = uVar13;
          uVar12 = puVar18[10];
          uVar13 = puVar18[0xb];
          puVar19[8] = uVar17;
          puVar19[9] = uVar14;
          uVar4 = *(undefined4 *)(puVar18 + 0xc);
          uVar5 = *(undefined4 *)((longlong)puVar18 + 100);
          uVar6 = *(undefined4 *)(puVar18 + 0xd);
          uVar7 = *(undefined4 *)((longlong)puVar18 + 0x6c);
          puVar19[10] = uVar12;
          puVar19[0xb] = uVar13;
          uVar8 = *(undefined4 *)(puVar18 + 0xe);
          uVar9 = *(undefined4 *)((longlong)puVar18 + 0x74);
          uVar10 = *(undefined4 *)(puVar18 + 0xf);
          uVar11 = *(undefined4 *)((longlong)puVar18 + 0x7c);
          *(undefined4 *)(puVar19 + 0xc) = uVar4;
          *(undefined4 *)((longlong)puVar19 + 100) = uVar5;
          *(undefined4 *)(puVar19 + 0xd) = uVar6;
          *(undefined4 *)((longlong)puVar19 + 0x6c) = uVar7;
          *(undefined4 *)(puVar19 + 0xe) = uVar8;
          *(undefined4 *)((longlong)puVar19 + 0x74) = uVar9;
          *(undefined4 *)(puVar19 + 0xf) = uVar10;
          *(undefined4 *)((longlong)puVar19 + 0x7c) = uVar11;
          lVar20 = lVar20 + -1;
          puVar18 = puVar2;
          puVar19 = puVar1;
        } while (lVar20 != 0);
        *puVar1 = *puVar2;
        goto LAB_144e85979;
      }
      (**(code **)(param_1 + 0x60))();
    }
    uVar17 = (**(code **)(param_1 + 0x38))(param_1,1);
  }
  return uVar17;
}



// FUNCTION 144e85a50 FUN_144e85a50 body=36 status=ok
// SIG undefined FUN_144e85a50(void)

undefined4 FUN_144e85a50(longlong param_1,undefined4 param_2)

{
  *(code **)(param_1 + 0x38) = FUN_144e86220;
  *(code **)(param_1 + 0x40) = FUN_144e861f0;
  *(code **)(param_1 + 0x48) = FUN_144e86270;
  return param_2;
}



// FUNCTION 144e85a80 FUN_144e85a80 body=1156 status=ok
// SIG undefined FUN_144e85a80(void)

int FUN_144e85a80(undefined8 *param_1,longlong param_2,int param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  int local_res10 [2];
  int local_158 [4];
  undefined8 local_148 [34];
  
  *param_1 = 0;
  if ((*(longlong *)(param_2 + 0x28) != 0) || (*(longlong *)(param_2 + 0x38) != 0)) {
    param_4 = 0;
  }
  puVar12 = (undefined1 *)(**(code **)(param_2 + 0x10))(param_4 + 0x228);
  if (puVar12 == (undefined1 *)0x0) {
    uVar15 = FUN_144e66050(1);
    (**(code **)(param_2 + 8))(0,1,uVar15);
    return 1;
  }
  memset(puVar12 + 1,0,0x227);
  *puVar12 = (char)param_3;
  *(undefined8 *)(puVar12 + 0x80) = *(undefined8 *)(param_2 + 0x20);
  if ((*(longlong *)(param_2 + 0x28) == 0) && (*(longlong *)(param_2 + 0x38) == 0)) {
    if (param_4 != 0) {
      puVar13 = puVar12 + 0x228;
      goto LAB_144e85b1c;
    }
  }
  else {
    puVar13 = *(undefined1 **)(param_2 + 0x20);
LAB_144e85b1c:
    *(undefined1 **)(puVar12 + 0x88) = puVar13;
  }
  *(code **)(puVar12 + 0x38) = FUN_144e86220;
  *(code **)(puVar12 + 0x40) = FUN_144e861f0;
  *(code **)(puVar12 + 0x48) = FUN_144e86270;
  *(undefined8 *)(puVar12 + 0x50) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(puVar12 + 0x58) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(puVar12 + 0x60) = *(undefined8 *)(param_2 + 0x18);
  FUN_144e65fe0(local_res10,local_158);
  iVar11 = *(int *)(param_2 + 0x48);
  if (iVar11 < 1) {
    *(int *)(puVar12 + 0x68) = local_res10[0];
    iVar11 = local_res10[0];
    if (0 < local_res10[0]) goto LAB_144e85b98;
  }
  else {
    *(int *)(puVar12 + 0x68) = iVar11;
LAB_144e85b98:
    if ((0 < local_res10[0]) && (local_res10[0] < iVar11)) {
      *(int *)(puVar12 + 0x68) = local_res10[0];
    }
  }
  iVar11 = *(int *)(param_2 + 0x4c);
  if (iVar11 < 1) {
    *(int *)(puVar12 + 0x6c) = local_158[0];
    iVar11 = local_158[0];
    if (0 < local_158[0]) goto LAB_144e85bc4;
  }
  else {
    *(int *)(puVar12 + 0x6c) = iVar11;
LAB_144e85bc4:
    if ((0 < local_158[0]) && (local_158[0] < iVar11)) {
      *(int *)(puVar12 + 0x6c) = local_158[0];
    }
  }
  FUN_144e66000(local_res10);
  iVar11 = *(int *)(param_2 + 0x50);
  if (iVar11 < 1) {
    *(int *)(puVar12 + 0x70) = local_res10[0];
    iVar11 = local_res10[0];
    if (0 < local_res10[0]) goto LAB_144e85c0b;
  }
  else {
    *(int *)(puVar12 + 0x70) = iVar11;
LAB_144e85c0b:
    if ((0 < local_res10[0]) && (local_res10[0] < iVar11)) {
      *(int *)(puVar12 + 0x70) = local_res10[0];
    }
  }
  iVar11 = *(int *)(param_2 + 0x54);
  if (iVar11 < 1) {
    *(int *)(puVar12 + 0x74) = local_158[0];
    iVar11 = local_158[0];
    if (0 < local_158[0]) goto LAB_144e85c37;
  }
  else {
    *(int *)(puVar12 + 0x74) = iVar11;
LAB_144e85c37:
    if ((0 < local_158[0]) && (local_158[0] < iVar11)) {
      *(int *)(puVar12 + 0x74) = local_158[0];
    }
  }
  FUN_144e66020(puVar12 + 0x78);
  FUN_144e66030(puVar12 + 0x7c);
  if (-1 < *(int *)(param_2 + 0x58)) {
    *(int *)(puVar12 + 0x78) = *(int *)(param_2 + 0x58);
  }
  if (0.0 <= *(float *)(param_2 + 0x5c)) {
    *(float *)(puVar12 + 0x7c) = *(float *)(param_2 + 0x5c);
  }
  if ((*(byte *)(param_2 + 0x60) & 1) != 0) {
    puVar12[6] = 1;
  }
  if ((*(byte *)(param_2 + 0x60) & 2) != 0) {
    puVar12[7] = 1;
  }
  puVar12[0x220] = *(byte *)(param_2 + 0x60) & 4;
  bVar3 = *(byte *)(param_2 + 0x60);
  *(undefined8 *)(puVar12 + 0x98) = 0xffffffffffffffff;
  puVar12[0x221] = bVar3 & 8;
  puVar12[2] = 0x1f;
  *(undefined8 *)(puVar12 + 0x90) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(puVar12 + 0xa0) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(puVar12 + 0xa8) = *(undefined8 *)(param_2 + 0x38);
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar12 + 0x1f8));
  *param_1 = puVar12;
  if (param_3 == 1) {
    return 0;
  }
  iVar11 = *(int *)(puVar12 + 0xc4);
  iVar20 = iVar11 + 1;
  if (iVar20 == 1) {
    puVar14 = (undefined8 *)(puVar12 + 200);
    plVar16 = (longlong *)(puVar12 + 0x1d0);
    *plVar16 = (longlong)puVar14;
LAB_144e85e3b:
    *(undefined4 *)((longlong)puVar14 + 4) = 4;
    puVar14[0x13] = 0xffffffffffffffff;
    puVar14[0x15] = 0xffffffffffffffff;
    *(undefined4 *)((longlong)puVar14 + 0xf4) = 0xffffffff;
    *(undefined4 *)(puVar14 + 0x17) = *(undefined4 *)(puVar12 + 0x78);
    *(undefined4 *)((longlong)puVar14 + 0xbc) = *(undefined4 *)(puVar12 + 0x7c);
    if (1 < iVar20) {
      iVar21 = 0;
      if (0 < *(int *)(puVar12 + 0xc4)) {
        lVar19 = 0;
        do {
          iVar21 = iVar21 + 1;
          *(undefined8 *)(lVar19 + (longlong)plVar16) =
               *(undefined8 *)(lVar19 + *(longlong *)(puVar12 + 0x1d8));
          lVar19 = lVar19 + 8;
        } while (iVar21 < *(int *)(puVar12 + 0xc4));
      }
      plVar16[iVar11] = (longlong)puVar14;
    }
    if (1 < *(int *)(puVar12 + 0xc4)) {
      (**(code **)(puVar12 + 0x60))(*(undefined8 *)(puVar12 + 0x1d8));
    }
    *(longlong **)(puVar12 + 0x1d8) = plVar16;
    *(int *)(puVar12 + 0xc4) = iVar20;
    return 0;
  }
  memset(local_148,0,0x108);
  puVar14 = (undefined8 *)(**(code **)(puVar12 + 0x58))(0x108);
  if (puVar14 == (undefined8 *)0x0) {
    if (*(code **)(puVar12 + 0x38) == FUN_144e86220) {
      iVar11 = 1;
      uVar15 = FUN_144e66050(1);
      (**(code **)(puVar12 + 0x50))(puVar12,1,uVar15);
      goto LAB_144e85da9;
    }
    iVar11 = (**(code **)(puVar12 + 0x38))(puVar12,1);
  }
  else {
    plVar16 = (longlong *)(**(code **)(puVar12 + 0x58))((longlong)iVar20 << 3);
    if (plVar16 != (longlong *)0x0) {
      lVar19 = 2;
      puVar17 = local_148;
      puVar18 = puVar14;
      do {
        puVar1 = puVar18 + 0x10;
        uVar15 = puVar17[1];
        uVar8 = puVar17[2];
        uVar9 = puVar17[3];
        puVar2 = puVar17 + 0x10;
        *puVar18 = *puVar17;
        puVar18[1] = uVar15;
        uVar15 = puVar17[4];
        uVar10 = puVar17[5];
        puVar18[2] = uVar8;
        puVar18[3] = uVar9;
        uVar8 = puVar17[6];
        uVar9 = puVar17[7];
        puVar18[4] = uVar15;
        puVar18[5] = uVar10;
        uVar15 = puVar17[8];
        uVar10 = puVar17[9];
        puVar18[6] = uVar8;
        puVar18[7] = uVar9;
        uVar8 = puVar17[10];
        uVar9 = puVar17[0xb];
        puVar18[8] = uVar15;
        puVar18[9] = uVar10;
        uVar4 = *(undefined4 *)(puVar17 + 0xc);
        uVar5 = *(undefined4 *)((longlong)puVar17 + 100);
        uVar6 = *(undefined4 *)(puVar17 + 0xd);
        uVar7 = *(undefined4 *)((longlong)puVar17 + 0x6c);
        puVar18[10] = uVar8;
        puVar18[0xb] = uVar9;
        uVar15 = puVar17[0xe];
        uVar8 = puVar17[0xf];
        *(undefined4 *)(puVar18 + 0xc) = uVar4;
        *(undefined4 *)((longlong)puVar18 + 100) = uVar5;
        *(undefined4 *)(puVar18 + 0xd) = uVar6;
        *(undefined4 *)((longlong)puVar18 + 0x6c) = uVar7;
        puVar18[0xe] = uVar15;
        puVar18[0xf] = uVar8;
        lVar19 = lVar19 + -1;
        puVar17 = puVar2;
        puVar18 = puVar1;
      } while (lVar19 != 0);
      *puVar1 = *puVar2;
      goto LAB_144e85e3b;
    }
    (**(code **)(puVar12 + 0x60))();
    if (*(code **)(puVar12 + 0x38) == FUN_144e86220) {
      iVar11 = FUN_144e86220();
    }
    else {
      iVar11 = (**(code **)(puVar12 + 0x38))(puVar12,1);
    }
  }
  if (iVar11 == 0) {
    return 0;
  }
LAB_144e85da9:
  (**(code **)(param_2 + 0x18))(puVar12);
  *param_1 = 0;
  return iVar11;
}



// FUNCTION 144e85f10 FUN_144e85f10 body=347 status=ok
// SIG undefined FUN_144e85f10(void)

void FUN_144e85f10(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar1;
  code *pcVar2;
  void *_Dst;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x60);
  FUN_144e83fe0(param_1,param_1 + 8);
  FUN_144e83fe0(param_1,param_1 + 0x18);
  FUN_144e84030(param_1,param_1 + 0x1e0);
  pcVar1 = *(code **)(param_1 + 0x60);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xc4)) {
    lVar6 = 0;
    do {
      pcVar2 = *(code **)(param_1 + 0x60);
      _Dst = *(void **)(lVar6 + *(longlong *)(param_1 + 0x1d8));
      FUN_144e84030(param_1);
      if (*(longlong *)((longlong)_Dst + 200) != 0) {
        (*pcVar2)();
      }
      lVar3 = *(longlong *)((longlong)_Dst + 0x100);
      do {
        LOCK();
        lVar4 = *(longlong *)((longlong)_Dst + 0x100);
        bVar7 = lVar3 == lVar4;
        if (bVar7) {
          *(longlong *)((longlong)_Dst + 0x100) = lVar3;
          lVar4 = lVar3;
        }
        UNLOCK();
        lVar3 = lVar4;
      } while (!bVar7);
      *(undefined8 *)((longlong)_Dst + 0x100) = 0;
      if (lVar4 != 0) {
        (*pcVar2)(lVar4);
      }
      if (_Dst == (void *)(param_1 + 200)) {
        memset(_Dst,0,0x108);
      }
      else {
        (*pcVar1)();
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar5 < *(int *)(param_1 + 0xc4));
    if (1 < *(int *)(param_1 + 0xc4)) {
      (*pcVar1)(*(undefined8 *)(param_1 + 0x1d8));
    }
  }
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f8));
                    /* WARNING: Could not recover jumptable at 0x000144e86068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}



// FUNCTION 144e86070 vsnprintf body=104 status=ok
// SIG int vsnprintf(char * _DstBuf, size_t _MaxCount, char * _Format, va_list _ArgList)

/* Library Function - Single Match
    vsnprintf
   
   Library: Visual Studio 2019 Release */

int __cdecl vsnprintf(char *_DstBuf,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  int iVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)FUN_144737586();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,_DstBuf,_MaxCount,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 144e860e0 FUN_144e860e0 body=260 status=ok
// SIG undefined FUN_144e860e0(void)

void FUN_144e860e0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FILE *_File;
  char *pcVar3;
  
  LOCK();
  UNLOCK();
  if (DAT_14c7966e8 == 0) {
    DAT_14c7966e8 = DAT_14c7966e8 + 1;
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c7966c0);
  }
  DAT_14c7966e8 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c7966c0);
  if (param_1 == 0) {
    uVar1 = __acrt_iob_func(2);
    FUN_146c958a0(uVar1,"<ERROR>: %s\n",param_3);
  }
  else {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      uVar1 = FUN_144e66070(param_2);
      uVar2 = __acrt_iob_func(2);
      pcVar3 = "Context 0x%p: (%s) %s\n";
    }
    else {
      uVar1 = FUN_144e66070(param_2);
      param_1 = *(longlong *)(param_1 + 0x10);
      uVar2 = __acrt_iob_func(2);
      pcVar3 = "%s: (%s) %s\n";
    }
    FUN_146c958a0(uVar2,pcVar3,param_1,uVar1,param_3);
  }
  _File = (FILE *)__acrt_iob_func(2);
  fflush(_File);
                    /* WARNING: Could not recover jumptable at 0x000144e861dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c7966c0);
  return;
}



// FUNCTION 144e861f0 FUN_144e861f0 body=37 status=ok
// SIG undefined FUN_144e861f0(void)

undefined4 FUN_144e861f0(longlong param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x50))();
    return param_2;
  }
  FUN_144e860e0();
  return param_2;
}



// FUNCTION 144e86220 FUN_144e86220 body=69 status=ok
// SIG undefined FUN_144e86220(void)

undefined4 FUN_144e86220(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144e66050(param_2);
  if (param_1 != 0) {
    (**(code **)(param_1 + 0x50))();
    return param_2;
  }
  FUN_144e860e0(0,param_2,uVar1);
  return param_2;
}



// FUNCTION 144e86270 FUN_144e86270 body=255 status=ok
// SIG undefined FUN_144e86270(void)

void FUN_144e86270(longlong param_1,undefined4 param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong *puVar2;
  char *_DstBuf;
  undefined8 local_res20;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  va_list local_140;
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_144737586();
  local_148 = 0;
  local_140 = (va_list)&local_res20;
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,local_138,0x100,param_3);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  if (iVar1 < 0x100) {
    if (param_1 == 0) {
      FUN_144e860e0(0,param_2,local_138);
    }
    else {
      (**(code **)(param_1 + 0x50))();
    }
  }
  else {
    _DstBuf = (char *)(**(code **)(param_1 + 0x58))((longlong)(iVar1 + 1));
    if (_DstBuf == (char *)0x0) {
      (**(code **)(param_1 + 0x50))(param_1,param_2,"Unable to allocate temporary memory");
    }
    else {
      vsnprintf(_DstBuf,(longlong)(iVar1 + 1),param_3,(va_list)&local_res20);
      (**(code **)(param_1 + 0x50))(param_1,param_2,_DstBuf);
      (**(code **)(param_1 + 0x60))(_DstBuf);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_168);
}



// FUNCTION 144e86380 FUN_144e86380 body=1112 status=ok
// SIG undefined FUN_144e86380(void)

void FUN_144e86380(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  byte bVar7;
  char *pcVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  char local_res8 [8];
  uint local_res10 [2];
  longlong local_res18;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar14;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  if (*(char *)(param_1 + 7) != '\0') {
    *(code **)(param_1 + 0x38) = FUN_144e86f90;
    *(code **)(param_1 + 0x48) = FUN_144e86fa0;
    *(code **)(param_1 + 0x40) = FUN_144e86f80;
  }
  iVar4 = FUN_144e89930(param_1,local_res10,&local_res20);
  if (iVar4 != 0) {
    FUN_144e85a50(param_1,iVar4);
    return;
  }
  local_70 = local_res20;
  local_68 = FUN_144e86fb0;
  uVar10 = 0;
  local_60 = FUN_144e87110;
  local_80 = 0;
  local_78 = 0;
  local_58 = param_1;
  local_88 = (**(code **)(param_1 + 0x58))(0x1000);
  if (local_88 == 0) {
    if (*(code **)(param_1 + 0x38) == FUN_144e86f90) {
      iVar4 = 1;
    }
    else {
      iVar4 = (**(code **)(param_1 + 0x38))(param_1,1);
      if (iVar4 == 0) goto LAB_144e86463;
    }
  }
  else {
LAB_144e86463:
    puVar12 = (undefined8 *)(param_1 + 0x40);
    local_res18 = **(longlong **)(param_1 + 0x1d8);
    if (local_res18 == 0) {
      if ((code *)*puVar12 == FUN_144e86f80) {
        iVar4 = 3;
      }
      else {
        iVar4 = (*(code *)*puVar12)(param_1,3,"Error during file initialization");
      }
      goto LAB_144e8649a;
    }
    *(byte *)(param_1 + 3) = (byte)(local_res10[0] >> 9) & 1;
    if (*(char *)(param_1 + 6) == '\0') {
      uVar6 = 0xff;
    }
    else {
      uVar6 = 0x1f;
      if ((local_res10[0] >> 10 & 1) != 0) {
        uVar6 = 0xff;
      }
    }
    *(undefined1 *)(param_1 + 2) = uVar6;
    bVar7 = (byte)(local_res10[0] >> 0xb) & 1;
    bVar3 = (byte)(local_res10[0] >> 0xc) & 1;
    *(byte *)(param_1 + 4) = bVar7;
    *(byte *)(param_1 + 5) = bVar3;
    if ((local_res10[0] >> 9 & 1) == 0) {
      *(undefined4 *)(local_res18 + 4) = 0;
    }
    else {
      if (((local_res10[0] >> 0xb & 1) != 0) || ((local_res10[0] >> 0xc & 1) != 0)) {
        if (*(char *)(param_1 + 6) != '\0') {
          iVar4 = (**(code **)(param_1 + 0x48))
                            (param_1,6,
                             "Invalid combination of version flags: single part found, but also marked as deep (%d) or multipart (%d)"
                             ,bVar7,CONCAT44(uVar14,(uint)bVar3));
          goto LAB_144e867aa;
        }
        *(undefined1 *)(param_1 + 3) = 0;
      }
      *(undefined4 *)(local_res18 + 4) = 1;
    }
    iVar4 = (*local_68)(&local_88,local_res8,1);
    while (iVar4 == 0) {
      if (local_res8[0] == '\0') {
        iVar4 = FUN_144e89a60(param_1,local_res18);
        if (iVar4 == 0) {
          if (*(char *)(param_1 + 5) != '\0') {
            iVar4 = (*local_68)(&local_88,local_res8,1);
            if (iVar4 != 0) {
              if ((code *)*puVar12 == FUN_144e86f80) {
                iVar4 = 6;
              }
              else {
                iVar4 = (*(code *)*puVar12)(param_1,6,"Unable to go to next part definition");
              }
              goto LAB_144e86626;
            }
            if (local_res8[0] != '\0') {
              iVar4 = FUN_144e85870(param_1,&local_res18,0);
              if (iVar4 == 0) goto LAB_144e865b5;
              goto LAB_144e865cb;
            }
          }
          if (*(longlong **)(param_1 + 0x1d8) == (longlong *)0x0) {
            iVar4 = 3;
          }
          else {
            *(longlong *)(**(longlong **)(param_1 + 0x1d8) + 0xf8) = local_70 - local_78;
            lVar13 = **(longlong **)(param_1 + 0x1d8);
            uVar11 = uVar10;
            iVar4 = 0;
            if (0 < *(int *)(param_1 + 0xc4)) goto LAB_144e86690;
          }
          goto LAB_144e8649a;
        }
LAB_144e86626:
        if (local_88 != 0) {
          (**(code **)(local_58 + 0x60))();
        }
        goto LAB_144e867b8;
      }
LAB_144e865b5:
      iVar4 = FUN_144e88d00(param_1,local_res18,local_res8[0],&local_88);
      if (iVar4 != 0) {
LAB_144e865cb:
        if (*(char *)(param_1 + 6) != '\0') goto LAB_144e8649a;
      }
      iVar4 = (*local_68)(&local_88,local_res8,1);
    }
    if ((code *)*puVar12 == FUN_144e86f80) {
      iVar4 = 6;
    }
    else {
      iVar4 = (*(code *)*puVar12)(param_1,6,"Unable to extract header byte");
    }
  }
LAB_144e867aa:
  if (local_88 != 0) {
    (**(code **)(local_58 + 0x60))();
  }
  goto LAB_144e867b8;
LAB_144e86690:
  do {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar11);
    iVar4 = FUN_144e867e0(param_1,lVar2,0);
    if (iVar4 != 0) break;
    iVar5 = FUN_144e86c50(lVar2);
    if (iVar5 < 0) {
      if (*(longlong *)(lVar2 + 0x68) == 0) {
        pcVar8 = "<first>";
      }
      else {
        pcVar8 = *(char **)(*(longlong *)(*(longlong *)(lVar2 + 0x68) + 0x18) + 8);
      }
      iVar4 = (**(code **)(param_1 + 0x48))
                        (param_1,0xe,"Invalid chunk count (%d) for part \'%s\'",iVar5,pcVar8);
      break;
    }
    iVar1 = *(int *)(lVar2 + 0xf4);
    if (iVar1 < 0) {
LAB_144e8670d:
      *(int *)(lVar2 + 0xf4) = iVar5;
    }
    else if (iVar1 != iVar5) {
      if (*(longlong *)(lVar2 + 0x68) == 0) {
        pcVar8 = "<first>";
      }
      else {
        pcVar8 = *(char **)(*(longlong *)(*(longlong *)(lVar2 + 0x68) + 0x18) + 8);
      }
      (**(code **)(param_1 + 0x48))
                (param_1,0xe,"Invalid chunk count (%d) for part \'%s\', expect (%d)",iVar1,pcVar8,
                 iVar5);
      goto LAB_144e8670d;
    }
    if (lVar13 != lVar2) {
      *(longlong *)(lVar2 + 0xf8) =
           *(longlong *)(lVar13 + 0xf8) + (longlong)*(int *)(lVar13 + 0xf4) * 8;
    }
    uVar9 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar9;
    uVar11 = uVar11 + 8;
    lVar13 = lVar2;
  } while ((int)uVar9 < *(int *)(param_1 + 0xc4));
LAB_144e8649a:
  if (local_88 != 0) {
    (**(code **)(local_58 + 0x60))();
  }
LAB_144e867b8:
  FUN_144e85a50(param_1,iVar4);
  return;
}



// FUNCTION 144e867e0 FUN_144e867e0 body=1127 status=ok
// SIG undefined FUN_144e867e0(void)

undefined8 FUN_144e867e0(longlong param_1,longlong param_2,int param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined4 *puVar25;
  ulonglong uVar26;
  longlong lVar27;
  
  if ((*(uint *)(param_2 + 4) & 0xfffffffd) == 0) {
    return 0;
  }
  uVar21 = 0;
  if (param_3 == 0) {
    if (*(longlong *)(param_2 + 0x60) == 0) {
      uVar13 = (**(code **)(param_1 + 0x38))(param_1,0xd);
      return uVar13;
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x30) == 0) {
      return 0;
    }
    if (*(longlong *)(param_2 + 0x60) == 0) {
      return 0;
    }
    if (*(longlong *)(param_2 + 200) != 0) {
      (**(code **)(param_1 + 0x60))();
      *(undefined8 *)(param_2 + 200) = 0;
    }
  }
  if (*(longlong *)(param_2 + 200) != 0) {
    return 0;
  }
  iVar7 = *(int *)(param_2 + 0x90);
  iVar8 = *(int *)(param_2 + 0x94);
  uVar9 = *(undefined4 *)(param_2 + 0x9c);
  iVar17 = (int)*(undefined8 *)(param_2 + 0x98);
  puVar6 = *(uint **)(*(longlong *)(param_2 + 0x60) + 0x18);
  lVar23 = (longlong)iVar17 - (longlong)iVar7;
  uVar26 = lVar23 + 1;
  lVar19 = (longlong)(int)((ulonglong)*(undefined8 *)(param_2 + 0x98) >> 0x20) - (longlong)iVar8;
  uVar1 = lVar19 + 1;
  iVar15 = 0;
  if ((*puVar6 != 0) && (puVar6[1] != 0)) {
    bVar5 = (byte)puVar6[2];
    if ((bVar5 & 0xf) == 0) {
      iVar15 = 1;
      iVar20 = 1;
    }
    else {
      uVar16 = 0;
      if ((bVar5 & 0xf) == 1) {
        if ((bVar5 & 0xf0) == 0) {
          if ((longlong)uVar1 < (longlong)uVar26) {
            lVar19 = lVar23;
          }
          lVar19 = lVar19 + 1;
          uVar11 = uVar21;
          if (1 < lVar19) {
            do {
              iVar20 = (int)uVar11;
              uVar11 = (ulonglong)(iVar20 + 1);
              lVar19 = lVar19 >> 1;
            } while (1 < lVar19);
            iVar20 = iVar20 + 2;
            iVar15 = iVar20;
            goto LAB_144e86a06;
          }
        }
        else {
          if ((longlong)uVar1 < (longlong)uVar26) {
            lVar19 = lVar23;
          }
          uVar12 = uVar21;
          uVar14 = uVar21;
          uVar18 = uVar16;
          for (uVar11 = lVar19 + 1; 1 < (longlong)uVar11; uVar11 = (longlong)uVar11 >> 1) {
            if ((uVar11 & 1) != 0) {
              uVar12 = 1;
            }
            uVar18 = (uint)uVar12;
            uVar16 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar16;
          }
          uVar16 = uVar18 + uVar16;
        }
        iVar20 = uVar16 + 1;
        iVar15 = iVar20;
      }
      else {
        if ((bVar5 & 0xf) != 2) goto LAB_144e86c37;
        uVar18 = 0;
        uVar11 = uVar26;
        uVar12 = uVar21;
        uVar14 = uVar21;
        uVar10 = uVar16;
        if ((bVar5 & 0xf0) == 0) {
          for (; iVar20 = (int)uVar12, 1 < (longlong)uVar11; uVar11 = (longlong)uVar11 >> 1) {
            uVar12 = (ulonglong)(iVar20 + 1);
          }
          uVar11 = uVar1;
          uVar12 = uVar21;
          if (1 < (longlong)uVar1) {
            do {
              iVar15 = (int)uVar12;
              uVar12 = (ulonglong)(iVar15 + 1);
              uVar11 = (longlong)uVar11 >> 1;
            } while (1 < (longlong)uVar11);
            iVar20 = iVar20 + 1;
            iVar15 = iVar15 + 2;
            goto LAB_144e86a06;
          }
        }
        else {
          for (; 1 < (longlong)uVar11; uVar11 = (longlong)uVar11 >> 1) {
            if ((uVar11 & 1) != 0) {
              uVar12 = 1;
            }
            uVar18 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar18;
            uVar10 = (uint)uVar12;
          }
          iVar20 = uVar18 + uVar10;
          uVar12 = uVar21;
          uVar14 = uVar21;
          for (uVar11 = uVar1; 1 < (longlong)uVar11; uVar11 = (longlong)uVar11 >> 1) {
            if ((uVar11 & 1) != 0) {
              uVar12 = 1;
            }
            uVar16 = (uint)uVar12;
            uVar14 = (ulonglong)((int)uVar14 + 1);
          }
          iVar15 = uVar16 + (int)uVar14;
        }
        iVar20 = iVar20 + 1;
        iVar15 = iVar15 + 1;
      }
    }
LAB_144e86a06:
    *(int *)(param_2 + 0xc0) = iVar20;
    *(int *)(param_2 + 0xc4) = iVar15;
    lVar19 = (**(code **)(param_1 + 0x58))((longlong)(iVar15 + iVar20) << 3);
    if (lVar19 == 0) {
      uVar13 = (**(code **)(param_1 + 0x38))(param_1,1);
      return uVar13;
    }
    lVar27 = (longlong)iVar20;
    puVar2 = (undefined4 *)(lVar19 + lVar27 * 4);
    lVar23 = (longlong)iVar15;
    puVar3 = puVar2 + lVar27;
    puVar4 = puVar3 + lVar23;
    if (0 < iVar20) {
      uVar11 = uVar21;
      uVar12 = uVar21;
      puVar25 = puVar2;
      do {
        lVar24 = 1L << ((byte)uVar12 & 0x3f);
        uVar14 = (longlong)uVar26 / lVar24;
        if (((puVar6[2] & 0xf0) == 0x10) && ((longlong)(uVar14 * lVar24) < (longlong)uVar26)) {
          uVar14 = uVar14 + 1;
        }
        uVar22 = 1;
        if ((0 < (longlong)uVar14) && (uVar22 = uVar14, 0x7fffffff < uVar14)) {
          uVar13 = (**(code **)(param_1 + 0x48))
                             (param_1,0xe,
                              "Invalid data window x dims (%d, %d) resulting in invalid tile level size (%lld) for level %d"
                              ,iVar7,iVar17,uVar14,(int)uVar12);
          return uVar13;
        }
        uVar12 = (ulonglong)((int)uVar12 + 1);
        uVar11 = uVar11 + 1;
        *(int *)((lVar19 - (longlong)puVar2) + (longlong)puVar25) =
             (int)((((ulonglong)*puVar6 - 1) + uVar22) / (ulonglong)*puVar6);
        *puVar25 = (int)uVar22;
        puVar25 = puVar25 + 1;
      } while ((longlong)uVar11 < lVar27);
    }
    if (0 < lVar23) {
      puVar25 = puVar4;
      uVar26 = uVar21;
      do {
        lVar27 = 1L << ((byte)uVar21 & 0x3f);
        uVar11 = (longlong)uVar1 / lVar27;
        if (((puVar6[2] & 0xf0) == 0x10) && ((longlong)(uVar11 * lVar27) < (longlong)uVar1)) {
          uVar11 = uVar11 + 1;
        }
        uVar12 = 1;
        if ((0 < (longlong)uVar11) && (uVar12 = uVar11, 0x7fffffff < uVar11)) {
          uVar13 = (**(code **)(param_1 + 0x48))
                             (param_1,0xe,
                              "Invalid data window y dims (%d, %d) resulting in invalid tile level size (%lld) for level %d"
                              ,iVar8,uVar9,uVar11,(int)uVar21);
          return uVar13;
        }
        uVar21 = (ulonglong)((int)uVar21 + 1);
        uVar26 = uVar26 + 1;
        *(int *)(((longlong)puVar3 - (longlong)puVar4) + (longlong)puVar25) =
             (int)((((ulonglong)puVar6[1] - 1) + uVar12) / (ulonglong)puVar6[1]);
        *puVar25 = (int)uVar12;
        puVar25 = puVar25 + 1;
      } while ((longlong)uVar26 < lVar23);
    }
    *(longlong *)(param_2 + 200) = lVar19;
    *(undefined4 **)(param_2 + 0xd0) = puVar3;
    *(undefined4 **)(param_2 + 0xd8) = puVar2;
    *(undefined4 **)(param_2 + 0xe0) = puVar4;
    return 0;
  }
LAB_144e86c37:
  uVar13 = (**(code **)(param_1 + 0x38))(param_1,0xe);
  return uVar13;
}



// FUNCTION 144e86c50 FUN_144e86c50 body=767 status=ok
// SIG undefined FUN_144e86c50(void)

ulonglong FUN_144e86c50(longlong param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int *piVar15;
  undefined2 uVar16;
  
  uVar13 = 0;
  uVar16 = 0;
  puVar3 = *(uint **)(*(longlong *)(param_1 + 0x20) + 0x18);
  lVar10 = (longlong)*(int *)(param_1 + 0x98) - (longlong)*(int *)(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    switch(*(undefined4 *)(param_1 + 0xb0)) {
    case 0:
    case 1:
    case 2:
      uVar8 = 1;
      break;
    case 3:
    case 5:
      uVar8 = 0x10;
      break;
    case 4:
    case 6:
    case 7:
    case 8:
      uVar8 = 0x20;
      break;
    case 9:
      uVar8 = 0x100;
      break;
    default:
      return 0xffffffff;
    }
    uVar12 = *puVar3;
    lVar6 = (longlong)(int)uVar12;
    uVar14 = uVar13;
    if (0 < (int)uVar12) {
      if (uVar8 < 2) {
        uVar14 = 0;
        if (0 < (int)uVar12) {
          piVar15 = (int *)(*(longlong *)(puVar3 + 2) + 0x10);
          uVar14 = uVar13;
          do {
            lVar7 = 2;
            if (*piVar15 != 1) {
              lVar7 = 4;
            }
            if (1 < (uint)piVar15[3]) {
              uVar14 = 1;
            }
            uVar13 = uVar13 + ((lVar10 + 1U) / (ulonglong)(longlong)piVar15[2]) * lVar7 * uVar8;
            lVar6 = lVar6 + -1;
            piVar15 = piVar15 + 8;
          } while (lVar6 != 0);
        }
      }
      else {
        piVar15 = (int *)(*(longlong *)(puVar3 + 2) + 0x10);
        uVar11 = (ulonglong)uVar12;
        do {
          lVar6 = 2;
          if (*piVar15 != 1) {
            lVar6 = 4;
          }
          lVar6 = ((lVar10 + 1U) / (ulonglong)(longlong)piVar15[2]) * lVar6 * uVar8;
          if (1 < (ulonglong)(longlong)piVar15[3]) {
            uVar14 = 1;
            lVar6 = lVar6 * (uVar8 / (ulonglong)(longlong)piVar15[3]);
          }
          uVar13 = uVar13 + lVar6;
          piVar15 = piVar15 + 8;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
    uVar16 = (undefined2)uVar14;
    *(short *)(param_1 + 0xf0) = (short)uVar8;
    uVar8 = (((longlong)*(int *)(param_1 + 0x9c) - (longlong)*(int *)(param_1 + 0x94)) + uVar8) /
            uVar8 & 0xffffffff;
  }
  else {
    puVar4 = *(uint **)(*(longlong *)(param_1 + 0x60) + 0x18);
    uVar8 = 0;
    bVar9 = (byte)puVar4[2] & 0xf;
    if ((((byte)puVar4[2] & 0xf) == 0) || (bVar9 == 1)) {
      if (0 < (int)*(uint *)(param_1 + 0xc0)) {
        piVar15 = *(int **)(param_1 + 200);
        uVar14 = (ulonglong)*(uint *)(param_1 + 0xc0);
        lVar10 = *(longlong *)(param_1 + 0xd0) - (longlong)piVar15;
        uVar8 = uVar13;
        do {
          iVar2 = *piVar15;
          piVar1 = (int *)(lVar10 + (longlong)piVar15);
          piVar15 = piVar15 + 1;
          uVar8 = uVar8 + (longlong)*piVar1 * (longlong)iVar2;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
        if (0x7fffffff < (longlong)uVar8) {
          return 0xffffffff;
        }
      }
    }
    else {
      if (bVar9 != 2) {
        return 0xffffffff;
      }
      uVar8 = uVar13;
      if (0 < *(int *)(param_1 + 0xc0)) {
        uVar14 = uVar13;
        uVar11 = uVar13;
        do {
          if (0 < *(int *)(param_1 + 0xc4)) {
            piVar15 = *(int **)(param_1 + 0xd0);
            uVar5 = uVar13;
            do {
              uVar8 = uVar8 + (longlong)*piVar15 *
                              (longlong)*(int *)(uVar11 + *(longlong *)(param_1 + 200));
              if (0x7fffffff < (longlong)uVar8) {
                return 0xffffffff;
              }
              uVar12 = (int)uVar5 + 1;
              uVar5 = (ulonglong)uVar12;
              piVar15 = piVar15 + 1;
            } while ((int)uVar12 < *(int *)(param_1 + 0xc4));
          }
          uVar12 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar12;
          uVar11 = uVar11 + 4;
        } while ((int)uVar12 < *(int *)(param_1 + 0xc0));
      }
    }
    lVar10 = (longlong)(int)*puVar3;
    if (0 < lVar10) {
      piVar15 = (int *)(*(longlong *)(puVar3 + 2) + 0x1c);
      uVar14 = uVar13;
      do {
        piVar1 = piVar15 + -1;
        uVar11 = (ulonglong)*piVar15;
        lVar6 = 2;
        if (piVar15[-3] != 1) {
          lVar6 = 4;
        }
        uVar5 = (ulonglong)puVar4[1];
        if (1 < uVar11) {
          uVar14 = 1;
          uVar5 = (((ulonglong)puVar4[1] - 1) + uVar11) / uVar11;
        }
        uVar16 = (undefined2)uVar14;
        piVar15 = piVar15 + 8;
        uVar13 = uVar13 + uVar5 * ((((ulonglong)*puVar4 - 1) + (longlong)*piVar1) /
                                  (ulonglong)(longlong)*piVar1) * lVar6;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  *(ulonglong *)(param_1 + 0xe8) = uVar13;
  *(undefined2 *)(param_1 + 0xf2) = uVar16;
  return uVar8 & 0xffffffff;
}



// FUNCTION 144e86f80 FUN_144e86f80 body=3 status=ok
// SIG undefined FUN_144e86f80(void)

undefined4 FUN_144e86f80(undefined8 param_1,undefined4 param_2)

{
  return param_2;
}



// FUNCTION 144e86f90 FUN_144e86f90 body=3 status=ok
// SIG undefined FUN_144e86f90(void)

undefined4 FUN_144e86f90(undefined8 param_1,undefined4 param_2)

{
  return param_2;
}



// FUNCTION 144e86fa0 FUN_144e86fa0 body=8 status=ok
// SIG undefined FUN_144e86fa0(void)

undefined4 FUN_144e86fa0(undefined8 param_1,undefined4 param_2)

{
  return param_2;
}



// FUNCTION 144e86fb0 FUN_144e86fb0 body=339 status=ok
// SIG undefined FUN_144e86fb0(void)

int FUN_144e86fb0(longlong *param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong _Size;
  ulonglong uVar4;
  int iVar5;
  longlong local_res10;
  
  uVar4 = 0;
  iVar5 = -1;
  uVar3 = param_3;
  if (param_3 != 0) {
    do {
      uVar1 = param_1[2];
      if ((longlong)uVar1 < 1) {
        lVar2 = param_1[6];
        local_res10 = 0;
        if (uVar3 < 0x1001) {
          iVar5 = (**(code **)(lVar2 + 0x28))(lVar2,*param_1,0x1000,param_1 + 3,&local_res10,1);
          if (local_res10 < 1) {
            if (local_res10 == 0) {
              iVar5 = (**(code **)(param_1[6] + 0x40))
                                (param_1[6],10,"End of file attempting to read header");
            }
            break;
          }
          param_1[2] = local_res10;
          param_1[1] = 0;
        }
        else {
          iVar5 = (**(code **)(lVar2 + 0x28))
                            (lVar2,param_2,uVar3 & 0xfffffffffffff000,param_1 + 3,&local_res10,0);
          if (local_res10 < 1) break;
          uVar3 = uVar3 - local_res10;
          param_2 = (void *)((longlong)param_2 + local_res10);
          uVar4 = uVar4 + local_res10;
        }
      }
      else {
        _Size = uVar3;
        if (uVar1 < uVar3) {
          _Size = uVar1;
        }
        memcpy(param_2,(void *)(param_1[1] + *param_1),_Size);
        param_1[1] = param_1[1] + _Size;
        uVar3 = uVar3 - _Size;
        param_1[2] = param_1[2] - _Size;
        param_2 = (void *)((longlong)param_2 + _Size);
        uVar4 = uVar4 + _Size;
      }
    } while (uVar3 != 0);
    if (iVar5 != -1) {
      return iVar5;
    }
  }
  iVar5 = 10;
  if (uVar4 == param_3) {
    iVar5 = 0;
  }
  return iVar5;
}



// FUNCTION 144e87110 FUN_144e87110 body=228 status=ok
// SIG undefined FUN_144e87110(void)

ulonglong FUN_144e87110(undefined8 *param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong local_res18;
  
  uVar7 = 0;
  uVar6 = (ulonglong)param_2;
  uVar3 = 0xffffffff;
  uVar4 = uVar7;
  uVar5 = uVar6;
  if (uVar6 != 0) {
    do {
      uVar1 = param_1[2];
      if ((longlong)uVar1 < 1) {
        local_res18 = 0;
        uVar3 = (**(code **)(param_1[6] + 0x28))
                          (param_1[6],*param_1,0x1000,param_1 + 3,&local_res18,1);
        if (local_res18 < 1) {
          if (local_res18 == 0) {
            uVar3 = (**(code **)(param_1[6] + 0x40))
                              (param_1[6],10,"End of file attempting to read header");
          }
          break;
        }
        param_1[1] = 0;
      }
      else {
        uVar2 = uVar5;
        if (uVar1 < uVar5) {
          uVar2 = uVar1;
        }
        param_1[1] = param_1[1] + uVar2;
        local_res18 = uVar1 - uVar2;
        uVar5 = uVar5 - uVar2;
        uVar4 = uVar4 + uVar2;
      }
      param_1[2] = local_res18;
    } while (uVar5 != 0);
    if (uVar3 != 0xffffffff) {
      return (ulonglong)uVar3;
    }
  }
  uVar5 = 10;
  if (uVar4 == uVar6) {
    uVar5 = uVar7;
  }
  return uVar5;
}



// FUNCTION 144e87200 FUN_144e87200 body=536 status=ok
// SIG undefined FUN_144e87200(void)

void FUN_144e87200(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  char *param_5,uint param_6)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_1b8 [32];
  char *local_198;
  uint local_190;
  undefined4 local_188;
  undefined4 local_180;
  char local_178 [4];
  byte local_174 [4];
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168 [2];
  undefined8 local_160;
  char local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar4 = (ulonglong)(int)param_6;
  bVar1 = *(byte *)(param_1 + 2);
  local_160 = param_3;
  if ((int)param_6 < 0) {
    local_190 = param_6;
    local_198 = param_5;
    iVar2 = (**(code **)(param_1 + 0x48))
                      (param_1,0x11,"Attribute \'%s\', type \'%s\': Invalid negative size %d",
                       param_4);
  }
  else {
    if (*(longlong *)(param_1 + 0x98) < 1) goto LAB_144e872c0;
    if ((longlong)uVar4 <= *(longlong *)(param_2 + 0x10)) goto LAB_144e872c0;
    if ((longlong)((*(longlong *)(param_2 + 0x18) - *(longlong *)(param_2 + 0x10)) + uVar4) <=
        *(longlong *)(param_1 + 0x98)) goto LAB_144e872c0;
    local_190 = param_6;
    local_198 = param_5;
    iVar2 = (**(code **)(param_1 + 0x48))
                      (param_1,0x11,"Attribute \'%s\', type \'%s\': Invalid size %d",param_4);
  }
  do {
    param_6 = (uint)uVar4;
    if (iVar2 != 0) {
LAB_144e87408:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1b8);
    }
LAB_144e872c0:
    if ((int)param_6 < 1) goto LAB_144e87408;
    iVar5 = 0;
    lVar3 = 0;
    do {
      iVar2 = (**(code **)(param_2 + 0x20))(param_2,local_178,1);
      if (iVar2 != 0) goto LAB_144e87408;
      local_158[lVar3] = local_178[0];
      if (local_178[0] == '\0') break;
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 <= (longlong)(ulonglong)bVar1);
    if ((int)(uint)bVar1 < iVar5) {
      local_198 = local_158;
      local_158[(ulonglong)bVar1 - 1] = '\0';
      local_190 = (uint)bVar1;
      iVar2 = (**(code **)(param_1 + 0x48))
                        (param_1,0xc,"Invalid %s encountered: start \'%s\' (max %d)",param_4);
      if (iVar2 != 0) goto LAB_144e87408;
    }
    if (iVar5 == 0) goto LAB_144e87408;
    if ((int)(param_6 - iVar5) < 0x11) {
      local_198 = local_158;
      (**(code **)(param_1 + 0x48))
                (param_1,0x11,"Out of data parsing \'%s\', last channel \'%s\'",param_4);
      goto LAB_144e87408;
    }
    iVar2 = (**(code **)(param_2 + 0x20))(param_2,local_168,4);
    if ((((iVar2 != 0) || (iVar2 = (**(code **)(param_2 + 0x20))(param_2,local_174,4), iVar2 != 0))
        || (iVar2 = (**(code **)(param_2 + 0x20))(param_2,&local_16c,4), iVar2 != 0)) ||
       (iVar2 = (**(code **)(param_2 + 0x20))(param_2,&local_170,4), iVar2 != 0))
    goto LAB_144e87408;
    local_180 = local_170;
    local_188 = local_16c;
    local_190 = (uint)local_174[0];
    local_198 = (char *)CONCAT44(local_198._4_4_,local_168[0]);
    iVar2 = FUN_144e8a790(param_1,local_160,local_158,iVar5);
    uVar4 = (ulonglong)((param_6 - iVar5) - 0x11);
  } while( true );
}



// FUNCTION 144e87430 FUN_144e87430 body=230 status=ok
// SIG undefined FUN_144e87430(void)

undefined8
FUN_144e87430(longlong param_1,longlong param_2,byte *param_3,undefined8 param_4,undefined8 param_5,
             int param_6,byte param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_6 != 1) {
                    /* WARNING: Could not recover jumptable at 0x000144e87484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1 + 0x48))
                      (param_1,0x11,"Attribute \'%s\': Invalid size %d (exp \'%s\' size 1)");
    return uVar2;
  }
  iVar1 = (**(code **)(param_2 + 0x20))(param_2,param_3,1);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000144e874bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1 + 0x48))(param_1,10,"Unable to read \'%s\' %s data",param_4);
    return uVar2;
  }
  if (param_7 <= *param_3) {
                    /* WARNING: Could not recover jumptable at 0x000144e87501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1 + 0x48))
                      (param_1,0xe,
                       "Attribute \'%s\' (type \'%s\'): Invalid value %d (max allowed %d)",param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144e87520 FUN_144e87520 body=742 status=ok
// SIG undefined FUN_144e87520(void)

ulonglong FUN_144e87520(longlong param_1,longlong param_2,uint *param_3,undefined8 param_4,
                       undefined8 param_5,int param_6)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  int local_58;
  uint local_54;
  int local_50;
  longlong local_48;
  
  iVar16 = 0;
  if (param_6 < 0) {
    uVar9 = (**(code **)(param_1 + 0x48))
                      (param_1,0x11,"Attribute \'%s\', type \'%s\': Invalid negative size %d",
                       param_4,param_5,param_6);
  }
  else {
    if (((*(longlong *)(param_1 + 0x98) < 1) || ((longlong)param_6 <= *(longlong *)(param_2 + 0x10))
        ) || ((*(longlong *)(param_2 + 0x18) - *(longlong *)(param_2 + 0x10)) + (longlong)param_6 <=
              *(longlong *)(param_1 + 0x98))) goto LAB_144e875c1;
    uVar9 = (**(code **)(param_1 + 0x48))
                      (param_1,0x11,"Attribute \'%s\', type \'%s\': Invalid size %d",param_4,param_5
                       ,param_6);
  }
  if ((int)uVar9 != 0) {
    return uVar9;
  }
LAB_144e875c1:
  uVar14 = 0;
  puVar11 = (undefined4 *)0x0;
  local_54 = 0;
  if (0 < param_6) {
    local_48 = 0;
    local_50 = 1;
    lVar15 = 0;
    uVar14 = 0;
    do {
      iVar8 = local_50;
      uVar7 = local_54;
      local_58 = 0;
      iVar6 = (**(code **)(param_2 + 0x20))(param_2,&local_58,4);
      if (iVar6 != 0) {
        uVar7 = (**(code **)(param_1 + 0x48))
                          (param_1,iVar6,"Attribute \'%s\': Unable to read string length",param_4);
        goto LAB_144e87792;
      }
      if ((local_58 < 0) ||
         ((0 < *(longlong *)(param_1 + 0x98) && (*(longlong *)(param_1 + 0x98) < (longlong)local_58)
          ))) {
        uVar7 = (**(code **)(param_1 + 0x48))
                          (param_1,0xe,
                           "Attribute \'%s\': Invalid size (%d) encountered parsing string vector",
                           param_4,local_58);
        goto LAB_144e87792;
      }
      puVar10 = puVar11;
      if (uVar14 == 0) {
        puVar10 = (undefined4 *)(**(code **)(param_1 + 0x58))(0x40);
        if (puVar10 != (undefined4 *)0x0) {
          uVar14 = 4;
          goto LAB_144e87663;
        }
LAB_144e8772d:
        puVar11 = puVar10;
        uVar7 = (**(code **)(param_1 + 0x38))(param_1,1);
LAB_144e87792:
        if (0 < (int)local_54) {
          uVar9 = (ulonglong)local_54;
          puVar10 = puVar11;
          do {
            FUN_144e83fe0(param_1,puVar10);
            puVar10 = puVar10 + 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        if (puVar11 == (undefined4 *)0x0) {
          return (ulonglong)uVar7;
        }
        (**(code **)(param_1 + 0x60))(puVar11);
        return (ulonglong)uVar7;
      }
LAB_144e87663:
      puVar11 = puVar10;
      if ((int)uVar14 <= iVar8) {
        uVar14 = uVar14 * 2;
        puVar11 = (undefined4 *)(**(code **)(param_1 + 0x58))((longlong)(int)uVar14 << 4);
        if (puVar11 == (undefined4 *)0x0) goto LAB_144e8772d;
        if (0 < lVar15) {
          puVar12 = puVar11;
          lVar13 = lVar15;
          do {
            puVar1 = (undefined4 *)(((longlong)puVar10 - (longlong)puVar11) + (longlong)puVar12);
            uVar3 = puVar1[1];
            uVar4 = puVar1[2];
            uVar5 = puVar1[3];
            *puVar12 = *puVar1;
            puVar12[1] = uVar3;
            puVar12[2] = uVar4;
            puVar12[3] = uVar5;
            lVar13 = lVar13 + -1;
            puVar12 = puVar12 + 4;
          } while (lVar13 != 0);
        }
        (**(code **)(param_1 + 0x60))(puVar10);
      }
      local_50 = local_50 + 1;
      puVar2 = (undefined8 *)(local_48 + (longlong)puVar11);
      *puVar2 = 0;
      puVar2[1] = 0;
      local_48 = local_48 + 0x10;
      local_54 = uVar7 + 1;
      lVar15 = lVar15 + 1;
      uVar7 = FUN_144e83bc0(param_1,puVar2,local_58);
      if (uVar7 != 0) goto LAB_144e87792;
      iVar8 = (**(code **)(param_2 + 0x20))(param_2,puVar2[1],(longlong)local_58);
      if (iVar8 != 0) {
        uVar7 = (**(code **)(param_1 + 0x48))
                          (param_1,iVar8,"Attribute \'%s\': Unable to read string of length (%d)",
                           param_4,local_58);
        goto LAB_144e87792;
      }
      *(undefined1 *)((longlong)local_58 + puVar2[1]) = 0;
      iVar16 = iVar16 + 4 + local_58;
    } while (iVar16 < param_6);
  }
  uVar7 = local_54;
  FUN_144e8afb0(param_1,param_3);
  *param_3 = uVar7;
  param_3[1] = uVar14;
  *(undefined4 **)(param_3 + 2) = puVar11;
  return 0;
}



// FUNCTION 144e87810 FUN_144e87810 body=417 status=ok
// SIG undefined FUN_144e87810(void)

void FUN_144e87810(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,int param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  ulonglong local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    (**(code **)(param_3 + 0x28))(param_3,param_5);
    (**(code **)(param_1 + 0x48))
              (param_1,0xe,"Duplicate copy of required attribute \'%s\' encountered","dataWindow");
    goto LAB_144e879a4;
  }
  lVar2 = 0;
  do {
    lVar4 = lVar2;
    if (*(char *)(param_4 + lVar4) != (&DAT_149972540)[lVar4]) {
      (**(code **)(param_3 + 0x28))(param_3,param_5);
      local_68 = param_4;
      (**(code **)(param_1 + 0x48))
                (param_1,0x10,"Required attribute \'%s\': Invalid type \'%s\'","dataWindow");
      goto LAB_144e879a4;
    }
    lVar2 = lVar4 + 1;
  } while (lVar4 + 1 != 6);
  if (param_5 == 0x10) {
    iVar3 = (**(code **)(param_3 + 0x20))(param_3,&local_48,0x10);
    if (iVar3 != 0) {
      local_68 = param_4;
      iVar3 = (**(code **)(param_1 + 0x48))
                        (param_1,iVar3,"Unable to read \'%s\' %s data","dataWindow");
      goto LAB_144e87906;
    }
  }
  else {
    local_50 = 0x10;
    local_58 = (longlong *)CONCAT44(local_58._4_4_,4);
    local_68 = CONCAT44(local_68._4_4_,param_5);
    local_60 = param_4;
    iVar3 = (**(code **)(param_1 + 0x48))
                      (param_1,(int)lVar4 + 0xc,
                       "Attribute \'%s\': Invalid size %d (exp \'%s\' size 4 * %d (%d))",
                       "dataWindow");
LAB_144e87906:
    if (iVar3 != 0) goto LAB_144e879a4;
  }
  local_60 = 0;
  local_68 = local_68 & 0xffffffff00000000;
  local_58 = (longlong *)(param_2 + 0x30);
  iVar3 = FUN_144e848c0(param_1,param_2 + 8,"dataWindow",1);
  if (iVar3 == 0) {
    puVar1 = *(undefined4 **)(*(longlong *)(param_2 + 0x30) + 0x18);
    *puVar1 = (undefined4)local_48;
    puVar1[1] = local_48._4_4_;
    puVar1[2] = (undefined4)uStack_40;
    puVar1[3] = uStack_40._4_4_;
    *(undefined8 *)(param_2 + 0x90) = local_48;
    *(undefined8 *)(param_2 + 0x98) = uStack_40;
  }
  else {
    (**(code **)(param_1 + 0x48))
              (param_1,iVar3,"Unable to initialize attribute \'%s\', type \'box2i\'","dataWindow");
  }
LAB_144e879a4:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
}



// FUNCTION 144e879c0 FUN_144e879c0 body=417 status=ok
// SIG undefined FUN_144e879c0(void)

void FUN_144e879c0(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,int param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  ulonglong local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (**(code **)(param_3 + 0x28))(param_3,param_5);
    (**(code **)(param_1 + 0x48))
              (param_1,0xe,"Duplicate copy of required attribute \'%s\' encountered","displayWindow"
              );
    goto LAB_144e87b54;
  }
  lVar2 = 0;
  do {
    lVar4 = lVar2;
    if (*(char *)(param_4 + lVar4) != (&DAT_149972540)[lVar4]) {
      (**(code **)(param_3 + 0x28))(param_3,param_5);
      local_68 = param_4;
      (**(code **)(param_1 + 0x48))
                (param_1,0x10,"Required attribute \'%s\': Invalid type \'%s\'","displayWindow");
      goto LAB_144e87b54;
    }
    lVar2 = lVar4 + 1;
  } while (lVar4 + 1 != 6);
  if (param_5 == 0x10) {
    iVar3 = (**(code **)(param_3 + 0x20))(param_3,&local_48,0x10);
    if (iVar3 != 0) {
      local_68 = param_4;
      iVar3 = (**(code **)(param_1 + 0x48))
                        (param_1,iVar3,"Unable to read \'%s\' %s data","displayWindow");
      goto LAB_144e87ab6;
    }
  }
  else {
    local_50 = 0x10;
    local_58 = (longlong *)CONCAT44(local_58._4_4_,4);
    local_68 = CONCAT44(local_68._4_4_,param_5);
    local_60 = param_4;
    iVar3 = (**(code **)(param_1 + 0x48))
                      (param_1,(int)lVar4 + 0xc,
                       "Attribute \'%s\': Invalid size %d (exp \'%s\' size 4 * %d (%d))",
                       "displayWindow");
LAB_144e87ab6:
    if (iVar3 != 0) goto LAB_144e87b54;
  }
  local_60 = 0;
  local_68 = local_68 & 0xffffffff00000000;
  local_58 = (longlong *)(param_2 + 0x38);
  iVar3 = FUN_144e848c0(param_1,param_2 + 8,"displayWindow",1);
  if (iVar3 == 0) {
    puVar1 = *(undefined4 **)(*(longlong *)(param_2 + 0x38) + 0x18);
    *puVar1 = (undefined4)local_48;
    puVar1[1] = local_48._4_4_;
    puVar1[2] = (undefined4)uStack_40;
    puVar1[3] = uStack_40._4_4_;
    *(undefined8 *)(param_2 + 0xa0) = local_48;
    *(undefined8 *)(param_2 + 0xa8) = uStack_40;
  }
  else {
    (**(code **)(param_1 + 0x48))
              (param_1,iVar3,"Unable to initialize attribute \'%s\', type \'box2i\'","displayWindow"
              );
  }
LAB_144e87b54:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
}



// FUNCTION 144e87b70 FUN_144e87b70 body=475 status=ok
// SIG undefined FUN_144e87b70(void)

undefined8
FUN_144e87b70(longlong param_1,longlong param_2,longlong param_3,undefined1 *param_4,int param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  longlong local_38 [2];
  
  lVar6 = (longlong)param_5;
  if (param_5 < 0) {
    pcVar7 = "Attribute \'%s\', type \'%s\': Invalid negative size %d";
  }
  else {
    if (((*(longlong *)(param_1 + 0x98) < 1) || (lVar6 <= *(longlong *)(param_3 + 0x10))) ||
       ((*(longlong *)(param_3 + 0x18) - *(longlong *)(param_3 + 0x10)) + lVar6 <=
        *(longlong *)(param_1 + 0x98))) goto LAB_144e87c02;
    pcVar7 = "Attribute \'%s\', type \'%s\': Invalid size %d";
  }
  uVar3 = (**(code **)(param_1 + 0x48))(param_1,0x11,pcVar7,&DAT_149971528,param_4,param_5);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
LAB_144e87c02:
  plVar1 = (longlong *)(param_2 + 0x68);
  if (*(longlong *)(param_2 + 0x68) == 0) {
    lVar4 = 0;
    do {
      lVar5 = lVar4 + 1;
      if (param_4[lVar4] != "string"[lVar4]) {
        (**(code **)(param_3 + 0x28))(param_3,param_5);
        pcVar7 = "attribute \'name\': Invalid type \'%s\'";
        iVar2 = 0x10;
        goto LAB_144e87d24;
      }
      lVar4 = lVar5;
    } while (lVar5 != 7);
    iVar2 = FUN_144e848c0(param_1,param_2 + 8,&DAT_149971528,0x13,param_5 + 1,local_38,plVar1);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(param_3 + 0x20))(param_3,local_38[0],lVar6);
      if (iVar2 == 0) {
        *(undefined1 *)(lVar6 + local_38[0]) = 0;
        iVar2 = FUN_144e83c80(param_1,*(undefined8 *)(*plVar1 + 0x18),local_38[0],param_5);
        if (iVar2 == 0) {
          return 0;
        }
      }
      FUN_144e84cd0(param_1,param_2 + 8,*plVar1);
      *plVar1 = 0;
      uVar3 = (**(code **)(param_1 + 0x40))(param_1,iVar2,"Unable to read \'name\' data");
    }
    else {
      (**(code **)(param_3 + 0x28))(param_3,param_5);
      param_4 = &DAT_149971528;
      pcVar7 = "Unable to initialize attribute \'%s\', type \'string\'";
LAB_144e87d24:
      uVar3 = (**(code **)(param_1 + 0x48))(param_1,iVar2,pcVar7,param_4);
    }
  }
  else {
    (**(code **)(param_3 + 0x28))(param_3,param_5);
    uVar3 = (**(code **)(param_1 + 0x48))
                      (param_1,0xe,"Duplicate copy of required attribute \'name\' encountered");
  }
  return uVar3;
}



// FUNCTION 144e87d50 FUN_144e87d50 body=701 status=ok
// SIG undefined FUN_144e87d50(void)

ulonglong FUN_144e87d50(longlong param_1,longlong param_2,longlong param_3,undefined1 *param_4,
                       int param_5)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  undefined8 *puVar9;
  char *local_38 [2];
  
  lVar7 = (longlong)param_5;
  if (param_5 < 0) {
    pcVar8 = "Attribute \'%s\', type \'%s\': Invalid negative size %d";
  }
  else {
    if (((*(longlong *)(param_1 + 0x98) < 1) || (lVar7 <= *(longlong *)(param_3 + 0x10))) ||
       ((*(longlong *)(param_3 + 0x18) - *(longlong *)(param_3 + 0x10)) + lVar7 <=
        *(longlong *)(param_1 + 0x98))) goto LAB_144e87de3;
    pcVar8 = "Attribute \'%s\', type \'%s\': Invalid size %d";
  }
  uVar4 = (**(code **)(param_1 + 0x48))(param_1,0x11,pcVar8,&DAT_149971580,param_4,param_5);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
LAB_144e87de3:
  puVar9 = (undefined8 *)(param_1 + 0x48);
  plVar1 = (longlong *)(param_2 + 0x70);
  if (*(longlong *)(param_2 + 0x70) == 0) {
    lVar5 = 0;
    do {
      lVar6 = lVar5 + 1;
      if (param_4[lVar5] != "string"[lVar5]) {
        (**(code **)(param_3 + 0x28))(param_3,param_5);
        pcVar8 = "Required attribute \'type\': Invalid type \'%s\'";
        iVar2 = 0x10;
        goto LAB_144e87fe5;
      }
      lVar5 = lVar6;
    } while (lVar6 != 7);
    iVar2 = FUN_144e848c0(param_1,param_2 + 8,&DAT_149971580,0x13,param_5 + 1,local_38,plVar1);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(param_3 + 0x20))(param_3,local_38[0],lVar7);
      if (iVar2 == 0) {
        local_38[0][lVar7] = '\0';
        iVar2 = FUN_144e83c80(param_1,*(undefined8 *)(*plVar1 + 0x18),local_38[0],param_5);
        if (iVar2 == 0) {
          iVar2 = strcmp(local_38[0],"scanlineimage");
          if (iVar2 == 0) {
            *(undefined4 *)(param_2 + 4) = 0;
            uVar4 = 0;
          }
          else {
            iVar2 = strcmp(local_38[0],"tiledimage");
            if (iVar2 == 0) {
              *(undefined4 *)(param_2 + 4) = 1;
              uVar4 = 0;
            }
            else {
              iVar2 = strcmp(local_38[0],"deepscanline");
              if (iVar2 == 0) {
                *(undefined4 *)(param_2 + 4) = 2;
                uVar4 = 0;
              }
              else {
                iVar2 = strcmp(local_38[0],"deeptile");
                if (iVar2 == 0) {
                  *(undefined4 *)(param_2 + 4) = 3;
                  uVar4 = 0;
                }
                else {
                  uVar3 = (*(code *)*puVar9)(param_1,0xe,
                                             "attribute \'type\': Invalid type string \'%s\'",
                                             local_38[0]);
                  uVar4 = (ulonglong)uVar3;
                  FUN_144e84cd0(param_1,param_2 + 8,*plVar1);
                  *plVar1 = 0;
                }
              }
            }
          }
        }
        else {
          FUN_144e84cd0(param_1,param_2 + 8,*plVar1);
          *plVar1 = 0;
          uVar4 = (**(code **)(param_1 + 0x40))(param_1,iVar2,"Unable to read \'name\' data");
        }
      }
      else {
        FUN_144e84cd0(param_1,param_2 + 8,*plVar1);
        *plVar1 = 0;
        uVar4 = (**(code **)(param_1 + 0x40))(param_1,iVar2,"Unable to read \'name\' data");
      }
    }
    else {
      (**(code **)(param_3 + 0x28))(param_3,param_5);
      param_4 = &DAT_149971580;
      pcVar8 = "Unable to initialize attribute \'%s\', type \'string\'";
LAB_144e87fe5:
      uVar4 = (*(code *)*puVar9)(param_1,iVar2,pcVar8,param_4);
    }
  }
  else {
    (**(code **)(param_3 + 0x28))(param_3,param_5);
    uVar4 = (*(code *)*puVar9)(param_1,0xe,
                               "Duplicate copy of required attribute \'type\' encountered");
  }
  return uVar4;
}



// FUNCTION 144e88010 FUN_144e88010 body=3202 status=ok
// SIG undefined FUN_144e88010(void)

void FUN_144e88010(longlong param_1,longlong param_2,longlong param_3,char *param_4,char *param_5,
                  int param_6)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong *plVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  byte local_58 [8];
  ulonglong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  switch(*param_4) {
  case 'c':
    iVar2 = strcmp(param_4,"channels");
    if (iVar2 == 0) {
      plVar8 = (longlong *)(param_2 + 0x20);
      local_50 = 0;
      uStack_48 = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        lVar6 = 0;
        do {
          lVar4 = lVar6 + 1;
          if (param_5[lVar6] != "chlist"[lVar6]) {
            (**(code **)(param_3 + 0x28))(param_3,param_6);
            (**(code **)(param_1 + 0x48))
                      (param_1,0x10,"Required attribute \'channels\': Invalid type \'%s\'",param_5);
            goto LAB_144e88c86;
          }
          lVar6 = lVar4;
        } while (lVar4 != 7);
        local_70 = CONCAT44(local_70._4_4_,param_6);
        local_78 = param_5;
        iVar2 = FUN_144e87200(param_1,param_3,&local_50,"channels");
        if (iVar2 == 0) {
          local_70 = 0;
          local_78 = (char *)((ulonglong)local_78 & 0xffffffff00000000);
          local_68 = plVar8;
          iVar2 = FUN_144e848c0(param_1,param_2 + 8,"channels",3);
          if (iVar2 == 0) {
            FUN_144e8aaf0(param_1,*(undefined8 *)(*plVar8 + 0x18));
            puVar1 = *(ulonglong **)(*plVar8 + 0x18);
            *puVar1 = local_50;
            puVar1[1] = uStack_48;
          }
          else {
            FUN_144e8aaf0(param_1,&local_50);
            (**(code **)(param_1 + 0x48))
                      (param_1,iVar2,"Unable to initialize attribute \'%s\', type \'chlist\'",
                       "channels");
          }
        }
        else {
          FUN_144e8aaf0(param_1,&local_50);
        }
      }
      else {
        (**(code **)(param_3 + 0x28))(param_3,param_6);
        (**(code **)(param_1 + 0x48))
                  (param_1,0xe,"Duplicate copy of required attribute \'channels\' encountered");
      }
      goto LAB_144e88c86;
    }
    iVar2 = strcmp(param_4,"compression");
    if (iVar2 == 0) {
      if (*(longlong *)(param_2 + 0x28) == 0) {
        iVar2 = strcmp(param_5,"compression");
        if (iVar2 == 0) {
          local_68 = (longlong *)CONCAT71(local_68._1_7_,10);
          local_70 = CONCAT44(local_70._4_4_,param_6);
          local_78 = param_5;
          iVar2 = FUN_144e87430(param_1,param_3,local_58,"compression");
          if (iVar2 == 0) {
            local_70 = 0;
            local_78 = (char *)((ulonglong)local_78 & 0xffffffff00000000);
            local_68 = (longlong *)(param_2 + 0x28);
            iVar2 = FUN_144e848c0(param_1,param_2 + 8,"compression",5);
            if (iVar2 == 0) {
              *(byte *)(*(longlong *)(param_2 + 0x28) + 0x18) = local_58[0];
              *(uint *)(param_2 + 0xb0) = (uint)local_58[0];
            }
            else {
              (**(code **)(param_1 + 0x48))
                        (param_1,iVar2,"Unable to initialize attribute \'%s\', type \'compression\'"
                         ,"compression");
            }
          }
        }
        else {
          (**(code **)(param_3 + 0x28))(param_3,param_6);
          local_78 = param_5;
          (**(code **)(param_1 + 0x48))
                    (param_1,0x10,"Required attribute \'%s\': Invalid type \'%s\'","compression");
        }
      }
      else {
        (**(code **)(param_3 + 0x28))(param_3,param_6);
        (**(code **)(param_1 + 0x48))
                  (param_1,0xe,"Duplicate copy of required attribute \'%s\' encountered",
                   "compression");
      }
      goto LAB_144e88c86;
    }
    iVar2 = strcmp(param_4,"chunkCount");
    if (iVar2 == 0) {
      plVar8 = (longlong *)(param_2 + 0x80);
      local_50 = CONCAT44(local_50._4_4_,param_6);
      if (*plVar8 == 0) {
        lVar6 = 0;
        do {
          lVar4 = lVar6 + 1;
          if (param_5[lVar6] != (&DAT_149971208)[lVar6]) {
            (**(code **)(param_3 + 0x28))(param_3);
            (**(code **)(param_1 + 0x48))
                      (param_1,0x10,"attribute \'chunkCount\': Invalid type \'%s\'",param_5);
            goto LAB_144e88c86;
          }
          lVar6 = lVar4;
        } while (lVar4 != 4);
        if (param_6 == 4) {
          iVar2 = (**(code **)(param_3 + 0x20))(param_3,&local_50,4);
          if (iVar2 == 0) {
            local_70 = 0;
            local_78 = (char *)((ulonglong)local_78 & 0xffffffff00000000);
            local_68 = plVar8;
            iVar2 = FUN_144e848c0(param_1,param_2 + 8,"chunkCount",10);
            if (iVar2 == 0) {
              *(int *)(*plVar8 + 0x18) = (int)local_50;
              *(int *)(param_2 + 0xf4) = (int)local_50;
            }
            else {
              (**(code **)(param_1 + 0x48))
                        (param_1,iVar2,"Unable to initialize attribute \'%s\', type \'int\'",
                         "chunkCount");
            }
          }
          else {
            (**(code **)(param_1 + 0x40))(param_1,iVar2,"Unable to read chunkCount data");
          }
        }
        else {
          (**(code **)(param_3 + 0x28))();
          (**(code **)(param_1 + 0x48))
                    (param_1,0xe,"Required attribute \'chunkCount\': Invalid size %d (exp 4)",
                     local_50 & 0xffffffff);
        }
      }
      else {
        (**(code **)(param_3 + 0x28))(param_3);
        (**(code **)(param_1 + 0x48))
                  (param_1,0xe,"Duplicate copy of required attribute \'chunkCount\' encountered");
      }
      goto LAB_144e88c86;
    }
    break;
  case 'd':
    iVar2 = strcmp(param_4,"dataWindow");
    if (iVar2 == 0) {
      local_78 = (char *)CONCAT44(local_78._4_4_,param_6);
      FUN_144e87810(param_1,param_2,param_3,param_5);
      goto LAB_144e88c86;
    }
    iVar2 = strcmp(param_4,"displayWindow");
    if (iVar2 == 0) {
      local_78 = (char *)CONCAT44(local_78._4_4_,param_6);
      FUN_144e879c0(param_1,param_2,param_3,param_5);
      goto LAB_144e88c86;
    }
    break;
  case 'l':
    iVar2 = strcmp(param_4,"lineOrder");
    if (iVar2 == 0) {
      if (*(longlong *)(param_2 + 0x40) == 0) {
        iVar2 = strcmp(param_5,"lineOrder");
        if (iVar2 == 0) {
          local_68 = (longlong *)CONCAT71(local_68._1_7_,3);
          local_70 = CONCAT44(local_70._4_4_,param_6);
          local_78 = param_5;
          iVar2 = FUN_144e87430(param_1,param_3,local_58,"lineOrder");
          if (iVar2 == 0) {
            local_70 = 0;
            local_78 = (char *)((ulonglong)local_78 & 0xffffffff00000000);
            local_68 = (longlong *)(param_2 + 0x40);
            iVar2 = FUN_144e848c0(param_1,param_2 + 8,"lineOrder",0xc);
            if (iVar2 == 0) {
              *(byte *)(*(longlong *)(param_2 + 0x40) + 0x18) = local_58[0];
              *(uint *)(param_2 + 0xb4) = (uint)local_58[0];
            }
            else {
              (**(code **)(param_1 + 0x48))
                        (param_1,iVar2,"Unable to initialize attribute \'%s\', type \'lineOrder\'",
                         "lineOrder");
            }
          }
        }
        else {
          (**(code **)(param_3 + 0x28))(param_3,param_6);
          local_78 = param_5;
          (**(code **)(param_1 + 0x48))
                    (param_1,0x10,"Required attribute \'%s\': Invalid type \'%s\'","lineOrder");
        }
      }
      else {
        (**(code **)(param_3 + 0x28))(param_3,param_6);
        (**(code **)(param_1 + 0x48))
                  (param_1,0xe,"Duplicate copy of required attribute \'%s\' encountered","lineOrder"
                  );
      }
      goto LAB_144e88c86;
    }
    break;
  case 'n':
    lVar6 = 0;
    do {
      lVar4 = lVar6 + 1;
      if (param_4[lVar6] != (&DAT_149971528)[lVar6]) goto switchD_144e88068_caseD_65;
      lVar6 = lVar4;
    } while (lVar4 != 5);
    local_78 = (char *)CONCAT44(local_78._4_4_,param_6);
    FUN_144e87b70(param_1,param_2,param_3,param_5);
    goto LAB_144e88c86;
  case 'p':
    iVar2 = strcmp(param_4,"pixelAspectRatio");
    if (iVar2 == 0) {
      plVar8 = (longlong *)(param_2 + 0x48);
      if (*(longlong *)(param_2 + 0x48) == 0) {
        lVar6 = 0;
        do {
          lVar4 = lVar6 + 1;
          if (param_5[lVar6] != "float"[lVar6]) {
            (**(code **)(param_3 + 0x28))(param_3,param_6);
            pcVar7 = "Required attribute \'%s\': Invalid type \'%s\'";
            local_78 = param_5;
            uVar5 = 0x10;
            goto LAB_144e8870b;
          }
          lVar6 = lVar4;
        } while (lVar4 != 6);
        if (param_6 != 4) {
          (**(code **)(param_3 + 0x28))(param_3,param_6);
          pcVar7 = "Required attribute \'%s\': Invalid size %d (exp 4)";
          local_78 = (char *)CONCAT44(local_78._4_4_,param_6);
          uVar5 = 0x11;
LAB_144e8870b:
          (**(code **)(param_1 + 0x48))(param_1,uVar5,pcVar7,"pixelAspectRatio");
          goto LAB_144e88c86;
        }
        iVar2 = (**(code **)(param_3 + 0x20))(param_3,&local_50,4);
        if (iVar2 != 0) {
          local_78 = (char *)CONCAT44(local_78._4_4_,4);
          (**(code **)(param_1 + 0x48))
                    (param_1,iVar2,"Attribute \'%s\': Unable to read data (%d bytes)",
                     "pixelAspectRatio");
          goto LAB_144e88c86;
        }
        local_70 = 0;
        local_78 = (char *)((ulonglong)local_78._4_4_ << 0x20);
        local_68 = plVar8;
        iVar2 = FUN_144e848c0(param_1,param_2 + 8,"pixelAspectRatio",8);
        if (iVar2 != 0) {
          (**(code **)(param_1 + 0x48))
                    (param_1,iVar2,"Unable to initialize attribute \'%s\', type \'float\'",
                     "pixelAspectRatio");
          goto LAB_144e88c86;
        }
LAB_144e886dc:
        *(int *)(*plVar8 + 0x18) = (int)local_50;
        goto LAB_144e88c86;
      }
      (**(code **)(param_3 + 0x28))(param_3,param_6);
      pcVar7 = "pixelAspectRatio";
      goto LAB_144e885f7;
    }
    break;
  case 's':
    iVar2 = strcmp(param_4,"screenWindowCenter");
    if (iVar2 == 0) {
      if (*(longlong *)(param_2 + 0x50) == 0) {
        lVar6 = 0;
        do {
          lVar4 = lVar6 + 1;
          if (param_5[lVar6] != (&DAT_1499725a8)[lVar6]) {
            (**(code **)(param_3 + 0x28))(param_3,param_6);
            local_78 = param_5;
            (**(code **)(param_1 + 0x48))
                      (param_1,0x10,"Required attribute \'%s\': Invalid type \'%s\'",
                       "screenWindowCenter");
            goto LAB_144e88c86;
          }
          lVar6 = lVar4;
        } while (lVar4 != 4);
        if (param_6 == 8) {
          iVar2 = (**(code **)(param_3 + 0x20))(param_3,&local_50,8);
          if (iVar2 == 0) {
            local_70 = 0;
            local_78 = (char *)((ulonglong)local_78._4_4_ << 0x20);
            local_68 = (longlong *)(param_2 + 0x50);
            iVar2 = FUN_144e848c0(param_1,param_2 + 8,"screenWindowCenter",0x18);
            if (iVar2 == 0) {
              **(ulonglong **)(*(longlong *)(param_2 + 0x50) + 0x18) = local_50;
            }
            else {
              (**(code **)(param_1 + 0x48))
                        (param_1,iVar2,"Unable to initialize attribute \'%s\', type \'v2f\'",
                         "screenWindowCenter");
            }
          }
          else {
            local_78 = (char *)CONCAT44(local_78._4_4_,8);
            (**(code **)(param_1 + 0x48))
                      (param_1,iVar2,"Attribute \'%s\': Unable to read data (%d bytes)",
                       "screenWindowCenter");
          }
        }
        else {
          (**(code **)(param_3 + 0x28))(param_3,param_6);
          local_70 = 8;
          local_78 = (char *)CONCAT44(local_78._4_4_,param_6);
          (**(code **)(param_1 + 0x48))
                    (param_1,0x11,"Required attribute \'%s\': Invalid size %d (exp %llu)",
                     "screenWindowCenter");
        }
        goto LAB_144e88c86;
      }
      (**(code **)(param_3 + 0x28))(param_3,param_6);
      pcVar7 = "screenWindowCenter";
    }
    else {
      iVar2 = strcmp(param_4,"screenWindowWidth");
      if (iVar2 != 0) break;
      plVar8 = (longlong *)(param_2 + 0x58);
      if (*(longlong *)(param_2 + 0x58) == 0) {
        lVar6 = 0;
        do {
          lVar4 = lVar6 + 1;
          if (param_5[lVar6] != "float"[lVar6]) {
            (**(code **)(param_3 + 0x28))(param_3,param_6);
            pcVar7 = "Required attribute \'%s\': Invalid type \'%s\'";
            local_78 = param_5;
            uVar5 = 0x10;
            goto LAB_144e8899a;
          }
          lVar6 = lVar4;
        } while (lVar4 != 6);
        if (param_6 != 4) {
          (**(code **)(param_3 + 0x28))(param_3,param_6);
          pcVar7 = "Required attribute \'%s\': Invalid size %d (exp 4)";
          local_78 = (char *)CONCAT44(local_78._4_4_,param_6);
          uVar5 = 0x11;
LAB_144e8899a:
          (**(code **)(param_1 + 0x48))(param_1,uVar5,pcVar7,"screenWindowWidth");
          goto LAB_144e88c86;
        }
        iVar2 = (**(code **)(param_3 + 0x20))(param_3,&local_50,4);
        if (iVar2 != 0) {
          local_78 = (char *)CONCAT44(local_78._4_4_,4);
          (**(code **)(param_1 + 0x48))
                    (param_1,iVar2,"Attribute \'%s\': Unable to read data (%d bytes)",
                     "screenWindowWidth");
          goto LAB_144e88c86;
        }
        local_70 = 0;
        local_78 = (char *)((ulonglong)local_78._4_4_ << 0x20);
        local_68 = plVar8;
        iVar2 = FUN_144e848c0(param_1,param_2 + 8,"screenWindowWidth",8);
        if (iVar2 != 0) {
          (**(code **)(param_1 + 0x48))
                    (param_1,iVar2,"Unable to initialize attribute \'%s\', type \'float\'",
                     "screenWindowWidth");
          goto LAB_144e88c86;
        }
        goto LAB_144e886dc;
      }
      (**(code **)(param_3 + 0x28))(param_3,param_6);
      pcVar7 = "screenWindowWidth";
    }
LAB_144e885f7:
    (**(code **)(param_1 + 0x48))
              (param_1,0xe,"Duplicate copy of required attribute \'%s\' encountered",pcVar7);
    goto LAB_144e88c86;
  case 't':
    lVar4 = 0;
    lVar6 = lVar4;
    do {
      lVar3 = lVar6 + 1;
      if (param_4[lVar6] != "tiles"[lVar6]) goto LAB_144e88b04;
      lVar6 = lVar3;
    } while (lVar3 != 6);
    plVar8 = (longlong *)(param_2 + 0x60);
    local_50 = 0;
    uStack_48 = uStack_48 & 0xffffffffffffff00;
    if (*plVar8 == 0) {
      iVar2 = strcmp(param_5,"tiledesc");
      if (iVar2 == 0) {
        if (param_6 == 9) {
          iVar2 = (**(code **)(param_3 + 0x20))(param_3,&local_50,9);
          if (iVar2 == 0) {
            local_70 = 0;
            local_78 = (char *)((ulonglong)local_78 & 0xffffffff00000000);
            local_68 = plVar8;
            iVar2 = FUN_144e848c0(param_1,param_2 + 8,"tiles",0x15);
            if (iVar2 == 0) {
              puVar1 = *(ulonglong **)(*plVar8 + 0x18);
              *puVar1 = local_50;
              *(undefined1 *)(puVar1 + 1) = (undefined1)uStack_48;
            }
            else {
              (**(code **)(param_1 + 0x48))
                        (param_1,iVar2,"Unable to initialize attribute \'%s\', type \'tiledesc\'",
                         "tiles");
            }
          }
          else {
            (**(code **)(param_1 + 0x40))(param_1,iVar2,"Unable to read \'tiles\' data");
          }
        }
        else {
          (**(code **)(param_3 + 0x28))(param_3,param_6);
          local_78 = &DAT_00000009;
          (**(code **)(param_1 + 0x48))
                    (param_1,0x10,"Required attribute \'tiles\': Invalid size %d (exp %llu)",param_6
                    );
        }
      }
      else {
        (**(code **)(param_3 + 0x28))(param_3,param_6);
        (**(code **)(param_1 + 0x48))
                  (param_1,0x10,"Required attribute \'tiles\': Invalid type \'%s\'",param_5);
      }
    }
    else {
      (**(code **)(param_3 + 0x28))(param_3,param_6);
      (**(code **)(param_1 + 0x48))
                (param_1,0xe,"Duplicate copy of required attribute \'tiles\' encountered");
    }
    goto LAB_144e88c86;
  case 'v':
    lVar6 = 0;
    lVar4 = lVar6;
    do {
      lVar3 = lVar4 + 1;
      if (param_4[lVar4] != "version"[lVar4]) goto switchD_144e88068_caseD_65;
      lVar4 = lVar3;
    } while (lVar3 != 8);
    plVar8 = (longlong *)(param_2 + 0x78);
    local_50 = CONCAT44(local_50._4_4_,param_6);
    if (*plVar8 == 0) {
      do {
        lVar4 = lVar6 + 1;
        if (param_5[lVar6] != (&DAT_149971208)[lVar6]) {
          (**(code **)(param_3 + 0x28))(param_3);
          (**(code **)(param_1 + 0x48))
                    (param_1,0x10,"attribute \'version\': Invalid type \'%s\'",param_5);
          goto LAB_144e88c86;
        }
        lVar6 = lVar4;
      } while (lVar4 != 4);
      if (param_6 == 4) {
        iVar2 = (**(code **)(param_3 + 0x20))(param_3,&local_50,4);
        if (iVar2 == 0) {
          if ((int)local_50 == 1) {
            local_70 = 0;
            local_78 = (char *)((ulonglong)local_78 & 0xffffffff00000000);
            local_68 = plVar8;
            iVar2 = FUN_144e848c0(param_1,param_2 + 8,"version",10);
            if (iVar2 == 0) {
              *(int *)(*plVar8 + 0x18) = (int)local_50;
            }
            else {
              (**(code **)(param_1 + 0x48))
                        (param_1,iVar2,"Unable to initialize attribute \'%s\', type \'int\'",
                         "version");
            }
          }
          else {
            (**(code **)(param_1 + 0x48))(param_1,0xe,"Invalid version %d: expect 1");
          }
        }
        else {
          (**(code **)(param_1 + 0x40))(param_1,iVar2,"Unable to read version data");
        }
      }
      else {
        (**(code **)(param_3 + 0x28))();
        (**(code **)(param_1 + 0x48))
                  (param_1,0xe,"attribute \'version\': Invalid size %d (exp 4)",
                   local_50 & 0xffffffff);
      }
    }
    else {
      (**(code **)(param_3 + 0x28))(param_3);
      (**(code **)(param_1 + 0x48))
                (param_1,0xe,"Duplicate copy of required attribute \'version\' encountered");
    }
    goto LAB_144e88c86;
  }
switchD_144e88068_caseD_65:
LAB_144e88c86:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  while (lVar4 = lVar6, lVar6 != 5) {
LAB_144e88b04:
    lVar6 = lVar4 + 1;
    if (param_4[lVar4] != (&DAT_149971580)[lVar4]) goto switchD_144e88068_caseD_65;
  }
  local_78 = (char *)CONCAT44(local_78._4_4_,param_6);
  FUN_144e87d50(param_1,param_2,param_3,param_5);
  goto LAB_144e88c86;
}



// FUNCTION 144e88d00 FUN_144e88d00 body=2969 status=ok
// SIG undefined FUN_144e88d00(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_144e88d00(longlong param_1,ulonglong param_2,char param_3,longlong param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined8 *local_280;
  longlong *local_278;
  int local_270;
  uint local_268;
  char local_264 [4];
  undefined8 local_260;
  longlong local_258;
  undefined8 local_250;
  char local_248 [255];
  char acStack_149 [257];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  bVar1 = *(byte *)(param_1 + 2);
  uVar9 = (ulonglong)bVar1;
  uVar5 = 0;
  iVar10 = 1;
  local_268 = 0;
  local_258 = 0;
  local_250 = 0;
  local_260 = param_2;
  local_248[0] = param_3;
  if (uVar9 != 0) {
    lVar11 = 1;
    do {
      iVar3 = (**(code **)(param_4 + 0x20))(param_4,local_264,1);
      if (iVar3 != 0) goto LAB_144e8988a;
      local_248[lVar11] = local_264[0];
      if (local_264[0] == '\0') break;
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 1;
    } while (lVar11 <= (longlong)uVar9);
  }
  uVar12 = uVar5;
  uVar14 = uVar5;
  if ((int)(uint)bVar1 < iVar10) {
    local_288 = local_248;
    local_280 = (undefined8 *)CONCAT44(local_280._4_4_,(uint)bVar1);
    local_248[uVar9 - 1] = '\0';
    iVar3 = (**(code **)(param_1 + 0x48))
                      (param_1,0xc,"Invalid %s encountered: start \'%s\' (max %d)","attribute name")
    ;
    if (iVar3 != 0) goto LAB_144e8988a;
  }
  do {
    uVar13 = (uint)uVar14;
    iVar3 = (**(code **)(param_4 + 0x20))(param_4,local_264,1);
    if (iVar3 != 0) goto LAB_144e8988a;
    acStack_149[uVar12 + 1] = local_264[0];
    if (local_264[0] == '\0') break;
    uVar13 = uVar13 + 1;
    uVar12 = uVar12 + 1;
    uVar14 = (ulonglong)uVar13;
  } while ((longlong)uVar12 <= (longlong)uVar9);
  if ((int)(uint)bVar1 < (int)uVar13) {
    local_288 = (char *)((longlong)acStack_149 + 1);
    local_280 = (undefined8 *)CONCAT44(local_280._4_4_,(uint)bVar1);
    acStack_149[uVar9] = '\0';
    iVar3 = (**(code **)(param_1 + 0x48))
                      (param_1,0xc,"Invalid %s encountered: start \'%s\' (max %d)","attribute type")
    ;
    if (iVar3 != 0) goto LAB_144e8988a;
  }
  if (iVar10 == 0) {
    (**(code **)(param_1 + 0x40))
              (param_1,6,"Invalid empty string encountered parsing attribute name");
    goto LAB_144e8988a;
  }
  if (uVar13 == 0) {
    (**(code **)(param_1 + 0x48))
              (param_1,6,
               "Invalid empty string encountered parsing attribute type for attribute \'%s\'",
               local_248);
    goto LAB_144e8988a;
  }
  iVar10 = (**(code **)(param_4 + 0x20))(param_4,&local_268,4);
  uVar9 = local_260;
  if (iVar10 != 0) {
    local_288 = (char *)((longlong)acStack_149 + 1);
    (**(code **)(param_1 + 0x48))
              (param_1,iVar10,"Unable to read attribute size for attribute \'%s\', type \'%s\'");
    goto LAB_144e8988a;
  }
  local_280 = (undefined8 *)CONCAT44(local_280._4_4_,local_268);
  local_288 = (char *)((longlong)acStack_149 + 1);
  iVar10 = FUN_144e88010(param_1,local_260,param_4,local_248);
  uVar13 = local_268;
  if (iVar10 != 0x20) goto LAB_144e8988a;
  do {
    uVar12 = uVar5 + 1;
    if (acStack_149[uVar5 + 1] != "string"[uVar5]) {
      local_278 = &local_258;
      local_280 = (undefined8 *)0x0;
      local_288 = (char *)((ulonglong)local_288 & 0xffffffff00000000);
      iVar10 = FUN_144e84250(param_1,uVar9 + 8,local_248,(longlong)acStack_149 + 1);
      goto LAB_144e88fde;
    }
    uVar5 = uVar12;
  } while (uVar12 != 7);
  if ((int)local_268 < 0) {
    pcVar6 = "Attribute \'%s\', type \'%s\': Invalid negative size %d";
LAB_144e88f59:
    local_288 = (char *)((longlong)acStack_149 + 1);
    local_280 = (undefined8 *)CONCAT44(local_280._4_4_,local_268);
    iVar10 = (**(code **)(param_1 + 0x48))(param_1,0x11,pcVar6,local_248);
    if (iVar10 != 0) goto LAB_144e8988a;
  }
  else if (((0 < *(longlong *)(param_1 + 0x98)) &&
           (*(longlong *)(param_4 + 0x10) < (longlong)(int)local_268)) &&
          (*(longlong *)(param_1 + 0x98) <
           (*(longlong *)(param_4 + 0x18) - *(longlong *)(param_4 + 0x10)) +
           (longlong)(int)local_268)) {
    pcVar6 = "Attribute \'%s\', type \'%s\': Invalid size %d";
    goto LAB_144e88f59;
  }
  local_278 = &local_258;
  local_280 = &local_250;
  local_288 = (char *)CONCAT44(local_288._4_4_,uVar13 + 1);
  iVar10 = FUN_144e84530(param_1,uVar9 + 8,local_248,0x13);
LAB_144e88fde:
  lVar11 = local_250;
  uVar13 = local_268;
  if (iVar10 != 0) {
    local_288 = (char *)((longlong)acStack_149 + 1);
    (**(code **)(param_1 + 0x48))
              (param_1,iVar10,"Unable to initialize attribute \'%s\', type \'%s\'",local_248);
    goto LAB_144e8988a;
  }
  uVar2 = local_278._4_4_;
  switch(*(undefined4 *)(local_258 + 0x14)) {
  default:
    local_288 = local_248;
    iVar10 = 3;
    pcVar6 = (char *)((longlong)acStack_149 + 1);
    pcVar8 = "Invalid type \'%s\' for attribute \'%s\'";
    goto LAB_144e89862;
  case 1:
  case 2:
    lVar11 = *(longlong *)(local_258 + 0x18);
    if (local_268 != 0x10) {
      local_270 = 0x10;
      local_278 = (longlong *)CONCAT44(uVar2,4);
      goto LAB_144e89046;
    }
    goto LAB_144e8906f;
  case 3:
    local_280 = (undefined8 *)CONCAT44(local_280._4_4_,local_268);
    local_288 = (char *)((longlong)acStack_149 + 1);
    iVar10 = FUN_144e87200(param_1,param_4,*(undefined8 *)(local_258 + 0x18),local_248);
    goto LAB_144e8986a;
  case 4:
    lVar11 = *(longlong *)(local_258 + 0x18);
    if (local_268 != 0x20) {
      local_270 = 0x20;
      local_278 = (longlong *)CONCAT44(uVar2,8);
      goto LAB_144e89046;
    }
    uVar7 = 0x20;
    break;
  case 5:
    local_278 = (longlong *)CONCAT71(local_278._1_7_,10);
    local_280 = (undefined8 *)CONCAT44(local_280._4_4_,local_268);
    local_288 = (char *)((longlong)acStack_149 + 1);
    iVar10 = FUN_144e87430(param_1,param_4,local_258 + 0x18,local_248);
    goto LAB_144e8986a;
  case 6:
    lVar11 = local_258 + 0x18;
    if (local_268 != 8) {
      local_270 = 8;
      pcVar6 = "Attribute \'%s\': Invalid size %d (exp \'%s\' size 8 * %d (%d))";
      local_278 = (longlong *)CONCAT44(uVar2,1);
      goto LAB_144e8904d;
    }
LAB_144e891a9:
    uVar7 = 8;
    break;
  case 7:
    local_278 = (longlong *)CONCAT71(local_278._1_7_,2);
    local_280 = (undefined8 *)CONCAT44(local_280._4_4_,local_268);
    local_288 = (char *)((longlong)acStack_149 + 1);
    iVar10 = FUN_144e87430(param_1,param_4,local_258 + 0x18,local_248);
    goto LAB_144e8986a;
  case 8:
  case 10:
    lVar11 = local_258 + 0x18;
    if (local_268 != 4) {
      local_270 = 4;
      local_278 = (longlong *)CONCAT44(uVar2,1);
      goto LAB_144e89046;
    }
    uVar7 = 4;
    break;
  case 9:
    lVar15 = (longlong)(int)local_268;
    lVar11 = *(longlong *)(local_258 + 0x18);
    if ((int)local_268 < 0) {
      local_288 = (char *)((longlong)acStack_149 + 1);
      local_280 = (undefined8 *)CONCAT44(local_280._4_4_,local_268);
      iVar10 = (**(code **)(param_1 + 0x48))
                         (param_1,0x11,"Attribute \'%s\', type \'%s\': Invalid negative size %d",
                          local_248);
LAB_144e892b9:
      FUN_144e8aca0(param_1,lVar11);
      if (iVar10 != 0) goto LAB_144e8986e;
    }
    else {
      if (((0 < *(longlong *)(param_1 + 0x98)) && (*(longlong *)(param_4 + 0x10) < lVar15)) &&
         (*(longlong *)(param_1 + 0x98) <
          (*(longlong *)(param_4 + 0x18) - *(longlong *)(param_4 + 0x10)) + lVar15)) {
        local_288 = (char *)((longlong)acStack_149 + 1);
        local_280 = (undefined8 *)CONCAT44(local_280._4_4_,local_268);
        iVar10 = (**(code **)(param_1 + 0x48))
                           (param_1,0x11,"Attribute \'%s\', type \'%s\': Invalid size %d",local_248)
        ;
        goto LAB_144e892b9;
      }
      uVar4 = (int)(local_268 + ((int)local_268 >> 0x1f & 3U)) >> 2;
      if (local_268 != uVar4 * 4) {
        uVar4 = local_268 & 0x80000003;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
        }
        local_278 = (longlong *)CONCAT44(uVar2,uVar4);
        local_280 = (undefined8 *)((longlong)acStack_149 + 1);
        local_288 = (char *)CONCAT44(local_288._4_4_,local_268);
        iVar10 = (**(code **)(param_1 + 0x48))
                           (param_1,0x11,
                            "Attribute \'%s\': Invalid size %d (exp \'%s\' size 4 * n, found odd bytes %d)"
                            ,local_248);
        goto LAB_144e892b9;
      }
      FUN_144e8aca0(param_1,lVar11);
      uVar13 = uVar4;
    }
    iVar10 = 0;
    if (0 < (int)uVar13) {
      iVar10 = FUN_144e8ab90(param_1,lVar11,uVar13);
      if (iVar10 != 0) goto LAB_144e8986e;
      iVar3 = (**(code **)(param_4 + 0x20))(param_4,*(undefined8 *)(lVar11 + 8),lVar15);
      iVar10 = 0;
      if (iVar3 != 0) {
        FUN_144e8aca0(param_1,lVar11);
        local_288 = (char *)((longlong)acStack_149 + 1);
        iVar10 = 10;
        pcVar6 = local_248;
        pcVar8 = "Unable to read \'%s\' %s data";
        goto LAB_144e89862;
      }
    }
    goto LAB_144e8986a;
  case 0xb:
    lVar11 = *(longlong *)(local_258 + 0x18);
    if (local_268 != 0x1c) {
      local_270 = 0x1c;
      local_278 = (longlong *)CONCAT44(uVar2,7);
      goto LAB_144e89046;
    }
    uVar7 = 0x1c;
    break;
  case 0xc:
    local_278 = (longlong *)CONCAT71(local_278._1_7_,3);
    local_280 = (undefined8 *)CONCAT44(local_280._4_4_,local_268);
    local_288 = (char *)((longlong)acStack_149 + 1);
    iVar10 = FUN_144e87430(param_1,param_4,local_258 + 0x18,local_248);
    goto LAB_144e8986a;
  case 0xd:
    lVar11 = *(longlong *)(local_258 + 0x18);
    if (local_268 != 0x24) {
      local_270 = 0x24;
      local_278 = (longlong *)CONCAT44(uVar2,9);
      goto LAB_144e89046;
    }
    uVar7 = 0x24;
    break;
  case 0xe:
    lVar11 = *(longlong *)(local_258 + 0x18);
    if (local_268 != 0x48) {
      local_270 = 0x48;
      pcVar6 = "Attribute \'%s\': Invalid size %d (exp \'%s\' size 8 * %d (%d))";
      local_278 = (longlong *)CONCAT44(uVar2,9);
      goto LAB_144e8904d;
    }
    uVar7 = 0x48;
    break;
  case 0xf:
    lVar11 = *(longlong *)(local_258 + 0x18);
    if (local_268 != 0x40) {
      local_270 = 0x40;
      local_278 = (longlong *)CONCAT44(uVar2,0x10);
      goto LAB_144e89046;
    }
    uVar7 = 0x40;
    break;
  case 0x10:
    lVar11 = *(longlong *)(local_258 + 0x18);
    if (local_268 != 0x80) {
      local_270 = 0x80;
      pcVar6 = "Attribute \'%s\': Invalid size %d (exp \'%s\' size 8 * %d (%d))";
      local_278 = (longlong *)CONCAT44(uVar2,0x10);
      goto LAB_144e8904d;
    }
    uVar7 = 0x80;
    break;
  case 0x11:
    lVar11 = *(longlong *)(local_258 + 0x18);
    lVar15 = (longlong)(int)local_268;
    uVar5 = *(ulonglong *)(param_1 + 0x98);
    FUN_144e8af50(param_1,lVar11);
    if ((int)uVar13 < 8) {
      local_280 = (undefined8 *)((longlong)acStack_149 + 1);
      local_288 = (char *)CONCAT44(local_288._4_4_,uVar13);
      iVar10 = (**(code **)(param_1 + 0x48))
                         (param_1,0x11,"Attribute \'%s\': Invalid size %d (exp \'%s\' size >= 8)",
                          local_248);
    }
    else {
      iVar10 = (**(code **)(param_4 + 0x20))(param_4,&local_260,8);
      if (iVar10 == 0) {
        iVar10 = (int)local_260;
        uVar4 = local_260._4_4_ * iVar10 * 4;
        if (lVar15 != (ulonglong)uVar4 + 8) {
          local_270 = local_260._4_4_;
          local_278 = (longlong *)CONCAT44(local_278._4_4_,iVar10);
          local_280 = (undefined8 *)((longlong)acStack_149 + 1);
          local_288 = (char *)CONCAT44(local_288._4_4_,uVar13);
          iVar10 = (**(code **)(param_1 + 0x48))
                             (param_1,0xe,
                              "Attribute \'%s\': Invalid size %d (exp \'%s\' %u x %u * 4 + sizevals)"
                              ,local_248);
          goto LAB_144e8986a;
        }
        if (((local_260._4_4_ * iVar10 & 0x3fffffffU) == 0) ||
           ((0 < (longlong)uVar5 && (uVar5 <= uVar4)))) {
          local_278 = (longlong *)CONCAT44(local_278._4_4_,local_260._4_4_);
          local_280 = (undefined8 *)CONCAT44(local_280._4_4_,iVar10);
          local_288 = (char *)((longlong)acStack_149 + 1);
          iVar10 = (**(code **)(param_1 + 0x48))
                             (param_1,0x11,
                              "Attribute \'%s\', type \'%s\': Invalid size for preview %u x %u",
                              local_248);
          goto LAB_144e8986a;
        }
        iVar10 = FUN_144e8ae70(param_1,lVar11,local_260 & 0xffffffff,local_260._4_4_);
        if (iVar10 == 0) {
          iVar10 = (**(code **)(param_4 + 0x20))
                             (param_4,*(undefined8 *)(lVar11 + 0x10),
                              local_260._4_4_ * (int)local_260 * 4);
          if (iVar10 == 0) goto LAB_144e8988a;
          FUN_144e8af50(param_1,lVar11);
          pcVar6 = local_248;
          local_288 = (char *)CONCAT44(local_288._4_4_,uVar13);
          pcVar8 = "Attribute \'%s\': Unable to read preview data (%d bytes)";
          goto LAB_144e89862;
        }
        goto LAB_144e8986e;
      }
      iVar10 = (**(code **)(param_1 + 0x48))
                         (param_1,iVar10,"Attribute \'%s\': Unable to read preview sizes",local_248)
      ;
    }
    goto LAB_144e8986a;
  case 0x12:
  case 0x16:
  case 0x17:
  case 0x18:
    lVar11 = *(longlong *)(local_258 + 0x18);
    if (local_268 == 8) goto LAB_144e891a9;
    local_270 = 8;
    local_278 = (longlong *)CONCAT44(uVar2,2);
LAB_144e89046:
    pcVar6 = "Attribute \'%s\': Invalid size %d (exp \'%s\' size 4 * %d (%d))";
LAB_144e8904d:
    local_280 = (undefined8 *)((longlong)acStack_149 + 1);
    local_288 = (char *)CONCAT44(local_288._4_4_,local_268);
    iVar10 = (**(code **)(param_1 + 0x48))(param_1,0x11,pcVar6,local_248);
    goto LAB_144e8986a;
  case 0x13:
    lVar15 = (longlong)(int)local_268;
    uVar7 = *(undefined8 *)(local_258 + 0x18);
    iVar10 = (**(code **)(param_4 + 0x20))(param_4,local_250,lVar15);
    if (iVar10 == 0) {
      *(undefined1 *)(lVar15 + lVar11) = 0;
      iVar10 = FUN_144e83c80(param_1,uVar7,lVar11,uVar13);
      uVar9 = local_260;
    }
    else {
      local_288 = (char *)((longlong)acStack_149 + 1);
      iVar10 = (**(code **)(param_1 + 0x48))
                         (param_1,iVar10,"Unable to read \'%s\' %s data",local_248);
      uVar9 = local_260;
    }
    goto LAB_144e8986a;
  case 0x14:
    local_280 = (undefined8 *)CONCAT44(local_280._4_4_,local_268);
    local_288 = (char *)((longlong)acStack_149 + 1);
    iVar10 = FUN_144e87520(param_1,param_4,*(undefined8 *)(local_258 + 0x18),local_248);
    goto LAB_144e8986a;
  case 0x15:
    lVar11 = *(longlong *)(local_258 + 0x18);
    if (local_268 != 9) {
      local_280 = (undefined8 *)((longlong)acStack_149 + 1);
      local_278 = (longlong *)CONCAT44(uVar2,9);
      local_288 = (char *)CONCAT44(local_288._4_4_,local_268);
      iVar10 = (**(code **)(param_1 + 0x48))
                         (param_1,0x11,"Attribute \'%s\': Invalid size %d (exp \'%s\' size %d)",
                          local_248);
      goto LAB_144e8986a;
    }
    iVar10 = (**(code **)(param_4 + 0x20))(param_4,lVar11,9);
    if (iVar10 == 0) {
      bVar1 = *(byte *)(lVar11 + 8);
      if ((bVar1 & 0xf) < 3) {
        if ((bVar1 & 0xf0) < 0x20) goto LAB_144e8988a;
        pcVar6 = local_248;
        pcVar8 = "Attribute \'%s\': Invalid tile rounding specification encountered: found enum %d";
        local_288 = (char *)CONCAT44(local_288._4_4_,(uint)(bVar1 >> 4));
        iVar10 = 0xe;
      }
      else {
        pcVar6 = local_248;
        pcVar8 = "Attribute \'%s\': Invalid tile level specification encountered: found enum %d";
        local_288 = (char *)(CONCAT44(local_288._4_4_,(uint)bVar1) & 0xffffffff0000000f);
        iVar10 = 0xe;
      }
      goto LAB_144e89862;
    }
    goto LAB_144e89083;
  case 0x19:
    lVar11 = *(longlong *)(local_258 + 0x18);
    if (local_268 != 0x10) {
      local_270 = 0x10;
      pcVar6 = "Attribute \'%s\': Invalid size %d (exp \'%s\' size 8 * %d (%d))";
      local_278 = (longlong *)CONCAT44(uVar2,2);
      goto LAB_144e8904d;
    }
LAB_144e8906f:
    uVar7 = 0x10;
    break;
  case 0x1a:
  case 0x1b:
    lVar11 = *(longlong *)(local_258 + 0x18);
    if (local_268 != 0xc) {
      local_270 = 0xc;
      local_278 = (longlong *)CONCAT44(uVar2,3);
      goto LAB_144e89046;
    }
    uVar7 = 0xc;
    break;
  case 0x1c:
    lVar11 = *(longlong *)(local_258 + 0x18);
    if (local_268 != 0x18) {
      local_270 = 0x18;
      pcVar6 = "Attribute \'%s\': Invalid size %d (exp \'%s\' size 8 * %d (%d))";
      local_278 = (longlong *)CONCAT44(uVar2,3);
      goto LAB_144e8904d;
    }
    uVar7 = 0x18;
    break;
  case 0x1d:
    lVar15 = (longlong)(int)local_268;
    lVar11 = *(longlong *)(local_258 + 0x18);
    if ((int)local_268 < 0) {
      pcVar6 = "Attribute \'%s\', type \'%s\': Invalid negative size %d";
LAB_144e897c2:
      local_288 = (char *)((longlong)acStack_149 + 1);
      local_280 = (undefined8 *)CONCAT44(local_280._4_4_,local_268);
      iVar10 = (**(code **)(param_1 + 0x48))(param_1,0x11,pcVar6,local_248);
      if (iVar10 != 0) goto LAB_144e8986e;
    }
    else if (((0 < *(longlong *)(param_1 + 0x98)) && (*(longlong *)(param_4 + 0x10) < lVar15)) &&
            (*(longlong *)(param_1 + 0x98) <
             (*(longlong *)(param_4 + 0x18) - *(longlong *)(param_4 + 0x10)) + lVar15)) {
      pcVar6 = "Attribute \'%s\', type \'%s\': Invalid size %d";
      goto LAB_144e897c2;
    }
    FUN_144e8ade0(param_1,lVar11);
    iVar10 = FUN_144e8acf0(param_1,lVar11,lVar15);
    if (iVar10 == 0) {
      iVar10 = (**(code **)(param_4 + 0x20))(param_4,*(undefined8 *)(lVar11 + 0x10),lVar15);
      if (iVar10 == 0) goto LAB_144e8988a;
      FUN_144e8ade0(param_1,lVar11);
      local_288 = (char *)((longlong)acStack_149 + 1);
      local_280 = (undefined8 *)CONCAT44(local_280._4_4_,uVar13);
      iVar10 = (**(code **)(param_1 + 0x48))
                         (param_1,10,"Attribute \'%s\': Unable to read opaque %s data (%d bytes)",
                          local_248);
      goto LAB_144e8986a;
    }
    goto LAB_144e8986e;
  }
  iVar10 = (**(code **)(param_4 + 0x20))(param_4,lVar11,uVar7);
  if (iVar10 != 0) {
LAB_144e89083:
    local_288 = (char *)((longlong)acStack_149 + 1);
    pcVar6 = local_248;
    pcVar8 = "Unable to read \'%s\' %s data";
LAB_144e89862:
    iVar10 = (**(code **)(param_1 + 0x48))(param_1,iVar10,pcVar8,pcVar6);
LAB_144e8986a:
    if (iVar10 != 0) {
LAB_144e8986e:
      FUN_144e84cd0(param_1,uVar9 + 8,local_258);
    }
  }
LAB_144e8988a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_2a8);
}



// FUNCTION 144e89930 FUN_144e89930 body=300 status=ok
// SIG undefined FUN_144e89930(void)

ulonglong FUN_144e89930(longlong param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int local_res8;
  uint uStackX_c;
  undefined8 local_res20;
  undefined8 local_28 [2];
  
  local_28[0] = 0;
  local_res20 = 0;
  uVar1 = (**(code **)(param_1 + 0x28))(param_1,&local_res8,8,local_28,&local_res20,0);
  if (uVar1 != 0) {
    (**(code **)(param_1 + 0x40))(param_1,10,"Unable to read magic and version flags");
    return (ulonglong)uVar1;
  }
  *param_3 = 8;
  if (local_res8 != 0x1312f76) {
    uVar2 = (**(code **)(param_1 + 0x48))
                      (param_1,6,"File is not an OpenEXR file: magic 0x%08X (%d) flags 0x%08X",
                       CONCAT44(uStackX_c,local_res8),local_res8,uStackX_c);
    return uVar2;
  }
  *(char *)(param_1 + 1) = (char)uStackX_c;
  if ((char)uStackX_c != '\x02') {
    uVar2 = (**(code **)(param_1 + 0x48))
                      (param_1,6,"File is of an unsupported version: %d, magic 0x%08X flags 0x%08X",
                       uStackX_c & 0xff,0x1312f76,uStackX_c);
    return uVar2;
  }
  if ((uStackX_c & 0xffffe100) != 0) {
    uVar2 = (**(code **)(param_1 + 0x48))
                      (param_1,6,"File has an unsupported flags: magic 0x%08X flags 0x%08X",
                       0x1312f76,uStackX_c);
    return uVar2;
  }
  *param_2 = uStackX_c & 0xffffff00;
  return 0;
}



// FUNCTION 144e89a60 FUN_144e89a60 body=126 status=ok
// SIG undefined FUN_144e89a60(void)

void FUN_144e89a60(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_144e89ae0(param_1,param_2,*(char *)(param_1 + 6) == '\0');
  if (iVar1 == 0) {
    iVar1 = FUN_144e89f00(param_1,param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_144e8a1d0(param_1,param_2,*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x18));
      if (iVar1 == 0) {
        iVar1 = FUN_144e8a430(param_1,param_2);
        if (iVar1 == 0) {
          iVar1 = FUN_144e8a4e0(param_1,param_2);
          if (iVar1 == 0) {
            FUN_144e8a6c0(param_1,param_2);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 144e89ae0 FUN_144e89ae0 body=1041 status=ok
// SIG undefined FUN_144e89ae0(void)

ulonglong FUN_144e89ae0(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar4 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144e89b1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_1 + 0x48))(param_1,0xd,"\'channels\' attribute not found");
    return uVar4;
  }
  if (*(longlong *)(param_2 + 0x28) == 0) {
    if (param_3 == 0) {
      uVar4 = (**(code **)(param_1 + 0x48))(param_1,0xd,"\'compression\' attribute not found");
      return uVar4;
    }
    uVar5 = FUN_144e848c0(param_1,param_2 + 8,"compression",5,0,0,(longlong *)(param_2 + 0x28));
    uVar4 = uVar5 & 0xffffffff;
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    *(undefined1 *)(*(longlong *)(param_2 + 0x28) + 0x18) = 3;
    *(undefined4 *)(param_2 + 0xb0) = 3;
  }
  lVar6 = param_2 + 8;
  plVar1 = (longlong *)(param_2 + 0x30);
  if (*plVar1 == 0) {
    if (param_3 == 0) {
      uVar4 = (**(code **)(param_1 + 0x48))(param_1,0xd,"\'dataWindow\' attribute not found");
      return uVar4;
    }
    uVar4 = FUN_144e848c0(param_1,lVar6,"dataWindow",1,0,0,plVar1);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    puVar2 = *(undefined8 **)(*plVar1 + 0x18);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0x3f;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0x3f;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined8 *)(param_2 + 0x98) = 0x3f0000003f;
    uVar3 = FUN_144e867e0(param_1,param_2,1);
    uVar4 = (ulonglong)uVar3;
  }
  if (*(longlong *)(param_2 + 0x38) == 0) {
    if (param_3 == 0) {
      uVar4 = (**(code **)(param_1 + 0x48))(param_1,0xd,"\'displayWindow\' attribute not found");
      return uVar4;
    }
    uVar5 = FUN_144e848c0(param_1,lVar6,"displayWindow",1,0,0,(longlong *)(param_2 + 0x38));
    uVar4 = uVar5 & 0xffffffff;
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    puVar2 = *(undefined8 **)(*(longlong *)(param_2 + 0x38) + 0x18);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0x3f;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0x3f;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined8 *)(param_2 + 0xa8) = 0x3f0000003f;
  }
  if (*(longlong *)(param_2 + 0x40) == 0) {
    if (param_3 == 0) {
      uVar4 = (**(code **)(param_1 + 0x48))(param_1,0xd,"\'lineOrder\' attribute not found");
      return uVar4;
    }
    uVar5 = FUN_144e848c0(param_1,lVar6,"lineOrder",0xc,0,0,(longlong *)(param_2 + 0x40));
    uVar4 = uVar5 & 0xffffffff;
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    *(undefined1 *)(*(longlong *)(param_2 + 0x40) + 0x18) = 0;
    *(undefined4 *)(param_2 + 0xb4) = 0;
  }
  if (*(longlong *)(param_2 + 0x48) == 0) {
    if (param_3 == 0) {
      uVar4 = (**(code **)(param_1 + 0x48))(param_1,0xd,"\'pixelAspectRatio\' attribute not found");
      return uVar4;
    }
    uVar5 = FUN_144e848c0(param_1,lVar6,"pixelAspectRatio",8,0,0,(longlong *)(param_2 + 0x48));
    uVar4 = uVar5 & 0xffffffff;
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    *(undefined4 *)(*(longlong *)(param_2 + 0x48) + 0x18) = 0x3f800000;
  }
  if (*(longlong *)(param_2 + 0x50) == 0) {
    if (param_3 == 0) {
      uVar4 = (**(code **)(param_1 + 0x48))
                        (param_1,0xd,"\'screenWindowCenter\' attribute not found");
      return uVar4;
    }
    uVar5 = FUN_144e848c0(param_1,lVar6,"screenWindowCenter",0x18,0,0,(longlong *)(param_2 + 0x50));
    uVar4 = uVar5 & 0xffffffff;
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    **(undefined8 **)(*(longlong *)(param_2 + 0x50) + 0x18) = 0;
  }
  if (*(longlong *)(param_2 + 0x58) == 0) {
    if (param_3 == 0) {
      uVar4 = (**(code **)(param_1 + 0x48))(param_1,0xd,"\'screenWindowWidth\' attribute not found")
      ;
      return uVar4;
    }
    uVar5 = FUN_144e848c0(param_1,lVar6,"screenWindowWidth",8,0,0,(longlong *)(param_2 + 0x58));
    uVar4 = uVar5 & 0xffffffff;
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    *(undefined4 *)(*(longlong *)(param_2 + 0x58) + 0x18) = 0x3f800000;
  }
  if (*(char *)(param_1 + 5) == '\0') {
    if (*(char *)(param_1 + 4) == '\0') {
      return uVar4;
    }
  }
  else if (*(longlong *)(param_2 + 0x68) == 0) {
    uVar4 = (**(code **)(param_1 + 0x48))
                      (param_1,0xd,"\'name\' attribute for multipart file not found");
    return uVar4;
  }
  if (*(longlong *)(param_2 + 0x70) == 0) {
    uVar4 = (**(code **)(param_1 + 0x48))(param_1,0xd,"\'type\' attribute for v2+ file not found");
  }
  else if ((*(char *)(param_1 + 4) == '\0') || (*(longlong *)(param_2 + 0x78) != 0)) {
    if (*(longlong *)(param_2 + 0x80) == 0) {
      uVar4 = (**(code **)(param_1 + 0x48))
                        (param_1,0xd,"\'chunkCount\' attribute for multipart / deep file not found")
      ;
    }
  }
  else {
    uVar4 = (**(code **)(param_1 + 0x48))
                      (param_1,0xd,"\'version\' attribute for deep file not found");
  }
  return uVar4;
}



// FUNCTION 144e89f00 FUN_144e89f00 body=714 status=ok
// SIG undefined FUN_144e89f00(void)

undefined8 FUN_144e89f00(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  char *pcVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  
  auVar3 = *(undefined1 (*) [16])(param_2 + 0x90);
  iVar7 = auVar3._0_4_;
  iVar8 = auVar3._4_4_;
  iVar5 = *(int *)(param_1 + 0x68);
  auVar4 = *(undefined1 (*) [16])(param_2 + 0xa0);
  iVar9 = auVar4._4_4_;
  uVar15 = auVar4._0_8_;
  iVar6 = *(int *)(param_1 + 0x6c);
  fVar1 = *(float *)(*(longlong *)(param_2 + 0x48) + 0x18);
  iVar18 = (int)((ulonglong)*(undefined8 *)(param_2 + 0x98) >> 0x20);
  fVar2 = *(float *)(*(longlong *)(param_2 + 0x58) + 0x18);
  iVar19 = (int)*(undefined8 *)(param_2 + 0x98);
  lVar13 = ((longlong)iVar18 - (longlong)iVar8) + 1;
  lVar17 = ((longlong)iVar19 - (longlong)iVar7) + 1;
  iVar16 = (int)*(undefined8 *)(param_2 + 0xa8);
  if ((((iVar16 < auVar4._0_4_) ||
       (iVar12 = (int)((ulonglong)*(undefined8 *)(param_2 + 0xa8) >> 0x20), iVar12 < iVar9)) ||
      (auVar4._0_4_ < -0x3ffffffe)) ||
     (((iVar9 < -0x3ffffffe || (0x3ffffffe < iVar16)) || (0x3ffffffe < iVar12)))) {
    pcVar14 = "Invalid display window (%d, %d - %d, %d)";
    uVar20 = auVar4._12_4_;
  }
  else {
    if (((iVar7 <= iVar19) && (iVar8 <= iVar18)) &&
       ((-0x3fffffff < (longlong)iVar7 &&
        (((-0x3fffffff < (longlong)iVar8 && ((longlong)iVar19 < 0x3fffffff)) &&
         ((longlong)iVar18 < 0x3fffffff)))))) {
      if ((0 < iVar5) && (iVar5 < lVar17)) {
        uVar11 = (**(code **)(param_1 + 0x48))
                           (param_1,0xe,"Invalid width (%lld) too large (max %d)",lVar17,iVar5);
        return uVar11;
      }
      if ((0 < iVar6) && (iVar6 < lVar13)) {
        uVar11 = (**(code **)(param_1 + 0x48))
                           (param_1,0xe,"Invalid height (%lld) too large (max %d)",lVar13,iVar6);
        return uVar11;
      }
      if ((0 < iVar5) && (0 < iVar6)) {
        lVar13 = (longlong)iVar5 * (longlong)iVar6;
        lVar17 = 0;
        if (*(longlong *)(param_2 + 0x80) != 0) {
          lVar17 = (longlong)*(int *)(param_2 + 0xf4);
        }
        if (lVar13 < lVar17) {
          uVar11 = (**(code **)(param_1 + 0x48))
                             (param_1,0xe,"Invalid chunkCount (%lld) exceeds maximum area of %lld",
                              lVar17,lVar13);
          return uVar11;
        }
      }
      sVar10 = _fdclass();
      if (((sVar10 == -1) && (1e-06 <= fVar1)) && (fVar1 <= 1e+06)) {
        if (fVar2 < 0.0) {
          uVar11 = (**(code **)(param_1 + 0x48))
                             (param_1,0xe,"Invalid screen window width %g",(double)fVar2);
          return uVar11;
        }
        return 0;
      }
      uVar11 = (**(code **)(param_1 + 0x48))
                         (param_1,0xe,"Invalid pixel aspect ratio %g",(double)fVar1);
      return uVar11;
    }
    pcVar14 = "Invalid data window (%d, %d - %d, %d)";
    uVar15 = auVar3._0_8_ & 0xffffffff;
    uVar20 = auVar3._12_4_;
    iVar16 = iVar19;
    iVar9 = iVar8;
  }
  uVar11 = (**(code **)(param_1 + 0x48))(param_1,0xe,pcVar14,uVar15,iVar9,iVar16,uVar20);
  return uVar11;
}



// FUNCTION 144e8a1d0 FUN_144e8a1d0 body=593 status=ok
// SIG undefined FUN_144e8a1d0(void)

undefined8 FUN_144e8a1d0(longlong param_1,longlong param_2,int *param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  int *piVar11;
  longlong lVar12;
  int iStack_34;
  
  if (param_3 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144e8a1ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(param_1 + 0x40))
                      (param_1,3,"Missing required channels attribute to validate against");
    return uVar6;
  }
  if (*(longlong *)(param_2 + 0x30) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144e8a20a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(param_1 + 0x40))
                      (param_1,0xf,
                       "request to validate channel list, but data window not set to validate against"
                      );
    return uVar6;
  }
  if (*param_3 < 1) {
                    /* WARNING: Could not recover jumptable at 0x000144e8a225. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(param_1 + 0x40))(param_1,6,"At least one channel required");
    return uVar6;
  }
  auVar1 = *(undefined1 (*) [16])(param_2 + 0x90);
  iVar5 = auVar1._0_4_;
  lVar4 = *(longlong *)(param_3 + 2);
  piVar11 = (int *)(lVar4 + 0x1c);
  iStack_34 = auVar1._4_4_;
  lVar12 = ((longlong)auVar1._8_4_ - (longlong)iVar5) + 1;
  lVar8 = ((longlong)auVar1._12_4_ - (longlong)iStack_34) + 1;
  iVar7 = 0;
  lVar9 = 0;
  do {
    iVar2 = piVar11[-1];
    iVar3 = *piVar11;
    if (iVar2 < 1) {
      pcVar10 = "channel \'%s\': x subsampling factor is invalid (%d)";
LAB_144e8a3d9:
      uVar6 = (**(code **)(param_1 + 0x48))
                        (param_1,0xe,pcVar10,*(undefined8 *)((longlong)iVar7 * 0x20 + 8 + lVar4),
                         iVar2);
      return uVar6;
    }
    if (iVar3 < 1) {
      pcVar10 = "channel \'%s\': y subsampling factor is invalid (%d)";
      iVar2 = iVar3;
      goto LAB_144e8a3d9;
    }
    if (iVar5 % iVar2 != 0) {
      uVar6 = (**(code **)(param_1 + 0x48))
                        (param_1,0xe,
                         "channel \'%s\': minimum x coordinate (%d) of the data window is not a multiple of the x subsampling factor (%d)"
                         ,*(undefined8 *)((longlong)iVar7 * 0x20 + 8 + lVar4),iVar5,iVar2);
      return uVar6;
    }
    if (iStack_34 % iVar3 != 0) {
      uVar6 = (**(code **)(param_1 + 0x48))
                        (param_1,0xe,
                         "channel \'%s\': minimum y coordinate (%d) of the data window is not a multiple of the y subsampling factor (%d)"
                         ,*(undefined8 *)((longlong)iVar7 * 0x20 + 8 + lVar4),iStack_34,iVar3);
      return uVar6;
    }
    if (lVar12 % (longlong)iVar2 != 0) {
      uVar6 = (**(code **)(param_1 + 0x48))
                        (param_1,0xe,
                         "channel \'%s\': row width (%lld) of the data window is not a multiple of the x subsampling factor (%d)"
                         ,*(undefined8 *)((longlong)iVar7 * 0x20 + 8 + lVar4),lVar12,iVar2);
      return uVar6;
    }
    if (lVar8 % (longlong)iVar3 != 0) {
      uVar6 = (**(code **)(param_1 + 0x48))
                        (param_1,0xe,
                         "channel \'%s\': column height (%lld) of the data window is not a multiple of the y subsampling factor (%d)"
                         ,*(undefined8 *)((longlong)iVar7 * 0x20 + 8 + lVar4),lVar8,iVar3);
      return uVar6;
    }
    iVar7 = iVar7 + 1;
    lVar9 = lVar9 + 1;
    piVar11 = piVar11 + 8;
    if (*param_3 <= lVar9) {
      return 0;
    }
  } while( true );
}



// FUNCTION 144e8a430 FUN_144e8a430 body=170 status=ok
// SIG undefined FUN_144e8a430(void)

undefined8 FUN_144e8a430(char *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(param_2 + 0x70) != 0) && (param_1[3] != '\0')) && (*(int *)(param_2 + 4) != 1)
     ) {
    *(undefined4 *)(param_2 + 4) = 1;
    (**(code **)(param_1 + 0x48))
              (param_1,0xe,
               "attribute \'type\': Mismatch between file flags and type string \'%s\', believing file flags"
               ,*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x70) + 0x18) + 8));
    if (*param_1 == '\x01') {
      return 0xe;
    }
    iVar1 = FUN_144e83f00(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x18),"tiledimage"
                          ,10);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000144e8a4ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(param_1 + 0x48))
                        (param_1,0xe,
                         "attribute \'type\': Mismatch between file flags and type attribute, unable to fix"
                        );
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 144e8a4e0 FUN_144e8a4e0 body=475 status=ok
// SIG undefined FUN_144e8a4e0(void)

undefined8 FUN_144e8a4e0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  undefined8 uVar7;
  int *piVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  char *pcVar12;
  longlong lVar13;
  uint uVar14;
  
  if ((*(int *)(param_2 + 4) - 1U & 0xfffffffd) != 0) {
    return 0;
  }
  uVar14 = *(uint *)(param_1 + 0x70);
  uVar1 = *(uint *)(param_1 + 0x74);
  piVar8 = *(int **)(*(longlong *)(param_2 + 0x20) + 0x18);
  if (*(longlong *)(param_2 + 0x60) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144e8a52a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(param_1 + 0x48))
                      (param_1,0xd,"\'tiles\' attribute for tiled file not found");
    return uVar7;
  }
  puVar5 = *(uint **)(*(longlong *)(param_2 + 0x60) + 0x18);
  uVar2 = *puVar5;
  bVar10 = (byte)puVar5[2] & 0xf;
  bVar6 = (byte)puVar5[2] >> 4;
  if ((((uVar2 == 0) || (uVar3 = puVar5[1], uVar3 == 0)) || (0x1fffffff < uVar2)) ||
     (0x1fffffff < uVar3)) {
    uVar14 = puVar5[1];
    pcVar12 = "Invalid tile description size (%u x %u)";
  }
  else {
    if ((((int)uVar14 < 1) || ((int)uVar2 <= (int)uVar14)) &&
       (((int)uVar1 < 1 || (uVar2 = uVar3, uVar14 = uVar1, (int)uVar3 <= (int)uVar1)))) {
      if (2 < bVar10) {
                    /* WARNING: Could not recover jumptable at 0x000144e8a6a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(param_1 + 0x48))
                          (param_1,0xe,"Invalid level mode (%d) in tile description header",bVar10);
        return uVar7;
      }
      if (bVar6 < 2) {
        iVar4 = *piVar8;
        iVar11 = 0;
        if (iVar4 < 1) {
          return 0;
        }
        lVar13 = *(longlong *)(piVar8 + 2);
        lVar9 = 0;
        piVar8 = (int *)(lVar13 + 0x1c);
        while( true ) {
          if (piVar8[-1] != 1) {
            lVar13 = lVar13 + (longlong)iVar11 * 0x20;
            uVar7 = (**(code **)(param_1 + 0x48))
                              (param_1,0xe,
                               "channel \'%s\': x subsampling factor is not 1 (%d) for a tiled image"
                               ,*(undefined8 *)(lVar13 + 8),*(undefined4 *)(lVar13 + 0x18));
            return uVar7;
          }
          if (*piVar8 != 1) break;
          iVar11 = iVar11 + 1;
          lVar9 = lVar9 + 1;
          piVar8 = piVar8 + 8;
          if (iVar4 <= lVar9) {
            return 0;
          }
        }
        lVar13 = lVar13 + (longlong)iVar11 * 0x20;
        uVar7 = (**(code **)(param_1 + 0x48))
                          (param_1,0xe,
                           "channel \'%s\': y subsampling factor is not 1 (%d) for a tiled image",
                           *(undefined8 *)(lVar13 + 8),*(undefined4 *)(lVar13 + 0x1c));
        return uVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x000144e8a681. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)(param_1 + 0x48))
                        (param_1,0xe,"Invalid rounding mode (%d) in tile description header",bVar6);
      return uVar7;
    }
    pcVar12 = "Width of tile exceeds max size (%d vs max %d)";
  }
  uVar7 = (**(code **)(param_1 + 0x48))(param_1,0xe,pcVar12,uVar2,uVar14);
  return uVar7;
}



// FUNCTION 144e8a6c0 FUN_144e8a6c0 body=204 status=ok
// SIG undefined FUN_144e8a6c0(void)

undefined8 FUN_144e8a6c0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (*(int *)(param_2 + 4) - 2U < 2) {
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x20) + 0x18);
    if (2 < *(uint *)(param_2 + 0xb0)) {
                    /* WARNING: Could not recover jumptable at 0x000144e8a6f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(param_1 + 0x40))(param_1,0xe,"Invalid compression for deep data");
      return uVar2;
    }
    iVar1 = *piVar3;
    uVar4 = 0;
    if (0 < iVar1) {
      lVar7 = *(longlong *)(piVar3 + 2);
      piVar3 = (int *)(lVar7 + 0x1c);
      uVar6 = uVar4;
      do {
        iVar5 = (int)uVar6;
        if (piVar3[-1] != 1) {
          lVar7 = lVar7 + (longlong)iVar5 * 0x20;
          uVar2 = (**(code **)(param_1 + 0x48))
                            (param_1,0xe,
                             "channel \'%s\': x subsampling factor is not 1 (%d) for a deep image",
                             *(undefined8 *)(lVar7 + 8),*(undefined4 *)(lVar7 + 0x18));
          return uVar2;
        }
        if (*piVar3 != 1) {
          lVar7 = lVar7 + (longlong)iVar5 * 0x20;
          uVar2 = (**(code **)(param_1 + 0x48))
                            (param_1,0xe,
                             "channel \'%s\': y subsampling factor is not 1 (%d) for a deep image",
                             *(undefined8 *)(lVar7 + 8),*(undefined4 *)(lVar7 + 0x1c));
          return uVar2;
        }
        uVar6 = (ulonglong)(iVar5 + 1);
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 8;
      } while ((longlong)uVar4 < (longlong)iVar1);
    }
  }
  return 0;
}



// FUNCTION 144e8a790 FUN_144e8a790 body=852 status=ok
// SIG undefined FUN_144e8a790(void)

void FUN_144e8a790(longlong param_1,int *param_2,byte *param_3,int param_4,uint param_5,uint param_6
                  ,int param_7,int param_8)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_a8 [32];
  byte *local_88;
  byte *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  int iStack_60;
  int iStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  iStack_60 = 0;
  iStack_5c = 0;
  if (param_1 != 0) {
    if (param_2 == (int *)0x0) {
      (**(code **)(param_1 + 0x40))(0,3,"Invalid channel list pointer to chlist_add_with_length");
    }
    else if (((param_3 == (byte *)0x0) || (*param_3 == 0)) || (param_4 == 0)) {
      pbVar12 = (byte *)"<NULL>";
      if (param_3 != (byte *)0x0) {
        pbVar12 = param_3;
      }
      (**(code **)(param_1 + 0x48))(0,3,"Channel name must not be empty, received \'%s\'",pbVar12);
    }
    else if ((int)(uint)*(byte *)(param_1 + 2) < param_4) {
      local_80 = (byte *)CONCAT44(local_80._4_4_,param_4);
      local_88 = param_3;
      (**(code **)(param_1 + 0x48))
                (0,0xc,
                 "Channel name must shorter than length allowed by file (%d), received \'%s\' (%d)")
      ;
    }
    else if (param_5 < 3) {
      if (param_6 < 2) {
        if ((param_7 < 1) || (param_8 < 1)) {
          local_88 = (byte *)CONCAT44(local_88._4_4_,param_8);
          local_80 = param_3;
          (**(code **)(param_1 + 0x48))
                    (param_1,3,"Invalid pixel sampling (x %d y %d) adding channel \'%s\' to list",
                     param_7);
        }
        else {
          iVar18 = 0;
          puVar4 = *(undefined4 **)(param_2 + 2);
          if (0 < *param_2) {
            plVar20 = (longlong *)(puVar4 + 2);
            iVar18 = 0;
            do {
              pbVar12 = param_3;
              do {
                bVar3 = *pbVar12;
                if (bVar3 != pbVar12[*plVar20 - (longlong)param_3]) {
                  uVar10 = -(uint)(bVar3 < pbVar12[*plVar20 - (longlong)param_3]) | 1;
                  goto LAB_144e8a8f8;
                }
                pbVar12 = pbVar12 + 1;
              } while (bVar3 != 0);
              uVar10 = 0;
LAB_144e8a8f8:
              if ((int)uVar10 < 0) break;
              if (uVar10 == 0) {
                (**(code **)(param_1 + 0x48))
                          (param_1,3,"Attempt to add duplicate channel \'%s\' to channel list",
                           param_3);
                goto LAB_144e8a9ce;
              }
              iVar18 = iVar18 + 1;
              plVar20 = plVar20 + 4;
            } while (iVar18 < *param_2);
          }
          iVar11 = FUN_144e83ce0(param_1,&local_78,param_3,param_4);
          if (iVar11 == 0) {
            iVar11 = *param_2;
            lVar22 = (longlong)iVar11;
            iStack_60 = param_7;
            iStack_5c = param_8;
            iVar17 = iVar11 + 1;
            local_68._0_5_ = CONCAT14((char)param_6,param_5);
            if (param_2[1] < iVar17) {
              iVar5 = param_2[1] * 2;
              iVar11 = iVar11 + 2;
              if (iVar17 <= iVar5) {
                iVar11 = iVar5;
              }
              puVar13 = (undefined4 *)(**(code **)(param_1 + 0x58))((longlong)iVar11 << 5);
              if (puVar13 == (undefined4 *)0x0) {
                FUN_144e83fe0(param_1,&local_78);
                (**(code **)(param_1 + 0x38))(param_1,1);
                goto LAB_144e8a9ce;
              }
              param_2[1] = iVar11;
            }
            else {
              puVar13 = *(undefined4 **)(param_2 + 2);
            }
            lVar16 = (longlong)iVar18;
            lVar21 = (longlong)puVar4 - (longlong)puVar13;
            if (lVar16 < lVar22) {
              lVar19 = lVar22 - lVar16;
              puVar14 = (undefined8 *)(puVar13 + lVar22 * 8);
              do {
                puVar2 = (undefined8 *)(lVar21 + -0x20 + (longlong)puVar14);
                uVar9 = puVar2[1];
                *puVar14 = *puVar2;
                puVar14[1] = uVar9;
                puVar2 = (undefined8 *)(lVar21 + 0x10 + (longlong)(puVar14 + -4));
                uVar9 = puVar2[1];
                puVar14[2] = *puVar2;
                puVar14[3] = uVar9;
                lVar19 = lVar19 + -1;
                puVar14 = puVar14 + -4;
              } while (lVar19 != 0);
            }
            puVar15 = puVar13 + lVar16 * 8;
            *puVar15 = (undefined4)local_78;
            puVar15[1] = local_78._4_4_;
            puVar15[2] = (undefined4)uStack_70;
            puVar15[3] = uStack_70._4_4_;
            puVar15 = puVar13 + lVar16 * 8 + 4;
            *puVar15 = (undefined4)local_68;
            puVar15[1] = local_68._4_4_;
            puVar15[2] = iStack_60;
            puVar15[3] = iStack_5c;
            if ((puVar13 == puVar4) || (puVar15 = puVar13, iVar18 < 1)) {
              *param_2 = iVar17;
              *(undefined4 **)(param_2 + 2) = puVar13;
              if (puVar13 != puVar4) {
                (**(code **)(param_1 + 0x60))(puVar4);
              }
            }
            else {
              do {
                puVar1 = (undefined4 *)(lVar21 + (longlong)puVar15);
                uVar6 = puVar1[1];
                uVar7 = puVar1[2];
                uVar8 = puVar1[3];
                *puVar15 = *puVar1;
                puVar15[1] = uVar6;
                puVar15[2] = uVar7;
                puVar15[3] = uVar8;
                puVar1 = (undefined4 *)(lVar21 + -0x10 + (longlong)(puVar15 + 8));
                uVar6 = puVar1[1];
                uVar7 = puVar1[2];
                uVar8 = puVar1[3];
                puVar15[4] = *puVar1;
                puVar15[5] = uVar6;
                puVar15[6] = uVar7;
                puVar15[7] = uVar8;
                lVar16 = lVar16 + -1;
                puVar15 = puVar15 + 8;
              } while (lVar16 != 0);
              *param_2 = iVar17;
              *(undefined4 **)(param_2 + 2) = puVar13;
              (**(code **)(param_1 + 0x60))(puVar4);
            }
          }
        }
      }
      else {
        local_88 = param_3;
        (**(code **)(param_1 + 0x48))
                  (0,3,"Invalid perceptual linear flag value (%d) adding channel \'%s\' to list",
                   param_6);
      }
    }
    else {
      local_88 = param_3;
      (**(code **)(param_1 + 0x48))
                (0,3,"Invalid pixel type specified (%d) adding channel \'%s\' to list",param_5);
    }
  }
LAB_144e8a9ce:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144e8aaf0 FUN_144e8aaf0 body=148 status=ok
// SIG undefined FUN_144e8aaf0(void)

undefined4 FUN_144e8aaf0(longlong param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != 0) {
    if (param_2 != (uint *)0x0) {
      lVar1 = *(longlong *)(param_2 + 2);
      if (0 < (int)*param_2) {
        uVar3 = (ulonglong)*param_2;
        lVar2 = lVar1;
        do {
          FUN_144e83fe0(param_1,lVar2);
          lVar2 = lVar2 + 0x20;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      if (lVar1 != 0) {
        (**(code **)(param_1 + 0x60))(lVar1);
      }
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
    }
    return 0;
  }
  return 2;
}



// FUNCTION 144e8ab90 FUN_144e8ab90 body=263 status=ok
// SIG undefined FUN_144e8ab90(void)

undefined8 FUN_144e8ab90(longlong param_1,int *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 2;
  }
  if (param_3 < 0) {
                    /* WARNING: Could not recover jumptable at 0x000144e8abf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x48))
                      (param_1,3,
                       "Received request to allocate negative sized float vector (%d entries)",
                       param_3);
    return uVar1;
  }
  if (0x7fffffff < (ulonglong)((longlong)param_3 << 2)) {
                    /* WARNING: Could not recover jumptable at 0x000144e8ac25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x48))
                      (param_1,3,"Invalid too large size for float vector (%d entries)",param_3);
    return uVar1;
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144e8ac4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x40))
                      (param_1,3,"Invalid reference to float vector object to initialize");
    return uVar1;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if ((longlong)param_3 << 2 != 0) {
    lVar2 = (**(code **)(param_1 + 0x58))();
    *(longlong *)(param_2 + 2) = lVar2;
    if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144e8ac7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x38))(param_1,1);
      return uVar1;
    }
    *param_2 = param_3;
    param_2[1] = param_3;
  }
  return 0;
}



// FUNCTION 144e8aca0 FUN_144e8aca0 body=66 status=ok
// SIG undefined FUN_144e8aca0(void)

undefined4 FUN_144e8aca0(longlong param_1,undefined8 *param_2)

{
  if (param_1 == 0) {
    return 2;
  }
  if (param_2 != (undefined8 *)0x0) {
    if ((param_2[1] != 0) && (0 < *(int *)((longlong)param_2 + 4))) {
      (**(code **)(param_1 + 0x60))();
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return 0;
}



// FUNCTION 144e8acf0 FUN_144e8acf0 body=228 status=ok
// SIG undefined FUN_144e8acf0(void)

undefined8 FUN_144e8acf0(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 2;
  }
  if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144e8ad48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x40))
                      (0,3,"Invalid reference to opaque data object to initialize");
    return uVar1;
  }
  if (0x7fffffff < param_3) {
                    /* WARNING: Could not recover jumptable at 0x000144e8ad73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x48))
                      (0,3,"Invalid size for opaque data (%llu bytes, must be <= INT32_MAX)",param_3
                      );
    return uVar1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  if (param_3 != 0) {
    lVar2 = (**(code **)(param_1 + 0x58))(param_3);
    param_2[2] = lVar2;
    if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144e8adba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 0x38))(param_1,1);
      return uVar1;
    }
  }
  *(int *)param_2 = (int)param_3;
  *(int *)(param_2 + 1) = (int)param_3;
  return 0;
}



// FUNCTION 144e8ade0 FUN_144e8ade0 body=129 status=ok
// SIG undefined FUN_144e8ade0(void)

undefined4 FUN_144e8ade0(longlong param_1,undefined8 *param_2)

{
  if (param_1 == 0) {
    return 2;
  }
  if (param_2 != (undefined8 *)0x0) {
    if ((param_2[2] != 0) && (0 < *(int *)(param_2 + 1))) {
      (**(code **)(param_1 + 0x60))();
    }
    if ((param_2[3] != 0) && ((code *)param_2[6] != (code *)0x0)) {
      (*(code *)param_2[6])(param_1,param_2[3],*(undefined4 *)((longlong)param_2 + 4));
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
  }
  return 0;
}



// FUNCTION 144e8ae70 FUN_144e8ae70 body=211 status=ok
// SIG undefined FUN_144e8ae70(void)

undefined8 FUN_144e8ae70(longlong param_1,uint *param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_3 * (ulonglong)param_4 * 4;
  if (param_1 == 0) {
    uVar1 = 2;
  }
  else if (uVar3 < 0x80000000) {
    if (param_2 == (uint *)0x0) {
      uVar1 = (**(code **)(param_1 + 0x40))(0,3,"Invalid reference to preview object to initialize")
      ;
    }
    else {
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      if (uVar3 != 0) {
        lVar2 = (**(code **)(param_1 + 0x58))(uVar3);
        *(longlong *)(param_2 + 4) = lVar2;
        if (lVar2 == 0) {
          uVar1 = (**(code **)(param_1 + 0x38))(param_1,1);
          return uVar1;
        }
        *(ulonglong *)(param_2 + 2) = uVar3;
        *param_2 = param_3;
        param_2[1] = param_4;
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x48))
                      (0,3,"Invalid very large size for preview image (%u x %u - %llu bytes)",
                       param_3,param_4,uVar3);
  }
  return uVar1;
}



// FUNCTION 144e8af50 FUN_144e8af50 body=85 status=ok
// SIG undefined FUN_144e8af50(void)

undefined4 FUN_144e8af50(longlong param_1,undefined8 *param_2)

{
  if (param_1 == 0) {
    return 2;
  }
  if (param_2 != (undefined8 *)0x0) {
    if ((param_2[2] != 0) && (param_2[1] != 0)) {
      (**(code **)(param_1 + 0x60))();
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return 0;
}



// FUNCTION 144e8afb0 FUN_144e8afb0 body=130 status=ok
// SIG undefined FUN_144e8afb0(void)

undefined4 FUN_144e8afb0(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (param_2 != (int *)0x0) {
      if (0 < param_2[1]) {
        iVar2 = 0;
        lVar1 = *(longlong *)(param_2 + 2);
        if (0 < *param_2) {
          do {
            FUN_144e83fe0(param_1,(longlong)iVar2 * 0x10 + lVar1);
            iVar2 = iVar2 + 1;
          } while (iVar2 < *param_2);
        }
        if (lVar1 != 0) {
          (**(code **)(param_1 + 0x60))(lVar1);
        }
      }
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
    }
    return 0;
  }
  return 2;
}



// FUNCTION 144e8b040 FUN_144e8b040 body=105 status=ok
// SIG undefined FUN_144e8b040(void)

undefined8 * FUN_144e8b040(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0x12) = 0x81;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *param_1 = FUN_144e8b0b0;
  param_1[1] = FUN_144e8b140;
  param_1[2] = FUN_144e8b0e0;
  param_1[3] = FUN_144e8b190;
  param_1[4] = &LAB_144e8b2a0;
  param_1[0x11] = &PTR_s_Bogus_message_code__d_149bc9000;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 144e8b0b0 FUN_144e8b0b0 body=33 status=ok
// SIG undefined FUN_144e8b0b0(void)

void FUN_144e8b0b0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_144e8d330(param_1);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



// FUNCTION 144e8b0e0 FUN_144e8b0e0 body=82 status=ok
// SIG undefined FUN_144e8b0e0(void)

void FUN_144e8b0e0(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [208];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  (**(code **)(*param_1 + 0x18))(param_1,local_e8);
  uVar1 = __acrt_iob_func(2);
  FUN_146c958a0(uVar1,&DAT_14998fa7c,local_e8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_108);
}



// FUNCTION 144e8b140 FUN_144e8b140 body=75 status=ok
// SIG undefined FUN_144e8b140(void)

void FUN_144e8b140(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if (param_2 < 0) {
    iVar2 = *(int *)(lVar1 + 0x80);
    if ((iVar2 == 0) || (2 < *(int *)(lVar1 + 0x7c))) {
      (**(code **)(lVar1 + 0x10))();
      iVar2 = *(int *)(lVar1 + 0x80);
    }
    *(int *)(lVar1 + 0x80) = iVar2 + 1;
    return;
  }
  if (param_2 <= *(int *)(lVar1 + 0x7c)) {
                    /* WARNING: Could not recover jumptable at 0x000144e8b182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 144e8b190 FUN_144e8b190 body=268 status=ok
// SIG undefined FUN_144e8b190(void)

void FUN_144e8b190(longlong *param_1,wchar_t *param_2)

{
  char *pcVar1;
  wchar_t *pwVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  wchar_t *_Format;
  bool bVar6;
  undefined8 in_stack_ffffffffffffffb8;
  
  lVar4 = *param_1;
  iVar3 = *(int *)(lVar4 + 0x28);
  if ((iVar3 < 1) || (*(int *)(lVar4 + 0x90) < iVar3)) {
    if ((*(longlong *)(lVar4 + 0x98) != 0) &&
       ((*(int *)(lVar4 + 0xa0) <= iVar3 && (iVar3 <= *(int *)(lVar4 + 0xa4))))) {
      _Format = *(wchar_t **)
                 (*(longlong *)(lVar4 + 0x98) + (longlong)(iVar3 - *(int *)(lVar4 + 0xa0)) * 8);
      goto LAB_144e8b1e5;
    }
  }
  else {
    _Format = *(wchar_t **)(*(longlong *)(lVar4 + 0x88) + (longlong)iVar3 * 8);
LAB_144e8b1e5:
    if (_Format != (wchar_t *)0x0) goto LAB_144e8b1f8;
  }
  *(int *)(lVar4 + 0x2c) = iVar3;
  _Format = (wchar_t *)**(undefined8 **)(lVar4 + 0x88);
LAB_144e8b1f8:
  cVar5 = (char)*_Format;
  pwVar2 = _Format;
  do {
    if (cVar5 == '\0') goto LAB_144e8b216;
    pcVar1 = (char *)((longlong)pwVar2 + 1);
    pwVar2 = (wchar_t *)((longlong)pwVar2 + 1);
    bVar6 = cVar5 != '%';
    cVar5 = *pcVar1;
  } while (bVar6);
  if (*pcVar1 == 's') {
    _snwprintf_s(param_2,200,0xffffffffffffffff,_Format,lVar4 + 0x2c);
    return;
  }
LAB_144e8b216:
  _snwprintf_s(param_2,200,0xffffffffffffffff,_Format,
               CONCAT44((int)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20),
                        *(undefined4 *)(lVar4 + 0x2c)),*(undefined4 *)(lVar4 + 0x30),
               *(undefined4 *)(lVar4 + 0x34),*(undefined4 *)(lVar4 + 0x38),
               *(undefined4 *)(lVar4 + 0x3c),*(undefined4 *)(lVar4 + 0x40),
               *(undefined4 *)(lVar4 + 0x44),*(undefined4 *)(lVar4 + 0x48));
  return;
}



// FUNCTION 144e8b2c0 FUN_144e8b2c0 body=331 status=ok
// SIG undefined FUN_144e8b2c0(void)

void FUN_144e8b2c0(longlong *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  param_1[1] = 0;
  if (param_2 != 0x3e) {
    *(undefined4 *)(*param_1 + 0x28) = 0xc;
    *(undefined4 *)(*param_1 + 0x2c) = 0x3e;
    *(int *)(*param_1 + 0x30) = param_2;
    (**(code **)*param_1)();
  }
  if (param_3 != 0x1f8) {
    *(undefined4 *)(*param_1 + 0x28) = 0x15;
    *(undefined4 *)(*param_1 + 0x2c) = 0x1f8;
    *(int *)(*param_1 + 0x30) = (int)param_3;
    (**(code **)*param_1)(param_1);
  }
  lVar1 = *param_1;
  lVar2 = param_1[3];
  memset(param_1,0,0x1f8);
  *param_1 = lVar1;
  param_1[3] = lVar2;
  FUN_14521fed0(param_1);
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[8] = 0x3ff0000000000000;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 9) = 8;
  *(undefined4 *)((longlong)param_1 + 0x24) = 100;
  puVar3 = (undefined8 *)(**(code **)param_1[1])(param_1,0,0x38);
  param_1[0x34] = (longlong)puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  return;
}



// FUNCTION 144e8b410 thunk_FUN_144e8d330 body=5 status=ok
// SIG undefined thunk_FUN_144e8d330(void)

void thunk_FUN_144e8d330(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 8) + 0x50))();
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 144e8b420 FUN_144e8b420 body=209 status=ok
// SIG undefined FUN_144e8b420(void)

void FUN_144e8b420(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x80) = param_2;
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0x80) = param_2;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x80) = param_2;
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x78) + 0x80) = param_2;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x111) = param_2;
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0x111) = param_2;
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x111) = param_2;
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 0x111) = param_2;
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x111) = param_2;
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 0x111) = param_2;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x98) + 0x111) = param_2;
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0xb8) + 0x111) = param_2;
  }
  return;
}



// FUNCTION 144e8b500 FUN_144e8b500 body=311 status=ok
// SIG undefined FUN_144e8b500(void)

void FUN_144e8b500(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  
  if (*(int *)((longlong)param_1 + 0x24) - 0x65U < 2) {
    if (*(uint *)(param_1 + 0x24) < *(uint *)((longlong)param_1 + 0x34)) {
      *(undefined4 *)(*param_1 + 0x28) = 0x43;
      (**(code **)*param_1)(param_1);
    }
    (**(code **)(param_1[0x34] + 0x10))(param_1);
  }
  else if (*(int *)((longlong)param_1 + 0x24) != 0x67) {
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)(param_1);
  }
  puVar1 = (undefined8 *)param_1[0x34];
  cVar3 = *(char *)((longlong)puVar1 + 0x19);
  while (cVar3 == '\0') {
    (*(code *)*puVar1)(param_1);
    uVar4 = 0;
    if ((int)param_1[0x26] != 0) {
      do {
        if (param_1[2] != 0) {
          *(uint *)(param_1[2] + 8) = uVar4;
          *(int *)(param_1[2] + 0xc) = (int)param_1[0x26];
          (**(code **)param_1[2])(param_1);
        }
        lVar2 = param_1[0x37];
        if ((int)param_1[9] == 0x10) {
          cVar3 = (**(code **)(lVar2 + 0x18))();
        }
        else if ((int)param_1[9] == 0xc) {
          cVar3 = (**(code **)(lVar2 + 0x10))();
        }
        else {
          cVar3 = (**(code **)(lVar2 + 8))(param_1,0);
        }
        if (cVar3 == '\0') {
          *(undefined4 *)(*param_1 + 0x28) = 0x18;
          (**(code **)*param_1)(param_1);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0x26));
    }
    (**(code **)(param_1[0x34] + 0x10))(param_1);
    puVar1 = (undefined8 *)param_1[0x34];
    cVar3 = *(char *)((longlong)puVar1 + 0x19);
  }
  (**(code **)(param_1[0x38] + 0x18))(param_1);
  (**(code **)(param_1[5] + 0x20))(param_1);
  FUN_144e8d2e0(param_1);
  return;
}



// FUNCTION 144e8b640 FUN_144e8b640 body=95 status=ok
// SIG undefined FUN_144e8b640(void)

void FUN_144e8b640(longlong *param_1)

{
  if (*(int *)((longlong)param_1 + 0x24) != 100) {
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)();
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)(param_1[5] + 0x10))(param_1);
  FUN_14521e9b0(param_1);
  (**(code **)(param_1[0x38] + 0x20))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000144e8b69b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[5] + 0x20))(param_1);
  return;
}



// FUNCTION 144e8b6a0 thunk_FUN_144e8d2e0 body=5 status=ok
// SIG undefined thunk_FUN_144e8d2e0(void)

void thunk_FUN_144e8d2e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 8) + 0x48))(param_1,1);
    if (*(char *)(param_1 + 0x20) != '\0') {
      *(undefined4 *)(param_1 + 0x24) = 200;
      *(undefined8 *)(param_1 + 0x170) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x24) = 100;
  }
  return;
}



// FUNCTION 144e8b6b0 FUN_144e8b6b0 body=371 status=ok
// SIG undefined FUN_144e8b6b0(void)

void FUN_144e8b6b0(longlong *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  param_1[1] = 0;
  if (param_2 != 0x3e) {
    *(undefined4 *)(*param_1 + 0x28) = 0xc;
    *(undefined4 *)(*param_1 + 0x2c) = 0x3e;
    *(int *)(*param_1 + 0x30) = param_2;
    (**(code **)*param_1)();
  }
  if (param_3 != 600) {
    *(undefined4 *)(*param_1 + 0x28) = 0x15;
    *(undefined4 *)(*param_1 + 0x2c) = 600;
    *(int *)(*param_1 + 0x30) = (int)param_3;
    (**(code **)*param_1)(param_1);
  }
  lVar1 = *param_1;
  lVar2 = param_1[3];
  memset(param_1,0,600);
  *param_1 = lVar1;
  param_1[3] = lVar2;
  *(undefined1 *)(param_1 + 4) = 1;
  FUN_14521fed0(param_1);
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x22] = 0;
  param_1[0x2e] = 0;
  FUN_145221b90(param_1);
  FUN_1452212e0(param_1);
  *(undefined4 *)(param_1 + 0x23) = 8;
  *(undefined4 *)((longlong)param_1 + 0x24) = 200;
  puVar3 = (undefined8 *)(**(code **)param_1[1])(param_1,0,0x90);
  param_1[0x40] = (longlong)puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  return;
}



// FUNCTION 144e8b830 thunk_FUN_144e8d330 body=5 status=ok
// SIG undefined thunk_FUN_144e8d330(void)

void thunk_FUN_144e8d330(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 8) + 0x50))();
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 144e8b840 FUN_144e8b840 body=335 status=ok
// SIG undefined FUN_144e8b840(void)

int FUN_144e8b840(longlong *param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if ((iVar1 != 200) && (iVar1 != 0xc9)) {
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)(param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x24);
  }
  switch(iVar1) {
  case 200:
    (**(code **)(param_1[0x44] + 8))(param_1);
    (**(code **)(param_1[5] + 0x10))(param_1);
    *(undefined4 *)((longlong)param_1 + 0x24) = 0xc9;
  case 0xc9:
    iVar1 = (**(code **)param_1[0x44])(param_1);
    if (iVar1 == 1) {
      FUN_144e8baf0(param_1);
      *(undefined4 *)((longlong)param_1 + 0x24) = 0xca;
    }
    break;
  case 0xca:
    goto switchD_144e8b8a9_caseD_ca;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
    iVar1 = (**(code **)param_1[0x44])(param_1);
    break;
  default:
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)(param_1);
    return 0;
  }
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (param_2 != '\0') {
        *(undefined4 *)(*param_1 + 0x28) = 0x33;
        (**(code **)*param_1)(param_1);
      }
      FUN_144e8d2e0(param_1);
      return 2;
    }
    return iVar1;
  }
switchD_144e8b8a9_caseD_ca:
  return 1;
}



// FUNCTION 144e8b9c0 FUN_144e8b9c0 body=201 status=ok
// SIG undefined FUN_144e8b9c0(void)

undefined8 FUN_144e8b9c0(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)((longlong)param_1 + 0x24);
  if ((iVar3 - 0xcdU < 2) && ((char)param_1[0xb] == '\0')) {
    if (*(uint *)(param_1 + 0x13) < *(uint *)(param_1 + 0xf)) {
      *(undefined4 *)(*param_1 + 0x28) = 0x43;
      (**(code **)*param_1)(param_1);
    }
    (**(code **)(param_1[0x40] + 8))(param_1);
    *(undefined4 *)((longlong)param_1 + 0x24) = 0xd2;
  }
  else if (iVar3 == 0xcf) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0xd2;
  }
  else if (iVar3 != 0xd2) {
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)(param_1);
  }
  puVar2 = (undefined8 *)param_1[0x44];
  cVar1 = *(char *)((longlong)puVar2 + 0x21);
  while( true ) {
    if (cVar1 != '\0') {
      (**(code **)(param_1[5] + 0x30))(param_1);
      FUN_144e8d2e0(param_1);
      return 1;
    }
    iVar3 = (*(code *)*puVar2)(param_1);
    if (iVar3 == 0) break;
    puVar2 = (undefined8 *)param_1[0x44];
    cVar1 = *(char *)((longlong)puVar2 + 0x21);
  }
  return 0;
}



// FUNCTION 144e8ba90 FUN_144e8ba90 body=80 status=ok
// SIG undefined FUN_144e8ba90(void)

undefined1 FUN_144e8ba90(longlong *param_1)

{
  if (8 < *(int *)((longlong)param_1 + 0x24) - 0xcaU) {
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)();
    return *(undefined1 *)(param_1[0x44] + 0x20);
  }
  return *(undefined1 *)(param_1[0x44] + 0x20);
}



// FUNCTION 144e8bae0 thunk_FUN_144e8d2e0 body=5 status=ok
// SIG undefined thunk_FUN_144e8d2e0(void)

void thunk_FUN_144e8d2e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 8) + 0x48))(param_1,1);
    if (*(char *)(param_1 + 0x20) != '\0') {
      *(undefined4 *)(param_1 + 0x24) = 200;
      *(undefined8 *)(param_1 + 0x170) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x24) = 100;
  }
  return;
}



// FUNCTION 144e8baf0 FUN_144e8baf0 body=476 status=ok
// SIG undefined FUN_144e8baf0(void)

void FUN_144e8baf0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[7];
  if (iVar2 == 1) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
    *(undefined4 *)(param_1 + 8) = 1;
    goto LAB_144e8bc73;
  }
  if (iVar2 != 3) {
    if (iVar2 == 4) {
      if (((char)param_1[0x2d] == '\0') || (*(char *)((longlong)param_1 + 0x169) == '\0')) {
        *(undefined4 *)((longlong)param_1 + 0x3c) = 4;
        *(undefined4 *)(param_1 + 8) = 4;
      }
      else {
        if (*(char *)((longlong)param_1 + 0x169) != '\x02') {
          *(undefined4 *)(*param_1 + 0x28) = 0x72;
          *(uint *)(*param_1 + 0x2c) = (uint)*(byte *)((longlong)param_1 + 0x169);
          (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        }
        *(undefined4 *)((longlong)param_1 + 0x3c) = 5;
        *(undefined4 *)(param_1 + 8) = 4;
      }
    }
    else {
      *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
    }
    goto LAB_144e8bc73;
  }
  if ((char)param_1[0x2c] == '\0') {
    if ((char)param_1[0x2d] == '\0') {
      piVar5 = (int *)param_1[0x24];
      iVar2 = *piVar5;
      iVar3 = piVar5[0x18];
      iVar4 = piVar5[0x30];
      if (iVar2 == 1) {
        if ((iVar3 == 2) && (iVar4 == 3)) goto LAB_144e8bbcc;
      }
      else if (((iVar2 == 0x52) && (iVar3 == 0x47)) && (iVar4 == 0x42)) goto LAB_144e8bc55;
      lVar6 = *param_1;
      *(int *)(lVar6 + 0x30) = iVar3;
      *(int *)(lVar6 + 0x34) = iVar4;
      *(int *)(lVar6 + 0x2c) = iVar2;
      *(undefined4 *)(*param_1 + 0x28) = 0x6f;
      (**(code **)(*param_1 + 8))(param_1,1);
      cVar1 = *(char *)(param_1[0x40] + 0x11);
      *(undefined4 *)(param_1 + 8) = 2;
      *(uint *)((longlong)param_1 + 0x3c) = 3 - (uint)(cVar1 != '\0');
      goto LAB_144e8bc73;
    }
    if (*(char *)((longlong)param_1 + 0x169) == '\0') {
LAB_144e8bc55:
      *(undefined4 *)((longlong)param_1 + 0x3c) = 2;
      *(undefined4 *)(param_1 + 8) = 2;
      goto LAB_144e8bc73;
    }
    if (*(char *)((longlong)param_1 + 0x169) != '\x01') {
      *(undefined4 *)(*param_1 + 0x28) = 0x72;
      *(uint *)(*param_1 + 0x2c) = (uint)*(byte *)((longlong)param_1 + 0x169);
      (**(code **)(*param_1 + 8))(param_1,0xffffffff);
    }
  }
LAB_144e8bbcc:
  *(undefined4 *)((longlong)param_1 + 0x3c) = 3;
  *(undefined4 *)(param_1 + 8) = 2;
LAB_144e8bc73:
  *(undefined4 *)((longlong)param_1 + 0x44) = 1;
  param_1[10] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 9) = 1;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x62) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 2;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x100;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((longlong)param_1 + 0x72) = 0;
  return;
}



// FUNCTION 144e8bcd0 FUN_144e8bcd0 body=495 status=ok
// SIG undefined FUN_144e8bcd0(void)

void FUN_144e8bcd0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(int *)((longlong)param_1 + 0x24) != 100) {
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)();
  }
  if (param_1[0xb] == 0) {
    lVar1 = (**(code **)param_1[1])(param_1,0,0x3c0);
    param_1[0xb] = lVar1;
  }
  FUN_144e8c760(param_1,0,&DAT_149bcab40,0x32,1);
  FUN_144e8c760(param_1,1,&DAT_149bcac40,0x32,1);
  lVar1 = 0xf8;
  if ((char)param_1[4] == '\0') {
    lVar1 = 0xa0;
  }
  lVar2 = 0xd8;
  if ((char)param_1[4] == '\0') {
    lVar2 = 0x80;
  }
  FUN_144e8d190(param_1,lVar2 + (longlong)param_1,&DAT_149bca960,&DAT_149bca978);
  FUN_144e8d190(param_1,lVar1 + (longlong)param_1,&DAT_149bca9b0,&DAT_149bca9e0);
  FUN_144e8d190(param_1,lVar2 + (longlong)param_1 + 8,&DAT_149bca988,&DAT_149bca9a0);
  FUN_144e8d190(param_1,lVar1 + (longlong)param_1 + 8,&DAT_149bca9c8,&DAT_149bcaa90);
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x1010101;
  *(undefined4 *)(param_1 + 0x1c) = 0x5050505;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x1010101;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x5050505;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x1010101;
  *(undefined4 *)(param_1 + 0x1d) = 0x5050505;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x1010101;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x5050505;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x102) = 0;
  if ((int)param_1[9] == 0xc) {
    *(undefined1 *)((longlong)param_1 + 0x102) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x103) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x115) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x117) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x10001;
  FUN_144e8c290(param_1);
  return;
}



// FUNCTION 144e8bec0 FUN_144e8bec0 body=947 status=ok
// SIG undefined FUN_144e8bec0(void)

void FUN_144e8bec0(longlong *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*(int *)((longlong)param_1 + 0x24) != 100) {
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)(param_1);
  }
  *(undefined4 *)(param_1 + 10) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  switch(param_2) {
  case 0:
    iVar3 = (int)param_1[7];
    *(int *)((longlong)param_1 + 0x4c) = iVar3;
    if ((iVar3 < 1) || (10 < iVar3)) {
      *(undefined4 *)(*param_1 + 0x28) = 0x1a;
      *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x4c);
      *(undefined4 *)(*param_1 + 0x30) = 10;
      (**(code **)*param_1)();
      iVar3 = *(int *)((longlong)param_1 + 0x4c);
    }
    uVar4 = 0;
    uVar6 = uVar4;
    if (0 < iVar3) {
      do {
        lVar2 = param_1[0xb];
        *(int *)(uVar6 + lVar2) = (int)uVar4;
        uVar5 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar5;
        *(undefined4 *)(uVar6 + 8 + lVar2) = 1;
        *(undefined8 *)(uVar6 + 0xc + lVar2) = 1;
        *(undefined8 *)(uVar6 + 0x14 + lVar2) = 0;
        uVar6 = uVar6 + 0x60;
      } while ((int)uVar5 < *(int *)((longlong)param_1 + 0x4c));
      return;
    }
    break;
  case 1:
    puVar1 = (undefined4 *)param_1[0xb];
    *(undefined1 *)((longlong)param_1 + 0x114) = 1;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
    *puVar1 = 1;
    puVar1[2] = 1;
    *(undefined8 *)(puVar1 + 3) = 1;
    *(undefined8 *)(puVar1 + 5) = 0;
    return;
  case 2:
    puVar1 = (undefined4 *)param_1[0xb];
    *(undefined1 *)((longlong)param_1 + 0x11c) = 1;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 3;
    *puVar1 = 0x52;
    puVar1[2] = 1;
    *(undefined8 *)(puVar1 + 3) = 1;
    *(undefined8 *)(puVar1 + 5) = 0;
    lVar2 = param_1[0xb];
    *(undefined4 *)(lVar2 + 0x60) = 0x47;
    *(undefined4 *)(lVar2 + 0x68) = 1;
    *(undefined8 *)(lVar2 + 0x6c) = 1;
    *(undefined8 *)(lVar2 + 0x74) = 0;
    lVar2 = param_1[0xb];
    *(undefined4 *)(lVar2 + 0xc0) = 0x42;
    *(undefined4 *)(lVar2 + 200) = 1;
    *(undefined8 *)(lVar2 + 0xcc) = 1;
    *(undefined8 *)(lVar2 + 0xd4) = 0;
    return;
  case 3:
    puVar1 = (undefined4 *)param_1[0xb];
    *(undefined1 *)((longlong)param_1 + 0x114) = 1;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 3;
    *puVar1 = 1;
    puVar1[2] = 2;
    *(undefined8 *)(puVar1 + 3) = 2;
    *(undefined8 *)(puVar1 + 5) = 0;
    lVar2 = param_1[0xb];
    *(undefined4 *)(lVar2 + 0x60) = 2;
    *(undefined4 *)(lVar2 + 0x68) = 1;
    *(undefined4 *)(lVar2 + 0x6c) = 1;
    *(undefined4 *)(lVar2 + 0x70) = 1;
    *(undefined4 *)(lVar2 + 0x74) = 1;
    *(undefined4 *)(lVar2 + 0x78) = 1;
    lVar2 = param_1[0xb];
    *(undefined4 *)(lVar2 + 0xc0) = 3;
    *(undefined4 *)(lVar2 + 200) = 1;
    *(undefined4 *)(lVar2 + 0xcc) = 1;
    *(undefined4 *)(lVar2 + 0xd0) = 1;
    *(undefined4 *)(lVar2 + 0xd4) = 1;
    *(undefined4 *)(lVar2 + 0xd8) = 1;
    return;
  case 4:
    puVar1 = (undefined4 *)param_1[0xb];
    *(undefined1 *)((longlong)param_1 + 0x11c) = 1;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 4;
    *puVar1 = 0x43;
    puVar1[2] = 1;
    *(undefined8 *)(puVar1 + 3) = 1;
    *(undefined8 *)(puVar1 + 5) = 0;
    lVar2 = param_1[0xb];
    *(undefined4 *)(lVar2 + 0x60) = 0x4d;
    *(undefined4 *)(lVar2 + 0x68) = 1;
    *(undefined8 *)(lVar2 + 0x6c) = 1;
    *(undefined8 *)(lVar2 + 0x74) = 0;
    lVar2 = param_1[0xb];
    *(undefined4 *)(lVar2 + 0xc0) = 0x59;
    *(undefined4 *)(lVar2 + 200) = 1;
    *(undefined8 *)(lVar2 + 0xcc) = 1;
    *(undefined8 *)(lVar2 + 0xd4) = 0;
    lVar2 = param_1[0xb];
    *(undefined4 *)(lVar2 + 0x120) = 0x4b;
    *(undefined4 *)(lVar2 + 0x128) = 1;
    *(undefined8 *)(lVar2 + 300) = 1;
    *(undefined8 *)(lVar2 + 0x134) = 0;
    return;
  case 5:
    puVar1 = (undefined4 *)param_1[0xb];
    *(undefined1 *)((longlong)param_1 + 0x11c) = 1;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 4;
    *puVar1 = 1;
    puVar1[2] = 2;
    *(undefined8 *)(puVar1 + 3) = 2;
    *(undefined8 *)(puVar1 + 5) = 0;
    lVar2 = param_1[0xb];
    *(undefined4 *)(lVar2 + 0x60) = 2;
    *(undefined4 *)(lVar2 + 0x68) = 1;
    *(undefined4 *)(lVar2 + 0x6c) = 1;
    *(undefined4 *)(lVar2 + 0x70) = 1;
    *(undefined4 *)(lVar2 + 0x74) = 1;
    *(undefined4 *)(lVar2 + 0x78) = 1;
    lVar2 = param_1[0xb];
    *(undefined4 *)(lVar2 + 0xc0) = 3;
    *(undefined4 *)(lVar2 + 200) = 1;
    *(undefined4 *)(lVar2 + 0xcc) = 1;
    *(undefined4 *)(lVar2 + 0xd0) = 1;
    *(undefined4 *)(lVar2 + 0xd4) = 1;
    *(undefined4 *)(lVar2 + 0xd8) = 1;
    lVar2 = param_1[0xb];
    *(undefined4 *)(lVar2 + 0x120) = 4;
    *(undefined4 *)(lVar2 + 0x128) = 2;
    *(undefined8 *)(lVar2 + 300) = 2;
    *(undefined8 *)(lVar2 + 0x134) = 0;
    return;
  default:
    *(undefined4 *)(*param_1 + 0x28) = 10;
    (**(code **)*param_1)(param_1);
  }
  return;
}



// FUNCTION 144e8c290 FUN_144e8c290 body=1019 status=ok
// SIG undefined FUN_144e8c290(void)

void FUN_144e8c290(longlong *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  switch(*(undefined4 *)((longlong)param_1 + 0x3c)) {
  case 0:
    FUN_144e8bec0(param_1,0);
    return;
  case 1:
    if (*(int *)((longlong)param_1 + 0x24) != 100) {
      *(undefined4 *)(*param_1 + 0x28) = 0x14;
      *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
      (**(code **)*param_1)();
    }
    puVar2 = (undefined4 *)param_1[0xb];
    *(undefined4 *)(param_1 + 10) = 1;
    *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
    *(undefined1 *)((longlong)param_1 + 0x114) = 1;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
    *puVar2 = 1;
    puVar2[2] = 1;
    *(undefined8 *)(puVar2 + 3) = 1;
    *(undefined8 *)(puVar2 + 5) = 0;
    return;
  case 2:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    iVar1 = *(int *)((longlong)param_1 + 0x24);
    if (*(char *)(param_1[0x34] + 0x1a) != '\0') {
      if (iVar1 != 100) {
        *(undefined4 *)(*param_1 + 0x28) = 0x14;
        *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
        (**(code **)*param_1)();
      }
      puVar2 = (undefined4 *)param_1[0xb];
      *(undefined4 *)(param_1 + 10) = 2;
      *(undefined1 *)((longlong)param_1 + 0x114) = 0;
      *(undefined1 *)((longlong)param_1 + 0x11c) = 1;
      *(undefined4 *)((longlong)param_1 + 0x4c) = 3;
      *puVar2 = 0x52;
      puVar2[2] = 1;
      *(undefined8 *)(puVar2 + 3) = 1;
      *(undefined8 *)(puVar2 + 5) = 0;
      lVar3 = param_1[0xb];
      *(undefined4 *)(lVar3 + 0x60) = 0x47;
      *(undefined4 *)(lVar3 + 0x68) = 1;
      *(undefined8 *)(lVar3 + 0x6c) = 1;
      *(undefined8 *)(lVar3 + 0x74) = 0;
      lVar3 = param_1[0xb];
      *(undefined4 *)(lVar3 + 0xc0) = 0x42;
      *(undefined4 *)(lVar3 + 200) = 1;
      *(undefined8 *)(lVar3 + 0xcc) = 1;
      *(undefined8 *)(lVar3 + 0xd4) = 0;
      return;
    }
    break;
  case 3:
    iVar1 = *(int *)((longlong)param_1 + 0x24);
    break;
  case 4:
    if (*(int *)((longlong)param_1 + 0x24) != 100) {
      *(undefined4 *)(*param_1 + 0x28) = 0x14;
      *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
      (**(code **)*param_1)();
    }
    puVar2 = (undefined4 *)param_1[0xb];
    *(undefined4 *)(param_1 + 10) = 4;
    *(undefined1 *)((longlong)param_1 + 0x114) = 0;
    *(undefined1 *)((longlong)param_1 + 0x11c) = 1;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 4;
    *puVar2 = 0x43;
    puVar2[2] = 1;
    *(undefined8 *)(puVar2 + 3) = 1;
    *(undefined8 *)(puVar2 + 5) = 0;
    lVar3 = param_1[0xb];
    *(undefined4 *)(lVar3 + 0x60) = 0x4d;
    *(undefined4 *)(lVar3 + 0x68) = 1;
    *(undefined8 *)(lVar3 + 0x6c) = 1;
    *(undefined8 *)(lVar3 + 0x74) = 0;
    lVar3 = param_1[0xb];
    *(undefined4 *)(lVar3 + 0xc0) = 0x59;
    *(undefined4 *)(lVar3 + 200) = 1;
    *(undefined8 *)(lVar3 + 0xcc) = 1;
    *(undefined8 *)(lVar3 + 0xd4) = 0;
    lVar3 = param_1[0xb];
    *(undefined4 *)(lVar3 + 0x120) = 0x4b;
    *(undefined4 *)(lVar3 + 0x128) = 1;
    *(undefined8 *)(lVar3 + 300) = 1;
    *(undefined8 *)(lVar3 + 0x134) = 0;
    return;
  case 5:
    if (*(int *)((longlong)param_1 + 0x24) != 100) {
      *(undefined4 *)(*param_1 + 0x28) = 0x14;
      *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
      (**(code **)*param_1)();
    }
    puVar2 = (undefined4 *)param_1[0xb];
    *(undefined4 *)(param_1 + 10) = 5;
    *(undefined1 *)((longlong)param_1 + 0x114) = 0;
    *(undefined1 *)((longlong)param_1 + 0x11c) = 1;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 4;
    *puVar2 = 1;
    puVar2[2] = 2;
    *(undefined8 *)(puVar2 + 3) = 2;
    *(undefined8 *)(puVar2 + 5) = 0;
    lVar3 = param_1[0xb];
    *(undefined4 *)(lVar3 + 0x60) = 2;
    *(undefined4 *)(lVar3 + 0x68) = 1;
    *(undefined4 *)(lVar3 + 0x6c) = 1;
    *(undefined4 *)(lVar3 + 0x70) = 1;
    *(undefined4 *)(lVar3 + 0x74) = 1;
    *(undefined4 *)(lVar3 + 0x78) = 1;
    lVar3 = param_1[0xb];
    *(undefined4 *)(lVar3 + 0xc0) = 3;
    *(undefined4 *)(lVar3 + 200) = 1;
    *(undefined4 *)(lVar3 + 0xcc) = 1;
    *(undefined4 *)(lVar3 + 0xd0) = 1;
    *(undefined4 *)(lVar3 + 0xd4) = 1;
    *(undefined4 *)(lVar3 + 0xd8) = 1;
    lVar3 = param_1[0xb];
    *(undefined4 *)(lVar3 + 0x120) = 4;
    *(undefined4 *)(lVar3 + 0x128) = 2;
    *(undefined8 *)(lVar3 + 300) = 2;
    *(undefined8 *)(lVar3 + 0x134) = 0;
    return;
  default:
    *(undefined4 *)(*param_1 + 0x28) = 9;
                    /* WARNING: Could not recover jumptable at 0x000144e8c688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1);
    return;
  }
  if (iVar1 != 100) {
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)();
  }
  puVar2 = (undefined4 *)param_1[0xb];
  *(undefined4 *)(param_1 + 10) = 3;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x114) = 1;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 3;
  *puVar2 = 1;
  puVar2[2] = 2;
  *(undefined8 *)(puVar2 + 3) = 2;
  *(undefined8 *)(puVar2 + 5) = 0;
  lVar3 = param_1[0xb];
  *(undefined4 *)(lVar3 + 0x60) = 2;
  *(undefined4 *)(lVar3 + 0x68) = 1;
  *(undefined4 *)(lVar3 + 0x6c) = 1;
  *(undefined4 *)(lVar3 + 0x70) = 1;
  *(undefined4 *)(lVar3 + 0x74) = 1;
  *(undefined4 *)(lVar3 + 0x78) = 1;
  lVar3 = param_1[0xb];
  *(undefined4 *)(lVar3 + 0xc0) = 3;
  *(undefined4 *)(lVar3 + 200) = 1;
  *(undefined4 *)(lVar3 + 0xcc) = 1;
  *(undefined4 *)(lVar3 + 0xd0) = 1;
  *(undefined4 *)(lVar3 + 0xd4) = 1;
  *(undefined4 *)(lVar3 + 0xd8) = 1;
  return;
}



// FUNCTION 144e8c6d0 FUN_144e8c6d0 body=137 status=ok
// SIG undefined FUN_144e8c6d0(void)

void FUN_144e8c6d0(undefined8 param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = 1;
  if (0 < param_2) {
    iVar1 = param_2;
  }
  if (iVar1 < 0x65) {
    if (iVar1 < 0x32) {
      iVar1 = (int)(5000 / (longlong)iVar1);
      goto LAB_144e8c704;
    }
  }
  else {
    iVar1 = 100;
  }
  iVar1 = (100 - iVar1) * 2;
LAB_144e8c704:
  FUN_144e8c760(param_1,0,&DAT_149bcab40,iVar1,param_3);
  FUN_144e8c760(param_1,1,&DAT_149bcac40,iVar1,param_3);
  return;
}



// FUNCTION 144e8c760 FUN_144e8c760 body=1277 status=ok
// SIG undefined FUN_144e8c760(void)

void FUN_144e8c760(longlong *param_1,uint param_2,longlong param_3,int param_4,char param_5)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)((longlong)param_1 + 0x24) != 100) {
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)();
  }
  if (3 < param_2) {
    *(undefined4 *)(*param_1 + 0x28) = 0x1f;
    *(uint *)(*param_1 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_1[(longlong)(int)param_2 + 0xc] == 0) {
    lVar1 = FUN_144e8d2a0(param_1);
    param_1[(longlong)(int)param_2 + 0xc] = lVar1;
  }
  lVar1 = 0;
  do {
    iVar2 = (param_4 * *(int *)(param_3 + lVar1 * 4) + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    if ((param_5 != '\0') && (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    *(short *)(param_1[(longlong)(int)param_2 + 0xc] + lVar1 * 2) = (short)iVar2;
    iVar2 = (param_4 * *(int *)(param_3 + 4 + lVar1 * 4) + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    if ((param_5 != '\0') && (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    *(short *)(param_1[(longlong)(int)param_2 + 0xc] + 2 + lVar1 * 2) = (short)iVar2;
    iVar2 = (param_4 * *(int *)(param_3 + 8 + lVar1 * 4) + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    if ((param_5 != '\0') && (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    *(short *)(param_1[(longlong)(int)param_2 + 0xc] + 4 + lVar1 * 2) = (short)iVar2;
    iVar2 = (param_4 * *(int *)(param_3 + 0xc + lVar1 * 4) + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    if ((param_5 != '\0') && (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    *(short *)(param_1[(longlong)(int)param_2 + 0xc] + 6 + lVar1 * 2) = (short)iVar2;
    iVar2 = (param_4 * *(int *)(param_3 + 0x10 + lVar1 * 4) + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    if ((param_5 != '\0') && (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    *(short *)(param_1[(longlong)(int)param_2 + 0xc] + 8 + lVar1 * 2) = (short)iVar2;
    iVar2 = (param_4 * *(int *)(param_3 + 0x14 + lVar1 * 4) + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    if ((param_5 != '\0') && (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    *(short *)(param_1[(longlong)(int)param_2 + 0xc] + 10 + lVar1 * 2) = (short)iVar2;
    iVar2 = (param_4 * *(int *)(param_3 + 0x18 + lVar1 * 4) + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    if ((param_5 != '\0') && (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    *(short *)(param_1[(longlong)(int)param_2 + 0xc] + 0xc + lVar1 * 2) = (short)iVar2;
    iVar2 = (param_4 * *(int *)(param_3 + 0x1c + lVar1 * 4) + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    if ((param_5 != '\0') && (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    *(short *)(param_1[(longlong)(int)param_2 + 0xc] + 0xe + lVar1 * 2) = (short)iVar2;
    iVar2 = (param_4 * *(int *)(param_3 + 0x20 + lVar1 * 4) + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    if ((param_5 != '\0') && (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    *(short *)(param_1[(longlong)(int)param_2 + 0xc] + 0x10 + lVar1 * 2) = (short)iVar2;
    iVar2 = (param_4 * *(int *)(param_3 + 0x24 + lVar1 * 4) + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    if ((param_5 != '\0') && (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    *(short *)(param_1[(longlong)(int)param_2 + 0xc] + 0x12 + lVar1 * 2) = (short)iVar2;
    iVar2 = (param_4 * *(int *)(param_3 + 0x28 + lVar1 * 4) + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    if ((param_5 != '\0') && (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    *(short *)(param_1[(longlong)(int)param_2 + 0xc] + 0x14 + lVar1 * 2) = (short)iVar2;
    iVar2 = (param_4 * *(int *)(param_3 + 0x2c + lVar1 * 4) + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    if ((param_5 != '\0') && (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    *(short *)(param_1[(longlong)(int)param_2 + 0xc] + 0x16 + lVar1 * 2) = (short)iVar2;
    iVar2 = (param_4 * *(int *)(param_3 + 0x30 + lVar1 * 4) + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    if ((param_5 != '\0') && (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    *(short *)(param_1[(longlong)(int)param_2 + 0xc] + 0x18 + lVar1 * 2) = (short)iVar2;
    iVar2 = (param_4 * *(int *)(param_3 + 0x34 + lVar1 * 4) + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    if ((param_5 != '\0') && (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    *(short *)(param_1[(longlong)(int)param_2 + 0xc] + 0x1a + lVar1 * 2) = (short)iVar2;
    iVar2 = (param_4 * *(int *)(param_3 + 0x38 + lVar1 * 4) + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    if ((param_5 != '\0') && (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    *(short *)(param_1[(longlong)(int)param_2 + 0xc] + 0x1c + lVar1 * 2) = (short)iVar2;
    iVar2 = (param_4 * *(int *)(param_3 + 0x3c + lVar1 * 4) + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    if ((param_5 != '\0') && (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    *(short *)(param_1[(longlong)(int)param_2 + 0xc] + 0x1e + lVar1 * 2) = (short)iVar2;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 < 0x40);
  *(undefined1 *)(param_1[(longlong)(int)param_2 + 0xc] + 0x80) = 0;
  return;
}



// FUNCTION 144e8cc60 FUN_144e8cc60 body=185 status=ok
// SIG undefined FUN_144e8cc60(void)

void FUN_144e8cc60(longlong *param_1,int param_2,int param_3)

{
  if (*(int *)((longlong)param_1 + 0x24) != 100) {
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)();
  }
  *(undefined1 *)(param_1[0x34] + 0x1a) = 1;
  param_1[0x32] = 0;
  *(int *)((longlong)param_1 + 0x18c) = param_2;
  *(int *)(param_1 + 0x33) = param_3;
  if (((6 < param_2 - 1U) || (param_3 < 0)) || ((int)param_1[9] <= param_3)) {
    *(undefined4 *)(*param_1 + 0x28) = 0x10;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x18c);
    *(int *)(*param_1 + 0x30) = (int)param_1[0x32];
    *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x194);
    *(int *)(*param_1 + 0x38) = (int)param_1[0x33];
    (**(code **)*param_1)(param_1);
  }
  return;
}



// FUNCTION 144e8cd20 FUN_144e8cd20 body=1129 status=ok
// SIG undefined FUN_144e8cd20(void)

void FUN_144e8cd20(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  
  iVar4 = *(int *)((longlong)param_1 + 0x4c);
  lVar3 = (longlong)iVar4;
  if (*(int *)((longlong)param_1 + 0x24) != 100) {
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)();
  }
  if (*(char *)(param_1[0x34] + 0x1a) != '\0') {
    *(undefined1 *)(param_1[0x34] + 0x1a) = 0;
    FUN_144e8c290(param_1);
  }
  if (iVar4 == 3) {
    if ((int)param_1[10] == 3) {
      iVar7 = 10;
    }
    else {
LAB_144e8cd8c:
      iVar7 = iVar4 * 4 + 2;
    }
  }
  else {
    if (iVar4 < 5) goto LAB_144e8cd8c;
    iVar7 = iVar4 * 6;
  }
  piVar1 = (int *)param_1[0x3d];
  if ((piVar1 == (int *)0x0) || ((int)param_1[0x3e] < iVar7)) {
    iVar2 = 10;
    if (10 < iVar7) {
      iVar2 = iVar7;
    }
    *(int *)(param_1 + 0x3e) = iVar2;
    piVar1 = (int *)(**(code **)param_1[1])(param_1,0,(longlong)iVar2 * 0x24);
    param_1[0x3d] = (longlong)piVar1;
  }
  param_1[0x1f] = (longlong)piVar1;
  *(int *)(param_1 + 0x1e) = iVar7;
  if (iVar4 == 3) {
    if ((int)param_1[10] == 3) {
      iVar7 = 0;
      *piVar1 = 3;
      lVar3 = 3;
      piVar6 = piVar1;
      iVar4 = iVar7;
      do {
        piVar6 = piVar6 + 1;
        *piVar6 = iVar4;
        iVar4 = iVar4 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      piVar1[5] = 0;
      piVar1[6] = 0;
      piVar1[7] = 0;
      piVar1[8] = 1;
      piVar1[9] = 1;
      piVar1[10] = 0;
      piVar1[0xe] = 1;
      piVar1[0xf] = 5;
      piVar1[0x10] = 0;
      piVar1[0x11] = 2;
      piVar1[0x12] = 1;
      piVar1[0x13] = 2;
      piVar1[0x17] = 1;
      piVar1[0x18] = 0x3f;
      piVar1[0x19] = 0;
      piVar1[0x1a] = 1;
      piVar1[0x1b] = 1;
      piVar1[0x1c] = 1;
      piVar1[0x20] = 1;
      piVar1[0x21] = 0x3f;
      piVar1[0x22] = 0;
      piVar1[0x23] = 1;
      piVar1[0x24] = 1;
      piVar1[0x25] = 0;
      piVar1[0x29] = 6;
      piVar1[0x2a] = 0x3f;
      piVar1[0x2b] = 0;
      piVar1[0x2c] = 2;
      piVar1[0x2d] = 1;
      piVar1[0x2e] = 0;
      piVar1[0x32] = 1;
      piVar1[0x33] = 0x3f;
      piVar1[0x34] = 2;
      piVar1[0x35] = 1;
      piVar1[0x36] = 3;
      piVar6 = piVar1 + 0x37;
      lVar3 = 3;
      do {
        *piVar6 = iVar7;
        piVar6 = piVar6 + 1;
        iVar7 = iVar7 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      piVar1[0x3b] = 0;
      piVar1[0x3c] = 0;
      piVar1[0x3d] = 1;
      piVar1[0x3e] = 0;
      piVar1[0x3f] = 1;
      piVar1[0x40] = 2;
      piVar1[0x44] = 1;
      piVar1[0x45] = 0x3f;
      piVar1[0x46] = 1;
      piVar1[0x47] = 0;
      piVar1[0x48] = 1;
      piVar1[0x49] = 1;
      piVar1[0x4d] = 1;
      piVar1[0x4e] = 0x3f;
      piVar1[0x4f] = 1;
      piVar1[0x50] = 0;
      piVar1[0x51] = 1;
      piVar1[0x52] = 0;
      piVar1[0x56] = 1;
      piVar1[0x57] = 0x3f;
      piVar1[0x58] = 1;
      piVar1[0x59] = 0;
      return;
    }
LAB_144e8cfc0:
    iVar7 = 0;
    *piVar1 = iVar4;
    lVar8 = lVar3;
    piVar6 = piVar1;
    if (0 < iVar4) {
      do {
        piVar6[1] = iVar7;
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + -1;
        piVar6 = piVar6 + 1;
      } while (lVar8 != 0);
    }
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[8] = 1;
    piVar1 = piVar1 + 9;
    if (0 < iVar4) goto LAB_144e8d034;
  }
  else {
    if (iVar4 < 5) goto LAB_144e8cfc0;
    iVar7 = 0;
    do {
      piVar1[1] = iVar7;
      iVar7 = iVar7 + 1;
      *piVar1 = 1;
      piVar1[5] = 0;
      piVar1[6] = 0;
      piVar1[7] = 0;
      piVar1[8] = 1;
      piVar1 = piVar1 + 9;
    } while (iVar7 < iVar4);
LAB_144e8d034:
    iVar2 = 0;
    iVar7 = iVar2;
    do {
      piVar1[1] = iVar7;
      iVar7 = iVar7 + 1;
      *piVar1 = 1;
      piVar1[5] = 1;
      piVar1[6] = 5;
      piVar1[7] = 0;
      piVar1[8] = 2;
      piVar1 = piVar1 + 9;
      iVar5 = iVar2;
    } while (iVar7 < iVar4);
    do {
      piVar1[1] = iVar5;
      iVar5 = iVar5 + 1;
      *piVar1 = 1;
      piVar1[5] = 6;
      piVar1[6] = 0x3f;
      piVar1[7] = 0;
      piVar1[8] = 2;
      piVar1 = piVar1 + 9;
      iVar7 = iVar2;
    } while (iVar5 < iVar4);
    do {
      piVar1[1] = iVar7;
      iVar7 = iVar7 + 1;
      *piVar1 = 1;
      piVar1[5] = 1;
      piVar1[6] = 0x3f;
      piVar1[7] = 2;
      piVar1[8] = 1;
      piVar1 = piVar1 + 9;
    } while (iVar7 < iVar4);
    if (4 < iVar4) {
      do {
        piVar1[1] = iVar2;
        iVar2 = iVar2 + 1;
        *piVar1 = 1;
        piVar1[5] = 0;
        piVar1[6] = 0;
        piVar1[7] = 1;
        piVar1[8] = 0;
        piVar1 = piVar1 + 9;
      } while (iVar2 < iVar4);
      goto LAB_144e8d143;
    }
  }
  *piVar1 = iVar4;
  iVar7 = 0;
  piVar6 = piVar1;
  if (0 < iVar4) {
    do {
      piVar6[1] = iVar7;
      iVar7 = iVar7 + 1;
      lVar3 = lVar3 + -1;
      piVar6 = piVar6 + 1;
    } while (lVar3 != 0);
  }
  piVar1[5] = 0;
  piVar1[6] = 0;
  piVar1[7] = 1;
  piVar1[8] = 0;
  piVar1 = piVar1 + 9;
  if (iVar4 < 1) {
    return;
  }
LAB_144e8d143:
  piVar1 = piVar1 + 5;
  iVar7 = 0;
  do {
    piVar1[-4] = iVar7;
    iVar7 = iVar7 + 1;
    piVar1[-5] = 1;
    *piVar1 = 1;
    piVar1[1] = 0x3f;
    piVar1[2] = 1;
    piVar1[3] = 0;
    piVar1 = piVar1 + 9;
  } while (iVar7 < iVar4);
  return;
}



// FUNCTION 144e8d190 FUN_144e8d190 body=267 status=ok
// SIG undefined FUN_144e8d190(void)

void FUN_144e8d190(longlong *param_1,longlong *param_2,undefined8 *param_3,void *param_4)

{
  uint uVar1;
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  undefined8 uVar4;
  uint5 uVar5;
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined8 *puVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  if (*param_2 == 0) {
    puVar8 = (undefined8 *)FUN_144e8d2c0();
    *param_2 = (longlong)puVar8;
    iVar15 = 0;
    iVar16 = 0;
    iVar17 = 0;
    iVar18 = 0;
    uVar4 = param_3[1];
    iVar11 = 0;
    iVar12 = 0;
    iVar13 = 0;
    iVar14 = 0;
    *puVar8 = *param_3;
    puVar8[1] = uVar4;
    *(undefined1 *)(puVar8 + 2) = *(undefined1 *)(param_3 + 2);
    lVar9 = 2;
    puVar10 = (uint *)((longlong)param_3 + 1);
    do {
      uVar1 = *puVar10;
      auVar2[0xc] = (char)(uVar1 >> 0x18);
      auVar2._0_12_ = ZEXT712(0);
      uVar5 = CONCAT32(auVar2._10_3_,(ushort)(byte)(uVar1 >> 0x10));
      auVar6._5_8_ = 0;
      auVar6._0_5_ = uVar5;
      iVar15 = iVar15 + (uVar1 & 0xff);
      iVar16 = iVar16 + (int)CONCAT72(SUB137(auVar6 << 0x40,6),(ushort)(byte)(uVar1 >> 8));
      iVar17 = iVar17 + (int)uVar5;
      iVar18 = iVar18 + (uint)(uint3)(auVar2._10_3_ >> 0x10);
      uVar1 = puVar10[1];
      auVar3[0xc] = (char)(uVar1 >> 0x18);
      auVar3._0_12_ = ZEXT712(0);
      uVar5 = CONCAT32(auVar3._10_3_,(ushort)(byte)(uVar1 >> 0x10));
      auVar7._5_8_ = 0;
      auVar7._0_5_ = uVar5;
      iVar11 = iVar11 + (uVar1 & 0xff);
      iVar12 = iVar12 + (int)CONCAT72(SUB137(auVar7 << 0x40,6),(ushort)(byte)(uVar1 >> 8));
      iVar13 = iVar13 + (int)uVar5;
      iVar14 = iVar14 + (uint)(uint3)(auVar3._10_3_ >> 0x10);
      lVar9 = lVar9 + -1;
      puVar10 = puVar10 + 2;
    } while (lVar9 != 0);
    iVar11 = iVar11 + iVar15 + iVar13 + iVar17 + iVar12 + iVar16 + iVar14 + iVar18;
    if (0xff < iVar11 - 1U) {
      *(undefined4 *)(*param_1 + 0x28) = 8;
      (**(code **)*param_1)(param_1);
    }
    memcpy((void *)(*param_2 + 0x11),param_4,(longlong)iVar11);
    memset((void *)(*param_2 + 0x11 + (longlong)iVar11),0,(longlong)(0x100 - iVar11));
    *(undefined1 *)(*param_2 + 0x111) = 0;
  }
  return;
}



// FUNCTION 144e8d2a0 FUN_144e8d2a0 body=30 status=ok
// SIG undefined FUN_144e8d2a0(void)

void FUN_144e8d2a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x82);
  *(undefined1 *)(lVar1 + 0x80) = 0;
  return;
}



// FUNCTION 144e8d2c0 FUN_144e8d2c0 body=30 status=ok
// SIG undefined FUN_144e8d2c0(void)

void FUN_144e8d2c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x112);
  *(undefined1 *)(lVar1 + 0x111) = 0;
  return;
}



// FUNCTION 144e8d2e0 FUN_144e8d2e0 body=69 status=ok
// SIG undefined FUN_144e8d2e0(void)

void FUN_144e8d2e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 8) + 0x48))(param_1,1);
    if (*(char *)(param_1 + 0x20) != '\0') {
      *(undefined4 *)(param_1 + 0x24) = 200;
      *(undefined8 *)(param_1 + 0x170) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0x24) = 100;
  }
  return;
}



// FUNCTION 144e8d330 FUN_144e8d330 body=49 status=ok
// SIG undefined FUN_144e8d330(void)

void FUN_144e8d330(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 8) + 0x50))();
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



// FUNCTION 144e8d370 FUN_144e8d370 body=135 status=ok
// SIG undefined FUN_144e8d370(void)

void FUN_144e8d370(longlong *param_1,char param_2)

{
  if (*(int *)((longlong)param_1 + 0x24) != 100) {
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)();
  }
  if (param_2 != '\0') {
    FUN_144e8b420(param_1,0);
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)(param_1[5] + 0x10))(param_1);
  FUN_145223940(param_1);
  (**(code **)param_1[0x34])(param_1);
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(uint *)((longlong)param_1 + 0x24) = ((char)param_1[0x20] != '\0') + 0x65;
  return;
}



// FUNCTION 144e8d400 FUN_144e8d400 body=251 status=ok
// SIG undefined FUN_144e8d400(void)

void FUN_144e8d400(longlong *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int local_res18 [4];
  
  if ((int)param_1[9] != 8) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(int *)(*param_1 + 0x2c) = (int)param_1[9];
    (**(code **)*param_1)();
  }
  if (*(int *)((longlong)param_1 + 0x24) != 0x65) {
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)(param_1);
  }
  if (*(uint *)((longlong)param_1 + 0x34) <= *(uint *)(param_1 + 0x24)) {
    *(undefined4 *)(*param_1 + 0x28) = 0x7b;
    (**(code **)(*param_1 + 8))(param_1,0xffffffff);
  }
  if (param_1[2] != 0) {
    *(int *)(param_1[2] + 8) = (int)param_1[0x24];
    *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)((longlong)param_1 + 0x34);
    (**(code **)param_1[2])(param_1);
  }
  if (*(char *)(param_1[0x34] + 0x18) != '\0') {
    (**(code **)(param_1[0x34] + 8))(param_1);
  }
  uVar1 = *(int *)((longlong)param_1 + 0x34) - (int)param_1[0x24];
  local_res18[0] = 0;
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  (**(code **)(param_1[0x35] + 8))(param_1,param_2,local_res18,param_3);
  *(int *)(param_1 + 0x24) = (int)param_1[0x24] + local_res18[0];
  return;
}



// FUNCTION 144e8d500 FUN_144e8d500 body=311 status=ok
// SIG undefined FUN_144e8d500(void)

uint FUN_144e8d500(longlong *param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  
  if ((int)param_1[9] != 8) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(int *)(*param_1 + 0x2c) = (int)param_1[9];
    (**(code **)*param_1)();
  }
  if (*(char *)(param_1[0x34] + 0x1a) != '\0') {
    *(undefined4 *)(*param_1 + 0x28) = 0x2f;
    (**(code **)*param_1)(param_1);
  }
  if (*(int *)((longlong)param_1 + 0x24) != 0x66) {
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)(param_1);
  }
  if (*(uint *)((longlong)param_1 + 0x34) <= *(uint *)(param_1 + 0x24)) {
    *(undefined4 *)(*param_1 + 0x28) = 0x7b;
    (**(code **)(*param_1 + 8))(param_1,0xffffffff);
    return 0;
  }
  if (param_1[2] != 0) {
    *(uint *)(param_1[2] + 8) = *(uint *)(param_1 + 0x24);
    *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)((longlong)param_1 + 0x34);
    (**(code **)param_1[2])(param_1);
  }
  if (*(char *)(param_1[0x34] + 0x18) != '\0') {
    (**(code **)(param_1[0x34] + 8))(param_1);
  }
  uVar2 = *(int *)((longlong)param_1 + 300) * 8;
  if (param_3 < uVar2) {
    *(undefined4 *)(*param_1 + 0x28) = 0x17;
    (**(code **)*param_1)(param_1);
  }
  cVar1 = (**(code **)(param_1[0x37] + 8))(param_1,param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    *(uint *)(param_1 + 0x24) = (int)param_1[0x24] + uVar2;
  }
  return uVar2;
}



// FUNCTION 144e8d640 FUN_144e8d640 body=244 status=ok
// SIG undefined FUN_144e8d640(void)

undefined4 FUN_144e8d640(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)((longlong)param_1 + 0x24);
  if (iVar2 == 0xca) {
    FUN_144e8e770();
    if ((char)param_1[0xb] != '\0') {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0xcf;
      return 1;
    }
    *(undefined4 *)((longlong)param_1 + 0x24) = 0xcb;
  }
  else if (iVar2 != 0xcb) {
    if (iVar2 != 0xcc) {
      *(undefined4 *)(*param_1 + 0x28) = 0x14;
      *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
      (**(code **)*param_1)(param_1);
    }
    uVar3 = FUN_144e8e170(param_1);
    return uVar3;
  }
  if (*(char *)(param_1[0x44] + 0x20) != '\0') {
    while( true ) {
      if ((undefined8 *)param_1[2] != (undefined8 *)0x0) {
        (**(code **)param_1[2])(param_1);
      }
      iVar2 = (**(code **)param_1[0x44])(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      if (iVar2 == 2) break;
      lVar1 = param_1[2];
      if ((lVar1 != 0) && ((iVar2 - 1U & 0xfffffffd) == 0)) {
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        iVar2 = *(int *)(param_1[2] + 0xc);
        if (iVar2 <= *(int *)(lVar1 + 8)) {
          *(int *)(param_1[2] + 0xc) = *(int *)((longlong)param_1 + 0x184) + iVar2;
        }
      }
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_1 + 0x9c);
  uVar3 = FUN_144e8e170(param_1);
  return uVar3;
}



// FUNCTION 144e8d740 FUN_144e8d740 body=239 status=ok
// SIG undefined FUN_144e8d740(void)

int FUN_144e8d740(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int local_res8 [2];
  
  if ((int)param_1[0x23] != 8) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(int *)(*param_1 + 0x2c) = (int)param_1[0x23];
    (**(code **)*param_1)();
  }
  if (*(int *)((longlong)param_1 + 0x24) != 0xcd) {
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)(param_1);
  }
  if (*(uint *)(param_1 + 0xf) <= *(uint *)(param_1 + 0x13)) {
    *(undefined4 *)(*param_1 + 0x28) = 0x7b;
    (**(code **)(*param_1 + 8))(param_1,0xffffffff);
    return 0;
  }
  if (param_1[2] != 0) {
    *(uint *)(param_1[2] + 8) = *(uint *)(param_1 + 0x13);
    *(int *)(param_1[2] + 0xc) = (int)param_1[0xf];
    (**(code **)param_1[2])(param_1);
  }
  local_res8[0] = 0;
  (**(code **)(param_1[0x41] + 8))(param_1,param_2,local_res8,param_3);
  *(int *)(param_1 + 0x13) = (int)param_1[0x13] + local_res8[0];
  return local_res8[0];
}



// FUNCTION 144e8d830 FUN_144e8d830 body=1362 status=ok
// SIG undefined FUN_144e8d830(void)

uint FUN_144e8d830(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  int *piVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  bool bVar24;
  
  lVar3 = param_1[0x41];
  lVar4 = param_1[0x42];
  lVar5 = param_1[0x40];
  lVar6 = param_1[0x48];
  lVar11 = lVar5;
  if ((int)param_1[0x23] != 8) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(int *)(*param_1 + 0x2c) = (int)param_1[0x23];
    (**(code **)*param_1)(param_1);
    lVar11 = param_1[0x40];
  }
  if (*(char *)(lVar11 + 0x11) != '\0') {
    *(undefined4 *)(*param_1 + 0x28) = 0x2f;
    (**(code **)*param_1)(param_1);
  }
  if ((*(char *)((longlong)param_1 + 0x62) != '\0') && ((char)param_1[0xd] != '\0')) {
    *(undefined4 *)(*param_1 + 0x28) = 0x2f;
    (**(code **)*param_1)(param_1);
  }
  if (*(int *)((longlong)param_1 + 0x24) != 0xcd) {
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)(param_1);
  }
  uVar22 = *(uint *)(param_1 + 0x13);
  uVar13 = *(uint *)(param_1 + 0xf);
  if (uVar13 <= uVar22 + param_2) {
    *(uint *)(param_1 + 0x13) = uVar13;
    (**(code **)(param_1[0x44] + 0x18))(param_1);
    *(undefined1 *)(param_1[0x44] + 0x21) = 1;
    return uVar13 - uVar22;
  }
  if (param_2 == 0) {
    return 0;
  }
  iVar20 = (int)param_1[0x30];
  uVar21 = iVar20 * *(int *)((longlong)param_1 + 0x17c);
  uVar13 = (uVar21 - uVar22 % uVar21) % uVar21;
  uVar19 = param_2 - uVar13;
  if (*(char *)(param_1[0x48] + 0x20) == '\0') {
    if (param_2 < uVar13) {
      FUN_144e8e460(param_1,param_2);
      return param_2;
    }
    *(uint *)(param_1 + 0x13) = uVar22 + uVar13;
  }
  else {
    if (param_2 < uVar13 + 1) {
LAB_144e8db27:
      FUN_144e8e2b0(param_1,param_2);
      return param_2;
    }
    if ((uVar13 < 2) && (*(char *)(lVar3 + 0x70) != '\0')) {
      if (uVar19 < uVar21 + 1) goto LAB_144e8db27;
      uVar19 = uVar19 - uVar21;
      iVar9 = uVar22 + uVar13 + uVar21;
    }
    else {
      iVar9 = uVar22 + uVar13;
    }
    *(int *)(param_1 + 0x13) = iVar9;
    if ((*(int *)(lVar3 + 0x94) == 0) || ((*(int *)(lVar3 + 0x94) == 1 && (2 < uVar13)))) {
      lVar11 = param_1[0x41];
      iVar9 = 0;
      if (0 < (int)param_1[7]) {
        lVar16 = 0;
        piVar15 = (int *)(param_1[0x24] + 0xc);
        do {
          lVar7 = *(longlong *)(lVar16 + *(longlong *)(lVar11 + 0x78));
          iVar10 = (piVar15[6] * *piVar15) / (int)param_1[0x30];
          lVar23 = (longlong)iVar10;
          lVar8 = *(longlong *)(lVar16 + *(longlong *)(lVar11 + 0x80));
          if (0 < iVar10) {
            iVar17 = (iVar20 + 2) * iVar10;
            puVar14 = (undefined8 *)(lVar8 + lVar23 * -8);
            lVar18 = lVar23;
            do {
              lVar12 = (longlong)(((iVar20 - (iVar20 + 2)) + 1) * iVar10 + iVar17);
              puVar1 = puVar14 + 1;
              *(undefined8 *)((longlong)puVar14 + (lVar7 - lVar8)) =
                   *(undefined8 *)(lVar7 + lVar12 * 8);
              *puVar14 = *(undefined8 *)(lVar8 + lVar12 * 8);
              lVar12 = (longlong)iVar17;
              iVar17 = iVar17 + 1;
              *(undefined8 *)(lVar12 * 8 + lVar7) =
                   *(undefined8 *)((lVar23 * 8 - lVar8) + lVar7 + -8 + (longlong)puVar1);
              *(undefined8 *)(lVar12 * 8 + lVar8) = puVar1[lVar23 + -1];
              lVar18 = lVar18 + -1;
              puVar14 = puVar1;
            } while (lVar18 != 0);
          }
          iVar9 = iVar9 + 1;
          lVar16 = lVar16 + 8;
          piVar15 = piVar15 + 0x18;
        } while (iVar9 < (int)param_1[7]);
      }
    }
    *(undefined4 *)(lVar3 + 0x8c) = 0;
  }
  *(undefined1 *)(lVar3 + 0x70) = 0;
  *(undefined4 *)(lVar3 + 0x74) = 0;
  if (*(char *)(lVar5 + 0x7c) == '\0') {
    *(undefined4 *)(lVar6 + 200) = *(undefined4 *)((longlong)param_1 + 0x17c);
    *(int *)(lVar6 + 0xcc) = (int)param_1[0xf] - (int)param_1[0x13];
  }
  lVar11 = param_1[0x48];
  cVar2 = *(char *)(lVar11 + 0x20);
  uVar22 = uVar19;
  if (cVar2 != '\0') {
    uVar22 = uVar19 - 1;
  }
  uVar22 = uVar22 - uVar22 % uVar21;
  iVar20 = uVar19 - uVar22;
  if ((*(char *)(param_1[0x44] + 0x20) == '\0') && ((char)param_1[0xb] == '\0')) {
    uVar13 = 0;
    if (uVar22 != 0) {
      do {
        iVar9 = 0;
        if (0 < *(int *)(lVar4 + 0x50)) {
          do {
            uVar19 = 0;
            if ((int)param_1[0x37] != 0) {
              do {
                lVar11 = param_1[0x46];
                if (*(char *)(lVar11 + 0x20) == '\0') {
                  *(int *)(param_1[0x40] + 0x70) = (int)param_1[0x14];
                  lVar11 = param_1[0x46];
                }
                (**(code **)(lVar11 + 8))(param_1,0);
                uVar19 = uVar19 + 1;
              } while (uVar19 < *(uint *)(param_1 + 0x37));
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(lVar4 + 0x50));
        }
        *(int *)(param_1 + 0x14) = (int)param_1[0x14] + 1;
        *(int *)(param_1 + 0x15) = (int)param_1[0x15] + 1;
        if (*(uint *)(param_1 + 0x14) < *(uint *)((longlong)param_1 + 0x184)) {
          lVar11 = param_1[0x42];
          if ((int)param_1[0x32] < 2) {
            if (*(uint *)(param_1 + 0x14) < *(uint *)((longlong)param_1 + 0x184) - 1) {
              *(undefined4 *)(lVar11 + 0x50) = *(undefined4 *)(param_1[0x33] + 0xc);
              *(undefined8 *)(lVar11 + 0x48) = 0;
            }
            else {
              *(undefined4 *)(lVar11 + 0x50) = *(undefined4 *)(param_1[0x33] + 0x48);
              *(undefined8 *)(lVar11 + 0x48) = 0;
            }
          }
          else {
            *(undefined4 *)(lVar11 + 0x50) = 1;
            *(undefined8 *)(lVar11 + 0x48) = 0;
          }
        }
        else {
          (**(code **)(param_1[0x44] + 0x18))(param_1);
        }
        uVar13 = uVar13 + uVar21;
      } while (uVar13 < uVar22);
      lVar11 = param_1[0x48];
    }
    *(uint *)(param_1 + 0x13) = (int)param_1[0x13] + uVar22;
    if (*(char *)(lVar11 + 0x20) == '\0') {
      FUN_144e8e460(param_1,iVar20);
      bVar24 = *(char *)(lVar5 + 0x7c) == '\0';
    }
    else {
      *(int *)(lVar3 + 0x94) = *(int *)(lVar3 + 0x94) + uVar22 / uVar21;
      FUN_144e8e2b0(param_1,iVar20);
      bVar24 = *(char *)(lVar5 + 0x7c) == '\0';
    }
  }
  else {
    *(uint *)(param_1 + 0x13) = (int)param_1[0x13] + uVar22;
    *(uint *)(param_1 + 0x15) = (int)param_1[0x15] + uVar22 / uVar21;
    if (cVar2 == '\0') {
      FUN_144e8e460(param_1,iVar20);
    }
    else {
      *(int *)(lVar3 + 0x94) = *(int *)(lVar3 + 0x94) + uVar22 / uVar21;
      FUN_144e8e2b0();
    }
    bVar24 = *(char *)(lVar5 + 0x7c) == '\0';
  }
  if (bVar24) {
    *(int *)(lVar6 + 0xcc) = (int)param_1[0xf] - (int)param_1[0x13];
  }
  return param_2;
}



// FUNCTION 144e8dd90 FUN_144e8dd90 body=688 status=ok
// SIG undefined FUN_144e8dd90(void)

void FUN_144e8dd90(longlong *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int local_res8;
  longlong local_res10;
  
  lVar3 = param_1[0x40];
  bVar4 = false;
  lVar6 = lVar3;
  if ((int)param_1[0x23] != 8) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(int *)(*param_1 + 0x2c) = (int)param_1[0x23];
    (**(code **)*param_1)(param_1);
    lVar6 = param_1[0x40];
  }
  if (*(char *)(lVar6 + 0x11) != '\0') {
    *(undefined4 *)(*param_1 + 0x28) = 0x2f;
    (**(code **)*param_1)(param_1);
  }
  if (((*(int *)((longlong)param_1 + 0x24) - 0xcdU & 0xfffffffd) != 0) || ((int)param_1[0x13] != 0))
  {
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)(param_1);
  }
  if ((param_2 == (uint *)0x0) || (param_3 == (uint *)0x0)) {
    *(undefined4 *)(*param_1 + 0x28) = 0x7c;
    (**(code **)*param_1)(param_1);
  }
  uVar11 = *param_3;
  puVar1 = (uint *)((longlong)param_1 + 0x74);
  if ((uVar11 == 0) || (uVar8 = *puVar1, uVar8 < *param_2 + uVar11)) {
    *(undefined4 *)(*param_1 + 0x28) = 0x46;
    (**(code **)*param_1)(param_1);
    uVar11 = *param_3;
    uVar8 = *puVar1;
  }
  if (uVar11 != uVar8) {
    if (((int)param_1[0x32] == 1) && ((int)param_1[7] == 1)) {
      uVar11 = *(uint *)(param_1 + 0x30);
    }
    else {
      uVar11 = (int)param_1[0x2f] * (int)param_1[0x30];
    }
    uVar8 = *param_2;
    uVar7 = uVar8 - uVar8 % uVar11;
    *param_2 = uVar7;
    uVar8 = (*param_3 - uVar7) + uVar8;
    *param_3 = uVar8;
    *puVar1 = uVar8;
    if ((*(char *)(lVar3 + 0x7c) != '\0') && (*(int *)((longlong)param_1 + 0x17c) == 2)) {
      *(uint *)(param_1[0x48] + 0x5c) = uVar8 * *(int *)((longlong)param_1 + 0x7c);
    }
    *(uint *)(param_1[0x40] + 0x14) = *param_2 / uVar11;
    iVar5 = FUN_144e92950(*puVar1 + *param_2,uVar11);
    local_res8 = 0;
    *(int *)(param_1[0x40] + 0x18) = iVar5 + -1;
    iVar5 = (int)param_1[7];
    if (0 < iVar5) {
      piVar10 = (int *)(param_1[0x24] + 8);
      local_res10 = 0x44;
      do {
        if (((int)param_1[0x32] == 1) && (iVar5 == 1)) {
          iVar5 = *piVar10;
          iVar9 = 1;
        }
        else {
          iVar5 = *piVar10;
          iVar9 = iVar5;
        }
        iVar2 = piVar10[8];
        uVar8 = FUN_144e92950(piVar10[7] * *puVar1 * iVar5);
        piVar10[8] = uVar8;
        if ((uVar8 < 2) && (1 < iVar2)) {
          bVar4 = true;
        }
        *(uint *)(local_res10 + -0x28 + param_1[0x40]) = (iVar9 * *param_2) / uVar11;
        iVar5 = FUN_144e92950((*puVar1 + *param_2) * iVar9,uVar11);
        piVar10 = piVar10 + 0x18;
        *(int *)(local_res10 + param_1[0x40]) = iVar5 + -1;
        local_res10 = local_res10 + 4;
        iVar5 = (int)param_1[7];
        local_res8 = local_res8 + 1;
      } while (local_res8 < iVar5);
      if (bVar4) {
        *(undefined1 *)(param_1[0x40] + 0x6c) = 1;
        FUN_145223ba0(param_1);
        *(undefined1 *)(param_1[0x40] + 0x6c) = 0;
      }
    }
  }
  return;
}



// FUNCTION 144e8e040 FUN_144e8e040 body=301 status=ok
// SIG undefined FUN_144e8e040(void)

ulonglong FUN_144e8e040(longlong *param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  
  if ((int)param_1[0x23] != 8) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(int *)(*param_1 + 0x2c) = (int)param_1[0x23];
    (**(code **)*param_1)();
  }
  if (*(char *)(param_1[0x40] + 0x11) != '\0') {
    *(undefined4 *)(*param_1 + 0x28) = 0x2f;
    (**(code **)*param_1)(param_1);
  }
  if (*(int *)((longlong)param_1 + 0x24) != 0xce) {
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)(param_1);
  }
  if (*(uint *)(param_1 + 0xf) <= *(uint *)(param_1 + 0x13)) {
    *(undefined4 *)(*param_1 + 0x28) = 0x7b;
    (**(code **)(*param_1 + 8))(param_1,0xffffffff);
    return 0;
  }
  if (param_1[2] != 0) {
    *(uint *)(param_1[2] + 8) = *(uint *)(param_1 + 0x13);
    *(int *)(param_1[2] + 0xc) = (int)param_1[0xf];
    (**(code **)param_1[2])(param_1);
  }
  uVar2 = (int)param_1[0x30] * *(int *)((longlong)param_1 + 0x17c);
  if (param_3 < uVar2) {
    *(undefined4 *)(*param_1 + 0x28) = 0x17;
    (**(code **)*param_1)(param_1);
  }
  uVar1 = (**(code **)(param_1[0x42] + 0x18))(param_1,param_2);
  if ((int)uVar1 != 0) {
    *(uint *)(param_1 + 0x13) = (int)param_1[0x13] + uVar2;
    uVar1 = (ulonglong)uVar2;
  }
  return uVar1;
}



// FUNCTION 144e8e170 FUN_144e8e170 body=281 status=ok
// SIG undefined FUN_144e8e170(void)

ulonglong FUN_144e8e170(longlong param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x24) != 0xcc) {
    (*(code *)**(undefined8 **)(param_1 + 0x200))();
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0xcc;
  }
  lVar3 = *(longlong *)(param_1 + 0x200);
  if (*(char *)(lVar3 + 0x10) != '\0') {
    puVar1 = (uint *)(param_1 + 0x98);
    uVar4 = *puVar1;
    do {
      if (uVar4 < *(uint *)(param_1 + 0x78)) {
        do {
          uVar5 = uVar4;
          if (*(longlong *)(param_1 + 0x10) != 0) {
            *(uint *)(*(longlong *)(param_1 + 0x10) + 8) = uVar4;
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xc) = *(undefined4 *)(param_1 + 0x78);
            (*(code *)**(undefined8 **)(param_1 + 0x10))(param_1);
            uVar5 = *puVar1;
          }
          lVar3 = *(longlong *)(param_1 + 0x208);
          if (*(int *)(param_1 + 0x118) == 0x10) {
            uVar2 = (**(code **)(lVar3 + 0x18))();
          }
          else if (*(int *)(param_1 + 0x118) == 0xc) {
            uVar2 = (**(code **)(lVar3 + 0x10))();
          }
          else {
            uVar2 = (**(code **)(lVar3 + 8))(param_1,0,puVar1,0);
          }
          uVar4 = *puVar1;
          if (uVar4 == uVar5) {
            return uVar2 & 0xffffffffffffff00;
          }
        } while (uVar4 < *(uint *)(param_1 + 0x78));
      }
      (**(code **)(*(longlong *)(param_1 + 0x200) + 8))(param_1);
      (*(code *)**(undefined8 **)(param_1 + 0x200))(param_1);
      *puVar1 = 0;
      lVar3 = *(longlong *)(param_1 + 0x200);
      uVar4 = 0;
    } while (*(char *)(lVar3 + 0x10) != '\0');
  }
  *(uint *)(param_1 + 0x24) = (*(char *)(param_1 + 0x59) != '\0') + 0xcd;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 144e8e2b0 FUN_144e8e2b0 body=430 status=ok
// SIG undefined FUN_144e8e2b0(void)

void FUN_144e8e2b0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  ulonglong uVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  
  lVar1 = param_1[0x40];
  local_res18 = local_res10;
  ppuVar4 = (undefined1 **)0x0;
  lVar2 = param_1[0x49];
  local_res10[0] = 0;
  ppuVar6 = ppuVar4;
  ppuVar7 = ppuVar4;
  if ((lVar2 != 0) &&
     (ppuVar3 = *(undefined1 ***)(lVar2 + 8), ppuVar6 = (undefined1 **)0x0,
     ppuVar7 = (undefined1 **)0x0, ppuVar3 != (undefined1 **)0x0)) {
    ppuVar6 = &local_res18;
    *(undefined **)(lVar2 + 8) = &DAT_144e8e290;
    ppuVar7 = ppuVar3;
  }
  lVar2 = param_1[0x4a];
  if ((lVar2 != 0) &&
     (ppuVar3 = *(undefined1 ***)(lVar2 + 8), ppuVar4 = (undefined1 **)0x0,
     ppuVar3 != (undefined1 **)0x0)) {
    *(undefined **)(lVar2 + 8) = &DAT_144e8e2a0;
    ppuVar4 = ppuVar3;
  }
  if ((*(char *)(lVar1 + 0x7c) != '\0') && (*(int *)((longlong)param_1 + 0x17c) == 2)) {
    ppuVar6 = (undefined1 **)(param_1[0x48] + 0x50);
  }
  if (param_2 != 0) {
    uVar5 = (ulonglong)param_2;
    do {
      if ((int)param_1[0x23] != 8) {
        *(undefined4 *)(*param_1 + 0x28) = 0xf;
        *(int *)(*param_1 + 0x2c) = (int)param_1[0x23];
        (**(code **)*param_1)(param_1);
      }
      if (*(int *)((longlong)param_1 + 0x24) != 0xcd) {
        *(undefined4 *)(*param_1 + 0x28) = 0x14;
        *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
        (**(code **)*param_1)(param_1);
      }
      if (*(uint *)(param_1 + 0x13) < *(uint *)(param_1 + 0xf)) {
        if (param_1[2] != 0) {
          *(uint *)(param_1[2] + 8) = *(uint *)(param_1 + 0x13);
          *(int *)(param_1[2] + 0xc) = (int)param_1[0xf];
          (**(code **)param_1[2])(param_1);
        }
        local_res8[0] = 0;
        (**(code **)(param_1[0x41] + 8))(param_1,ppuVar6,local_res8,1);
        *(int *)(param_1 + 0x13) = (int)param_1[0x13] + local_res8[0];
      }
      else {
        *(undefined4 *)(*param_1 + 0x28) = 0x7b;
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (ppuVar7 != (undefined1 **)0x0) {
    *(undefined1 ***)(param_1[0x49] + 8) = ppuVar7;
  }
  if (ppuVar4 != (undefined1 **)0x0) {
    *(undefined1 ***)(param_1[0x4a] + 8) = ppuVar4;
  }
  return;
}



// FUNCTION 144e8e460 FUN_144e8e460 body=86 status=ok
// SIG undefined FUN_144e8e460(void)

void FUN_144e8e460(longlong param_1,uint param_2)

{
  int *piVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_2;
  if ((*(char *)(*(longlong *)(param_1 + 0x200) + 0x7c) == '\0') || (*(int *)(param_1 + 0x17c) != 2)
     ) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x208) + 0x74);
    *piVar1 = *piVar1 + param_2 / *(uint *)(param_1 + 0x17c);
    uVar2 = (ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 0x17c);
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + (param_2 - (int)uVar2);
  }
  FUN_144e8e2b0(param_1,uVar2);
  return;
}



// FUNCTION 144e8e4c0 FUN_144e8e4c0 body=622 status=ok
// SIG undefined FUN_144e8e4c0(void)

void FUN_144e8e4c0(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  bool bVar8;
  
  if (*(int *)((longlong)param_1 + 0x24) != 0xca) {
    *(undefined4 *)(*param_1 + 0x28) = 0x14;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x24);
    (**(code **)*param_1)();
  }
  FUN_144e8e860(param_1);
  if (*(char *)(param_1[0x40] + 0x11) == '\0') {
    iVar1 = (int)param_1[7];
    iVar4 = 0;
    lVar6 = param_1[0x24];
    iVar5 = 0;
    if (0 < iVar1) {
      piVar7 = (int *)(lVar6 + 0xc);
      do {
        iVar1 = (int)param_1[0x30];
        iVar3 = iVar1;
        if (iVar1 < 8) {
          do {
            if (((iVar1 * (int)param_1[0x2f]) % (piVar7[-1] * iVar3 * 2) != 0) ||
               ((iVar1 * *(int *)((longlong)param_1 + 0x17c)) % (iVar3 * *piVar7 * 2) != 0)) break;
            iVar3 = iVar3 * 2;
          } while (iVar3 < 8);
        }
        piVar7[6] = iVar3;
        iVar5 = iVar5 + 1;
        iVar1 = (int)param_1[7];
        piVar7 = piVar7 + 0x18;
      } while (iVar5 < iVar1);
      lVar6 = param_1[0x24];
    }
    if (0 < iVar1) {
      piVar7 = (int *)(lVar6 + 0x24);
      do {
        iVar1 = FUN_144e92950(piVar7[-7] * *piVar7 * (int)param_1[6],(int)param_1[0x2f] << 3);
        piVar7[1] = iVar1;
        iVar1 = FUN_144e92950(piVar7[-6] * *piVar7 * *(int *)((longlong)param_1 + 0x34),
                              *(int *)((longlong)param_1 + 0x17c) << 3);
        piVar7[2] = iVar1;
        piVar7 = piVar7 + 0x18;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_1[7]);
    }
  }
  else {
    *(int *)((longlong)param_1 + 0x74) = (int)param_1[6];
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)((longlong)param_1 + 0x34);
  }
  iVar1 = (int)param_1[8];
  switch(iVar1) {
  case 1:
    uVar2 = 1;
    break;
  case 2:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    uVar2 = *(undefined4 *)(&DAT_149bcad40 + (longlong)iVar1 * 4);
    break;
  case 3:
  case 0x10:
    uVar2 = 3;
    break;
  case 4:
  case 5:
    uVar2 = 4;
    break;
  default:
    uVar2 = (undefined4)param_1[7];
  }
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (*(char *)((longlong)param_1 + 0x62) != '\0') {
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if ((((*(char *)(param_1[0x40] + 0x11) != '\0') || ((char)param_1[0xc] != '\0')) ||
      (*(char *)((longlong)param_1 + 0x16a) != '\0')) ||
     ((*(int *)((longlong)param_1 + 0x3c) != 3 || ((int)param_1[7] != 3)))) goto LAB_144e8e721;
  if (iVar1 == 2) {
LAB_144e8e6b0:
    bVar8 = *(int *)((longlong)param_1 + 0x7c) == *(int *)(&DAT_149bcad40 + (longlong)iVar1 * 4);
  }
  else {
    if (iVar1 != 0x10) {
      if (9 < iVar1 - 6U) goto LAB_144e8e721;
      goto LAB_144e8e6b0;
    }
    bVar8 = *(int *)((longlong)param_1 + 0x7c) == 3;
  }
  if (((((bVar8) && (lVar6 = param_1[0x24], *(int *)(lVar6 + 8) == 2)) &&
       ((*(int *)(lVar6 + 0x68) == 1 &&
        ((((*(int *)(lVar6 + 200) == 1 && (*(int *)(lVar6 + 0xc) < 3)) &&
          (*(int *)(lVar6 + 0x6c) == 1)) &&
         ((*(int *)(lVar6 + 0xcc) == 1 &&
          (iVar1 = (int)param_1[0x30], *(int *)(lVar6 + 0x24) == iVar1)))))))) &&
      (*(int *)(lVar6 + 0x84) == iVar1)) && (*(int *)(lVar6 + 0xe4) == iVar1)) {
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x17c);
    return;
  }
LAB_144e8e721:
  *(undefined4 *)((longlong)param_1 + 0x84) = 1;
  return;
}



// FUNCTION 144e8e770 FUN_144e8e770 body=41 status=ok
// SIG undefined FUN_144e8e770(void)

void FUN_144e8e770(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x200);
  *puVar1 = FUN_144e8f300;
  puVar1[1] = FUN_144e8f470;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x6c) = 0;
  FUN_144e8eec0();
  return;
}



// FUNCTION 144e8e7a0 FUN_144e8e7a0 body=184 status=ok
// SIG undefined FUN_144e8e7a0(void)

ulonglong FUN_144e8e7a0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar2 = *(ulonglong *)(param_1 + 0x200);
  if ((((*(char *)(uVar2 + 0x11) != '\0') || (*(char *)(param_1 + 0x60) != '\0')) ||
      (*(char *)(param_1 + 0x16a) != '\0')) ||
     ((*(int *)(param_1 + 0x3c) != 3 || (*(int *)(param_1 + 0x38) != 3)))) goto LAB_144e8e855;
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 2) {
LAB_144e8e7ee:
    uVar2 = (ulonglong)*(uint *)(&DAT_149bcad40 + (longlong)iVar1 * 4);
    bVar3 = *(uint *)(param_1 + 0x7c) == *(uint *)(&DAT_149bcad40 + (longlong)iVar1 * 4);
  }
  else {
    if (iVar1 != 0x10) {
      uVar2 = (ulonglong)(iVar1 - 6U);
      if (9 < iVar1 - 6U) goto LAB_144e8e855;
      goto LAB_144e8e7ee;
    }
    bVar3 = *(int *)(param_1 + 0x7c) == 3;
  }
  if (((((bVar3) && (uVar2 = *(ulonglong *)(param_1 + 0x120), *(int *)(uVar2 + 8) == 2)) &&
       ((*(int *)(uVar2 + 0x68) == 1 &&
        ((((*(int *)(uVar2 + 200) == 1 && (*(int *)(uVar2 + 0xc) < 3)) &&
          (*(int *)(uVar2 + 0x6c) == 1)) &&
         ((*(int *)(uVar2 + 0xcc) == 1 &&
          (iVar1 = *(int *)(param_1 + 0x180), *(int *)(uVar2 + 0x24) == iVar1)))))))) &&
      (*(int *)(uVar2 + 0x84) == iVar1)) && (*(int *)(uVar2 + 0xe4) == iVar1)) {
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
LAB_144e8e855:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 144e8e860 FUN_144e8e860 body=996 status=ok
// SIG undefined FUN_144e8e860(void)

void FUN_144e8e860(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  if (*(char *)(*(longlong *)(param_1 + 0x200) + 0x11) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x48);
    iVar5 = *(int *)(param_1 + 0x30);
    uVar4 = *(int *)(param_1 + 0x44) << 3;
    if (uVar1 < uVar4) {
      if (uVar1 * 2 < uVar4) {
        if (uVar1 * 3 < uVar4) {
          if (uVar1 * 4 < uVar4) {
            if (uVar1 * 5 < uVar4) {
              if (uVar1 * 6 < uVar4) {
                if (uVar1 * 7 < uVar4) {
                  if (uVar1 * 8 < uVar4) {
                    if (uVar1 * 9 < uVar4) {
                      if (uVar1 * 10 < uVar4) {
                        if (uVar1 * 0xb < uVar4) {
                          if (uVar1 * 0xc < uVar4) {
                            if (uVar1 * 0xd < uVar4) {
                              if (uVar1 * 0xe < uVar4) {
                                if (uVar1 * 0xf < uVar4) {
                                  uVar2 = FUN_144e92950(iVar5 << 4,8);
                                  *(undefined4 *)(param_1 + 0x74) = uVar2;
                                  uVar2 = FUN_144e92950(*(int *)(param_1 + 0x34) << 4);
                                  *(undefined4 *)(param_1 + 0x180) = 0x10;
                                }
                                else {
                                  uVar2 = FUN_144e92950(iVar5 * 0xf,8);
                                  *(undefined4 *)(param_1 + 0x74) = uVar2;
                                  uVar2 = FUN_144e92950(*(int *)(param_1 + 0x34) * 0xf);
                                  *(undefined4 *)(param_1 + 0x180) = 0xf;
                                }
                              }
                              else {
                                uVar2 = FUN_144e92950(iVar5 * 0xe,8);
                                *(undefined4 *)(param_1 + 0x74) = uVar2;
                                uVar2 = FUN_144e92950(*(int *)(param_1 + 0x34) * 0xe);
                                *(undefined4 *)(param_1 + 0x180) = 0xe;
                              }
                            }
                            else {
                              uVar2 = FUN_144e92950(iVar5 * 0xd,8);
                              *(undefined4 *)(param_1 + 0x74) = uVar2;
                              uVar2 = FUN_144e92950(*(int *)(param_1 + 0x34) * 0xd);
                              *(undefined4 *)(param_1 + 0x180) = 0xd;
                            }
                          }
                          else {
                            uVar2 = FUN_144e92950(iVar5 * 0xc,8);
                            *(undefined4 *)(param_1 + 0x74) = uVar2;
                            uVar2 = FUN_144e92950(*(int *)(param_1 + 0x34) * 0xc);
                            *(undefined4 *)(param_1 + 0x180) = 0xc;
                          }
                        }
                        else {
                          uVar2 = FUN_144e92950(iVar5 * 0xb,8);
                          *(undefined4 *)(param_1 + 0x74) = uVar2;
                          uVar2 = FUN_144e92950(*(int *)(param_1 + 0x34) * 0xb);
                          *(undefined4 *)(param_1 + 0x180) = 0xb;
                        }
                      }
                      else {
                        uVar2 = FUN_144e92950(iVar5 * 10,8);
                        *(undefined4 *)(param_1 + 0x74) = uVar2;
                        uVar2 = FUN_144e92950(*(int *)(param_1 + 0x34) * 10);
                        *(undefined4 *)(param_1 + 0x180) = 10;
                      }
                    }
                    else {
                      uVar2 = FUN_144e92950(iVar5 * 9,8);
                      *(undefined4 *)(param_1 + 0x74) = uVar2;
                      uVar2 = FUN_144e92950(*(int *)(param_1 + 0x34) * 9);
                      *(undefined4 *)(param_1 + 0x180) = 9;
                    }
                  }
                  else {
                    uVar2 = FUN_144e92950(iVar5 * 8,8);
                    *(undefined4 *)(param_1 + 0x74) = uVar2;
                    uVar2 = FUN_144e92950(*(int *)(param_1 + 0x34) << 3);
                    *(undefined4 *)(param_1 + 0x180) = 8;
                  }
                }
                else {
                  uVar2 = FUN_144e92950(iVar5 * 7,8);
                  *(undefined4 *)(param_1 + 0x74) = uVar2;
                  uVar2 = FUN_144e92950(*(int *)(param_1 + 0x34) * 7);
                  *(undefined4 *)(param_1 + 0x180) = 7;
                }
              }
              else {
                uVar2 = FUN_144e92950(iVar5 * 6,8);
                *(undefined4 *)(param_1 + 0x74) = uVar2;
                uVar2 = FUN_144e92950(*(int *)(param_1 + 0x34) * 6);
                *(undefined4 *)(param_1 + 0x180) = 6;
              }
            }
            else {
              uVar2 = FUN_144e92950(iVar5 * 5,8);
              *(undefined4 *)(param_1 + 0x74) = uVar2;
              uVar2 = FUN_144e92950(*(int *)(param_1 + 0x34) * 5);
              *(undefined4 *)(param_1 + 0x180) = 5;
            }
          }
          else {
            uVar2 = FUN_144e92950(iVar5 * 4,8);
            *(undefined4 *)(param_1 + 0x74) = uVar2;
            uVar2 = FUN_144e92950(*(int *)(param_1 + 0x34) << 2);
            *(undefined4 *)(param_1 + 0x180) = 4;
          }
        }
        else {
          uVar2 = FUN_144e92950(iVar5 * 3,8);
          *(undefined4 *)(param_1 + 0x74) = uVar2;
          uVar2 = FUN_144e92950(*(int *)(param_1 + 0x34) * 3);
          *(undefined4 *)(param_1 + 0x180) = 3;
        }
      }
      else {
        uVar2 = FUN_144e92950(iVar5 * 2,8);
        *(undefined4 *)(param_1 + 0x74) = uVar2;
        uVar2 = FUN_144e92950(*(int *)(param_1 + 0x34) * 2);
        *(undefined4 *)(param_1 + 0x180) = 2;
      }
    }
    else {
      uVar2 = FUN_144e92950(iVar5,8);
      *(undefined4 *)(param_1 + 0x74) = uVar2;
      uVar2 = FUN_144e92950(*(undefined4 *)(param_1 + 0x34));
      *(undefined4 *)(param_1 + 0x180) = 1;
    }
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x38)) {
      puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x120) + 0x24);
      do {
        iVar5 = iVar5 + 1;
        *puVar3 = *(undefined4 *)(param_1 + 0x180);
        *puVar3 = *(undefined4 *)(param_1 + 0x180);
        puVar3 = puVar3 + 0x18;
      } while (iVar5 < *(int *)(param_1 + 0x38));
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x34);
  }
  return;
}



// FUNCTION 144e8ec50 FUN_144e8ec50 body=622 status=ok
// SIG undefined FUN_144e8ec50(void)

void FUN_144e8ec50(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 *puVar8;
  
  if (*(int *)(param_1 + 0x118) == 0x10) {
    pvVar3 = (void *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0xb0000);
    puVar7 = (undefined2 *)((longlong)pvVar3 + 0x20000);
    *(undefined2 **)(param_1 + 0x188) = puVar7;
    memset(pvVar3,0,0x20000);
    iVar5 = 0;
    do {
      *puVar7 = (short)iVar5;
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x10000);
    puVar7 = (undefined2 *)((longlong)pvVar3 + 0x40000);
    for (lVar6 = 0x18000; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = 0xffff;
      puVar7 = puVar7 + 1;
    }
    memset((void *)((longlong)pvVar3 + 0x70000),0,0x30000);
    memcpy((void *)((longlong)pvVar3 + 0xa0000),*(void **)(param_1 + 0x188),0x10000);
    return;
  }
  pcVar1 = (code *)**(undefined8 **)(param_1 + 8);
  if (*(int *)(param_1 + 0x118) == 0xc) {
    pvVar3 = (void *)(*pcVar1)(param_1,1,0xb000);
    puVar7 = (undefined2 *)((longlong)pvVar3 + 0x2000);
    *(undefined2 **)(param_1 + 0x188) = puVar7;
    memset(pvVar3,0,0x2000);
    iVar5 = 0;
    do {
      *puVar7 = (short)iVar5;
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x1000);
    puVar7 = (undefined2 *)((longlong)pvVar3 + 0x4000);
    for (lVar6 = 0x1800; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = 0xfff;
      puVar7 = puVar7 + 1;
    }
    memset((void *)((longlong)pvVar3 + 0x7000),0,0x3000);
    memcpy((void *)((longlong)pvVar3 + 0xa000),*(void **)(param_1 + 0x188),0x1000);
    return;
  }
  pvVar3 = (void *)(*pcVar1)(param_1,1,0x580);
  puVar8 = (undefined1 *)((longlong)pvVar3 + 0x100);
  *(undefined1 **)(param_1 + 0x188) = puVar8;
  memset(pvVar3,0,0x100);
  iVar5 = 0;
  do {
    *puVar8 = (char)iVar5;
    puVar8 = puVar8 + 1;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x100);
  lVar6 = 3;
  puVar4 = (undefined8 *)((longlong)pvVar3 + 0x200);
  do {
    *puVar4 = 0xffffffffffffffff;
    puVar4[1] = 0xffffffffffffffff;
    puVar4[2] = 0xffffffffffffffff;
    puVar4[3] = 0xffffffffffffffff;
    puVar4[4] = 0xffffffffffffffff;
    puVar4[5] = 0xffffffffffffffff;
    puVar4[6] = 0xffffffffffffffff;
    puVar4[7] = 0xffffffffffffffff;
    puVar4[8] = 0xffffffffffffffff;
    puVar4[9] = 0xffffffffffffffff;
    puVar4[10] = 0xffffffffffffffff;
    puVar4[0xb] = 0xffffffffffffffff;
    puVar4[0xc] = 0xffffffffffffffff;
    puVar4[0xd] = 0xffffffffffffffff;
    puVar4[0xe] = 0xffffffffffffffff;
    puVar4[0xf] = 0xffffffffffffffff;
    lVar6 = lVar6 + -1;
    puVar4 = puVar4 + 0x10;
  } while (lVar6 != 0);
  memset((void *)((longlong)pvVar3 + 0x380),0,0x180);
  puVar4 = *(undefined8 **)(param_1 + 0x188);
  uVar2 = puVar4[1];
  *(undefined8 *)((longlong)pvVar3 + 0x500) = *puVar4;
  *(undefined8 *)((longlong)pvVar3 + 0x508) = uVar2;
  uVar2 = puVar4[3];
  *(undefined8 *)((longlong)pvVar3 + 0x510) = puVar4[2];
  *(undefined8 *)((longlong)pvVar3 + 0x518) = uVar2;
  uVar2 = puVar4[5];
  *(undefined8 *)((longlong)pvVar3 + 0x520) = puVar4[4];
  *(undefined8 *)((longlong)pvVar3 + 0x528) = uVar2;
  uVar2 = puVar4[7];
  *(undefined8 *)((longlong)pvVar3 + 0x530) = puVar4[6];
  *(undefined8 *)((longlong)pvVar3 + 0x538) = uVar2;
  uVar2 = puVar4[9];
  *(undefined8 *)((longlong)pvVar3 + 0x540) = puVar4[8];
  *(undefined8 *)((longlong)pvVar3 + 0x548) = uVar2;
  uVar2 = puVar4[0xb];
  *(undefined8 *)((longlong)pvVar3 + 0x550) = puVar4[10];
  *(undefined8 *)((longlong)pvVar3 + 0x558) = uVar2;
  uVar2 = puVar4[0xd];
  *(undefined8 *)((longlong)pvVar3 + 0x560) = puVar4[0xc];
  *(undefined8 *)((longlong)pvVar3 + 0x568) = uVar2;
  uVar2 = puVar4[0xf];
  *(undefined8 *)((longlong)pvVar3 + 0x570) = puVar4[0xe];
  *(undefined8 *)((longlong)pvVar3 + 0x578) = uVar2;
  return;
}



// FUNCTION 144e8eec0 FUN_144e8eec0 body=1086 status=ok
// SIG undefined FUN_144e8eec0(void)

void FUN_144e8eec0(longlong *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  lVar1 = param_1[0x40];
  if (*(char *)(lVar1 + 0x11) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x59) = 0;
    *(undefined4 *)(param_1 + 9) = 1;
    *(undefined4 *)((longlong)param_1 + 0x44) = 1;
  }
  FUN_144e8e4c0();
  FUN_144e8ec50(param_1);
  *(undefined4 *)(lVar1 + 0x78) = 0;
  uVar2 = FUN_144e8e7a0(param_1);
  *(undefined1 *)(lVar1 + 0x7c) = uVar2;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  if ((*(char *)((longlong)param_1 + 0x62) == '\0') || ((char)param_1[0xb] == '\0')) {
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined1 *)((longlong)param_1 + 0x72) = 0;
    if (*(char *)((longlong)param_1 + 0x62) == '\0') goto LAB_144e8f039;
  }
  if (*(char *)((longlong)param_1 + 0x59) != '\0') {
    *(undefined4 *)(*param_1 + 0x28) = 0x2f;
    (**(code **)*param_1)();
  }
  if ((*(int *)((longlong)param_1 + 0x7c) == 3) && ((int)param_1[8] != 0x10)) {
    if (param_1[0x12] == 0) {
      if ((char)param_1[0xd] == '\0') {
        *(undefined1 *)(param_1 + 0xe) = 1;
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x72) = 1;
      }
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x71) = 1;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0xe) = 1;
    *(undefined1 *)((longlong)param_1 + 0x72) = 0;
    param_1[0x12] = 0;
  }
  if ((char)param_1[0xe] != '\0') {
    if ((int)param_1[0x23] == 0x10) {
      *(undefined4 *)(*param_1 + 0x28) = 0xf;
      *(int *)(*param_1 + 0x2c) = (int)param_1[0x23];
      (**(code **)*param_1)(param_1);
    }
    else if ((int)param_1[0x23] == 0xc) {
      FUN_1452358e0();
    }
    else {
      FUN_145234840(param_1);
    }
    *(longlong *)(lVar1 + 0x80) = param_1[0x4a];
  }
  if ((*(char *)((longlong)param_1 + 0x72) != '\0') || (*(char *)((longlong)param_1 + 0x71) != '\0')
     ) {
    if ((int)param_1[0x23] == 0x10) {
      *(undefined4 *)(*param_1 + 0x28) = 0xf;
      *(int *)(*param_1 + 0x2c) = (int)param_1[0x23];
      (**(code **)*param_1)(param_1);
    }
    else if ((int)param_1[0x23] == 0xc) {
      FUN_145238740();
    }
    else {
      FUN_145236a00(param_1);
    }
    *(longlong *)(lVar1 + 0x88) = param_1[0x4a];
  }
LAB_144e8f039:
  if (*(char *)((longlong)param_1 + 0x59) == '\0') {
    iVar3 = (int)param_1[0x23];
    if (*(char *)(lVar1 + 0x7c) == '\0') {
      if (iVar3 == 0x10) {
        FUN_145240b00();
        FUN_1452400e0(param_1);
      }
      else if (iVar3 == 0xc) {
        FUN_145231c80();
        FUN_1452246a0(param_1);
      }
      else {
        FUN_14522f1c0(param_1);
        FUN_145223ba0(param_1);
      }
    }
    else if (iVar3 == 0x10) {
      *(undefined4 *)(*param_1 + 0x28) = 0xf;
      *(int *)(*param_1 + 0x2c) = (int)param_1[0x23];
      (**(code **)*param_1)(param_1);
    }
    else if (iVar3 == 0xc) {
      FUN_14523cbc0();
    }
    else {
      FUN_14523a220(param_1);
    }
    if ((int)param_1[0x23] == 0x10) {
      FUN_145240010();
    }
    else if ((int)param_1[0x23] == 0xc) {
      FUN_14522a110();
    }
    else {
      FUN_145229cd0(param_1,*(undefined1 *)((longlong)param_1 + 0x72));
    }
  }
  iVar3 = (int)param_1[0x23];
  if (*(char *)(param_1[0x40] + 0x11) == '\0') {
    if (iVar3 == 0x10) {
      *(undefined4 *)(*param_1 + 0x28) = 0xf;
      *(int *)(*param_1 + 0x2c) = (int)param_1[0x23];
      (**(code **)*param_1)(param_1);
      iVar3 = (int)param_1[0x23];
    }
    if (iVar3 == 0xc) {
      FUN_14522eab0();
    }
    else {
      FUN_14522e300(param_1);
    }
    if (*(char *)((longlong)param_1 + 0x129) == '\0') {
      if ((char)param_1[0x25] == '\0') {
        FUN_14522a550(param_1);
      }
      else {
        FUN_14522bfa0();
      }
    }
    else {
      FUN_14522cf60();
    }
    if ((*(char *)(param_1[0x44] + 0x20) == '\0') && ((char)param_1[0xb] == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    if ((int)param_1[0x23] == 0xc) {
      FUN_145227f70();
    }
    else {
      FUN_145226200(param_1,uVar4);
    }
  }
  else {
    if (iVar3 == 0x10) {
      FUN_145244e20(param_1);
    }
    else if (iVar3 == 0xc) {
      FUN_1452448a0();
    }
    else {
      FUN_145244340(param_1);
    }
    if (*(char *)((longlong)param_1 + 0x129) == '\0') {
      FUN_145243e20(param_1);
    }
    else {
      *(undefined4 *)(*param_1 + 0x28) = 1;
      (**(code **)*param_1)();
    }
    if ((*(char *)(param_1[0x44] + 0x20) == '\0') && ((char)param_1[0xb] == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    if ((int)param_1[0x23] == 0x10) {
      FUN_145243460();
    }
    else if ((int)param_1[0x23] == 0xc) {
      FUN_145242aa0();
    }
    else {
      FUN_1452420f0(param_1,uVar4);
    }
  }
  if (*(char *)((longlong)param_1 + 0x59) == '\0') {
    if ((int)param_1[0x23] == 0x10) {
      FUN_14523f770();
    }
    else if ((int)param_1[0x23] == 0xc) {
      FUN_145225960();
    }
    else {
      FUN_1452250c0(param_1,0);
    }
  }
  (**(code **)(param_1[1] + 0x30))(param_1);
  (**(code **)(param_1[0x44] + 0x10))(param_1);
  *(undefined4 *)(param_1[0x40] + 0x14) = 0;
  *(int *)(param_1[0x40] + 0x18) = (int)param_1[0x37] + -1;
  *(undefined4 *)(param_1[0x40] + 0x70) = 0;
  if (((param_1[2] != 0) && ((char)param_1[0xb] == '\0')) &&
     (*(char *)(param_1[0x44] + 0x20) != '\0')) {
    iVar3 = (int)param_1[7];
    if ((char)param_1[0x25] != '\0') {
      iVar3 = iVar3 * 3 + 2;
    }
    *(undefined4 *)(param_1[2] + 8) = 0;
    *(int *)(param_1[2] + 0xc) = iVar3 * *(int *)((longlong)param_1 + 0x184);
    *(undefined4 *)(param_1[2] + 0x10) = 0;
    *(uint *)(param_1[2] + 0x14) = (*(char *)((longlong)param_1 + 0x72) != '\0') + 2;
    *(int *)(lVar1 + 0x78) = *(int *)(lVar1 + 0x78) + 1;
  }
  return;
}



// FUNCTION 144e8f300 FUN_144e8f300 body=354 status=ok
// SIG undefined FUN_144e8f300(void)

void FUN_144e8f300(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0x40];
  if (*(char *)(lVar1 + 0x10) == '\0') {
    if ((*(char *)((longlong)param_1 + 0x62) != '\0') && (param_1[0x12] == 0)) {
      if (((char)param_1[0xd] == '\0') || (*(char *)((longlong)param_1 + 0x72) == '\0')) {
        if ((char)param_1[0xe] == '\0') {
          *(undefined4 *)(*param_1 + 0x28) = 0x2e;
          (**(code **)*param_1)();
        }
        else {
          param_1[0x4a] = *(longlong *)(lVar1 + 0x80);
        }
      }
      else {
        param_1[0x4a] = *(longlong *)(lVar1 + 0x88);
        *(undefined1 *)(lVar1 + 0x10) = 1;
      }
    }
    (**(code **)param_1[0x47])(param_1);
    (**(code **)(param_1[0x42] + 0x10))(param_1);
    if (*(char *)((longlong)param_1 + 0x59) != '\0') goto LAB_144e8f412;
    if (*(char *)(lVar1 + 0x7c) == '\0') {
      (**(code **)param_1[0x49])(param_1);
    }
    (**(code **)param_1[0x48])(param_1);
    if (*(char *)((longlong)param_1 + 0x62) != '\0') {
      (**(code **)param_1[0x4a])(param_1);
    }
    (**(code **)param_1[0x43])(param_1);
  }
  else {
    *(undefined1 *)(lVar1 + 0x10) = 0;
    (**(code **)param_1[0x4a])(param_1,0);
    (**(code **)param_1[0x43])(param_1,2);
  }
  (**(code **)param_1[0x41])(param_1);
LAB_144e8f412:
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0x10) = *(undefined4 *)(lVar1 + 0x78);
    *(uint *)(param_1[2] + 0x14) = (*(char *)(lVar1 + 0x10) != '\0') + 1 + *(int *)(lVar1 + 0x78);
    if (((char)param_1[0xb] != '\0') && (*(char *)(param_1[0x44] + 0x21) == '\0')) {
      *(int *)(param_1[2] + 0x14) =
           *(int *)(param_1[2] + 0x14) + (*(char *)((longlong)param_1 + 0x72) != '\0') + 1;
    }
  }
  return;
}



// FUNCTION 144e8f470 FUN_144e8f470 body=38 status=ok
// SIG undefined FUN_144e8f470(void)

void FUN_144e8f470(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x200);
  if (*(char *)(param_1 + 0x62) != '\0') {
    (**(code **)(*(longlong *)(param_1 + 0x250) + 0x18))();
  }
  piVar1 = (int *)(lVar2 + 0x78);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 144e8f4a0 FUN_144e8f4a0 body=345 status=ok
// SIG undefined FUN_144e8f4a0(void)

void FUN_144e8f4a0(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x1a0);
  *puVar1 = FUN_144e90020;
  puVar1[1] = FUN_144e90200;
  puVar1[2] = FUN_144e90240;
  *(undefined1 *)((longlong)puVar1 + 0x19) = 0;
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    *(undefined1 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 1;
  }
  else {
    FUN_144e8f820();
  }
  if (*(char *)(*(longlong *)(param_1 + 0x1a0) + 0x1a) != '\0') {
    *(undefined1 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    FUN_144e8c290();
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x4c)) {
      puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x58) + 8);
      do {
        puVar2[1] = 1;
        iVar3 = iVar3 + 1;
        *puVar2 = 1;
        puVar2 = puVar2 + 0x18;
      } while (iVar3 < *(int *)(param_1 + 0x4c));
    }
  }
  FUN_144e8f600(param_1,param_2);
  if ((*(char *)(*(longlong *)(param_1 + 0x1a0) + 0x1a) != '\0') ||
     ((*(char *)(param_1 + 0x124) != '\0' && (*(char *)(param_1 + 0x101) == '\0')))) {
    *(undefined1 *)(param_1 + 0x102) = 1;
  }
  if ((*(int *)(param_1 + 0x48) == 0xc) && (*(char *)(param_1 + 0x101) == '\0')) {
    *(undefined1 *)(param_1 + 0x102) = 1;
  }
  if (param_2 == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = 2 - (uint)(*(char *)(param_1 + 0x102) != '\0');
  }
  *(int *)(puVar1 + 4) = iVar3;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
  iVar3 = *(int *)(param_1 + 0xf0) * 2;
  if (*(char *)(param_1 + 0x102) == '\0') {
    iVar3 = *(int *)(param_1 + 0xf0);
  }
  *(int *)(puVar1 + 5) = iVar3;
  puVar1[6] = "libjpeg-turbo version 3.0.0 (build 20230801)";
  return;
}



// FUNCTION 144e8f600 FUN_144e8f600 body=544 status=ok
// SIG undefined FUN_144e8f600(void)

void FUN_144e8f600(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = 1;
  iVar1 = *(int *)((longlong)param_1 + 0x34);
  iVar8 = 8;
  if (*(char *)(param_1[0x34] + 0x1a) != '\0') {
    iVar8 = 1;
  }
  if ((((iVar1 == 0) || (iVar6 = (int)param_1[6], iVar6 == 0)) ||
      (*(int *)((longlong)param_1 + 0x4c) < 1)) || ((int)param_1[7] < 1)) {
    *(undefined4 *)(*param_1 + 0x28) = 0x20;
    (**(code **)*param_1)(param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34);
    iVar6 = (int)param_1[6];
  }
  if ((0xffdc < iVar1) || (0xffdc < iVar6)) {
    *(undefined4 *)(*param_1 + 0x28) = 0x29;
    *(undefined4 *)(*param_1 + 0x2c) = 0xffdc;
    (**(code **)*param_1)(param_1);
  }
  if ((((int)param_1[9] - 8U & 0xfffffff3) != 0) || ((int)param_1[9] == 0x14)) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(int *)(*param_1 + 0x2c) = (int)param_1[9];
    (**(code **)*param_1)(param_1);
  }
  iVar1 = *(int *)((longlong)param_1 + 0x4c);
  if (10 < iVar1) {
    *(undefined4 *)(*param_1 + 0x28) = 0x1a;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x4c);
    *(undefined4 *)(*param_1 + 0x30) = 10;
    (**(code **)*param_1)(param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x4c);
  }
  lVar3 = param_1[0xb];
  iVar9 = 0;
  *(undefined4 *)(param_1 + 0x25) = 1;
  iVar4 = 0;
  iVar6 = 1;
  *(undefined4 *)((longlong)param_1 + 300) = 1;
  if (0 < iVar1) {
    piVar5 = (int *)(lVar3 + 0xc);
    do {
      iVar1 = piVar5[-1];
      if (((3 < iVar1 - 1U) || (*piVar5 < 1)) || (4 < *piVar5)) {
        *(undefined4 *)(*param_1 + 0x28) = 0x12;
        (**(code **)*param_1)(param_1);
        iVar6 = (int)param_1[0x25];
        iVar1 = piVar5[-1];
        iVar7 = *(int *)((longlong)param_1 + 300);
      }
      if (iVar6 <= iVar1) {
        iVar6 = iVar1;
      }
      *(int *)(param_1 + 0x25) = iVar6;
      if (iVar7 <= *piVar5) {
        iVar7 = *piVar5;
      }
      iVar4 = iVar4 + 1;
      *(int *)((longlong)param_1 + 300) = iVar7;
      piVar5 = piVar5 + 0x18;
      iVar1 = *(int *)((longlong)param_1 + 0x4c);
    } while (iVar4 < iVar1);
    lVar3 = param_1[0xb];
  }
  if (0 < iVar1) {
    piVar5 = (int *)(lVar3 + 0x24);
    do {
      piVar5[-8] = iVar9;
      *piVar5 = iVar8;
      iVar1 = FUN_144e92950((int)param_1[6] * piVar5[-7],iVar8 * (int)param_1[0x25]);
      piVar5[-2] = iVar1;
      iVar1 = FUN_144e92950(piVar5[-6] * *(int *)((longlong)param_1 + 0x34),
                            iVar8 * *(int *)((longlong)param_1 + 300));
      piVar5[-1] = iVar1;
      iVar1 = FUN_144e92950((int)param_1[6] * piVar5[-7],(int)param_1[0x25]);
      piVar5[1] = iVar1;
      iVar1 = FUN_144e92950(piVar5[-6] * *(int *)((longlong)param_1 + 0x34),
                            *(undefined4 *)((longlong)param_1 + 300));
      piVar5[2] = iVar1;
      iVar9 = iVar9 + 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      piVar5 = piVar5 + 0x18;
    } while (iVar9 < *(int *)((longlong)param_1 + 0x4c));
    iVar7 = *(int *)((longlong)param_1 + 300);
  }
  uVar2 = FUN_144e92950(*(undefined4 *)((longlong)param_1 + 0x34),iVar7 * iVar8);
  *(undefined4 *)(param_1 + 0x26) = uVar2;
  return;
}



// FUNCTION 144e8f820 FUN_144e8f820 body=1230 status=ok
// SIG undefined FUN_144e8f820(void)

void FUN_144e8f820(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_a88 [32];
  uint local_a68;
  int *local_a60;
  longlong local_a58;
  int *local_a50;
  int local_a48 [640];
  char local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a88;
  uVar7 = 0;
  if ((int)param_1[0x1e] < 1) {
    *(undefined4 *)(*param_1 + 0x28) = 0x13;
    *(undefined4 *)(*param_1 + 0x2c) = 0;
    (**(code **)*param_1)();
  }
  lVar10 = param_1[0x1f];
  piVar11 = (int *)(lVar10 + 0x18);
  local_a60 = piVar11;
  if (*(int *)(lVar10 + 0x14) == 0) {
    if (*(int *)(lVar10 + 0x18) == 0x3f) {
      *(undefined1 *)(param_1[0x34] + 0x1a) = 0;
      iVar15 = *(int *)((longlong)param_1 + 0x4c);
      *(undefined1 *)((longlong)param_1 + 0x124) = 0;
      uVar9 = uVar7;
      if (0 < iVar15) {
        do {
          if (9 < uVar7) goto LAB_144e8fcf5;
          local_48[uVar7] = '\0';
          uVar8 = (int)uVar9 + 1;
          uVar7 = uVar7 + 1;
          uVar9 = (ulonglong)uVar8;
        } while ((int)uVar8 < iVar15);
      }
      goto LAB_144e8f942;
    }
  }
  else if (*(int *)(lVar10 + 0x18) == 0) {
    *(undefined1 *)(param_1[0x34] + 0x1a) = 1;
    iVar15 = *(int *)((longlong)param_1 + 0x4c);
    *(undefined1 *)((longlong)param_1 + 0x124) = 0;
    uVar9 = uVar7;
    if (0 < iVar15) {
      do {
        if (9 < uVar7) {
LAB_144e8fcf5:
                    /* WARNING: Subroutine does not return */
          FUN_144e2bb84();
        }
        local_48[uVar7] = '\0';
        uVar8 = (int)uVar9 + 1;
        uVar7 = uVar7 + 1;
        uVar9 = (ulonglong)uVar8;
      } while ((int)uVar8 < iVar15);
    }
    goto LAB_144e8f942;
  }
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  *(undefined1 *)(param_1[0x34] + 0x1a) = 0;
  if (0 < (int)*(uint *)((longlong)param_1 + 0x4c)) {
    memset(local_a48,-1,(ulonglong)*(uint *)((longlong)param_1 + 0x4c) << 8);
  }
LAB_144e8f942:
  iVar15 = 1;
  if (0 < (int)param_1[0x1e]) {
    do {
      lVar10 = 0;
      iVar1 = piVar11[-6];
      lVar14 = (longlong)iVar1;
      if (3 < iVar1 - 1U) {
        *(undefined4 *)(*param_1 + 0x28) = 0x1a;
        *(int *)(*param_1 + 0x2c) = iVar1;
        *(undefined4 *)(*param_1 + 0x30) = 4;
        (**(code **)*param_1)(param_1);
      }
      if (0 < iVar1) {
        piVar12 = piVar11 + -5;
        do {
          iVar2 = *piVar12;
          if ((iVar2 < 0) || (*(int *)((longlong)param_1 + 0x4c) <= iVar2)) {
            *(undefined4 *)(*param_1 + 0x28) = 0x13;
            *(int *)(*param_1 + 0x2c) = iVar15;
            (**(code **)*param_1)(param_1);
          }
          if ((lVar10 != 0) && (iVar2 <= piVar12[-1])) {
            *(undefined4 *)(*param_1 + 0x28) = 0x13;
            *(int *)(*param_1 + 0x2c) = iVar15;
            (**(code **)*param_1)(param_1);
          }
          lVar10 = lVar10 + 1;
          piVar12 = piVar12 + 1;
        } while (lVar10 < lVar14);
      }
      local_a68 = piVar11[-1];
      iVar2 = *piVar11;
      iVar3 = piVar11[1];
      iVar4 = piVar11[2];
      if (*(char *)((longlong)param_1 + 0x124) == '\0') {
        if (*(char *)(param_1[0x34] + 0x1a) == '\0') {
          if ((((local_a68 != 0) || (iVar2 != 0x3f)) || (iVar3 != 0)) || (iVar4 != 0))
          goto LAB_144e8fc33;
        }
        else if (((6 < local_a68 - 1) || (iVar2 != 0)) ||
                ((iVar3 != 0 || ((iVar4 < 0 || ((int)param_1[9] <= iVar4)))))) {
LAB_144e8fc33:
          *(undefined4 *)(*param_1 + 0x28) = 0x11;
          *(int *)(*param_1 + 0x2c) = iVar15;
          (**(code **)*param_1)(param_1);
        }
        if (0 < iVar1) {
          piVar12 = piVar11 + -5;
          do {
            iVar1 = *piVar12;
            if (local_48[iVar1] != '\0') {
              *(undefined4 *)(*param_1 + 0x28) = 0x13;
              *(int *)(*param_1 + 0x2c) = iVar15;
              (**(code **)*param_1)(param_1);
            }
            piVar12 = piVar12 + 1;
            local_48[iVar1] = '\x01';
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
      }
      else {
        iVar6 = 10;
        if ((int)param_1[9] == 0xc) {
          iVar6 = 0xd;
        }
        if (((((0x3f < local_a68) || (iVar2 < (int)local_a68)) || (0x3f < iVar2)) ||
            ((iVar3 < 0 || (iVar6 < iVar3)))) || ((iVar4 < 0 || (iVar6 < iVar4)))) {
          *(undefined4 *)(*param_1 + 0x28) = 0x11;
          *(int *)(*param_1 + 0x2c) = iVar15;
          (**(code **)*param_1)(param_1);
        }
        if (local_a68 == 0) {
          bVar16 = iVar2 == 0;
        }
        else {
          bVar16 = iVar1 == 1;
        }
        if (!bVar16) {
          *(undefined4 *)(*param_1 + 0x28) = 0x11;
          *(int *)(*param_1 + 0x2c) = iVar15;
          (**(code **)*param_1)(param_1);
        }
        piVar11 = local_a60;
        if (0 < iVar1) {
          local_a50 = local_a60 + -5;
          lVar10 = (longlong)(int)local_a68;
          local_a58 = lVar10;
          do {
            piVar12 = local_a48 + (longlong)*local_a50 * 0x40;
            lVar5 = lVar10;
            piVar11 = local_a60;
            if ((local_a68 != 0) && (*piVar12 < 0)) {
              *(undefined4 *)(*param_1 + 0x28) = 0x11;
              *(int *)(*param_1 + 0x2c) = iVar15;
              (**(code **)*param_1)(param_1);
              lVar5 = local_a58;
              lVar10 = local_a58;
              piVar11 = local_a60;
            }
            for (; local_a60 = piVar11, lVar5 <= iVar2; lVar5 = lVar5 + 1) {
              if (piVar12[lVar5] < 0) {
                bVar16 = iVar3 == 0;
LAB_144e8fb25:
                if (!bVar16) goto LAB_144e8fb27;
              }
              else {
                if (iVar3 == piVar12[lVar5]) {
                  bVar16 = iVar4 == iVar3 + -1;
                  goto LAB_144e8fb25;
                }
LAB_144e8fb27:
                *(undefined4 *)(*param_1 + 0x28) = 0x11;
                *(int *)(*param_1 + 0x2c) = iVar15;
                (**(code **)*param_1)(param_1);
              }
              piVar12[lVar5] = iVar4;
              lVar10 = local_a58;
              piVar11 = local_a60;
            }
            local_a50 = local_a50 + 1;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
      }
      piVar11 = piVar11 + 9;
      iVar15 = iVar15 + 1;
      local_a60 = piVar11;
    } while (iVar15 <= (int)param_1[0x1e]);
  }
  iVar15 = 0;
  if (*(char *)((longlong)param_1 + 0x124) == '\0') {
    if (0 < *(int *)((longlong)param_1 + 0x4c)) {
      pcVar13 = local_48;
      do {
        if (*pcVar13 == '\0') {
          *(undefined4 *)(*param_1 + 0x28) = 0x2d;
          (**(code **)*param_1)(param_1);
        }
        iVar15 = iVar15 + 1;
        pcVar13 = pcVar13 + 1;
      } while (iVar15 < *(int *)((longlong)param_1 + 0x4c));
    }
  }
  else if (0 < *(int *)((longlong)param_1 + 0x4c)) {
    piVar11 = local_a48;
    do {
      if (*piVar11 < 0) {
        *(undefined4 *)(*param_1 + 0x28) = 0x2d;
        (**(code **)*param_1)(param_1);
      }
      iVar15 = iVar15 + 1;
      piVar11 = piVar11 + 0x40;
    } while (iVar15 < *(int *)((longlong)param_1 + 0x4c));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a88);
}



// FUNCTION 144e8fd00 FUN_144e8fd00 body=297 status=ok
// SIG undefined FUN_144e8fd00(void)

void FUN_144e8fd00(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  
  lVar2 = param_1[0x1f];
  if (lVar2 != 0) {
    iVar3 = 0;
    piVar1 = (int *)(lVar2 + (longlong)*(int *)(param_1[0x34] + 0x2c) * 0x24);
    *(undefined4 *)((longlong)param_1 + 0x134) =
         *(undefined4 *)(lVar2 + (longlong)*(int *)(param_1[0x34] + 0x2c) * 0x24);
    if (0 < *piVar1) {
      plVar5 = param_1 + 0x27;
      piVar6 = piVar1;
      do {
        piVar6 = piVar6 + 1;
        iVar3 = iVar3 + 1;
        *plVar5 = (longlong)*piVar6 * 0x60 + param_1[0xb];
        plVar5 = plVar5 + 1;
      } while (iVar3 < *piVar1);
    }
    *(int *)((longlong)param_1 + 0x18c) = piVar1[5];
    *(int *)(param_1 + 0x32) = piVar1[6];
    *(int *)((longlong)param_1 + 0x194) = piVar1[7];
    *(int *)(param_1 + 0x33) = piVar1[8];
    return;
  }
  iVar3 = *(int *)((longlong)param_1 + 0x4c);
  if (4 < iVar3) {
    *(undefined4 *)(*param_1 + 0x28) = 0x1a;
    *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x4c);
    *(undefined4 *)(*param_1 + 0x30) = 4;
    (**(code **)*param_1)(param_1);
    iVar3 = *(int *)((longlong)param_1 + 0x4c);
  }
  *(int *)((longlong)param_1 + 0x134) = iVar3;
  iVar4 = 0;
  if (0 < iVar3) {
    plVar5 = param_1 + 0x27;
    do {
      lVar2 = (longlong)iVar4;
      iVar4 = iVar4 + 1;
      *plVar5 = lVar2 * 0x60 + param_1[0xb];
      plVar5 = plVar5 + 1;
    } while (iVar4 < *(int *)((longlong)param_1 + 0x4c));
  }
  if (*(char *)(param_1[0x34] + 0x1a) == '\0') {
    *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
    param_1[0x32] = 0x3f;
    *(undefined4 *)(param_1 + 0x33) = 0;
  }
  return;
}



// FUNCTION 144e8fe30 FUN_144e8fe30 body=487 status=ok
// SIG undefined FUN_144e8fe30(void)

ulonglong FUN_144e8fe30(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  
  iVar7 = 8;
  if (*(char *)(param_1[0x34] + 0x1a) != '\0') {
    iVar7 = 1;
  }
  if (*(int *)((longlong)param_1 + 0x134) == 1) {
    lVar1 = param_1[0x27];
    *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(lVar1 + 0x1c);
    *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)(lVar1 + 0x20);
    uVar3 = (ulonglong)*(uint *)(lVar1 + 0x20) / (ulonglong)*(uint *)(lVar1 + 0xc);
    uVar5 = *(uint *)(lVar1 + 0x20) % *(uint *)(lVar1 + 0xc);
    *(undefined4 *)(lVar1 + 0x34) = 1;
    *(undefined4 *)(lVar1 + 0x38) = 1;
    *(undefined4 *)(lVar1 + 0x3c) = 1;
    if (uVar5 == 0) {
      uVar5 = *(uint *)(lVar1 + 0xc);
    }
    *(uint *)(lVar1 + 0x48) = uVar5;
    *(int *)(lVar1 + 0x40) = iVar7;
    *(undefined4 *)(lVar1 + 0x44) = 1;
    param_1[0x2c] = 1;
  }
  else {
    if (3 < *(int *)((longlong)param_1 + 0x134) - 1U) {
      *(undefined4 *)(*param_1 + 0x28) = 0x1a;
      *(undefined4 *)(*param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x134);
      *(undefined4 *)(*param_1 + 0x30) = 4;
      (**(code **)*param_1)(param_1);
    }
    uVar2 = FUN_144e92950((int)param_1[6],iVar7 * (int)param_1[0x25]);
    *(undefined4 *)(param_1 + 0x2b) = uVar2;
    uVar3 = FUN_144e92950(*(undefined4 *)((longlong)param_1 + 0x34));
    iVar8 = 0;
    *(int *)((longlong)param_1 + 0x15c) = (int)uVar3;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (0 < *(int *)((longlong)param_1 + 0x134)) {
      plVar10 = param_1 + 0x27;
      do {
        lVar1 = *plVar10;
        uVar5 = *(uint *)(lVar1 + 8);
        uVar4 = *(uint *)(lVar1 + 0xc);
        iVar9 = uVar4 * uVar5;
        *(uint *)(lVar1 + 0x34) = uVar5;
        *(uint *)(lVar1 + 0x38) = uVar4;
        *(uint *)(lVar1 + 0x40) = uVar5 * iVar7;
        uVar6 = *(uint *)(lVar1 + 0x1c) % uVar5;
        *(int *)(lVar1 + 0x3c) = iVar9;
        if (uVar6 == 0) {
          uVar6 = uVar5;
        }
        *(uint *)(lVar1 + 0x44) = uVar6;
        uVar3 = (ulonglong)*(uint *)(lVar1 + 0x20) / (ulonglong)uVar4;
        uVar5 = (uint)((ulonglong)*(uint *)(lVar1 + 0x20) % (ulonglong)uVar4);
        if (uVar5 == 0) {
          uVar5 = uVar4;
        }
        *(uint *)(lVar1 + 0x48) = uVar5;
        if (10 < (int)param_1[0x2c] + iVar9) {
          *(undefined4 *)(*param_1 + 0x28) = 0xd;
          uVar3 = (**(code **)*param_1)(param_1);
        }
        for (; 0 < iVar9; iVar9 = iVar9 + -1) {
          uVar3 = (ulonglong)(int)param_1[0x2c];
          *(int *)((longlong)param_1 + uVar3 * 4 + 0x164) = iVar8;
          *(int *)(param_1 + 0x2c) = (int)param_1[0x2c] + 1;
        }
        iVar8 = iVar8 + 1;
        plVar10 = plVar10 + 1;
      } while (iVar8 < *(int *)((longlong)param_1 + 0x134));
    }
  }
  if (0 < (int)param_1[0x22]) {
    uVar4 = (int)param_1[0x22] * (int)param_1[0x2b];
    uVar5 = 0xffff;
    if ((int)uVar4 < 0xffff) {
      uVar5 = uVar4;
    }
    uVar3 = (ulonglong)uVar5;
    *(uint *)((longlong)param_1 + 0x10c) = uVar5;
  }
  return uVar3;
}



// FUNCTION 144e90020 FUN_144e90020 body=471 status=ok
// SIG undefined FUN_144e90020(void)

void FUN_144e90020(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1[0x34];
  iVar1 = *(int *)(lVar2 + 0x20);
  if (iVar1 == 0) {
    FUN_144e8fd00(param_1);
    FUN_144e8fe30(param_1);
    if ((char)param_1[0x20] == '\0') {
      (**(code **)param_1[0x39])(param_1);
      (**(code **)param_1[0x3a])(param_1);
      (**(code **)param_1[0x36])(param_1,0);
    }
    (**(code **)param_1[0x3b])(param_1);
    (**(code **)param_1[0x3c])(param_1,*(undefined1 *)((longlong)param_1 + 0x102));
    uVar3 = 0;
    if (1 < *(int *)(lVar2 + 0x28)) {
      uVar3 = 3;
    }
    (**(code **)param_1[0x37])(param_1,uVar3);
    (**(code **)param_1[0x35])(param_1,0);
    *(bool *)(lVar2 + 0x18) = *(char *)((longlong)param_1 + 0x102) == '\0';
  }
  else {
    if (iVar1 == 1) {
      FUN_144e8fd00(param_1);
      FUN_144e8fe30(param_1);
      if ((((*(int *)((longlong)param_1 + 0x18c) != 0) || (*(int *)((longlong)param_1 + 0x194) == 0)
           ) || (*(char *)((longlong)param_1 + 0x101) != '\0')) ||
         (*(char *)(param_1[0x34] + 0x1a) != '\0')) {
        (**(code **)param_1[0x3c])(param_1,1);
        (**(code **)param_1[0x37])(param_1,2);
        *(undefined1 *)(lVar2 + 0x18) = 0;
        goto LAB_144e901c6;
      }
      *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + 1;
      *(undefined4 *)(lVar2 + 0x20) = 2;
    }
    else if (iVar1 != 2) {
      *(undefined4 *)(*param_1 + 0x28) = 0x30;
      (**(code **)*param_1)(param_1);
      goto LAB_144e901c6;
    }
    if (*(char *)((longlong)param_1 + 0x102) == '\0') {
      FUN_144e8fd00(param_1);
      FUN_144e8fe30(param_1);
    }
    (**(code **)param_1[0x3c])(param_1,0);
    (**(code **)param_1[0x37])(param_1,2);
    if (*(int *)(lVar2 + 0x2c) == 0) {
      (**(code **)(param_1[0x38] + 8))(param_1);
    }
    (**(code **)(param_1[0x38] + 0x10))(param_1);
    *(undefined1 *)(lVar2 + 0x18) = 0;
  }
LAB_144e901c6:
  *(bool *)(lVar2 + 0x19) = *(int *)(lVar2 + 0x24) == *(int *)(lVar2 + 0x28) + -1;
  if (param_1[2] != 0) {
    *(int *)(param_1[2] + 0x10) = *(int *)(lVar2 + 0x24);
    *(undefined4 *)(param_1[2] + 0x14) = *(undefined4 *)(lVar2 + 0x28);
  }
  return;
}



// FUNCTION 144e90200 FUN_144e90200 body=49 status=ok
// SIG undefined FUN_144e90200(void)

void FUN_144e90200(longlong param_1)

{
  *(undefined1 *)(*(longlong *)(param_1 + 0x1a0) + 0x18) = 0;
  (**(code **)(*(longlong *)(param_1 + 0x1c0) + 8))();
                    /* WARNING: Could not recover jumptable at 0x000144e9022d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x1c0) + 0x10))(param_1);
  return;
}



// FUNCTION 144e90240 FUN_144e90240 body=130 status=ok
// SIG undefined FUN_144e90240(void)

void FUN_144e90240(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x1a0);
  (**(code **)(*(longlong *)(param_1 + 0x1e0) + 0x18))();
  iVar1 = *(int *)(lVar2 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(lVar2 + 0x20) = 2;
    if (*(char *)(param_1 + 0x102) != '\0') goto LAB_144e902b4;
  }
  else {
    if (iVar1 == 1) {
      *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + 1;
      *(undefined4 *)(lVar2 + 0x20) = 2;
      return;
    }
    if (iVar1 != 2) goto LAB_144e902b4;
    if (*(char *)(param_1 + 0x102) != '\0') {
      *(int *)(lVar2 + 0x2c) = *(int *)(lVar2 + 0x2c) + 1;
      *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + 1;
      *(undefined4 *)(lVar2 + 0x20) = 1;
      return;
    }
  }
  *(int *)(lVar2 + 0x2c) = *(int *)(lVar2 + 0x2c) + 1;
LAB_144e902b4:
  *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + 1;
  return;
}



// FUNCTION 144e902d0 FUN_144e902d0 body=938 status=ok
// SIG undefined FUN_144e902d0(void)

void FUN_144e902d0(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  
  if ((int)param_1[9] != 8) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(int *)(*param_1 + 0x2c) = (int)param_1[9];
    (**(code **)*param_1)();
  }
  puVar2 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x28);
  param_1[0x39] = (longlong)puVar2;
  *puVar2 = &DAT_144e91cc0;
  switch(*(int *)((longlong)param_1 + 0x3c)) {
  case 1:
    if ((int)param_1[7] != 1) {
LAB_144e90376:
      *(undefined4 *)(*param_1 + 0x28) = 9;
      (**(code **)*param_1)(param_1);
    }
    break;
  case 2:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    if ((int)param_1[7] !=
        *(int *)(&DAT_149bcaeb0 + (longlong)*(int *)((longlong)param_1 + 0x3c) * 4))
    goto LAB_144e90376;
    break;
  case 3:
    if ((int)param_1[7] != 3) goto LAB_144e90376;
    break;
  case 4:
  case 5:
    if ((int)param_1[7] != 4) goto LAB_144e90376;
    break;
  default:
    if ((int)param_1[7] < 1) goto LAB_144e90376;
  }
  iVar1 = (int)param_1[10];
  if (iVar1 == 1) {
    if ((*(char *)(param_1[0x34] + 0x1a) != '\0') && (*(int *)((longlong)param_1 + 0x3c) != 1)) {
      *(undefined4 *)(*param_1 + 0x28) = 0x1b;
      (**(code **)*param_1)(param_1);
    }
    if (*(int *)((longlong)param_1 + 0x4c) != 1) {
      *(undefined4 *)(*param_1 + 0x28) = 10;
      (**(code **)*param_1)(param_1);
    }
    iVar1 = *(int *)((longlong)param_1 + 0x3c);
    if (iVar1 != 1) {
      if ((iVar1 == 2) || (iVar1 - 6U < 10)) {
        iVar1 = FUN_145258730();
        if (iVar1 == 0) {
          *puVar2 = FUN_144e906c0;
          pcVar3 = FUN_144e91050;
        }
        else {
          pcVar3 = FUN_145258940;
        }
        goto LAB_144e90666;
      }
      if (iVar1 != 3) goto LAB_144e90618;
    }
    pcVar3 = FUN_144e91a60;
    goto LAB_144e90666;
  }
  if (iVar1 == 2) {
    if (((*(char *)(param_1[0x34] + 0x1a) != '\0') && (*(int *)((longlong)param_1 + 0x3c) != 2)) &&
       (9 < *(int *)((longlong)param_1 + 0x3c) - 6U)) {
      *(undefined4 *)(*param_1 + 0x28) = 0x1b;
      (**(code **)*param_1)(param_1);
    }
    if (*(int *)((longlong)param_1 + 0x4c) != 3) {
      *(undefined4 *)(*param_1 + 0x28) = 10;
      (**(code **)*param_1)(param_1);
    }
    iVar1 = *(int *)((longlong)param_1 + 0x3c);
    lVar4 = (longlong)iVar1;
    if (((*(int *)(&DAT_149bcadc0 + lVar4 * 4) != 0) || (*(int *)(&DAT_149bcae10 + lVar4 * 4) != 1))
       || ((*(int *)(&DAT_149bcae60 + lVar4 * 4) != 2 || (*(int *)(&DAT_149bcaeb0 + lVar4 * 4) != 3)
           ))) {
      if ((iVar1 != 2) && (9 < iVar1 - 6U)) goto LAB_144e90618;
      pcVar3 = FUN_144e914b0;
      goto LAB_144e90666;
    }
  }
  else {
    if (iVar1 == 3) {
      if ((*(char *)(param_1[0x34] + 0x1a) != '\0') && (*(int *)((longlong)param_1 + 0x3c) != 3)) {
        *(undefined4 *)(*param_1 + 0x28) = 0x1b;
        (**(code **)*param_1)(param_1);
      }
      if (*(int *)((longlong)param_1 + 0x4c) != 3) {
        *(undefined4 *)(*param_1 + 0x28) = 10;
        (**(code **)*param_1)(param_1);
      }
      iVar1 = *(int *)((longlong)param_1 + 0x3c);
      if ((iVar1 == 2) || (iVar1 - 6U < 10)) {
        iVar1 = FUN_1452586d0();
        if (iVar1 == 0) {
          *puVar2 = FUN_144e906c0;
          pcVar3 = FUN_144e90930;
        }
        else {
          pcVar3 = FUN_145258800;
        }
      }
      else {
        if (iVar1 != 3) goto LAB_144e90618;
        pcVar3 = FUN_144e91ae0;
      }
      goto LAB_144e90666;
    }
    if (iVar1 == 4) {
      if ((*(char *)(param_1[0x34] + 0x1a) != '\0') && (*(int *)((longlong)param_1 + 0x3c) != 4)) {
        *(undefined4 *)(*param_1 + 0x28) = 0x1b;
        (**(code **)*param_1)(param_1);
      }
      if (*(int *)((longlong)param_1 + 0x4c) != 4) {
        *(undefined4 *)(*param_1 + 0x28) = 10;
        (**(code **)*param_1)(param_1);
      }
      if (*(int *)((longlong)param_1 + 0x3c) != 4) {
LAB_144e90618:
        *(undefined4 *)(*param_1 + 0x28) = 0x1b;
                    /* WARNING: Could not recover jumptable at 0x000144e90637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*param_1)(param_1);
        return;
      }
      pcVar3 = FUN_144e91ae0;
      goto LAB_144e90666;
    }
    if (iVar1 == 5) {
      if ((*(char *)(param_1[0x34] + 0x1a) != '\0') && (*(int *)((longlong)param_1 + 0x3c) != 5)) {
        *(undefined4 *)(*param_1 + 0x28) = 0x1b;
        (**(code **)*param_1)(param_1);
      }
      if (*(int *)((longlong)param_1 + 0x4c) != 4) {
        *(undefined4 *)(*param_1 + 0x28) = 10;
        (**(code **)*param_1)(param_1);
      }
      if (*(int *)((longlong)param_1 + 0x3c) == 4) {
        *puVar2 = FUN_144e906c0;
        pcVar3 = FUN_144e918b0;
      }
      else {
        if (*(int *)((longlong)param_1 + 0x3c) != 5) goto LAB_144e90618;
        pcVar3 = FUN_144e91ae0;
      }
      goto LAB_144e90666;
    }
    if ((iVar1 != *(int *)((longlong)param_1 + 0x3c)) ||
       (*(int *)((longlong)param_1 + 0x4c) != (int)param_1[7])) {
      *(undefined4 *)(*param_1 + 0x28) = 0x1b;
      (**(code **)*param_1)(param_1);
    }
  }
  pcVar3 = FUN_144e91ae0;
LAB_144e90666:
  puVar2[1] = pcVar3;
  return;
}



// FUNCTION 144e906c0 FUN_144e906c0 body=609 status=ok
// SIG undefined FUN_144e906c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144e906c0(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  lVar9 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x2000);
  *(longlong *)(lVar1 + 0x20) = lVar9;
  auVar8 = _DAT_149bcaf80;
  auVar7 = _DAT_149bcaf70;
  auVar6 = _DAT_149bcaf60;
  auVar5 = _DAT_149bcaf50;
  auVar4 = _DAT_149bcaf30;
  auVar3 = _DAT_149bcaf10;
  auVar2 = _DAT_149bcaf00;
  iVar12 = 0;
  piVar10 = (int *)(lVar9 + 0x800);
  if (DAT_14c707900 < 2) {
    iVar15 = 0;
    iVar14 = 0x807fff;
    iVar16 = 0;
    iVar17 = 0;
    iVar18 = 0;
    iVar13 = 0;
    iVar11 = 0x8000;
    do {
      piVar10[-0x200] = iVar13;
      iVar13 = iVar13 + 0x4c8b;
      piVar10[-0x100] = iVar18;
      iVar18 = iVar18 + 0x9646;
      *piVar10 = iVar11;
      iVar11 = iVar11 + 0x1d2f;
      piVar10[0x100] = iVar17;
      iVar17 = iVar17 + -0x2b33;
      piVar10[0x200] = iVar16;
      iVar16 = iVar16 + -0x54cd;
      piVar10[0x300] = iVar14;
      iVar14 = iVar14 + 0x8000;
      piVar10[0x400] = iVar15;
      iVar15 = iVar15 + -0x6b2f;
      piVar10[0x500] = iVar12;
      piVar10 = piVar10 + 1;
      iVar12 = iVar12 + -0x14d1;
    } while (iVar11 < 0x1d91d2);
    return;
  }
  do {
    iVar11 = iVar12 + 4;
    auVar21._4_4_ = iVar12 + 1;
    auVar21._0_4_ = iVar12;
    auVar21._8_4_ = iVar12 + 2;
    auVar21._12_4_ = iVar12 + 3;
    auVar19 = pmulld(auVar21,auVar3);
    *(undefined1 (*) [16])(piVar10 + -0x200) = auVar19;
    auVar19 = pmulld(auVar21,auVar2);
    *piVar10 = auVar19._0_4_ + 0x8000;
    piVar10[1] = auVar19._4_4_ + 0x8000;
    piVar10[2] = auVar19._8_4_ + 0x8000;
    piVar10[3] = auVar19._12_4_ + 0x8000;
    auVar19 = pmulld(auVar21,auVar7);
    *(undefined1 (*) [16])(piVar10 + 0x100) = auVar19;
    auVar19 = pmulld(auVar21,auVar4);
    piVar10[0x300] = iVar12 * 0x8000 + 0x807fff;
    piVar10[0x301] = auVar21._4_4_ * 0x8000 + 0x807fff;
    piVar10[0x302] = auVar21._8_4_ * 0x8000 + 0x807fff;
    piVar10[0x303] = auVar21._12_4_ * 0x8000 + 0x807fff;
    *(undefined1 (*) [16])(piVar10 + -0x100) = auVar19;
    auVar19 = pmulld(auVar21,auVar5);
    auVar20 = pmulld(auVar21,auVar6);
    auVar21 = pmulld(auVar21,auVar8);
    *(undefined1 (*) [16])(piVar10 + 0x400) = auVar19;
    *(undefined1 (*) [16])(piVar10 + 0x200) = auVar20;
    *(undefined1 (*) [16])(piVar10 + 0x500) = auVar21;
    piVar10 = piVar10 + 4;
    iVar12 = iVar11;
  } while (iVar11 < 0x100);
  return;
}



// FUNCTION 144e90930 FUN_144e90930 body=1780 status=ok
// SIG undefined FUN_144e90930(void)

void FUN_144e90930(longlong param_1,longlong *param_2,longlong *param_3,uint param_4,int param_5)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 6:
    uVar3 = *(uint *)(param_1 + 0x30);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x20);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar5 = *param_2;
      param_2 = param_2 + 1;
      uVar13 = (ulonglong)param_4;
      param_4 = param_4 + 1;
      lVar2 = uVar13 * 8;
      lVar6 = *(longlong *)(lVar2 + *param_3);
      puVar7 = *(undefined1 **)(lVar2 + param_3[1]);
      lVar2 = *(longlong *)(lVar2 + param_3[2]);
      if (uVar3 != 0) {
        pbVar9 = (byte *)(lVar5 + 2);
        uVar13 = (ulonglong)uVar3;
        puVar10 = puVar7;
        do {
          uVar8 = (ulonglong)pbVar9[-1];
          uVar12 = (ulonglong)*pbVar9;
          uVar11 = (ulonglong)pbVar9[-2];
          pbVar9 = pbVar9 + 3;
          puVar10[lVar6 - (longlong)puVar7] =
               (char)((uint)(*(int *)(lVar4 + 0x800 + uVar12 * 4) +
                             *(int *)(lVar4 + 0x400 + uVar8 * 4) + *(int *)(lVar4 + uVar11 * 4)) >>
                     0x10);
          *puVar10 = (char)((uint)(*(int *)(lVar4 + 0x1400 + uVar12 * 4) +
                                   *(int *)(lVar4 + 0x1000 + uVar8 * 4) +
                                  *(int *)(lVar4 + 0xc00 + uVar11 * 4)) >> 0x10);
          puVar10[lVar2 - (longlong)puVar7] =
               (char)((uint)(*(int *)(lVar4 + 0x1c00 + uVar12 * 4) +
                             *(int *)(lVar4 + 0x1800 + uVar8 * 4) +
                            *(int *)(lVar4 + 0x1400 + uVar11 * 4)) >> 0x10);
          uVar13 = uVar13 - 1;
          puVar10 = puVar10 + 1;
        } while (uVar13 != 0);
      }
    }
    break;
  case 7:
  case 0xc:
    uVar3 = *(uint *)(param_1 + 0x30);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x20);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar5 = *param_2;
      param_2 = param_2 + 1;
      uVar13 = (ulonglong)param_4;
      param_4 = param_4 + 1;
      lVar2 = uVar13 * 8;
      lVar6 = *(longlong *)(lVar2 + *param_3);
      puVar7 = *(undefined1 **)(lVar2 + param_3[1]);
      lVar2 = *(longlong *)(lVar2 + param_3[2]);
      if (uVar3 != 0) {
        pbVar9 = (byte *)(lVar5 + 2);
        uVar13 = (ulonglong)uVar3;
        puVar10 = puVar7;
        do {
          uVar8 = (ulonglong)pbVar9[-1];
          uVar12 = (ulonglong)*pbVar9;
          uVar11 = (ulonglong)pbVar9[-2];
          puVar1 = puVar10 + 1;
          pbVar9 = pbVar9 + 4;
          puVar1[(lVar6 - (longlong)puVar7) + -1] =
               (char)((uint)(*(int *)(lVar4 + 0x800 + uVar12 * 4) +
                             *(int *)(lVar4 + 0x400 + uVar8 * 4) + *(int *)(lVar4 + uVar11 * 4)) >>
                     0x10);
          *puVar10 = (char)((uint)(*(int *)(lVar4 + 0x1400 + uVar12 * 4) +
                                   *(int *)(lVar4 + 0x1000 + uVar8 * 4) +
                                  *(int *)(lVar4 + 0xc00 + uVar11 * 4)) >> 0x10);
          puVar1[(lVar2 - (longlong)puVar7) + -1] =
               (char)((uint)(*(int *)(lVar4 + 0x1c00 + uVar12 * 4) +
                             *(int *)(lVar4 + 0x1800 + uVar8 * 4) +
                            *(int *)(lVar4 + 0x1400 + uVar11 * 4)) >> 0x10);
          uVar13 = uVar13 - 1;
          puVar10 = puVar1;
        } while (uVar13 != 0);
      }
    }
    break;
  case 8:
    uVar3 = *(uint *)(param_1 + 0x30);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x20);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar5 = *param_2;
      param_2 = param_2 + 1;
      uVar13 = (ulonglong)param_4;
      param_4 = param_4 + 1;
      lVar2 = uVar13 * 8;
      lVar6 = *(longlong *)(lVar2 + *param_3);
      puVar7 = *(undefined1 **)(lVar2 + param_3[1]);
      lVar2 = *(longlong *)(lVar2 + param_3[2]);
      if (uVar3 != 0) {
        pbVar9 = (byte *)(lVar5 + 1);
        uVar13 = (ulonglong)uVar3;
        puVar10 = puVar7;
        do {
          uVar8 = (ulonglong)pbVar9[-1];
          uVar12 = (ulonglong)*pbVar9;
          uVar11 = (ulonglong)pbVar9[1];
          puVar1 = puVar10 + 1;
          pbVar9 = pbVar9 + 3;
          puVar1[(lVar6 - (longlong)puVar7) + -1] =
               (char)((uint)(*(int *)(lVar4 + 0x400 + uVar12 * 4) +
                             *(int *)(lVar4 + 0x800 + uVar8 * 4) + *(int *)(lVar4 + uVar11 * 4)) >>
                     0x10);
          *puVar10 = (char)((uint)(*(int *)(lVar4 + 0x1400 + uVar8 * 4) +
                                   *(int *)(lVar4 + 0x1000 + uVar12 * 4) +
                                  *(int *)(lVar4 + 0xc00 + uVar11 * 4)) >> 0x10);
          puVar1[(lVar2 - (longlong)puVar7) + -1] =
               (char)((uint)(*(int *)(lVar4 + 0x1c00 + uVar8 * 4) +
                             *(int *)(lVar4 + 0x1800 + uVar12 * 4) +
                            *(int *)(lVar4 + 0x1400 + uVar11 * 4)) >> 0x10);
          uVar13 = uVar13 - 1;
          puVar10 = puVar1;
        } while (uVar13 != 0);
      }
    }
    break;
  case 9:
  case 0xd:
    uVar3 = *(uint *)(param_1 + 0x30);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x20);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar5 = *param_2;
      param_2 = param_2 + 1;
      uVar13 = (ulonglong)param_4;
      param_4 = param_4 + 1;
      lVar2 = uVar13 * 8;
      lVar6 = *(longlong *)(lVar2 + *param_3);
      puVar7 = *(undefined1 **)(lVar2 + param_3[1]);
      lVar2 = *(longlong *)(lVar2 + param_3[2]);
      if (uVar3 != 0) {
        pbVar9 = (byte *)(lVar5 + 1);
        uVar13 = (ulonglong)uVar3;
        puVar10 = puVar7;
        do {
          uVar8 = (ulonglong)pbVar9[-1];
          uVar12 = (ulonglong)*pbVar9;
          uVar11 = (ulonglong)pbVar9[1];
          puVar1 = puVar10 + 1;
          pbVar9 = pbVar9 + 4;
          puVar1[(lVar6 - (longlong)puVar7) + -1] =
               (char)((uint)(*(int *)(lVar4 + 0x800 + uVar8 * 4) +
                             *(int *)(lVar4 + 0x400 + uVar12 * 4) + *(int *)(lVar4 + uVar11 * 4)) >>
                     0x10);
          *puVar10 = (char)((uint)(*(int *)(lVar4 + 0x1400 + uVar8 * 4) +
                                   *(int *)(lVar4 + 0x1000 + uVar12 * 4) +
                                  *(int *)(lVar4 + 0xc00 + uVar11 * 4)) >> 0x10);
          puVar1[(lVar2 - (longlong)puVar7) + -1] =
               (char)((uint)(*(int *)(lVar4 + 0x1c00 + uVar8 * 4) +
                             *(int *)(lVar4 + 0x1800 + uVar12 * 4) +
                            *(int *)(lVar4 + 0x1400 + uVar11 * 4)) >> 0x10);
          uVar13 = uVar13 - 1;
          puVar10 = puVar1;
        } while (uVar13 != 0);
      }
    }
    break;
  case 10:
  case 0xe:
    uVar3 = *(uint *)(param_1 + 0x30);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x20);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar5 = *param_2;
      param_2 = param_2 + 1;
      uVar13 = (ulonglong)param_4;
      param_4 = param_4 + 1;
      lVar2 = uVar13 * 8;
      lVar6 = *(longlong *)(lVar2 + *param_3);
      puVar7 = *(undefined1 **)(lVar2 + param_3[1]);
      lVar2 = *(longlong *)(lVar2 + param_3[2]);
      if (uVar3 != 0) {
        pbVar9 = (byte *)(lVar5 + 2);
        uVar13 = (ulonglong)uVar3;
        puVar10 = puVar7;
        do {
          uVar8 = (ulonglong)pbVar9[-1];
          uVar12 = (ulonglong)*pbVar9;
          uVar11 = (ulonglong)pbVar9[1];
          puVar1 = puVar10 + 1;
          pbVar9 = pbVar9 + 4;
          puVar1[(lVar6 - (longlong)puVar7) + -1] =
               (char)((uint)(*(int *)(lVar4 + 0x800 + uVar8 * 4) +
                             *(int *)(lVar4 + 0x400 + uVar12 * 4) + *(int *)(lVar4 + uVar11 * 4)) >>
                     0x10);
          *puVar10 = (char)((uint)(*(int *)(lVar4 + 0x1400 + uVar8 * 4) +
                                   *(int *)(lVar4 + 0x1000 + uVar12 * 4) +
                                  *(int *)(lVar4 + 0xc00 + uVar11 * 4)) >> 0x10);
          puVar1[(lVar2 - (longlong)puVar7) + -1] =
               (char)((uint)(*(int *)(lVar4 + 0x1c00 + uVar8 * 4) +
                             *(int *)(lVar4 + 0x1800 + uVar12 * 4) +
                            *(int *)(lVar4 + 0x1400 + uVar11 * 4)) >> 0x10);
          uVar13 = uVar13 - 1;
          puVar10 = puVar1;
        } while (uVar13 != 0);
      }
    }
    break;
  case 0xb:
  case 0xf:
    uVar3 = *(uint *)(param_1 + 0x30);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x20);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar5 = *param_2;
      param_2 = param_2 + 1;
      uVar13 = (ulonglong)param_4;
      param_4 = param_4 + 1;
      lVar2 = uVar13 * 8;
      lVar6 = *(longlong *)(lVar2 + *param_3);
      puVar7 = *(undefined1 **)(lVar2 + param_3[1]);
      lVar2 = *(longlong *)(lVar2 + param_3[2]);
      if (uVar3 != 0) {
        pbVar9 = (byte *)(lVar5 + 2);
        uVar13 = (ulonglong)uVar3;
        puVar10 = puVar7;
        do {
          uVar8 = (ulonglong)pbVar9[1];
          uVar12 = (ulonglong)*pbVar9;
          uVar11 = (ulonglong)pbVar9[-1];
          puVar1 = puVar10 + 1;
          pbVar9 = pbVar9 + 4;
          puVar1[(lVar6 - (longlong)puVar7) + -1] =
               (char)((uint)(*(int *)(lVar4 + 0x800 + uVar8 * 4) +
                             *(int *)(lVar4 + 0x400 + uVar12 * 4) + *(int *)(lVar4 + uVar11 * 4)) >>
                     0x10);
          *puVar10 = (char)((uint)(*(int *)(lVar4 + 0x1400 + uVar8 * 4) +
                                   *(int *)(lVar4 + 0x1000 + uVar12 * 4) +
                                  *(int *)(lVar4 + 0xc00 + uVar11 * 4)) >> 0x10);
          puVar1[(lVar2 - (longlong)puVar7) + -1] =
               (char)((uint)(*(int *)(lVar4 + 0x1c00 + uVar8 * 4) +
                             *(int *)(lVar4 + 0x1800 + uVar12 * 4) +
                            *(int *)(lVar4 + 0x1400 + uVar11 * 4)) >> 0x10);
          uVar13 = uVar13 - 1;
          puVar10 = puVar1;
        } while (uVar13 != 0);
      }
    }
    break;
  default:
    uVar3 = *(uint *)(param_1 + 0x30);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x20);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar5 = *param_2;
      param_2 = param_2 + 1;
      uVar13 = (ulonglong)param_4;
      param_4 = param_4 + 1;
      lVar2 = uVar13 * 8;
      lVar6 = *(longlong *)(lVar2 + *param_3);
      puVar7 = *(undefined1 **)(lVar2 + param_3[1]);
      lVar2 = *(longlong *)(lVar2 + param_3[2]);
      if (uVar3 != 0) {
        pbVar9 = (byte *)(lVar5 + 2);
        uVar13 = (ulonglong)uVar3;
        puVar10 = puVar7;
        do {
          uVar8 = (ulonglong)pbVar9[-1];
          uVar12 = (ulonglong)*pbVar9;
          uVar11 = (ulonglong)pbVar9[-2];
          puVar1 = puVar10 + 1;
          pbVar9 = pbVar9 + 3;
          puVar1[(lVar6 - (longlong)puVar7) + -1] =
               (char)((uint)(*(int *)(lVar4 + 0x800 + uVar12 * 4) +
                             *(int *)(lVar4 + 0x400 + uVar8 * 4) + *(int *)(lVar4 + uVar11 * 4)) >>
                     0x10);
          *puVar10 = (char)((uint)(*(int *)(lVar4 + 0x1400 + uVar12 * 4) +
                                   *(int *)(lVar4 + 0x1000 + uVar8 * 4) +
                                  *(int *)(lVar4 + 0xc00 + uVar11 * 4)) >> 0x10);
          puVar1[(lVar2 - (longlong)puVar7) + -1] =
               (char)((uint)(*(int *)(lVar4 + 0x1c00 + uVar12 * 4) +
                             *(int *)(lVar4 + 0x1800 + uVar8 * 4) +
                            *(int *)(lVar4 + 0x1400 + uVar11 * 4)) >> 0x10);
          uVar13 = uVar13 - 1;
          puVar10 = puVar1;
        } while (uVar13 != 0);
      }
    }
  }
  return;
}



// FUNCTION 144e91050 FUN_144e91050 body=1068 status=ok
// SIG undefined FUN_144e91050(void)

void FUN_144e91050(longlong param_1,longlong *param_2,longlong *param_3,uint param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  ulonglong uVar11;
  
  uVar11 = (ulonglong)param_4;
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 6:
    uVar5 = *(uint *)(param_1 + 0x30);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x20);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar7 = *param_2;
      param_2 = param_2 + 1;
      uVar8 = (ulonglong)((int)uVar11 + 1);
      lVar3 = uVar11 * 8;
      uVar11 = uVar8;
      if (uVar5 != 0) {
        pbVar10 = (byte *)(lVar7 + 2);
        uVar8 = (ulonglong)uVar5;
        puVar9 = *(undefined1 **)(*param_3 + lVar3);
        do {
          bVar4 = *pbVar10;
          pbVar1 = pbVar10 + -1;
          pbVar2 = pbVar10 + -2;
          pbVar10 = pbVar10 + 3;
          *puVar9 = (char)((uint)(*(int *)(lVar6 + 0x800 + (ulonglong)bVar4 * 4) +
                                  *(int *)(lVar6 + 0x400 + (ulonglong)*pbVar1 * 4) +
                                 *(int *)(lVar6 + (ulonglong)*pbVar2 * 4)) >> 0x10);
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 1;
        } while (uVar8 != 0);
      }
    }
    break;
  case 7:
  case 0xc:
    uVar5 = *(uint *)(param_1 + 0x30);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x20);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar7 = *param_2;
      param_2 = param_2 + 1;
      uVar8 = (ulonglong)((int)uVar11 + 1);
      lVar3 = uVar11 * 8;
      uVar11 = uVar8;
      if (uVar5 != 0) {
        pbVar10 = (byte *)(lVar7 + 2);
        uVar8 = (ulonglong)uVar5;
        puVar9 = *(undefined1 **)(*param_3 + lVar3);
        do {
          bVar4 = *pbVar10;
          pbVar1 = pbVar10 + -1;
          pbVar2 = pbVar10 + -2;
          pbVar10 = pbVar10 + 4;
          *puVar9 = (char)((uint)(*(int *)(lVar6 + 0x800 + (ulonglong)bVar4 * 4) +
                                  *(int *)(lVar6 + 0x400 + (ulonglong)*pbVar1 * 4) +
                                 *(int *)(lVar6 + (ulonglong)*pbVar2 * 4)) >> 0x10);
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 1;
        } while (uVar8 != 0);
      }
    }
    break;
  case 8:
    uVar5 = *(uint *)(param_1 + 0x30);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x20);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar7 = *param_2;
      param_2 = param_2 + 1;
      uVar8 = (ulonglong)((int)uVar11 + 1);
      lVar3 = uVar11 * 8;
      uVar11 = uVar8;
      if (uVar5 != 0) {
        pbVar10 = (byte *)(lVar7 + 1);
        uVar8 = (ulonglong)uVar5;
        puVar9 = *(undefined1 **)(*param_3 + lVar3);
        do {
          pbVar1 = pbVar10 + -1;
          bVar4 = *pbVar10;
          pbVar2 = pbVar10 + 1;
          pbVar10 = pbVar10 + 3;
          *puVar9 = (char)((uint)(*(int *)(lVar6 + 0x800 + (ulonglong)*pbVar1 * 4) +
                                  *(int *)(lVar6 + 0x400 + (ulonglong)bVar4 * 4) +
                                 *(int *)(lVar6 + (ulonglong)*pbVar2 * 4)) >> 0x10);
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 1;
        } while (uVar8 != 0);
      }
    }
    break;
  case 9:
  case 0xd:
    uVar5 = *(uint *)(param_1 + 0x30);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x20);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar7 = *param_2;
      param_2 = param_2 + 1;
      uVar8 = (ulonglong)((int)uVar11 + 1);
      lVar3 = uVar11 * 8;
      uVar11 = uVar8;
      if (uVar5 != 0) {
        pbVar10 = (byte *)(lVar7 + 1);
        uVar8 = (ulonglong)uVar5;
        puVar9 = *(undefined1 **)(*param_3 + lVar3);
        do {
          pbVar1 = pbVar10 + -1;
          bVar4 = *pbVar10;
          pbVar2 = pbVar10 + 1;
          pbVar10 = pbVar10 + 4;
          *puVar9 = (char)((uint)(*(int *)(lVar6 + 0x800 + (ulonglong)*pbVar1 * 4) +
                                  *(int *)(lVar6 + 0x400 + (ulonglong)bVar4 * 4) +
                                 *(int *)(lVar6 + (ulonglong)*pbVar2 * 4)) >> 0x10);
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 1;
        } while (uVar8 != 0);
      }
    }
    break;
  case 10:
  case 0xe:
    uVar5 = *(uint *)(param_1 + 0x30);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x20);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar7 = *param_2;
      param_2 = param_2 + 1;
      uVar8 = (ulonglong)((int)uVar11 + 1);
      lVar3 = uVar11 * 8;
      uVar11 = uVar8;
      if (uVar5 != 0) {
        pbVar10 = (byte *)(lVar7 + 2);
        uVar8 = (ulonglong)uVar5;
        puVar9 = *(undefined1 **)(*param_3 + lVar3);
        do {
          bVar4 = *pbVar10;
          pbVar1 = pbVar10 + -1;
          pbVar2 = pbVar10 + 1;
          pbVar10 = pbVar10 + 4;
          *puVar9 = (char)((uint)(*(int *)(lVar6 + 0x400 + (ulonglong)bVar4 * 4) +
                                  *(int *)(lVar6 + 0x800 + (ulonglong)*pbVar1 * 4) +
                                 *(int *)(lVar6 + (ulonglong)*pbVar2 * 4)) >> 0x10);
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 1;
        } while (uVar8 != 0);
      }
    }
    break;
  case 0xb:
  case 0xf:
    uVar5 = *(uint *)(param_1 + 0x30);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x20);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar7 = *param_2;
      param_2 = param_2 + 1;
      uVar8 = (ulonglong)((int)uVar11 + 1);
      lVar3 = uVar11 * 8;
      uVar11 = uVar8;
      if (uVar5 != 0) {
        pbVar10 = (byte *)(lVar7 + 2);
        uVar8 = (ulonglong)uVar5;
        puVar9 = *(undefined1 **)(*param_3 + lVar3);
        do {
          pbVar1 = pbVar10 + 1;
          bVar4 = *pbVar10;
          pbVar2 = pbVar10 + -1;
          pbVar10 = pbVar10 + 4;
          *puVar9 = (char)((uint)(*(int *)(lVar6 + 0x800 + (ulonglong)*pbVar1 * 4) +
                                  *(int *)(lVar6 + 0x400 + (ulonglong)bVar4 * 4) +
                                 *(int *)(lVar6 + (ulonglong)*pbVar2 * 4)) >> 0x10);
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 1;
        } while (uVar8 != 0);
      }
    }
    break;
  default:
    uVar5 = *(uint *)(param_1 + 0x30);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x20);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar7 = *param_2;
      param_2 = param_2 + 1;
      uVar8 = (ulonglong)((int)uVar11 + 1);
      lVar3 = uVar11 * 8;
      uVar11 = uVar8;
      if (uVar5 != 0) {
        pbVar10 = (byte *)(lVar7 + 2);
        uVar8 = (ulonglong)uVar5;
        puVar9 = *(undefined1 **)(*param_3 + lVar3);
        do {
          bVar4 = *pbVar10;
          pbVar1 = pbVar10 + -1;
          pbVar2 = pbVar10 + -2;
          pbVar10 = pbVar10 + 3;
          *puVar9 = (char)((uint)(*(int *)(lVar6 + 0x400 + (ulonglong)*pbVar1 * 4) +
                                  *(int *)(lVar6 + 0x800 + (ulonglong)bVar4 * 4) +
                                 *(int *)(lVar6 + (ulonglong)*pbVar2 * 4)) >> 0x10);
          uVar8 = uVar8 - 1;
          puVar9 = puVar9 + 1;
        } while (uVar8 != 0);
      }
    }
  }
  return;
}



// FUNCTION 144e914b0 FUN_144e914b0 body=976 status=ok
// SIG undefined FUN_144e914b0(void)

void FUN_144e914b0(longlong param_1,longlong *param_2,longlong *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 6:
    uVar2 = *(uint *)(param_1 + 0x30);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar3 = *param_2;
      param_2 = param_2 + 1;
      uVar8 = (ulonglong)param_4;
      param_4 = param_4 + 1;
      lVar1 = uVar8 * 8;
      lVar4 = *(longlong *)(lVar1 + *param_3);
      puVar5 = *(undefined1 **)(lVar1 + param_3[1]);
      lVar1 = *(longlong *)(lVar1 + param_3[2]);
      if (uVar2 != 0) {
        puVar6 = (undefined1 *)(lVar3 + 2);
        puVar7 = puVar5;
        uVar8 = (ulonglong)uVar2;
        do {
          puVar7[lVar4 - (longlong)puVar5] = puVar6[-2];
          *puVar7 = puVar6[-1];
          (puVar7 + 1)[(lVar1 - (longlong)puVar5) + -1] = *puVar6;
          uVar8 = uVar8 - 1;
          puVar6 = puVar6 + 3;
          puVar7 = puVar7 + 1;
        } while (uVar8 != 0);
      }
    }
    break;
  case 7:
  case 0xc:
    uVar2 = *(uint *)(param_1 + 0x30);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar3 = *param_2;
      param_2 = param_2 + 1;
      uVar8 = (ulonglong)param_4;
      param_4 = param_4 + 1;
      lVar1 = uVar8 * 8;
      lVar4 = *(longlong *)(lVar1 + *param_3);
      puVar5 = *(undefined1 **)(lVar1 + param_3[1]);
      lVar1 = *(longlong *)(lVar1 + param_3[2]);
      if (uVar2 != 0) {
        puVar6 = (undefined1 *)(lVar3 + 2);
        puVar7 = puVar5;
        uVar8 = (ulonglong)uVar2;
        do {
          puVar7[lVar4 - (longlong)puVar5] = puVar6[-2];
          *puVar7 = puVar6[-1];
          (puVar7 + 1)[(lVar1 - (longlong)puVar5) + -1] = *puVar6;
          uVar8 = uVar8 - 1;
          puVar6 = puVar6 + 4;
          puVar7 = puVar7 + 1;
        } while (uVar8 != 0);
      }
    }
    break;
  case 8:
    uVar2 = *(uint *)(param_1 + 0x30);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar3 = *param_2;
      param_2 = param_2 + 1;
      uVar8 = (ulonglong)param_4;
      param_4 = param_4 + 1;
      lVar1 = uVar8 * 8;
      lVar4 = *(longlong *)(lVar1 + *param_3);
      puVar5 = *(undefined1 **)(lVar1 + param_3[1]);
      lVar1 = *(longlong *)(lVar1 + param_3[2]);
      if (uVar2 != 0) {
        puVar6 = (undefined1 *)(lVar3 + 1);
        puVar7 = puVar5;
        uVar8 = (ulonglong)uVar2;
        do {
          puVar7[lVar4 - (longlong)puVar5] = puVar6[1];
          *puVar7 = *puVar6;
          (puVar7 + 1)[(lVar1 - (longlong)puVar5) + -1] = puVar6[-1];
          uVar8 = uVar8 - 1;
          puVar6 = puVar6 + 3;
          puVar7 = puVar7 + 1;
        } while (uVar8 != 0);
      }
    }
    break;
  case 9:
  case 0xd:
    uVar2 = *(uint *)(param_1 + 0x30);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar3 = *param_2;
      param_2 = param_2 + 1;
      uVar8 = (ulonglong)param_4;
      param_4 = param_4 + 1;
      lVar1 = uVar8 * 8;
      lVar4 = *(longlong *)(lVar1 + *param_3);
      puVar5 = *(undefined1 **)(lVar1 + param_3[1]);
      lVar1 = *(longlong *)(lVar1 + param_3[2]);
      if (uVar2 != 0) {
        puVar6 = (undefined1 *)(lVar3 + 1);
        puVar7 = puVar5;
        uVar8 = (ulonglong)uVar2;
        do {
          puVar7[lVar4 - (longlong)puVar5] = puVar6[1];
          *puVar7 = *puVar6;
          (puVar7 + 1)[(lVar1 - (longlong)puVar5) + -1] = puVar6[-1];
          uVar8 = uVar8 - 1;
          puVar6 = puVar6 + 4;
          puVar7 = puVar7 + 1;
        } while (uVar8 != 0);
      }
    }
    break;
  case 10:
  case 0xe:
    uVar2 = *(uint *)(param_1 + 0x30);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar3 = *param_2;
      param_2 = param_2 + 1;
      uVar8 = (ulonglong)param_4;
      param_4 = param_4 + 1;
      lVar1 = uVar8 * 8;
      lVar4 = *(longlong *)(lVar1 + *param_3);
      puVar5 = *(undefined1 **)(lVar1 + param_3[1]);
      lVar1 = *(longlong *)(lVar1 + param_3[2]);
      if (uVar2 != 0) {
        puVar6 = (undefined1 *)(lVar3 + 2);
        puVar7 = puVar5;
        uVar8 = (ulonglong)uVar2;
        do {
          puVar7[lVar4 - (longlong)puVar5] = puVar6[1];
          *puVar7 = *puVar6;
          (puVar7 + 1)[(lVar1 - (longlong)puVar5) + -1] = puVar6[-1];
          uVar8 = uVar8 - 1;
          puVar6 = puVar6 + 4;
          puVar7 = puVar7 + 1;
        } while (uVar8 != 0);
      }
    }
    break;
  case 0xb:
  case 0xf:
    uVar2 = *(uint *)(param_1 + 0x30);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar3 = *param_2;
      param_2 = param_2 + 1;
      uVar8 = (ulonglong)param_4;
      param_4 = param_4 + 1;
      lVar1 = uVar8 * 8;
      lVar4 = *(longlong *)(lVar1 + *param_3);
      puVar5 = *(undefined1 **)(lVar1 + param_3[1]);
      lVar1 = *(longlong *)(lVar1 + param_3[2]);
      if (uVar2 != 0) {
        puVar6 = (undefined1 *)(lVar3 + 2);
        puVar7 = puVar5;
        uVar8 = (ulonglong)uVar2;
        do {
          puVar7[lVar4 - (longlong)puVar5] = puVar6[-1];
          *puVar7 = *puVar6;
          (puVar7 + 1)[(lVar1 - (longlong)puVar5) + -1] = puVar6[1];
          uVar8 = uVar8 - 1;
          puVar6 = puVar6 + 4;
          puVar7 = puVar7 + 1;
        } while (uVar8 != 0);
      }
    }
    break;
  default:
    uVar2 = *(uint *)(param_1 + 0x30);
    while (param_5 = param_5 + -1, -1 < param_5) {
      lVar3 = *param_2;
      param_2 = param_2 + 1;
      uVar8 = (ulonglong)param_4;
      param_4 = param_4 + 1;
      lVar1 = uVar8 * 8;
      lVar4 = *(longlong *)(lVar1 + *param_3);
      puVar5 = *(undefined1 **)(lVar1 + param_3[1]);
      lVar1 = *(longlong *)(lVar1 + param_3[2]);
      if (uVar2 != 0) {
        puVar6 = (undefined1 *)(lVar3 + 2);
        puVar7 = puVar5;
        uVar8 = (ulonglong)uVar2;
        do {
          puVar7[lVar4 - (longlong)puVar5] = puVar6[-2];
          *puVar7 = puVar6[-1];
          (puVar7 + 1)[(lVar1 - (longlong)puVar5) + -1] = *puVar6;
          uVar8 = uVar8 - 1;
          puVar6 = puVar6 + 3;
          puVar7 = puVar7 + 1;
        } while (uVar8 != 0);
      }
    }
  }
  return;
}



// FUNCTION 144e918b0 FUN_144e918b0 body=426 status=ok
// SIG undefined FUN_144e918b0(void)

void FUN_144e918b0(longlong param_1,longlong *param_2,longlong *param_3,uint param_4,int param_5)

{
  byte *pbVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte *pbVar16;
  
  uVar6 = *(uint *)(param_1 + 0x30);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x20);
  while (param_5 = param_5 + -1, -1 < param_5) {
    lVar12 = *param_2;
    param_2 = param_2 + 1;
    uVar15 = (ulonglong)param_4;
    param_4 = param_4 + 1;
    lVar2 = uVar15 * 8;
    lVar8 = *(longlong *)(lVar2 + param_3[1]);
    puVar9 = *(undefined1 **)(lVar2 + *param_3);
    lVar10 = *(longlong *)(lVar2 + param_3[2]);
    lVar2 = *(longlong *)(lVar2 + param_3[3]);
    if (uVar6 != 0) {
      pbVar16 = (byte *)(lVar12 + 2);
      uVar15 = (ulonglong)uVar6;
      puVar11 = puVar9;
      do {
        bVar3 = pbVar16[-1];
        bVar4 = pbVar16[-2];
        bVar5 = *pbVar16;
        pbVar1 = pbVar16 + 1;
        pbVar16 = pbVar16 + 4;
        puVar11[lVar2 - (longlong)puVar9] = *pbVar1;
        lVar12 = 0xff - (ulonglong)bVar4;
        lVar14 = 0xff - (ulonglong)bVar5;
        *puVar11 = (char)((uint)(*(int *)(lVar7 + (0x2ff - (ulonglong)bVar5) * 4) +
                                 *(int *)(lVar7 + (0x1ff - (ulonglong)bVar3) * 4) +
                                *(int *)(lVar7 + lVar12 * 4)) >> 0x10);
        lVar13 = 0xff - (ulonglong)bVar3;
        puVar11[lVar8 - (longlong)puVar9] =
             (char)((uint)(*(int *)(lVar7 + 0x1400 + lVar14 * 4) +
                           *(int *)(lVar7 + 0x1000 + lVar13 * 4) +
                          *(int *)(lVar7 + 0xc00 + lVar12 * 4)) >> 0x10);
        puVar11[lVar10 - (longlong)puVar9] =
             (char)((uint)(*(int *)(lVar7 + (0x5ff - (ulonglong)bVar4) * 4) +
                           *(int *)(lVar7 + 0x1c00 + lVar14 * 4) +
                          *(int *)(lVar7 + 0x1800 + lVar13 * 4)) >> 0x10);
        uVar15 = uVar15 - 1;
        puVar11 = puVar11 + 1;
      } while (uVar15 != 0);
    }
  }
  return;
}



// FUNCTION 144e91a60 FUN_144e91a60 body=126 status=ok
// SIG undefined FUN_144e91a60(void)

void FUN_144e91a60(longlong param_1,undefined8 *param_2,longlong *param_3,uint param_4,int param_5)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  
  uVar2 = *(uint *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x38);
  while (param_5 = param_5 + -1, -1 < param_5) {
    puVar6 = (undefined1 *)*param_2;
    param_2 = param_2 + 1;
    uVar5 = (ulonglong)param_4;
    param_4 = param_4 + 1;
    puVar4 = *(undefined1 **)(*param_3 + uVar5 * 8);
    uVar5 = (ulonglong)uVar2;
    if (uVar2 != 0) {
      do {
        uVar1 = *puVar6;
        puVar6 = puVar6 + iVar3;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}



// FUNCTION 144e91ae0 FUN_144e91ae0 body=478 status=ok
// SIG undefined FUN_144e91ae0(void)

void FUN_144e91ae0(longlong param_1,longlong *param_2,longlong *param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  lVar6 = (longlong)iVar1;
  param_5 = param_5 + -1;
  uVar2 = *(uint *)(param_1 + 0x30);
  uVar10 = (ulonglong)uVar2;
  if (iVar1 == 3) {
    if (-1 < param_5) {
      do {
        puVar4 = (undefined1 *)*param_2;
        param_2 = param_2 + 1;
        uVar5 = (ulonglong)param_4;
        param_4 = param_4 + 1;
        lVar6 = uVar5 * 8;
        lVar9 = *(longlong *)(lVar6 + *param_3);
        puVar3 = *(undefined1 **)(lVar6 + param_3[1]);
        lVar6 = *(longlong *)(lVar6 + param_3[2]);
        if (uVar2 != 0) {
          uVar5 = uVar10;
          puVar8 = puVar3;
          do {
            puVar8[lVar9 - (longlong)puVar3] = *puVar4;
            *puVar8 = puVar4[1];
            (puVar8 + 1)[(lVar6 - (longlong)puVar3) + -1] = puVar4[2];
            uVar5 = uVar5 - 1;
            puVar4 = puVar4 + 3;
            puVar8 = puVar8 + 1;
          } while (uVar5 != 0);
        }
        param_5 = param_5 + -1;
      } while (-1 < param_5);
      return;
    }
  }
  else if (iVar1 == 4) {
    for (; -1 < param_5; param_5 = param_5 + -1) {
      puVar4 = (undefined1 *)*param_2;
      param_2 = param_2 + 1;
      uVar5 = (ulonglong)param_4;
      param_4 = param_4 + 1;
      lVar6 = uVar5 * 8;
      lVar9 = *(longlong *)(lVar6 + *param_3);
      puVar3 = *(undefined1 **)(lVar6 + param_3[1]);
      lVar7 = *(longlong *)(lVar6 + param_3[2]);
      lVar6 = *(longlong *)(lVar6 + param_3[3]);
      if (uVar2 != 0) {
        uVar5 = uVar10;
        puVar8 = puVar3;
        do {
          puVar8[lVar9 - (longlong)puVar3] = *puVar4;
          *puVar8 = puVar4[1];
          puVar8[lVar7 - (longlong)puVar3] = puVar4[2];
          (puVar8 + 1)[(lVar6 - (longlong)puVar3) + -1] = puVar4[3];
          uVar5 = uVar5 - 1;
          puVar4 = puVar4 + 4;
          puVar8 = puVar8 + 1;
        } while (uVar5 != 0);
      }
    }
  }
  else {
    for (; -1 < param_5; param_5 = param_5 + -1) {
      lVar9 = 0;
      if (0 < lVar6) {
        do {
          lVar7 = *param_2;
          puVar4 = *(undefined1 **)((ulonglong)param_4 * 8 + param_3[lVar9]);
          uVar5 = uVar10;
          if (uVar2 != 0) {
            do {
              puVar3 = (undefined1 *)(lVar9 + lVar7);
              lVar7 = lVar7 + lVar6;
              *puVar4 = *puVar3;
              puVar4 = puVar4 + 1;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < lVar6);
      }
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
    }
  }
  return;
}



// FUNCTION 144e91cd0 FUN_144e91cd0 body=533 status=ok
// SIG undefined FUN_144e91cd0(void)

code * FUN_144e91cd0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  code *pcVar7;
  code *pcVar8;
  int iVar9;
  uint *puVar10;
  undefined8 *puVar11;
  
  bVar3 = true;
  if ((int)param_1[9] != 8) {
    *(undefined4 *)(*param_1 + 0x28) = 0xf;
    *(int *)(*param_1 + 0x2c) = (int)param_1[9];
    (**(code **)*param_1)(param_1);
  }
  puVar6 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x78);
  param_1[0x3a] = (longlong)puVar6;
  *puVar6 = &DAT_144e91ef0;
  pcVar7 = FUN_144e91f80;
  puVar6[1] = FUN_144e91f80;
  *(undefined1 *)(puVar6 + 4) = 0;
  if (*(char *)((longlong)param_1 + 0x103) != '\0') {
    *(undefined4 *)(*param_1 + 0x28) = 0x19;
    pcVar7 = (code *)(**(code **)*param_1)(param_1);
  }
  iVar9 = 0;
  if (0 < *(int *)((longlong)param_1 + 0x4c)) {
    puVar11 = puVar6 + 5;
    puVar10 = (uint *)(param_1[0xb] + 0xc);
    do {
      uVar1 = puVar10[-1];
      uVar2 = *(uint *)(param_1 + 0x25);
      if ((uVar1 == uVar2) &&
         (pcVar7 = (code *)(ulonglong)*(uint *)((longlong)param_1 + 300),
         *puVar10 == *(uint *)((longlong)param_1 + 300))) {
        if (*(int *)((longlong)param_1 + 0x104) == 0) {
          *puVar11 = FUN_144e922a0;
        }
        else {
          *puVar11 = FUN_144e927b0;
          *(undefined1 *)(puVar6 + 4) = 1;
        }
      }
      else if (uVar1 * 2 == uVar2) {
        if (*puVar10 == *(uint *)((longlong)param_1 + 300)) {
          bVar3 = false;
          iVar5 = FUN_145258c10();
          pcVar8 = FUN_144e92330;
          pcVar7 = FUN_145258cf0;
          if (iVar5 != 0) {
            pcVar8 = FUN_145258cf0;
          }
          *puVar11 = pcVar8;
        }
        else {
          uVar4 = *puVar10 * 2;
          pcVar7 = (code *)(ulonglong)uVar4;
          if (uVar4 != *(uint *)((longlong)param_1 + 300)) goto LAB_144e91e4b;
          if (*(int *)((longlong)param_1 + 0x104) == 0) {
            iVar5 = FUN_145258bd0();
            pcVar8 = FUN_144e923f0;
            pcVar7 = FUN_145258c50;
            if (iVar5 != 0) {
              pcVar8 = FUN_145258c50;
            }
            *puVar11 = pcVar8;
          }
          else {
            *puVar11 = FUN_144e924f0;
            *(undefined1 *)(puVar6 + 4) = 1;
          }
        }
      }
      else {
LAB_144e91e4b:
        if (((int)uVar2 % (int)uVar1 == 0) &&
           (pcVar7 = (code *)((longlong)*(int *)((longlong)param_1 + 300) / (longlong)(int)*puVar10
                             & 0xffffffff), *(int *)((longlong)param_1 + 300) % (int)*puVar10 == 0))
        {
          bVar3 = false;
          *puVar11 = FUN_144e92020;
        }
        else {
          *(undefined4 *)(*param_1 + 0x28) = 0x26;
          pcVar7 = (code *)(**(code **)*param_1)(param_1);
        }
      }
      iVar9 = iVar9 + 1;
      puVar11 = puVar11 + 1;
      puVar10 = puVar10 + 0x18;
    } while (iVar9 < *(int *)((longlong)param_1 + 0x4c));
  }
  if ((*(int *)((longlong)param_1 + 0x104) != 0) && (!bVar3)) {
    *(undefined4 *)(*param_1 + 0x28) = 99;
    pcVar7 = (code *)(**(code **)(*param_1 + 8))(param_1,0);
  }
  return pcVar7;
}



// FUNCTION 144e91f00 FUN_144e91f00 body=118 status=ok
// SIG undefined FUN_144e91f00(void)

void FUN_144e91f00(longlong param_1,int param_2,uint param_3,int param_4)

{
  void *_Dst;
  longlong lVar1;
  
  if ((0 < (int)(param_4 - param_3)) && (0 < param_2)) {
    lVar1 = 0;
    do {
      _Dst = (void *)(*(longlong *)(param_1 + lVar1 * 8) + (ulonglong)param_3);
      memset(_Dst,(uint)*(byte *)((longlong)_Dst + -1),(ulonglong)(param_4 - param_3));
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_2);
  }
  return;
}



// FUNCTION 144e91f80 FUN_144e91f80 body=152 status=ok
// SIG undefined FUN_144e91f80(void)

void FUN_144e91f80(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4,int param_5
                  )

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  lVar3 = *(longlong *)(param_1 + 0x58);
  if (0 < *(int *)(param_1 + 0x4c)) {
    lVar1 = *(longlong *)(param_1 + 0x1d0) - (longlong)param_4;
    param_2 = param_2 - (longlong)param_4;
    do {
      (**(code **)(lVar1 + 0x28 + (longlong)param_4))
                (param_1,lVar3,
                 *(longlong *)(param_2 + (longlong)param_4) + (param_3 & 0xffffffff) * 8,
                 *param_4 + (ulonglong)(uint)(param_5 * *(int *)(lVar3 + 0xc)) * 8);
      iVar2 = iVar2 + 1;
      param_4 = param_4 + 1;
      lVar3 = lVar3 + 0x60;
    } while (iVar2 < *(int *)(param_1 + 0x4c));
  }
  return;
}



// FUNCTION 144e92020 FUN_144e92020 body=625 status=ok
// SIG undefined FUN_144e92020(void)

void FUN_144e92020(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  uint5 uVar4;
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int local_58;
  
  iVar7 = 8;
  if (*(char *)(*(longlong *)(param_1 + 0x1a0) + 0x1a) != '\0') {
    iVar7 = 1;
  }
  uVar20 = iVar7 * *(int *)(param_2 + 0x1c);
  uVar15 = *(int *)(param_1 + 0x128) / *(int *)(param_2 + 8);
  iVar7 = *(int *)(param_1 + 300) / *(int *)(param_2 + 0xc);
  lVar11 = (longlong)iVar7;
  iVar7 = iVar7 * uVar15;
  FUN_144e91f00(param_3,*(int *)(param_1 + 300),*(undefined4 *)(param_1 + 0x30),uVar15 * uVar20);
  local_58 = 0;
  if (0 < *(int *)(param_2 + 0xc)) {
    do {
      uVar21 = (ulonglong)uVar20;
      puVar22 = (undefined1 *)*param_4;
      uVar13 = 0;
      if (uVar20 != 0) {
        do {
          iVar19 = 0;
          if (0 < lVar11) {
            iVar27 = 0;
            iVar28 = 0;
            iVar29 = 0;
            iVar30 = 0;
            iVar23 = 0;
            iVar24 = 0;
            iVar25 = 0;
            iVar26 = 0;
            plVar12 = param_3;
            lVar14 = lVar11;
            do {
              iVar18 = 0;
              puVar8 = (uint *)(*plVar12 + uVar13);
              if ((0 < (int)uVar15) && (7 < uVar15)) {
                uVar9 = uVar15 & 0x80000007;
                if ((int)uVar9 < 0) {
                  uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
                }
                do {
                  uVar1 = *puVar8;
                  iVar18 = iVar18 + 8;
                  auVar2[0xc] = (char)(uVar1 >> 0x18);
                  auVar2._0_12_ = ZEXT712(0);
                  uVar4 = CONCAT32(auVar2._10_3_,(ushort)(byte)(uVar1 >> 0x10));
                  auVar5._5_8_ = 0;
                  auVar5._0_5_ = uVar4;
                  iVar27 = iVar27 + (uVar1 & 0xff);
                  iVar28 = iVar28 + (int)CONCAT72(SUB137(auVar5 << 0x40,6),
                                                  (ushort)(byte)(uVar1 >> 8));
                  iVar29 = iVar29 + (int)uVar4;
                  iVar30 = iVar30 + (uint)(uint3)(auVar2._10_3_ >> 0x10);
                  uVar1 = puVar8[1];
                  puVar8 = puVar8 + 2;
                  auVar3[0xc] = (char)(uVar1 >> 0x18);
                  auVar3._0_12_ = ZEXT712(0);
                  uVar4 = CONCAT32(auVar3._10_3_,(ushort)(byte)(uVar1 >> 0x10));
                  auVar6._5_8_ = 0;
                  auVar6._0_5_ = uVar4;
                  iVar23 = iVar23 + (uVar1 & 0xff);
                  iVar24 = iVar24 + (int)CONCAT72(SUB137(auVar6 << 0x40,6),
                                                  (ushort)(byte)(uVar1 >> 8));
                  iVar25 = iVar25 + (int)uVar4;
                  iVar26 = iVar26 + (uint)(uint3)(auVar3._10_3_ >> 0x10);
                } while (iVar18 < (int)(uVar15 - uVar9));
              }
              iVar10 = 0;
              iVar16 = 0;
              if (iVar18 < (int)uVar15) {
                if ((int)(uVar15 - iVar18) < 2) {
LAB_144e921cb:
                  iVar19 = iVar19 + (uint)(byte)*puVar8;
                }
                else {
                  uVar9 = ((uVar15 - iVar18) - 2 >> 1) + 1;
                  uVar17 = (ulonglong)uVar9;
                  do {
                    iVar10 = iVar10 + (uint)(byte)*puVar8;
                    iVar16 = iVar16 + (uint)*(byte *)((longlong)puVar8 + 1);
                    puVar8 = (uint *)((longlong)puVar8 + 2);
                    uVar17 = uVar17 - 1;
                  } while (uVar17 != 0);
                  if ((int)(iVar18 + uVar9 * 2) < (int)uVar15) goto LAB_144e921cb;
                }
                iVar19 = iVar19 + iVar16 + iVar10;
              }
              plVar12 = plVar12 + 1;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
            iVar19 = iVar19 + iVar23 + iVar27 + iVar25 + iVar29 + iVar24 + iVar28 + iVar26 + iVar30;
          }
          uVar13 = (ulonglong)((int)uVar13 + uVar15);
          *puVar22 = (char)((iVar7 / 2 + iVar19) / iVar7);
          puVar22 = puVar22 + 1;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      param_3 = param_3 + lVar11;
      local_58 = local_58 + 1;
      param_4 = param_4 + 1;
    } while (local_58 < *(int *)(param_2 + 0xc));
  }
  return;
}



// FUNCTION 144e922a0 FUN_144e922a0 body=134 status=ok
// SIG undefined FUN_144e922a0(void)

void FUN_144e922a0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = 8;
  if (*(char *)(*(longlong *)(param_1 + 0x1a0) + 0x1a) != '\0') {
    iVar1 = 1;
  }
  FUN_144e92980(param_3,0,param_4,0,*(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x30));
  FUN_144e91f00(param_4,*(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x30),
                iVar1 * *(int *)(param_2 + 0x1c));
  return;
}



// FUNCTION 144e92330 FUN_144e92330 body=183 status=ok
// SIG undefined FUN_144e92330(void)

void FUN_144e92330(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  iVar9 = 8;
  if (*(char *)(*(longlong *)(param_1 + 0x1a0) + 0x1a) != '\0') {
    iVar9 = 1;
  }
  uVar5 = iVar9 * *(int *)(param_2 + 0x1c);
  FUN_144e91f00(param_3,*(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x30));
  iVar9 = 0;
  if (0 < *(int *)(param_2 + 0xc)) {
    param_4 = param_4 - (longlong)param_3;
    do {
      uVar7 = 0;
      pbVar3 = (byte *)*param_3;
      if (uVar5 != 0) {
        uVar8 = (ulonglong)uVar5;
        puVar6 = *(undefined1 **)(param_4 + (longlong)param_3);
        do {
          pbVar1 = pbVar3 + 1;
          bVar2 = *pbVar3;
          pbVar3 = pbVar3 + 2;
          iVar4 = *pbVar1 + uVar7;
          uVar7 = uVar7 ^ 1;
          *puVar6 = (char)((int)((uint)bVar2 + iVar4) >> 1);
          uVar8 = uVar8 - 1;
          puVar6 = puVar6 + 1;
        } while (uVar8 != 0);
      }
      iVar9 = iVar9 + 1;
      param_3 = param_3 + 1;
    } while (iVar9 < *(int *)(param_2 + 0xc));
  }
  return;
}



// FUNCTION 144e923f0 FUN_144e923f0 body=247 status=ok
// SIG undefined FUN_144e923f0(void)

void FUN_144e923f0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = 8;
  if (*(char *)(*(longlong *)(param_1 + 0x1a0) + 0x1a) != '\0') {
    uVar10 = 1;
  }
  uVar10 = uVar10 * *(int *)(param_2 + 0x1c);
  FUN_144e91f00(param_3,*(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x30),uVar10 * 2);
  iVar6 = 0;
  if (0 < *(int *)(param_2 + 0xc)) {
    do {
      pbVar7 = (byte *)*param_3;
      if (uVar10 != 0) {
        uVar5 = (ulonglong)uVar10;
        pbVar3 = (byte *)param_3[1];
        puVar8 = (undefined1 *)*param_4;
        uVar9 = 1;
        do {
          pbVar1 = pbVar7 + 1;
          bVar2 = *pbVar7;
          pbVar7 = pbVar7 + 2;
          iVar4 = *pbVar3 + uVar9;
          uVar9 = uVar9 ^ 3;
          *puVar8 = (char)((int)((uint)bVar2 + iVar4 + (uint)pbVar3[1] + (uint)*pbVar1) >> 2);
          uVar5 = uVar5 - 1;
          pbVar3 = pbVar3 + 2;
          puVar8 = puVar8 + 1;
        } while (uVar5 != 0);
      }
      param_3 = param_3 + 2;
      iVar6 = iVar6 + 1;
      param_4 = param_4 + 1;
    } while (iVar6 < *(int *)(param_2 + 0xc));
  }
  return;
}



// FUNCTION 144e924f0 FUN_144e924f0 body=699 status=ok
// SIG undefined FUN_144e924f0(void)

void FUN_144e924f0(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  int iVar15;
  byte *pbVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  byte *pbVar22;
  int local_res8;
  
  iVar18 = 8;
  if (*(char *)(*(longlong *)(param_1 + 0x1a0) + 0x1a) != '\0') {
    iVar18 = 1;
  }
  iVar18 = iVar18 * *(int *)(param_2 + 0x1c);
  FUN_144e91f00((undefined8 *)(param_3 + -8),*(int *)(param_1 + 300) + 2,
                *(undefined4 *)(param_1 + 0x30),iVar18 * 2);
  local_res8 = 0;
  iVar19 = *(int *)(param_1 + 0x104) * 0x10;
  iVar15 = *(int *)(param_1 + 0x104) * -0x50 + 0x4000;
  if (0 < *(int *)(param_2 + 0xc)) {
    puVar20 = (undefined8 *)(param_3 + -8);
    do {
      pbVar10 = (byte *)puVar20[3];
      pbVar11 = (byte *)*puVar20;
      pbVar12 = (byte *)puVar20[2];
      pbVar22 = pbVar11 + 2;
      puVar13 = (undefined1 *)*param_4;
      pbVar14 = (byte *)puVar20[1];
      pbVar21 = pbVar12 + 2;
      pbVar16 = pbVar14 + 2;
      *puVar13 = (char)(((uint)pbVar12[1] + (uint)*pbVar14 + (uint)pbVar14[1] + (uint)*pbVar12) *
                        iVar15 + 0x8000 +
                        ((uint)pbVar10[2] +
                        (uint)*pbVar22 + (uint)*pbVar11 * 3 +
                        ((uint)*pbVar21 +
                         (uint)*pbVar16 + (uint)*pbVar14 + (uint)pbVar10[1] + (uint)pbVar11[1] +
                        (uint)*pbVar12) * 2 + (uint)*pbVar10 * 3) * iVar19 >> 0x10);
      pbVar10 = pbVar10 + 2;
      for (iVar17 = iVar18 + -2; puVar13 = puVar13 + 1, iVar17 != 0; iVar17 = iVar17 + -1) {
        pbVar11 = pbVar22 + 1;
        pbVar12 = pbVar21 + -1;
        pbVar14 = pbVar16 + -1;
        bVar7 = *pbVar22;
        pbVar1 = pbVar16 + 2;
        pbVar2 = pbVar21 + 2;
        pbVar3 = pbVar22 + -1;
        pbVar4 = pbVar21 + 1;
        pbVar5 = pbVar22 + 2;
        pbVar22 = pbVar22 + 2;
        pbVar6 = pbVar16 + 1;
        bVar8 = *pbVar21;
        pbVar21 = pbVar21 + 2;
        bVar9 = *pbVar16;
        pbVar16 = pbVar16 + 2;
        *puVar13 = (char)(((uint)bVar9 + (uint)*pbVar4 + (uint)*pbVar6 + (uint)bVar8) * iVar15 +
                          0x8000 + ((uint)pbVar10[-1] +
                                    ((uint)pbVar10[1] + (uint)*pbVar11 + (uint)*pbVar12 +
                                     (uint)*pbVar14 + (uint)*pbVar10 + (uint)bVar7 + (uint)*pbVar1 +
                                    (uint)*pbVar2) * 2 + (uint)*pbVar3 + (uint)*pbVar5 +
                                   (uint)pbVar10[2]) * iVar19 >> 0x10);
        pbVar10 = pbVar10 + 2;
      }
      param_4 = param_4 + 1;
      *puVar13 = (char)(((uint)*pbVar21 + (uint)pbVar16[1] + (uint)*pbVar16 + (uint)pbVar21[1]) *
                        iVar15 + 0x8000 +
                        ((uint)pbVar22[-1] +
                        (uint)pbVar10[-1] + (uint)pbVar22[1] * 3 +
                        ((uint)*pbVar22 +
                         (uint)*pbVar10 + (uint)pbVar16[1] + (uint)pbVar21[-1] + (uint)pbVar16[-1] +
                        (uint)pbVar21[1]) * 2 + (uint)pbVar10[1] * 3) * iVar19 >> 0x10);
      local_res8 = local_res8 + 1;
      puVar20 = puVar20 + 2;
    } while (local_res8 < *(int *)(param_2 + 0xc));
  }
  return;
}



// FUNCTION 144e927b0 FUN_144e927b0 body=413 status=ok
// SIG undefined FUN_144e927b0(void)

void FUN_144e927b0(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  
  iVar9 = 8;
  if (*(char *)(*(longlong *)(param_1 + 0x1a0) + 0x1a) != '\0') {
    iVar9 = 1;
  }
  iVar9 = iVar9 * *(int *)(param_2 + 0x1c);
  FUN_144e91f00(param_3 + -1,*(int *)(param_1 + 300) + 2,*(undefined4 *)(param_1 + 0x30),iVar9);
  iVar15 = 0;
  iVar8 = (0x80 - *(int *)(param_1 + 0x104)) * 0x200;
  iVar16 = *(int *)(param_1 + 0x104) * 0x40;
  if (0 < *(int *)(param_2 + 0xc)) {
    puVar5 = param_3;
    do {
      puVar17 = puVar5 + 1;
      puVar4 = *(undefined1 **)((param_4 - (longlong)param_3) + -8 + (longlong)puVar17);
      pbVar14 = (byte *)puVar5[-1] + 1;
      pbVar7 = (byte *)*puVar17 + 1;
      bVar3 = *(byte *)*puVar5;
      pbVar13 = (byte *)*puVar5 + 1;
      iVar6 = (uint)*(byte *)puVar5[-1] + (uint)*(byte *)*puVar17 + (uint)bVar3;
      iVar11 = (uint)*pbVar7 + (uint)*pbVar14 + (uint)*pbVar13;
      *puVar4 = (char)(((iVar6 * 2 - (uint)bVar3) + iVar11) * iVar16 + 0x8000 + (uint)bVar3 * iVar8
                      >> 0x10);
      for (iVar10 = iVar9 + -2; puVar4 = puVar4 + 1, iVar10 != 0; iVar10 = iVar10 + -1) {
        bVar3 = *pbVar13;
        pbVar14 = pbVar14 + 1;
        pbVar1 = pbVar7 + 1;
        pbVar7 = pbVar7 + 1;
        pbVar2 = pbVar13 + 1;
        pbVar13 = pbVar13 + 1;
        iVar12 = (uint)*pbVar1 + (uint)*pbVar14 + (uint)*pbVar2;
        *puVar4 = (char)((iVar12 + (iVar6 - (uint)bVar3) + iVar11) * iVar16 + 0x8000 +
                         (uint)bVar3 * iVar8 >> 0x10);
        iVar6 = iVar11;
        iVar11 = iVar12;
      }
      iVar15 = iVar15 + 1;
      *puVar4 = (char)((uint)*pbVar13 * iVar8 + 0x8000 +
                       ((iVar11 * 2 - (uint)*pbVar13) + iVar6) * iVar16 >> 0x10);
      puVar5 = puVar17;
    } while (iVar15 < *(int *)(param_2 + 0xc));
  }
  return;
}



// FUNCTION 144e92950 FUN_144e92950 body=13 status=ok
// SIG undefined FUN_144e92950(void)

ulonglong FUN_144e92950(int param_1,int param_2)

{
  return (longlong)(param_2 + -1 + param_1) / (longlong)param_2 & 0xffffffff;
}



// FUNCTION 144e92960 FUN_144e92960 body=24 status=ok
// SIG undefined FUN_144e92960(void)

int FUN_144e92960(int param_1,int param_2)

{
  param_1 = param_2 + -1 + param_1;
  return param_1 - param_1 % param_2;
}



// FUNCTION 144e92980 FUN_144e92980 body=97 status=ok
// SIG undefined FUN_144e92980(void)

void FUN_144e92980(longlong param_1,int param_2,longlong param_3,int param_4,int param_5,
                  uint param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *_Src;
  void *_Dst;
  
  puVar1 = (undefined8 *)(param_1 + (longlong)param_2 * 8);
  puVar2 = (undefined8 *)(param_3 + (longlong)param_4 * 8);
  for (; 0 < param_5; param_5 = param_5 + -1) {
    _Src = (void *)*puVar1;
    puVar1 = puVar1 + 1;
    _Dst = (void *)*puVar2;
    puVar2 = puVar2 + 1;
    memcpy(_Dst,_Src,(ulonglong)param_6);
  }
  return;
}



// FUNCTION 144e929f0 FUN_144e929f0 body=21 status=ok
// SIG undefined FUN_144e929f0(void)

void FUN_144e929f0(void *param_1,void *param_2,uint param_3)

{
  memcpy(param_2,param_1,(ulonglong)param_3 << 7);
  return;
}



// FUNCTION 144e92a10 FUN_144e92a10 body=10 status=ok
// SIG undefined FUN_144e92a10(void)

void FUN_144e92a10(void *param_1,size_t param_2)

{
  memset(param_1,0,param_2);
  return;
}



// FUNCTION 144e92a20 FUN_144e92a20 body=370 status=ok
// SIG undefined FUN_144e92a20(void)

void FUN_144e92a20(longlong *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  void *pvVar4;
  
  if ((param_2 == (longlong *)0x0) || (param_3 == (longlong *)0x0)) {
    *(undefined4 *)(*param_1 + 0x28) = 0x17;
    (**(code **)*param_1)();
  }
  if (param_1[5] == 0) {
    lVar3 = (**(code **)param_1[1])(param_1,0,0x58);
    param_1[5] = lVar3;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
  }
  else if (*(undefined **)(param_1[5] + 0x10) != &DAT_144e92ba0) {
    *(undefined4 *)(*param_1 + 0x28) = 0x17;
    (**(code **)*param_1)(param_1);
  }
  plVar1 = (longlong *)param_1[5];
  plVar1[3] = (longlong)FUN_144e92bb0;
  plVar1[4] = (longlong)&LAB_144e92c60;
  plVar1[2] = (longlong)&DAT_144e92ba0;
  bVar2 = false;
  if ((plVar1[8] == *param_2) && (*param_2 != 0)) {
    bVar2 = false;
    if (param_4 != '\0') {
      bVar2 = true;
    }
  }
  plVar1[5] = (longlong)param_2;
  plVar1[6] = (longlong)param_3;
  *(char *)(plVar1 + 10) = param_4;
  if ((*param_2 == 0) || (*param_3 == 0)) {
    if (param_4 == '\0') {
      *(undefined4 *)(*param_1 + 0x28) = 0x17;
      (**(code **)*param_1)(param_1);
    }
    else {
      pvVar4 = malloc(0x1000);
      *param_2 = (longlong)pvVar4;
      plVar1[7] = (longlong)pvVar4;
      if (pvVar4 == (void *)0x0) {
        *(undefined4 *)(*param_1 + 0x28) = 0x36;
        *(undefined4 *)(*param_1 + 0x2c) = 10;
        (**(code **)*param_1)(param_1);
      }
      *param_3 = 0x1000;
    }
  }
  lVar3 = *param_2;
  plVar1[8] = lVar3;
  *plVar1 = lVar3;
  if (bVar2) {
    lVar3 = plVar1[9];
  }
  else {
    lVar3 = *param_3;
    plVar1[9] = lVar3;
  }
  plVar1[1] = lVar3;
  return;
}



// FUNCTION 144e92bb0 FUN_144e92bb0 body=174 status=ok
// SIG undefined FUN_144e92bb0(void)

undefined8 FUN_144e92bb0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Dst;
  
  plVar2 = (longlong *)param_1[5];
  if ((char)plVar2[10] == '\0') {
    *(undefined4 *)(*param_1 + 0x28) = 0x17;
    (**(code **)*param_1)();
  }
  lVar3 = plVar2[9];
  _Dst = malloc(lVar3 * 2);
  if (_Dst == (void *)0x0) {
    *(undefined4 *)(*param_1 + 0x28) = 0x36;
    *(undefined4 *)(*param_1 + 0x2c) = 10;
    (**(code **)*param_1)(param_1);
  }
  memcpy(_Dst,(void *)plVar2[8],plVar2[9]);
  free((void *)plVar2[7]);
  lVar4 = plVar2[9];
  plVar2[7] = (longlong)_Dst;
  plVar2[8] = (longlong)_Dst;
  lVar1 = lVar4 + (longlong)_Dst;
  plVar2[9] = lVar3 * 2;
  *plVar2 = lVar1;
  plVar2[1] = lVar4;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 144e92c90 FUN_144e92c90 body=195 status=ok
// SIG undefined FUN_144e92c90(void)

void FUN_144e92c90(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    *(undefined4 *)(*param_1 + 0x28) = 0x2a;
    (**(code **)*param_1)();
  }
  if (param_1[5] == 0) {
    lVar2 = (**(code **)param_1[1])(param_1,0,0x38);
    param_1[5] = lVar2;
  }
  else if (*(undefined **)(param_1[5] + 0x10) != &DAT_144e92d60) {
    *(undefined4 *)(*param_1 + 0x28) = 0x17;
    (**(code **)*param_1)(param_1);
  }
  plVar1 = (longlong *)param_1[5];
  plVar1[3] = (longlong)FUN_144e92d70;
  plVar1[4] = (longlong)FUN_144e92db0;
  plVar1[5] = (longlong)FUN_145221a70;
  plVar1[2] = (longlong)&DAT_144e92d60;
  *plVar1 = param_2;
  plVar1[6] = (longlong)&DAT_144e92e00;
  plVar1[1] = param_3;
  return;
}



// FUNCTION 144e92d70 FUN_144e92d70 body=64 status=ok
// SIG undefined FUN_144e92d70(void)

undefined8 FUN_144e92d70(longlong *param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(*param_1 + 0x28) = 0x78;
  (**(code **)(*param_1 + 8))(param_1,0xffffffff);
  *(undefined **)param_1[5] = &DAT_149bcbac4;
  lVar1 = param_1[5];
  *(undefined8 *)(lVar1 + 8) = 2;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 144e92db0 FUN_144e92db0 body=73 status=ok
// SIG undefined FUN_144e92db0(void)

void FUN_144e92db0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (0 < param_2) {
    plVar1 = *(longlong **)(param_1 + 0x28);
    if ((int)plVar1[1] < param_2) {
      do {
        param_2 = param_2 - (int)plVar1[1];
        (*(code *)plVar1[3])(param_1);
      } while ((int)plVar1[1] < param_2);
    }
    *plVar1 = *plVar1 + (longlong)param_2;
    plVar1[1] = plVar1[1] - (longlong)param_2;
  }
  return;
}



// FUNCTION 144e92e10 FUN_144e92e10 body=167 status=ok
// SIG undefined FUN_144e92e10(void)

void FUN_144e92e10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    uVar1 = __acrt_iob_func(2);
    FUN_146c958a0(uVar1,&DAT_149bcbae4,param_1);
  }
  uVar1 = __acrt_iob_func(2);
  FUN_146c958a0(uVar1,"Warning, ");
  uVar1 = __acrt_iob_func(2);
  puVar2 = (undefined8 *)FUN_144737586();
  __stdio_common_vfprintf(*puVar2,uVar1,param_2,0,param_3);
  uVar1 = __acrt_iob_func(2);
  FUN_146c958a0(uVar1,&DAT_149bc6470);
  return;
}



// FUNCTION 144e92ec0 FUN_144e92ec0 body=141 status=ok
// SIG undefined FUN_144e92ec0(void)

void FUN_144e92ec0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    uVar1 = __acrt_iob_func(2);
    FUN_146c958a0(uVar1,&DAT_149bcbae4,param_1);
  }
  uVar1 = __acrt_iob_func(2);
  puVar2 = (undefined8 *)FUN_144737586();
  __stdio_common_vfprintf(*puVar2,uVar1,param_2,0,param_3);
  uVar1 = __acrt_iob_func(2);
  FUN_146c958a0(uVar1,&DAT_149bc6470);
  return;
}



// FUNCTION 144e92f50 FUN_144e92f50 body=15 status=ok
// SIG undefined FUN_144e92f50(void)

void * FUN_144e92f50(size_t param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x000144e92f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(param_1);
  return pvVar1;
}



// FUNCTION 144e92f60 FUN_144e92f60 body=20 status=ok
// SIG undefined FUN_144e92f60(void)

void * FUN_144e92f60(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000144e92f6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = calloc(param_1,param_2);
    return pvVar1;
  }
  return (void *)0x0;
}



// FUNCTION 144e92f80 realloc body=7 status=ok
// SIG void * realloc(void * _Memory, size_t _NewSize)

void * __cdecl realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144e92f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = realloc(_Memory,_NewSize);
  return pvVar1;
}



// FUNCTION 144e92f90 FUN_144e92f90 body=5 status=ok
// SIG undefined FUN_144e92f90(void)

void FUN_144e92f90(void *param_1,int param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014992ce70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memset(param_1,param_2,param_3);
  return;
}



// FUNCTION 144e92fa0 FUN_144e92fa0 body=5 status=ok
// SIG undefined FUN_144e92fa0(void)

void FUN_144e92fa0(void *param_1,void *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014992ce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memcpy(param_1,param_2,param_3);
  return;
}



// FUNCTION 144e92fb0 FUN_144e92fb0 body=5 status=ok
// SIG undefined FUN_144e92fb0(void)

void FUN_144e92fb0(void *param_1,void *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014992ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memcmp(param_1,param_2,param_3);
  return;
}



// FUNCTION 144e92fc0 free body=7 status=ok
// SIG void free(void * _Memory)

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x000144e92fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



// FUNCTION 144e92fd0 FUN_144e92fd0 body=101 status=ok
// SIG undefined FUN_144e92fd0(void)

void FUN_144e92fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  
  local_res20 = param_4;
  if (PTR_FUN_14c70a7a0 != (undefined *)0x0) {
    (*(code *)PTR_FUN_14c70a7a0)(param_2,param_3,&local_res20);
  }
  if (DAT_14c796720 != (code *)0x0) {
    (*DAT_14c796720)(param_1,param_2,param_3,&local_res20);
  }
  return;
}



// FUNCTION 144e93040 FUN_144e93040 body=13 status=ok
// SIG undefined FUN_144e93040(void)

void FUN_144e93040(undefined1 *param_1)

{
  undefined1 uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  return;
}



// FUNCTION 144e93050 FUN_144e93050 body=27 status=ok
// SIG undefined FUN_144e93050(void)

void FUN_144e93050(undefined1 *param_1)

{
  undefined1 uVar1;
  
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_1[1];
  param_1[1] = uVar1;
  return;
}



// FUNCTION 144e93070 FUN_144e93070 body=61 status=ok
// SIG undefined FUN_144e93070(void)

void FUN_144e93070(undefined1 *param_1)

{
  undefined1 uVar1;
  
  uVar1 = param_1[7];
  param_1[7] = *param_1;
  *param_1 = uVar1;
  uVar1 = param_1[6];
  param_1[6] = param_1[1];
  param_1[1] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[2];
  param_1[2] = uVar1;
  uVar1 = param_1[4];
  param_1[4] = param_1[3];
  param_1[3] = uVar1;
  return;
}



// FUNCTION 144e930b0 FUN_144e930b0 body=43 status=ok
// SIG undefined FUN_144e930b0(void)

void FUN_144e930b0(undefined1 *param_1,longlong param_2)

{
  undefined1 uVar1;
  
  for (; 0 < param_2; param_2 = param_2 + -1) {
    uVar1 = param_1[1];
    param_1[1] = *param_1;
    *param_1 = uVar1;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 144e93110 FUN_144e93110 body=57 status=ok
// SIG undefined FUN_144e93110(void)

void FUN_144e93110(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  if (0 < param_2) {
    puVar3 = (undefined1 *)(param_1 + 2);
    do {
      param_2 = param_2 + -1;
      uVar1 = puVar3[1];
      uVar2 = *puVar3;
      puVar3[1] = puVar3[-2];
      *puVar3 = puVar3[-1];
      puVar3[-2] = uVar1;
      puVar3[-1] = uVar2;
      puVar3 = puVar3 + 4;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 144e93150 FUN_144e93150 body=85 status=ok
// SIG undefined FUN_144e93150(void)

void FUN_144e93150(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  if (0 < param_2) {
    puVar3 = (undefined1 *)(param_1 + 6);
    do {
      param_2 = param_2 + -1;
      uVar1 = *puVar3;
      uVar2 = puVar3[1];
      puVar3[1] = puVar3[-6];
      *puVar3 = puVar3[-5];
      puVar3[-5] = uVar1;
      uVar1 = puVar3[-1];
      puVar3[-1] = puVar3[-4];
      puVar3[-4] = uVar1;
      uVar1 = puVar3[-2];
      puVar3[-2] = puVar3[-3];
      puVar3[-6] = uVar2;
      puVar3[-3] = uVar1;
      puVar3 = puVar3 + 8;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 144e931b0 FUN_144e931b0 body=57 status=ok
// SIG undefined FUN_144e931b0(void)

void FUN_144e931b0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  if (0 < param_2) {
    puVar3 = (undefined1 *)(param_1 + 2);
    do {
      param_2 = param_2 + -1;
      uVar1 = puVar3[1];
      uVar2 = *puVar3;
      puVar3[1] = puVar3[-2];
      *puVar3 = puVar3[-1];
      puVar3[-2] = uVar1;
      puVar3[-1] = uVar2;
      puVar3 = puVar3 + 4;
    } while (0 < param_2);
  }
  return;
}



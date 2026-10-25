// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14892d9fc FUN_14892d9fc body=38 status=ok
// SIG undefined FUN_14892d9fc(void)

undefined8 FUN_14892d9fc(undefined8 param_1,int param_2)

{
  FUN_14388850e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14892da22 FUN_14892da22 body=241 status=ok
// SIG undefined FUN_14892da22(void)

void FUN_14892da22(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar3 = FUN_144a7fd54();
    plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
      uVar5 = FUN_14479d2ce(param_1 + 0x48);
      local_28 = 8;
      local_40[0] = (undefined8 ***)0x0;
      FUN_14485c47a(local_40,uVar5);
      local_20 = 0xe;
      FUN_1402b90a2(uVar3,&DAT_14cb88ca8,local_40);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar6 = local_40;
        if (0x18 < local_28) {
          pppuVar6 = (undefined8 ***)local_40[0];
        }
        (*pcVar1)(pppuVar6);
      }
      if (0x18 < local_28) {
        FUN_1400020a8(local_40[0]);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892db14 FUN_14892db14 body=206 status=ok
// SIG undefined FUN_14892db14(void)

void FUN_14892db14(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_58 [32];
  undefined8 **local_38 [3];
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar2 != 0) {
    uVar3 = FUN_144a7fd54();
    plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
      local_20 = 8;
      local_38[0] = (undefined8 ***)0x0;
      local_18 = 0xe;
      FUN_1402b90a2(uVar3,&DAT_14cb88ca8,local_38);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
      if (pcVar1 != (code *)0x0) {
        pppuVar5 = local_38;
        if (0x18 < local_20) {
          pppuVar5 = (undefined8 ***)local_38[0];
        }
        (*pcVar1)(pppuVar5);
      }
      if (0x18 < local_20) {
        FUN_1400020a8(local_38[0]);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892dcea FUN_14892dcea body=29 status=ok
// SIG undefined FUN_14892dcea(void)

undefined8 FUN_14892dcea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14892dd08 FUN_14892dd08 body=83 status=ok
// SIG undefined FUN_14892dd08(void)

void FUN_14892dd08(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9aa250;
  uVar2 = (ushort)DAT_14c9aa250;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9aa2e8 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9aa250);
  }
  else {
    (*DAT_14c9aa2e8)();
  }
  *(undefined1 *)(param_2 + 4) = 0x1a;
  return;
}



// FUNCTION 14892dd5c FUN_14892dd5c body=83 status=ok
// SIG undefined FUN_14892dd5c(void)

void FUN_14892dd5c(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9aa250;
  uVar2 = (ushort)DAT_14c9aa250;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9aa2e8 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9aa250);
  }
  else {
    (*DAT_14c9aa2e8)();
  }
  *(undefined1 *)(param_2 + 4) = 0x1a;
  return;
}



// FUNCTION 14892ddb0 FUN_14892ddb0 body=81 status=ok
// SIG undefined FUN_14892ddb0(void)

void FUN_14892ddb0(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      puVar2 = (undefined8 *)*param_2;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    FUN_1400020a8(*param_2);
    return;
  }
  return;
}



// FUNCTION 14892de18 FUN_14892de18 body=283 status=ok
// SIG undefined FUN_14892de18(void)

undefined8 FUN_14892de18(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    bVar1 = *(byte *)(param_2 + 4);
    if (bVar1 == *(byte *)(param_3 + 4)) {
      puVar6 = param_3;
      if (0x18 < *(ushort *)(param_3 + 3)) {
        puVar6 = (undefined8 *)*param_3;
      }
      puVar5 = param_2;
      if (0x18 < *(ushort *)(param_2 + 3)) {
        puVar5 = (undefined8 *)*param_2;
      }
      uVar4 = (ulonglong)((uint)bVar1 * 0x120);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
      }
      else {
        (*pcVar3)();
      }
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar6 = param_2;
        if (0x18 < *(ushort *)(param_2 + 3)) {
          puVar6 = (undefined8 *)*param_2;
        }
        (*pcVar3)(puVar6);
      }
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
      bVar1 = *(byte *)(param_3 + 4);
      uVar2 = *(ushort *)(param_3 + 3);
      *(ushort *)(param_2 + 3) = uVar2;
      puVar5 = param_2;
      puVar6 = param_3;
      if (0x18 < uVar2) {
        puVar5 = (undefined8 *)FUN_14001cc68(uVar2,0);
        *param_2 = puVar5;
        puVar6 = (undefined8 *)*param_3;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    }
    param_3 = param_3 + 5;
    param_2 = param_2 + 5;
  }
  return 1;
}



// FUNCTION 14892df5c FUN_14892df5c body=59 status=ok
// SIG undefined FUN_14892df5c(void)

undefined8 FUN_14892df5c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892dffa FUN_14892dffa body=85 status=ok
// SIG undefined FUN_14892dffa(void)

void FUN_14892dffa(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar1 != (code *)0x0) {
      puVar2 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar2 = (undefined8 *)*param_1;
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 14892e050 FUN_14892e050 body=40 status=ok
// SIG undefined FUN_14892e050(void)

void FUN_14892e050(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459293de();
  FUN_14470ec92(uVar1,param_1,param_2,0);
  return;
}



// FUNCTION 14892e078 FUN_14892e078 body=39 status=ok
// SIG undefined FUN_14892e078(void)

void FUN_14892e078(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459293de();
  FUN_14470ec92(uVar1,param_1,&DAT_14cb88cd0,0);
  return;
}



// FUNCTION 14892e0a0 FUN_14892e0a0 body=53 status=ok
// SIG undefined FUN_14892e0a0(void)

void FUN_14892e0a0(void)

{
  FUN_14892e0d6();
  if (DAT_14cb88d60 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb88d40 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14892e0d6 FUN_14892e0d6 body=363 status=ok
// SIG undefined FUN_14892e0d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14892e0d6(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0x100000000;
  local_38 = &DAT_14cb88d50;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14cb88d68 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14cb88d40;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c;
      FUN_14892e242(*(undefined8 *)(lVar1 + 0x10 + lVar2 * 0x28),
                    *(undefined4 *)(lVar1 + 0x18 + lVar2 * 0x28));
      if (*(longlong *)(lVar1 + 0x10 + lVar2 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  DAT_14cb88d48 = 0;
  if (DAT_14cb88d4c != 0) {
    FUN_140549ad6(&DAT_14cb88d40,0);
  }
  _DAT_14cb88d70 = 0xffffffff;
  DAT_14cb88d68 = 0;
  if (0x80 < DAT_14cb88d6c) {
    DAT_14cb88d6c = 0x80;
    FUN_1446efbd8(&DAT_14cb88d50,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892e242 FUN_14892e242 body=38 status=ok
// SIG undefined FUN_14892e242(void)

void FUN_14892e242(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14892e268(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 14892e268 FUN_14892e268 body=60 status=ok
// SIG undefined FUN_14892e268(void)

void FUN_14892e268(longlong param_1)

{
  FUN_14499ee64(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14892e2a4 FUN_14892e2a4 body=38 status=ok
// SIG undefined FUN_14892e2a4(void)

undefined8 FUN_14892e2a4(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14892e2ca FUN_14892e2ca body=125 status=ok
// SIG undefined FUN_14892e2ca(void)

void FUN_14892e2ca(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_14866cae0(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14892e348 FUN_14892e348 body=132 status=ok
// SIG undefined FUN_14892e348(void)

void FUN_14892e348(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14892e3ce FUN_14892e3ce body=266 status=ok
// SIG undefined FUN_14892e3ce(void)

void FUN_14892e3ce(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar13 = (longlong)(int)uVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_14892e4d8(lVar2,*param_2);
    uVar10 = 0;
    uVar7 = 0;
    do {
      uVar11 = (ulonglong)uVar7;
      uVar3 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar3 = uVar1;
      }
      lVar12 = lVar2 + 8 + uVar11 * 8;
      uVar8 = uVar7;
      uVar6 = uVar11;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar3;
        if (lVar13 <= (longlong)uVar6) break;
        bVar5 = FUN_14892e4d8(lVar12,*param_2);
        uVar8 = uVar8 + 1;
        lVar12 = lVar12 + 8;
        uVar9 = uVar8;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (uVar10 != uVar7) {
          memmove((void *)(lVar2 + (longlong)(int)uVar10 * 8),(void *)(lVar2 + uVar11 * 8),
                  (longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar10 = uVar10 + (uVar9 - uVar7);
      }
      uVar7 = uVar9;
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar6 < lVar13);
    *(uint *)(param_1 + 1) = uVar10;
  }
  return;
}



// FUNCTION 14892e4d8 FUN_14892e4d8 body=53 status=ok
// SIG undefined FUN_14892e4d8(void)

ulonglong FUN_14892e4d8(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14892e50e FUN_14892e50e body=31 status=ok
// SIG undefined FUN_14892e50e(void)

undefined8 FUN_14892e50e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14892e548 FUN_14892e548 body=26 status=ok
// SIG undefined FUN_14892e548(void)

bool FUN_14892e548(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14892e562 FUN_14892e562 body=101 status=ok
// SIG undefined FUN_14892e562(void)

void FUN_14892e562(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41eea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14892e5c8 FUN_14892e5c8 body=101 status=ok
// SIG undefined FUN_14892e5c8(void)

void FUN_14892e5c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41eea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14892e62e FUN_14892e62e body=134 status=ok
// SIG undefined FUN_14892e62e(void)

void FUN_14892e62e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41eea0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014892e6a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14892e6b4 FUN_14892e6b4 body=52 status=ok
// SIG undefined FUN_14892e6b4(void)

void FUN_14892e6b4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014892e6e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14892e6e8 FUN_14892e6e8 body=167 status=ok
// SIG undefined FUN_14892e6e8(void)

bool FUN_14892e6e8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892e790 FUN_14892e790 body=31 status=ok
// SIG undefined FUN_14892e790(void)

undefined8 FUN_14892e790(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14892e7ca FUN_14892e7ca body=26 status=ok
// SIG undefined FUN_14892e7ca(void)

bool FUN_14892e7ca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14892e7e4 FUN_14892e7e4 body=101 status=ok
// SIG undefined FUN_14892e7e4(void)

void FUN_14892e7e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41ef10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14892e84a FUN_14892e84a body=101 status=ok
// SIG undefined FUN_14892e84a(void)

void FUN_14892e84a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41ef10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14892e8b0 FUN_14892e8b0 body=134 status=ok
// SIG undefined FUN_14892e8b0(void)

void FUN_14892e8b0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a7feda0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41ef10;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014892e927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14892e936 FUN_14892e936 body=62 status=ok
// SIG undefined FUN_14892e936(void)

void FUN_14892e936(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014892e971. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14892e974 FUN_14892e974 body=48 status=ok
// SIG undefined FUN_14892e974(void)

void FUN_14892e974(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 14892e9a4 FUN_14892e9a4 body=48 status=ok
// SIG undefined FUN_14892e9a4(void)

void FUN_14892e9a4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14892e9d4 FUN_14892e9d4 body=132 status=ok
// SIG undefined FUN_14892e9d4(void)

void FUN_14892e9d4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14892ea59 FUN_14892ea59 body=18 status=ok
// SIG undefined FUN_14892ea59(void)

void FUN_14892ea59(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 14892ea6c FUN_14892ea6c body=147 status=ok
// SIG undefined FUN_14892ea6c(void)

void FUN_14892ea6c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14892eb00 FUN_14892eb00 body=62 status=ok
// SIG undefined FUN_14892eb00(void)

void FUN_14892eb00(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14892eb3e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 14892eb3e FUN_14892eb3e body=112 status=ok
// SIG undefined FUN_14892eb3e(void)

ulonglong FUN_14892eb3e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14892eb78;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_14892eb78:
  return param_2 & 0xffffffff;
}



// FUNCTION 14892ebae FUN_14892ebae body=118 status=ok
// SIG undefined FUN_14892ebae(void)

ulonglong FUN_14892ebae(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892ec26 FUN_14892ec26 body=124 status=ok
// SIG undefined FUN_14892ec26(void)

void FUN_14892ec26(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    uVar5 = 0;
    do {
      cVar4 = FUN_14892eca2(lVar2 + uVar5,param_2);
      if (cVar4 != '\0') {
        if ((int)(~uVar5 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != uVar5);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14892ecd8(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
  return;
}



// FUNCTION 14892eca2 FUN_14892eca2 body=53 status=ok
// SIG undefined FUN_14892eca2(void)

ulonglong FUN_14892eca2(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14892ecd8 FUN_14892ecd8 body=132 status=ok
// SIG undefined FUN_14892ecd8(void)

void FUN_14892ecd8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14892ed5e FUN_14892ed5e body=62 status=ok
// SIG undefined FUN_14892ed5e(void)

void FUN_14892ed5e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14892ed9c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 14892ed9c FUN_14892ed9c body=93 status=ok
// SIG undefined FUN_14892ed9c(void)

ulonglong FUN_14892ed9c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14892edfa FUN_14892edfa body=112 status=ok
// SIG undefined FUN_14892edfa(void)

void FUN_14892edfa(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar4 = *param_1;
  iVar2 = (int)param_1[1];
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    uVar5 = 0;
    do {
      if (*(longlong *)(lVar4 + 8 + uVar5) == param_2[1]) {
        if ((int)(~uVar5 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 0x10;
    } while (lVar6 << 4 != uVar5);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_14892e9d4(param_1,iVar2);
    lVar4 = *param_1;
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(lVar4 + lVar6 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 14892ee6a FUN_14892ee6a body=62 status=ok
// SIG undefined FUN_14892ee6a(void)

void FUN_14892ee6a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14892eea8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14892eea8 FUN_14892eea8 body=93 status=ok
// SIG undefined FUN_14892eea8(void)

ulonglong FUN_14892eea8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14892ef05 FUN_14892ef05 body=15 status=ok
// SIG undefined FUN_14892ef05(void)

void FUN_14892ef05(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd) = 0;
  return;
}



// FUNCTION 14892ef14 FUN_14892ef14 body=147 status=ok
// SIG undefined FUN_14892ef14(void)

void FUN_14892ef14(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14892efa8 FUN_14892efa8 body=31 status=ok
// SIG undefined FUN_14892efa8(void)

undefined8 FUN_14892efa8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14892efdc FUN_14892efdc body=85 status=ok
// SIG undefined FUN_14892efdc(void)

void FUN_14892efdc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41efc0;
  return;
}



// FUNCTION 14892f032 FUN_14892f032 body=118 status=ok
// SIG undefined FUN_14892f032(void)

void FUN_14892f032(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41efc0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014892f099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14892f0a8 FUN_14892f0a8 body=101 status=ok
// SIG undefined FUN_14892f0a8(void)

undefined8 FUN_14892f0a8(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145fcd6ae(local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892f10e FUN_14892f10e body=8 status=ok
// SIG undefined FUN_14892f10e(void)

void FUN_14892f10e(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 14892f116 FUN_14892f116 body=132 status=ok
// SIG undefined FUN_14892f116(void)

void FUN_14892f116(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14892f19c FUN_14892f19c body=62 status=ok
// SIG undefined FUN_14892f19c(void)

void FUN_14892f19c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14892f1da(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 14892f1da FUN_14892f1da body=93 status=ok
// SIG undefined FUN_14892f1da(void)

ulonglong FUN_14892f1da(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14892f260 FUN_14892f260 body=101 status=ok
// SIG undefined FUN_14892f260(void)

void FUN_14892f260(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41f0c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f050;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14892f2c6 FUN_14892f2c6 body=101 status=ok
// SIG undefined FUN_14892f2c6(void)

void FUN_14892f2c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41f0c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f050;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14892f32c FUN_14892f32c body=134 status=ok
// SIG undefined FUN_14892f32c(void)

void FUN_14892f32c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b41f0c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41f050;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014892f3a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14892f3b2 FUN_14892f3b2 body=98 status=ok
// SIG undefined FUN_14892f3b2(void)

void FUN_14892f3b2(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = param_3[8];
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = param_3[4];
  uStack_24 = param_3[5];
  uStack_20 = param_3[6];
  uStack_1c = param_3[7];
  (**(code **)(param_1 + 0x20))
            ((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18),local_28,&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892f440 FUN_14892f440 body=101 status=ok
// SIG undefined FUN_14892f440(void)

void FUN_14892f440(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41f1a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f130;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14892f4a6 FUN_14892f4a6 body=101 status=ok
// SIG undefined FUN_14892f4a6(void)

void FUN_14892f4a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41f1a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f130;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14892f50c FUN_14892f50c body=134 status=ok
// SIG undefined FUN_14892f50c(void)

void FUN_14892f50c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b41f1a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41f130;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014892f583. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14892f5a4 FUN_14892f5a4 body=25 status=ok
// SIG undefined FUN_14892f5a4(void)

undefined8 FUN_14892f5a4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14892f5e8 FUN_14892f5e8 body=101 status=ok
// SIG undefined FUN_14892f5e8(void)

void FUN_14892f5e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41f280;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14892f64e FUN_14892f64e body=101 status=ok
// SIG undefined FUN_14892f64e(void)

void FUN_14892f64e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41f280;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14892f6b4 FUN_14892f6b4 body=134 status=ok
// SIG undefined FUN_14892f6b4(void)

void FUN_14892f6b4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b41f280;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41f210;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014892f72b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14892f73a FUN_14892f73a body=98 status=ok
// SIG undefined FUN_14892f73a(void)

void FUN_14892f73a(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = *(undefined8 *)(param_3 + 8);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = param_3[4];
  uStack_24 = param_3[5];
  uStack_20 = param_3[6];
  uStack_1c = param_3[7];
  (**(code **)(param_1 + 0x20))
            ((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18),local_28,&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14892f7a0 FUN_14892f7a0 body=156 status=ok
// SIG undefined FUN_14892f7a0(void)

undefined8 * FUN_14892f7a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x3c0);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b41f2f0;
  memset(puVar1 + 2,0,0x3b0);
  FUN_14126c416(puVar1 + 2);
  puVar1[2] = &PTR_FUN_14b1d74f0;
  puVar1[0x67] = 0;
  puVar1[0x68] = 0;
  puVar1[0x69] = 0;
  puVar1[0x6a] = 0;
  puVar1[0x6b] = 0;
  puVar1[0x6c] = 0;
  puVar1[0x6d] = 0;
  puVar1[0x6e] = 0;
  puVar1[0x6f] = 0;
  puVar1[0x70] = 0;
  puVar1[0x71] = 0;
  puVar1[0x72] = 0;
  puVar1[0x73] = 0;
  puVar1[0x74] = 0;
  puVar1[0x75] = 0;
  puVar1[0x76] = 0;
  return puVar1;
}



// FUNCTION 14892f83c FUN_14892f83c body=50 status=ok
// SIG undefined FUN_14892f83c(void)

void FUN_14892f83c(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b1d74f0;
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FUN_1400020a8();
  }
  FUN_14060fc84(param_1 + 0x10);
  return;
}



// FUNCTION 14892f86e FUN_14892f86e body=29 status=ok
// SIG undefined FUN_14892f86e(void)

undefined8 FUN_14892f86e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14892f88c FUN_14892f88c body=167 status=ok
// SIG undefined FUN_14892f88c(void)

void FUN_14892f88c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14892f907;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14892f907;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14892f907:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014892f927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14892f934 FUN_14892f934 body=162 status=ok
// SIG undefined FUN_14892f934(void)

void FUN_14892f934(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14892f973;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14892f973;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14892f973:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014892f9d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14892f9d6 FUN_14892f9d6 body=48 status=ok
// SIG undefined FUN_14892f9d6(void)

void FUN_14892f9d6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 14892fa06 FUN_14892fa06 body=62 status=ok
// SIG undefined FUN_14892fa06(void)

void FUN_14892fa06(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14892fa44(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x58,8);
  }
  return;
}



// FUNCTION 14892fa44 FUN_14892fa44 body=104 status=ok
// SIG undefined FUN_14892fa44(void)

ulonglong FUN_14892fa44(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x58) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14892fa7a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x58,8);
      param_2 = param_2 / 0x58;
    }
  }
LAB_14892fa7a:
  return param_2 & 0xffffffff;
}



// FUNCTION 14892fab0 FUN_14892fab0 body=81 status=ok
// SIG undefined FUN_14892fab0(void)

undefined8 FUN_14892fab0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar6;
}



// FUNCTION 14892fb08 FUN_14892fb08 body=91 status=ok
// SIG undefined FUN_14892fb08(void)

bool FUN_14892fb08(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14892fb24;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_14892fb24:
  return lVar6 == param_2;
}



// FUNCTION 14892fb80 FUN_14892fb80 body=118 status=ok
// SIG undefined FUN_14892fb80(void)

void FUN_14892fb80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac89870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f430;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14892fbf6 FUN_14892fbf6 body=118 status=ok
// SIG undefined FUN_14892fbf6(void)

void FUN_14892fbf6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac89870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f430;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14892fc6c FUN_14892fc6c body=156 status=ok
// SIG undefined FUN_14892fc6c(void)

void FUN_14892fc6c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ac89870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41f430;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014892fcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14892fd08 FUN_14892fd08 body=104 status=ok
// SIG undefined FUN_14892fd08(void)

void FUN_14892fd08(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014892fd55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014892fd66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14892fd70 FUN_14892fd70 body=101 status=ok
// SIG undefined FUN_14892fd70(void)

ulonglong FUN_14892fd70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14892fdca:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14892fdca;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14892fdd6 FUN_14892fdd6 body=48 status=ok
// SIG undefined FUN_14892fdd6(void)

void FUN_14892fdd6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 14892fe06 FUN_14892fe06 body=107 status=ok
// SIG undefined FUN_14892fe06(void)

/* WARNING: Removing unreachable block (ram,0x00014892fe38) */
/* WARNING: Removing unreachable block (ram,0x00014892fe14) */
/* WARNING: Removing unreachable block (ram,0x00014892fe2a) */
/* WARNING: Removing unreachable block (ram,0x00014892fe43) */
/* WARNING: Removing unreachable block (ram,0x00014892fe2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14892fe06(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb88c60;
  LOCK();
  UNLOCK();
  DAT_14cb88c60 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb88c68 = _DAT_14cb88c68 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb88c68 = _DAT_14cb88c68 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14892fe72 FUN_14892fe72 body=31 status=ok
// SIG undefined FUN_14892fe72(void)

undefined8 FUN_14892fe72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14892feac FUN_14892feac body=29 status=ok
// SIG undefined FUN_14892feac(void)

bool FUN_14892feac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14892feca FUN_14892feca body=101 status=ok
// SIG undefined FUN_14892feca(void)

void FUN_14892feca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f4a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14892ff30 FUN_14892ff30 body=101 status=ok
// SIG undefined FUN_14892ff30(void)

void FUN_14892ff30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f4a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14892ff96 FUN_14892ff96 body=134 status=ok
// SIG undefined FUN_14892ff96(void)

void FUN_14892ff96(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41f4a0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014893000d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14893001c FUN_14893001c body=42 status=ok
// SIG undefined FUN_14893001c(void)

void FUN_14893001c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148930043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148930046 FUN_148930046 body=107 status=ok
// SIG undefined FUN_148930046(void)

/* WARNING: Removing unreachable block (ram,0x000148930078) */
/* WARNING: Removing unreachable block (ram,0x000148930054) */
/* WARNING: Removing unreachable block (ram,0x00014893006a) */
/* WARNING: Removing unreachable block (ram,0x000148930083) */
/* WARNING: Removing unreachable block (ram,0x00014893006c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148930046(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb88c80;
  LOCK();
  UNLOCK();
  DAT_14cb88c80 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb88c88 = _DAT_14cb88c88 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb88c88 = _DAT_14cb88c88 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1489300b2 FUN_1489300b2 body=31 status=ok
// SIG undefined FUN_1489300b2(void)

undefined8 FUN_1489300b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489300e6 FUN_1489300e6 body=85 status=ok
// SIG undefined FUN_1489300e6(void)

void FUN_1489300e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f520;
  return;
}



// FUNCTION 14893013c FUN_14893013c body=118 status=ok
// SIG undefined FUN_14893013c(void)

void FUN_14893013c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41f520;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489301a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489301b2 FUN_1489301b2 body=101 status=ok
// SIG undefined FUN_1489301b2(void)

undefined8 FUN_1489301b2(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145d5ed08(local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148930218 FUN_148930218 body=114 status=ok
// SIG undefined FUN_148930218(void)

void FUN_148930218(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x228,8);
    iVar2 = (int)(uVar1 / 0x228);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x228,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14893028a FUN_14893028a body=60 status=ok
// SIG undefined FUN_14893028a(void)

void FUN_14893028a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1489302c6(param_1,param_2);
    param_1 = param_1 + 0x228;
    param_2 = param_2 + 0x228;
  }
  return;
}



// FUNCTION 1489302c6 FUN_1489302c6 body=742 status=ok
// SIG undefined FUN_1489302c6(void)

undefined8 * FUN_1489302c6(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_142b15db4(param_1 + 1,param_2 + 8);
  *param_1 = &PTR_FUN_14b039520;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  param_1[5] = 0;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  uVar4 = *(undefined4 *)(param_2 + 0x40);
  uVar5 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar5;
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 0x50);
  pvVar2 = *(void **)(param_2 + 0x48);
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  param_1[0xe] = 0;
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  uVar4 = *(undefined4 *)(param_2 + 0x88);
  uVar5 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 0x11) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar5;
  param_1[0x12] = 0;
  iVar1 = *(int *)(param_2 + 0x98);
  pvVar2 = *(void **)(param_2 + 0x90);
  *(int *)(param_1 + 0x13) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x12,iVar1,0);
    memcpy((void *)param_1[0x12],pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = *(undefined4 *)(param_2 + 0xa4);
  uVar4 = *(undefined4 *)(param_2 + 0xa8);
  uVar5 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar3;
  *(undefined4 *)(param_1 + 0x15) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar5;
  FUN_1489305ac(param_1 + 0x16,param_2 + 0xb0);
  FUN_148930618(param_1 + 0x1a,param_2 + 0xd0);
  param_1[0x1e] = *(undefined8 *)(param_2 + 0xf0);
  FUN_1406022be(param_1 + 0x1f,param_2 + 0xf8);
  param_1[0x1f] = &PTR_FUN_14b0394b0;
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x120);
  FUN_144a7f96e(param_1 + 0x25,param_2 + 0x128);
  uVar6 = *(undefined8 *)(param_2 + 0x148);
  param_1[0x28] = *(undefined8 *)(param_2 + 0x140);
  param_1[0x29] = uVar6;
  param_1[0x2a] = *(undefined8 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x158);
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_2 + 0x168);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x170);
  FUN_144a7f96e(param_1 + 0x2f,param_2 + 0x178);
  uVar6 = *(undefined8 *)(param_2 + 0x198);
  param_1[0x32] = *(undefined8 *)(param_2 + 400);
  param_1[0x33] = uVar6;
  param_1[0x34] = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x35) = *(undefined4 *)(param_2 + 0x1a8);
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_2 + 0x1b8);
  param_1[0x38] = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x1d0);
  FUN_144a7f96e(param_1 + 0x3b,param_2 + 0x1d8);
  uVar6 = *(undefined8 *)(param_2 + 0x1f8);
  param_1[0x3e] = *(undefined8 *)(param_2 + 0x1f0);
  param_1[0x3f] = uVar6;
  param_1[0x40] = *(undefined8 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)(param_2 + 0x208);
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = *(undefined4 *)(param_2 + 0x218);
  *(undefined1 *)((longlong)param_1 + 0x222) = *(undefined1 *)(param_2 + 0x222);
  *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(param_2 + 0x220);
  return param_1;
}



// FUNCTION 1489305ac FUN_1489305ac body=108 status=ok
// SIG undefined FUN_1489305ac(void)

undefined8 * FUN_1489305ac(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_148633da8(param_1 + 1,iVar1,0);
    FUN_148633e1b(param_1[1],uVar2,iVar1);
  }
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 148930618 FUN_148930618 body=108 status=ok
// SIG undefined FUN_148930618(void)

undefined8 * FUN_148930618(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_148633e48(param_1 + 1,iVar1,0);
    FUN_140070a2a(param_1[1],uVar2,iVar1);
  }
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 148930684 FUN_148930684 body=146 status=ok
// SIG undefined FUN_148930684(void)

void FUN_148930684(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x1d0,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x1d0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148930718 FUN_148930718 body=134 status=ok
// SIG undefined FUN_148930718(void)

longlong FUN_148930718(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1489307a0();
  if (iVar1 != -1) {
    lVar2 = (longlong)iVar1;
    if (DAT_14cb88d40 + lVar2 * 0x28 != 0) goto LAB_148930752;
  }
  local_28 = param_2;
  FUN_148930872(&local_1c,param_1);
  lVar2 = (longlong)local_1c;
LAB_148930752:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return DAT_14cb88d40 + lVar2 * 0x28 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489307a0 FUN_1489307a0 body=209 status=ok
// SIG undefined FUN_1489307a0(void)

int FUN_1489307a0(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb88d48 != DAT_14cb88d74) {
    puVar2 = &DAT_14cb88d78;
    if (DAT_14cb88d80 != (undefined *)0x0) {
      puVar2 = DAT_14cb88d80;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb88d88 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb88d40 + (longlong)iVar3 * 0x28);
        cVar1 = FUN_141223124(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_1489307cd;
        iVar3 = *(int *)(DAT_14cb88d40 + 0x20 + (longlong)iVar3 * 0x28);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_1489307cd:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 148930872 FUN_148930872 body=309 status=ok
// SIG undefined FUN_148930872(void)

undefined4 * FUN_148930872(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1489309a8(local_48);
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  FUN_14892e242(0,0);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar2 = FUN_148930ab6(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14cb88d48 - DAT_14cb88d74;
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14cb88d88)) {
      param_2 = DAT_14cb88d88 - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x24) = param_2;
      puVar4 = DAT_14cb88d80;
      if (DAT_14cb88d80 == (undefined *)0x0) {
        puVar4 = &DAT_14cb88d78;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)(puVar4 + ((longlong)DAT_14cb88d88 - 1U & (longlong)(int)param_2) * 4);
      puVar4 = DAT_14cb88d80;
      if (DAT_14cb88d80 == (undefined *)0x0) {
        puVar4 = &DAT_14cb88d78;
      }
      *(undefined4 *)(puVar4 + ((longlong)DAT_14cb88d88 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14cb88d88 = iVar6;
      FUN_148930cbe();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489309a8 FUN_1489309a8 body=270 status=ok
// SIG undefined FUN_1489309a8(void)

int * FUN_1489309a8(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb88d70;
  iVar4 = DAT_14cb88d48;
  if (DAT_14cb88d74 == 0) {
    iVar2 = DAT_14cb88d48 + 1;
    bVar7 = DAT_14cb88d4c == DAT_14cb88d48;
    DAT_14cb88d48 = iVar2;
    if (bVar7) {
      FUN_140549c28(&DAT_14cb88d40,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cb88d50,1);
    puVar3 = DAT_14cb88d60;
    if (DAT_14cb88d60 == (undefined *)0x0) {
      puVar3 = &DAT_14cb88d50;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cb88d70;
    DAT_14cb88d70 = *(int *)(DAT_14cb88d40 + 4 + lVar6 * 0x28);
    DAT_14cb88d74 = DAT_14cb88d74 + -1;
    iVar4 = iVar2;
    if (DAT_14cb88d74 != 0) {
      *(undefined4 *)(DAT_14cb88d40 + (longlong)DAT_14cb88d70 * 0x28) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cb88d50;
  if (DAT_14cb88d60 != (undefined *)0x0) {
    puVar3 = DAT_14cb88d60;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x28 + DAT_14cb88d40;
  return param_1;
}



// FUNCTION 148930ab6 FUN_148930ab6 body=181 status=ok
// SIG undefined FUN_148930ab6(void)

undefined8 FUN_148930ab6(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb88d48 - DAT_14cb88d74 != 1) {
    local_30 = *param_2;
    iVar9 = FUN_148930b6c();
    if (iVar9 != -1) {
      puVar1 = (undefined4 *)(DAT_14cb88d40 + (longlong)iVar9 * 0x28);
      FUN_14892e242(*(undefined8 *)(puVar1 + 4),puVar1[6]);
      if (*(longlong *)(puVar1 + 4) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *(undefined4 *)param_2;
      uVar3 = *(undefined4 *)((longlong)param_2 + 4);
      uVar4 = *(undefined4 *)(param_2 + 1);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar7 = *(undefined4 *)(param_2 + 3);
      uVar8 = *(undefined4 *)((longlong)param_2 + 0x1c);
      puVar1[4] = *(undefined4 *)(param_2 + 2);
      puVar1[5] = uVar6;
      puVar1[6] = uVar7;
      puVar1[7] = uVar8;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_148930c3e(*param_3);
      *param_3 = iVar9;
      uVar10 = 1;
      goto LAB_148930ae1;
    }
  }
  uVar10 = 0;
LAB_148930ae1:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148930b6c FUN_148930b6c body=209 status=ok
// SIG undefined FUN_148930b6c(void)

int FUN_148930b6c(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb88d48 != DAT_14cb88d74) {
    puVar2 = &DAT_14cb88d78;
    if (DAT_14cb88d80 != (undefined *)0x0) {
      puVar2 = DAT_14cb88d80;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb88d88 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb88d40 + (longlong)iVar3 * 0x28);
        cVar1 = FUN_140bf1e82(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_148930b99;
        iVar3 = *(int *)(DAT_14cb88d40 + 0x20 + (longlong)iVar3 * 0x28);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_148930b99:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 148930c3e FUN_148930c3e body=128 status=ok
// SIG undefined FUN_148930c3e(void)

void FUN_148930c3e(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb88d40;
  if (DAT_14cb88d74 != 0) {
    *(int *)(DAT_14cb88d40 + (longlong)DAT_14cb88d70 * 0x28) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x28) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb88d74) {
    iVar4 = DAT_14cb88d70;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x28) = iVar4;
  DAT_14cb88d74 = DAT_14cb88d74 + 1;
  puVar3 = &DAT_14cb88d50;
  if (DAT_14cb88d60 != (undefined *)0x0) {
    puVar3 = DAT_14cb88d60;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb88d70 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 148930cbe FUN_148930cbe body=477 status=ok
// SIG undefined FUN_148930cbe(void)

void FUN_148930cbe(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb88d80 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb88d80,0,0,4);
  }
  uVar3 = DAT_14cb88d88;
  uVar2 = local_50;
  if (DAT_14cb88d88 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb88d78,0,DAT_14cb88d88,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb88d80;
        if (DAT_14cb88d80 == (undefined *)0x0) {
          puVar6 = &DAT_14cb88d78;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb88d88 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb88d50;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb88d68 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb88d40;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x28);
        uVar9 = (longlong)(int)((uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2) &
                (longlong)(int)DAT_14cb88d88 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x24 + lVar5 * 0x28) = iVar8;
        puVar6 = DAT_14cb88d80;
        if (DAT_14cb88d80 == (undefined *)0x0) {
          puVar6 = &DAT_14cb88d78;
        }
        *(undefined4 *)(lVar1 + 0x20 + lVar5 * 0x28) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb88d88 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb88d80;
        if (DAT_14cb88d80 == (undefined *)0x0) {
          puVar6 = &DAT_14cb88d78;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb88d88 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148930e9c FUN_148930e9c body=143 status=ok
// SIG undefined FUN_148930e9c(void)

void FUN_148930e9c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148930f2c FUN_148930f2c body=103 status=ok
// SIG undefined FUN_148930f2c(void)

void FUN_148930f2c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x68 + lVar1);
  FUN_14892e268(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x68),(longlong)iVar3 * 0x68);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 148930f94 FUN_148930f94 body=62 status=ok
// SIG undefined FUN_148930f94(void)

void FUN_148930f94(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148930fd2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x68,8);
  }
  return;
}



// FUNCTION 148930fd2 FUN_148930fd2 body=104 status=ok
// SIG undefined FUN_148930fd2(void)

ulonglong FUN_148930fd2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x68) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148931008;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x68,8);
      param_2 = param_2 / 0x68;
    }
  }
LAB_148931008:
  return param_2 & 0xffffffff;
}



// FUNCTION 14893103a FUN_14893103a body=29 status=ok
// SIG undefined FUN_14893103a(void)

undefined8 FUN_14893103a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148931072 FUN_148931072 body=29 status=ok
// SIG undefined FUN_148931072(void)

bool FUN_148931072(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148931090 FUN_148931090 body=26 status=ok
// SIG undefined FUN_148931090(void)

bool FUN_148931090(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1489310aa FUN_1489310aa body=24 status=ok
// SIG undefined FUN_1489310aa(void)

bool FUN_1489310aa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1489310c2 FUN_1489310c2 body=93 status=ok
// SIG undefined FUN_1489310c2(void)

void FUN_1489310c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f770;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148931120 FUN_148931120 body=93 status=ok
// SIG undefined FUN_148931120(void)

void FUN_148931120(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f770;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14893117e FUN_14893117e body=126 status=ok
// SIG undefined FUN_14893117e(void)

void FUN_14893117e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41f770;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489311ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1489311fc FUN_1489311fc body=35 status=ok
// SIG undefined FUN_1489311fc(void)

void FUN_1489311fc(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014893121b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148931220 FUN_148931220 body=142 status=ok
// SIG undefined FUN_148931220(void)

bool FUN_148931220(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489312b0 FUN_1489312b0 body=29 status=ok
// SIG undefined FUN_1489312b0(void)

undefined8 FUN_1489312b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1489312e8 FUN_1489312e8 body=29 status=ok
// SIG undefined FUN_1489312e8(void)

bool FUN_1489312e8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148931306 FUN_148931306 body=26 status=ok
// SIG undefined FUN_148931306(void)

bool FUN_148931306(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148931320 FUN_148931320 body=24 status=ok
// SIG undefined FUN_148931320(void)

bool FUN_148931320(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148931338 FUN_148931338 body=93 status=ok
// SIG undefined FUN_148931338(void)

void FUN_148931338(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f7e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148931396 FUN_148931396 body=93 status=ok
// SIG undefined FUN_148931396(void)

void FUN_148931396(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b41f7e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1489313f4 FUN_1489313f4 body=126 status=ok
// SIG undefined FUN_1489313f4(void)

void FUN_1489313f4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ecd00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b41f7e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148931463. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148931472 FUN_148931472 body=40 status=ok
// SIG undefined FUN_148931472(void)

void FUN_148931472(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148931497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14893149a FUN_14893149a body=152 status=ok
// SIG undefined FUN_14893149a(void)

bool FUN_14893149a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148931534 FUN_148931534 body=190 status=ok
// SIG undefined FUN_148931534(void)

void FUN_148931534(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1489315f2(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 1489315f2 FUN_1489315f2 body=132 status=ok
// SIG undefined FUN_1489315f2(void)

void FUN_1489315f2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148931678 FUN_148931678 body=62 status=ok
// SIG undefined FUN_148931678(void)

void FUN_148931678(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1489316b6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1489316b6 FUN_1489316b6 body=93 status=ok
// SIG undefined FUN_1489316b6(void)

ulonglong FUN_1489316b6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 148931714 FUN_148931714 body=22 status=ok
// SIG undefined FUN_148931714(void)

undefined8 FUN_148931714(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb895f8;
  if (DAT_14cb895f8 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb895f8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb895f8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb895f8[0x3a] <= *(int *)((longlong)DAT_14cb895f8 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb895f8 + 0x300))(DAT_14cb895f8);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 14893175e FUN_14893175e body=179 status=ok
// SIG undefined FUN_14893175e(void)

void FUN_14893175e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14497e828();
  if (lVar1 != 0) {
    lVar2 = FUN_144a79464();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (*(longlong *)(lVar1 + 0x1e0) != 0)) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1e0) + 0x68), lVar1 != 0)) {
      local_24 = 0xffff;
      FUN_1413d8fde(param_1,lVar1,&local_24);
      FUN_1488c2530(lVar1,local_28,&local_24,(*(byte *)(param_1 + 0x39a) & 8) >> 3);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148931812 FUN_148931812 body=225 status=ok
// SIG undefined FUN_148931812(void)

void FUN_148931812(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_58 [2];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_2 + 0xd8) = 0x3e008081;
  *(undefined4 *)(param_2 + 0xdc) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xe0) = 0x3f008081;
  *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
  local_44 = 0;
  FUN_140002266(local_58,L"Player Index: %d",(int)*(short *)(param_1 + 0x538));
  FUN_147d8f316(param_2 + 0xa8,local_58,&local_44);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x4e0);
  if (plVar1 != (longlong *)0x0) {
    local_68 = param_5;
    (**(code **)(*plVar1 + 0x5a0))(plVar1,param_2,param_3,param_4);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489318f4 FUN_1489318f4 body=459 status=ok
// SIG undefined FUN_1489318f4(void)

void FUN_1489318f4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147ca927e();
  if (param_2 != 0) {
    lVar9 = FUN_140082f10();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
         ) == lVar9 + 0x30)) {
      FUN_141238a10(param_2 + 0x4e8,param_1 + 0x4e8);
      *(undefined8 *)(param_2 + 0x4c4) = *(undefined8 *)(param_1 + 0x4c4);
      uVar6 = *(undefined4 *)(param_1 + 0x4d0);
      uVar7 = *(undefined4 *)(param_1 + 0x4d4);
      uVar8 = *(undefined4 *)(param_1 + 0x4d8);
      *(undefined4 *)(param_2 + 0x4cc) = *(undefined4 *)(param_1 + 0x4cc);
      *(undefined4 *)(param_2 + 0x4d0) = uVar6;
      *(undefined4 *)(param_2 + 0x4d4) = uVar7;
      *(undefined4 *)(param_2 + 0x4d8) = uVar8;
      *(undefined1 *)(param_2 + 0x4dc) = *(undefined1 *)(param_1 + 0x4dc);
      *(undefined1 *)(param_2 + 0x4dd) = *(undefined1 *)(param_1 + 0x4dd);
      lVar9 = *(longlong *)(param_2 + 0x168);
      if (lVar9 != 0) {
        lVar10 = FUN_1449f3324();
        iVar3 = *(int *)(lVar10 + 0x38);
        if ((iVar3 <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar3 * 8)
            == lVar10 + 0x30)) {
          uVar11 = CONCAT71((int7)(int3)((uint)iVar3 >> 8),*(undefined1 *)(param_1 + 0x39a)) &
                   0xffffffffffffff08;
          FUN_1487c4892(lVar9,CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 3));
        }
      }
      if ((*(byte **)(param_1 + 0x4b0) != (byte *)0x0) && ((**(byte **)(param_1 + 0x4b0) & 3) != 0))
      {
        local_48 = 0;
        FUN_1401412e0(param_1 + 0x4b0,local_38,0,0);
        FUN_1446dcc2e(param_2 + 0x4b0,local_38);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_30 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar1 = (int *)((longlong)local_30 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_30 + 0x10))(local_30);
            }
          }
        }
        *(undefined1 *)(param_2 + 0x4c0) = *(undefined1 *)(param_1 + 0x4c0);
        FUN_148931ac0(param_2,param_1 + 0x4b0);
      }
      uVar4 = *(undefined8 *)(param_1 + 0x520);
      lVar9 = *(longlong *)(param_1 + 0x528);
      if (lVar9 != 0) {
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      }
      plVar5 = *(longlong **)(param_2 + 0x528);
      *(undefined8 *)(param_2 + 0x520) = uVar4;
      *(longlong *)(param_2 + 0x528) = lVar9;
      if (plVar5 != (longlong *)0x0) {
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      FUN_145c058ca(local_38,param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148931ac0 FUN_148931ac0 body=111 status=ok
// SIG undefined FUN_148931ac0(void)

undefined8 FUN_148931ac0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1403c7982();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1403c7982();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_143d4eeac(uVar1,param_2);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 148931b3a FUN_148931b3a body=106 status=ok
// SIG undefined FUN_148931b3a(void)

void FUN_148931b3a(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x408);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_1449d6ade();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1449d6ade();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_140365cd0(uVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148931baa FUN_148931baa body=247 status=ok
// SIG undefined FUN_148931baa(void)

void FUN_148931baa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar1 = FUN_140082f10();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      *(undefined1 *)(param_2 + 0x488) = 1;
      lVar1 = FUN_14497e828(param_1);
      if (lVar1 != 0) {
        lVar2 = FUN_144a79464();
        if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
            (*(longlong *)(lVar1 + 0x1e0) != 0)) &&
           (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1e0) + 0x68), lVar1 != 0)) {
          if (*(longlong *)(param_1 + 0x490) != 0) {
            FUN_145bd9d12(lVar1,*(longlong *)(param_1 + 0x490),0xffffffff);
            *(undefined8 *)(param_1 + 0x490) = 0;
          }
          local_24 = 0xffff;
          FUN_1413d8fde(param_2,lVar1);
        }
      }
    }
  }
  FUN_147ca960a(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148931ca8 FUN_148931ca8 body=35 status=ok
// SIG undefined FUN_148931ca8(void)

void FUN_148931ca8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x7a0))();
                    /* WARNING: Could not recover jumptable at 0x000148931cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x7a8))(param_1);
  return;
}



// FUNCTION 148931d0c FUN_148931d0c body=120 status=ok
// SIG undefined FUN_148931d0c(void)

void FUN_148931d0c(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  uVar1 = FUN_1447210f0();
  iVar2 = FUN_14490d72a(uVar1);
  if ((iVar2 == 3) && (plVar3 = *(longlong **)(param_1 + 0x168), plVar3 != (longlong *)0x0)) {
    uVar1 = FUN_140ba0042();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar1);
    if (plVar3 != (longlong *)0x0) {
      uVar1 = FUN_140ba0042();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar1);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
                    /* WARNING: Could not recover jumptable at 0x000148931d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x48))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148931da8 FUN_148931da8 body=36 status=ok
// SIG undefined FUN_148931da8(void)

bool FUN_148931da8(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x4c4);
  plVar2 = (longlong *)FUN_144a8232a(&DAT_14cb8dcf8);
  return lVar1 == *plVar2;
}



// FUNCTION 148931df6 FUN_148931df6 body=261 status=ok
// SIG undefined FUN_148931df6(void)

ulonglong FUN_148931df6(longlong param_1,byte param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  bool bVar7;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    lVar2 = FUN_1400f6f32(lVar2);
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x68), lVar2 != 0)) {
      FUN_14042af24(lVar2,local_34,param_1);
      iVar1 = FUN_1402d8968(lVar2,local_34);
      bVar7 = iVar1 == 0xb;
      uVar6 = (undefined7)((ulonglong)lVar2 >> 8);
      goto LAB_148931e65;
    }
  }
  bVar7 = false;
  uVar6 = 0;
LAB_148931e65:
  lVar2 = FUN_1401b2ade(param_1);
  bVar4 = 1;
  if (lVar2 != 0) {
    lVar3 = FUN_1449f3324();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && (lVar2 = *(longlong *)(lVar2 + 0xb10), lVar2 != 0)) {
      if (*(char *)(lVar2 + 0x18) == '\0') {
        bVar4 = *(byte *)(lVar2 + 0x60) ^ 1;
      }
      else {
        bVar4 = 0;
      }
    }
  }
  if ((*(char *)(param_1 + 0x518) == '\x01') && ((*(byte *)(param_1 + 0x39a) & 0x28) == 0)) {
    uVar5 = CONCAT71(uVar6,bVar7 & (param_2 | bVar4));
  }
  else {
    uVar5 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148931efc FUN_148931efc body=94 status=ok
// SIG undefined FUN_148931efc(void)

void FUN_148931efc(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1489ad86e(param_2);
  lVar2 = FUN_1489ad8a2(lVar1,param_3);
  if (lVar2 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x7e0))(param_1,lVar1 + 0x1c);
    if (lVar1 != 0) {
      FUN_1407d853c(lVar1,lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148931f5a FUN_148931f5a body=94 status=ok
// SIG undefined FUN_148931f5a(void)

void FUN_148931f5a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1489ad86e(param_2);
  lVar2 = FUN_1489ad8a2(lVar1,param_3);
  if (lVar2 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x7e0))(param_1,lVar1 + 0x1c);
    if (lVar1 != 0) {
      FUN_1411b2196(lVar1,lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148931fc6 FUN_148931fc6 body=275 status=ok
// SIG undefined FUN_148931fc6(void)

void FUN_148931fc6(undefined8 param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined8 local_40;
  short local_34 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((0 < param_2) && (lVar3 = FUN_1447210f0(), lVar3 != 0)) &&
     (lVar4 = FUN_1400f6f32(lVar3), lVar4 != 0)) {
    lVar1 = *(longlong *)(lVar4 + 0x30);
    if ((lVar1 != 0 && *(longlong *)(lVar4 + 0x68) != 0) &&
       (FUN_14042af24(*(longlong *)(lVar4 + 0x68),local_34,param_1), -1 < local_34[0])) {
      FUN_140002266(&local_50,L"c_%d",param_2);
      puVar5 = local_50;
      if (local_48 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_40,puVar5,1);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_146242444(lVar1,local_34,local_40,0);
      iVar2 = FUN_14490d72a(lVar3);
      if (iVar2 == 3) {
        FUN_148931d0c(param_1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1489320da FUN_1489320da body=57 status=ok
// SIG undefined FUN_1489320da(void)

void FUN_1489320da(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_14485c47a(param_1 + 0x4e0);
  uVar1 = FUN_14479d2ce(param_1 + 0x4e0);
  FUN_1486e0266(param_1,uVar1);
  FUN_148931b3a(param_1);
  return;
}



// FUNCTION 148932114 FUN_148932114 body=47 status=ok
// SIG undefined FUN_148932114(void)

void FUN_148932114(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  uVar1 = FUN_14479d2ce(param_1 + 0x4e0);
  FUN_1486e02c4(param_1,uVar1);
  return;
}



// FUNCTION 14893216c FUN_14893216c body=98 status=ok
// SIG undefined FUN_14893216c(void)

undefined4 *
FUN_14893216c(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_1447262c2(param_4);
  plVar2 = (longlong *)FUN_1401cd47c(uVar1);
  uVar4 = 0;
  if (plVar2 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  lVar3 = FUN_1401cd272(param_1 + 8,uVar1);
  if (lVar3 != 0) {
    uVar4 = *(undefined4 *)(lVar3 + 0x9c);
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = uVar4;
  *(undefined1 *)(param_2 + 8) = 2;
  return param_2;
}



// FUNCTION 1489321ce FUN_1489321ce body=43 status=ok
// SIG undefined FUN_1489321ce(void)

undefined8 FUN_1489321ce(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_1447262c2();
  plVar2 = (longlong *)FUN_1401cd47c(uVar1);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489321ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1489321fa FUN_1489321fa body=386 status=ok
// SIG undefined FUN_1489321fa(void)

int * FUN_1489321fa(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar5 = FUN_1447262c2(param_4);
  plVar6 = (longlong *)FUN_1401cd47c(uVar5);
  if (plVar6 == (longlong *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  lVar9 = *(longlong *)(param_1 + 0x10);
  if (lVar9 == 0) {
    uVar5 = FUN_145764ed6();
    lVar9 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x10) = lVar9;
  }
  lVar8 = *(longlong *)(param_1 + 0x18);
  if (lVar8 == 0) {
    iVar4 = 0;
    if ((lVar9 == 0) || (*(longlong *)(param_1 + 8) == 0)) goto LAB_14893231c;
    plVar6 = *(longlong **)(lVar9 + 0xb8);
    if (plVar6 == (longlong *)0x0) {
LAB_148932377:
      lVar8 = 0;
    }
    else {
      cVar1 = (**(code **)(*plVar6 + 0x108))(plVar6);
      if (cVar1 == '\0') goto LAB_148932377;
      uVar5 = (**(code **)(*plVar6 + 0x110))(plVar6);
      lVar8 = FUN_144aff482(uVar5,(longlong *)(param_1 + 8));
    }
    *(longlong *)(param_1 + 0x18) = lVar8;
  }
  iVar3 = 0;
  iVar4 = 0;
  if ((lVar7 != 0) && (iVar4 = iVar3, lVar8 != 0)) {
    iVar3 = *(int *)(param_1 + 0x20);
    if (iVar3 == 2) {
      uVar2 = FUN_140fcdefe(lVar7 + 0xf0,lVar8);
      if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar7 + 0x120))) {
        iVar4 = *(int *)(*(longlong *)(lVar7 + 0x118) + (ulonglong)uVar2 * 4);
      }
    }
    else if (iVar3 == 1) {
      iVar4 = FUN_140a4890a(lVar7,lVar8);
    }
    else if (iVar3 == 0) {
      uVar2 = FUN_140fcdefe(lVar7 + 0xf0,lVar8);
      iVar4 = 0;
      if ((-1 < (int)uVar2) && (iVar4 = 0, (int)uVar2 < *(int *)(lVar7 + 0x120))) {
        iVar4 = *(int *)(*(longlong *)(lVar7 + 0x118) + (ulonglong)uVar2 * 4);
      }
      iVar3 = FUN_140a4890a(lVar7,lVar8);
      iVar4 = iVar4 - iVar3;
    }
  }
LAB_14893231c:
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = iVar4;
  *(undefined1 *)(param_2 + 8) = 2;
  return param_2;
}



// FUNCTION 14893237c FUN_14893237c body=22 status=ok
// SIG undefined FUN_14893237c(void)

undefined8 FUN_14893237c(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb897b0;
  if (DAT_14cb897b0 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb897b0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb897b0 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb897b0[0x3a] <= *(int *)((longlong)DAT_14cb897b0 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb897b0 + 0x300))(DAT_14cb897b0);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 148932392 FUN_148932392 body=58 status=ok
// SIG undefined FUN_148932392(void)

void FUN_148932392(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_141498ff6(param_2,param_1);
  if (lVar2 != 0) {
    cVar1 = FUN_140a30ba2(lVar2);
    if (cVar1 != '\0') {
      FUN_14893469c(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1489323cc FUN_1489323cc body=58 status=ok
// SIG undefined FUN_1489323cc(void)

void FUN_1489323cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_141498ff6(param_2,param_1);
  if (lVar2 != 0) {
    cVar1 = FUN_140a30c40(lVar2);
    if (cVar1 != '\0') {
      FUN_148934746(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14893242e FUN_14893242e body=295 status=ok
// SIG undefined FUN_14893242e(void)

undefined8 FUN_14893242e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 local_74;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = FUN_148932556(param_1 + 8);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar2 == 0) {
      lVar2 = FUN_148935a8a(param_1 + 8,param_2);
      if ((lVar2 == 0) || (*(int *)(lVar2 + 0x88) == 0)) {
        lVar2 = 0;
      }
      else {
        lVar2 = *(longlong *)(**(longlong **)(lVar2 + 0x80) + 0x48);
      }
    }
    if (*(char *)(param_1 + 0x30) == '\x01') {
      local_3c = 0xffffffff;
      local_68 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_60 = lVar1;
      local_38 = lVar2;
      FUN_1489325d6(param_2);
    }
    local_80 = *(undefined4 *)(param_1 + 0x34);
    local_88 = *(undefined1 *)(param_1 + 0x31);
    local_3c = 0xffffffff;
    local_38 = *(undefined8 *)(param_1 + 0x28);
    local_74 = 0xffffffff;
    local_68 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_70 = lVar2;
    local_60 = lVar1;
    uVar3 = FUN_145941cc4(param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148932556 FUN_148932556 body=128 status=ok
// SIG undefined FUN_148932556(void)

void FUN_148932556(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140e2014e();
    lVar4 = FUN_14477b664(uVar3);
    param_1[1] = lVar4;
  }
  if (param_1[2] != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*param_1 != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar4 = FUN_144aff482(uVar3,param_1);
    }
    param_1[2] = lVar4;
    return;
  }
  return;
}



// FUNCTION 1489325d6 FUN_1489325d6 body=92 status=ok
// SIG undefined FUN_1489325d6(void)

void FUN_1489325d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_141498ff6(param_2,param_1);
  if (lVar3 != 0) {
    cVar1 = FUN_140a30ba2(lVar3);
    if (cVar1 != '\0') {
      uVar2 = FUN_145941fd0(param_3,param_1,param_2);
      FUN_1489345a8(lVar3,uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148932632 FUN_148932632 body=317 status=ok
// SIG undefined FUN_148932632(void)

undefined8 FUN_148932632(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)(param_1 + 8);
  lVar3 = FUN_148932556(puVar1);
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x18) == '\x01')) {
    FUN_148932770(puVar1,&local_38);
    puVar4 = local_38;
    if (local_30 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    pwVar5 = L"Deactivate";
    if (*(char *)(param_1 + 0x31) != '\0') {
      pwVar5 = L"Activate";
    }
    FUN_140002266(param_2,L"%s \'%s\'",pwVar5,puVar4);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (*(int *)(param_1 + 0x34) < 1) goto LAB_1489326b1;
    FUN_140002266(&local_38,L" at level %i");
    iVar2 = local_30 + -1;
    if (local_30 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(param_2,local_38,iVar2);
  }
  else {
    local_40 = *puVar1;
    FUN_1400021e4(&local_40,&local_38);
    puVar4 = local_38;
    if (local_30 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(param_2,
                  L"!! Invalid progress graph \'%s\' not using \'Group Node Activation\' mode.",
                  puVar4);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1489326b1:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148932770 FUN_148932770 body=566 status=ok
// SIG undefined FUN_148932770(void)

undefined8 FUN_148932770(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400021e4(param_1 + 3,&local_40);
  lVar2 = FUN_148932556(param_1);
  if (((lVar2 != 0) &&
      (plVar3 = (longlong *)FUN_148935072(lVar2,param_1 + 3), plVar3 != (longlong *)0x0)) &&
     (*plVar3 != 0)) {
    FUN_1400021e4(plVar3,&local_60);
    puVar5 = local_60;
    if (local_58 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_50,L" (%s)",puVar5);
    iVar1 = local_48 + -1;
    if (local_48 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_40,local_50,iVar1);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(param_1 + 4,&local_50);
  lVar2 = FUN_148932556(param_1);
  if (((lVar2 != 0) &&
      (plVar3 = (longlong *)FUN_140e28e92(lVar2,param_1 + 4), plVar3 != (longlong *)0x0)) &&
     (*plVar3 != 0)) {
    FUN_1400021e4(plVar3,&local_70);
    puVar5 = local_70;
    if (local_68 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_60,L" (%s)",puVar5);
    iVar1 = local_58 + -1;
    if (local_58 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_50,local_60,iVar1);
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar5 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar5 = local_50;
  }
  puVar6 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar6 = local_40;
  }
  local_70 = (undefined2 *)*param_1;
  FUN_1400021e4(&local_70,&local_60);
  puVar4 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar4 = local_60;
  }
  local_78 = puVar5;
  FUN_140002266(param_2,L"%s.%s.%s",puVar4,puVar6);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489329a8 FUN_1489329a8 body=125 status=ok
// SIG undefined FUN_1489329a8(void)

void FUN_1489329a8(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  local_2c = 0xffffffff;
  local_28 = *(undefined8 *)(param_1 + 0x20);
  local_50 = FUN_1401cd3fa();
  local_58 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_14120f542(param_2,&local_58,&local_2c,uVar1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148932a26 FUN_148932a26 body=354 status=ok
// SIG undefined FUN_148932a26(void)

undefined8 FUN_148932a26(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_60;
  undefined2 *local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)(param_1 + 8);
  lVar2 = FUN_1401cd3fa(puVar1);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x18) == '\0')) {
    FUN_148932b8a(puVar1,&local_40);
    puVar6 = &DAT_149dfb77a;
    puVar4 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar4 = local_40;
    }
    if (1 < *(int *)(param_1 + 0x28)) {
      puVar6 = &DAT_149e25cf8;
    }
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_140a48a68(lVar2);
    }
    FUN_1410a642a(&local_50,uVar3);
    local_68 = local_50;
    if (local_48 == 0) {
      local_68 = &DAT_149dfb77a;
    }
    pwVar5 = L"Remove";
    if (-1 < *(int *)(param_1 + 0x28)) {
      pwVar5 = L"Spend";
    }
    local_60 = puVar6;
    local_58 = puVar4;
    FUN_140002266(param_2,L"%s %i %s point%s in \'%s\'",pwVar5);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_50 = (undefined2 *)*puVar1;
    FUN_1400021e4(&local_50,&local_40);
    puVar4 = local_40;
    if (local_38 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(param_2,L"!! Invalid progress graph \'%s\' not using \'Progress Points\' mode.",
                  puVar4);
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148932b8a FUN_148932b8a body=340 status=ok
// SIG undefined FUN_148932b8a(void)

undefined8 FUN_148932b8a(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_1 + 3,&local_38);
  lVar2 = FUN_1401cd3fa(param_1);
  if (((lVar2 != 0) &&
      (plVar3 = (longlong *)FUN_140e28e92(lVar2,param_1 + 3), plVar3 != (longlong *)0x0)) &&
     (*plVar3 != 0)) {
    FUN_1400021e4(plVar3,&local_58);
    puVar4 = local_58;
    if (local_50 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_48,L" (%s)",puVar4);
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_38,local_48,iVar1);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar4 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar4 = local_38;
  }
  local_58 = (undefined2 *)*param_1;
  FUN_1400021e4(&local_58,&local_48);
  puVar5 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar5 = local_48;
  }
  FUN_140002266(param_2,L"%s.%s",puVar5,puVar4);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148932ce0 FUN_148932ce0 body=277 status=ok
// SIG undefined FUN_148932ce0(void)

undefined8 * FUN_148932ce0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar5) != 0) {
        if (1 < *(int *)(param_2 + 1)) {
          FUN_1400020e8(param_2,L" && ",4);
        }
        FUN_1400020e8(param_2,&DAT_14b40b5ec,2);
        plVar3 = *(longlong **)(lVar2 + lVar5);
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_58,param_3);
        iVar4 = local_50 + -1;
        if (local_50 == 0) {
          iVar4 = 0;
        }
        FUN_1400020e8(param_2,local_58,iVar4);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020e8(param_2,&DAT_14b40b5f2,2);
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148932df6 FUN_148932df6 body=268 status=ok
// SIG undefined FUN_148932df6(void)

undefined8 *
FUN_148932df6(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar5 = 0;
    do {
      if (1 < *(int *)(param_2 + 1)) {
        FUN_1400020e8(param_2,L" && ",4);
      }
      FUN_1400020e8(param_2,&DAT_14b40b5ec,2);
      plVar3 = *(longlong **)(lVar2 + lVar5);
      (**(code **)(*plVar3 + 8))(plVar3,&local_58,param_3,param_4);
      iVar4 = local_50 + -1;
      if (local_50 == 0) {
        iVar4 = 0;
      }
      FUN_1400020e8(param_2,local_58,iVar4);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020e8(param_2,&DAT_14b40b5f2,2);
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148932f04 FUN_148932f04 body=277 status=ok
// SIG undefined FUN_148932f04(void)

undefined8 * FUN_148932f04(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar5) != 0) {
        if (1 < *(int *)(param_2 + 1)) {
          FUN_1400020e8(param_2,L" || ",4);
        }
        FUN_1400020e8(param_2,&DAT_14b40b5ec,2);
        plVar3 = *(longlong **)(lVar2 + lVar5);
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_58,param_3);
        iVar4 = local_50 + -1;
        if (local_50 == 0) {
          iVar4 = 0;
        }
        FUN_1400020e8(param_2,local_58,iVar4);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020e8(param_2,&DAT_14b40b5f2,2);
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14893301a FUN_14893301a body=279 status=ok
// SIG undefined FUN_14893301a(void)

longlong * FUN_14893301a(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b420890;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b4208a8;
  plVar4[9] = 0;
  plVar4[10] = 0;
  local_60 = plVar1;
  local_58 = plVar4;
  FUN_148938916(&local_60,plVar1);
  cVar3 = FUN_148933134(plVar1,param_1,param_3,param_4);
  if (cVar3 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar4;
    if (plVar4 == (longlong *)0x0) goto LAB_148933107;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plVar4 = local_58;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_88);
      }
    }
  }
LAB_148933107:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148933134 FUN_148933134 body=186 status=ok
// SIG undefined FUN_148933134(void)

ulonglong FUN_148933134(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  
  if ((longlong)*(int *)(param_2 + 0x10) != 0) {
    plVar3 = *(longlong **)(param_2 + 8);
    lVar4 = (longlong)*(int *)(param_2 + 0x10) * 0x18;
    do {
      if ((*plVar3 != 0) && (cVar1 = FUN_1489331ee(param_1,plVar3,param_3,param_4), cVar1 == '\0'))
      {
        uVar2 = 0;
        goto LAB_1489331c3;
      }
      plVar3 = plVar3 + 3;
      lVar4 = lVar4 + -0x18;
      unaff_RDI = param_4;
    } while (lVar4 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x40) == 0) {
    cVar1 = '\0';
  }
  else {
    lVar4 = 0;
    do {
      cVar1 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar4) + 0x30);
      if (cVar1 != '\0') break;
      bVar5 = (longlong)*(int *)(param_1 + 0x40) * 0x10 + -0x10 != lVar4;
      lVar4 = lVar4 + 0x10;
    } while (bVar5);
  }
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (((*(char *)(param_1 + 0x30) != cVar1) &&
      (*(char *)(param_1 + 0x30) = cVar1, *(int *)(param_1 + 0x20) != 0)) &&
     (plVar3 = *(longlong **)(param_1 + 0x18), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))(plVar3,param_1);
  }
LAB_1489331c3:
  return uVar2 & 0xffffffff;
}



// FUNCTION 1489331ee FUN_1489331ee body=389 status=ok
// SIG undefined FUN_1489331ee(void)

bool FUN_1489331ee(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140e58d02(*param_2,&local_48);
  lVar6 = local_48;
  if (local_48 != 0) {
    plVar1 = (longlong *)(local_48 + 0x18);
    if (*(int *)(local_48 + 0x20) != 3) {
      FUN_1446efa72(plVar1,0,3,0x10);
      *(undefined4 *)(lVar6 + 0x20) = 3;
    }
    plVar7 = local_40;
    puVar4 = (undefined8 *)*plVar1;
    *puVar4 = &PTR_LAB_14b420820;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar8;
    *puVar4 = &PTR_FUN_14b4208c0;
    puVar4[3] = param_1;
    puVar4[4] = &LAB_148933374;
    *(undefined4 *)(puVar4 + 5) = 0;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x44) < iVar3 + 1U) {
      FUN_1459c3dd2((longlong *)(param_1 + 0x38),iVar3);
    }
    lVar5 = *(longlong *)(param_1 + 0x38);
    *(longlong *)(lVar5 + (longlong)iVar3 * 0x10) = local_48;
    *(longlong **)(lVar5 + 8 + (longlong)iVar3 * 0x10) = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar6 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489333cc FUN_1489333cc body=268 status=ok
// SIG undefined FUN_1489333cc(void)

undefined8 *
FUN_1489333cc(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar5 = 0;
    do {
      if (1 < *(int *)(param_2 + 1)) {
        FUN_1400020e8(param_2,L" || ",4);
      }
      FUN_1400020e8(param_2,&DAT_14b40b5ec,2);
      plVar3 = *(longlong **)(lVar2 + lVar5);
      (**(code **)(*plVar3 + 8))(plVar3,&local_58,param_3,param_4);
      iVar4 = local_50 + -1;
      if (local_50 == 0) {
        iVar4 = 0;
      }
      FUN_1400020e8(param_2,local_58,iVar4);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020e8(param_2,&DAT_14b40b5f2,2);
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489334da FUN_1489334da body=134 status=ok
// SIG undefined FUN_1489334da(void)

undefined8 FUN_1489334da(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_140b11b44(param_1 + 8,&local_28,0,0);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Fact: %s",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148933562 FUN_148933562 body=150 status=ok
// SIG undefined FUN_148933562(void)

undefined8 FUN_148933562(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined2 *)&DAT_149e74618;
  if (*(char *)(param_1 + 0x10) != '\0') {
    puVar1 = &DAT_149e25dfc;
  }
  FUN_1400021e4(param_1 + 8,&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Group.%s has %s nodes activated",puVar2,puVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489335fa FUN_1489335fa body=144 status=ok
// SIG undefined FUN_1489335fa(void)

void FUN_1489335fa(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x38) = param_3;
  local_48 = FUN_14893368c;
  local_40 = 0;
  FUN_148939402(local_38,param_1);
  FUN_140ca47fa(param_2 + 0x18,&local_48,local_38);
  FUN_1449db362(local_38);
  FUN_14893368c(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14893368c FUN_14893368c body=126 status=ok
// SIG undefined FUN_14893368c(void)

void FUN_14893368c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    cVar2 = FUN_140a30ba2(*(undefined8 *)(param_2 + 0x58));
    if (cVar2 == '\0') {
      iVar3 = *(int *)(param_2 + 0x68);
    }
    else {
      iVar3 = FUN_1413d64c6(param_2);
    }
    iVar4 = FUN_1413d6430(param_2);
    bVar5 = iVar3 <= iVar4;
  }
  else {
    iVar3 = FUN_1413d6430(param_2);
    bVar5 = iVar3 == 0;
  }
  if ((((bool)*(char *)(param_1 + 0x30) != bVar5) &&
      (*(bool *)(param_1 + 0x30) = bVar5, *(int *)(param_1 + 0x20) != 0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148933707. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 14893370a FUN_14893370a body=569 status=ok
// SIG undefined FUN_14893370a(void)

undefined8 FUN_14893370a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_a8 [36];
  int local_84;
  undefined8 local_80;
  longlong local_78 [2];
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar2 = FUN_1447f8eee(param_3);
  if (cVar2 == '\0') {
    uVar3 = FUN_1410d6046(param_1,param_1 + 0x18,param_3);
    FUN_140002266(&local_58,&DAT_149e25cfc,uVar3);
  }
  else {
    FUN_14624635c(param_1 + 0x18,&local_58);
  }
  iVar4 = (int)uStack_50;
  puVar1 = local_58;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    local_84 = iVar4;
    lVar8 = *(longlong *)(param_1 + 8);
    lVar5 = (longlong)*(int *)(param_1 + 0x10) << 3;
    local_80 = param_2;
    do {
      if (1 < (int)uStack_50) {
        FUN_1400020e8(&local_58,&DAT_149e06124,1);
      }
      FUN_1400021e4(lVar8,&local_68);
      iVar4 = (int)local_60 + -1;
      if ((int)local_60 == 0) {
        iVar4 = 0;
      }
      FUN_1400020e8(&local_58,local_68,iVar4);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      param_2 = local_80;
      iVar4 = local_84;
      lVar8 = lVar8 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    if (1 < *(int *)(param_1 + 0x10)) {
      FUN_140b1283a(local_78,L"Groups.{",&local_58);
      FUN_144a882a8(&local_68,local_78,&DAT_149e061a6);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uStack_50._0_4_ = (int)local_60;
      local_58 = local_68;
      local_68 = (undefined2 *)0x0;
      local_60 = 0;
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_1489338d8;
    }
  }
  FUN_140b1283a(&local_68,L"Group.",&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_58 = local_68;
  uStack_50._0_4_ = (int)local_60;
LAB_1489338d8:
  puVar7 = puVar1;
  if (iVar4 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  puVar6 = local_58;
  if ((int)uStack_50 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"%s.PointsSpent >= %s",puVar6,puVar7);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (puVar1 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148933944 FUN_148933944 body=150 status=ok
// SIG undefined FUN_148933944(void)

undefined8 FUN_148933944(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pwVar1 = L"unlocked";
  if (*(char *)(param_1 + 0x10) != '\0') {
    pwVar1 = L"locked";
  }
  FUN_1400021e4(param_1 + 8,&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Group.%s is %s",puVar2,pwVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1489339dc FUN_1489339dc body=171 status=ok
// SIG undefined FUN_1489339dc(void)

void FUN_1489339dc(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x38) = param_3;
  local_40 = &LAB_148933a88;
  local_38 = 0;
  FUN_148939d24(local_30,param_1);
  FUN_140ca47fa(param_2,&local_40,local_30);
  FUN_1449db362(local_30);
  bVar2 = *(char *)(param_2 + 0x80) != *(char *)(param_1 + 0x38);
  if ((((bool)*(char *)(param_1 + 0x30) != bVar2) &&
      (*(bool *)(param_1 + 0x30) = bVar2, *(int *)(param_1 + 0x20) != 0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148933abc FUN_148933abc body=607 status=ok
// SIG undefined FUN_148933abc(void)

undefined8 FUN_148933abc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_a8 [36];
  int local_84;
  undefined8 local_80;
  longlong local_78 [2];
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1400b22c2(&local_58,&DAT_149e4fb40);
  }
  else {
    cVar2 = FUN_1447f8eee(param_3);
    if (cVar2 == '\0') {
      uVar3 = FUN_1410d6046(param_1,param_1 + 0x20,param_3);
      FUN_140002266(&local_58,&DAT_149e25cfc,uVar3);
    }
    else {
      FUN_14624635c(param_1 + 0x20,&local_58);
    }
  }
  iVar4 = (int)uStack_50;
  puVar1 = local_58;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    local_84 = iVar4;
    lVar8 = *(longlong *)(param_1 + 8);
    lVar5 = (longlong)*(int *)(param_1 + 0x10) << 3;
    local_80 = param_2;
    do {
      if (1 < (int)uStack_50) {
        FUN_1400020e8(&local_58,&DAT_149e06124,1);
      }
      FUN_1400021e4(lVar8,&local_68);
      iVar4 = (int)local_60 + -1;
      if ((int)local_60 == 0) {
        iVar4 = 0;
      }
      FUN_1400020e8(&local_58,local_68,iVar4);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      param_2 = local_80;
      iVar4 = local_84;
      lVar8 = lVar8 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    if (1 < *(int *)(param_1 + 0x10)) {
      FUN_140b1283a(local_78,L"Nodes.(",&local_58);
      FUN_144a882a8(&local_68,local_78,&DAT_149e06144);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uStack_50._0_4_ = (int)local_60;
      local_58 = local_68;
      local_68 = (undefined2 *)0x0;
      local_60 = 0;
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_148933c61;
    }
  }
  FUN_140b1283a(&local_68,L"Node.",&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_58 = local_68;
  uStack_50._0_4_ = (int)local_60;
LAB_148933c61:
  puVar7 = puVar1;
  if (iVar4 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  puVar6 = local_58;
  if ((int)uStack_50 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"%s.PointsSpent >= %s",puVar6,puVar7);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (puVar1 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148933d1c FUN_148933d1c body=150 status=ok
// SIG undefined FUN_148933d1c(void)

undefined8 FUN_148933d1c(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pwVar1 = L"unlocked";
  if (*(char *)(param_1 + 0x10) != '\0') {
    pwVar1 = L"locked";
  }
  FUN_1400021e4(param_1 + 8,&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Node.%s is %s",puVar2,pwVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148933db4 FUN_148933db4 body=171 status=ok
// SIG undefined FUN_148933db4(void)

void FUN_148933db4(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x38) = param_3;
  local_40 = &LAB_148933e60;
  local_38 = 0;
  FUN_14893a9bc(local_30,param_1);
  FUN_140e588ce(param_2,&local_40,local_30);
  FUN_1449db362(local_30);
  bVar2 = *(char *)(param_2 + 0x90) != *(char *)(param_1 + 0x38);
  if ((((bool)*(char *)(param_1 + 0x30) != bVar2) &&
      (*(bool *)(param_1 + 0x30) = bVar2, *(int *)(param_1 + 0x20) != 0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148933e94 FUN_148933e94 body=263 status=ok
// SIG undefined FUN_148933e94(void)

undefined8 FUN_148933e94(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_1447f8eee(param_3);
  puVar3 = (undefined8 *)(param_1 + 8);
  if (cVar1 == '\0') {
    uVar2 = FUN_1418a34c6(puVar3,param_3);
    local_58 = *puVar3;
    FUN_1400021e4(&local_58,&local_50);
    puVar5 = local_50;
    if (local_48 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_40,L"%s.%i",puVar5,uVar2);
    iVar4 = (int)uStack_38;
    puVar5 = local_40;
    local_40 = (undefined2 *)0x0;
    uStack_38 = 0;
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_148933f9c(puVar3,&local_40);
    puVar5 = local_40;
    iVar4 = (int)uStack_38;
  }
  puVar6 = &DAT_149dfb77a;
  if (iVar4 != 0) {
    puVar6 = puVar5;
  }
  FUN_140002266(param_2,L"PointsAcquired >= %s",puVar6);
  if (puVar5 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148933f9c FUN_148933f9c body=190 status=ok
// SIG undefined FUN_148933f9c(void)

undefined8 FUN_148933f9c(undefined8 *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14624635c(param_1 + 3,&local_38);
  puVar2 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  local_50 = *param_1;
  FUN_1400021e4(&local_50,&local_48);
  puVar1 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar1 = local_48;
  }
  FUN_140002266(param_2,L"%s.%s",puVar1,puVar2);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14893405c FUN_14893405c body=333 status=ok
// SIG undefined FUN_14893405c(void)

longlong * FUN_14893405c(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78 [40];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78[0] = 0;
  local_50 = 0;
  local_90 = param_4;
  FUN_1456bb102(local_78,*(undefined8 *)(param_3 + 0xa8));
  uVar4 = FUN_1418a34c6(param_1 + 8,local_78);
  plVar5 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b420f80;
  plVar2 = plVar5 + 2;
  plVar5[7] = 0;
  *(undefined1 *)(plVar5 + 8) = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  *(undefined8 *)((longlong)plVar5 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar5 + 0x2c) = 0;
  plVar5[2] = (longlong)&PTR_FUN_14b41fcc0;
  *(undefined4 *)(plVar5 + 9) = uVar4;
  local_88 = plVar2;
  local_80 = plVar5;
  FUN_14893af02(&local_88,plVar2);
  FUN_144a5ac3a(local_78);
  FUN_143e0a262(plVar2,param_3,local_90,param_1 + 8);
  plVar3 = local_80;
  *param_2 = (longlong)plVar2;
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_80 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489341aa FUN_1489341aa body=237 status=ok
// SIG undefined FUN_1489341aa(void)

undefined8
FUN_1489341aa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e35290;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b420fa0;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_140feff30(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489342c6 FUN_1489342c6 body=134 status=ok
// SIG undefined FUN_1489342c6(void)

void FUN_1489342c6(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 == 0) {
    uVar3 = FUN_14034f1a8();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x40) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x38));
    }
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    return;
  }
  return;
}



// FUNCTION 14893434c FUN_14893434c body=309 status=ok
// SIG undefined FUN_14893434c(void)

void FUN_14893434c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  lVar2 = DAT_14cb89ba8;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb89ba8 == 0) {
    if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar6 = *(longlong *)(param_1 + 0x110);
  if (lVar6 == 0) {
    uVar5 = FUN_140e2014e();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x110) = lVar6;
  }
  local_30 = *(ulonglong *)(param_1 + 0x118);
  if (((local_30 != 0) || (local_30 = 0, lVar6 == 0)) || (*(longlong *)(param_1 + 0x108) == 0))
  goto LAB_1489343aa;
  plVar1 = *(longlong **)(lVar6 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_148934492:
    local_30 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar3 == '\0') goto LAB_148934492;
    uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
    local_30 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x108));
  }
  *(ulonglong *)(param_1 + 0x118) = local_30;
LAB_1489343aa:
  uVar4 = ((uint)(local_30 >> 0x14) & 0xffff ^ (uint)(local_30 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar5 = FUN_14163ed00(lVar2 + 0x3a8,uVar4 >> 0x10 ^ uVar4);
  FUN_140457ffc(uVar5,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 148934496 FUN_148934496 body=155 status=ok
// SIG undefined FUN_148934496(void)

undefined1 FUN_148934496(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x110);
  if (lVar4 == 0) {
    uVar3 = FUN_140e2014e();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x110) = lVar4;
  }
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (((lVar5 != 0) || (lVar5 = 0, lVar4 == 0)) || (*(longlong *)(param_1 + 0x108) == 0))
  goto LAB_1489344cf;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_14893452d:
    lVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_14893452d;
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x108));
  }
  *(longlong *)(param_1 + 0x118) = lVar5;
LAB_1489344cf:
  return *(undefined1 *)(lVar5 + 0x108);
}



// FUNCTION 148934532 FUN_148934532 body=117 status=ok
// SIG undefined FUN_148934532(void)

void FUN_148934532(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x140);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x138);
    lVar6 = 0;
    do {
      *(undefined8 *)(lVar4 + 0x60 + lVar6) = 0;
      plVar5 = *(longlong **)(lVar4 + 0x68 + lVar6);
      if (plVar5 != (longlong *)0x0) {
        *(undefined8 *)(lVar4 + 0x68 + lVar6) = 0;
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      lVar6 = lVar6 + 0xa8;
    } while ((longlong)iVar3 * 0xa8 - lVar6 != 0);
  }
  return;
}



// FUNCTION 1489345a8 FUN_1489345a8 body=89 status=ok
// SIG undefined FUN_1489345a8(void)

void FUN_1489345a8(longlong param_1,uint param_2)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x181) & 0x40) != 0) {
    cVar1 = FUN_140e58abc();
    if (cVar1 == '\0') {
      FUN_1486e08c2(param_1,param_2);
    }
    if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x150))) {
      FUN_148934602((ulonglong)param_2 * 0x88 + *(longlong *)(param_1 + 0x148));
      return;
    }
  }
  return;
}



// FUNCTION 148934602 FUN_148934602 body=148 status=ok
// SIG undefined FUN_148934602(void)

void FUN_148934602(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x60);
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar7);
      if (((*(longlong *)(param_1 + 0x50) == 0) ||
          (*(char *)(*(longlong *)(param_1 + 0x50) + 0x80) != '\x01')) ||
         (iVar3 = *(int *)(lVar5 + 0x9c), iVar6 = FUN_148935970(param_1), iVar3 == iVar6)) {
        cVar1 = *(char *)(lVar5 + 0x91);
        *(undefined1 *)(lVar5 + 0x91) = 0;
        *(undefined4 *)(lVar5 + 0x9c) = 0;
        if (cVar1 == '\x01') {
          FUN_14128cdea(lVar5);
          FUN_140d10d50(lVar5 + 0x18,lVar5);
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar2 * 8 != lVar7);
  }
  return;
}



// FUNCTION 14893469c FUN_14893469c body=142 status=ok
// SIG undefined FUN_14893469c(void)

void FUN_14893469c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_1 + 0x181) & 0x40) != 0) {
    cVar1 = FUN_140e58abc();
    if (cVar1 == '\0') {
      FUN_1486e0878(param_1);
    }
    if ((longlong)*(int *)(param_1 + 0x140) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x138);
      lVar3 = (longlong)*(int *)(param_1 + 0x140) * 0xa8;
      do {
        if (*(int *)(lVar2 + 0x88) != 0) {
          cVar1 = *(char *)(lVar2 + 0x91);
          *(undefined1 *)(lVar2 + 0x91) = 0;
          *(undefined4 *)(lVar2 + 0x9c) = 0;
          if (cVar1 == '\x01') {
            FUN_14128cdea(lVar2);
            FUN_140d10d50(lVar2 + 0x18,lVar2);
          }
        }
        lVar2 = lVar2 + 0xa8;
        lVar3 = lVar3 + -0xa8;
      } while (lVar3 != 0);
    }
  }
  return;
}



// FUNCTION 148934730 FUN_148934730 body=16 status=ok
// SIG undefined FUN_148934730(void)

undefined8 FUN_148934730(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x10));
  }
  return 0;
}



// FUNCTION 148934746 FUN_148934746 body=143 status=ok
// SIG undefined FUN_148934746(void)

int FUN_148934746(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  if ((*(byte *)(param_1 + 0x181) & 4) != 0) {
    cVar2 = FUN_140e58abc();
    if (cVar2 == '\0') {
      FUN_1486e09be(param_1);
    }
    if ((longlong)*(int *)(param_1 + 0x140) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x138);
      lVar4 = (longlong)*(int *)(param_1 + 0x140) * 0xa8;
      iVar5 = 0;
      do {
        lVar1 = *(longlong *)(lVar6 + 0x50);
        iVar3 = 0;
        if ((lVar1 != 0) && ((*(char *)(lVar1 + 8) != '\x01' || (*(int *)(lVar1 + 0xc) != 0)))) {
          iVar3 = FUN_14128cbda(lVar6,lVar6 + 0x94,0,1);
        }
        iVar5 = iVar5 + iVar3;
        lVar6 = lVar6 + 0xa8;
        lVar4 = lVar4 + -0xa8;
      } while (lVar4 != 0);
    }
  }
  return iVar5;
}



// FUNCTION 1489347d6 FUN_1489347d6 body=90 status=ok
// SIG undefined FUN_1489347d6(void)

void FUN_1489347d6(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1458401f2();
  if (lVar1 != 0) {
    local_28 = 0;
    uStack_20 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_18 = param_1;
    FUN_1489323cc(lVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148934832 FUN_148934832 body=26 status=ok
// SIG undefined FUN_148934832(void)

void FUN_148934832(void)

{
  FUN_141144f90();
  return;
}



// FUNCTION 14893484c FUN_14893484c body=1694 status=ok
// SIG undefined FUN_14893484c(void)

void FUN_14893484c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  uStack_70 = 0;
  lVar9 = *(longlong *)(param_1 + 0x110);
  if (lVar9 == 0) {
    uVar8 = FUN_140e2014e();
    lVar9 = FUN_14477b664(uVar8);
    *(longlong *)(param_1 + 0x110) = lVar9;
  }
  plVar1 = (longlong *)(param_1 + 0x108);
  lVar10 = *(longlong *)(param_1 + 0x118);
  if (((lVar10 == 0) && (lVar10 = 0, lVar9 != 0)) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
      lVar10 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar10 = FUN_144aff482(uVar8,plVar1);
    }
    *(longlong *)(param_1 + 0x118) = lVar10;
  }
  iVar12 = *(int *)(lVar10 + 0x70) - *(int *)(lVar10 + 0x9c);
  if (-1 < iVar12) {
    if (iVar12 != 0) {
      FUN_140e593bc(&local_78);
    }
    lVar9 = *(longlong *)(param_1 + 0x110);
    if (lVar9 == 0) {
      uVar8 = FUN_140e2014e();
      lVar9 = FUN_14477b664(uVar8);
      *(longlong *)(param_1 + 0x110) = lVar9;
    }
    lVar10 = *(longlong *)(param_1 + 0x118);
    if (((lVar10 == 0) && (lVar10 = 0, lVar9 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar9 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
        lVar10 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar10 = FUN_144aff482(uVar8,plVar1);
      }
      *(longlong *)(param_1 + 0x118) = lVar10;
    }
    plVar2 = (longlong *)(lVar10 + 0x68);
    lVar9 = lVar10 + 0x78;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar12 = 0;
    local_c0 = plVar1;
    local_60 = lVar9;
    if (*(int *)(lVar10 + 0x90) != 0) {
      FUN_1449c0562(&local_68);
      iVar12 = *(int *)(lVar10 + 0x90);
    }
    local_88 = local_58;
    uVar8 = local_88;
    local_80 = local_50;
    local_7c = local_4c;
    local_98 = local_68;
    local_90 = local_60;
    local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_a0 = plVar2;
    if ((local_88._4_4_ != iVar12) || (local_60 != lVar9)) {
      iVar6 = local_88._4_4_;
      local_88 = uVar8;
      do {
        uVar4 = uStack_70;
        if ((longlong)*(int *)(param_1 + 0x140) != 0) {
          puVar11 = (ulonglong *)((longlong)iVar6 * 0x90 + *local_a0);
          lVar10 = *(longlong *)(param_1 + 0x138);
          uVar3 = *puVar11;
          lVar13 = (longlong)*(int *)(param_1 + 0x140) * 0xa8;
          do {
            if (*(ulonglong **)(lVar10 + 0x50) == (ulonglong *)0x0) {
              uVar15 = 0;
              uVar14 = 0;
            }
            else {
              uVar15 = **(ulonglong **)(lVar10 + 0x50);
              uVar14 = uVar15 & 0xffffffff;
              uVar15 = uVar15 & 0xffffffff00000000;
            }
            if ((uVar3 == *(ulonglong *)(lVar10 + 0x48)) ||
               (((uVar14 | uVar15) != 0 && (uVar3 == (uVar14 | uVar15))))) {
              if (lVar10 != 0) {
                *(ulonglong **)(lVar10 + 0x50) = puVar11 + 1;
                lVar13 = (longlong)(int)uStack_70;
                uVar7 = (int)uStack_70 + 1;
                uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
                if (uStack_70._4_4_ < uVar7) {
                  FUN_14893b29a(&local_78,uVar4 & 0xffffffff);
                }
                FUN_14893b882(lVar13 * 0xa8 + local_78,lVar10);
              }
              break;
            }
            lVar10 = lVar10 + 0xa8;
            lVar13 = lVar13 + -0xa8;
          } while (lVar13 != 0);
        }
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar6 = local_88._4_4_;
        uVar8 = local_88;
      } while (local_a0 != plVar2 || (local_90 != lVar9 || local_88._4_4_ != iVar12));
    }
    local_88 = uVar8;
    FUN_148934eec(param_1 + 0x138,&local_78);
    local_b8 = 0;
    uStack_b0 = 0;
    lVar9 = *(longlong *)(param_1 + 0x110);
    if (lVar9 == 0) {
      uVar8 = FUN_140e2014e();
      lVar9 = FUN_14477b664(uVar8);
      *(longlong *)(param_1 + 0x110) = lVar9;
    }
    plVar1 = local_c0;
    lVar10 = *(longlong *)(param_1 + 0x118);
    if (((lVar10 == 0) && (lVar10 = 0, lVar9 != 0)) && (*local_c0 != 0)) {
      plVar2 = *(longlong **)(lVar9 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
        lVar10 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar10 = FUN_144aff482(uVar8,plVar1);
      }
      *(longlong *)(param_1 + 0x118) = lVar10;
    }
    iVar12 = *(int *)(lVar10 + 0xc0) - *(int *)(lVar10 + 0xec);
    if (-1 < iVar12) {
      if ((int)uStack_b0._4_4_ < iVar12) {
        FUN_140e5950c(&local_b8);
      }
      lVar9 = *(longlong *)(param_1 + 0x110);
      if (lVar9 == 0) {
        uVar8 = FUN_140e2014e();
        lVar9 = FUN_14477b664(uVar8);
        *(longlong *)(param_1 + 0x110) = lVar9;
      }
      lVar10 = *(longlong *)(param_1 + 0x118);
      if (((lVar10 == 0) && (lVar10 = 0, lVar9 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
          lVar10 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar10 = FUN_144aff482(uVar8,plVar1);
        }
        *(longlong *)(param_1 + 0x118) = lVar10;
      }
      plVar1 = (longlong *)(lVar10 + 0xb8);
      lVar9 = lVar10 + 200;
      local_68 = 0x100000000;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_50 = 0;
      iVar12 = 0;
      local_60 = lVar9;
      if (*(int *)(lVar10 + 0xe0) != 0) {
        FUN_1449c0562(&local_68);
        iVar12 = *(int *)(lVar10 + 0xe0);
      }
      local_88._0_4_ = (uint)local_58;
      local_88._4_4_ = local_58._4_4_;
      local_80 = local_50;
      local_7c = local_4c;
      local_98 = local_68;
      local_90 = local_60;
      local_a0 = plVar1;
      if ((local_58._4_4_ != iVar12) || (local_60 != lVar9)) {
        do {
          uVar4 = uStack_b0;
          if ((longlong)*(int *)(param_1 + 0x150) != 0) {
            puVar11 = (ulonglong *)((longlong)local_88._4_4_ * 0x120 + *local_a0);
            lVar10 = *(longlong *)(param_1 + 0x148);
            uVar3 = *puVar11;
            lVar13 = (longlong)*(int *)(param_1 + 0x150) * 0x88;
            do {
              if (*(ulonglong **)(lVar10 + 0x50) == (ulonglong *)0x0) {
                uVar15 = 0;
                uVar14 = 0;
              }
              else {
                uVar15 = **(ulonglong **)(lVar10 + 0x50);
                uVar14 = uVar15 & 0xffffffff;
                uVar15 = uVar15 & 0xffffffff00000000;
              }
              if ((uVar3 == *(ulonglong *)(lVar10 + 0x48)) ||
                 (((uVar14 | uVar15) != 0 && (uVar3 == (uVar14 | uVar15))))) {
                if (lVar10 != 0) {
                  *(ulonglong **)(lVar10 + 0x50) = puVar11 + 1;
                  lVar13 = (longlong)(int)uStack_b0;
                  uVar7 = (int)uStack_b0 + 1;
                  uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar7);
                  if (uStack_b0._4_4_ < uVar7) {
                    FUN_14893b32e(&local_b8,uVar4 & 0xffffffff);
                  }
                  FUN_14893ba84(lVar13 * 0x88 + local_b8,lVar10);
                }
                break;
              }
              lVar10 = lVar10 + 0x88;
              lVar13 = lVar13 + -0x88;
            } while (lVar13 != 0);
          }
          local_88._0_4_ = (uint)local_88 & ~local_98._4_4_;
          FUN_1449c0562(&local_98);
        } while (local_a0 != plVar1 || (local_90 != lVar9 || local_88._4_4_ != iVar12));
      }
      FUN_148934f4a(param_1 + 0x148,&local_b8);
      FUN_140e96423(local_b8,uStack_b0 & 0xffffffff);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      FUN_140e9644c(local_78,uStack_70 & 0xffffffff);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar12);
}



// FUNCTION 148934eec FUN_148934eec body=93 status=ok
// SIG undefined FUN_148934eec(void)

undefined8 * FUN_148934eec(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e9644c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14893b9d6(param_1,iVar1);
      FUN_14893ba48(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148934f4a FUN_148934f4a body=93 status=ok
// SIG undefined FUN_148934f4a(void)

undefined8 * FUN_148934f4a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e96423(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457ddccc(param_1,iVar1);
      FUN_140fcdfd2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148934fa8 FUN_148934fa8 body=128 status=ok
// SIG undefined FUN_148934fa8(void)

void FUN_148934fa8(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140e2014e();
    lVar4 = FUN_14477b664(uVar3);
    param_1[1] = lVar4;
  }
  if (param_1[2] != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*param_1 != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar4 = FUN_144aff482(uVar3,param_1);
    }
    param_1[2] = lVar4;
    return;
  }
  return;
}



// FUNCTION 148935028 FUN_148935028 body=73 status=ok
// SIG undefined FUN_148935028(void)

longlong FUN_148935028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_141498f32();
  if ((iVar1 != -1) && (lVar2 = FUN_141498ff6(param_3,param_2), lVar2 != 0)) {
    return (longlong)iVar1 * 0xa8 + *(longlong *)(lVar2 + 0x138);
  }
  return 0;
}



// FUNCTION 148935072 FUN_148935072 body=339 status=ok
// SIG undefined FUN_148935072(void)

longlong FUN_148935072(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar6 = 0;
  uVar3 = local_60;
  if (*param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xb8);
    lVar2 = param_1 + 200;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_48 = lVar2;
    if (*(int *)(param_1 + 0xe0) != 0) {
      FUN_1449c0562(&local_50);
      iVar6 = *(int *)(param_1 + 0xe0);
    }
    local_60 = local_40;
    uVar3 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_70 = local_50;
    local_68 = local_48;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_78 = plVar1;
    if ((local_60._4_4_ != iVar6) || (local_48 != lVar2)) {
      iVar4 = local_60._4_4_;
      local_60 = uVar3;
      do {
        lVar5 = *local_78 + (longlong)iVar4 * 0x120;
        if ((*(longlong *)(*local_78 + (longlong)iVar4 * 0x120) == *param_2) ||
           (*(longlong *)(lVar5 + 8) == *param_2)) {
          lVar5 = lVar5 + 8;
          goto LAB_148935132;
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar3 = local_60;
      } while (local_78 != plVar1 || (local_68 != lVar2 || local_60._4_4_ != iVar6));
    }
  }
  local_60 = uVar3;
  lVar5 = 0;
LAB_148935132:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1489351c6 FUN_1489351c6 body=8 status=ok
// SIG undefined FUN_1489351c6(void)

undefined8 FUN_1489351c6(void)

{
  return DAT_14cb89bc8;
}



// FUNCTION 1489351ce FUN_1489351ce body=32 status=ok
// SIG undefined FUN_1489351ce(void)

undefined8 FUN_1489351ce(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Unknown");
  return param_2;
}



// FUNCTION 1489351ee FUN_1489351ee body=74 status=ok
// SIG undefined FUN_1489351ee(void)

void FUN_1489351ee(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  FUN_145c7b2b0(param_1 + 0x38,&local_18);
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148935256 FUN_148935256 body=140 status=ok
// SIG undefined FUN_148935256(void)

undefined8
FUN_148935256(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_144a6c4d8();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (plVar3 = (longlong *)FUN_1405f1c0c(lVar1), plVar3 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar3 + 0x328))(plVar3,lVar1,param_2,param_3,param_4,param_5,param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1489352e2 FUN_1489352e2 body=138 status=ok
// SIG undefined FUN_1489352e2(void)

void FUN_1489352e2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  local_20 = &local_28;
  FUN_14893be60(param_1 + 0xb0);
  FUN_14893536e(param_1,param_2);
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  *(char *)(param_1 + 0xc0) = *(char *)(param_1 + 0xc0) + '\x01';
  FUN_1410cebe2(param_1 + 0x60,param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14893536e FUN_14893536e body=183 status=ok
// SIG undefined FUN_14893536e(void)

uint FUN_14893536e(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  FUN_140457ffc(param_2 + 0xf0,param_1);
  if (*(int *)(param_2 + 0x1a8) != 0) {
    puVar2 = *(undefined8 **)(param_2 + 0x1a0);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72((longlong *)(param_2 + 0x1a0),0,0,0x10);
      *(undefined4 *)(param_2 + 0x1a8) = 0;
    }
  }
  FUN_148934532(param_2);
  FUN_14893434c(param_2);
  FUN_144757f48(param_2,0x40000000);
  uVar1 = *(uint *)(param_2 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  do {
    uVar1 = *(uint *)(lVar4 + 8);
    if ((uVar1 >> 0x15 & 1) != 0) {
      return uVar1;
    }
    LOCK();
    uVar3 = *(uint *)(lVar4 + 8);
    bVar5 = uVar1 == uVar3;
    if (bVar5) {
      *(uint *)(lVar4 + 8) = uVar1 | 0x200000;
      uVar3 = uVar1;
    }
    UNLOCK();
  } while (!bVar5);
  return uVar3;
}



// FUNCTION 148935426 FUN_148935426 body=133 status=ok
// SIG undefined FUN_148935426(void)

void FUN_148935426(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [40];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_30 = 0;
  FUN_1456bb102(local_58,*(undefined8 *)(param_1 + 0xa8));
  uVar1 = FUN_1418a34c6(param_2,local_58);
  uVar2 = FUN_143e0a38c(param_2);
  FUN_145aff9c8(param_1,uVar2,uVar1);
  FUN_144a5ac3a(local_58);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489354ac FUN_1489354ac body=117 status=ok
// SIG undefined FUN_1489354ac(void)

void FUN_1489354ac(longlong param_1,longlong param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03';
    }
    if ((param_4 == '\x01') || (bVar3)) {
      uVar2 = FUN_140fcdefe(param_1 + 0xf0);
      cVar1 = FUN_1414bc522(param_1 + 0xf0,uVar2,param_3,0);
      if (cVar1 != '\0') {
        FUN_1410cebe2(param_1 + 0x60,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148935522 FUN_148935522 body=184 status=ok
// SIG undefined FUN_148935522(void)

void FUN_148935522(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && (iVar1 = *(int *)(param_1 + 0xb8), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((lVar3 != 0) && (lVar4 = FUN_140a489cc(lVar3), lVar4 == param_2)) {
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_58 = lVar3;
        FUN_1489323cc(param_1,&local_78);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14893560a FUN_14893560a body=53 status=ok
// SIG undefined FUN_14893560a(void)

undefined1 FUN_14893560a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1401cd47c(param_2);
  if ((lVar1 != 0) && (lVar1 = FUN_143e0bf98(lVar1,param_1), lVar1 != 0)) {
    return *(undefined1 *)(lVar1 + 0x90);
  }
  return 0;
}



// FUNCTION 148935640 FUN_148935640 body=91 status=ok
// SIG undefined FUN_148935640(void)

undefined1 FUN_148935640(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1401cd47c(param_2);
  if ((lVar2 != 0) && (lVar2 = FUN_143e0bf98(lVar2,param_1), lVar2 != 0)) {
    cVar1 = FUN_144729dda(lVar2 + 0x58);
    if ((cVar1 != '\0') && (lVar3 = FUN_14479d2ce(lVar2 + 0x58), *(char *)(lVar3 + 0x180) == '\x01')
       ) {
      return *(undefined1 *)(lVar2 + 0x91);
    }
  }
  return 0;
}



// FUNCTION 14893569c FUN_14893569c body=55 status=ok
// SIG undefined FUN_14893569c(void)

undefined4 FUN_14893569c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_1401cd47c(param_2);
  uVar2 = 0;
  if (lVar1 != 0) {
    lVar1 = FUN_143e0bf98(lVar1,param_1);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + 0x9c);
    }
  }
  return uVar2;
}



// FUNCTION 1489356d4 FUN_1489356d4 body=40 status=ok
// SIG undefined FUN_1489356d4(void)

undefined8 FUN_1489356d4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1401cd47c(param_2);
  if (lVar1 != 0) {
    FUN_143e0c08b(lVar1,param_1);
  }
  return 0;
}



// FUNCTION 1489356fc FUN_1489356fc body=40 status=ok
// SIG undefined FUN_1489356fc(void)

undefined8 FUN_1489356fc(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1401cd47c(param_2);
  if (lVar1 != 0) {
    FUN_143e0c08b(lVar1,param_1);
  }
  return 0;
}



// FUNCTION 148935724 FUN_148935724 body=40 status=ok
// SIG undefined FUN_148935724(void)

undefined8 FUN_148935724(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1401cd47c(param_2);
  if (lVar1 != 0) {
    FUN_143e0c08b(lVar1,param_1);
  }
  return 0;
}



// FUNCTION 14893574c FUN_14893574c body=98 status=ok
// SIG undefined FUN_14893574c(void)

undefined8 * FUN_14893574c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1400b0774(&DAT_14cb89ad8);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(puVar1 + 1);
  *puVar1 = &PTR_FUN_14b1f2440;
  *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x21) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x29) = 0;
  return puVar1;
}



// FUNCTION 1489357ae FUN_1489357ae body=44 status=ok
// SIG undefined FUN_1489357ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1489357ae(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb89ae4 = _DAT_14cb89ae4 + -1;
  *param_1 = DAT_14cb89ad8;
  DAT_14cb89ad8 = param_1;
  return;
}



// FUNCTION 1489357da FUN_1489357da body=90 status=ok
// SIG undefined FUN_1489357da(void)

void FUN_1489357da(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14b1f2440;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  return;
}



// FUNCTION 14893585c FUN_14893585c body=190 status=ok
// SIG undefined FUN_14893585c(void)

longlong * FUN_14893585c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x18);
    lVar7 = (longlong)*(int *)(param_1 + 0x20) * 0x30;
    do {
      lVar4 = plVar6[1];
      if (lVar4 == 0) {
        uVar3 = FUN_145764ed6();
        lVar4 = FUN_14477b664(uVar3);
        plVar6[1] = lVar4;
      }
      lVar5 = plVar6[2];
      if (lVar5 == 0) {
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          if (*plVar6 != 0) {
            plVar1 = *(longlong **)(lVar4 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar1 + 0x108))(), cVar2 == '\0')) {
              lVar5 = 0;
            }
            else {
              uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar5 = FUN_144aff482(uVar3,plVar6);
            }
            plVar6[2] = lVar5;
          }
        }
      }
      if (lVar5 == param_2) {
        return plVar6;
      }
      plVar6 = plVar6 + 6;
      lVar7 = lVar7 + -0x30;
    } while (lVar7 != 0);
  }
  return (longlong *)0x0;
}



// FUNCTION 14893591a FUN_14893591a body=86 status=ok
// SIG undefined FUN_14893591a(void)

void FUN_14893591a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      lVar4 = *(longlong *)(lVar3 + 0x50);
      if ((lVar4 != 0) && ((*(char *)(lVar4 + 8) != '\x01' || (*(int *)(lVar4 + 0xc) != 0)))) {
        FUN_14128cbda(lVar3,lVar3 + 0x94,0,1);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 148935970 FUN_148935970 body=124 status=ok
// SIG undefined FUN_148935970(void)

undefined4 FUN_148935970(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [40];
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x50);
  uVar2 = 0;
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    local_50[0] = 0;
    local_28 = 0;
    FUN_1456bb102(local_50,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x20));
    uVar2 = FUN_1489359ee(lVar1,local_50);
    FUN_144a5ac3a(local_50);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489359ee FUN_1489359ee body=154 status=ok
// SIG undefined FUN_1489359ee(void)

undefined4 FUN_1489359ee(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1448729ea(param_1 + 0x88,local_40,param_2);
  uVar2 = FUN_14005fbd2(local_40,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_40;
    if (0x18 < local_28) {
      pppuVar3 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148935a8a FUN_148935a8a body=242 status=ok
// SIG undefined FUN_148935a8a(void)

longlong FUN_148935a8a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (((param_2 != 0) && (lVar3 = FUN_148932556(), lVar3 != 0)) &&
     (iVar1 = *(int *)(param_2 + 0xb8), (longlong)iVar1 != 0)) {
    lVar5 = *(longlong *)(param_2 + 0xb0);
    lVar8 = 0;
    while ((lVar2 = *(longlong *)(lVar5 + lVar8), lVar2 == 0 ||
           (lVar4 = FUN_1401cd362(lVar2), lVar4 != lVar3))) {
      lVar8 = lVar8 + 8;
      if ((longlong)iVar1 * 8 == lVar8) {
        return 0;
      }
    }
    if ((longlong)*(int *)(lVar2 + 0x140) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x138);
      lVar5 = (longlong)*(int *)(lVar2 + 0x140) * 0xa8;
      do {
        if (*(ulonglong **)(lVar3 + 0x50) == (ulonglong *)0x0) {
          uVar7 = 0;
          uVar6 = 0;
        }
        else {
          uVar7 = **(ulonglong **)(lVar3 + 0x50);
          uVar6 = uVar7 & 0xffffffff;
          uVar7 = uVar7 & 0xffffffff00000000;
        }
        if (*(ulonglong *)(param_1 + 0x20) == *(ulonglong *)(lVar3 + 0x48)) {
          return lVar3;
        }
        if ((uVar6 | uVar7) != 0 && *(ulonglong *)(param_1 + 0x20) == (uVar6 | uVar7)) {
          return lVar3;
        }
        lVar3 = lVar3 + 0xa8;
        lVar5 = lVar5 + -0xa8;
      } while (lVar5 != 0);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 148935b7c FUN_148935b7c body=287 status=ok
// SIG undefined FUN_148935b7c(void)

uint FUN_148935b7c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = param_1[4];
  lVar5 = param_1[1];
  uVar2 = param_1[3];
  if (lVar5 == 0) {
    lVar5 = FUN_140e2014e();
  }
  uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar8 = (uint)uVar1 & 0xffff;
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) + ((uint)uVar2 << 0x10 | uVar7) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4);
  uVar2 = *param_1;
  uVar6 = FUN_14477b664(lVar5);
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar7 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar10 = (uint)uVar2 & 0xffff;
  uVar4 = FUN_144a78877(((uint)uVar2 << 0x10 | uVar10) + (int)((ulonglong)uVar2 >> 0x20) +
                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar10 >> 4),uVar7 >> 0x10 ^ uVar7);
  return uVar4 ^ (uVar4 >> 2) + 0x9e3779b9 +
                 uVar4 * 0x40 +
                 ((uVar9 >> 2) + 0x9e3779b9 +
                  ((uint)uVar1 << 0x10 | uVar8) + (int)((ulonglong)uVar1 >> 0x20) +
                  (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4) + uVar9 * 0x40 ^ uVar9);
}



// FUNCTION 148935c9b FUN_148935c9b body=222 status=ok
// SIG undefined FUN_148935c9b(void)

uint FUN_148935c9b(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar6 = param_1[1];
  uVar1 = param_1[3];
  if (lVar6 == 0) {
    lVar6 = FUN_140e2014e();
  }
  uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar9 = (uint)uVar1 & 0xffff;
  uVar2 = *param_1;
  uVar7 = FUN_14477b664(lVar6);
  uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar8 = (uint)uVar2 & 0xffff;
  uVar4 = FUN_144a78877(((uint)uVar2 << 0x10 | uVar8) + (int)((ulonglong)uVar2 >> 0x20) +
                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4),uVar5 >> 0x10 ^ uVar5);
  return uVar4 ^ (uVar4 >> 2) +
                 ((uint)uVar1 << 0x10 | uVar9) + (int)((ulonglong)uVar1 >> 0x20) +
                 (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4) + uVar4 * 0x40 + 0x9e3779b9;
}



// FUNCTION 148935d79 FUN_148935d79 body=222 status=ok
// SIG undefined FUN_148935d79(void)

uint FUN_148935d79(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar6 = param_1[1];
  uVar1 = param_1[3];
  if (lVar6 == 0) {
    lVar6 = FUN_140e2014e();
  }
  uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar9 = (uint)uVar1 & 0xffff;
  uVar2 = *param_1;
  uVar7 = FUN_14477b664(lVar6);
  uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar8 = (uint)uVar2 & 0xffff;
  uVar4 = FUN_144a78877(((uint)uVar2 << 0x10 | uVar8) + (int)((ulonglong)uVar2 >> 0x20) +
                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4),uVar5 >> 0x10 ^ uVar5);
  return uVar4 ^ (uVar4 >> 2) +
                 ((uint)uVar1 << 0x10 | uVar9) + (int)((ulonglong)uVar1 >> 0x20) +
                 (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4) + uVar4 * 0x40 + 0x9e3779b9;
}



// FUNCTION 148935e58 FUN_148935e58 body=463 status=ok
// SIG undefined FUN_148935e58(void)

ulonglong * FUN_148935e58(longlong param_1,ulonglong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_3 + 0x20);
    }
    local_68 = local_68 & 0xffffffffffffff00;
    local_40 = 0;
    FUN_1456bb102(&local_68,uVar3);
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_78,&local_68);
    if (&local_78 == param_2) {
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_78;
      local_78 = 0;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_70._4_4_;
      uStack_70 = 0;
    }
    FUN_144a5ac3a(&local_68);
    if (param_4 != (longlong *)0x0) {
      puVar4 = &DAT_149e1e2d0;
      if (*(char *)(param_1 + 0x30) != '\0') {
        puVar4 = &DAT_149e1e2d8;
      }
      (**(code **)(*param_4 + 8))(param_4,&local_68,puVar4,param_2);
      if (&local_68 == param_2) {
        if (local_68 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = local_68;
        local_68 = 0;
        *(int *)(param_2 + 1) = local_60;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_5c;
      }
      local_78 = 0;
      uStack_70 = 0;
      (**(code **)(*param_4 + 8))(param_4,&local_68,&DAT_149e1e2cc);
      iVar2 = local_60 + -1;
      if (local_60 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(param_2,local_68,iVar2);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148936028 FUN_148936028 body=32 status=ok
// SIG undefined FUN_148936028(void)

undefined8 FUN_148936028(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Unknown");
  return param_2;
}



// FUNCTION 148936048 FUN_148936048 body=178 status=ok
// SIG undefined FUN_148936048(void)

void FUN_148936048(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140e2014e();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
  }
  lVar5 = param_2[2];
  if (lVar5 == 0) {
    if ((lVar4 != 0) && (*param_2 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        param_2[2] = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar3,param_2);
        param_2[2] = lVar5;
        if (lVar5 != 0) goto LAB_1489360df;
      }
    }
    lVar5 = (**(code **)(*param_1 + 0x20))(param_1);
    if (lVar5 == 0) {
      return;
    }
  }
LAB_1489360df:
  FUN_1489360fa(lVar5,param_3);
  return;
}



// FUNCTION 1489360fa FUN_1489360fa body=351 status=ok
// SIG undefined FUN_1489360fa(void)

void FUN_1489360fa(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar5 = *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x9c);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_1402191ca(param_2);
  }
  plVar1 = (longlong *)(param_1 + 0x68);
  lVar2 = param_1 + 0x78;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x90);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      uVar4 = *(undefined8 *)
               (*local_88 + (longlong)iStack_6c * 0x90 +
               (ulonglong)(*(longlong *)(*local_88 + 8 + (longlong)iStack_6c * 0x90) != 0) * 8);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1446f84a2(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar4;
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14893625c FUN_14893625c body=178 status=ok
// SIG undefined FUN_14893625c(void)

void FUN_14893625c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140e2014e();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
  }
  lVar5 = param_2[2];
  if (lVar5 == 0) {
    if ((lVar4 != 0) && (*param_2 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        param_2[2] = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar3,param_2);
        param_2[2] = lVar5;
        if (lVar5 != 0) goto LAB_1489362f3;
      }
    }
    lVar5 = (**(code **)(*param_1 + 0x20))(param_1);
    if (lVar5 == 0) {
      return;
    }
  }
LAB_1489362f3:
  FUN_14893630e(lVar5,param_3);
  return;
}



// FUNCTION 14893630e FUN_14893630e body=360 status=ok
// SIG undefined FUN_14893630e(void)

void FUN_14893630e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar5 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xec);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_1402191ca(param_2);
  }
  plVar1 = (longlong *)(param_1 + 0xb8);
  lVar2 = param_1 + 200;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0xe0) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0xe0);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      uVar4 = *(undefined8 *)
               (*local_88 + (longlong)iStack_6c * 0x120 +
               (ulonglong)(*(longlong *)(*local_88 + 8 + (longlong)iStack_6c * 0x120) != 0) * 8);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1446f84a2(param_2,iVar3);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar4;
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148936478 FUN_148936478 body=686 status=ok
// SIG undefined FUN_148936478(void)

ulonglong * FUN_148936478(ulonglong *param_1,ulonglong *param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  undefined8 ****ppppuVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  float fVar6;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  int local_b0;
  undefined2 *local_a8;
  int local_a0;
  ulonglong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_70;
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = *param_1;
  FUN_1400021e4(&local_98,&local_a8);
  FUN_14624635c(param_1 + 4,&local_b8);
  local_98 = local_98 & 0xffffffffffffff00;
  local_70 = 0;
  FUN_14575a19a(&local_98,0);
  FUN_1448729ea(param_1 + 4,local_68,&local_98);
  fVar6 = (float)FUN_144a7ecd0(local_68);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar3 = local_68;
    if (0x18 < local_50) {
      ppppuVar3 = (undefined8 ****)local_68[0];
    }
    (*pcVar1)(ppppuVar3);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68[0]);
  }
  FUN_144a5ac3a(&local_98);
  *param_2 = 0;
  param_2[1] = 0;
  switch((char)param_1[3]) {
  case '\0':
    if (0.0 <= fVar6) {
      puVar5 = &DAT_149dfb77a;
      if (local_b0 != 0) {
        puVar5 = local_b8;
      }
      puVar4 = &DAT_149dfb77a;
      if (local_a0 != 0) {
        puVar4 = local_a8;
      }
      pwVar2 = L"%s * (1 + %s)";
    }
    else {
      puVar5 = &DAT_149dfb77a;
      if (local_b0 != 0) {
        puVar5 = local_b8;
      }
      puVar4 = &DAT_149dfb77a;
      if (local_a0 != 0) {
        puVar4 = local_a8;
      }
      pwVar2 = L"%s * (1 / (1 - %s))";
    }
    break;
  case '\x01':
    puVar4 = &DAT_149dfb77a;
    puVar5 = &DAT_149dfb77a;
    if (local_a0 != 0) {
      puVar5 = local_a8;
    }
    if (local_b0 != 0) {
      puVar4 = local_b8;
    }
    goto LAB_148936656;
  case '\x02':
    puVar5 = &DAT_149dfb77a;
    if (local_b0 != 0) {
      puVar5 = local_b8;
    }
    puVar4 = &DAT_149dfb77a;
    if (local_a0 != 0) {
      puVar4 = local_a8;
    }
LAB_148936656:
    pwVar2 = L"%s + %s";
    break;
  case '\x03':
    puVar5 = &DAT_149dfb77a;
    if (local_b0 != 0) {
      puVar5 = local_b8;
    }
    puVar4 = &DAT_149dfb77a;
    if (local_a0 != 0) {
      puVar4 = local_a8;
    }
    pwVar2 = L"%s * %s";
    break;
  case '\x04':
    puVar5 = &DAT_149dfb77a;
    if (local_b0 != 0) {
      puVar5 = local_b8;
    }
    puVar4 = &DAT_149dfb77a;
    if (local_a0 != 0) {
      puVar4 = local_a8;
    }
    pwVar2 = L"%s = %s";
    break;
  default:
    goto switchD_14893657e_default;
  }
  FUN_140002266(&local_98,pwVar2,puVar4,puVar5);
  if (&local_98 == param_2) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_98;
    local_98 = 0;
    *(undefined4 *)(param_2 + 1) = local_90;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_8c;
  }
switchD_14893657e_default:
  if (local_b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148936728 FUN_148936728 body=350 status=ok
// SIG undefined FUN_148936728(void)

undefined8 FUN_148936728(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  int local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  if ((longlong)*(int *)(param_1 + 0x10) == 0) {
    puVar5 = &DAT_149dfb77a;
    puVar4 = puVar5;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar2 = (longlong)*(int *)(param_1 + 0x10) * 0x70;
    do {
      if (1 < (int)uStack_50) {
        FUN_1400020e8(&local_58,&DAT_149e19f34,2);
      }
      FUN_148936478(lVar1,&local_78);
      puVar4 = &DAT_149dfb77a;
      if (local_70 != 0) {
        puVar4 = local_78;
      }
      FUN_140002266(&local_68,L"[%s]",puVar4);
      iVar3 = local_60 + -1;
      if (local_60 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(&local_58,local_68,iVar3);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + 0x70;
      lVar2 = lVar2 + -0x70;
    } while (lVar2 != 0);
    puVar5 = &DAT_149dfb77a;
    puVar4 = &DAT_149dfb77a;
    if ((int)uStack_50 != 0) {
      puVar4 = local_58;
    }
    if (1 < *(int *)(param_1 + 0x10)) {
      puVar5 = &DAT_149e25cf8;
    }
  }
  FUN_140002266(param_2,L"Attribute%s: %s",puVar5,puVar4);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1489368b0 FUN_1489368b0 body=139 status=ok
// SIG undefined FUN_1489368b0(void)

void FUN_1489368b0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_14893c65a(param_2);
  }
  local_38 = &local_48;
  local_30 = &local_40;
  local_40 = FUN_143e0cf4c;
  local_20 = &local_30;
  local_28 = FUN_14893c924;
  local_48 = param_2;
  FUN_14893c68a(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14893698c FUN_14893698c body=123 status=ok
// SIG undefined FUN_14893698c(void)

undefined8 FUN_14893698c(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148933f9c(param_1 + 0x20,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Progress Points [+= %s]",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148936a08 FUN_148936a08 body=62 status=ok
// SIG undefined FUN_148936a08(void)

undefined8 FUN_148936a08(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1401cd47c(*param_2);
  if ((plVar1 != (longlong *)0x0) && (lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1), lVar2 != 0)) {
    FUN_148935426(lVar2,param_1 + 0x20);
    return 1;
  }
  return 0;
}



// FUNCTION 148936a46 FUN_148936a46 body=172 status=ok
// SIG undefined FUN_148936a46(void)

undefined8 FUN_148936a46(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined1 local_48 [40];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 == (longlong *)0x0) {
    FUN_140056680(&local_58,&DAT_149e01fe8);
  }
  else {
    local_48[0] = 0;
    local_20 = 0;
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_58,local_48);
    FUN_144a5ac3a(local_48);
  }
  puVar2 = local_58;
  if (local_50 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Progression: %s",puVar2);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148936b10 FUN_148936b10 body=833 status=ok
// SIG undefined FUN_148936b10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_148936b10(longlong param_1,double *param_2,double *param_3,double *param_4,
                      float param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar2 = param_4[2];
  if (((double)_DAT_14c763a28 <= dVar2) || (dVar2 <= (double)_DAT_14c763a2c)) {
    dVar1 = param_3[2] * dVar2 + *param_3 * *param_4 + param_3[1] * param_4[1];
    local_e8 = param_3[2] - dVar2 * dVar1;
    uStack_f0 = param_3[1] - param_4[1] * dVar1;
    local_f8 = *param_3 - dVar1 * *param_4;
    dVar2 = local_e8 * local_e8 + local_f8 * local_f8 + uStack_f0 * uStack_f0;
    if ((dVar2 != 1.0) || (NAN(dVar2))) {
      if (9.99999993922529e-09 <= dVar2) {
        dVar2 = 1.0 / SQRT(dVar2);
        local_e8 = local_e8 * dVar2;
        uStack_f0 = uStack_f0 * dVar2;
        local_f8 = local_f8 * dVar2;
      }
      else {
        local_e8 = DAT_14c8464f0;
        local_f8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_f0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
    }
    FUN_14099e850(&local_d8,&local_f8,param_4);
    if (*(char *)(param_1 + 1) == '\0') {
      param_5 = 1.0;
    }
    dVar1 = (double)(*(float *)(param_1 + 8) * param_5);
    dVar2 = (double)(param_5 * *(float *)(param_1 + 4));
    *param_2 = local_78 * 0.0 + dVar1 * local_98 + local_b8 * 0.0 + dVar2 * local_d8;
    param_2[1] = dStack_70 * 0.0 + dVar1 * dStack_90 + dStack_b0 * 0.0 + dVar2 * dStack_d0;
    param_2[2] = dVar2 * local_c8 + local_a8 * 0.0 + dVar1 * local_88 + local_68 * 0.0;
  }
  else {
    dVar2 = *param_3;
    dVar1 = param_3[1];
    dVar3 = dVar2 * dVar2 + dVar1 * dVar1;
    if ((dVar3 != 1.0) || (NAN(dVar3))) {
      if (9.99999993922529e-09 <= dVar3) {
        dVar1 = dVar1 * (1.0 / SQRT(dVar3));
        dVar2 = dVar2 * (1.0 / SQRT(dVar3));
        dVar3 = 0.0;
      }
      else {
        dVar2 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        dVar1 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        dVar3 = DAT_14c8464f0;
      }
    }
    else {
      dVar3 = (double)(-(ulonglong)(param_3[2] == 0.0) & (ulonglong)param_3[2]);
    }
    dVar5 = (double)*(float *)(param_1 + 4);
    *param_2 = dVar2 * dVar5;
    param_2[1] = dVar1 * dVar5;
    dVar3 = (double)*(float *)(param_1 + 8) + dVar3 * dVar5;
    param_2[2] = dVar3;
    if (*(char *)(param_1 + 1) == '\x01') {
      dVar4 = (double)param_5;
      *param_2 = dVar2 * dVar5 * dVar4;
      param_2[1] = dVar1 * dVar5 * dVar4;
      param_2[2] = dVar3 * dVar4;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148936e52 FUN_148936e52 body=102 status=ok
// SIG undefined FUN_148936e52(void)

void FUN_148936e52(longlong param_1,undefined8 *param_2,double *param_3,float param_4,float param_5)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 4);
  if ((fVar1 == 0.0) && (!NAN(fVar1))) {
    fVar1 = (float)SQRT(param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]);
  }
  if (*(char *)(param_1 + 1) != '\0') {
    fVar1 = fVar1 * param_4;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = (double)(fVar1 * param_5);
  return;
}



// FUNCTION 148936eb8 FUN_148936eb8 body=857 status=ok
// SIG undefined FUN_148936eb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148936eb8(double *param_1,double *param_2,longlong param_3,float param_4,float param_5,
                  double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  
  param_1[2] = param_2[2];
  dVar8 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = dVar8;
  dVar8 = *(double *)(param_3 + 0x50);
  if (((double)_DAT_14c763a28 <= dVar8) || (dVar8 <= (double)_DAT_14c763a2c)) {
    dVar1 = *param_2 * DAT_14c8462c8 - DAT_14c8462c0 * param_2[1];
    dVar5 = DAT_14c8462c0 * param_2[2] - *param_2 * DAT_14c8462d0;
    dVar6 = param_2[1] * DAT_14c8462d0 - DAT_14c8462c8 * param_2[2];
    dVar4 = dVar1 * dVar1 + dVar6 * dVar6 + dVar5 * dVar5;
    if (((dVar4 != 1.0) || (dVar3 = dVar5, dVar7 = dVar6, dVar2 = dVar1, NAN(dVar4))) &&
       (dVar3 = DAT_14c8464e8, dVar7 = DAT_14c8464e0, dVar2 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar4)) {
      dVar4 = 1.0 / SQRT(dVar4);
      dVar3 = dVar5 * dVar4;
      dVar7 = dVar6 * dVar4;
      dVar2 = dVar1 * dVar4;
    }
    dVar4 = dVar8 * dVar2 +
            *(double *)(param_3 + 0x40) * dVar7 + dVar3 * *(double *)(param_3 + 0x48);
    dVar1 = dVar8 - dVar2 * dVar4;
    dVar5 = *(double *)(param_3 + 0x48) - dVar3 * dVar4;
    dVar4 = *(double *)(param_3 + 0x40) - dVar4 * dVar7;
    dVar6 = dVar1 * dVar1 + dVar4 * dVar4 + dVar5 * dVar5;
    if (((dVar6 != 1.0) || (dVar2 = dVar4, dVar3 = dVar5, dVar8 = dVar1, NAN(dVar6))) &&
       (dVar2 = DAT_14c8464e0, dVar3 = DAT_14c8464e8, dVar8 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar6)) {
      dVar8 = 1.0 / SQRT(dVar6);
      dVar2 = dVar4 * dVar8;
      dVar3 = dVar5 * dVar8;
      dVar8 = dVar1 * dVar8;
    }
  }
  else {
    dVar2 = *(double *)(param_3 + 0x40);
    dVar3 = *(double *)(param_3 + 0x48);
  }
  fVar9 = (float)(param_1[2] * dVar8 + *param_1 * dVar2 + dVar3 * param_1[1]);
  if (fVar9 <= 0.0) {
    dVar1 = (double)-fVar9;
    param_4 = 1.0 - param_4;
    if (1.0 <= param_4) {
      param_4 = 1.0;
    }
    if (param_4 <= 0.0) {
      param_4 = 0.0;
    }
    dVar4 = (double)param_4;
    if (param_5 <= 0.0) {
      param_5 = 0.0;
    }
    dVar5 = (double)param_5;
    *param_1 = dVar1 * dVar2 * dVar5 + (*param_1 + dVar1 * dVar2) * dVar4;
    param_1[1] = dVar3 * dVar1 * dVar5 + (param_1[1] + dVar3 * dVar1) * dVar4;
    param_1[2] = dVar8 * dVar1 * dVar5 + (param_1[2] + dVar8 * dVar1) * dVar4;
  }
  if (param_6 != (double *)0x0) {
    *param_6 = dVar2;
    param_6[1] = dVar3;
    param_6[2] = dVar8;
  }
  return;
}



// FUNCTION 148937212 FUN_148937212 body=86 status=ok
// SIG undefined FUN_148937212(void)

void FUN_148937212(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if (*(char *)((longlong)param_1 + 0x11) != '\x01') {
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  if ((longlong *)param_1[1] == (longlong *)0x0) {
    return;
  }
  if ((char)param_1[2] == '\0') {
    return;
  }
  cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x68))();
  if (cVar1 != '\0') {
    if (*param_1 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)param_1[1];
    }
    cVar1 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1 + 8);
    uVar2 = 1;
    if (cVar1 != '\0') goto LAB_14893725b;
  }
  uVar2 = 0;
LAB_14893725b:
  *(undefined1 *)((longlong)param_1 + 0x12) = uVar2;
  return;
}



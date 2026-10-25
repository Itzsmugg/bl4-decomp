// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1417b9ece FUN_1417b9ece body=353 status=ok
// SIG undefined FUN_1417b9ece(void)

void FUN_1417b9ece(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417b9f53;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1417b9f53:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417ba030 FUN_1417ba030 body=353 status=ok
// SIG undefined FUN_1417ba030(void)

void FUN_1417ba030(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417ba0b5;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1417ba0b5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417ba192 FUN_1417ba192 body=180 status=ok
// SIG undefined FUN_1417ba192(void)

void FUN_1417ba192(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
LAB_1417ba1a6:
    for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
      if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x108001) == 0) &&
         ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))))
      goto LAB_1417ba1c8;
    }
    if (*(char *)((longlong)param_1 + 0x16) == '\x01') {
      lVar4 = (longlong)(int)param_1[2] + 1;
      iVar3 = (int)lVar4;
      *(int *)(param_1 + 2) = iVar3;
      if (iVar3 < (int)plVar2[0x3c]) {
        lVar1 = *(longlong *)(plVar2[0x3b] + lVar4 * 0x10);
        lVar4 = 0;
        if (lVar1 != 0) {
          lVar4 = *(longlong *)(lVar1 + 0x50);
        }
        goto LAB_1417ba1a6;
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 != (longlong *)0x0) {
        lVar4 = plVar2[10];
        *(undefined4 *)(param_1 + 2) = 0xffffffff;
        goto LAB_1417ba1a6;
      }
      plVar2 = (longlong *)0x0;
    }
    lVar4 = 0;
  }
LAB_1417ba1c8:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 1417ba246 FUN_1417ba246 body=98 status=ok
// SIG undefined FUN_1417ba246(void)

undefined8 * FUN_1417ba246(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a7fece0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a7fece8;
  puVar1 = TlsGetValue(DAT_14c761374);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c761374,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ba2a8 FUN_1417ba2a8 body=373 status=ok
// SIG undefined FUN_1417ba2a8(void)

void FUN_1417ba2a8(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0xc;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417ba333;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1417ba333:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 1417ba41e FUN_1417ba41e body=275 status=ok
// SIG undefined FUN_1417ba41e(void)

void FUN_1417ba41e(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1417ba532 FUN_1417ba532 body=49 status=ok
// SIG undefined FUN_1417ba532(void)

longlong FUN_1417ba532(void)

{
  if (DAT_14cacf0a0 == 0) {
    FUN_14073dd9a(&DAT_14cacf0a0,&PTR_LAB_14a804190);
  }
  return DAT_14cacf0a0;
}



// FUNCTION 1417ba563 FUN_1417ba563 body=49 status=ok
// SIG undefined FUN_1417ba563(void)

longlong FUN_1417ba563(void)

{
  if (DAT_14cacf820 == 0) {
    FUN_14073dd9a(&DAT_14cacf820,&PTR_LAB_14a812120);
  }
  return DAT_14cacf820;
}



// FUNCTION 1417ba594 FUN_1417ba594 body=385 status=ok
// SIG undefined FUN_1417ba594(void)

void FUN_1417ba594(longlong *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_158 [32];
  undefined1 local_138 [128];
  longlong local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_b8 = 0;
  local_b0 = 0x40000000000;
  local_88 = 0;
  local_80 = 0x400000000;
  local_58 = 0;
  local_50 = 0x400000000;
  local_38 = 0;
  local_30 = 0x400000000;
  local_28 = 0;
  if (local_138 != param_2) {
    FUN_1401609a2(local_138,param_2);
    puVar2 = param_2 + 0x90;
    if (*(undefined1 **)(param_2 + 0xb0) != (undefined1 *)0x0) {
      puVar2 = *(undefined1 **)(param_2 + 0xb0);
    }
    FUN_1401607c4(auStack_a8,puVar2,*(undefined4 *)(param_2 + 0xb8),local_80._4_4_);
  }
  FUN_14016081a(local_78,param_2 + 0xc0);
  FUN_1400e9192(local_48,param_2 + 0xf0);
  local_28 = *(undefined8 *)(param_2 + 0x110);
  uVar1 = FUN_14477b072(param_1,DAT_14cacf660);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_138);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ba716 FUN_1417ba716 body=385 status=ok
// SIG undefined FUN_1417ba716(void)

void FUN_1417ba716(longlong *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_158 [32];
  undefined1 local_138 [128];
  longlong local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_b8 = 0;
  local_b0 = 0x40000000000;
  local_88 = 0;
  local_80 = 0x400000000;
  local_58 = 0;
  local_50 = 0x400000000;
  local_38 = 0;
  local_30 = 0x400000000;
  local_28 = 0;
  if (local_138 != param_2) {
    FUN_1401609a2(local_138,param_2);
    puVar2 = param_2 + 0x90;
    if (*(undefined1 **)(param_2 + 0xb0) != (undefined1 *)0x0) {
      puVar2 = *(undefined1 **)(param_2 + 0xb0);
    }
    FUN_1401607c4(auStack_a8,puVar2,*(undefined4 *)(param_2 + 0xb8),local_80._4_4_);
  }
  FUN_14016081a(local_78,param_2 + 0xc0);
  FUN_1400e9192(local_48,param_2 + 0xf0);
  local_28 = *(undefined8 *)(param_2 + 0x110);
  uVar1 = FUN_14477b072(param_1,DAT_14cacf7f0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,local_138);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ba898 FUN_1417ba898 body=33 status=ok
// SIG undefined FUN_1417ba898(void)

void FUN_1417ba898(undefined8 param_1)

{
  FUN_1405f1eac();
  FUN_140c1abcc(&DAT_14caf6fc8,param_1);
  return;
}



// FUNCTION 1417ba918 FUN_1417ba918 body=578 status=ok
// SIG undefined FUN_1417ba918(void)

void FUN_1417ba918(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 auStack_98 [40];
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && (*(char *)(param_2 + 0x1fb) == '\x02')) {
    if ((*(byte *)(param_2 + 0x4a) & 2) != 0) {
      FUN_14082bc44(param_1,param_2,param_2 + 0x40);
    }
    lVar3 = *(longlong *)(param_2 + 0xa8);
    if (lVar3 != 0) {
      if ((*(byte *)(lVar3 + 0x3a) & 2) != 0) {
        FUN_14082bc44(param_1,lVar3,lVar3 + 0x30);
      }
      local_70 = lVar3 + 0x250;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = local_70;
      if (*(int *)(lVar3 + 0x268) == 0) {
        uVar15 = 1;
        local_58._0_4_ = 0xffffffff;
        iVar9 = 0;
        local_58._4_4_ = 0;
        local_68._0_4_ = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        uVar15 = local_68 >> 0x20;
        iVar9 = *(int *)(lVar3 + 0x268);
      }
      lVar5 = local_60;
      lVar14 = local_70;
      iVar7 = (int)local_68;
      uVar16 = (uint)local_58;
      iVar6 = local_58._4_4_;
      iVar10 = local_50;
      if (local_58._4_4_ != iVar9 || local_60 != local_70) {
        do {
          lVar13 = *(longlong *)(*(longlong *)(lVar3 + 0x240) + (longlong)iVar6 * 0x10);
          if (((lVar13 != 0) && ((*(byte *)(lVar13 + 0x4a) & 2) != 0)) &&
             (*(byte *)(lVar13 + 0x48) <= *(byte *)(param_1 + 8))) {
            FUN_14082bc44(param_1,lVar13,lVar13 + 0x40);
            lVar14 = local_70;
          }
          uVar16 = uVar16 & ~(uint)uVar15;
          lVar13 = *(longlong *)(lVar5 + 0x10);
          if (*(longlong *)(lVar5 + 0x10) == 0) {
            lVar13 = lVar5;
          }
          iVar2 = *(int *)(lVar5 + 0x18);
          lVar11 = (longlong)iVar7;
          uVar8 = *(uint *)(lVar13 + lVar11 * 4) & uVar16;
          if (uVar8 == 0) {
            iVar6 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar6 = iVar2 + -1;
            }
            iVar6 = iVar6 >> 5;
            iVar10 = iVar10 + 0x20;
            iVar4 = iVar6;
            if (iVar6 < iVar7) {
              iVar4 = iVar7;
            }
            if (iVar7 < iVar6) {
              lVar12 = 0;
              do {
                uVar8 = *(uint *)(lVar13 + lVar11 * 4 + 4 + lVar12 * 4);
                if (uVar8 != 0) {
                  iVar7 = iVar7 + (int)lVar12 + 1;
                  uVar16 = 0xffffffff;
                  goto LAB_1417baab5;
                }
                iVar10 = iVar10 + 0x20;
                lVar12 = lVar12 + 1;
              } while (iVar4 - lVar11 != lVar12);
              uVar16 = 0xffffffff;
              iVar7 = iVar4;
            }
            iVar7 = iVar7 + 1;
            lVar14 = local_70;
            iVar6 = iVar2;
          }
          else {
LAB_1417baab5:
            uVar15 = (ulonglong)(-uVar8 & uVar8);
            uVar1 = uVar15 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            iVar6 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if (iVar2 <= iVar6) {
              iVar6 = iVar2;
            }
          }
        } while (iVar6 != iVar9 || lVar5 != lVar14);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417bab5b FUN_1417bab5b body=495 status=ok
// SIG undefined FUN_1417bab5b(void)

void FUN_1417bab5b(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x1fb) == '\x02')) {
    FUN_1401c4d5c(param_1,param_2,param_2 + 0x40);
    lVar3 = *(longlong *)(param_2 + 0xa8);
    if (lVar3 != 0) {
      FUN_1401c4d5c(param_1,lVar3,lVar3 + 0x30);
      iVar2 = *(int *)(lVar3 + 0x268);
      if (iVar2 == 0) {
        uVar15 = 0;
        uVar13 = 1;
        iVar6 = 0;
        iVar10 = 0;
      }
      else {
        puVar5 = *(uint **)(lVar3 + 0x260);
        if (*(uint **)(lVar3 + 0x260) == (uint *)0x0) {
          puVar5 = (uint *)(lVar3 + 0x250);
        }
        uVar14 = *puVar5;
        if (uVar14 == 0) {
          iVar6 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar6 = iVar2 + -1;
          }
          uVar15 = 0;
          uVar13 = (ulonglong)(uint)(iVar6 >> 5);
          if (iVar6 >> 5 < 1) {
            uVar13 = uVar15;
          }
          iVar10 = 0;
          do {
            if (uVar13 == uVar15) {
              return;
            }
            iVar10 = iVar10 + 0x20;
            uVar14 = puVar5[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar14 == 0);
        }
        else {
          uVar15 = 0;
          iVar10 = 0;
        }
        uVar13 = (ulonglong)(-uVar14 & uVar14);
        uVar1 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar6) {
          iVar6 = iVar2;
        }
      }
      if (iVar6 != iVar2) {
        uVar14 = 0xffffffff;
        iVar4 = iVar2;
        do {
          lVar11 = *(longlong *)(*(longlong *)(lVar3 + 0x240) + (longlong)iVar6 * 0x10);
          if ((lVar11 != 0) && ((*(byte *)(lVar11 + 0x4a) & 2) != 0)) {
            FUN_1401c4d5c(param_1,lVar11,lVar11 + 0x40);
            iVar4 = *(int *)(lVar3 + 0x268);
          }
          uVar14 = uVar14 & ~(uint)uVar13;
          puVar5 = *(uint **)(lVar3 + 0x260);
          if (*(uint **)(lVar3 + 0x260) == (uint *)0x0) {
            puVar5 = (uint *)(lVar3 + 0x250);
          }
          iVar6 = (int)uVar15;
          lVar11 = (longlong)iVar6;
          uVar7 = puVar5[lVar11] & uVar14;
          if (uVar7 == 0) {
            iVar8 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar8 = iVar4 + -1;
            }
            iVar8 = iVar8 >> 5;
            iVar10 = iVar10 + 0x20;
            iVar9 = iVar8;
            if (iVar8 < iVar6) {
              iVar9 = iVar6;
            }
            if (iVar6 < iVar8) {
              lVar12 = 0;
              do {
                uVar7 = puVar5[lVar11 + lVar12 + 1];
                if (uVar7 != 0) {
                  uVar15 = (ulonglong)(iVar6 + (int)lVar12 + 1);
                  uVar14 = 0xffffffff;
                  goto LAB_1417bacdd;
                }
                iVar10 = iVar10 + 0x20;
                lVar12 = lVar12 + 1;
              } while (iVar9 - lVar11 != lVar12);
              uVar14 = 0xffffffff;
              iVar6 = iVar9;
            }
            uVar15 = (ulonglong)(iVar6 + 1);
            iVar6 = iVar4;
          }
          else {
LAB_1417bacdd:
            uVar13 = (ulonglong)(-uVar7 & uVar7);
            uVar1 = uVar13 * 2 + 1;
            lVar11 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
            if (iVar4 <= iVar6) {
              iVar6 = iVar4;
            }
          }
        } while (iVar6 != iVar2);
      }
    }
  }
  return;
}



// FUNCTION 1417bad4a FUN_1417bad4a body=98 status=ok
// SIG undefined FUN_1417bad4a(void)

void FUN_1417bad4a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(int *)(param_1 + 0xae) = (int)param_1[0xae] + 1;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cac9ac0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417badae FUN_1417badae body=98 status=ok
// SIG undefined FUN_1417badae(void)

void FUN_1417badae(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(int *)(param_1 + 0xae) = (int)param_1[0xae] + 1;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cac9ae0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417bae12 FUN_1417bae12 body=310 status=ok
// SIG undefined FUN_1417bae12(void)

void FUN_1417bae12(longlong *param_1,undefined1 param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_2f;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(byte *)(param_1 + 0xaa) & 8) == 0) ||
     (cVar1 = (**(code **)(*(longlong *)(param_1[0x86] + 0x178) + 0xd8))(param_1[0x86] + 0x178),
     cVar1 == '\0')) {
    (**(code **)(*param_1 + 0x808))(param_1);
  }
  if (((*(byte *)(param_1 + 0xaa) & 4) != 0) &&
     (cVar1 = (**(code **)(*(longlong *)(param_1[0x86] + 0x178) + 0xd8))(param_1[0x86] + 0x178),
     cVar1 != '\0')) {
    lVar3 = FUN_1447210f0(param_1);
    *(float *)((longlong)param_1 + 0x55c) = (float)*(double *)(lVar3 + 0x6d0);
  }
  local_38._0_4_ =
       CONCAT13(*(undefined1 *)(param_1[0x86] + 0x292),
                CONCAT12(param_3,CONCAT11(*(undefined1 *)(param_1[0x86] + 0x291),param_2)));
  uVar2 = FUN_14477b072(param_1,DAT_14cacf6e0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_38);
  local_38 = param_1;
  local_30 = param_2;
  local_2f = param_3;
  FUN_1447cd2ec(param_1 + 0xb3,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417baf49 FUN_1417baf49 body=49 status=ok
// SIG undefined FUN_1417baf49(void)

longlong FUN_1417baf49(void)

{
  if (DAT_14cacfc18 == 0) {
    FUN_14073dd9a(&DAT_14cacfc18,&PTR_LAB_14a816f20);
  }
  return DAT_14cacfc18;
}



// FUNCTION 1417baf7a FUN_1417baf7a body=1409 status=ok
// SIG undefined FUN_1417baf7a(void)

void FUN_1417baf7a(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,double *param_8,
                  double *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined1 param_14)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  double *local_170;
  double *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined1 local_148;
  double local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  dVar8 = param_9[2] - param_8[2];
  dVar12 = param_9[1] - param_8[1];
  dVar11 = *param_9 - *param_8;
  dVar15 = dVar8 * dVar8 + dVar11 * dVar11 + dVar12 * dVar12;
  if (((dVar15 != 1.0) || (dVar9 = dVar8, dVar18 = dVar11, dVar13 = dVar12, NAN(dVar15))) &&
     (dVar9 = DAT_14c8464f0, dVar18 = DAT_14c8464e0, dVar13 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar15)) {
    dVar18 = 1.0 / SQRT(dVar15);
    dVar9 = dVar8 * dVar18;
    dVar13 = dVar12 * dVar18;
    dVar18 = dVar11 * dVar18;
  }
  if (0.0 < *(float *)(param_4 + 0xe)) {
    lVar1 = *param_4;
    dVar14 = (double)*(float *)(lVar1 + 0x40);
    dVar5 = (double)param_4[8] - *(double *)(lVar1 + 0x20);
    dVar12 = (double)param_4[9] - *(double *)(lVar1 + 0x28);
    dVar21 = (double)param_4[10] - *(double *)(lVar1 + 0x30);
    dVar19 = -dVar14;
    dVar20 = -(double)*(float *)(lVar1 + 0x44);
    dVar16 = (double)*(float *)(lVar1 + 0x48) * -1.0;
    dVar17 = (double)*(float *)(lVar1 + 0x4c) * 1.0;
    dVar11 = -(double)*(float *)(lVar1 + 0x44);
    dVar8 = dVar12 * dVar19 - dVar11 * dVar5;
    dVar15 = dVar21 * dVar20 - dVar16 * dVar12;
    dVar22 = dVar5 * dVar16 - dVar21 * dVar19;
    dVar15 = dVar15 + dVar15;
    dVar22 = dVar22 + dVar22;
    dVar8 = dVar8 + dVar8;
    dVar10 = dVar13 * dVar19 - dVar18 * dVar11;
    dVar4 = dVar9 * dVar20 - dVar13 * dVar16;
    dVar23 = dVar18 * dVar16 - dVar9 * dVar19;
    uStack_130 = 0;
    dVar4 = dVar4 + dVar4;
    dVar23 = dVar23 + dVar23;
    dVar10 = dVar10 + dVar10;
    local_118 = dVar8 * dVar17 + dVar21 + (dVar22 * dVar19 - dVar15 * dVar11);
    dVar12 = dVar14 * dVar8 + dVar16 * dVar15 + dVar17 * dVar22 + dVar12;
    local_f8 = dVar10 * dVar17 + dVar9 + (dVar23 * dVar19 - dVar4 * dVar11);
    local_108 = (dVar10 * dVar20 - dVar23 * dVar16) + dVar17 * dVar4 + dVar18;
    dStack_100 = dVar14 * dVar10 + dVar16 * dVar4 + dVar17 * dVar23 + dVar13;
    plVar2 = *(longlong **)(param_4[1] + 0x10);
    local_128._8_4_ = SUB84(dVar12,0);
    local_128._0_8_ = (dVar8 * dVar20 - dVar22 * dVar16) + dVar17 * dVar15 + dVar5;
    local_128._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    pcVar3 = *(code **)(*plVar2 + 0xa8);
    local_138 = dVar9;
    if (pcVar3 == FUN_140106f38) {
      local_178 = 0x3ff0000000000000;
      uVar6 = FUN_140106f38(plVar2,local_128,&local_108,(int)param_4[2]);
    }
    else if (pcVar3 == FUN_14014b518) {
      local_170 = (double *)(plVar2 + 4);
      local_178 = 0x3ff0000000000000;
      uVar6 = FUN_144852512(plVar2[0x11],local_128,&local_108);
    }
    else {
      uVar6 = 0xffffffff;
      if (pcVar3 != (code *)&LAB_1401071b2) {
        local_178 = 0x3ff0000000000000;
        uVar6 = (*pcVar3)(plVar2,local_128,&local_108);
      }
    }
    *(undefined4 *)(param_4 + 2) = uVar6;
  }
  local_148 = param_14;
  local_160 = param_10;
  local_168 = param_9;
  local_170 = param_8;
  local_178 = param_6;
  local_158 = param_11;
  local_150 = param_13;
  iVar7 = FUN_1400b2b4d(param_2,param_4,param_7,param_5);
  *(bool *)param_1 = iVar7 == 0;
  if ((local_f0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417bb506 FUN_1417bb506 body=376 status=ok
// SIG undefined FUN_1417bb506(void)

void FUN_1417bb506(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x108;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417bb592;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1417bb592:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x108)) {
    uVar7 = uVar5 / 0x108 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x108,8);
  return;
}



// FUNCTION 1417bb680 FUN_1417bb680 body=332 status=ok
// SIG undefined FUN_1417bb680(void)

void FUN_1417bb680(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x48;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1417bb6ee;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1417bb6ee:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x48)) {
      uVar5 = uVar3 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x48,8);
  }
  return;
}



// FUNCTION 1417bb7cc FUN_1417bb7cc body=89 status=ok
// SIG undefined FUN_1417bb7cc(void)

bool FUN_1417bb7cc(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_14052f4ca(param_1,param_6,param_3,param_4,param_2,DAT_14cad0ec4,param_7,&DAT_14cad0f10,param_5
               );
  return 0 < *(int *)(param_2 + 8);
}



// FUNCTION 1417bb826 FUN_1417bb826 body=196 status=ok
// SIG undefined FUN_1417bb826(void)

bool FUN_1417bb826(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 local_59;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_98 = &local_38;
  local_28 = param_4[2];
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_48 = *(undefined8 *)(param_3 + 4);
  local_70 = &local_11;
  local_78 = param_5;
  local_80 = &DAT_14cad0f10;
  local_88 = param_6;
  local_90 = DAT_14cad0ec4;
  FUN_1401e2596(local_58,param_2,&local_59);
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 0 < *(int *)(param_2 + 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417bb8eb FUN_1417bb8eb body=49 status=ok
// SIG undefined FUN_1417bb8eb(void)

longlong FUN_1417bb8eb(void)

{
  if (DAT_14cad00d0 == 0) {
    FUN_14073dd9a(&DAT_14cad00d0,&PTR_FUN_14a81f100);
  }
  return DAT_14cad00d0;
}



// FUNCTION 1417bb91c FUN_1417bb91c body=19 status=ok
// SIG undefined FUN_1417bb91c(void)

char FUN_1417bb91c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  wchar_t *pwStack_58;
  code *pcStack_50;
  undefined1 *puStack_48;
  code **ppcStack_40;
  code *pcStack_38;
  code *pcStack_30;
  code *pcStack_20;
  ulonglong uStack_18;
  
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if (lVar3 == 0) {
    return '\0';
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(uint *)(lVar3 + 8) & 0x10) == 0) && (lVar8 = *(longlong *)(lVar3 + 0x20), lVar8 != 0)) &&
     (-1 < (short)*(undefined4 *)(lVar8 + 8))) {
    uVar1 = *(uint *)(lVar8 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    if ((*(uint *)(lVar8 + 8) >> 0x1c & 1) != 0) goto LAB_14487feaa;
    if (DAT_14cae8b20 == 0) {
      ppcStack_40 = &pcStack_20;
      pcStack_20 = (code *)&LAB_14355090c;
      pcStack_30 = FUN_14081d0ea;
      pcStack_38 = FUN_14081d0ea;
      puStack_48 = &LAB_147b8e16d;
      pcStack_50 = (code *)&LAB_140810a38;
      pwStack_58 = L"Engine";
      uStack_60 = 0x800000000;
      uStack_68 = 0x10000000;
      uStack_70 = 8;
      uStack_78 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar8 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      ppcStack_40 = &pcStack_20;
      pcStack_20 = FUN_1449e2820;
      pcStack_30 = FUN_14081d0ea;
      pcStack_38 = FUN_14081d0ea;
      puStack_48 = &LAB_1468c5283;
      pcStack_50 = FUN_142809da0;
      pwStack_58 = L"Engine";
      uStack_60 = 0x400000000;
      uStack_68 = 0x10000000;
      uStack_70 = 8;
      uStack_78 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar6 = *(longlong *)(lVar3 + 0x20);
    if (lVar6 == 0) goto LAB_14487feaa;
    iVar2 = *(int *)(lVar8 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar2) ||
         (lVar9 = lVar6,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
         lVar8 + 0x30)) {
        lVar9 = 0;
      }
    } while ((lVar9 == 0) && (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 != 0));
    if (lVar9 == 0) goto LAB_14487feaa;
    lVar8 = *(longlong *)(lVar9 + 0xc0);
  }
  else {
LAB_14487feaa:
    lVar8 = 0;
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x170);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar4 == DAT_14c892fa8) {
    if (lVar8 != 0) {
      plVar7 = *(longlong **)(lVar8 + 0x38);
      goto LAB_14487fe20;
    }
  }
  else {
    plVar7 = (longlong *)FUN_1456d2c7c(DAT_14cb0d2b0,lVar8,uVar4);
LAB_14487fe20:
    if (plVar7 != (longlong *)0x0) {
      if (*(code **)(*plVar7 + 0x3c0) == (code *)&LAB_1448ff5f6) {
        cVar10 = plVar7[0x1e] == 0;
      }
      else {
        cVar10 = (**(code **)(*plVar7 + 0x3c0))(plVar7);
      }
      cVar5 = '\x03';
      if (cVar10 != '\0') {
        cVar5 = (DAT_14c86a9f0 & 1) + 1;
      }
      goto LAB_14487fe60;
    }
    if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(uStack_18 ^ (ulonglong)auStack_98);
    }
  }
  cVar5 = '\0';
LAB_14487fe60:
  if ((uStack_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return cVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417bb98b FUN_1417bb98b body=49 status=ok
// SIG undefined FUN_1417bb98b(void)

longlong FUN_1417bb98b(void)

{
  if (DAT_14cad0480 == 0) {
    FUN_14073dd9a(&DAT_14cad0480,&PTR_LAB_14a826a20);
  }
  return DAT_14cad0480;
}



// FUNCTION 1417bb9bc FUN_1417bb9bc body=226 status=ok
// SIG undefined FUN_1417bb9bc(void)

void FUN_1417bb9bc(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  FUN_14480568a(plVar1,param_1);
  *plVar1 = (longlong)&PTR_FUN_14a828280;
  plVar1[5] = (longlong)&PTR_FUN_14a828c90;
  plVar1[6] = (longlong)&PTR_LAB_14a828cd0;
  plVar1[0x55] = (longlong)&PTR_FUN_14a828d20;
  plVar1[0x56] = (longlong)&PTR_FUN_14a828da0;
  plVar1[0x57] = (longlong)&PTR_FUN_14a828db0;
  plVar1[0xc4] = 0;
  FUN_1400ea934(plVar1,DAT_14cad0f30,1);
  FUN_140583e18(plVar1,1);
  *(byte *)(plVar1 + 0xc5) = *(byte *)(plVar1 + 0xc5) & 0xfe;
  *(undefined4 *)((longlong)plVar1 + 0x62c) = 0x3b23d70a;
  plVar1[0xc6] = 0;
  plVar1[199] = 0;
  *(undefined4 *)(plVar1 + 200) = 0x3f000000;
  *(byte *)((longlong)plVar1 + 0x1f9) = *(byte *)((longlong)plVar1 + 0x1f9) | 8;
  if ((*(byte *)((longlong)plVar1 + 0x2d3) & 8) != 0) {
    *(byte *)((longlong)plVar1 + 0x2d3) = *(byte *)((longlong)plVar1 + 0x2d3) & 0xf7;
    (**(code **)(*plVar1 + 0x958))(plVar1);
  }
  *(byte *)((longlong)plVar1 + 0x2de) = *(byte *)((longlong)plVar1 + 0x2de) | 0x10;
  *(byte *)((longlong)plVar1 + 0x2dd) = *(byte *)((longlong)plVar1 + 0x2dd) | 4;
  return;
}



// FUNCTION 1417bba9e FUN_1417bba9e body=137 status=ok
// SIG undefined FUN_1417bba9e(void)

void FUN_1417bba9e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14076ac9c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a829a20;
  puVar1[5] = &PTR_FUN_14a82a420;
  puVar1[6] = &PTR_LAB_14a82a460;
  puVar1[0x55] = &PTR_FUN_14a82a4b0;
  puVar1[0x56] = &PTR_FUN_14a82a530;
  puVar1[0x57] = &PTR_FUN_14a82a540;
  puVar1[200] = 0x4040000000000000;
  puVar1[0xc9] = 0x4040000000000000;
  puVar1[0xca] = 0x4040000000000000;
  *(byte *)((longlong)puVar1 + 0x2de) = *(byte *)((longlong)puVar1 + 0x2de) | 0x10;
  return;
}



// FUNCTION 1417bbb2c FUN_1417bbb2c body=146 status=ok
// SIG undefined FUN_1417bbb2c(void)

void FUN_1417bbb2c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14480568a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a82a6c0;
  puVar1[5] = &PTR_FUN_14a82b0c0;
  puVar1[6] = &PTR_LAB_14a82b100;
  puVar1[0x55] = &PTR_FUN_14a82b150;
  puVar1[0x56] = &PTR_FUN_14a82b1d0;
  puVar1[0x57] = &PTR_FUN_14a82b1e0;
  puVar1[0xc4] = 0;
  puVar1[0xc5] = 0;
  *(byte *)((longlong)puVar1 + 0x1f9) = *(byte *)((longlong)puVar1 + 0x1f9) | 8;
  *(byte *)((longlong)puVar1 + 0x2d5) = *(byte *)((longlong)puVar1 + 0x2d5) | 0x10;
  *(byte *)((longlong)puVar1 + 0x2de) = *(byte *)((longlong)puVar1 + 0x2de) & 0xe3 | 0x10;
  *(byte *)((longlong)puVar1 + 0x9e) = *(byte *)((longlong)puVar1 + 0x9e) | 0x80;
  return;
}



// FUNCTION 1417bbbbe FUN_1417bbbbe body=103 status=ok
// SIG undefined FUN_1417bbbbe(void)

void FUN_1417bbbbe(longlong param_1)

{
  byte *pbVar1;
  undefined1 auStack_48 [40];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144842962();
  FUN_144842a8a(param_1,local_20);
  if ((local_20[0] < 0x145) && (*(longlong *)(param_1 + 0x628) != 0)) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x628) + 0xb8);
    *pbVar1 = *pbVar1 & 0xbf;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417bbc26 FUN_1417bbc26 body=49 status=ok
// SIG undefined FUN_1417bbc26(void)

longlong FUN_1417bbc26(void)

{
  if (DAT_14cad06b8 == 0) {
    FUN_14073dd9a(&DAT_14cad06b8,&PTR_LAB_14a82c020);
  }
  return DAT_14cad06b8;
}



// FUNCTION 1417bbc58 FUN_1417bbc58 body=564 status=ok
// SIG undefined FUN_1417bbc58(void)

void FUN_1417bbc58(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  code *pcVar4;
  float *pfVar5;
  byte *pbVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_58 [40];
  float local_30;
  float local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_58);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_58) >> 0x20);
  local_2c = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_2c);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_2c);
    }
    else {
      if (pcVar4 == (code *)&LAB_1428293cc) {
        uVar3 = *(undefined8 *)(pbVar6 + 1);
        pbVar6 = pbVar6 + 9;
        *(byte **)(param_2 + 0x20) = pbVar6;
        local_2c = (float)uVar3;
        uStack_28 = (undefined4)((ulonglong)uVar3 >> 0x20);
        pfVar7 = (float *)0x0;
        goto LAB_1417bbcfe;
      }
      (*pcVar4)(uVar3,param_2,&local_2c);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  pfVar7 = *(float **)(param_2 + 0x38);
LAB_1417bbcfe:
  local_30 = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_30);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_30);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_30);
    }
  }
  pfVar5 = &local_2c;
  if (pfVar7 != (float *)0x0) {
    pfVar5 = pfVar7;
  }
  pfVar7 = &local_30;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar7 = *(float **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = *(double *)(param_1 + 0x280);
  uVar8 = SUB84(dVar1,0);
  uVar9 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = *(double *)(param_1 + 0x288);
  if (dVar2 <= dVar1) {
    uVar8 = SUB84(dVar2,0);
    uVar9 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  *pfVar5 = (float)(double)CONCAT44(uVar9,uVar8) * *(float *)(param_1 + 0x644);
  *pfVar7 = (float)*(double *)(param_1 + 0x290) * *(float *)(param_1 + 0x640);
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417bbe8d FUN_1417bbe8d body=133 status=ok
// SIG undefined FUN_1417bbe8d(void)

void FUN_1417bbe8d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14076ac9c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a82c060;
  puVar1[5] = &PTR_FUN_14a82ca60;
  puVar1[6] = &PTR_LAB_14a82caa0;
  puVar1[0x55] = &PTR_FUN_14a82caf0;
  puVar1[0x56] = &PTR_FUN_14a82cb70;
  puVar1[0x57] = &PTR_FUN_14a82cb80;
  *(undefined4 *)(puVar1 + 0xc5) = 0xffdf959d;
  puVar1[200] = 0x41b0000042300000;
  *(byte *)((longlong)puVar1 + 0x2de) = *(byte *)((longlong)puVar1 + 0x2de) | 0x10;
  return;
}



// FUNCTION 1417bbf12 FUN_1417bbf12 body=46 status=ok
// SIG undefined FUN_1417bbf12(void)

void FUN_1417bbf12(longlong param_1)

{
  float fVar1;
  
  FUN_144842962();
  fVar1 = 0.0;
  if (0.0 <= *(float *)(param_1 + 0x640)) {
    fVar1 = *(float *)(param_1 + 0x640);
  }
  if (fVar1 <= *(float *)(param_1 + 0x644)) {
    fVar1 = *(float *)(param_1 + 0x644);
  }
  *(float *)(param_1 + 0x640) = fVar1;
  return;
}



// FUNCTION 1417bbf40 FUN_1417bbf40 body=49 status=ok
// SIG undefined FUN_1417bbf40(void)

longlong FUN_1417bbf40(void)

{
  if (DAT_14cad0858 == 0) {
    FUN_14073dd9a(&DAT_14cad0858,&PTR_LAB_14a832ee0);
  }
  return DAT_14cad0858;
}



// FUNCTION 1417bbf72 FUN_1417bbf72 body=91 status=ok
// SIG undefined FUN_1417bbf72(void)

void FUN_1417bbf72(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x810);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x810) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x818);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x818) = 0;
  }
  FUN_1400f80f0(param_1);
  return;
}



// FUNCTION 1417bbfce FUN_1417bbfce body=484 status=ok
// SIG undefined FUN_1417bbfce(void)

double * FUN_1417bbfce(longlong *param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_98 [32];
  double *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar1 = (double)param_1[0x73] * (double)param_1[0x48] +
          (double)param_1[0x71] * (double)param_1[0x46] +
          (double)param_1[0x47] * (double)param_1[0x72];
  dVar4 = (double)param_1[0x73] - (double)param_1[0x48] * dVar1;
  dVar3 = (double)param_1[0x72] - (double)param_1[0x47] * dVar1;
  dVar1 = (double)param_1[0x71] - dVar1 * (double)param_1[0x46];
  *param_2 = dVar1;
  param_2[1] = dVar3;
  param_2[2] = dVar4;
  if (((char)param_1[0x1f0] == '\0') && (0.0 < dVar4 * dVar4 + dVar1 * dVar1 + dVar3 * dVar3)) {
    local_78 = param_2;
    (**(code **)(*param_1 + 0x788))(0,&local_68,param_3,(int)param_1[0x62]);
    param_2[2] = local_58;
    *(undefined4 *)param_2 = local_68;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_64;
    *(undefined4 *)(param_2 + 1) = uStack_60;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_5c;
    fVar2 = (float)(**(code **)(*param_1 + 0x710))(param_1);
    dVar3 = DAT_14c8464e8;
    dVar4 = DAT_14c8464f0;
    dVar1 = DAT_14c8464e0;
    if (0.0001 <= fVar2) {
      dVar5 = (double)fVar2;
      dVar1 = *param_2;
      dVar3 = param_2[1];
      dVar4 = param_2[2];
      dVar6 = dVar4 * dVar4 + dVar1 * dVar1 + dVar3 * dVar3;
      if (dVar5 * dVar5 < dVar6) {
        dVar5 = (1.0 / SQRT(dVar6)) * dVar5;
        dVar3 = dVar3 * dVar5;
        dVar4 = dVar4 * dVar5;
        dVar1 = dVar1 * dVar5;
      }
    }
    *param_2 = dVar1;
    param_2[1] = dVar3;
    param_2[2] = dVar4;
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1417bc1b4 FUN_1417bc1b4 body=61 status=ok
// SIG undefined FUN_1417bc1b4(void)

undefined8 FUN_1417bc1b4(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)(param_1 + 0x178);
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xe0))(plVar3);
  if (cVar1 != '\0') {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001417bc1ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar3 + 0xd8))(plVar3);
  return uVar2;
}



// FUNCTION 1417bc1f2 FUN_1417bc1f2 body=310 status=ok
// SIG undefined FUN_1417bc1f2(void)

undefined8 FUN_1417bc1f2(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((9.999999747378752e-05 <
       (-(double)param_1[0x46] * *(double *)(param_4 + 0x40) -
       (double)param_1[0x47] * *(double *)(param_4 + 0x48)) -
       (double)param_1[0x48] * *(double *)(param_4 + 0x50)) &&
     (((9.999999747378752e-05 < ABS(*(double *)(param_4 + 0x40) - *(double *)(param_4 + 0x58)) ||
       (9.999999747378752e-05 < ABS(*(double *)(param_4 + 0x48) - *(double *)(param_4 + 0x60)))) ||
      (9.999999747378752e-05 < ABS(*(double *)(param_4 + 0x50) - *(double *)(param_4 + 0x68)))))) {
    lVar3 = param_1[0x22];
    local_28 = *(undefined8 *)(lVar3 + 0x260);
    uStack_20 = *(undefined8 *)(lVar3 + 0x268);
    local_18 = *(undefined8 *)(lVar3 + 0x270);
    lVar3 = *(longlong *)(param_1[0x3e] + 0x438);
    dVar1 = *(double *)(lVar3 + 0x280);
    uVar6 = SUB84(dVar1,0);
    uVar7 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)(lVar3 + 0x288);
    if (dVar2 <= dVar1) {
      uVar6 = SUB84(dVar2,0);
      uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    cVar4 = (**(code **)(*param_1 + 0x8f8))
                      (uVar6,&local_28,param_4 + 0x28,
                       (float)(double)CONCAT44(uVar7,uVar6) * *(float *)(lVar3 + 0x644));
    uVar5 = 1;
    if (cVar4 != '\0') goto LAB_1417bc29b;
  }
  uVar5 = 0;
LAB_1417bc29b:
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1417bc32a FUN_1417bc32a body=191 status=ok
// SIG undefined FUN_1417bc32a(void)

void FUN_1417bc32a(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x88);
  *(int *)(param_1 + 0x88) = param_2;
  if (*(int *)(param_1 + 0x8c) < param_2) {
    if (param_2 + 0x1fU < 0x420) {
      iVar7 = 0x20;
    }
    else {
      uVar6 = param_2 + 0x1fU >> 5;
      uVar3 = FUN_144a3809e(uVar6 * 4,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar7 = 0x7fffffff;
      if ((int)uVar6 <= iVar2) {
        iVar7 = iVar2;
      }
    }
    FUN_140724ba4(param_1,iVar1 + 0x1fU >> 5,iVar7,4);
    *(int *)(param_1 + 0x8c) = iVar7 << 5;
    param_2 = *(int *)(param_1 + 0x88);
  }
  iVar1 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  if (param_2 % 0x20 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar4 = param_1;
    }
    bVar5 = -(char)(param_2 % 0x20);
    *(uint *)(lVar4 + (longlong)(iVar1 >> 5) * 4) =
         (uint)(*(int *)(lVar4 + (longlong)(iVar1 >> 5) * 4) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
  }
  return;
}



// FUNCTION 1417bc3ea FUN_1417bc3ea body=199 status=ok
// SIG undefined FUN_1417bc3ea(void)

void FUN_1417bc3ea(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  byte bVar2;
  
  *(undefined1 *)(param_1 + 0xb) = 0;
  if (param_2 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 8))(*(longlong **)(param_1 + 0x10),param_2,0);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | *(byte *)(param_2 + 0x10) >> 3 & 1;
  }
  *(bool *)(param_1 + 8) = param_3 != 0;
  if (param_3 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 8))(*(longlong **)(param_1 + 0x18),param_3,1);
    cVar1 = FUN_140fbf550(param_3 + 0x364);
    bVar2 = 0;
    if ((param_2 != 0) && (cVar1 != '\0')) {
      bVar2 = FUN_140fbf550(param_2 + 0x364);
      bVar2 = bVar2 ^ 1;
    }
    *(byte *)(param_1 + 9) = bVar2;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | *(byte *)(param_3 + 0x10) >> 3 & 1;
  }
  else {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  *(bool *)(param_1 + 10) = param_4 != 0;
  if (param_4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001417bc461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_4,2);
  return;
}



// FUNCTION 1417bc4b2 FUN_1417bc4b2 body=452 status=ok
// SIG undefined FUN_1417bc4b2(void)

void FUN_1417bc4b2(longlong *param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_658 [32];
  longlong local_638 [125];
  longlong local_250;
  longlong local_40;
  byte local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_658;
  if ((*(char *)(param_2 + 10) == '\x01') && (*(longlong *)(param_2 + 0x20) != 0)) {
    param_1[0x168] = *(longlong *)(param_2 + 0x20);
    (**(code **)(*param_1 + 0xad8))(param_1);
  }
  lVar3 = 0;
  if ((*(char *)(param_2 + 8) == '\x01') && ((*(byte *)(param_2 + 0xb) & 1) == 0)) {
    if (((*(byte *)((longlong)param_1 + 0x349) & 2) == 0) ||
       ((*(byte *)((longlong)param_1 + 0x349) & 1) == 0)) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_1[0x22];
    }
  }
  FUN_1402ed838(local_638,lVar3,1,1);
  if ((*(char *)(param_2 + 8) == '\x01') && (lVar3 = *(longlong *)(param_2 + 0x18), lVar3 != 0)) {
    if ((*(char *)(param_2 + 9) == '\x01') &&
       (*(longlong **)(param_1[0x3e] + 0x428) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1[0x3e] + 0x428) + 0xbb0))();
      bVar2 = cVar1 << 2;
    }
    else {
      bVar2 = 0;
    }
    *(byte *)(param_1[0x3e] + 0x551) = *(byte *)(param_1[0x3e] + 0x551) & 0xfb | bVar2;
    param_1[0x168] = lVar3;
    (**(code **)(*param_1 + 0xad8))(param_1,lVar3);
    *(byte *)(param_1[0x3e] + 0x551) = *(byte *)(param_1[0x3e] + 0x551) & 0xfb;
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    param_1[0x168] = *(longlong *)(param_2 + 0x10);
    (**(code **)(*param_1 + 0xad8))(param_1);
  }
  param_1[0x168] = 0;
  if ((((local_30 & 1) != 0) && (local_638[0] != 0)) &&
     ((*(uint *)(local_638[0] + 8) >> 0x1e & 1) == 0)) {
    FUN_140248a4c(local_638[0],local_638);
  }
  local_638[0] = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_250 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_658) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417bc678 FUN_1417bc678 body=535 status=ok
// SIG undefined FUN_1417bc678(void)

undefined8 FUN_1417bc678(longlong *param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  char extraout_AL;
  undefined7 extraout_var;
  undefined8 uVar6;
  undefined7 uVar7;
  longlong *plVar8;
  double *in_stack_00000028;
  char in_stack_00000048;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  double local_70;
  double local_68;
  double local_60;
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 0x5e0))();
  if (extraout_AL == in_stack_00000048) {
    lVar1 = param_1[0x22];
    dVar2 = *(double *)(lVar1 + 0x270) - in_stack_00000028[2];
    dVar4 = *(double *)(lVar1 + 0x268) - in_stack_00000028[1];
    dVar3 = *(double *)(lVar1 + 0x260) - *in_stack_00000028;
    if (DAT_14cac0fa8 == (longlong *)0x0) {
      local_90 = &local_58;
      local_58 = FUN_141030f22;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_141117124;
      local_98 = &LAB_14786c867;
      local_a0 = &LAB_145abcadb;
      local_a8 = &DAT_149e063b2;
      local_b0 = 0;
      local_b8 = 0x10000004;
      local_c0 = 8;
      local_c8 = 0x438;
      FUN_14081cfa3(L"/Script/Engine",L"GameNetworkManager",&DAT_14cac0fa8,&DAT_14786c866);
    }
    plVar5 = DAT_14cac0fa8;
    plVar8 = (longlong *)DAT_14cac0fa8[0x22];
    if (plVar8 == (longlong *)0x0) {
      (**(code **)(*DAT_14cac0fa8 + 1000))(DAT_14cac0fa8);
      plVar8 = (longlong *)plVar5[0x22];
    }
    local_70 = dVar3;
    local_68 = dVar4;
    local_60 = dVar2;
    uVar6 = (**(code **)(*plVar8 + 0x658))();
    if ((char)uVar6 == '\0') {
      uVar6 = 0;
      goto LAB_1417bc742;
    }
    uVar7 = (undefined7)((ulonglong)uVar6 >> 8);
    *(byte *)((longlong)param_1 + 0x34a) =
         *(byte *)((longlong)param_1 + 0x34a) & 0xfb |
         ((*(byte *)((longlong)param_1 + 0x34a) & 4) >> 2 |
         (double)(*(float *)(param_1 + 0x91) * *(float *)(param_1 + 0x91)) <
         dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4) << 2;
  }
  else {
    *(byte *)((longlong)param_1 + 0x34a) = *(byte *)((longlong)param_1 + 0x34a) | 4;
    uVar7 = extraout_var;
  }
  uVar6 = CONCAT71(uVar7,1);
LAB_1417bc742:
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417bc890 FUN_1417bc890 body=40 status=ok
// SIG undefined FUN_1417bc890(void)

undefined8 FUN_1417bc890(undefined8 param_1,int param_2)

{
  FUN_14006e5d0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417bc8b8 FUN_1417bc8b8 body=40 status=ok
// SIG undefined FUN_1417bc8b8(void)

undefined8 FUN_1417bc8b8(undefined8 param_1,int param_2)

{
  FUN_14006e5d0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417bc8e0 FUN_1417bc8e0 body=40 status=ok
// SIG undefined FUN_1417bc8e0(void)

undefined8 FUN_1417bc8e0(undefined8 param_1,int param_2)

{
  FUN_14006e5d0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417bc908 FUN_1417bc908 body=40 status=ok
// SIG undefined FUN_1417bc908(void)

undefined8 FUN_1417bc908(undefined8 param_1,int param_2)

{
  FUN_14006e5d0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417bc930 FUN_1417bc930 body=40 status=ok
// SIG undefined FUN_1417bc930(void)

undefined8 FUN_1417bc930(undefined8 param_1,int param_2)

{
  FUN_14006e5d0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417bc958 FUN_1417bc958 body=89 status=ok
// SIG undefined FUN_1417bc958(void)

undefined8 * FUN_1417bc958(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1447ce8be(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1417bc9b2 FUN_1417bc9b2 body=172 status=ok
// SIG undefined FUN_1417bc9b2(void)

longlong * FUN_1417bc9b2(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0xffffffff;
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      uVar3 = local_1c;
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
      uVar3 = local_1c;
    }
  }
  else {
    uVar3 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (((int)uVar3 < 0) || (*(int *)(param_1[0x14] + 0x40) <= (int)uVar3)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1[0x14] + 0x38) + (ulonglong)uVar3 * 8);
  }
  *param_2 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1417bca60 FUN_1417bca60 body=82 status=ok
// SIG undefined FUN_1417bca60(void)

undefined8 * FUN_1417bca60(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_3;
  cVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)*param_2)(param_2);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0x50))(param_2);
      param_1[1] = param_2;
      FUN_1405ed5bf(param_2,param_1[2]);
    }
  }
  return param_1;
}



// FUNCTION 1417bcab2 FUN_1417bcab2 body=280 status=ok
// SIG undefined FUN_1417bcab2(void)

undefined8 FUN_1417bcab2(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_144835338();
  if (lVar1 != 0) {
    if (DAT_14caf8960 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_140fe7df2;
      local_38 = &LAB_147c91239;
      local_40 = &LAB_1463f790d;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x3d8;
      FUN_14081cfa3(L"/Script/Engine",L"PhysicsVolume",&DAT_14caf8960,&DAT_147c91238);
      if (DAT_14caf8960 == 0) goto LAB_1417bcbc4;
    }
    if (*(int *)(DAT_14caf8960 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      uVar2 = CONCAT71((int7)((ulonglong)(DAT_14caf8960 + 0x30) >> 8),
                       *(longlong *)
                        (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14caf8960 + 0x38) * 8)
                       == DAT_14caf8960 + 0x30);
      goto LAB_1417bcb02;
    }
  }
LAB_1417bcbc4:
  uVar2 = 0;
LAB_1417bcb02:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417bcbcc FUN_1417bcbcc body=286 status=ok
// SIG undefined FUN_1417bcbcc(void)

undefined8 FUN_1417bcbcc(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_144835338();
  if (lVar1 != 0) {
    if (DAT_14caf64b8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b4754c;
      local_38 = &LAB_147c45ce0;
      local_40 = &LAB_1463f1ff4;
      local_48 = &DAT_149e063b2;
      local_50 = 0x4000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
      if (DAT_14caf64b8 == 0) goto LAB_1417bcce4;
    }
    if (*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      uVar2 = CONCAT71((int7)((ulonglong)(DAT_14caf64b8 + 0x30) >> 8),
                       *(longlong *)
                        (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8)
                       == DAT_14caf64b8 + 0x30);
      goto LAB_1417bcc1c;
    }
  }
LAB_1417bcce4:
  uVar2 = 0;
LAB_1417bcc1c:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417bcceb FUN_1417bcceb body=277 status=ok
// SIG undefined FUN_1417bcceb(void)

undefined8
FUN_1417bcceb(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,undefined8 param_5
             ,byte param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_98 = 0;
  uStack_c0 = (ulonglong)param_4;
  local_b0 = param_5;
  local_b8 = (ushort)param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d8 = param_2;
  local_d0 = param_1;
  local_c8 = param_3;
  uVar1 = FUN_1402710dd(&local_d8);
  if (local_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417bce01 FUN_1417bce01 body=49 status=ok
// SIG undefined FUN_1417bce01(void)

longlong FUN_1417bce01(void)

{
  if (DAT_14cad1118 == 0) {
    FUN_14073dd9a(&DAT_14cad1118,&PTR_LAB_14a83f430);
  }
  return DAT_14cad1118;
}



// FUNCTION 1417bce32 FUN_1417bce32 body=173 status=ok
// SIG undefined FUN_1417bce32(void)

void FUN_1417bce32(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ead26(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a83f470;
  puVar1[5] = &PTR_FUN_14a83fa80;
  puVar1[6] = &PTR_LAB_14a83fac0;
  puVar1[0x55] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2b4) = 0x3c23d70a;
  *(undefined4 *)((longlong)puVar1 + 700) = 0;
  *(byte *)(puVar1 + 0x59) = (*(byte *)(puVar1 + 0x59) & 0xfc) + 1;
  puVar1[0x5a] = 0x4060000000000000;
  puVar1[0x5b] = 0x4070000000000000;
  puVar1[0x5c] = 0x4070000000000000;
  puVar1[0x5d] = &DAT_3f8000003f800000;
  puVar1[0x5e] = &DAT_3f8000003f800000;
  puVar1[0x5f] = 0;
  puVar1[0x61] = 0;
  return;
}



// FUNCTION 1417bcee0 FUN_1417bcee0 body=66 status=ok
// SIG undefined FUN_1417bcee0(void)

void FUN_1417bcee0(longlong param_1,longlong param_2)

{
  FUN_14010df0a();
  if (*(int *)(param_2 + 0x40) < 0x1e3) {
    *(undefined8 *)(param_1 + 0x2d0) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x2d8) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x2e0) = 0x3ff0000000000000;
  }
  return;
}



// FUNCTION 1417bcf22 FUN_1417bcf22 body=31 status=ok
// SIG undefined FUN_1417bcf22(void)

void FUN_1417bcf22(longlong *param_1)

{
  FUN_140136774();
                    /* WARNING: Could not recover jumptable at 0x0001417bcf3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1);
  return;
}



// FUNCTION 1417bcf42 FUN_1417bcf42 body=332 status=ok
// SIG undefined FUN_1417bcf42(void)

undefined8 FUN_1417bcf42(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x2a8);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    if (DAT_14caec470 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1417df956;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463eaa20;
      local_48 = &LAB_147bbd9ea;
      local_50 = FUN_1401cf6d7;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x330;
      FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
    }
    if ((*(int *)(DAT_14caec470 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) == DAT_14caec470 + 0x30)) {
      lVar2 = *(longlong *)(lVar2 + 0x110);
    }
  }
  uVar1 = FUN_14090ceee(lVar2,param_1,0);
  FUN_14084ef06(param_1,uVar1);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417bd096 FUN_1417bd096 body=42 status=ok
// SIG undefined FUN_1417bd096(void)

void FUN_1417bd096(longlong param_1)

{
  FUN_1401c3ca6();
  FUN_14084ac3e(param_1,*(float *)(param_1 + 0x2b8) + *(float *)(param_1 + 700));
  return;
}



// FUNCTION 1417bd0c0 FUN_1417bd0c0 body=241 status=ok
// SIG undefined FUN_1417bd0c0(void)

void FUN_1417bd0c0(longlong param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) | 2;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  if ((((DAT_14c76152c == '\x01') && (*(char *)(param_1 + 0x1fc) != '\0')) &&
      ((lVar4 = *(longlong *)(param_1 + 0xb0), lVar4 != 0 ||
       (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)))) &&
     ((((*(byte *)(lVar4 + 0x152) == 1 || (*(byte *)(lVar4 + 0x152) - 5 < 2)) &&
       (*(longlong *)(lVar4 + 0x178) != 0)) && (DAT_14c76152c == '\x01')))) {
    bVar1 = *(byte *)(param_1 + 0x1fc);
    iVar3 = *(int *)(*(longlong *)(lVar4 + 0x178) + 0x3e4);
    if (iVar3 < 0) {
      iVar3 = FUN_141348de4();
    }
    if (iVar3 < (int)(uint)bVar1) {
      return;
    }
  }
  if (((int)(uint)*(byte *)(param_1 + 0x1fc) <= DAT_14cb0cbf8) &&
     (cVar2 = FUN_140041326(param_1), cVar2 != '\0')) {
    lVar4 = *(longlong *)(param_1 + 0xb0);
    if (lVar4 == 0) {
      lVar4 = FUN_1448abda6(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x0001417bd12e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar4 + 0x218) + 0x118))(*(longlong **)(lVar4 + 0x218),param_1);
    return;
  }
  return;
}



// FUNCTION 1417bd1b2 FUN_1417bd1b2 body=226 status=ok
// SIG undefined FUN_1417bd1b2(void)

void FUN_1417bd1b2(longlong param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  if ((((DAT_14c76152c == '\x01') && (*(char *)(param_1 + 0x1fc) != '\0')) &&
      ((lVar4 = *(longlong *)(param_1 + 0xb0), lVar4 != 0 ||
       (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)))) &&
     ((((*(byte *)(lVar4 + 0x152) == 1 || (*(byte *)(lVar4 + 0x152) - 5 < 2)) &&
       (*(longlong *)(lVar4 + 0x178) != 0)) && (DAT_14c76152c == '\x01')))) {
    bVar1 = *(byte *)(param_1 + 0x1fc);
    iVar3 = *(int *)(*(longlong *)(lVar4 + 0x178) + 0x3e4);
    if (iVar3 < 0) {
      iVar3 = FUN_141348de4();
    }
    if (iVar3 < (int)(uint)bVar1) goto LAB_1417bd20b;
  }
  if (((int)(uint)*(byte *)(param_1 + 0x1fc) <= DAT_14cb0cbf8) &&
     (cVar2 = FUN_140041326(param_1), cVar2 != '\0')) {
    lVar4 = *(longlong *)(param_1 + 0xb0);
    if (lVar4 == 0) {
      lVar4 = FUN_1448abda6(param_1);
    }
    (**(code **)(**(longlong **)(lVar4 + 0x218) + 0x128))(*(longlong **)(lVar4 + 0x218),param_1);
  }
LAB_1417bd20b:
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xfd;
  return;
}



// FUNCTION 1417bd294 FUN_1417bd294 body=49 status=ok
// SIG undefined FUN_1417bd294(void)

longlong FUN_1417bd294(void)

{
  if (DAT_14cad11e0 == 0) {
    FUN_14073dd9a(&DAT_14cad11e0,&PTR_LAB_14a8419e0);
  }
  return DAT_14cad11e0;
}



// FUNCTION 1417bd2c5 FUN_1417bd2c5 body=49 status=ok
// SIG undefined FUN_1417bd2c5(void)

longlong FUN_1417bd2c5(void)

{
  if (DAT_14cad1640 == 0) {
    FUN_14073dd9a(&DAT_14cad1640,&PTR_LAB_14a84ce80);
  }
  return DAT_14cad1640;
}



// FUNCTION 1417bd2f6 FUN_1417bd2f6 body=1170 status=ok
// SIG undefined FUN_1417bd2f6(void)

undefined8 * FUN_1417bd2f6(longlong param_1)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  byte bVar11;
  undefined8 *puVar12;
  float *pfVar13;
  byte bVar14;
  int iVar15;
  float fVar16;
  undefined4 uVar17;
  double dVar18;
  
  puVar12 = (undefined8 *)FUN_14001cc68(0x350,0x10);
  FUN_140bff1a4(puVar12,param_1);
  *puVar12 = &PTR_FUN_14a85fb50;
  *(undefined4 *)(puVar12 + 0x53) = *(undefined4 *)(param_1 + 0x400);
  *(byte *)((longlong)puVar12 + 0x29c) = *(byte *)(param_1 + 0x404) & 1;
  uVar6 = *(uint *)(param_1 + 0x444);
  *(byte *)((longlong)puVar12 + 0x29d) = (byte)uVar6 & 1;
  *(undefined4 *)(puVar12 + 0x54) = *(undefined4 *)(param_1 + 0x408);
  *(undefined4 *)((longlong)puVar12 + 0x2a4) = *(undefined4 *)(param_1 + 0x40c);
  puVar12[0x57] = *(undefined8 *)(param_1 + 0x420);
  uVar9 = *(undefined8 *)(param_1 + 0x418);
  puVar12[0x55] = *(undefined8 *)(param_1 + 0x410);
  puVar12[0x56] = uVar9;
  uVar7 = *(uint *)(param_1 + 0x480);
  *(byte *)(puVar12 + 0x58) = (byte)uVar7 & 1;
  *(undefined1 **)((longlong)puVar12 + 0x2c4) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)puVar12 + 0x2cc) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)puVar12 + 0x2d4) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)puVar12 + 0x2dc) = &DAT_3f8000003f800000;
  iVar15 = 0;
  if (0 < *(int *)(param_1 + 0x434)) {
    iVar15 = *(int *)(param_1 + 0x434);
  }
  *(int *)(puVar12 + 0x5d) = iVar15;
  *(undefined4 *)((longlong)puVar12 + 0x2ec) = *(undefined4 *)(param_1 + 0x438);
  *(undefined4 *)(puVar12 + 0x5e) = *(undefined4 *)(param_1 + 0x43c);
  *(undefined4 *)((longlong)puVar12 + 0x2f4) = *(undefined4 *)(param_1 + 0x440);
  if (*(char *)(param_1 + 0x38c) == '\x01') {
    uVar17 = *(undefined4 *)(param_1 + 0x450);
  }
  else {
    uVar17 = 0;
  }
  *(undefined4 *)(puVar12 + 0x5f) = uVar17;
  *(undefined4 *)((longlong)puVar12 + 0x2fc) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(puVar12 + 0x60) = *(undefined4 *)(param_1 + 0x458);
  *(undefined4 *)((longlong)puVar12 + 0x304) = *(undefined4 *)(param_1 + 0x45c);
  *(undefined4 *)(puVar12 + 0x61) = *(undefined4 *)(param_1 + 0x460);
  fVar16 = *(float *)(param_1 + 0x464);
  if (1e+06 <= fVar16) {
    fVar16 = 1e+06;
  }
  if (fVar16 <= 1000.0) {
    fVar16 = 1000.0;
  }
  *(float *)((longlong)puVar12 + 0x30c) = fVar16;
  *(uint *)(puVar12 + 0x62) = uVar7 >> 1 & 7 | *(uint *)(puVar12 + 0x62) & 0xfffffff8;
  *(undefined4 *)((longlong)puVar12 + 0x314) = *(undefined4 *)(param_1 + 0x494);
  *(undefined4 *)(puVar12 + 99) = *(undefined4 *)(param_1 + 0x484);
  *(undefined4 *)((longlong)puVar12 + 0x31c) = *(undefined4 *)(param_1 + 0x488);
  *(undefined4 *)(puVar12 + 100) = *(undefined4 *)(param_1 + 0x48c);
  *(undefined4 *)((longlong)puVar12 + 0x324) = *(undefined4 *)(param_1 + 0x490);
  *(undefined4 *)(puVar12 + 0x65) = *(undefined4 *)(param_1 + 0x498);
  *(undefined4 *)((longlong)puVar12 + 0x32c) = *(undefined4 *)(param_1 + 0x49c);
  uVar9 = *(undefined8 *)(param_1 + 0x4a8);
  puVar12[0x66] = *(undefined8 *)(param_1 + 0x4a0);
  puVar12[0x67] = uVar9;
  *(uint *)(puVar12 + 0x68) = *(uint *)(puVar12 + 0x68) & 0xfffffffe | uVar7 & 1;
  dVar2 = (double)puVar12[0x55];
  dVar3 = (double)puVar12[0x56];
  dVar4 = (double)puVar12[0x57];
  dVar18 = dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3;
  if (9.99999993922529e-09 < dVar18) {
    dVar18 = 1.0 / SQRT(dVar18);
    puVar12[0x55] = dVar2 * dVar18;
    puVar12[0x56] = dVar3 * dVar18;
    puVar12[0x57] = dVar4 * dVar18;
  }
  pfVar13 = (float *)(param_1 + 0x430);
  if (DAT_14c760e18 == '\0') {
    pfVar13 = (float *)(param_1 + 0x42c);
  }
  cVar5 = *(char *)(param_1 + 0x1fb);
  if (cVar5 == '\x02') {
    pfVar13 = (float *)(param_1 + 0x42c);
  }
  fVar16 = *pfVar13;
  *(float *)((longlong)puVar12 + 0x2e4) = fVar16;
  iVar15 = *(int *)(param_1 + 0x448);
  if ((iVar15 != 0) && (100.0 < *(float *)(param_1 + 0x44c) - fVar16)) {
    *(float *)((longlong)puVar12 + 0x204) = *(float *)(param_1 + 0x44c);
    *(int *)(puVar12 + 0x41) = iVar15;
  }
  bVar10 = true;
  if ((*(longlong *)(param_1 + 0xb0) == 0) ||
     (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x218), lVar8 == 0)) {
    bVar14 = 0;
LAB_1417bd61b:
    bVar11 = 0;
    if ((cVar5 == '\x01') && (bVar11 = 0, (uVar6 & 1) == 0)) {
      bVar11 = bVar14;
    }
    bVar11 = *(byte *)((longlong)puVar12 + 0x1d3) & 0x7f | bVar11;
    if ((*(byte *)(param_1 + 0x4c0) & 1) == 0) {
      bVar14 = 0;
      goto LAB_1417bd642;
    }
    bVar14 = 0x40;
    if (bVar10) goto LAB_1417bd642;
  }
  else {
    iVar15 = *(int *)(lVar8 + 8);
    if ((&DAT_14ca814b8)[(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar15 * 2) * 0xf] != 1)
    {
      bVar14 = (iVar15 < 3) << 7;
      bVar10 = false;
      goto LAB_1417bd61b;
    }
    bVar11 = ~(byte)*(uint *)(param_1 + 0x4c0) << 7;
    bVar14 = 0;
    if (cVar5 != '\x01') {
      bVar11 = 0;
    }
    bVar11 = *(byte *)((longlong)puVar12 + 0x1d3) & 0x7f | bVar11;
    if ((*(uint *)(param_1 + 0x4c0) & 1) == 0) goto LAB_1417bd642;
  }
  bVar14 = (DAT_14c760e14 & DAT_14ca964f0 ^ 1) << 6;
LAB_1417bd642:
  *(byte *)((longlong)puVar12 + 0x1d3) = bVar11 & 0xbf | bVar14;
  bVar14 = *(byte *)(param_1 + 0x4c7);
  uVar17 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x4c5)];
  uVar1 = (&DAT_14c758c60)[*(byte *)(param_1 + 0x4c4)];
  *(undefined4 *)((longlong)puVar12 + 0x20c) = (&DAT_14c758c60)[*(byte *)(param_1 + 0x4c6)];
  *(undefined4 *)(puVar12 + 0x42) = uVar17;
  *(undefined4 *)((longlong)puVar12 + 0x214) = uVar1;
  *(float *)(puVar12 + 0x43) = (float)bVar14 * 0.003921569;
  *(undefined4 *)((longlong)puVar12 + 0x21c) = *(undefined4 *)(param_1 + 0x4c8);
  return puVar12;
}



// FUNCTION 1417bd788 FUN_1417bd788 body=49 status=ok
// SIG undefined FUN_1417bd788(void)

longlong FUN_1417bd788(void)

{
  if (DAT_14cad1940 == 0) {
    FUN_14073dd9a(&DAT_14cad1940,&PTR_LAB_14a853b70);
  }
  return DAT_14cad1940;
}



// FUNCTION 1417bd7be FUN_1417bd7be body=49 status=ok
// SIG undefined FUN_1417bd7be(void)

longlong FUN_1417bd7be(void)

{
  if (DAT_14cad1a28 == 0) {
    FUN_14073dd9a(&DAT_14cad1a28,&PTR_LAB_14a856d00);
  }
  return DAT_14cad1a28;
}



// FUNCTION 1417bd7f0 FUN_1417bd7f0 body=49 status=ok
// SIG undefined FUN_1417bd7f0(void)

void FUN_1417bd7f0(longlong param_1)

{
  FUN_1400f7f98();
  FUN_140414380(param_1 + 0x3a0,0);
  FUN_1400fb146(param_1 + 0x3f0,0);
  return;
}



// FUNCTION 1417bd82e FUN_1417bd82e body=220 status=ok
// SIG undefined FUN_1417bd82e(void)

void FUN_1417bd82e(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  FUN_14480568a(plVar1,param_1);
  *plVar1 = (longlong)&PTR_FUN_14a84e020;
  plVar1[5] = (longlong)&PTR_FUN_14a84ea30;
  plVar1[6] = (longlong)&PTR_LAB_14a84ea70;
  plVar1[0x55] = (longlong)&PTR_FUN_14a84eac0;
  plVar1[0x56] = (longlong)&PTR_FUN_14a84eb40;
  plVar1[0x57] = (longlong)&PTR_FUN_14a84eb50;
  plVar1[0xc4] = 0;
  plVar1[0xc5] = 0;
  plVar1[0xc6] = 0;
  plVar1[199] = 0;
  plVar1[0xc9] = 0;
  plVar1[0xca] = 0;
  *(byte *)((longlong)plVar1 + 0x9e) = *(byte *)((longlong)plVar1 + 0x9e) | 8;
  *(byte *)((longlong)plVar1 + 0x9d) = *(byte *)((longlong)plVar1 + 0x9d) | 0x80;
  *(byte *)((longlong)plVar1 + 0x4a) = *(byte *)((longlong)plVar1 + 0x4a) | 2;
  FUN_1400ea934(plVar1,DAT_14cad0f30,1);
  *(byte *)((longlong)plVar1 + 0x2de) = *(byte *)((longlong)plVar1 + 0x2de) | 0x10;
  if ((*(byte *)((longlong)plVar1 + 0x2d3) & 8) != 0) {
    *(byte *)((longlong)plVar1 + 0x2d3) = *(byte *)((longlong)plVar1 + 0x2d3) & 0xf7;
    (**(code **)(*plVar1 + 0x958))(plVar1);
  }
  *(byte *)(plVar1 + 0xcb) = *(byte *)(plVar1 + 0xcb) | 1;
  *(undefined4 *)(plVar1 + 200) = 0x3f800000;
  *(byte *)((longlong)plVar1 + 0x2d2) = *(byte *)((longlong)plVar1 + 0x2d2) | 0x80;
  return;
}



// FUNCTION 1417bd90a FUN_1417bd90a body=330 status=ok
// SIG undefined FUN_1417bd90a(void)

undefined8 * FUN_1417bd90a(longlong param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x2d0,0x10);
  FUN_1406ff4f8(puVar4,param_1,0);
  *puVar4 = &PTR_FUN_14a84ec00;
  puVar4[0x53] = 0;
  iVar1 = *(int *)(param_1 + 0x628);
  pvVar2 = *(void **)(param_1 + 0x620);
  *(int *)(puVar4 + 0x54) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x2a4) = 0;
  }
  else {
    FUN_1479f8178(puVar4 + 0x53,iVar1);
    memcpy((void *)puVar4[0x53],pvVar2,(longlong)iVar1 * 0x50);
  }
  puVar4[0x55] = 0;
  iVar1 = *(int *)(param_1 + 0x638);
  pvVar2 = *(void **)(param_1 + 0x630);
  *(int *)(puVar4 + 0x56) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x2b4) = 0;
  }
  else {
    FUN_1479f81e2(puVar4 + 0x55,iVar1);
    memcpy((void *)puVar4[0x55],pvVar2,(longlong)iVar1 * 0x38);
  }
  puVar4[0x57] = 0;
  iVar1 = *(int *)(param_1 + 0x650);
  uVar3 = *(undefined8 *)(param_1 + 0x648);
  *(int *)(puVar4 + 0x58) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x2c4) = 0;
  }
  else {
    FUN_1479f8244(puVar4 + 0x57,iVar1);
    FUN_1479f82ad(puVar4[0x57],uVar3,iVar1);
  }
  *(byte *)((longlong)puVar4 + 0x6f) = *(byte *)((longlong)puVar4 + 0x6f) & 0x7f;
  return puVar4;
}



// FUNCTION 1417bda54 FUN_1417bda54 body=906 status=ok
// SIG undefined FUN_1417bda54(void)

double * FUN_1417bda54(longlong param_1,double *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  longlong lVar4;
  double *pdVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  double *pdVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  if ((*(byte *)(param_1 + 0x658) & 1) == 0) {
    if (((*(longlong *)(param_1 + 0xb0) == 0) && (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)) &&
       (*(longlong *)(param_1 + 0xb0) == 0)) {
      FUN_1448abda6(param_1);
    }
    param_2[2] = DAT_14c8464f0;
    dVar13 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = dVar13;
    param_2[3] = 4398046511104.0;
    param_2[4] = 4398046511104.0;
    param_2[5] = 4398046511104.0;
    dVar13 = 7617640011283.166;
  }
  else {
    bVar10 = (longlong)*(int *)(param_1 + 0x628) == 0;
    if (bVar10) {
      bVar3 = false;
      dVar18 = 0.0;
      dVar13 = 0.0;
      uVar11 = 0;
      uVar12 = 0;
      dVar15 = 0.0;
      dVar17 = 0.0;
      dVar16 = 0.0;
    }
    else {
      bVar3 = true;
      dVar16 = 0.0;
      dVar17 = 0.0;
      dVar15 = 0.0;
      uVar11 = 0;
      uVar12 = 0;
      dVar13 = 0.0;
      dVar18 = 0.0;
      pdVar5 = (double *)(*(longlong *)(param_1 + 0x620) + 0x10);
      do {
        dVar14 = pdVar5[-2];
        if (bVar3) {
          dVar13 = pdVar5[-1];
          dVar16 = *pdVar5;
          uVar11 = SUB84(dVar16,0);
          uVar12 = (int)((ulonglong)dVar16 >> 0x20);
          dVar15 = dVar14;
          dVar17 = dVar13;
          dVar18 = dVar14;
        }
        else {
          if (dVar14 <= dVar15) {
            dVar15 = dVar14;
          }
          dVar1 = pdVar5[-1];
          dVar2 = *pdVar5;
          if (dVar1 <= dVar17) {
            dVar17 = dVar1;
          }
          if (dVar2 <= dVar16) {
            dVar16 = dVar2;
          }
          if (dVar18 <= dVar14) {
            dVar18 = dVar14;
          }
          if (dVar13 <= dVar1) {
            dVar13 = dVar1;
          }
          if ((double)CONCAT44(uVar12,uVar11) <= dVar2) {
            uVar11 = SUB84(dVar2,0);
            uVar12 = (int)((ulonglong)dVar2 >> 0x20);
          }
        }
        dVar14 = pdVar5[1];
        dVar1 = pdVar5[2];
        if (dVar14 <= dVar15) {
          dVar15 = dVar14;
        }
        if (dVar1 <= dVar17) {
          dVar17 = dVar1;
        }
        dVar2 = pdVar5[3];
        if (dVar2 <= dVar16) {
          dVar16 = dVar2;
        }
        if (dVar18 <= dVar14) {
          dVar18 = dVar14;
        }
        if (dVar13 <= dVar1) {
          dVar13 = dVar1;
        }
        if ((double)CONCAT44(uVar12,uVar11) <= dVar2) {
          uVar11 = SUB84(dVar2,0);
          uVar12 = (int)((ulonglong)dVar2 >> 0x20);
        }
        pdVar9 = pdVar5 + 8;
        bVar3 = false;
        pdVar5 = pdVar5 + 10;
      } while (pdVar9 != (double *)
                         ((longlong)*(int *)(param_1 + 0x628) * 0x50 +
                         *(longlong *)(param_1 + 0x620)));
      bVar3 = true;
    }
    if ((longlong)*(int *)(param_1 + 0x638) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x630);
      lVar8 = 0;
      do {
        dVar14 = *(double *)(lVar4 + lVar8);
        if (bVar10) {
          dVar13 = *(double *)(lVar4 + 8 + lVar8);
          dVar16 = *(double *)(lVar4 + 0x10 + lVar8);
          uVar11 = SUB84(dVar16,0);
          uVar12 = (int)((ulonglong)dVar16 >> 0x20);
          dVar15 = dVar14;
          dVar17 = dVar13;
          dVar18 = dVar14;
        }
        else {
          if (dVar14 <= dVar15) {
            dVar15 = dVar14;
          }
          dVar1 = *(double *)(lVar4 + 8 + lVar8);
          dVar2 = *(double *)(lVar4 + 0x10 + lVar8);
          if (dVar1 <= dVar17) {
            dVar17 = dVar1;
          }
          if (dVar2 <= dVar16) {
            dVar16 = dVar2;
          }
          if (dVar18 <= dVar14) {
            dVar18 = dVar14;
          }
          if (dVar13 <= dVar1) {
            dVar13 = dVar1;
          }
          if ((double)CONCAT44(uVar12,uVar11) <= dVar2) {
            uVar11 = SUB84(dVar2,0);
            uVar12 = (int)((ulonglong)dVar2 >> 0x20);
          }
        }
        lVar8 = lVar8 + 0x38;
        bVar10 = false;
      } while ((longlong)*(int *)(param_1 + 0x638) * 0x38 - lVar8 != 0);
      bVar3 = true;
    }
    if ((longlong)*(int *)(param_1 + 0x650) == 0) {
      uVar19 = SUB84(dVar18,0);
      uVar20 = (undefined4)((ulonglong)dVar18 >> 0x20);
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x648);
      plVar7 = plVar6 + (longlong)*(int *)(param_1 + 0x650) * 6;
      do {
        if ((longlong)(int)plVar6[1] == 0) {
          uVar19 = SUB84(dVar18,0);
          uVar20 = (undefined4)((ulonglong)dVar18 >> 0x20);
        }
        else {
          lVar4 = *plVar6;
          lVar8 = 0;
          dVar14 = dVar15;
          do {
            dVar15 = *(double *)(lVar4 + lVar8);
            uVar19 = SUB84(dVar15,0);
            uVar20 = (undefined4)((ulonglong)dVar15 >> 0x20);
            if (bVar3) {
              if (dVar15 <= dVar14) {
                dVar14 = dVar15;
              }
              dVar1 = *(double *)(lVar4 + 8 + lVar8);
              dVar2 = *(double *)(lVar4 + 0x10 + lVar8);
              if (dVar1 <= dVar17) {
                dVar17 = dVar1;
              }
              if (dVar2 <= dVar16) {
                dVar16 = dVar2;
              }
              if (dVar18 <= dVar15) {
                dVar18 = dVar15;
              }
              if (dVar13 <= dVar1) {
                dVar13 = dVar1;
              }
              if ((double)CONCAT44(uVar12,uVar11) <= dVar2) {
                uVar11 = SUB84(dVar2,0);
                uVar12 = (int)((ulonglong)dVar2 >> 0x20);
              }
              uVar19 = SUB84(dVar18,0);
              uVar20 = (undefined4)((ulonglong)dVar18 >> 0x20);
              dVar15 = dVar14;
            }
            else {
              dVar13 = *(double *)(lVar4 + 8 + lVar8);
              dVar16 = *(double *)(lVar4 + 0x10 + lVar8);
              uVar11 = SUB84(dVar16,0);
              uVar12 = (undefined4)((ulonglong)dVar16 >> 0x20);
              dVar17 = dVar13;
              dVar18 = dVar15;
            }
            lVar8 = lVar8 + 0x18;
            bVar3 = true;
            dVar14 = dVar15;
          } while ((longlong)(int)plVar6[1] * 0x18 != lVar8);
        }
        plVar6 = plVar6 + 6;
        dVar18 = (double)CONCAT44(uVar20,uVar19);
      } while (plVar6 != plVar7);
    }
    if (bVar3) {
      dVar18 = ((double)CONCAT44(uVar12,uVar11) - dVar16) * 0.5;
      dVar14 = (dVar13 - dVar17) * 0.5;
      dVar13 = ((double)CONCAT44(uVar20,uVar19) - dVar15) * 0.5;
      *param_2 = dVar15 + dVar13;
      param_2[1] = dVar17 + dVar14;
      param_2[2] = dVar16 + dVar18;
      param_2[3] = dVar13;
      param_2[4] = dVar14;
      param_2[5] = dVar18;
      dVar13 = SQRT(dVar18 * dVar18 + dVar13 * dVar13 + dVar14 * dVar14);
    }
    else {
      dVar16 = *(double *)(param_3 + 0x28);
      dVar13 = *(double *)(param_3 + 0x30);
      *param_2 = *(double *)(param_3 + 0x20);
      param_2[1] = dVar16;
      param_2[2] = dVar13;
      param_2[3] = 1.0;
      param_2[4] = 1.0;
      param_2[5] = 1.0;
      dVar13 = 1.0;
    }
  }
  param_2[6] = dVar13;
  return param_2;
}



// FUNCTION 1417bddde FUN_1417bddde body=137 status=ok
// SIG undefined FUN_1417bddde(void)

void FUN_1417bddde(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ead26(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a84f680;
  puVar1[5] = &PTR_FUN_14a84fc60;
  puVar1[6] = &PTR_LAB_14a84fca0;
  puVar1[0x55] = &DAT_3f8000003f800000;
  puVar1[0x56] = 0x447a0000;
  *(undefined4 *)(puVar1 + 0x57) = 0x3e4ccccd;
  *(undefined1 **)((longlong)puVar1 + 700) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)puVar1 + 0x2c4) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)puVar1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2d4) = 0x3f80000000000000;
  *(undefined4 *)((longlong)puVar1 + 0x2dc) = 0;
  puVar1[0x5c] = 0;
  *(undefined1 *)((longlong)puVar1 + 0x1fb) = 2;
  return;
}



// FUNCTION 1417bde68 FUN_1417bde68 body=51 status=ok
// SIG undefined FUN_1417bde68(void)

void FUN_1417bde68(longlong param_1,longlong param_2)

{
  FUN_140982318();
  if (*(int *)(param_2 + 0x40) < 0x154) {
    *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_1 + 0x408);
  }
  return;
}



// FUNCTION 1417bdea0 FUN_1417bdea0 body=52 status=ok
// SIG undefined FUN_1417bdea0(void)

undefined8 FUN_1417bdea0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x618))();
  if (-1 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001417bdec9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x610))(param_1,iVar1,*(code **)(*param_1 + 0x610));
    return uVar2;
  }
  return 0;
}



// FUNCTION 1417bded4 FUN_1417bded4 body=60 status=ok
// SIG undefined FUN_1417bded4(void)

void FUN_1417bded4(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x618))();
  if (-1 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001417bdf05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x638))(param_1,iVar1,param_3,*(code **)(*param_1 + 0x638));
    return;
  }
  return;
}



// FUNCTION 1417bdf10 FUN_1417bdf10 body=104 status=ok
// SIG undefined FUN_1417bdf10(void)

void FUN_1417bdf10(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if ((param_2 != param_3) && (iVar1 = (**(code **)(*param_1 + 0x7b0))(), 0 < iVar1)) {
    iVar1 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x610))(param_1,iVar1);
      if (lVar3 == param_2) {
        (**(code **)(*param_1 + 0x638))(param_1,iVar1,param_3);
      }
      iVar1 = iVar1 + 1;
      iVar2 = (**(code **)(*param_1 + 0x7b0))(param_1);
    } while (iVar1 < iVar2);
  }
  return;
}



// FUNCTION 1417bdf78 FUN_1417bdf78 body=826 status=ok
// SIG undefined FUN_1417bdf78(void)

undefined8 FUN_1417bdf78(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  int local_dc;
  undefined4 *local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  longlong local_b8 [3];
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  int iStack_88;
  int iStack_84;
  undefined1 local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar4 = (**(code **)(*param_1 + 0x7b0))();
  if (0 < iVar4) {
    iVar4 = 0;
    do {
      local_dc = iVar4;
      plVar7 = (longlong *)(**(code **)(*param_1 + 0x610))(param_1,iVar4);
      if (plVar7 != (longlong *)0x0) {
        local_b8[2] = 0;
        uStack_a0 = 0;
        local_b8[0] = 0;
        local_b8[1] = 0;
        (**(code **)(*plVar7 + 0x370))(plVar7,1,local_b8 + 2,local_b8);
        lVar2 = local_b8[2];
        if ((longlong)(int)uStack_a0 != 0) {
          lVar12 = 0;
LAB_1417be024:
          if (*(longlong *)(local_b8[2] + lVar12) != param_2) goto code_r0x0001417be02b;
          local_90 = plVar7[3];
          FUN_1400021e4(&local_90);
          iVar4 = (int)local_c8;
          iVar5 = ((int)local_c8 == 0) + 8;
          local_90 = local_d0;
          local_d0 = 0;
          iStack_88 = (int)local_c8;
          iVar6 = local_c8._4_4_;
          iStack_84 = local_c8._4_4_;
          local_c8 = 0;
          iVar11 = iVar5 + iVar4;
          if (iVar11 < iVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar5);
          }
          if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar11);
          }
          local_d8 = param_3;
          if (iVar6 < iVar11) {
            FUN_1446f8c06(&local_90);
          }
          FUN_1400020e8(&local_90,L"_Dynamic",8);
          iVar4 = iStack_88 + -1;
          if (iStack_88 == 0) {
            iVar4 = 0;
          }
          FUN_1446f82e2(&local_98,iVar4,local_90,1);
          uVar9 = local_98;
          if (local_90 != 0) {
            FUN_1400020a8();
          }
          if (local_d0 != 0) {
            FUN_1400020a8();
          }
          plVar8 = (longlong *)(**(code **)(*param_1 + 0x678))(param_1,local_dc,0,uVar9);
          if ((plVar7 != plVar8) && (iVar4 = (**(code **)(*param_1 + 0x7b0))(param_1), 0 < iVar4)) {
            iVar4 = 0;
            do {
              plVar10 = (longlong *)(**(code **)(*param_1 + 0x610))(param_1,iVar4);
              if (plVar10 == plVar7) {
                (**(code **)(*param_1 + 0x638))(param_1,iVar4,plVar8);
              }
              iVar4 = iVar4 + 1;
              iVar6 = (**(code **)(*param_1 + 0x7b0))(param_1);
            } while (iVar4 < iVar6);
          }
          param_3 = local_d8;
          if (plVar8 == (longlong *)0x0) goto LAB_1417be23d;
          local_70 = 0xff;
          local_68 = 0xffffffff;
          local_64 = 0;
          local_d0 = *(ulonglong *)(lVar2 + lVar12) & 0xffffffff;
          local_c8 = CONCAT44(*(undefined4 *)(lVar2 + 0xc + lVar12),
                              (int)(*(ulonglong *)(lVar2 + lVar12) >> 0x20));
          local_c0 = *(undefined1 *)(lVar2 + 8 + lVar12);
          local_e8 = 3;
          cVar3 = (**(code **)(*plVar8 + 0x3c0))(plVar8,1,&local_d0,&local_90);
          param_3 = local_d8;
          if (cVar3 == '\0') goto LAB_1417be23d;
          *local_d8 = (undefined4)local_90;
          local_d8[1] = local_90._4_4_;
          local_d8[2] = iStack_88;
          local_d8[3] = iStack_84;
          bVar1 = false;
          goto LAB_1417be1bf;
        }
LAB_1417be23d:
        bVar1 = true;
LAB_1417be1bf:
        if (local_b8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_b8[2] != 0) {
          FUN_1400020a8();
        }
        uVar9 = 1;
        if (!bVar1) goto LAB_1417be1e4;
      }
      iVar4 = local_dc + 1;
      iVar6 = (**(code **)(*param_1 + 0x7b0))(param_1);
    } while (iVar4 < iVar6);
  }
  uVar9 = 0;
LAB_1417be1e4:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
code_r0x0001417be02b:
  lVar12 = lVar12 + 0x10;
  if ((longlong)(int)uStack_a0 * 0x10 == lVar12) goto LAB_1417be23d;
  goto LAB_1417be024;
}



// FUNCTION 1417be2b4 FUN_1417be2b4 body=363 status=ok
// SIG undefined FUN_1417be2b4(void)

void FUN_1417be2b4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0xa8);
    if (lVar1 == 0) goto LAB_1417be346;
    if (DAT_14caf64b8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b4754c;
      local_48 = &LAB_147c45ce0;
      local_50 = &LAB_1463f1ff4;
      local_58 = &DAT_149e063b2;
      local_60 = 0x4000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) !=
        DAT_14caf64b8 + 0x30)) goto LAB_1417be346;
  }
  FUN_14048e05c(param_1,param_2);
  if (*(longlong *)(param_1 + 0x110) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0xa8);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
  }
  *(longlong *)(param_1 + 0x1d8) = lVar1;
LAB_1417be346:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417be420 FUN_1417be420 body=131 status=ok
// SIG undefined FUN_1417be420(void)

void FUN_1417be420(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1408f38e8(puVar1,param_1);
  puVar1[0x82] = 0x400000003f800000;
  *(undefined1 *)(puVar1 + 0x83) = 0;
  puVar1[0x84] = 0;
  *(undefined1 *)(puVar1 + 0x80) = 0;
  puVar1[0x81] = 0x447a000044800000;
  *(undefined4 *)((longlong)puVar1 + 0x404) = 0;
  *puVar1 = &PTR_FUN_14a85b4d0;
  puVar1[5] = &PTR_LAB_14a85bb30;
  puVar1[6] = &PTR_LAB_14a85bb70;
  puVar1[0x86] = 0;
  *(undefined4 *)(puVar1 + 0x87) = 0;
  return;
}



// FUNCTION 1417be4a4 FUN_1417be4a4 body=130 status=ok
// SIG undefined FUN_1417be4a4(void)

undefined8 FUN_1417be4a4(longlong param_1)

{
  undefined8 uVar1;
  
  if (((DAT_14c760db4 < 2) && (*(char *)(param_1 + 0x1fb) == '\x02')) &&
     ((DAT_14ca964f0 != '\x01' || ((DAT_14c760e14 & 1) == 0)))) {
    if (DAT_14c760e10 < 1) {
      return 0;
    }
  }
  else if (((*DAT_14cad1fb8 == 0) && (*(char *)(param_1 + 0x1fb) == '\0')) &&
          (*(longlong *)(param_1 + 0xa8) != 0)) {
    return 0;
  }
  uVar1 = FUN_14001cc68(0x2d0,0x10);
  FUN_140b4c7f4(uVar1,param_1);
  return uVar1;
}



// FUNCTION 1417be526 FUN_1417be526 body=207 status=ok
// SIG undefined FUN_1417be526(void)

byte FUN_1417be526(longlong param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  if (((((DAT_14c76152c == '\x01') && (*(char *)(param_1 + 0x1fc) != '\0')) &&
       ((lVar4 = *(longlong *)(param_1 + 0xb0), lVar4 != 0 ||
        (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)))) &&
      (((*(byte *)(lVar4 + 0x152) == 1 || (*(byte *)(lVar4 + 0x152) - 5 < 2)) &&
       (*(longlong *)(lVar4 + 0x178) != 0)))) && (DAT_14c76152c == '\x01')) {
    bVar1 = *(byte *)(param_1 + 0x1fc);
    iVar3 = *(int *)(*(longlong *)(lVar4 + 0x178) + 0x3e4);
    if (iVar3 < 0) {
      iVar3 = FUN_141348de4();
    }
    if (iVar3 < (int)(uint)bVar1) {
      return 0;
    }
  }
  if (DAT_14cb0cbf8 < (int)(uint)*(byte *)(param_1 + 0x1fc)) {
    return 0;
  }
  cVar2 = FUN_140041326(param_1);
  if (cVar2 == '\0') {
    if ((*(byte *)(param_1 + 0x2dc) & 0x40) != 0) {
      return 1;
    }
    if ((*(byte *)(param_1 + 0x2d6) & 0x10) == 0) {
      return (*(byte *)(param_1 + 0x2df) & 2) >> 1;
    }
    return 1;
  }
  return 1;
}



// FUNCTION 1417be5f6 FUN_1417be5f6 body=55 status=ok
// SIG undefined FUN_1417be5f6(void)

void FUN_1417be5f6(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x9c);
  bVar2 = (**(code **)(*param_1 + 0x358))();
  if ((bVar1 & 8) >> 3 == bVar2) {
    return;
  }
  FUN_1406cc378(param_1);
  return;
}



// FUNCTION 1417be62e FUN_1417be62e body=35 status=ok
// SIG undefined FUN_1417be62e(void)

void FUN_1417be62e(longlong param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x2d6) & 2) == 0) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x2d6) = *(byte *)(param_1 + 0x2d6) & 0xfd | param_2 * '\x02';
  FUN_1448215fa();
  return;
}



// FUNCTION 1417be652 FUN_1417be652 body=89 status=ok
// SIG undefined FUN_1417be652(void)

void FUN_1417be652(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 800);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 800) = param_2;
    if ((uint)(*(int *)(param_1 + 0x324) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14011d10e();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 800) = param_2, param_3 == '\x01')) {
      FUN_1479af1f0();
      return;
    }
  }
  return;
}



// FUNCTION 1417be6f0 FUN_1417be6f0 body=40 status=ok
// SIG undefined FUN_1417be6f0(void)

undefined8 FUN_1417be6f0(undefined8 param_1,int param_2)

{
  FUN_14006e79a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417be726 FUN_1417be726 body=40 status=ok
// SIG undefined FUN_1417be726(void)

undefined8 FUN_1417be726(undefined8 param_1,int param_2)

{
  FUN_14006e79a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417be74e FUN_1417be74e body=117 status=ok
// SIG undefined FUN_1417be74e(void)

undefined8 * FUN_1417be74e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a84cec0;
  param_1[5] = &PTR_LAB_14a84d520;
  param_1[6] = &PTR_LAB_14a84d560;
  puVar2 = (undefined8 *)param_1[0x7e];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_1401c051c(param_1 + 0x74);
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417be7c4 FUN_1417be7c4 body=168 status=ok
// SIG undefined FUN_1417be7c4(void)

longlong * FUN_1417be7c4(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x8d4);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_140041326(param_1 + -0x2a8);
    uVar1 = *(uint *)(param_1 + 0x8d4);
  }
  *(undefined1 *)((longlong)param_2 + 0x14) = uVar3;
  uVar3 = 1;
  if (((uVar1 & 2) == 0) && (lVar2 = *(longlong *)(param_1 + -0x188), lVar2 != 0)) {
    lVar4 = FUN_140e2e6d8();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      uVar3 = 0;
    }
  }
  *(undefined1 *)((longlong)param_2 + 0x15) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(param_1 + 0x8cc);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x8d0);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x8c8);
  *param_2 = param_1 + 8;
  return param_2;
}



// FUNCTION 1417be86c FUN_1417be86c body=29 status=ok
// SIG undefined FUN_1417be86c(void)

undefined8 FUN_1417be86c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417be8a6 FUN_1417be8a6 body=29 status=ok
// SIG undefined FUN_1417be8a6(void)

undefined8 FUN_1417be8a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417be8c4 FUN_1417be8c4 body=101 status=ok
// SIG undefined FUN_1417be8c4(void)

void FUN_1417be8c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a8614c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1417be92a FUN_1417be92a body=268 status=ok
// SIG undefined FUN_1417be92a(void)

void FUN_1417be92a(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar4;
  
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
    uVar5 = lVar4 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1417bea36 FUN_1417bea36 body=327 status=ok
// SIG undefined FUN_1417bea36(void)

void FUN_1417bea36(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else if (param_2 < 9) {
    iVar7 = 8;
  }
  else {
    uVar5 = (longlong)(int)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417beaa9;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
LAB_1417beaa9:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if ((int)param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (iVar7 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar7;
  FUN_140717da4(param_1,*(undefined4 *)(param_1 + 0x48));
  return;
}



// FUNCTION 1417beb7e FUN_1417beb7e body=438 status=ok
// SIG undefined FUN_1417beb7e(void)

void FUN_1417beb7e(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1403a682c;
      local_60 = 0;
      local_68 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_20;
  local_48 = (undefined4)local_30;
  uStack_44 = local_30._4_4_;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  (**(code **)(*param_1 + 0x578))(param_1);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417bed74 FUN_1417bed74 body=217 status=ok
// SIG undefined FUN_1417bed74(void)

void FUN_1417bed74(longlong *param_1,void *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_148 [40];
  undefined1 local_120 [256];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  param_1[0x27] = DAT_14c8464f0;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x25] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x26] = lVar1;
  param_1[0x58] = DAT_14c8464f0;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x56] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x57] = lVar1;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x43) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar4;
  param_1[0x45] = DAT_14c8464f0;
  (**(code **)(*param_1 + 0x4d0))();
  (**(code **)(*param_1 + 0x4b0))(param_1,0);
  memcpy(local_120,param_2,0x100);
  FUN_1447cd2ec(param_1 + 0x3a,local_120);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417bee4e FUN_1417bee4e body=83 status=ok
// SIG undefined FUN_1417bee4e(void)

ulonglong FUN_1417bee4e(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 unaff_RSI;
  float fVar2;
  
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(byte *)(param_1 + 0x30) & 0x10) == 0) {
    fVar2 = (float)(**(code **)(*param_1 + 0x478))();
    if ((fVar2 == 0.0) && (!NAN(fVar2))) {
      if ((char)param_1[0x30] < '\0') {
        uVar1 = FUN_144729dda((longlong)param_1 + 0x1e4);
        return uVar1;
      }
      uVar1 = 0;
    }
  }
  return uVar1 & 0xffffffff;
}



// FUNCTION 1417beea1 FUN_1417beea1 body=213 status=ok
// SIG undefined FUN_1417beea1(void)

void FUN_1417beea1(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1408f38e8(puVar1,param_1);
  puVar1[0x82] = 0x400000003f800000;
  *(undefined1 *)(puVar1 + 0x83) = 0;
  puVar1[0x84] = 0;
  *(undefined1 *)(puVar1 + 0x80) = 0;
  puVar1[0x81] = 0x447a000044800000;
  *(undefined4 *)((longlong)puVar1 + 0x404) = 0;
  *puVar1 = &PTR_FUN_14a864910;
  puVar1[5] = &PTR_FUN_14a864f70;
  puVar1[6] = &PTR_LAB_14a864fb0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar1[0x89] = puVar2;
  puVar1[0x85] = 0x4280000042800000;
  puVar1[0x88] = 0;
  puVar1[0x86] = 0x41a0000042b00000;
  *(undefined4 *)(puVar1 + 0x87) = 0;
  return;
}



// FUNCTION 1417bef76 FUN_1417bef76 body=335 status=ok
// SIG undefined FUN_1417bef76(void)

undefined8 * FUN_1417bef76(longlong param_1)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2e0,0x10);
  FUN_140bff1a4(puVar1,param_1);
  *(undefined4 *)(puVar1 + 0x54) = *(undefined4 *)(param_1 + 0x2f4);
  *(undefined4 *)((longlong)puVar1 + 0x2a4) = *(undefined4 *)(param_1 + 0x2f8);
  *(undefined4 *)(puVar1 + 0x55) = *(undefined4 *)(param_1 + 0x404);
  fVar3 = *(float *)(param_1 + 0x40c);
  *(float *)(puVar1 + 0x53) = fVar3;
  fVar2 = 1e-05;
  if (1e-05 <= fVar3) {
    fVar2 = fVar3;
  }
  *(float *)((longlong)puVar1 + 0x29c) = 1.0 / fVar2;
  *puVar1 = &PTR_FUN_14a865030;
  *(undefined4 *)(puVar1 + 0x56) = *(undefined4 *)(param_1 + 0x428);
  *(undefined4 *)((longlong)puVar1 + 0x2b4) = *(undefined4 *)(param_1 + 0x42c);
  fVar3 = *(float *)(param_1 + 0x430);
  if (88.0 <= fVar3) {
    fVar3 = 88.0;
  }
  fVar2 = 0.0;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(float *)(puVar1 + 0x57) = fVar3;
  fVar3 = 0.1;
  if (0.1 <= *(float *)(param_1 + 0x434)) {
    fVar3 = *(float *)(param_1 + 0x434);
  }
  *(float *)((longlong)puVar1 + 700) = fVar3;
  puVar1[0x58] = *(undefined8 *)(param_1 + 0x448);
  puVar1[0x59] = *(undefined8 *)(param_1 + 0x440);
  fVar3 = *(float *)(param_1 + 0x438);
  if (0.0 < fVar3) {
    if (89.0 <= fVar3) {
      fVar3 = 89.0;
    }
    fVar2 = tanf((fVar3 * 3.1415927) / 180.0);
  }
  *(float *)((longlong)puVar1 + 0x2d4) = fVar2;
  *(undefined4 *)(puVar1 + 0x5a) = 0xffffffff;
  return puVar1;
}



// FUNCTION 1417bf0c6 FUN_1417bf0c6 body=107 status=ok
// SIG undefined FUN_1417bf0c6(void)

float FUN_1417bf0c6(longlong param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_14029dc74();
  cVar1 = *(char *)(param_1 + 0x400);
  if (cVar1 == '\x01') {
    fVar3 = 10000.0;
  }
  else if (cVar1 == '\x03') {
    fVar3 = (float)exp2f(fVar2);
    fVar3 = fVar3 * 10000.0;
  }
  else if (cVar1 == '\x02') {
    fVar3 = 3183.0989;
  }
  else {
    fVar3 = 16.0;
  }
  return fVar2 * fVar3;
}



// FUNCTION 1417bf132 FUN_1417bf132 body=26 status=ok
// SIG undefined FUN_1417bf132(void)

void FUN_1417bf132(undefined8 param_1)

{
  FUN_1401a0912();
  FUN_140de3754(param_1);
  return;
}



// FUNCTION 1417bf14c FUN_1417bf14c body=331 status=ok
// SIG undefined FUN_1417bf14c(void)

void FUN_1417bf14c(ulonglong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 0x370);
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x368) + lVar5 * 8) + 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
        iVar2 = *(int *)(param_1 + 0x370);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar2);
  }
  if ((param_1 == 0) || (-1 < *(char *)(param_1 + 0xb8))) {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_14cad01a8);
  if (DAT_14cad0160 != DAT_14cad018c) {
    uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar4 = &DAT_14cad0190;
    if (DAT_14cad0198 != (undefined *)0x0) {
      puVar4 = DAT_14cad0198;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(DAT_14cad01a0 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    while (iVar2 != -1) {
      lVar5 = DAT_14cad0158 + (longlong)iVar2 * 0x20;
      if (*(ulonglong *)(DAT_14cad0158 + (longlong)iVar2 * 0x20) == param_1) {
        if (((lVar5 != 0) && (lVar5 != -8)) && ((longlong)*(int *)(lVar5 + 0x10) != 0)) {
          lVar6 = *(longlong *)(lVar5 + 8);
          lVar5 = (longlong)*(int *)(lVar5 + 0x10) << 5;
          do {
            (**(code **)(*param_2 + 0x88))(param_2,lVar6,0,0);
            lVar6 = lVar6 + 0x20;
            lVar5 = lVar5 + -0x20;
          } while (lVar5 != 0);
        }
        break;
      }
      iVar2 = *(int *)(lVar5 + 0x18);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001417bf27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14cad01a8);
  return;
}



// FUNCTION 1417bf298 FUN_1417bf298 body=2494 status=ok
// SIG undefined FUN_1417bf298(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417bf298(longlong *param_1,double *param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 extraout_EAX;
  int iVar5;
  double dVar6;
  double *pdVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  undefined1 local_2b0;
  undefined1 local_2a8 [16];
  double local_298;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e0;
  
  dVar6 = (double)(DAT_14c707940 ^ (ulonglong)auStack_2d8);
  dVar21 = (double)param_1[0x33];
  uVar11 = param_1[0x34];
  uVar42 = (undefined4)uVar11;
  uVar43 = (undefined4)(uVar11 >> 0x20);
  dVar25 = (double)param_1[0x35];
  auVar16 = *(undefined1 (*) [16])(param_1 + 0x36);
  dVar35 = auVar16._0_8_;
  dVar37 = auVar16._8_8_;
  dVar38 = (double)param_1[0x38];
  pdVar7 = (double *)param_1[0x46];
  plVar10 = param_1;
  local_e0 = dVar6;
  if (pdVar7 == (double *)0x0) {
    plVar10 = (longlong *)&DAT_00000040;
    pdVar7 = (double *)FUN_14001cc68(0x40,0x10);
    dVar6 = DAT_14c8463d8;
    *pdVar7 = DAT_14c8463d0;
    pdVar7[1] = dVar6;
    dVar6 = DAT_14c8463e8;
    pdVar7[2] = DAT_14c8463e0;
    pdVar7[3] = dVar6;
    dVar6 = DAT_14c846500;
    pdVar7[4] = DAT_14c8464f8;
    pdVar7[5] = dVar6;
    dVar6 = DAT_14c846508;
    pdVar7[6] = DAT_14c846508;
    param_1[0x46] = (longlong)pdVar7;
  }
  auVar23 = _DAT_1499387d0;
  uVar8 = SUB84(plVar10,0);
  uVar4 = SUB84(dVar6,0);
  if ((((pdVar7[4] == dVar35) && (!NAN(pdVar7[4]) && !NAN(dVar35))) && (pdVar7[5] == dVar37)) &&
     (!NAN(pdVar7[5]) && !NAN(dVar37))) {
    if ((pdVar7[6] == dVar38) && (!NAN(pdVar7[6]) && !NAN(dVar38))) {
      dVar37 = *pdVar7;
      dVar6 = pdVar7[1];
      dVar38 = pdVar7[2];
      dVar35 = pdVar7[3];
      goto LAB_1417bf587;
    }
  }
  auVar29._8_8_ = 0;
  auVar29._0_8_ = dVar38;
  dVar6 = (double)DAT_1499387d0;
  dVar12 = DAT_1499387d0._8_8_;
  auVar16 = divpd(auVar16,_DAT_1499387d0);
  auVar22 = divpd(auVar29,_DAT_1499387d0);
  auVar16 = roundpd(auVar16,auVar16,3);
  auVar22 = roundpd(auVar22,auVar22,3);
  auVar39._0_8_ = dVar35 - auVar16._0_8_ * dVar6;
  auVar39._8_8_ = dVar37 - auVar16._8_8_ * dVar12;
  auVar30._0_8_ = dVar38 - auVar22._0_8_ * dVar6;
  auVar30._8_8_ = 0.0 - auVar22._8_8_ * dVar12;
  auVar36._0_8_ = auVar39._0_8_ + dVar6;
  auVar36._8_8_ = auVar39._8_8_ + dVar12;
  auVar26._0_8_ = auVar30._0_8_ + dVar6;
  auVar26._8_8_ = auVar30._8_8_ + dVar12;
  auVar22._8_8_ = -(ulonglong)(0.0 <= auVar39._8_8_);
  auVar22._0_8_ = -(ulonglong)(0.0 <= auVar39._0_8_);
  auVar22 = blendvpd(auVar36,auVar39,auVar22);
  auVar32._8_8_ = -(ulonglong)(0.0 <= auVar30._8_8_);
  auVar32._0_8_ = -(ulonglong)(0.0 <= auVar30._0_8_);
  auVar16 = blendvpd(auVar26,auVar30,auVar32);
  auVar31._0_8_ = auVar22._0_8_ + -360.0;
  auVar31._8_8_ = auVar22._8_8_ + -360.0;
  auVar34._0_8_ = auVar16._0_8_ + -360.0;
  auVar34._8_8_ = auVar16._8_8_ + 0.0;
  auVar17._8_8_ = -(ulonglong)(180.0 < auVar22._8_8_);
  auVar17._0_8_ = -(ulonglong)(180.0 < auVar22._0_8_);
  auVar22 = blendvpd(auVar22,auVar31,auVar17);
  auVar18._8_8_ = -(ulonglong)(180.0 < auVar16._8_8_);
  auVar18._0_8_ = -(ulonglong)(180.0 < auVar16._0_8_);
  auVar16 = blendvpd(auVar16,auVar34,auVar18);
  *(undefined1 (*) [16])(pdVar7 + 4) = auVar22;
  dVar38 = auVar16._0_8_;
  pdVar7[6] = dVar38;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = dVar38;
  auVar16 = divpd(auVar22,auVar23);
  auVar23 = divpd(auVar40,auVar23);
  auVar16 = roundpd(auVar16,auVar16,3);
  auVar23 = roundpd(auVar23,auVar23,3);
  dVar35 = (auVar22._0_8_ - auVar16._0_8_ * dVar6) * 0.008726646259971648;
  dVar37 = (auVar22._8_8_ - auVar16._8_8_ * dVar12) * 0.008726646259971648;
  dVar38 = (dVar38 - auVar23._0_8_ * dVar6) * 0.008726646259971648;
  dVar41 = (0.0 - auVar23._8_8_ * dVar12) * 0.008726646259971648;
  local_298 = sin(dVar35);
  local_2a8._8_8_ = 0;
  local_2a8._0_8_ = uVar11;
  dVar6 = sin(dVar37);
  dVar12 = sin(dVar38);
  sin(dVar41);
  dVar13 = cos(dVar35);
  dVar14 = cos(dVar37);
  dVar15 = cos(dVar38);
  cos(dVar41);
  dVar38 = -(dVar14 * local_298 * dVar12) + dVar6 * dVar13 * dVar15;
  dVar35 = dVar6 * local_298 * dVar12 + dVar14 * dVar13 * dVar15;
  dVar37 = local_298 * dVar6 * dVar15 - dVar13 * dVar14 * dVar12;
  dVar6 = -(local_298 * dVar14 * dVar15) - dVar13 * dVar6 * dVar12;
  *pdVar7 = dVar37;
  pdVar7[1] = dVar6;
  auVar16._8_4_ = SUB84(dVar35,0);
  auVar16._0_8_ = dVar38;
  auVar16._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
  *(undefined1 (*) [16])(pdVar7 + 2) = auVar16;
  uVar42 = local_2a8._0_4_;
  uVar43 = local_2a8._4_4_;
  uVar4 = extraout_EAX;
LAB_1417bf587:
  auVar23 = _DAT_149934d80;
  auVar16 = *(undefined1 (*) [16])(param_2 + 8);
  dVar12 = auVar16._0_8_;
  dVar14 = auVar16._8_8_;
  dVar13 = SUB168(*(undefined1 (*) [16])(param_2 + 10),0);
  auVar22 = minpd(auVar16,_DAT_149934d80);
  auVar32 = minpd(*(undefined1 (*) [16])(param_2 + 10),ZEXT816(0x3ff0000000000000));
  auVar27._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
  auVar27._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
  iVar5 = movmskpd(uVar4,auVar27);
  auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
  auVar33._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
  uVar9 = movmskpd(uVar8,auVar33);
  if ((uVar9 & 0x3fffffff) == 0 && iVar5 == 0) {
    dVar15 = *param_2;
    dVar41 = param_2[1];
    dVar28 = param_2[2];
    dVar1 = param_2[3];
    dVar2 = param_2[4];
    dVar3 = param_2[5];
    local_168 = dVar41 * dVar38 * -1.0 + dVar28 * dVar6 + dVar37 * dVar1 * 1.0 + dVar35 * dVar15;
    dStack_160 = dVar15 * dVar38 * 1.0 + dVar1 * dVar6 + dVar37 * dVar28 * -1.0 + dVar35 * dVar41;
    local_158._0_8_ =
         dVar1 * dVar38 * 1.0 + ((dVar37 * dVar41 * 1.0 + dVar35 * dVar28) - dVar6 * dVar15);
    local_158._8_8_ =
         dVar28 * dVar38 * -1.0 + ((dVar37 * dVar15 * -1.0 + dVar35 * dVar1) - dVar6 * dVar41);
    dVar1 = param_2[6] * 1.0;
    dVar15 = dVar3 * dVar37 - dVar6 * dVar2;
    dVar41 = dVar1 * dVar6 - dVar38 * dVar3;
    dVar28 = dVar2 * dVar38 - dVar37 * dVar1;
    dVar41 = dVar41 + dVar41;
    dVar28 = dVar28 + dVar28;
    dVar15 = dVar15 + dVar15;
    local_108 = dVar21 + (dVar15 * dVar6 - dVar38 * dVar28) + dVar35 * dVar41 + dVar2;
    dStack_100 = (double)CONCAT44(uVar43,uVar42) +
                 (dVar41 * dVar38 - dVar15 * dVar37) + dVar35 * dVar28 + dVar3;
    local_f8 = dVar25 + (dVar28 * dVar37 - dVar6 * dVar41) + dVar35 * dVar15 + dVar1;
    local_2a8 = auVar16;
  }
  else {
    dVar41 = dVar6 + dVar6;
    dVar28 = dVar38 + dVar38;
    dVar15 = dVar37 * (dVar37 + dVar37);
    dStack_1c0 = DAT_149934d80._8_8_ - (dVar38 * dVar28 + dVar15);
    local_198 = 1.0 - (dVar15 + dVar6 * dVar41);
    dVar15 = (dVar37 + dVar37) * dVar35;
    local_1b8 = dVar28 * dVar6 + dVar15;
    local_1c8 = dVar41 * dVar37 - dVar28 * dVar35;
    dVar15 = dVar28 * dVar6 - dVar15;
    local_1d8 = dVar37 * dVar28 - dVar41 * dVar35;
    local_1e8._8_8_ = dVar41 * dVar37 + dVar28 * dVar35;
    local_1e8._0_8_ = (double)DAT_149934d80 - (dVar38 * dVar28 + dVar6 * dVar41);
    uStack_1d0 = 0;
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar15,0);
    local_1a8._0_8_ = dVar41 * dVar35 + dVar37 * dVar28;
    local_1a8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    uStack_190 = 0;
    local_188._8_4_ = uVar42;
    local_188._0_8_ = dVar21;
    local_188._12_4_ = uVar43;
    uStack_170 = 0x3ff0000000000000;
    dVar38 = *param_2;
    dVar35 = param_2[1];
    dVar21 = param_2[2];
    dVar37 = dVar35 + dVar35;
    dVar6 = dVar21 + dVar21;
    dVar15 = dVar38 * (dVar38 + dVar38);
    local_268 = ((double)DAT_149934d80 - (dVar21 * dVar6 + dVar35 * dVar37)) * dVar12;
    dStack_240 = (DAT_149934d80._8_8_ - (dVar21 * dVar6 + dVar15)) * dVar14;
    local_218 = (1.0 - (dVar15 + dVar35 * dVar37)) * dVar13;
    dVar21 = param_2[3];
    dVar15 = dVar6 * dVar21;
    dVar41 = (dVar38 + dVar38) * param_2[3];
    dVar21 = dVar37 * dVar21;
    dStack_260 = (dVar37 * dVar38 + dVar15) * dVar12;
    local_238 = (dVar6 * dVar35 + dVar41) * dVar14;
    local_228 = (dVar21 + *param_2 * dVar6) * dVar13;
    local_248 = (dVar37 * dVar38 - dVar15) * dVar14;
    dStack_220 = (dVar6 * dVar35 - dVar41) * dVar13;
    local_258 = (*param_2 * dVar6 - dVar21) * dVar12;
    uStack_250 = 0;
    uStack_230 = 0;
    uStack_210 = 0;
    local_208 = param_2[4];
    dStack_200 = param_2[5];
    local_1f8 = param_2[6];
    uStack_1f0 = 0x3ff0000000000000;
    local_178 = dVar25;
    FUN_1447fea8d(&local_168);
    FUN_144a1c686(&local_168,0x3e45798ee0000000);
    auVar19._8_8_ = -(ulonglong)(0.0 <= dVar14);
    auVar19._0_8_ = -(ulonglong)(0.0 <= dVar12);
    auVar16 = blendvpd(_DAT_149936790,auVar23,auVar19);
    uVar11 = -(ulonglong)(0.0 <= dVar13 * 1.0);
    dVar21 = (double)(~uVar11 & 0xbff0000000000000 | uVar11 & 0x3ff0000000000000);
    dVar25 = auVar16._0_8_;
    dStack_160 = dStack_160 * dVar25;
    local_168 = local_168 * dVar25;
    local_158._0_8_ = (double)local_158._0_8_ * dVar25;
    dVar25 = auVar16._8_8_;
    local_138 = local_138 * dVar25;
    local_140 = local_140 * dVar25;
    local_148 = dVar25 * local_148;
    local_118 = local_118 * dVar21;
    local_120 = local_120 * dVar21;
    local_128 = dVar21 * local_128;
    FUN_14481fd10(&local_288,&local_168);
    dVar21 = local_278 * local_278 + local_288 * local_288;
    dVar25 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
    auVar24._0_8_ = dVar21 + dVar25;
    auVar24._8_8_ = dVar21 + dVar25;
    auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_);
    auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_);
    auVar16 = sqrtpd(auVar24,auVar24);
    auVar16 = divpd(auVar23,auVar16);
    auVar23._0_8_ = auVar16._0_8_ * local_278;
    auVar23._8_8_ = auVar16._8_8_ * dStack_270;
    local_168 = (double)((ulonglong)(local_288 * auVar16._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_));
    dStack_160 = (double)((ulonglong)(dStack_280 * auVar16._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_));
    local_158 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar23,auVar20);
  }
  local_1e8._8_4_ = SUB84(dStack_100,0);
  local_1e8._0_8_ = local_108;
  local_1e8._12_4_ = (int)((ulonglong)dStack_100 >> 0x20);
  local_2b0 = param_5;
  local_2b8 = param_4;
  local_1d8 = local_f8;
  FUN_144927ad4(param_1,local_1e8,&local_168,param_3);
  local_158._0_8_ = dVar13 * 1.0;
  local_168 = dVar12;
  dStack_160 = dVar14;
  (**(code **)(*param_1 + 0x478))(param_1,&local_168);
  if (((ulonglong)local_e0 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417bfc58 FUN_1417bfc58 body=118 status=ok
// SIG undefined FUN_1417bfc58(void)

undefined8 FUN_1417bfc58(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x4a8))(param_1,&local_98,param_3,0);
  local_38 = local_98;
  uStack_34 = uStack_94;
  uStack_30 = uStack_90;
  uStack_2c = uStack_8c;
  local_28 = local_88;
  uStack_24 = uStack_84;
  uStack_20 = uStack_80;
  uStack_1c = uStack_7c;
  FUN_1448052ee(&local_38,param_2);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417bfccf FUN_1417bfccf body=49 status=ok
// SIG undefined FUN_1417bfccf(void)

longlong FUN_1417bfccf(void)

{
  if (DAT_14cad2860 == 0) {
    FUN_14073dd9a(&DAT_14cad2860,&PTR_FUN_14a874880);
  }
  return DAT_14cad2860;
}



// FUNCTION 1417bfd00 FUN_1417bfd00 body=636 status=ok
// SIG undefined FUN_1417bfd00(void)

void FUN_1417bfd00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  float *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2c);
            goto LAB_1417bfdea;
          }
        }
        _Src = (float *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2c,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_2c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_2c,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
LAB_1417bfdea:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(float *)(param_1 + 0xdc0) = local_2c;
  *(float *)(param_1 + 0xdcc) = local_2c * local_2c;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417bff7e FUN_1417bff7e body=649 status=ok
// SIG undefined FUN_1417bff7e(void)

void FUN_1417bff7e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  float *_Src;
  float fVar7;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2c);
            goto LAB_1417c0068;
          }
        }
        _Src = (float *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2c,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_2c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_2c,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
LAB_1417c0068:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(float *)(param_1 + 0xdc4) = local_2c;
  fVar7 = cosf(local_2c * 0.017453292);
  *(float *)(param_1 + 0xdc8) = fVar7;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c0208 FUN_1417c0208 body=50 status=ok
// SIG undefined FUN_1417c0208(void)

void FUN_1417c0208(longlong param_1)

{
  FUN_14010ed74();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    *(byte *)(param_1 + 0x4a) =
         (*(byte *)(param_1 + 0x4a) & 0xbf | *(char *)(param_1 + 0xc70) * '\x02' & 0x40U) ^ 0x40;
  }
  return;
}



// FUNCTION 1417c023a FUN_1417c023a body=65 status=ok
// SIG undefined FUN_1417c023a(void)

void FUN_1417c023a(longlong param_1,char param_2)

{
  FUN_14493be0a();
  if (((param_2 == '\0') && (*(byte **)(param_1 + 0xdb0) != (byte *)0x0)) &&
     ((**(byte **)(param_1 + 0xdb0) & 1) != 0)) {
    FUN_1405f3418(param_1 + 0xd90);
    return;
  }
  return;
}



// FUNCTION 1417c027c FUN_1417c027c body=36 status=ok
// SIG undefined FUN_1417c027c(void)

void FUN_1417c027c(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xcb0))();
  FUN_1400f8246(param_1,param_2);
  return;
}



// FUNCTION 1417c02a0 FUN_1417c02a0 body=144 status=ok
// SIG undefined FUN_1417c02a0(void)

undefined4 FUN_1417c02a0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x658);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) goto LAB_1417c02f4;
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
LAB_1417c0315:
    bVar1 = DAT_14c950c29 & plVar3 != (longlong *)0x0;
  }
  else {
    if (DAT_14c950c29 == 0) goto LAB_1417c02be;
LAB_1417c02f4:
    FUN_1456cec3c(plVar3);
    plVar3 = *(longlong **)(param_1 + 0x658);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x660);
      goto LAB_1417c0315;
    }
    bVar1 = DAT_14c950c29 & 1;
  }
  if (bVar1 != 0) {
    FUN_1456cec3c(plVar3);
  }
LAB_1417c02be:
  lVar2 = (**(code **)(*plVar3 + 0x310))(plVar3);
  return *(undefined4 *)(lVar2 + 0x28);
}



// FUNCTION 1417c0330 FUN_1417c0330 body=921 status=ok
// SIG undefined FUN_1417c0330(void)

void FUN_1417c0330(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1448ed74c();
  lVar3 = *(longlong *)(param_1 + 0x658);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar3 != 0) != 0) goto LAB_1417c0623;
    if (lVar3 != 0) goto LAB_1417c036f;
LAB_1417c03f6:
    if (((((*(int *)(param_1 + 0x66c) != 0) && (uVar2 = *(uint *)(param_1 + 0x668), -1 < (int)uVar2)
          ) && (((int)uVar2 < DAT_14c9647dc &&
                ((plVar4 = (longlong *)
                           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                 plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x66c))))))) &&
        ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && (lVar3 = *plVar4, lVar3 != 0)) {
      lVar5 = FUN_144a74fb4();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        lVar3 = *(longlong *)(lVar3 + 0xae8);
        goto LAB_1417c03c5;
      }
    }
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_1417c0623:
      FUN_1456cec3c(lVar3);
    }
LAB_1417c036f:
    if (DAT_14cb06da8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464003b0;
      local_58 = &LAB_147d17bdf;
      local_60 = &LAB_1417edf22;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if (((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) ||
       (*(longlong *)(param_1 + 0xae8) == 0)) goto LAB_1417c03f6;
    FUN_1405f5e52(*(longlong *)(param_1 + 0xae8),param_1);
    iVar1 = *(int *)(param_1 + 0xb80);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0xb78);
      lVar5 = 0;
      do {
        FUN_1405f5e52(*(undefined8 *)(lVar3 + lVar5),param_1);
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    lVar3 = *(longlong *)(param_1 + 0xaf8);
LAB_1417c03c5:
    if (lVar3 != 0) {
      FUN_1405f5e52(lVar3,param_1);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x658);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar3 != 0) != 0) goto LAB_1417c0630;
    if (lVar3 == 0) goto LAB_1417c049d;
  }
  else if (DAT_14c950c29 == 1) {
LAB_1417c0630:
    FUN_1456cec3c(lVar3);
  }
  if (DAT_14cb06da8 == 0) {
    local_50 = &local_30;
    local_30 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_1464003b0;
    local_58 = &LAB_147d17bdf;
    local_60 = &LAB_1417edf22;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000000;
    local_80 = 8;
    local_88 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if (((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) &&
     (*(int *)(param_1 + 0xf04) < *(int *)(param_1 + 0xed8))) {
    FUN_144a81888(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
LAB_1417c049d:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417c06ee FUN_1417c06ee body=231 status=ok
// SIG undefined FUN_1417c06ee(void)

undefined8 * FUN_1417c06ee(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_2 = 0;
  uVar1 = FUN_144909502(param_1,param_3);
  if ((int)uVar1 < 1) {
    return param_2;
  }
  plVar4 = *(longlong **)(param_1 + 0x658);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar4 != (longlong *)0x0) != 0) goto LAB_1417c07a0;
  }
  else if (DAT_14c950c29 == 1) {
LAB_1417c07a0:
    FUN_1456cec3c(plVar4);
  }
  lVar2 = (**(code **)(*plVar4 + 0x310))(plVar4);
  plVar4 = *(longlong **)(param_1 + 0x658);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar4 != (longlong *)0x0) == 0) goto LAB_1417c074d;
  }
  else if (DAT_14c950c29 != 1) goto LAB_1417c074d;
  FUN_1456cec3c(plVar4);
LAB_1417c074d:
  lVar3 = (**(code **)(*plVar4 + 0x310))(plVar4);
  if ((int)uVar1 < *(int *)(lVar3 + 0x28)) {
    lVar3 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x20) + 8 + (ulonglong)uVar1 * 0xc);
  }
  else {
    lVar3 = -1;
  }
  *param_2 = *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + lVar3 * 0xc);
  return param_2;
}



// FUNCTION 1417c07d6 FUN_1417c07d6 body=3174 status=ok
// SIG undefined FUN_1417c07d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1417c07d6(longlong param_1,double *param_2,longlong param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  double *pdVar16;
  double *pdVar17;
  double *pdVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_3f8 [32];
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8 [4];
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  int local_2ec;
  double local_2e8 [2];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168 [4];
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  auVar26 = _DAT_149934d80;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  pdVar17 = (double *)(param_1 + 0x240);
  pdVar16 = pdVar17;
  pdVar18 = local_2e8;
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *pdVar18 = *pdVar16;
    pdVar16 = pdVar16 + 1;
    pdVar18 = pdVar18 + 1;
  }
  if (param_3 == 0) {
LAB_1417c0a09:
    if (param_4 != 2) {
      if ((param_4 != 1) || (*(longlong *)(param_1 + 0xa8) == 0)) {
        pdVar17 = local_2e8;
        goto LAB_1417c0a23;
      }
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8);
      pdVar17 = (double *)&DAT_14c846480;
      if (lVar14 != 0) {
        pdVar17 = (double *)(lVar14 + 0x240);
      }
    }
LAB_1417c13f3:
    FUN_1449437a2(local_2e8,param_2,pdVar17);
  }
  else {
    local_358 = 0.0;
    dStack_350 = 0.0;
    local_348 = 0.0;
    dStack_340 = 1.0;
    local_338 = 0.0;
    dStack_330 = 0.0;
    local_328 = 0.0;
    dStack_320 = 0.0;
    dVar35 = (double)DAT_149934d80;
    dVar33 = DAT_149934d80._8_8_;
    local_318 = _DAT_149934d80;
    local_308 = 1.0;
    dStack_300 = 0.0;
    lVar14 = FUN_1400848ec(param_1,param_3,&local_358,&local_2ec);
    if (lVar14 == 0) {
      plVar10 = *(longlong **)(param_1 + 0x658);
      if (plVar10 == (longlong *)0x0) {
        plVar10 = *(longlong **)(param_1 + 0x660);
        if ((DAT_14c950c29 & plVar10 != (longlong *)0x0) != 0) goto LAB_1417c1365;
        if (plVar10 == (longlong *)0x0) goto LAB_1417c0a09;
LAB_1417c0d93:
        if ((DAT_14c950c29 & plVar10 != (longlong *)0x0) != 0) {
LAB_1417c1430:
          FUN_1456cec3c(plVar10);
        }
      }
      else if (DAT_14c950c29 != 0) {
LAB_1417c1365:
        FUN_1456cec3c(plVar10);
        plVar10 = *(longlong **)(param_1 + 0x658);
        if (plVar10 == (longlong *)0x0) {
          plVar10 = *(longlong **)(param_1 + 0x660);
          goto LAB_1417c0d93;
        }
        if ((DAT_14c950c29 & 1) == 0) goto LAB_1417c090b;
        goto LAB_1417c1430;
      }
LAB_1417c090b:
      if (*(code **)(*plVar10 + 0x310) == (code *)&LAB_144992730) {
        plVar10 = plVar10 + 0x61;
      }
      else {
        plVar10 = (longlong *)(**(code **)(*plVar10 + 0x310))(plVar10);
      }
      if ((int)plVar10[0x13] != *(int *)((longlong)plVar10 + 0xc4)) {
        uVar13 = (uint)((ulonglong)param_3 >> 0x10);
        uVar11 = (uint)param_3 & 0xffff;
        plVar9 = plVar10 + 0x19;
        if ((longlong *)plVar10[0x1a] != (longlong *)0x0) {
          plVar9 = (longlong *)plVar10[0x1a];
        }
        iVar8 = *(int *)((longlong)plVar9 +
                        (ulonglong)
                        ((int)plVar10[0x1b] - 1U &
                        (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar11) +
                        (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar11 >> 4)) * 4);
        if (iVar8 != -1) {
LAB_1417c0999:
          plVar9 = (longlong *)(plVar10[0x12] + (longlong)iVar8 * 0x14);
          if (*plVar9 != param_3) goto code_r0x0001417c09a9;
          if (((plVar9 != (longlong *)0x0) && (plVar9 + 1 != (longlong *)0x0)) &&
             (iVar8 = (int)plVar9[1], iVar8 != -1)) {
            if ((*(byte *)(param_1 + 0x9c) & 1) == 0) {
              pdVar16 = (double *)&DAT_14c846480;
              pdVar18 = local_168;
              for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
                *pdVar18 = *pdVar16;
                pdVar16 = pdVar16 + 1;
                pdVar18 = pdVar18 + 1;
              }
            }
            else {
              FUN_140084aae(param_1,local_168,iVar8,pdVar17);
            }
            pdVar16 = local_168;
            pdVar18 = local_2e8;
            for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
              *pdVar18 = *pdVar16;
              pdVar16 = pdVar16 + 1;
              pdVar18 = pdVar18 + 1;
            }
            if (param_4 != 3) goto LAB_1417c0a09;
            FUN_1417c06ee(param_1,&local_1e8,param_3);
            iVar8 = FUN_144909502(param_1,local_1e8);
            if (iVar8 != -1) {
              if ((*(byte *)(param_1 + 0x9c) & 1) == 0) {
                pdVar17 = (double *)&DAT_14c846480;
                pdVar16 = local_168;
                for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
                  *pdVar16 = *pdVar17;
                  pdVar17 = pdVar17 + 1;
                  pdVar16 = pdVar16 + 1;
                }
              }
              else {
                FUN_140084aae(param_1,local_168,iVar8,pdVar17);
              }
              pdVar17 = local_168;
            }
            goto LAB_1417c13f3;
          }
        }
      }
      goto LAB_1417c0a09;
    }
    if (param_4 != 3) {
      if (local_2ec != -1) {
        if ((*(byte *)(param_1 + 0x9c) & 1) == 0) {
          pdVar16 = (double *)&DAT_14c846480;
          pdVar18 = local_3b8;
          for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
            *pdVar18 = *pdVar16;
            pdVar16 = pdVar16 + 1;
            pdVar18 = pdVar18 + 1;
          }
          uVar12 = 0;
        }
        else {
          lVar15 = param_1;
          lVar14 = FUN_140084aae(param_1,local_3b8,local_2ec,pdVar17);
          uVar12 = (undefined4)lVar15;
        }
        dVar6 = dStack_300;
        dVar7 = local_308;
        dVar1 = local_378._0_8_;
        dVar4 = local_378._8_8_;
        dVar2 = local_368._0_8_;
        dVar3 = local_318._0_8_;
        dVar5 = local_318._8_8_;
        auVar25._8_8_ = dStack_300;
        auVar25._0_8_ = local_308;
        auVar23 = minpd(local_318,local_378);
        auVar25 = minpd(auVar25,local_368);
        auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
        auVar24._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
        iVar8 = movmskpd((int)lVar14,auVar24);
        auVar23._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
        auVar23._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
        uVar13 = movmskpd(uVar12,auVar23);
        if ((uVar13 & 0x3fffffff) == 0 && iVar8 == 0) {
          local_2e8[0] = dStack_350 * local_3b8[2] * -1.0 +
                         local_348 * local_3b8[1] +
                         dStack_340 * local_3b8[0] * 1.0 + local_358 * local_3b8[3];
          local_2e8[1] = local_358 * local_3b8[2] * 1.0 +
                         dStack_340 * local_3b8[1] +
                         local_348 * local_3b8[0] * -1.0 + dStack_350 * local_3b8[3];
          local_2d8._0_8_ =
               dStack_340 * local_3b8[2] * 1.0 +
               ((local_3b8[0] * dStack_350 * 1.0 + local_348 * local_3b8[3]) -
               local_358 * local_3b8[1]);
          local_2d8._8_8_ =
               local_348 * local_3b8[2] * -1.0 +
               ((local_3b8[0] * local_358 * -1.0 + dStack_340 * local_3b8[3]) -
               dStack_350 * local_3b8[1]);
          dVar28 = local_338 * dVar1;
          dVar29 = dStack_330 * dVar4;
          dVar30 = local_328 * dVar2;
          dVar31 = dStack_320 * local_368._8_8_;
          dVar35 = dVar29 * local_3b8[0] - local_3b8[1] * dVar28;
          dVar33 = dVar30 * local_3b8[1] - local_3b8[2] * dVar29;
          dVar32 = dVar28 * local_3b8[2] - local_3b8[0] * dVar30;
          dVar34 = dVar31 * local_3b8[3] - local_3b8[3] * dVar31;
          dVar33 = dVar33 + dVar33;
          dVar32 = dVar32 + dVar32;
          dVar35 = dVar35 + dVar35;
          dVar34 = dVar34 + dVar34;
          local_108 = (dVar35 * local_3b8[1] - local_3b8[2] * dVar32) +
                      local_3b8[3] * dVar33 + dVar28 + local_398;
          dStack_100 = (dVar33 * local_3b8[2] - dVar35 * local_3b8[0]) +
                       local_3b8[3] * dVar32 + dVar29 + dStack_390;
          local_f8 = (dVar32 * local_3b8[0] - local_3b8[1] * dVar33) +
                     local_3b8[3] * dVar35 + dVar30 + local_388;
          dStack_380 = (dVar34 * local_3b8[3] - dVar34 * local_3b8[3]) +
                       local_3b8[3] * dVar34 + dVar31 + dStack_380;
        }
        else {
          dVar31 = local_3b8[1] + local_3b8[1];
          dVar32 = local_3b8[2] + local_3b8[2];
          dVar30 = local_3b8[0] * (local_3b8[0] + local_3b8[0]);
          local_198 = (1.0 - (dVar30 + local_3b8[1] * dVar31)) * dVar2;
          dVar28 = (local_3b8[0] + local_3b8[0]) * local_3b8[3];
          local_1a8 = (dVar31 * local_3b8[3] + local_3b8[0] * dVar32) * dVar2;
          dVar29 = dVar2 * local_308;
          dStack_1a0 = (dVar32 * local_3b8[1] - dVar28) * dVar2;
          local_1e8 = (dVar35 - (local_3b8[2] * dVar32 + local_3b8[1] * dVar31)) * dVar1;
          dVar30 = (dVar33 - (local_3b8[2] * dVar32 + dVar30)) * dVar4;
          dStack_1e0 = (dVar31 * local_3b8[0] + dVar32 * local_3b8[3]) * dVar1;
          local_1b8 = (dVar32 * local_3b8[1] + dVar28) * dVar4;
          local_1d8 = (local_3b8[0] * dVar32 - dVar31 * local_3b8[3]) * dVar1;
          uStack_1d0 = 0;
          local_1c8._8_4_ = SUB84(dVar30,0);
          local_1c8._0_8_ = (dVar31 * local_3b8[0] - dVar32 * local_3b8[3]) * dVar4;
          local_1c8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
          uStack_1b0 = 0;
          uStack_190 = 0;
          local_188 = local_398;
          dStack_180 = dStack_390;
          local_178 = local_388;
          uStack_170 = 0x3ff0000000000000;
          dVar30 = dStack_350 + dStack_350;
          dVar32 = local_348 + local_348;
          dVar31 = local_358 * (local_358 + local_358);
          local_218 = (1.0 - (dVar31 + dStack_350 * dVar30)) * local_308;
          dVar28 = (local_358 + local_358) * dStack_340;
          local_228 = (dVar30 * dStack_340 + local_358 * dVar32) * local_308;
          local_248 = (dVar30 * local_358 - dVar32 * dStack_340) * dVar5;
          dStack_220 = (dVar32 * dStack_350 - dVar28) * local_308;
          local_268 = (dVar35 - (local_348 * dVar32 + dStack_350 * dVar30)) * dVar3;
          dStack_240 = (dVar33 - (local_348 * dVar32 + dVar31)) * dVar5;
          dStack_260 = (dVar30 * local_358 + dVar32 * dStack_340) * dVar3;
          local_238 = (dVar32 * dStack_350 + dVar28) * dVar5;
          local_258 = (local_358 * dVar32 - dVar30 * dStack_340) * dVar3;
          uStack_250 = 0;
          uStack_230 = 0;
          uStack_210 = 0;
          local_208 = local_338;
          dStack_200 = dStack_330;
          local_1f8 = local_328;
          uStack_1f0 = 0x3ff0000000000000;
          FUN_1447fea8d(local_168);
          local_3c0 = local_168[2];
          dVar35 = local_168[2] * local_168[2] +
                   local_168[0] * local_168[0] + local_168[1] * local_168[1];
          local_3c8 = local_148;
          local_3d0 = local_138;
          dVar33 = local_138 * local_138 + local_148 * local_148 + local_140 * local_140;
          dVar32 = local_118 * local_118 + local_128 * local_128 + local_120 * local_120;
          uVar19 = -(ulonglong)(0.0 <= dVar35 + -9.99999993922529e-09);
          dVar35 = (double)(~uVar19 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar35)) & uVar19)
          ;
          uVar19 = -(ulonglong)(0.0 <= dVar33 + -9.99999993922529e-09);
          dVar33 = (double)(~uVar19 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar33)) & uVar19)
          ;
          uVar19 = -(ulonglong)(0.0 <= dVar32 + -9.99999993922529e-09);
          dVar32 = (double)(~uVar19 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar32)) & uVar19)
          ;
          local_3d8 = local_128 * dVar32;
          auVar20._8_8_ = -(ulonglong)(0.0 <= dVar4 * dVar5);
          auVar20._0_8_ = -(ulonglong)(0.0 <= dVar1 * dVar3);
          auVar25 = blendvpd(_DAT_149936790,auVar26,auVar20);
          uVar19 = -(ulonglong)(0.0 <= dVar29);
          local_128 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
          dVar28 = auVar25._0_8_;
          local_168[0] = local_168[0] * dVar35 * dVar28;
          local_168[1] = local_168[1] * dVar35 * dVar28;
          local_168[2] = dVar35 * local_168[2] * dVar28;
          dVar35 = auVar25._8_8_;
          local_138 = dVar33 * local_138 * dVar35;
          local_140 = local_140 * dVar33 * dVar35;
          local_148 = dVar35 * local_148 * dVar33;
          local_118 = dVar32 * local_118 * local_128;
          local_120 = local_120 * dVar32 * local_128;
          local_128 = local_128 * local_3d8;
          FUN_14481fd10(&local_288,local_168);
          dVar35 = local_278 * local_278 + local_288 * local_288;
          dVar33 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
          auVar22._0_8_ = dVar35 + dVar33;
          auVar22._8_8_ = dVar35 + dVar33;
          auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
          auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
          auVar25 = sqrtpd(auVar22,auVar22);
          auVar26 = divpd(auVar26,auVar25);
          auVar27._0_8_ = auVar26._0_8_ * local_278;
          auVar27._8_8_ = auVar26._8_8_ * dStack_270;
          local_2e8[0] = (double)((ulonglong)(local_288 * auVar26._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_));
          local_2e8[1] = (double)((ulonglong)(dStack_280 * auVar26._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_));
          local_2d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar27,auVar21);
          dStack_380 = 0.0;
        }
        dVar6 = dVar6 * local_368._8_8_;
        local_2c8._8_4_ = SUB84(dStack_100,0);
        local_2c8._0_8_ = local_108;
        local_2c8._12_4_ = (int)((ulonglong)dStack_100 >> 0x20);
        local_2b8._8_4_ = SUB84(dStack_380,0);
        local_2b8._0_8_ = local_f8;
        local_2b8._12_4_ = (int)((ulonglong)dStack_380 >> 0x20);
        local_2a8 = dVar3 * dVar1;
        dStack_2a0 = dVar5 * dVar4;
        local_298._8_4_ = SUB84(dVar6,0);
        local_298._0_8_ = dVar7 * dVar2;
        local_298._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      }
      goto LAB_1417c0a09;
    }
    pdVar17 = &local_358;
LAB_1417c0a23:
    pdVar16 = param_2;
    for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
      *pdVar16 = *pdVar17;
      pdVar17 = pdVar17 + 1;
      pdVar16 = pdVar16 + 1;
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
code_r0x0001417c09a9:
  iVar8 = *(int *)((longlong)plVar9 + 0xc);
  if (iVar8 == -1) goto LAB_1417c0a09;
  goto LAB_1417c0999;
}



// FUNCTION 1417c143e FUN_1417c143e body=241 status=ok
// SIG undefined FUN_1417c143e(void)

longlong FUN_1417c143e(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_2;
  if ((((param_3 == (longlong *)0x0) ||
       (lVar1 = (**(code **)(*param_3 + 0x388))(param_3), lVar1 == 0)) ||
      (lVar1 = (**(code **)(*param_3 + 0x388))(param_3), (int)param_2 < 0)) ||
     (*(int *)(lVar1 + 8) <= (int)param_2)) {
    lVar1 = (**(code **)(*param_1 + 0xa90))(param_1);
    if (((lVar1 == 0) || (lVar1 = (**(code **)(*param_1 + 0xa90))(param_1), (int)param_2 < 0)) ||
       (*(int *)(lVar1 + 8) <= (int)param_2)) {
      return 0;
    }
    plVar2 = (longlong *)(**(code **)(*param_1 + 0xa90))(param_1);
  }
  else {
    plVar2 = (longlong *)(**(code **)(*param_3 + 0x388))(param_3);
  }
  lVar1 = *(longlong *)(*plVar2 + uVar4 * 8);
  if ((int)param_2 < (int)param_1[0x10e]) {
    lVar3 = *(longlong *)(param_1[0x10d] + 0x18 + uVar4 * 0x28);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x40) == *(int *)(lVar1 + 0xec))) {
      return lVar3;
    }
    lVar3 = *(longlong *)(param_1[0x10d] + 0x20 + uVar4 * 0x28);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x40) == *(int *)(lVar1 + 0xec))) {
      return lVar3;
    }
  }
  lVar3 = lVar1 + 0x138;
  if (*(longlong *)(lVar1 + 0x2a0) != 0) {
    lVar3 = *(longlong *)(lVar1 + 0x2a0);
  }
  return lVar3;
}



// FUNCTION 1417c1530 FUN_1417c1530 body=510 status=ok
// SIG undefined FUN_1417c1530(void)

void FUN_1417c1530(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (*(longlong *)(param_1 + 0x658) == 0) {
    if ((DAT_14c950c29 & *(longlong *)(param_1 + 0x660) != 0) != 0) goto LAB_1417c1705;
    if (*(longlong *)(param_1 + 0x660) == 0) goto LAB_1417c1564;
  }
  else if (DAT_14c950c29 == 1) {
LAB_1417c1705:
    FUN_1456cec3c();
  }
  if ((*(byte *)(param_1 + 0x8a2) & 2) != 0) {
    uVar6 = FUN_144a7954a(param_1);
    FUN_147d5ec1c(uVar6,param_1);
    *(byte *)(param_1 + 0x8a2) = *(byte *)(param_1 + 0x8a2) & 0xfd;
  }
LAB_1417c1564:
  FUN_1400f7ed2(param_1);
  if (0 < *(int *)(param_1 + 0x870)) {
    lVar8 = 0;
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x868);
      lVar3 = *(longlong *)(lVar5 + 0x10 + lVar8);
      if (lVar3 != 0) {
        FUN_140414380(lVar3,&DAT_14cb00c08);
        lVar5 = *(longlong *)(param_1 + 0x868);
      }
      if (*(longlong *)(lVar5 + 0x18 + lVar8) != 0) {
        FUN_1417eb482();
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x28;
    } while (lVar7 < *(int *)(param_1 + 0x870));
  }
  FUN_1400fb146(param_1 + 0x5b0,0);
  if ((*(byte *)(param_1 + 0x89e) & 4) != 0) {
    *(byte *)(param_1 + 0x89e) = *(byte *)(param_1 + 0x89e) & 0xfb;
    lVar7 = *(longlong *)(param_1 + 0xb0);
    if (lVar7 == 0) {
      lVar7 = FUN_1448abda6(param_1);
    }
    lVar7 = FUN_140a2dd74(lVar7);
    if (lVar7 != 0) {
      FUN_140a2e418(lVar7,param_1);
    }
  }
  if (*(longlong *)(param_1 + 0x7b0) != 0) {
    *(undefined8 *)(param_1 + 0x7b0) = 0;
    plVar4 = *(longlong **)(param_1 + 0x7b8);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x7b8) = 0;
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
        }
      }
    }
  }
  lVar7 = (longlong)*(int *)(param_1 + 0x738);
  if (0 < lVar7) {
    lVar8 = lVar7 * 8;
    uVar9 = lVar7 + 1;
    do {
      lVar8 = lVar8 + -8;
      lVar7 = FUN_14479d2ce(*(longlong *)(param_1 + 0x730) + lVar8);
      if (lVar7 != 0) {
        FUN_14349212a(lVar7,0,0,0);
      }
      uVar9 = uVar9 - 1;
    } while (1 < uVar9);
  }
  return;
}



// FUNCTION 1417c172e FUN_1417c172e body=40 status=ok
// SIG undefined FUN_1417c172e(void)

undefined8 FUN_1417c172e(undefined8 param_1,int param_2)

{
  FUN_14083f1da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417c1756 FUN_1417c1756 body=29 status=ok
// SIG undefined FUN_1417c1756(void)

undefined8 FUN_1417c1756(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417c1774 FUN_1417c1774 body=315 status=ok
// SIG undefined FUN_1417c1774(void)

void FUN_1417c1774(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1417c17de;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1417c17de:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 1417c18b0 FUN_1417c18b0 body=616 status=ok
// SIG undefined FUN_1417c18b0(void)

void FUN_1417c18b0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cad2ae0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cad2ae0,0,0,4);
  }
  uVar4 = DAT_14cad2ae8;
  if (DAT_14cad2ae8 != 0) {
    FUN_144a1cbf0(&DAT_14cad2ad8,0,DAT_14cad2ae8,4);
    if (0 < (int)uVar4) {
      uVar2 = 0;
      do {
        puVar6 = DAT_14cad2ae0;
        if (DAT_14cad2ae0 == (undefined *)0x0) {
          puVar6 = &DAT_14cad2ad8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cad2ae8 + 0x7fffffff & uVar2) * 4) = 0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar4 != uVar2);
    }
    local_58 = 0x100000000;
    local_50 = &DAT_14cad2ab0;
    local_48 = 0xffffffff;
    local_40 = 0;
    if (DAT_14cad2ac8 == 0) {
      uVar7 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar7 = local_58 >> 0x20;
    }
    iVar3 = (int)local_58;
    uVar4 = (uint)local_48;
    iVar5 = local_48._4_4_;
    iVar8 = local_40;
    if (local_48._4_4_ < *(int *)(local_50 + 0x18)) {
      do {
        lVar10 = DAT_14cad2aa0;
        lVar9 = (longlong)iVar5;
        uVar12 = *(ulonglong *)(DAT_14cad2aa0 + lVar9 * 0x18);
        uVar2 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
        uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
        uVar12 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)DAT_14cad2ae8 - 1U;
        iVar11 = (int)uVar12;
        *(int *)(DAT_14cad2aa0 + 0x14 + lVar9 * 0x18) = iVar11;
        puVar6 = DAT_14cad2ae0;
        if (DAT_14cad2ae0 == (undefined *)0x0) {
          puVar6 = &DAT_14cad2ad8;
        }
        *(undefined4 *)(lVar10 + 0x10 + lVar9 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cad2ae8 - 1U & uVar12) * 4);
        puVar6 = DAT_14cad2ae0;
        if (DAT_14cad2ae0 == (undefined *)0x0) {
          puVar6 = &DAT_14cad2ad8;
        }
        *(int *)(puVar6 + ((longlong)iVar11 & (longlong)(int)DAT_14cad2ae8 - 1U) * 4) = iVar5;
        uVar4 = ~(uint)uVar7 & uVar4;
        puVar6 = *(undefined **)(local_50 + 0x10);
        if (*(undefined **)(local_50 + 0x10) == (undefined *)0x0) {
          puVar6 = local_50;
        }
        iVar11 = *(int *)(local_50 + 0x18);
        lVar10 = (longlong)iVar3;
        uVar2 = *(uint *)(puVar6 + lVar10 * 4) & uVar4;
        if (uVar2 == 0) {
          iVar5 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar5 = iVar11 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar1 = iVar5;
          if (iVar5 < iVar3) {
            iVar1 = iVar3;
          }
          if (iVar5 <= iVar3) break;
          lVar9 = 0;
          while( true ) {
            iVar8 = iVar8 + 0x20;
            uVar2 = *(uint *)(puVar6 + lVar9 * 4 + lVar10 * 4 + 4);
            if (uVar2 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar1 - lVar10 == lVar9) goto LAB_1417c1ad3;
          }
          iVar3 = iVar3 + (int)lVar9 + 1;
          uVar4 = 0xffffffff;
        }
        uVar7 = (ulonglong)(-uVar2 & uVar2);
        uVar12 = uVar7 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar5 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar11);
    }
  }
LAB_1417c1ad3:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c1b1a FUN_1417c1b1a body=48 status=ok
// SIG undefined FUN_1417c1b1a(void)

void FUN_1417c1b1a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x58,8);
  }
  return;
}



// FUNCTION 1417c1b4a FUN_1417c1b4a body=49 status=ok
// SIG undefined FUN_1417c1b4a(void)

longlong FUN_1417c1b4a(void)

{
  if (DAT_14cad2d08 == 0) {
    FUN_14073dd9a(&DAT_14cad2d08,&PTR_LAB_14a87baf0);
  }
  return DAT_14cad2d08;
}



// FUNCTION 1417c1b7b FUN_1417c1b7b body=126 status=ok
// SIG undefined FUN_1417c1b7b(void)

void FUN_1417c1b7b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14076ac9c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a87d430;
  puVar1[5] = &PTR_FUN_14a87de30;
  puVar1[6] = &PTR_LAB_14a87de70;
  puVar1[0x55] = &PTR_FUN_14a87dec0;
  puVar1[0x56] = &PTR_FUN_14a87df40;
  puVar1[0x57] = &PTR_FUN_14a87df50;
  *(undefined4 *)(puVar1 + 200) = 0x42000000;
  *(undefined4 *)(puVar1 + 0xc5) = 0xffff0000;
  *(byte *)((longlong)puVar1 + 0x2de) = *(byte *)((longlong)puVar1 + 0x2de) | 0x10;
  return;
}



// FUNCTION 1417c1bf9 FUN_1417c1bf9 body=49 status=ok
// SIG undefined FUN_1417c1bf9(void)

longlong FUN_1417c1bf9(void)

{
  if (DAT_14cad2e20 == 0) {
    FUN_1409ce572(&DAT_14cad2e20,&PTR_FUN_14a87e0b0);
  }
  return DAT_14cad2e20;
}



// FUNCTION 1417c1c2a FUN_1417c1c2a body=49 status=ok
// SIG undefined FUN_1417c1c2a(void)

longlong FUN_1417c1c2a(void)

{
  if (DAT_14cad3200 == 0) {
    FUN_14073dd9a(&DAT_14cad3200,&PTR_LAB_14a888240);
  }
  return DAT_14cad3200;
}



// FUNCTION 1417c1c5c FUN_1417c1c5c body=108 status=ok
// SIG undefined FUN_1417c1c5c(void)

undefined8 FUN_1417c1c5c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  uVar1 = FUN_140753fde(param_1 + 0x668,param_3);
  FUN_140703b8c(param_1,param_2,uVar1,param_4);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c1cca FUN_1417c1cca body=590 status=ok
// SIG undefined FUN_1417c1cca(void)

double * FUN_1417c1cca(longlong param_1,double *param_2,undefined8 param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14099e1de(param_1,&local_a8,param_3,0);
  dVar10 = local_a0 * DAT_14c8462d0 - DAT_14c8462c8 * local_98;
  dVar10 = dVar10 + dVar10;
  dVar2 = local_a8 * DAT_14c8462c8 - DAT_14c8462c0 * local_a0;
  dVar2 = dVar2 + dVar2;
  dVar7 = local_98 * DAT_14c8462c0 - DAT_14c8462d0 * local_a8;
  dVar7 = dVar7 + dVar7;
  dVar1 = local_90 * dVar7 + DAT_14c8462c8;
  dVar6 = (local_a8 * dVar7 - dVar10 * local_a0) + local_90 * dVar2 + DAT_14c8462d0;
  *param_2 = (local_a0 * dVar2 - dVar7 * local_98) + dVar10 * local_90 + DAT_14c8462c0;
  param_2[1] = (local_98 * dVar10 - dVar2 * local_a8) + dVar1;
  param_2[2] = dVar6;
  if (param_4 == 1) {
    dVar7 = *param_2;
    dVar10 = param_2[1];
    dVar3 = *(double *)(param_1 + 0x240);
    dVar4 = *(double *)(param_1 + 0x248);
    dVar5 = *(double *)(param_1 + 0x250);
    dVar2 = *(double *)(param_1 + 600);
    dVar1 = *(double *)(param_1 + 600);
    dVar11 = dVar7 * dVar5 - dVar3 * dVar6;
    dVar8 = dVar10 * dVar3 - dVar7 * dVar4;
    dVar9 = dVar6 * dVar4 - dVar10 * dVar5;
    dVar9 = dVar9 + dVar9;
    dVar11 = dVar11 + dVar11;
    dVar8 = dVar8 + dVar8;
    *param_2 = (dVar8 * dVar4 - dVar11 * dVar5) + dVar2 * dVar9 + dVar7;
    param_2[1] = (dVar5 * dVar9 - dVar3 * dVar8) + dVar1 * dVar11 + dVar10;
    param_2[2] = dVar8 * dVar2 + dVar6 + (dVar11 * dVar3 - dVar9 * dVar4);
  }
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c1f20 FUN_1417c1f20 body=526 status=ok
// SIG undefined FUN_1417c1f20(void)

void FUN_1417c1f20(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  code *local_160;
  undefined4 *local_158;
  code *local_150;
  undefined4 *local_148;
  longlong local_140;
  undefined4 local_138 [2];
  longlong local_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar3 = *(longlong *)(param_1 + 0x660);
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
    lVar3 = *(longlong *)(param_1 + 0x660);
  }
  else if (lVar3 == 0) goto LAB_1417c209a;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  if (*(longlong *)(lVar3 + 0xe0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x660);
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
    }
    local_138[0] = *(undefined4 *)(lVar3 + 0x170);
    local_130 = param_1 + 0x6a8;
    local_140 = (*param_2 & 0xfffffffffffefeff) +
                (ulonglong)
                ((((uint)(*param_2 >> 0x10) & 0xffff ^
                  -(uint)(*(double *)(param_1 + 0x750) < 0.0 != *(double *)(param_1 + 0x758) < 0.0))
                 & 1) << 0x10) + 0x100;
    local_58 = 0;
    local_48 = 0x400000000;
    local_128 = 0;
    uStack_120 = 0;
    local_38 = 0;
    local_30 = 0;
    cVar1 = FUN_1447e525e(param_1);
    if (cVar1 == '\0') {
      local_158 = local_138;
      local_160 = FUN_1434a563a;
      puVar2 = &DAT_14cad33e8;
    }
    else {
      local_148 = local_138;
      local_150 = FUN_1434a563a;
      puVar2 = &DAT_14cb00c58;
    }
    local_168 = param_3;
    FUN_1448aabe4(param_1,puVar2,&local_140);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1417c209a:
  if ((local_28 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c2130 FUN_1417c2130 body=646 status=ok
// SIG undefined FUN_1417c2130(void)

void FUN_1417c2130(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_168 [32];
  double *local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1400589e6();
  *(double *)(param_1 + 0x800) = *(double *)(param_1 + 0x160) - *(double *)(param_1 + 0x178);
  *(double *)(param_1 + 0x808) = *(double *)(param_1 + 0x168) - *(double *)(param_1 + 0x180);
  *(double *)(param_1 + 0x810) = *(double *)(param_1 + 0x170) - *(double *)(param_1 + 0x188);
  *(double *)(param_1 + 0x818) = *(double *)(param_1 + 0x160) + *(double *)(param_1 + 0x178);
  *(double *)(param_1 + 0x820) = *(double *)(param_1 + 0x168) + *(double *)(param_1 + 0x180);
  *(double *)(param_1 + 0x828) = *(double *)(param_1 + 0x170) + *(double *)(param_1 + 0x188);
  *(undefined1 *)(param_1 + 0x830) = 1;
  lVar1 = *(longlong *)(param_1 + 0x660);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) goto LAB_1417c224c;
  plVar2 = *(longlong **)(lVar1 + 0x248);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2a8))(plVar2,&local_88);
    if ((((*(uint *)(plVar2 + 5) & 1) == 0) && ((*(uint *)(plVar2 + 5) & 2) != 0)) &&
       (local_58 != '\0')) {
      local_98 = (local_60 - local_78) * 0.5;
      local_a0 = (local_68 - local_80) * 0.5;
      local_a8 = (local_70 - local_88) * 0.5;
      local_b0 = local_78 + local_98;
      local_b8 = local_80 + local_a0;
      local_c0 = local_88 + local_a8;
      local_148 = &local_c0;
      local_90 = SQRT(local_98 * local_98 + local_a8 * local_a8 + local_a0 * local_a0);
      local_108 = *(undefined8 *)(lVar1 + 0x230);
      local_138 = *(undefined4 *)(lVar1 + 0x200);
      uStack_134 = *(undefined4 *)(lVar1 + 0x204);
      uStack_130 = *(undefined4 *)(lVar1 + 0x208);
      uStack_12c = *(undefined4 *)(lVar1 + 0x20c);
      local_128 = *(undefined4 *)(lVar1 + 0x210);
      uStack_124 = *(undefined4 *)(lVar1 + 0x214);
      uStack_120 = *(undefined4 *)(lVar1 + 0x218);
      uStack_11c = *(undefined4 *)(lVar1 + 0x21c);
      local_118 = *(undefined4 *)(lVar1 + 0x220);
      uStack_114 = *(undefined4 *)(lVar1 + 0x224);
      uStack_110 = *(undefined4 *)(lVar1 + 0x228);
      uStack_10c = *(undefined4 *)(lVar1 + 0x22c);
      FUN_14061eddc(param_1,&local_f8,param_1 + 0x240);
      *(undefined8 *)(param_1 + 0x830) = local_c8;
      *(undefined8 *)(param_1 + 0x820) = local_d8;
      *(undefined8 *)(param_1 + 0x828) = uStack_d0;
      *(undefined8 *)(param_1 + 0x810) = local_e8;
      *(undefined8 *)(param_1 + 0x818) = uStack_e0;
      *(undefined4 *)(param_1 + 0x800) = local_f8;
      *(undefined4 *)(param_1 + 0x804) = uStack_f4;
      *(undefined4 *)(param_1 + 0x808) = uStack_f0;
      *(undefined4 *)(param_1 + 0x80c) = uStack_ec;
    }
  }
LAB_1417c224c:
  if ((local_50 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c23b7 FUN_1417c23b7 body=49 status=ok
// SIG undefined FUN_1417c23b7(void)

longlong FUN_1417c23b7(void)

{
  if (DAT_14cad3590 == 0) {
    FUN_14073dd9a(&DAT_14cad3590,&PTR_LAB_14a88c6f0);
  }
  return DAT_14cad3590;
}



// FUNCTION 1417c23e8 FUN_1417c23e8 body=355 status=ok
// SIG undefined FUN_1417c23e8(void)

void FUN_1417c23e8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ea704(puVar1);
  *puVar1 = &PTR_FUN_14a889540;
  puVar1[5] = &PTR_FUN_14a88a040;
  puVar1[6] = &PTR_FUN_14a88a080;
  puVar1[0x55] = &PTR_FUN_14a88a0d0;
  puVar1[0x56] = &PTR_FUN_14a88a150;
  puVar1[0x57] = &PTR_FUN_14a88a160;
  puVar1[0xe3] = &PTR_FUN_14a88a190;
  memset(puVar1 + 0xe4,0,0xa8);
  *(undefined4 *)(puVar1 + 0xf9) = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x106) = 0;
  puVar1[0x107] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x7ec) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x7f4) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x7fc) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x846) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x1fb) = 0;
  FUN_1400ea934(puVar1,DAT_14cad0f30,1);
  *(byte *)((longlong)puVar1 + 0x675) = *(byte *)((longlong)puVar1 + 0x675) & 0xbf;
  *(undefined1 *)((longlong)puVar1 + 0x2e9) = 1;
  puVar1[0xfc] = 0x3ff0000000000000;
  puVar1[0xe7] = 0x4059000000000000;
  puVar1[0xe8] = 0;
  puVar1[0xe9] = 0;
  puVar1[0xea] = 0x3ff0000000000000;
  puVar1[0xeb] = 0x3ff0000000000000;
  puVar1[0xef] = 0x4059000000000000;
  puVar1[0xf0] = 0;
  puVar1[0xf1] = 0;
  puVar1[0xf4] = 0x4059000000000000;
  puVar1[0xf5] = 0;
  puVar1[0xf6] = 0;
  puVar1[0xf2] = 0x3ff0000000000000;
  puVar1[0xf3] = 0x3ff0000000000000;
  *(undefined4 *)(puVar1 + 0xfd) = 0;
  *(undefined4 *)(puVar1 + 0x108) = 0;
  *(byte *)((longlong)puVar1 + 0x845) = *(byte *)((longlong)puVar1 + 0x845) & 0xf0;
  return;
}



// FUNCTION 1417c254b FUN_1417c254b body=49 status=ok
// SIG undefined FUN_1417c254b(void)

longlong FUN_1417c254b(void)

{
  if (DAT_14cad3690 == 0) {
    FUN_14073dd9a(&DAT_14cad3690,&PTR_FUN_14a88f200);
  }
  return DAT_14cad3690;
}



// FUNCTION 1417c257c FUN_1417c257c body=148 status=ok
// SIG undefined FUN_1417c257c(void)

void FUN_1417c257c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1408f38e8(puVar1,param_1);
  puVar1[0x82] = 0x400000003f800000;
  *(undefined1 *)(puVar1 + 0x83) = 0;
  puVar1[0x84] = 0;
  *(undefined1 *)(puVar1 + 0x80) = 0;
  puVar1[0x81] = 0x447a000044800000;
  *(undefined4 *)((longlong)puVar1 + 0x404) = 0;
  puVar1[0x86] = 0;
  *(undefined4 *)(puVar1 + 0x87) = 0;
  *puVar1 = &PTR_FUN_14a88cbc0;
  puVar1[5] = &PTR_FUN_14a88d220;
  puVar1[6] = &PTR_LAB_14a88d260;
  puVar1[0x88] = 0x4230000000000000;
  return;
}



// FUNCTION 1417c2610 FUN_1417c2610 body=215 status=ok
// SIG undefined FUN_1417c2610(void)

float FUN_1417c2610(longlong param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)FUN_14029dc74();
  if ((*(byte *)(param_1 + 0x428) & 1) != 0) {
    cVar1 = *(char *)(param_1 + 0x400);
    if (cVar1 != '\x01') {
      if (cVar1 != '\x03') {
        if (cVar1 != '\x02') {
          return fVar2 * 16.0;
        }
        fVar3 = *(float *)(param_1 + 0x440);
        if (89.0 <= fVar3) {
          fVar3 = 89.0;
        }
        if (fVar3 <= 0.0) {
          fVar3 = 0.0;
        }
        fVar4 = (fVar3 * 3.1415927) / 180.0 + 0.001;
        fVar3 = (*(float *)(param_1 + 0x444) * 3.1415927) / 180.0;
        if (1.5543431 <= fVar3) {
          fVar3 = 1.5543431;
        }
        if (fVar3 <= fVar4) {
          fVar3 = fVar4;
        }
        fVar3 = cosf(fVar3);
        return fVar2 * (1591.5494 / (1.0 - fVar3));
      }
      fVar2 = (float)exp2f(fVar2);
    }
    fVar2 = fVar2 * 10000.0;
  }
  return fVar2;
}



// FUNCTION 1417c26e8 FUN_1417c26e8 body=502 status=ok
// SIG undefined FUN_1417c26e8(void)

bool FUN_1417c26e8(longlong param_1,uint param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x660) != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  else if (*(longlong *)(param_1 + 0x660) == 0) {
    lVar3 = param_3[1];
    goto LAB_1417c281c;
  }
  uVar5 = (ulonglong)param_2;
  if ((((int)param_2 < 0) || (*(int *)(param_1 + 0x628) <= (int)param_2)) ||
     (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x620) + uVar5 * 8), plVar4 == (longlong *)0x0
     )) {
    lVar3 = *(longlong *)(param_1 + 0x660);
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
      lVar3 = *(longlong *)(param_1 + 0x660);
LAB_1417c2768:
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar3 + 0x160))) &&
         (plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x158) + uVar5 * 0x30),
         plVar4 != (longlong *)0x0)) goto LAB_1417c27aa;
    }
    else if (lVar3 != 0) goto LAB_1417c2768;
    plVar4 = (longlong *)0x0;
  }
  else {
LAB_1417c27aa:
    FUN_1400337aa(plVar4);
    cVar1 = FUN_1447e525e(param_1,0);
    if ((cVar1 != '\0') && (DAT_14c761bc8 != 0)) {
      local_48 = 0;
      uStack_40 = 0;
      plVar2 = (longlong *)(**(code **)(*plVar4 + 0x360))();
      if (plVar2 != (longlong *)0x0) {
        plVar4 = plVar2;
      }
    }
  }
  *param_3 = (longlong)plVar4;
  lVar3 = *(longlong *)(param_1 + 0x660);
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if (((int)param_2 < 0) || (*(int *)(lVar3 + 0x160) <= (int)param_2)) {
    lVar3 = 0;
  }
  else {
    lVar3 = uVar5 * 0x30 + *(longlong *)(lVar3 + 0x158) + 0x18;
  }
  param_3[1] = lVar3;
  *(undefined4 *)(param_3 + 2) = 0xffff0000;
LAB_1417c281c:
  bVar6 = false;
  if ((*param_3 != 0) && (lVar3 != 0)) {
    bVar6 = (int)param_3[2] != 0;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6;
}



// FUNCTION 1417c28e0 FUN_1417c28e0 body=84 status=ok
// SIG undefined FUN_1417c28e0(void)

int FUN_1417c28e0(longlong *param_1)

{
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x758))(param_1,&local_1c,&local_20);
  if (local_1c < local_20) {
    local_1c = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c2936 FUN_1417c2936 body=157 status=ok
// SIG undefined FUN_1417c2936(void)

longlong * FUN_1417c2936(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = *(longlong *)(param_1 + 0x660);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  else if (lVar2 == 0) {
    return param_2;
  }
  if (0 < *(int *)(lVar2 + 0x160)) {
    lVar4 = 8;
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 0x158);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar3 + lVar4);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x30;
    } while (lVar5 < *(int *)(lVar2 + 0x160));
  }
  return param_2;
}



// FUNCTION 1417c29d4 FUN_1417c29d4 body=401 status=ok
// SIG undefined FUN_1417c29d4(void)

void FUN_1417c29d4(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [46];
  short local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == (longlong *)0x0) {
LAB_1417c2b4b:
    plVar4 = (longlong *)0x0;
  }
  else {
    lVar3 = (**(code **)(*param_2 + 0x2b8))(param_2);
    if ((lVar3 == 0) || ((~*(byte *)(lVar3 + 0x1c2) & 6) != 0)) goto LAB_1417c2b4b;
    cVar1 = (**(code **)(*param_2 + 0x460))(param_2);
    if (cVar1 != '\x01') goto LAB_1417c2b4b;
    iVar2 = (**(code **)(*param_2 + 0x408))(param_2);
    if (iVar2 != 1) goto LAB_1417c2b4b;
    (**(code **)(*param_2 + 0x410))(param_2,&local_2a);
    plVar4 = (longlong *)0x0;
    if (local_2a == 1) {
      plVar4 = param_2;
    }
  }
  if ((longlong *)param_1[0xe0] == plVar4) goto LAB_1417c2b2a;
  if ((plVar4 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[0xe0] = (longlong)plVar4;
    if (plVar4 != (longlong *)0x0) goto LAB_1417c2a93;
  }
  else {
    FUN_1456cec3c(plVar4);
    param_1[0xe0] = (longlong)plVar4;
LAB_1417c2a93:
    (**(code **)(*param_1 + 0x310))(param_1);
  }
  cVar1 = FUN_140c714f8(param_1);
  if (cVar1 == '\0') {
    if ((param_1[0xb5] != 0) &&
       (param_1[0xe0] == 0 ||
        (DAT_14cad2be8 == 0 || (int)param_1[0x65] == *(int *)((longlong)param_1 + 0x32c)))) {
      FUN_140f7a340(param_1[0xb5]);
    }
  }
  else if ((((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0) && (param_1[0x16] != 0)) &&
          (plVar4 = *(longlong **)(param_1[0x16] + 0x218), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x18))(plVar4,param_1);
    (**(code **)(*plVar4 + 8))(plVar4,param_1);
  }
LAB_1417c2b2a:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c2b66 FUN_1417c2b66 body=572 status=ok
// SIG undefined FUN_1417c2b66(void)

void FUN_1417c2b66(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auStack_198 [40];
  longlong local_170;
  longlong local_168;
  undefined1 local_160 [168];
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  uint7 local_88;
  undefined1 uStack_81;
  undefined1 local_80;
  uint local_7c;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*(int *)(param_1 + 0x3d0) != -1) {
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined4 *)(param_1 + 0x5f0));
    iVar1 = *(int *)(param_1 + 0x5f0);
    if ((longlong)iVar1 != 0) {
      local_168 = param_1 + 0x3c8;
      lVar3 = *(longlong *)(param_1 + 0x5e8);
      local_170 = param_1 + 0x3a0;
      lVar5 = 0;
      do {
        local_b8 = (undefined1 *)0x0;
        local_ac = 1;
        local_98 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_90 = 0xffffffff;
        _local_88 = 0xff0000ffffffff;
        local_80 = 0;
        local_7c = 0x40c00f07;
        local_78 = local_78 & 0xfc;
        local_b0 = 1;
        FUN_14470b9e0(local_160,1);
        puVar4 = local_b8;
        if (local_b8 == (undefined1 *)0x0) {
          puVar4 = local_160;
        }
        *(longlong *)(puVar4 + 0x18) = local_170;
        local_a8 = local_168;
        uStack_a0 = (**(code **)(**(longlong **)(lVar3 + 0x10 + lVar5) + 0x2f0))();
        *(undefined4 *)(puVar4 + 0x58) = *(undefined4 *)(lVar3 + lVar5);
        *(int *)(puVar4 + 0x5c) = *(int *)(lVar3 + 4 + lVar5) / 3;
        iVar2 = *(int *)(lVar3 + 8 + lVar5);
        *(int *)(puVar4 + 0x68) = iVar2;
        *(int *)(puVar4 + 0x6c) = iVar2 + *(int *)(lVar3 + 0xc + lVar5) + -1;
        local_7c = local_7c & 0xfff03f3f | (*(byte *)(param_1 + 0x6b) & 1) << 6;
        local_88 = (uint7)(uint6)local_88;
        (**(code **)(*param_2 + 0x18))(param_2,local_160,0x3f800000);
        puVar4 = local_b8;
        if (local_b8 == (undefined1 *)0x0) {
          puVar4 = local_160;
        }
        FUN_1446fc26f(puVar4,local_b0);
        if (local_b8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        lVar5 = lVar5 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar5);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c2da4 FUN_1417c2da4 body=57 status=ok
// SIG undefined FUN_1417c2da4(void)

void FUN_1417c2da4(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x630);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_144769b64(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 1417c2ddd FUN_1417c2ddd body=49 status=ok
// SIG undefined FUN_1417c2ddd(void)

longlong FUN_1417c2ddd(void)

{
  if (DAT_14cad3890 == 0) {
    FUN_14073dd9a(&DAT_14cad3890,&PTR_LAB_14a892630);
  }
  return DAT_14cad3890;
}



// FUNCTION 1417c2e0e FUN_1417c2e0e body=49 status=ok
// SIG undefined FUN_1417c2e0e(void)

longlong FUN_1417c2e0e(void)

{
  if (DAT_14cad3ae8 == 0) {
    FUN_14073dd9a(&DAT_14cad3ae8,&PTR_LAB_14a896e80);
  }
  return DAT_14cad3ae8;
}



// FUNCTION 1417c2e40 FUN_1417c2e40 body=40 status=ok
// SIG undefined FUN_1417c2e40(void)

undefined8 FUN_1417c2e40(undefined8 param_1,int param_2)

{
  FUN_14006e5d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417c2e68 FUN_1417c2e68 body=185 status=ok
// SIG undefined FUN_1417c2e68(void)

undefined8 * FUN_1417c2e68(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a8883d0;
  param_1[5] = &PTR_LAB_14a888e20;
  param_1[6] = &PTR_LAB_14a888e60;
  param_1[0x55] = &PTR_LAB_14a888eb0;
  param_1[0x56] = &PTR_LAB_14a888f30;
  param_1[0x57] = &PTR_LAB_14a888f40;
  if (param_1[0xcd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xca] != 0) {
    FUN_1400020a8();
  }
  if (param_1[199] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417c2f22 FUN_1417c2f22 body=40 status=ok
// SIG undefined FUN_1417c2f22(void)

undefined8 FUN_1417c2f22(undefined8 param_1,int param_2)

{
  FUN_14006e248();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417c2f4a FUN_1417c2f4a body=40 status=ok
// SIG undefined FUN_1417c2f4a(void)

undefined8 FUN_1417c2f4a(undefined8 param_1,int param_2)

{
  FUN_14006e248();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417c2f72 FUN_1417c2f72 body=503 status=ok
// SIG undefined FUN_1417c2f72(void)

longlong FUN_1417c2f72(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  longlong *plVar5;
  
  FUN_144725486(param_1 + 800);
  FUN_144725486(param_1 + 0x298);
  FUN_144725486(param_1 + 0x2a8);
  FUN_144725486(param_1 + 0x2c0);
  FUN_144725486(param_1 + 0x360);
  FUN_144725486(param_1 + 0x3a0);
  FUN_144725486(param_1 + 0x3c8);
  FUN_14052082e(param_1 + 0x658);
  FUN_140064c53(*(undefined8 *)(param_1 + 0x708),*(undefined4 *)(param_1 + 0x710));
  if (*(longlong *)(param_1 + 0x708) != 0) {
    FUN_1400020a8();
  }
  FUN_140137a98(param_1 + 0x658);
  if (*(longlong **)(param_1 + 0x630) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x630) + 0x10))();
  }
  plVar5 = *(longlong **)(param_1 + 0x628);
  if (plVar5 != (longlong *)0x0) {
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
  if (*(longlong *)(param_1 + 0x5e8) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x3c8) = &PTR_FUN_14a1ca480;
  if (*(longlong *)(param_1 + 0x5d8) != 0) {
    LOCK();
    puVar3 = (uint *)(*(longlong *)(param_1 + 0x5d8) + 8);
    uVar4 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x5d0) != 0) {
    LOCK();
    puVar3 = (uint *)(*(longlong *)(param_1 + 0x5d0) + 8);
    uVar4 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1447259a8(param_1 + 0x3c8);
  *(undefined ***)(param_1 + 0x3a0) = &PTR_FUN_14a83cdc0;
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    FUN_1400020a8();
  }
  FUN_14003f39a(param_1 + 0x3a0);
  FUN_140296b76(param_1 + 0x360);
  FUN_140296ab8(param_1 + 800);
  FUN_140296d44(param_1 + 0x298);
  FUN_140064e2c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417c316a FUN_1417c316a body=131 status=ok
// SIG undefined FUN_1417c316a(void)

undefined8 FUN_1417c316a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1408d5aac(param_2,param_3);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    FUN_1408d5b02(param_2 + 0x18,param_3 + 0x18);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    FUN_1408d5aac(param_2 + 0x30,param_3 + 0x30);
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_3 + 0x40);
    FUN_1408d5b5a(param_2 + 0x48,param_3 + 0x48);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_3 + 0x58);
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_3 + 0x60);
    param_2 = param_2 + 0x68;
    param_3 = param_3 + 0x68;
  }
  return 1;
}



// FUNCTION 1417c31ee FUN_1417c31ee body=29 status=ok
// SIG undefined FUN_1417c31ee(void)

undefined8 FUN_1417c31ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417c3228 FUN_1417c3228 body=231 status=ok
// SIG undefined FUN_1417c3228(void)

void FUN_1417c3228(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0xa0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xa0)) {
      uVar2 = uVar1 / 0xa0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xa0,8);
  }
  return;
}



// FUNCTION 1417c3310 FUN_1417c3310 body=153 status=ok
// SIG undefined FUN_1417c3310(void)

ulonglong FUN_1417c3310(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar4 = lVar3;
  if (lVar3 == 0) {
    lVar4 = param_1;
  }
  iVar2 = *(int *)(param_1 + 0x28);
  uVar5 = (ulonglong)iVar2;
  if (uVar5 != 0) {
    lVar7 = 0;
    iVar6 = 0;
    do {
      if ((*(longlong *)(lVar4 + lVar7) == *param_2) &&
         (*(longlong *)(lVar4 + 8 + lVar7) == param_2[1])) {
        if (iVar6 != 1) {
          uVar5 = (ulonglong)(uint)-iVar6;
          goto LAB_1417c3361;
        }
        break;
      }
      iVar6 = iVar6 + -1;
      lVar7 = lVar7 + 0x10;
    } while (uVar5 << 4 != lVar7);
  }
  *(uint *)(param_1 + 0x28) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar2 + 1U) {
    FUN_140df0cf8(param_1,iVar2);
    lVar3 = *(longlong *)(param_1 + 0x20);
  }
  if (lVar3 != 0) {
    param_1 = lVar3;
  }
  lVar3 = param_2[1];
  plVar1 = (longlong *)(param_1 + uVar5 * 0x10);
  *plVar1 = *param_2;
  plVar1[1] = lVar3;
LAB_1417c3361:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1417c33a9 FUN_1417c33a9 body=49 status=ok
// SIG undefined FUN_1417c33a9(void)

longlong FUN_1417c33a9(void)

{
  if (DAT_14cad4ac0 == 0) {
    FUN_14073dd9a(&DAT_14cad4ac0,&PTR_LAB_14a8a2e58);
  }
  return DAT_14cad4ac0;
}



// FUNCTION 1417c33da FUN_1417c33da body=49 status=ok
// SIG undefined FUN_1417c33da(void)

longlong FUN_1417c33da(void)

{
  if (DAT_14cad4158 == 0) {
    FUN_14086a14e(&DAT_14cad4158,&PTR_FUN_14a89f238);
  }
  return DAT_14cad4158;
}



// FUNCTION 1417c3410 FUN_1417c3410 body=128 status=ok
// SIG undefined FUN_1417c3410(void)

void FUN_1417c3410(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c3492 FUN_1417c3492 body=127 status=ok
// SIG undefined FUN_1417c3492(void)

void FUN_1417c3492(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 == '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1417c3525 FUN_1417c3525 body=122 status=ok
// SIG undefined FUN_1417c3525(void)

void FUN_1417c3525(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140307bf4(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8a09d0;
  puVar1[0x19] = &PTR_LAB_14a8a0d90;
  puVar1[0x1a] = &PTR_LAB_14a8a0dd0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  *(undefined4 *)(puVar1 + 0x2b) = 0x100;
  *(byte *)((longlong)puVar1 + 0x15c) = *(byte *)((longlong)puVar1 + 0x15c) | 1;
  *(undefined4 *)(puVar1 + 0x2c) = 0x100;
  *(byte *)((longlong)puVar1 + 0xfe) = *(byte *)((longlong)puVar1 + 0xfe) & 0xfe;
  *(undefined2 *)((longlong)puVar1 + 0x13d) = 0x101;
  *(undefined2 *)(puVar1 + 0x1e) = 0x106;
  return;
}



// FUNCTION 1417c35aa FUN_1417c35aa body=70 status=ok
// SIG undefined FUN_1417c35aa(void)

void FUN_1417c35aa(longlong param_1)

{
  FUN_14493765a();
  if (-1 < *(int *)(param_1 + 0x134)) {
    *(undefined4 *)(param_1 + 0x130) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  FUN_1479d8eae(param_1 + 0x118,0);
  return;
}



// FUNCTION 1417c35f0 FUN_1417c35f0 body=30 status=ok
// SIG undefined FUN_1417c35f0(void)

undefined8 FUN_1417c35f0(longlong param_1,undefined8 param_2)

{
  FUN_1401b08a2(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x68));
  return param_2;
}



// FUNCTION 1417c360e FUN_1417c360e body=49 status=ok
// SIG undefined FUN_1417c360e(void)

longlong FUN_1417c360e(void)

{
  if (DAT_14cad5550 == 0) {
    FUN_14086a14e(&DAT_14cad5550,&PTR_FUN_14a8a66d8);
  }
  return DAT_14cad5550;
}



// FUNCTION 1417c363f FUN_1417c363f body=49 status=ok
// SIG undefined FUN_1417c363f(void)

longlong FUN_1417c363f(void)

{
  if (DAT_14cad5580 == 0) {
    FUN_14086a14e(&DAT_14cad5580,&PTR_FUN_14a8a6d68);
  }
  return DAT_14cad5580;
}



// FUNCTION 1417c3670 FUN_1417c3670 body=98 status=ok
// SIG undefined FUN_1417c3670(void)

undefined8 * FUN_1417c3670(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a8a09d0;
  param_1[0x19] = &PTR_LAB_14a8a0d90;
  param_1[0x1a] = &PTR_LAB_14a8a0dd0;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417c36d2 FUN_1417c36d2 body=173 status=ok
// SIG undefined FUN_1417c36d2(void)

undefined8 * FUN_1417c36d2(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149e73df0;
  lVar1 = param_1[0x17];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  *param_1 = &PTR_FUN_149e37220;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR__purecall_149e35f70;
  plVar2 = (longlong *)param_1[0xb];
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar2);
  }
  lVar1 = param_1[0xf];
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417c3780 FUN_1417c3780 body=549 status=ok
// SIG undefined FUN_1417c3780(void)

void FUN_1417c3780(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar9 = local_58 >> 0x20;
    }
    iVar5 = (int)local_58;
    uVar6 = (uint)local_48;
    iVar7 = local_48._4_4_;
    iVar10 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar12 = *param_1;
        lVar11 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar12 + lVar11 * 0x18);
        uVar14 = (longlong)(int)((uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2) &
                 (longlong)(int)param_1[9] - 1U;
        iVar13 = (int)uVar14;
        *(int *)(lVar12 + 0x14 + lVar11 * 0x18) = iVar13;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar12 + 0x10 + lVar11 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar14) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar13 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar8 = local_50;
        }
        iVar13 = (int)local_50[3];
        lVar12 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar7 = iVar13 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar11 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar11 * 4 + lVar12 * 4 + 4);
            if (uVar4 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar3 - lVar12 == lVar11) goto LAB_1417c3960;
          }
          iVar5 = iVar5 + (int)lVar11 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar14 = uVar9 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar13);
    }
  }
LAB_1417c3960:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c39a6 FUN_1417c39a6 body=361 status=ok
// SIG undefined FUN_1417c39a6(void)

void FUN_1417c39a6(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = DAT_14cad5548;
  if ((int)DAT_14cad5548 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (DAT_14cad554c == 0) {
    uVar3 = 4;
    if (4 < DAT_14cad5548) {
      uVar3 = DAT_14cad5548;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)DAT_14cad5548 * 3) >> 3) + (longlong)(int)DAT_14cad5548 +
            0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417c3a2d;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1417c3a2d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  DAT_14cad554c = (int)uVar7;
  FUN_1446f8d3c(&DAT_14cad5540,param_1,uVar7,8,8);
  return;
}



// FUNCTION 1417c3b10 FUN_1417c3b10 body=156 status=ok
// SIG undefined FUN_1417c3b10(void)

void FUN_1417c3b10(void)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_14cad5548;
  if (((((longlong)(int)(DAT_14cad554c - DAT_14cad5548) & 0x1ffffffffffff800U) != 0) ||
      ((int)(DAT_14cad5548 * 3) < DAT_14cad554c * 2)) &&
     (DAT_14cad5548 == 0 || 0x40 < (int)(DAT_14cad554c - DAT_14cad5548))) {
    if (0 < (int)DAT_14cad5548) {
      uVar1 = FUN_144a3809e(uVar1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
    if ((int)uVar1 != DAT_14cad554c) {
      DAT_14cad554c = (int)uVar1;
      FUN_1446f8d3c(&DAT_14cad5540,DAT_14cad5548,uVar1,8,8);
    }
  }
  return;
}



// FUNCTION 1417c3bac FUN_1417c3bac body=670 status=ok
// SIG undefined FUN_1417c3bac(void)

void FUN_1417c3bac(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1417c3c1f;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_1417c3c1f:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x20;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x1c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x18 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 1417c3e4a FUN_1417c3e4a body=315 status=ok
// SIG undefined FUN_1417c3e4a(void)

void FUN_1417c3e4a(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1417c3eb4;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1417c3eb4:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 1417c3f86 FUN_1417c3f86 body=536 status=ok
// SIG undefined FUN_1417c3f86(void)

void FUN_1417c3f86(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10 * 0x28);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x24 + lVar10 * 0x28) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x20 + lVar10 * 0x28) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_1417c4159;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_1417c4159:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c41a0 FUN_1417c41a0 body=370 status=ok
// SIG undefined FUN_1417c41a0(void)

void FUN_1417c41a0(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417c4229;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1417c4229:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 1417c4312 FUN_1417c4312 body=564 status=ok
// SIG undefined FUN_1417c4312(void)

void FUN_1417c4312(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x60;
        uVar13 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar11 + lVar10)) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x5c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x58 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_1417c4501;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_1417c4501:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c4548 FUN_1417c4548 body=48 status=ok
// SIG undefined FUN_1417c4548(void)

void FUN_1417c4548(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1417c4578 FUN_1417c4578 body=255 status=ok
// SIG undefined FUN_1417c4578(void)

void FUN_1417c4578(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1417c4678 FUN_1417c4678 body=370 status=ok
// SIG undefined FUN_1417c4678(void)

void FUN_1417c4678(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417c4701;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1417c4701:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1417c47ea FUN_1417c47ea body=103 status=ok
// SIG undefined FUN_1417c47ea(void)

ulonglong FUN_1417c47ea(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_1417c4847;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140001000(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_1417c4847:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1417c4851 FUN_1417c4851 body=301 status=ok
// SIG undefined FUN_1417c4851(void)

void FUN_1417c4851(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)*param_1;
  FUN_140312256(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8aff10;
  puVar1[0x72] = 0;
  FUN_1446f470e(&local_20,L"NewDecalComponent",1);
  uVar2 = FUN_1405fc15c();
  local_40 = 0;
  local_48 = 1;
  lVar3 = FUN_14048696c(puVar1,local_20,uVar2,uVar2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  puVar1[0x72] = lVar3;
  local_38 = 0xc056800000000000;
  local_30 = 0;
  uStack_28 = 0;
  local_48 = 0;
  FUN_14020f75c(lVar3,&local_38,0,0);
  *(byte *)(puVar1[0x72] + 0x2c8) = *(byte *)(puVar1[0x72] + 0x2c8) | 1;
  lVar3 = puVar1[0x72];
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = puVar1[0x72];
    }
  }
  puVar1[0x39] = lVar3;
  FUN_1403121a6(puVar1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c4980 FUN_1417c4980 body=188 status=ok
// SIG undefined FUN_1417c4980(void)

void FUN_1417c4980(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_2 + 0x40) < 0x1e3) && (*(longlong *)(param_1 + 0x390) != 0)) {
    local_30 = 0x4060000000000000;
    local_28 = 0x4070000000000000;
    local_20 = 0x4070000000000000;
    FUN_14084f00a();
  }
  FUN_1402d084a(param_1,param_2);
  if ((*(int *)(param_2 + 0x40) < 0x1e3) && (lVar1 = *(longlong *)(param_1 + 0x390), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 0x2d0) = 0x3ff0000000000000;
    *(undefined8 *)(lVar1 + 0x2d8) = 0x3ff0000000000000;
    *(undefined8 *)(lVar1 + 0x2e0) = 0x3ff0000000000000;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c4a44 FUN_1417c4a44 body=40 status=ok
// SIG undefined FUN_1417c4a44(void)

undefined8 FUN_1417c4a44(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417c4a6c FUN_1417c4a6c body=75 status=ok
// SIG undefined FUN_1417c4a6c(void)

undefined8 * FUN_1417c4a6c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a8b9c58;
  FUN_1400ea36e(param_1 + 0x1c,param_1 + 0x1c);
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417c4ab8 FUN_1417c4ab8 body=447 status=ok
// SIG undefined FUN_1417c4ab8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417c4ab8(void)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined4 *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0x100000000;
  local_58 = &DAT_14cad6140;
  local_50 = 0xffffffff;
  local_48 = 0;
  if (DAT_14cad6158 == 0) {
    uVar13 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
  }
  puVar4 = local_58;
  iVar9 = (int)local_60;
  uVar10 = (uint)local_50;
  iVar6 = local_50._4_4_;
  iVar11 = local_48;
  if (local_50._4_4_ < (int)local_58[6]) {
    do {
      lVar12 = DAT_14cad6130;
      if (*(longlong *)(DAT_14cad6130 + 0x10 + (longlong)iVar6 * 0x30) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar12 + (longlong)iVar6 * 0x30) != 0) {
        FUN_1400020a8();
      }
      uVar10 = uVar10 & ~(uint)uVar13;
      puVar7 = *(undefined4 **)(puVar4 + 4);
      if (*(undefined4 **)(puVar4 + 4) == (undefined4 *)0x0) {
        puVar7 = puVar4;
      }
      iVar2 = puVar4[6];
      lVar12 = (longlong)iVar9;
      uVar5 = puVar7[lVar12] & uVar10;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar9) {
          iVar3 = iVar9;
        }
        if (iVar6 <= iVar9) break;
        lVar8 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar5 = puVar7[lVar12 + lVar8 + 1];
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar3 - lVar12 == lVar8) goto LAB_1417c4bf2;
        }
        iVar9 = iVar9 + (int)lVar8 + 1;
        uVar10 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1417c4bf2:
  DAT_14cad6138 = 0;
  if (DAT_14cad613c < 0) {
    FUN_14494313c(&DAT_14cad6130,0);
  }
  _DAT_14cad6160 = 0xffffffff;
  DAT_14cad6158 = 0;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c4c78 FUN_1417c4c78 body=617 status=ok
// SIG undefined FUN_1417c4c78(void)

undefined8
FUN_1417c4c78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = param_3;
  cVar3 = FUN_140988638(&local_68,L"dpdump",1);
  if (cVar3 == '\0') {
    cVar3 = FUN_140988638(&local_68,L"dpreapply",1);
    if (cVar3 != '\0') {
      uVar5 = FUN_140032b16(0);
      FUN_1434cf072(uVar5);
    }
  }
  else {
    lVar8 = 0;
    lVar4 = FUN_140032b16(0);
    uVar5 = local_68;
    FUN_140056680(&local_78,local_68);
    if (0 < *(int *)(lVar4 + 0x30)) {
      lVar10 = 0;
      do {
        puVar6 = &DAT_149dfb77a;
        if ((int)uStack_70 != 0) {
          puVar6 = local_78;
        }
        lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + lVar10 * 8);
        cVar3 = FUN_1402ca022(*(undefined8 *)(lVar8 + 0x18),puVar6);
        if (cVar3 != '\0') goto LAB_1417c4d6e;
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(lVar4 + 0x30));
      lVar8 = 0;
    }
LAB_1417c4d6e:
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (lVar8 != 0) {
      FUN_140047918(param_4,L"All cvars found for deviceprofile %s",uVar5);
      FUN_140047918(param_4,L"  CVARS CURRENTLY DISABLED DUE TO ALLOW_OTHER_PLATFORM_CONFIG",uVar5);
      FUN_1446f470e(&local_80,L"TextureLODGroups",1);
      uVar5 = FUN_14129a444();
      lVar4 = FUN_147a69726(uVar5,local_80);
      iVar2 = *(int *)(lVar4 + 0x44);
      bVar1 = *(byte *)(lVar4 + 0x70);
      (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x178))();
      if (0 < *(int *)(lVar8 + 8 + (longlong)iVar2)) {
        puVar9 = (ulonglong *)(iVar2 + lVar8);
        iVar2 = *(int *)(*(longlong *)(lVar4 + 0x78) + 0x34);
        lVar10 = 0;
        lVar11 = 0;
        do {
          local_78 = (undefined2 *)0x0;
          uStack_70 = 0;
          if ((int)puVar9[1] == 0) {
            local_a8 = 0;
          }
          else {
            if ((bVar1 & 1) == 0) {
              uVar7 = *puVar9;
            }
            else {
              uVar7 = *puVar9;
              if ((uVar7 & 1) != 0) {
                uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)puVar9;
              }
            }
            local_a8 = uVar7 + lVar10;
          }
          local_90 = 0;
          local_98 = 0;
          local_a0 = lVar8;
          (**(code **)(**(longlong **)(lVar4 + 0x78) + 0xf0))
                    (*(longlong **)(lVar4 + 0x78),&local_78,local_a8,0);
          FUN_140047918(param_4,L"LODGroup[%d]=%s");
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          lVar11 = lVar11 + 1;
          lVar10 = lVar10 + iVar2;
        } while (lVar11 < (int)puVar9[1]);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c4ee2 FUN_1417c4ee2 body=123 status=ok
// SIG undefined FUN_1417c4ee2(void)

void FUN_1417c4ee2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1417c4f5e FUN_1417c4f5e body=58 status=ok
// SIG undefined FUN_1417c4f5e(void)

void FUN_1417c4f5e(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1417c4f98 FUN_1417c4f98 body=29 status=ok
// SIG undefined FUN_1417c4f98(void)

undefined8 FUN_1417c4f98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417c4fb6 FUN_1417c4fb6 body=9 status=ok
// SIG undefined FUN_1417c4fb6(void)

void FUN_1417c4fb6(longlong param_1)

{
  FUN_140441864(param_1 + 0x10);
  return;
}



// FUNCTION 1417c4fc0 FUN_1417c4fc0 body=29 status=ok
// SIG undefined FUN_1417c4fc0(void)

undefined8 FUN_1417c4fc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417c4fde FUN_1417c4fde body=597 status=ok
// SIG undefined FUN_1417c4fde(void)

void FUN_1417c4fde(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7 * 0x20;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x1c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x18 + lVar13) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_1417c51ea;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_1417c51ea:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c5234 FUN_1417c5234 body=373 status=ok
// SIG undefined FUN_1417c5234(void)

void FUN_1417c5234(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417c52bd;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1417c52bd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,4);
  return;
}



// FUNCTION 1417c53aa FUN_1417c53aa body=103 status=ok
// SIG undefined FUN_1417c53aa(void)

void * FUN_1417c53aa(void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x48);
  pvVar2 = *(void **)((longlong)param_2 + 0x40);
  *(int *)((longlong)param_1 + 0x48) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x10;
  }
  else {
    if (pvVar2 != (void *)0x0) {
      param_2 = pvVar2;
    }
    FUN_14016d6bc(param_1,iVar1,0);
    pvVar2 = *(void **)((longlong)param_1 + 0x40);
    if (*(void **)((longlong)param_1 + 0x40) == (void *)0x0) {
      pvVar2 = param_1;
    }
    memcpy(pvVar2,param_2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 1417c5411 FUN_1417c5411 body=49 status=ok
// SIG undefined FUN_1417c5411(void)

longlong FUN_1417c5411(void)

{
  if (DAT_14cad7ee8 == 0) {
    FUN_14073dd9a(&DAT_14cad7ee8,&PTR_LAB_14a8c75a0);
  }
  return DAT_14cad7ee8;
}



// FUNCTION 1417c5442 FUN_1417c5442 body=434 status=ok
// SIG undefined FUN_1417c5442(void)

void FUN_1417c5442(undefined8 param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  
  lVar9 = *param_2;
  if (lVar9 != 0) {
    if (*(uint *)(lVar9 + 0x20) < 0x200001) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
      if (DAT_14cad73d0 != -1) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        uVar5 = DAT_14c7590b0;
        UNLOCK();
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
        uVar2 = *(uint *)(lVar9 + 0x20);
        LOCK();
        puVar1 = (uint *)(lVar9 + 8);
        uVar8 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar8 & 0x3fffffff) == 1) {
          FUN_144a54812(lVar9);
        }
        uVar10 = 0;
        uVar8 = 0x10;
        do {
          uVar7 = uVar10 + uVar8 >> 1;
          uVar6 = uVar7;
          if (uVar2 <= (uint)(&DAT_14a8bdfa0)[uVar7 - 1]) {
            uVar6 = uVar10;
            uVar8 = uVar7;
          }
          uVar10 = uVar6;
        } while (1 < uVar8 - uVar10);
        uVar8 = DAT_14c7590b0 % 3;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad6f90);
        lVar4 = (ulonglong)uVar10 * 0x10 + (ulonglong)(uVar8 << 8);
        plVar11 = (longlong *)(&DAT_14cad6f80 + lVar4 + 0x138);
        iVar3 = *(int *)(&DAT_14cad6f80 + lVar4 + 0x140);
        *(uint *)(&DAT_14cad6f80 + lVar4 + 0x140) = iVar3 + 1U;
        if (*(uint *)(&DAT_14cad6f80 + lVar4 + 0x144) < iVar3 + 1U) {
          FUN_140119e6c(plVar11,iVar3);
        }
        lVar4 = *plVar11;
        *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = lVar9;
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
        *(ulonglong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = CONCAT44(uVar5,uVar2);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad6f90);
        LOCK();
        puVar1 = (uint *)(lVar9 + 8);
        uVar8 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar8 & 0x3fffffff) == 1) {
          FUN_144a54812(lVar9);
        }
      }
      LOCK();
      puVar1 = (uint *)(lVar9 + 8);
      uVar8 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar8 & 0x3fffffff) == 1) {
        FUN_144a54812(lVar9);
      }
      lVar9 = *param_2;
      if (lVar9 == 0) {
        return;
      }
    }
    *param_2 = 0;
    LOCK();
    puVar1 = (uint *)(lVar9 + 8);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar8 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar9);
      return;
    }
  }
  return;
}



// FUNCTION 1417c55f4 FUN_1417c55f4 body=74 status=ok
// SIG undefined FUN_1417c55f4(void)

void FUN_1417c55f4(longlong param_1,undefined8 param_2)

{
  FUN_14006bf18();
  FUN_14006bf18(param_1 + 0x10,param_2);
  FUN_14006bf18(param_1 + 0x28,param_2);
  FUN_14006bf18(param_1 + 0x40,param_2);
  FUN_14006bf18(param_1 + 0x58,param_2);
  return;
}



// FUNCTION 1417c563e FUN_1417c563e body=552 status=ok
// SIG undefined FUN_1417c563e(void)

void FUN_1417c563e(uint *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  undefined8 local_48;
  longlong local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  if (DAT_14cabe878 == 0) {
    local_60 = &local_38;
    local_38 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_1427b09ee;
    local_68 = &LAB_147856f1d;
    local_70 = FUN_14636bbb2;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10004001;
    local_90 = 8;
    local_98 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"ActorInstanceManagerInterface",&DAT_14cabe878,&DAT_147856f1c);
  }
  local_40 = FUN_144718840(param_2,DAT_14cabe878);
  if (local_40 != 0) {
    FUN_14485c47a(&local_48,param_2);
  }
  *(undefined8 *)(param_1 + 2) = local_48;
  *(longlong *)(param_1 + 4) = local_40;
  if (*(longlong *)(param_1 + 4) != 0) {
    bVar3 = FUN_144729dda(param_1 + 2);
    plVar1 = *(longlong **)(param_1 + 4);
    if ((plVar1 != (longlong *)0x0 & bVar3) == 1) {
      uVar4 = (**(code **)(*plVar1 + 0x10))(plVar1,param_4,param_3);
      param_1[6] = uVar4;
      param_2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
    }
  }
  if (param_2 == 0) {
    *param_1 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    *param_1 = uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar4 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar4 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar4 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar6;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar4 = uVar6;
      }
    }
  }
  param_1[1] = uVar4;
  *(undefined1 *)(param_1 + 7) = 1;
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417c5867 FUN_1417c5867 body=49 status=ok
// SIG undefined FUN_1417c5867(void)

longlong FUN_1417c5867(void)

{
  if (DAT_14cad84b0 == 0) {
    FUN_14086a14e(&DAT_14cad84b0,&PTR_FUN_14a8cdc10);
  }
  return DAT_14cad84b0;
}



// FUNCTION 1417c5898 FUN_1417c5898 body=341 status=ok
// SIG undefined FUN_1417c5898(void)

void FUN_1417c5898(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0x3f4) < 0) {
      *(undefined4 *)(param_1 + 0x7e) = 0;
      FUN_1406c24c0(param_1 + 0x1a,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x7e) = 0;
    }
    if (*(int *)((longlong)param_1 + 0x604) < 0) {
      *(undefined4 *)(param_1 + 0xc0) = 0;
      FUN_147aac970(param_1 + 0x7f,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    cVar4 = FUN_14043fe08(param_1);
    if (cVar4 != '\0') {
      plVar6 = param_1 + 4;
      plVar7 = (longlong *)(lVar1 + 0x240);
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *plVar7 = *plVar6;
        plVar6 = plVar6 + 1;
        plVar7 = plVar7 + 1;
      }
      *(longlong *)(lVar1 + 0x1a8) = param_1[0x12];
      lVar5 = param_1[0x11];
      *(longlong *)(lVar1 + 0x198) = param_1[0x10];
      *(longlong *)(lVar1 + 0x1a0) = lVar5;
      *(longlong *)(lVar1 + 0x1c0) = param_1[0x15];
      lVar5 = param_1[0x14];
      *(longlong *)(lVar1 + 0x1b0) = param_1[0x13];
      *(longlong *)(lVar1 + 0x1b8) = lVar5;
      *(longlong *)(lVar1 + 0x1d8) = param_1[0x18];
      uVar2 = *(undefined4 *)((longlong)param_1 + 0xb4);
      lVar5 = param_1[0x17];
      uVar3 = *(undefined4 *)((longlong)param_1 + 0xbc);
      *(int *)(lVar1 + 0x1c8) = (int)param_1[0x16];
      *(undefined4 *)(lVar1 + 0x1cc) = uVar2;
      *(int *)(lVar1 + 0x1d0) = (int)lVar5;
      *(undefined4 *)(lVar1 + 0x1d4) = uVar3;
      if ((*(byte *)(param_1 + 0xc1) & 1) == 0) {
        FUN_14474658a(lVar1,1,0,0);
        FUN_144907e2c(lVar1,0,1,0);
      }
    }
  }
  *(byte *)(param_1 + 0xc1) = *(byte *)(param_1 + 0xc1) & 0xfd;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  return;
}



// FUNCTION 1417c59ed FUN_1417c59ed body=49 status=ok
// SIG undefined FUN_1417c59ed(void)

longlong FUN_1417c59ed(void)

{
  if (DAT_14cad8980 == 0) {
    FUN_14086a14e(&DAT_14cad8980,&PTR_FUN_14a8d1dd8);
  }
  return DAT_14cad8980;
}



// FUNCTION 1417c5a23 FUN_1417c5a23 body=184 status=ok
// SIG undefined FUN_1417c5a23(void)

void FUN_1417c5a23(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14a8d5300;
  puVar1[5] = &PTR_FUN_14a8d55a0;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined1 *)(puVar1 + 10) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0x3c;
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_149eda5e0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar1[0xb] = puVar2 + 2;
  puVar1[0xc] = puVar2;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0x3000000020;
  *(undefined8 *)((longlong)puVar1 + 0x74) = 0x2000000040;
  *(undefined8 *)((longlong)puVar1 + 0x7c) = 0x3800000028;
  *(undefined2 *)((longlong)puVar1 + 0x87) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x8c) = 0;
  return;
}



// FUNCTION 1417c5adc FUN_1417c5adc body=390 status=ok
// SIG undefined FUN_1417c5adc(void)

void FUN_1417c5adc(longlong *param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar2 = FUN_1400439fc(param_1,0,&local_21);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  param_1[0x11] = 0;
  if ((char)param_1[0xd] != '\x01') goto LAB_1417c5b26;
  plVar4 = (longlong *)FUN_1401e2c50();
  lVar5 = plVar4[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar5 = plVar4[0x22];
  }
  if (*(char *)(lVar5 + 0x27e) != '\x01') goto LAB_1417c5b26;
  cVar2 = FUN_146935716();
  if (cVar2 == '\0') goto LAB_1417c5b26;
  cVar2 = FUN_1434e2362();
  *(char *)(param_1 + 0x11) = cVar2;
  if (*(char *)((longlong)param_1 + 0x87) == '\x01') {
    if (cVar2 == '\x01') {
      pcVar6 = (char *)((longlong)param_1 + 0x84);
    }
    else if (cVar2 == '\x03') {
      pcVar6 = (char *)((longlong)param_1 + 0x86);
    }
    else {
      if (cVar2 != '\x02') goto LAB_1417c5bef;
      pcVar6 = (char *)((longlong)param_1 + 0x85);
    }
    cVar2 = *pcVar6;
    *(char *)(param_1 + 0x11) = cVar2;
  }
LAB_1417c5bef:
  lVar5 = DAT_14cad8b00;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar7 = 0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    uVar7 = (ulonglong)(bVar3 ^ 1);
  }
  iVar1 = *(int *)(lVar5 + uVar7 * 4);
  if (iVar1 < 2) {
    plVar4 = (longlong *)((longlong)param_1 + 0x6c);
    plVar8 = param_1 + 0xf;
  }
  else if (iVar1 == 2) {
    plVar4 = param_1 + 0xe;
    plVar8 = (longlong *)((longlong)param_1 + 0x7c);
  }
  else {
    plVar4 = (longlong *)((longlong)param_1 + 0x74);
    plVar8 = param_1 + 0x10;
  }
  if (cVar2 == '\x01') {
    plVar4 = plVar8;
  }
  *(int *)((longlong)param_1 + 0x8c) = (int)*plVar4;
LAB_1417c5b26:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c5c64 FUN_1417c5c64 body=43 status=ok
// SIG undefined FUN_1417c5c64(void)

bool FUN_1417c5c64(void)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_1447e0190();
  if ((cVar1 == '\0') || (DAT_14c7585c8 == 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = DAT_14cad8c40 != 0;
  }
  return bVar2;
}



// FUNCTION 1417c5c90 FUN_1417c5c90 body=68 status=ok
// SIG undefined FUN_1417c5c90(void)

void FUN_1417c5c90(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_140239688(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1479d8fa2(param_1,param_2);
  return;
}



// FUNCTION 1417c5cd4 FUN_1417c5cd4 body=49 status=ok
// SIG undefined FUN_1417c5cd4(void)

longlong FUN_1417c5cd4(void)

{
  if (DAT_14cadaa28 == 0) {
    FUN_14073dd9a(&DAT_14cadaa28,&PTR_LAB_14a8e0150);
  }
  return DAT_14cadaa28;
}



// FUNCTION 1417c5d18 FUN_1417c5d18 body=225 status=ok
// SIG undefined FUN_1417c5d18(void)

undefined8 FUN_1417c5d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_3;
  cVar1 = FUN_140988638(&local_38,L"OPEN",1);
  if ((((cVar1 == '\0') && (cVar1 = FUN_140988638(&local_38,L"DISCONNECT",1), cVar1 == '\0')) &&
      (cVar1 = FUN_140988638(&local_38,L"RECONNECT",1), cVar1 == '\0')) &&
     (cVar1 = FUN_140988638(&local_38,L"TRAVEL",1), cVar1 == '\0')) {
    if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 1417c5e18 FUN_1417c5e18 body=38 status=ok
// SIG undefined FUN_1417c5e18(void)

undefined8 FUN_1417c5e18(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_140489acc();
  (**(code **)(*plVar1 + 0x2c8))(plVar1,param_2);
  return param_2;
}



// FUNCTION 1417c5e3e FUN_1417c5e3e body=353 status=ok
// SIG undefined FUN_1417c5e3e(void)

void FUN_1417c5e3e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417c5ec3;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1417c5ec3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417c5fa0 FUN_1417c5fa0 body=24 status=ok
// SIG undefined FUN_1417c5fa0(void)

undefined1
FUN_1417c5fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_1407f1c5a(param_5,param_2,param_4);
  return 1;
}



// FUNCTION 1417c5fb8 FUN_1417c5fb8 body=98 status=ok
// SIG undefined FUN_1417c5fb8(void)

undefined8 FUN_1417c5fb8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(undefined4 *)(param_3 + 0x10);
  local_20 = *(undefined8 *)(param_3 + 0x20);
  local_18 = *(undefined8 *)(param_3 + 0x28);
  local_10 = *(longlong *)(param_3 + 0x30);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_14031365a(&local_20,uVar1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c601c FUN_1417c601c body=143 status=ok
// SIG undefined FUN_1417c601c(void)

undefined8 FUN_1417c601c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((0.0001 < ABS(*(float *)(param_3 + 0x30))) || (0.0001 < ABS(*(float *)(param_3 + 0x34)))) {
    uVar1 = *(undefined4 *)(param_3 + 0x10);
    local_20 = *(undefined8 *)(param_3 + 0x40);
    local_18 = *(undefined8 *)(param_3 + 0x48);
    local_10 = *(longlong *)(param_3 + 0x50);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    FUN_14031365a(&local_20,uVar1);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c60ac FUN_1417c60ac body=100 status=ok
// SIG undefined FUN_1417c60ac(void)

undefined8 FUN_1417c60ac(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(undefined4 *)(param_3 + 0x10);
  local_20 = *(undefined8 *)(param_3 + 0x40);
  local_18 = *(undefined8 *)(param_3 + 0x48);
  local_10 = *(longlong *)(param_3 + 0x50);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_14031365a(&local_20,uVar1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c6111 FUN_1417c6111 body=49 status=ok
// SIG undefined FUN_1417c6111(void)

longlong FUN_1417c6111(void)

{
  if (DAT_14cadaf20 == 0) {
    FUN_14073dd9a(&DAT_14cadaf20,&PTR_LAB_14a8eda40);
  }
  return DAT_14cadaf20;
}



// FUNCTION 1417c6142 FUN_1417c6142 body=181 status=ok
// SIG undefined FUN_1417c6142(void)

bool FUN_1417c6142(longlong param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  float fVar4;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x430) == 0)) {
    bVar2 = false;
  }
  else {
    lVar3 = FUN_1447210f0(param_2);
    fVar4 = (float)(*(double *)(lVar3 + 0x6d0) - (double)param_3);
    if ((*(float *)(param_1 + 0x40c) <= 0.0) || (*(float *)(param_1 + 0x40c) <= fVar4)) {
      plVar1 = *(longlong **)(param_1 + 0x10);
      lVar3 = plVar1[0x22];
      if (lVar3 == 0) {
        (**(code **)(*plVar1 + 1000))(plVar1);
        lVar3 = plVar1[0x22];
      }
      bVar2 = fVar4 < *(float *)(lVar3 + 0x3dc) /
                      (float)*(int *)(*(longlong *)(param_2 + 0x430) + 0x38);
    }
    else {
      bVar2 = true;
    }
  }
  return bVar2;
}



// FUNCTION 1417c61f7 FUN_1417c61f7 body=49 status=ok
// SIG undefined FUN_1417c61f7(void)

longlong FUN_1417c61f7(void)

{
  if (DAT_14cadb418 == 0) {
    FUN_14073dd9a(&DAT_14cadb418,&PTR_LAB_14a8fe7d0);
  }
  return DAT_14cadb418;
}



// FUNCTION 1417c6228 FUN_1417c6228 body=5449 status=ok
// SIG undefined FUN_1417c6228(void)

void FUN_1417c6228(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  longlong lVar9;
  byte *pbVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined4 *puVar19;
  byte *pbVar20;
  uint *puVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined1 auStack_2d8 [40];
  longlong *local_2b0;
  longlong *local_2a8;
  undefined4 *local_2a0;
  undefined8 *local_298;
  undefined8 *local_290;
  undefined8 *local_288;
  longlong *local_280;
  undefined8 *local_278;
  undefined8 *local_270;
  undefined8 *local_268;
  undefined4 *local_260;
  undefined4 *local_258;
  byte *local_250;
  undefined4 *local_248;
  undefined8 local_240 [3];
  undefined8 local_228 [3];
  undefined4 local_20c;
  uint uStack_208;
  undefined4 local_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8 [3];
  undefined8 local_1c0 [3];
  undefined8 local_1a8 [3];
  undefined8 local_190 [3];
  undefined4 local_174;
  undefined4 uStack_170;
  undefined2 uStack_16c;
  byte local_16a;
  byte bStack_169;
  undefined4 uStack_168;
  undefined2 uStack_164;
  undefined1 uStack_162;
  undefined1 uStack_161;
  undefined4 local_c4;
  undefined4 local_98;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  memset(&uStack_168,0,0x100);
  local_98 = 0xffffffff;
  uStack_164 = 0;
  uStack_162 = 0x80;
  uStack_161 = 0x3f;
  local_c4 = 0xffffffff;
  puVar24 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar10 = *(byte **)(param_2 + 0x20);
  if (pbVar10 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_168);
LAB_1417c62fe:
    pbVar10 = *(byte **)(param_2 + 0x20);
    puVar19 = *(undefined4 **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_168);
      goto LAB_1417c62fe;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_168);
      goto LAB_1417c62fe;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&uStack_168);
      goto LAB_1417c62fe;
    }
    uVar2 = *(undefined8 *)(pbVar10 + 1);
    pbVar10 = pbVar10 + 9;
    *(byte **)(param_2 + 0x20) = pbVar10;
    uStack_168 = (undefined4)uVar2;
    uStack_164 = (undefined2)((ulonglong)uVar2 >> 0x20);
    uStack_162 = (undefined1)((ulonglong)uVar2 >> 0x30);
    uStack_161 = (undefined1)((ulonglong)uVar2 >> 0x38);
    puVar19 = (undefined4 *)0x0;
  }
  puVar17 = puVar19;
  if (puVar19 == (undefined4 *)0x0) {
    puVar17 = &uStack_168;
  }
  bStack_169 = 0;
  *puVar24 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar10 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&bStack_169);
LAB_1417c638e:
    pbVar10 = *(byte **)(param_2 + 0x20);
    pbVar14 = *(byte **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&bStack_169);
      goto LAB_1417c638e;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&bStack_169);
      goto LAB_1417c638e;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&bStack_169);
      goto LAB_1417c638e;
    }
    uVar2 = *(undefined8 *)(pbVar10 + 1);
    pbVar10 = pbVar10 + 9;
    *(byte **)(param_2 + 0x20) = pbVar10;
    bStack_169 = (byte)uVar2;
    uStack_168 = (undefined4)((ulonglong)uVar2 >> 8);
    uStack_164 = (undefined2)((ulonglong)uVar2 >> 0x28);
    uStack_162 = (undefined1)((ulonglong)uVar2 >> 0x38);
    pbVar14 = (byte *)0x0;
  }
  pbVar20 = &bStack_169;
  if (pbVar14 != (byte *)0x0) {
    pbVar20 = pbVar14;
  }
  local_16a = 0;
  *puVar24 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar10 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_16a);
LAB_1417c6423:
    pbVar10 = *(byte **)(param_2 + 0x20);
    pbVar14 = *(byte **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_16a);
      goto LAB_1417c6423;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_16a);
      goto LAB_1417c6423;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_16a);
      goto LAB_1417c6423;
    }
    uVar2 = *(undefined8 *)(pbVar10 + 1);
    pbVar10 = pbVar10 + 9;
    *(byte **)(param_2 + 0x20) = pbVar10;
    local_16a = (byte)uVar2;
    bStack_169 = (byte)((ulonglong)uVar2 >> 8);
    uStack_168 = (undefined4)((ulonglong)uVar2 >> 0x10);
    uStack_164 = (undefined2)((ulonglong)uVar2 >> 0x30);
    pbVar14 = (byte *)0x0;
  }
  pbVar22 = &local_16a;
  if (pbVar14 != (byte *)0x0) {
    pbVar22 = pbVar14;
  }
  uStack_170 = 0;
  *puVar24 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar10 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_170);
LAB_1417c64bb:
    pbVar10 = *(byte **)(param_2 + 0x20);
    puVar8 = *(undefined4 **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_170);
      goto LAB_1417c64bb;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_170);
      goto LAB_1417c64bb;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&uStack_170);
      goto LAB_1417c64bb;
    }
    uVar2 = *(undefined8 *)(pbVar10 + 1);
    pbVar10 = pbVar10 + 9;
    *(byte **)(param_2 + 0x20) = pbVar10;
    uStack_170 = (undefined4)uVar2;
    uStack_16c = (undefined2)((ulonglong)uVar2 >> 0x20);
    local_16a = (byte)((ulonglong)uVar2 >> 0x30);
    bStack_169 = (byte)((ulonglong)uVar2 >> 0x38);
    puVar8 = (undefined4 *)0x0;
  }
  puVar12 = &uStack_170;
  if (puVar8 != (undefined4 *)0x0) {
    puVar12 = puVar8;
  }
  local_174 = 0;
  *puVar24 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar10 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_174);
LAB_1417c6553:
    pbVar10 = *(byte **)(param_2 + 0x20);
    puVar8 = *(undefined4 **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_174);
      goto LAB_1417c6553;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_174);
      goto LAB_1417c6553;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_174);
      goto LAB_1417c6553;
    }
    uVar2 = *(undefined8 *)(pbVar10 + 1);
    pbVar10 = pbVar10 + 9;
    *(byte **)(param_2 + 0x20) = pbVar10;
    local_174 = (undefined4)uVar2;
    uStack_170 = (undefined4)((ulonglong)uVar2 >> 0x20);
    puVar8 = (undefined4 *)0x0;
  }
  local_260 = &local_174;
  if (puVar8 != (undefined4 *)0x0) {
    local_260 = puVar8;
  }
  *puVar24 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar10 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_190);
LAB_1417c65e5:
    pbVar10 = *(byte **)(param_2 + 0x20);
    puVar15 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_190);
      goto LAB_1417c65e5;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_190);
      goto LAB_1417c65e5;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,local_190);
      goto LAB_1417c65e5;
    }
    local_190[0] = *(undefined8 *)(pbVar10 + 1);
    pbVar10 = pbVar10 + 9;
    *(byte **)(param_2 + 0x20) = pbVar10;
    puVar15 = (undefined8 *)0x0;
  }
  local_268 = local_190;
  if (puVar15 != (undefined8 *)0x0) {
    local_268 = puVar15;
  }
  *puVar24 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar10 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1a8);
LAB_1417c6677:
    pbVar10 = *(byte **)(param_2 + 0x20);
    puVar15 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_1a8);
      goto LAB_1417c6677;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_1a8);
      goto LAB_1417c6677;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,local_1a8);
      goto LAB_1417c6677;
    }
    local_1a8[0] = *(undefined8 *)(pbVar10 + 1);
    pbVar10 = pbVar10 + 9;
    *(byte **)(param_2 + 0x20) = pbVar10;
    puVar15 = (undefined8 *)0x0;
  }
  local_270 = local_1a8;
  if (puVar15 != (undefined8 *)0x0) {
    local_270 = puVar15;
  }
  *puVar24 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar10 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1c0);
LAB_1417c6709:
    pbVar10 = *(byte **)(param_2 + 0x20);
    puVar15 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_1c0);
      goto LAB_1417c6709;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_1c0);
      goto LAB_1417c6709;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,local_1c0);
      goto LAB_1417c6709;
    }
    local_1c0[0] = *(undefined8 *)(pbVar10 + 1);
    pbVar10 = pbVar10 + 9;
    *(byte **)(param_2 + 0x20) = pbVar10;
    puVar15 = (undefined8 *)0x0;
  }
  local_278 = local_1c0;
  if (puVar15 != (undefined8 *)0x0) {
    local_278 = puVar15;
  }
  *puVar24 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar10 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1d8);
LAB_1417c679b:
    pbVar10 = *(byte **)(param_2 + 0x20);
    puVar15 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_1d8);
      goto LAB_1417c679b;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_1d8);
      goto LAB_1417c679b;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,local_1d8);
      goto LAB_1417c679b;
    }
    local_1d8[0] = *(undefined8 *)(pbVar10 + 1);
    pbVar10 = pbVar10 + 9;
    *(byte **)(param_2 + 0x20) = pbVar10;
    puVar15 = (undefined8 *)0x0;
  }
  local_288 = local_1d8;
  if (puVar15 != (undefined8 *)0x0) {
    local_288 = puVar15;
  }
  local_1e0 = 0;
  *puVar24 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar10 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1e0);
LAB_1417c6839:
    pbVar10 = *(byte **)(param_2 + 0x20);
    plVar16 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1e0);
      goto LAB_1417c6839;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1e0);
      goto LAB_1417c6839;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_1e0);
      goto LAB_1417c6839;
    }
    local_1e0 = *(longlong *)(pbVar10 + 1);
    pbVar10 = pbVar10 + 9;
    *(byte **)(param_2 + 0x20) = pbVar10;
    plVar16 = (longlong *)0x0;
  }
  local_2a8 = &local_1e0;
  if (plVar16 != (longlong *)0x0) {
    local_2a8 = plVar16;
  }
  local_1e8 = 0;
  *puVar24 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar10 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1e8);
LAB_1417c68d7:
    pbVar10 = *(byte **)(param_2 + 0x20);
    plVar16 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1e8);
      goto LAB_1417c68d7;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1e8);
      goto LAB_1417c68d7;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_1e8);
      goto LAB_1417c68d7;
    }
    local_1e8 = *(longlong *)(pbVar10 + 1);
    pbVar10 = pbVar10 + 9;
    *(byte **)(param_2 + 0x20) = pbVar10;
    plVar16 = (longlong *)0x0;
  }
  local_280 = &local_1e8;
  if (plVar16 != (longlong *)0x0) {
    local_280 = plVar16;
  }
  local_1f0 = 0;
  *puVar24 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar10 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1f0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1f0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1f0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_1f0 = *(longlong *)(pbVar10 + 1);
      *(byte **)(param_2 + 0x20) = pbVar10 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1f0);
    }
  }
  local_2b0 = &local_1f0;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_2b0 = *(longlong **)(param_2 + 0x38);
  }
  local_1f8 = 0;
  *puVar24 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar10 = *(byte **)(param_2 + 0x20);
  if (pbVar10 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1f8);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1f8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1f8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_1f8 = *(undefined8 *)(pbVar10 + 1);
      *(byte **)(param_2 + 0x20) = pbVar10 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1f8);
    }
  }
  local_290 = &local_1f8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    local_290 = *(undefined8 **)(param_2 + 0x38);
  }
  uStack_200 = 0;
  uStack_1fc = 0;
  *puVar24 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar10 = *(byte **)(param_2 + 0x20);
  if (pbVar10 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_200);
LAB_1417c6ab1:
    pbVar10 = *(byte **)(param_2 + 0x20);
    puVar15 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_200);
      goto LAB_1417c6ab1;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_200);
      goto LAB_1417c6ab1;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&uStack_200);
      goto LAB_1417c6ab1;
    }
    uVar2 = *(undefined8 *)(pbVar10 + 1);
    pbVar10 = pbVar10 + 9;
    *(byte **)(param_2 + 0x20) = pbVar10;
    uStack_200 = (undefined4)uVar2;
    uStack_1fc = (undefined4)((ulonglong)uVar2 >> 0x20);
    puVar15 = (undefined8 *)0x0;
  }
  local_298 = (undefined8 *)&uStack_200;
  if (puVar15 != (undefined8 *)0x0) {
    local_298 = puVar15;
  }
  local_204 = 0;
  *puVar24 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  local_248 = puVar17;
  if (pbVar10 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_204);
LAB_1417c6b56:
    pbVar10 = *(byte **)(param_2 + 0x20);
    puVar17 = *(undefined4 **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_204);
      goto LAB_1417c6b56;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_204);
      goto LAB_1417c6b56;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_204);
      goto LAB_1417c6b56;
    }
    uVar2 = *(undefined8 *)(pbVar10 + 1);
    pbVar10 = pbVar10 + 9;
    *(byte **)(param_2 + 0x20) = pbVar10;
    local_204 = (undefined4)uVar2;
    uStack_200 = (undefined4)((ulonglong)uVar2 >> 0x20);
    puVar17 = (undefined4 *)0x0;
  }
  puVar8 = &local_204;
  if (puVar17 != (undefined4 *)0x0) {
    puVar8 = puVar17;
  }
  uStack_208 = 0;
  *puVar24 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  local_250 = pbVar20;
  if (pbVar10 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_208);
LAB_1417c6bf6:
    pbVar10 = *(byte **)(param_2 + 0x20);
    puVar18 = *(uint **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_208);
      goto LAB_1417c6bf6;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_208);
      goto LAB_1417c6bf6;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&uStack_208);
      goto LAB_1417c6bf6;
    }
    uVar2 = *(undefined8 *)(pbVar10 + 1);
    pbVar10 = pbVar10 + 9;
    *(byte **)(param_2 + 0x20) = pbVar10;
    uStack_208 = (uint)uVar2;
    local_204 = (undefined4)((ulonglong)uVar2 >> 0x20);
    puVar18 = (uint *)0x0;
  }
  puVar21 = &uStack_208;
  if (puVar18 != (uint *)0x0) {
    puVar21 = puVar18;
  }
  local_20c = 0;
  *puVar24 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  local_258 = puVar19;
  if (pbVar10 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20c);
LAB_1417c6c96:
    pbVar10 = *(byte **)(param_2 + 0x20);
    puVar19 = *(undefined4 **)(param_2 + 0x38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20c);
      goto LAB_1417c6c96;
    }
    if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20c);
      goto LAB_1417c6c96;
    }
    if (pcVar3 != (code *)&LAB_1428293cc) {
      (*pcVar3)(uVar2,param_2,&local_20c);
      goto LAB_1417c6c96;
    }
    uVar2 = *(undefined8 *)(pbVar10 + 1);
    pbVar10 = pbVar10 + 9;
    *(byte **)(param_2 + 0x20) = pbVar10;
    local_20c = (undefined4)uVar2;
    uStack_208 = (uint)((ulonglong)uVar2 >> 0x20);
    puVar19 = (undefined4 *)0x0;
  }
  puVar17 = &local_20c;
  if (puVar19 != (undefined4 *)0x0) {
    puVar17 = puVar19;
  }
  *puVar24 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  local_2a0 = puVar8;
  if (pbVar10 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_228);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_228);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_228);
    }
    else {
      if (pcVar3 == (code *)&LAB_1428293cc) {
        local_228[0] = *(undefined8 *)(pbVar10 + 1);
        pbVar10 = pbVar10 + 9;
        *(byte **)(param_2 + 0x20) = pbVar10;
        puVar15 = (undefined8 *)0x0;
        goto LAB_1417c6d36;
      }
      (*pcVar3)(uVar2,param_2,local_228);
    }
  }
  pbVar10 = *(byte **)(param_2 + 0x20);
  puVar15 = *(undefined8 **)(param_2 + 0x38);
LAB_1417c6d36:
  puVar23 = local_228;
  if (puVar15 != (undefined8 *)0x0) {
    puVar23 = puVar15;
  }
  *puVar24 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar10 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_240);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar10 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar10];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_240);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_240);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_240[0] = *(undefined8 *)(pbVar10 + 1);
      *(byte **)(param_2 + 0x20) = pbVar10 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_240);
    }
  }
  puVar19 = local_258;
  plVar16 = local_2a8;
  puVar24 = local_240;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar24 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar8 = local_258;
  if (local_258 == (undefined4 *)0x0) {
    puVar8 = &uStack_168;
  }
  *local_250 = *(byte *)((longlong)puVar8 + 0xad) & 1;
  *pbVar22 = *(byte *)((longlong)puVar8 + 0xad) >> 1 & 1;
  *puVar12 = puVar8[1];
  *local_260 = puVar8[2];
  local_268[2] = *(undefined8 *)(puVar8 + 8);
  uVar2 = *(undefined8 *)(puVar8 + 6);
  *local_268 = *(undefined8 *)(puVar8 + 4);
  local_268[1] = uVar2;
  local_270[2] = *(undefined8 *)(puVar8 + 0xe);
  uVar2 = *(undefined8 *)(puVar8 + 0xc);
  *local_270 = *(undefined8 *)(puVar8 + 10);
  local_270[1] = uVar2;
  local_278[2] = *(undefined8 *)(puVar8 + 0x14);
  uVar2 = *(undefined8 *)(puVar8 + 0x12);
  *local_278 = *(undefined8 *)(puVar8 + 0x10);
  local_278[1] = uVar2;
  local_288[2] = *(undefined8 *)(puVar8 + 0x1a);
  uVar2 = *(undefined8 *)(puVar8 + 0x18);
  *local_288 = *(undefined8 *)(puVar8 + 0x16);
  local_288[1] = uVar2;
  if (puVar8[0x2d] == 0) {
    lVar9 = 0;
  }
  else {
    puVar12 = local_258;
    if (local_258 == (undefined4 *)0x0) {
      puVar12 = &uStack_168;
    }
    uVar1 = puVar12[0x2c];
    lVar9 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar11 = (longlong *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar11 == (longlong *)0x0) ||
         (((int)plVar11[2] != puVar8[0x2d] || ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) {
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar11;
      }
    }
  }
  *local_2a8 = lVar9;
  puVar8 = local_258;
  if (local_258 == (undefined4 *)0x0) {
    puVar8 = &uStack_168;
  }
  local_68 = *(undefined8 *)(puVar8 + 0x2e);
  local_60 = puVar8[0x30];
  uStack_5c = puVar8[0x31];
  uStack_58 = puVar8[0x32];
  uStack_54 = puVar8[0x33];
  local_50 = puVar8[0x34];
  local_4c = *(undefined1 *)(puVar8 + 0x35);
  lVar9 = FUN_14485cccc();
  plVar7 = local_280;
  plVar11 = local_2b0;
  *local_280 = lVar9;
  if (puVar8[0x37] == 0) {
    lVar9 = 0;
  }
  else {
    puVar12 = puVar19;
    if (puVar19 == (undefined4 *)0x0) {
      puVar12 = &uStack_168;
    }
    uVar1 = puVar12[0x36];
    lVar9 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar13 = (longlong *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar13 == (longlong *)0x0) ||
         (((int)plVar13[2] != puVar8[0x37] || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) {
        lVar9 = 0;
      }
      else {
        lVar9 = *plVar13;
      }
    }
  }
  *local_2b0 = lVar9;
  puVar8 = &uStack_168;
  if (puVar19 != (undefined4 *)0x0) {
    puVar8 = puVar19;
  }
  *local_290 = *(undefined8 *)(puVar8 + 0x3c);
  *local_298 = *(undefined8 *)(puVar8 + 0x3e);
  *local_2a0 = puVar8[0x2a];
  *puVar21 = (uint)*(byte *)(puVar8 + 0x2b);
  puVar23[2] = *(undefined8 *)(puVar8 + 0x20);
  uVar2 = *(undefined8 *)(puVar8 + 0x1e);
  *puVar23 = *(undefined8 *)(puVar8 + 0x1c);
  puVar23[1] = uVar2;
  puVar24[2] = *(undefined8 *)(puVar8 + 0x26);
  uVar4 = puVar8[0x23];
  uVar5 = puVar8[0x24];
  uVar6 = puVar8[0x25];
  *(undefined4 *)puVar24 = puVar8[0x22];
  *(undefined4 *)((longlong)puVar24 + 4) = uVar4;
  *(undefined4 *)(puVar24 + 1) = uVar5;
  *(undefined4 *)((longlong)puVar24 + 0xc) = uVar6;
  *puVar17 = *local_248;
  if ((DAT_14c950c29 == 1) && (*plVar16 != 0)) {
    FUN_1456cec3c();
  }
  if (((DAT_14c950c29 & 1) != 0) && (*plVar7 != 0)) {
    FUN_1456cec3c();
  }
  if (((DAT_14c950c29 & 1) != 0) && (*plVar11 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_48 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c7772 FUN_1417c7772 body=46 status=ok
// SIG undefined FUN_1417c7772(void)

double FUN_1417c7772(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 == 0) {
    dVar2 = 0.0;
  }
  else {
    dVar2 = (double)*(float *)(param_1 + 0x3c8) + *(double *)(lVar1 + 0x6d0);
  }
  return dVar2;
}



// FUNCTION 1417c77a0 FUN_1417c77a0 body=49 status=ok
// SIG undefined FUN_1417c77a0(void)

longlong FUN_1417c77a0(void)

{
  if (DAT_14cadb810 == 0) {
    FUN_14073dd9a(&DAT_14cadb810,&PTR_LAB_14a905a70);
  }
  return DAT_14cadb810;
}



// FUNCTION 1417c77d2 FUN_1417c77d2 body=349 status=ok
// SIG undefined FUN_1417c77d2(void)

void FUN_1417c77d2(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  iVar5 = *(int *)(param_1 + 0x32c);
  *(int *)(param_1 + 0x32c) = iVar5 + 1;
  uVar6 = (ulonglong)*(int *)(param_1 + 800);
  if ((longlong)uVar6 < 1) {
    *(int *)(param_1 + 0x32c) = iVar5;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x318);
    bVar8 = false;
    do {
      lVar10 = uVar6 * 0x10 + -8;
      uVar11 = uVar6;
      while (((*(int *)(*plVar1 + lVar10) != 0 &&
              (plVar2 = *(longlong **)(*plVar1 + -8 + lVar10), plVar2 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
        lVar10 = lVar10 + -0x10;
        bVar3 = uVar11 < 2;
        uVar11 = uVar11 - 1;
        if (bVar3) {
          iVar5 = *(int *)(param_1 + 0x32c) + -1;
          *(int *)(param_1 + 0x32c) = iVar5;
          if (!bVar8) {
            return;
          }
          goto LAB_1417c7894;
        }
      }
      uVar6 = uVar11 - 1;
      bVar8 = true;
    } while (1 < uVar11);
    iVar5 = *(int *)(param_1 + 0x32c) + -1;
    *(int *)(param_1 + 0x32c) = iVar5;
LAB_1417c7894:
    if (iVar5 < 1) {
      iVar5 = *(int *)(param_1 + 800);
      iVar7 = iVar5;
      if (0 < iVar5) {
        iVar9 = 0;
        do {
          if (((*(int *)(*plVar1 + 8 + (longlong)iVar9 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*plVar1 + (longlong)iVar9 * 0x10), plVar2 == (longlong *)0x0)
              ) || (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(plVar1,iVar9);
            FUN_14005b248(plVar1);
          }
          else {
            iVar9 = iVar9 + 1;
          }
          iVar7 = *(int *)(param_1 + 800);
        } while (iVar9 < iVar7);
      }
      iVar9 = 2;
      if (2 < iVar7 * 2) {
        iVar9 = iVar7 * 2;
      }
      *(int *)(param_1 + 0x328) = iVar9;
      if ((iVar9 < iVar5) && (*(int *)(param_1 + 0x324) != iVar7)) {
        FUN_14045812c(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1417c7930 FUN_1417c7930 body=60 status=ok
// SIG undefined FUN_1417c7930(void)

undefined8 FUN_1417c7930(void)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)FUN_140389788();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x48)) & 0xffffffffffffff04
  ;
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 2);
}



// FUNCTION 1417c796c FUN_1417c796c body=505 status=ok
// SIG undefined FUN_1417c796c(void)

void FUN_1417c796c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    plVar6 = (longlong *)FUN_140389788();
    lVar7 = plVar6[0x22];
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 1000))(plVar6);
      lVar7 = plVar6[0x22];
    }
    if (((((*(byte *)(lVar7 + 0x48) & 4) != 0) &&
         (lVar7 = *(longlong *)(param_1 + 0xd0), lVar7 != 0)) &&
        (lVar7 != 8 && *(longlong *)(lVar7 + 0xb4) == DAT_14cb08720)) &&
       (*(char *)(lVar7 + 0x290) == '\0')) {
      FUN_145d75160(DAT_14c98e618,1,0);
    }
  }
  plVar6 = *(longlong **)(DAT_14c968088 + 8);
  plVar3 = *(longlong **)(DAT_14c968088 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (plVar6 != (longlong *)0x0) {
    plVar2 = (longlong *)(param_1 + 0x1a8);
    lVar7 = param_1 + 0x1b8;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = lVar7;
    if (*(int *)(param_1 + 0x1d0) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar8 = *(int *)(param_1 + 0x1d0);
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    uVar4 = local_70;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar5 = local_70._4_4_;
    local_88 = plVar2;
    if ((local_70._4_4_ != iVar8) || (local_70 = uVar4, uStack_58 != lVar7)) {
      do {
        do {
          local_70 = uVar4;
          (**(code **)(*plVar6 + 0x58))
                    (plVar6,*(undefined4 *)(*local_88 + (longlong)iVar5 * 0x18),
                     *(undefined8 *)(*local_88 + 8 + (longlong)iVar5 * 0x18));
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
          FUN_1449c0562(&local_80);
          iVar5 = local_70._4_4_;
          uVar4 = local_70;
        } while (local_70._4_4_ != iVar8);
      } while ((CONCAT44(uStack_74,uStack_78) != lVar7) || (local_88 != plVar2));
    }
  }
  *(undefined1 *)(param_1 + 0x3a5) = 1;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c7b66 FUN_1417c7b66 body=281 status=ok
// SIG undefined FUN_1417c7b66(void)

void FUN_1417c7b66(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  longlong local_38;
  longlong *local_30;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    plVar3 = (longlong *)FUN_140389788();
    lVar4 = plVar3[0x22];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      lVar4 = plVar3[0x22];
    }
    if ((*(byte *)(lVar4 + 0x48) & 4) != 0) {
      cVar2 = FUN_1469af6ea(DAT_14c98e618);
      if (cVar2 == '\0') {
        (**(code **)(*param_2 + 0x110))(param_2,&local_28,0);
        FUN_140761b7a(param_1 + -0x28,&local_38);
        if (local_38 != 0) {
          cVar2 = FUN_14697e01e();
          if (cVar2 == '\0') {
            local_40 = (double)local_24;
            local_48 = (double)local_28;
            FUN_145d75160(DAT_14c98e618,0);
          }
        }
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_30 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c7c80 FUN_1417c7c80 body=101 status=ok
// SIG undefined FUN_1417c7c80(void)

undefined1 * FUN_1417c7c80(undefined8 param_1,undefined1 *param_2,char param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)FUN_1401e2c50();
  lVar4 = plVar3[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar4 = plVar3[0x22];
  }
  cVar1 = *(char *)(lVar4 + 0x38);
  if (((cVar1 == '\x03') || ((param_3 == '\0' && (cVar1 == '\x01')))) ||
     ((param_3 != '\x01' && (cVar1 == '\x02')))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *param_2 = uVar2;
  param_2[1] = 1;
  return param_2;
}



// FUNCTION 1417c7ce6 FUN_1417c7ce6 body=1508 status=ok
// SIG undefined FUN_1417c7ce6(void)

ulonglong FUN_1417c7ce6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  wchar_t *pwVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  undefined8 uVar6;
  wchar_t *pwVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  undefined7 uVar5;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar4 = CONCAT71(uVar5,1);
  local_38 = param_3;
  cVar2 = FUN_140988638(&local_38,L"FORCEFULLSCREEN",1);
  if (cVar2 == '\0') {
    lVar1 = param_1 + -0x38;
    uVar4 = CONCAT71(uVar5,1);
    cVar2 = FUN_140988638(&local_38,L"SHOW",1);
    if (cVar2 == '\0') {
      uVar4 = CONCAT71(uVar5,1);
      cVar2 = FUN_140988638(&local_38,L"SHOWLAYER",1);
      if (cVar2 == '\0') {
        uVar4 = CONCAT71(uVar5,1);
        cVar2 = FUN_140988638(&local_38,L"VIEWMODE",1);
        if (cVar2 == '\0') {
          uVar4 = CONCAT71(uVar5,1);
          cVar2 = FUN_140988638(&local_38,L"NEXTVIEWMODE",1);
          if (cVar2 == '\0') {
            uVar4 = CONCAT71(uVar5,1);
            cVar2 = FUN_140988638(&local_38,L"PREVVIEWMODE",1);
            if (cVar2 == '\0') {
              uVar4 = CONCAT71(uVar5,1);
              cVar2 = FUN_140988638(&local_38,L"PRECACHE",1);
              if (cVar2 == '\0') {
                uVar4 = CONCAT71(uVar5,1);
                cVar2 = FUN_140988638(&local_38,L"TOGGLE_FULLSCREEN",1);
                if (cVar2 == '\0') {
                  cVar2 = FUN_140988638(&local_38,L"FULLSCREEN",1);
                  if (cVar2 == '\0') {
                    uVar4 = CONCAT71(uVar5,1);
                    cVar2 = FUN_140988638(&local_38,L"SETRES",1);
                    if (cVar2 == '\0') {
                      uVar4 = CONCAT71(uVar5,1);
                      cVar2 = FUN_140988638(&local_38,L"HighResShot",1);
                      if (cVar2 == '\0') {
                        cVar2 = FUN_140988638(&local_38,L"HighResShotUI",1);
                        if (cVar2 == '\0') {
                          uVar4 = CONCAT71(uVar5,1);
                          cVar2 = FUN_140988638(&local_38,L"SHOT",1);
                          if (cVar2 == '\0') {
                            cVar2 = FUN_140988638(&local_38,L"SCREENSHOT",1);
                            if (cVar2 == '\0') {
                              cVar2 = FUN_140988638(&local_38,L"BUGSCREENSHOTWITHHUDINFO",1);
                              if (cVar2 == '\0') {
                                cVar2 = FUN_140988638(&local_38,L"BUGSCREENSHOT",1);
                                if (cVar2 == '\0') {
                                  uVar4 = CONCAT71(uVar5,1);
                                  cVar2 = FUN_140988638(&local_38,L"KILLPARTICLES",1);
                                  if (cVar2 == '\0') {
                                    uVar4 = CONCAT71(uVar5,1);
                                    cVar2 = FUN_140988638(&local_38,L"FORCESKELLOD",1);
                                    if (cVar2 == '\0') {
                                      uVar4 = CONCAT71(uVar5,1);
                                      cVar2 = FUN_140988638(&local_38,L"DISPLAY",1);
                                      if (cVar2 == '\0') {
                                        uVar4 = CONCAT71(uVar5,1);
                                        cVar2 = FUN_140988638(&local_38,L"DISPLAYALL",1);
                                        if (cVar2 == '\0') {
                                          uVar4 = CONCAT71(uVar5,1);
                                          cVar2 = FUN_140988638(&local_38,L"DISPLAYALLLOCATION",1);
                                          if (cVar2 == '\0') {
                                            uVar4 = CONCAT71(uVar5,1);
                                            cVar2 = FUN_140988638(&local_38,L"DISPLAYALLROTATION",1)
                                            ;
                                            if (cVar2 == '\0') {
                                              uVar4 = CONCAT71(uVar5,1);
                                              cVar2 = FUN_140988638(&local_38,L"DISPLAYCLEAR",1);
                                              if (cVar2 == '\0') {
                                                uVar4 = CONCAT71(uVar5,1);
                                                cVar2 = FUN_140988638(&local_38,L"GETALLLOCATION",1)
                                                ;
                                                if (cVar2 == '\0') {
                                                  uVar4 = CONCAT71(uVar5,1);
                                                  cVar2 = FUN_140988638(&local_38,L"GETALLROTATION",
                                                                        1);
                                                  if (cVar2 == '\0') {
                                                    cVar2 = FUN_140988638(&local_38,L"TEXTUREDEFRAG"
                                                                          ,1);
                                                    if (cVar2 == '\0') {
                                                      cVar2 = FUN_140988638(&local_38,
                                                                            L"TOGGLEMIPFADE",1);
                                                      if (cVar2 == '\0') {
                                                        cVar2 = FUN_140988638(&local_38,
                                                                              L"PAUSERENDERCLOCK",1)
                                                        ;
                                                        if (cVar2 == '\0') {
                                                          uVar4 = CONCAT71(uVar5,1);
                                                          cVar2 = FUN_140988638(&local_38,
                                                                                L"TOGGLEHDR",1);
                                                          if (cVar2 == '\0') {
                                                            uVar4 = 0;
                                                          }
                                                          else {
                                                            FUN_147acedb2();
                                                          }
                                                          goto LAB_1417c8085;
                                                        }
                                                        pwVar7 = L"PAUSED";
                                                        if (DAT_14ca95145 != 0) {
                                                          pwVar7 = L"RUNNING";
                                                        }
                                                        pwVar3 = 
                                                  L"The global realtime rendering clock is now: %s";
                                                  DAT_14ca95145 = DAT_14ca95145 ^ 1;
                                                  }
                                                  else {
                                                    DAT_14c760e58 =
                                                         *(float *)(&DAT_149e1eeb0 +
                                                                   (ulonglong)(0.0 <= DAT_14c760e58)
                                                                   * 4);
                                                    pwVar7 = L"DISABLED";
                                                    if (0.0 <= DAT_14c760e58) {
                                                      pwVar7 = L"ENABLED";
                                                    }
                                                    pwVar3 = L"Mip-fading is now: %s";
                                                  }
                                                  uVar4 = CONCAT71(uVar5,1);
                                                  FUN_140047918(param_4,pwVar3,pwVar7);
                                                  }
                                                  }
                                                  else {
                                                    FUN_147acea32(local_38,param_4);
                                                  }
                                                }
                                                else {
                                                  FUN_147ace7d2(local_38,param_4);
                                                }
                                              }
                                              else {
                                                *(undefined4 *)(param_1 + 0x18) = 0;
                                                if (*(int *)(param_1 + 0x1c) != 0) {
                                                  FUN_147ad3bb4(param_1 + 0x10);
                                                }
                                              }
                                            }
                                            else {
                                              FUN_147ace5c2(lVar1,local_38,param_4);
                                            }
                                          }
                                          else {
                                            FUN_147ace136(lVar1,local_38,param_4);
                                          }
                                        }
                                        else {
                                          FUN_147acdcfc(lVar1,local_38,param_4);
                                        }
                                      }
                                      else {
                                        FUN_147acdb68(lVar1,local_38,param_4);
                                      }
                                    }
                                    else {
                                      FUN_147acda58(local_38,param_2);
                                    }
                                  }
                                  else {
                                    FUN_147acd99e();
                                  }
                                  goto LAB_1417c8085;
                                }
                                uVar6 = 0;
                              }
                              else {
                                uVar6 = 1;
                              }
                              uVar4 = CONCAT71(uVar5,1);
                              FUN_147acf026(lVar1,local_38,uVar6);
                              goto LAB_1417c8085;
                            }
                          }
                          FUN_147acd872(lVar1,local_38);
                        }
                      }
                      else {
                        FUN_147acd7dc(lVar1,local_38,param_4);
                      }
                    }
                    else {
                      FUN_147acd692(lVar1,local_38);
                    }
                    goto LAB_1417c8085;
                  }
                }
                FUN_147acbbb6(lVar1);
              }
              else {
                (**(code **)(*(longlong *)(param_1 + -0x10) + 8))(param_1 + -0x10);
              }
            }
            else {
              FUN_147acd568(lVar1,param_4,param_2);
            }
          }
          else {
            FUN_147acd440(lVar1,param_4,param_2);
          }
        }
        else {
          FUN_147acd138(lVar1,local_38,param_4,param_2);
        }
      }
      else {
        FUN_147accdee(local_38,param_4,param_2);
      }
    }
    else {
      FUN_1434fef88(lVar1,local_38,param_4,param_2);
    }
  }
  else {
    DAT_14cadb8d8 = DAT_14cadb8d8 ^ 1;
  }
LAB_1417c8085:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417c82cc FUN_1417c82cc body=755 status=ok
// SIG undefined FUN_1417c82cc(void)

void FUN_1417c82cc(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_14cadba08 != 0) goto LAB_1417c82e5;
  lVar3 = FUN_1459e73d2();
  if (*(longlong *)(lVar3 + 0x110) != 0) {
    lVar4 = FUN_1459e73d2();
    lVar3 = *(longlong *)(lVar3 + 0x110);
    if (lVar3 != 0) {
      DAT_14cadba08 = 0;
      if ((lVar4 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0)) goto LAB_1417c82e5;
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        DAT_14cadba08 = 0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          DAT_14cadba08 = lVar3;
        }
        goto LAB_1417c82e5;
      }
    }
  }
  DAT_14cadba08 = 0;
LAB_1417c82e5:
  lVar3 = DAT_14cadba08;
  *(undefined4 *)(param_1 + 0x714) = *(undefined4 *)(DAT_14cadba08 + 0x3c);
  *(undefined4 *)(param_1 + 0x718) = *(undefined4 *)(lVar3 + 0x40);
  *(undefined4 *)(param_1 + 0x71c) = *(undefined4 *)(lVar3 + 0x44);
  *(undefined4 *)(param_1 + 0x720) = *(undefined4 *)(lVar3 + 0x48);
  *(undefined4 *)(param_1 + 0x724) = *(undefined4 *)(lVar3 + 0x4c);
  *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(lVar3 + 0x50);
  *(undefined4 *)(param_1 + 0x72c) = *(undefined4 *)(lVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x730) = *(undefined4 *)(lVar3 + 0x58);
  *(undefined4 *)(param_1 + 0x734) = *(undefined4 *)(lVar3 + 0x5c);
  *(undefined4 *)(param_1 + 0x738) = *(undefined4 *)(lVar3 + 0x60);
  *(undefined4 *)(param_1 + 0x73c) = *(undefined4 *)(lVar3 + 100);
  *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(lVar3 + 0x68);
  *(undefined4 *)(param_1 + 0x744) = *(undefined4 *)(lVar3 + 0x6c);
  *(undefined4 *)(param_1 + 0x748) = *(undefined4 *)(lVar3 + 0x70);
  *(undefined4 *)(param_1 + 0x74c) = *(undefined4 *)(lVar3 + 0x74);
  *(undefined4 *)(param_1 + 0x750) = *(undefined4 *)(lVar3 + 0x78);
  *(undefined4 *)(param_1 + 0x754) = *(undefined4 *)(lVar3 + 0x7c);
  *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(lVar3 + 0x80);
  *(undefined4 *)(param_1 + 0x75c) = *(undefined4 *)(lVar3 + 0x84);
  *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(lVar3 + 0x88);
  *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(lVar3 + 0x8c);
  *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(lVar3 + 0x90);
  *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(lVar3 + 0x94);
  *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(lVar3 + 0x98);
  *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(lVar3 + 0x9c);
  *(undefined4 *)(param_1 + 0x778) = *(undefined4 *)(lVar3 + 0xa0);
  *(undefined4 *)(param_1 + 0x77c) = *(undefined4 *)(lVar3 + 0xa4);
  *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(lVar3 + 0xa8);
  *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(lVar3 + 0xac);
  *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(lVar3 + 0xb0);
  *(undefined4 *)(param_1 + 0x78c) = *(undefined4 *)(lVar3 + 0xb4);
  *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(lVar3 + 0xb8);
  *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(lVar3 + 0xbc);
  *(undefined4 *)(param_1 + 0x798) = *(undefined4 *)(lVar3 + 0xc0);
  *(undefined4 *)(param_1 + 0x79c) = *(undefined4 *)(lVar3 + 0xc4);
  *(undefined4 *)(param_1 + 0x7a4) = *(undefined4 *)(lVar3 + 0xcc);
  *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(lVar3 + 200);
  *(undefined4 *)(param_1 + 0x7a8) = *(undefined4 *)(lVar3 + 0xd0);
  *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(lVar3 + 0xd4);
  *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(lVar3 + 0xd8);
  *(undefined4 *)(param_1 + 0x7b4) = *(undefined4 *)(lVar3 + 0xdc);
  uVar2 = *(undefined8 *)(lVar3 + 0xe8);
  *(undefined8 *)(param_1 + 0x7b8) = *(undefined8 *)(lVar3 + 0xe0);
  *(undefined8 *)(param_1 + 0x7c0) = uVar2;
  *(undefined1 *)(param_1 + 0x710) = *(undefined1 *)(lVar3 + 0x38);
  return;
}



// FUNCTION 1417c85c0 FUN_1417c85c0 body=66 status=ok
// SIG undefined FUN_1417c85c0(void)

void FUN_1417c85c0(undefined8 param_1)

{
  char cVar1;
  
  if (DAT_14cadbb28 != 0) {
    cVar1 = FUN_1447ffd82(DAT_14cadbb28 + 8,param_1);
    if (cVar1 != '\0') {
      FUN_1449db8d8(DAT_14cadbb28);
      *(undefined8 *)(DAT_14cadbb28 + 8) = 0;
    }
  }
  return;
}



// FUNCTION 1417c8602 FUN_1417c8602 body=29 status=ok
// SIG undefined FUN_1417c8602(void)

undefined8 FUN_1417c8602(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417c8620 FUN_1417c8620 body=93 status=ok
// SIG undefined FUN_1417c8620(void)

void FUN_1417c8620(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a909b80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1417c867e FUN_1417c867e body=135 status=ok
// SIG undefined FUN_1417c867e(void)

void FUN_1417c867e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 1417c8706 FUN_1417c8706 body=9 status=ok
// SIG undefined FUN_1417c8706(void)

void FUN_1417c8706(longlong param_1)

{
  FUN_1401a54fe(param_1 + 0x10);
  return;
}



// FUNCTION 1417c8710 FUN_1417c8710 body=29 status=ok
// SIG undefined FUN_1417c8710(void)

undefined8 FUN_1417c8710(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417c872e FUN_1417c872e body=383 status=ok
// SIG undefined FUN_1417c872e(void)

ulonglong FUN_1417c872e(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar8 = (ulonglong)uVar3;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar5 = iVar10 - uVar3;
  uVar6 = (ulonglong)uVar5;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar5 * 0x48)) || ((int)(uVar3 * 3) < iVar10 * 2)) &&
     ((uVar3 == 0 || (0x40 < (int)uVar5)))) {
    if (0 < (int)uVar3) {
      uVar8 = uVar8 * 0x48;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar6 = uVar8 + 0xf;
          if (uVar3 < 0x1c7) {
            uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
          }
          else {
            if ((uVar6 & 0x7ffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_1417c87d6;
                lVar1 = uVar7 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar8 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar8 = (ulonglong)DAT_14c841df8;
            }
            uVar8 = -uVar8 & ((uVar6 & 0x7ffffffff0) + uVar8) - 1;
          }
        }
        else {
          uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,8);
          iVar10 = *(int *)(param_1 + 0xc);
        }
      }
LAB_1417c87d6:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      uVar6 = SUB168(auVar4 * ZEXT816(0xe38e38e38e38e38f),0);
      uVar8 = uVar8 / 0x48;
    }
    if ((int)uVar8 != iVar10) {
      *(int *)(param_1 + 0xc) = (int)uVar8;
      uVar6 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar8,0x48,8);
    }
  }
  return uVar6;
}



// FUNCTION 1417c88ad FUN_1417c88ad body=102 status=ok
// SIG undefined FUN_1417c88ad(void)

void FUN_1417c88ad(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ead26(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a90cfc0;
  puVar1[5] = &PTR_FUN_14a90d5a0;
  puVar1[6] = &PTR_LAB_14a90d5e0;
  puVar1[0x58] = 0x3e4ccccd3ca3d70a;
  *(undefined4 *)(puVar1 + 0x59) = 0;
  puVar1[99] = 0;
  *(undefined1 *)((longlong)puVar1 + 0x1fb) = 0;
  return;
}



// FUNCTION 1417c8914 FUN_1417c8914 body=2961 status=ok
// SIG undefined FUN_1417c8914(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417c8914(longlong param_1)

{
  uint uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  double dVar13;
  char cVar14;
  int iVar15;
  undefined8 *puVar16;
  byte bVar17;
  longlong lVar18;
  double *pdVar19;
  double *pdVar20;
  byte bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar31;
  undefined1 auVar30 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_238 [32];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  double local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  double local_1d8 [4];
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  double local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  double local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) | 2;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  if ((*(byte *)(param_1 + 0x2a8) & 1) != 0) {
    if ((((DAT_14c76152c == '\x01') && (*(char *)(param_1 + 0x1fc) != '\0')) &&
        ((lVar18 = *(longlong *)(param_1 + 0xb0), lVar18 != 0 ||
         (lVar18 = FUN_1448abda6(param_1), lVar18 != 0)))) &&
       ((((*(byte *)(lVar18 + 0x152) == 1 || (*(byte *)(lVar18 + 0x152) - 5 < 2)) &&
         (*(longlong *)(lVar18 + 0x178) != 0)) && (DAT_14c76152c == '\x01')))) {
      bVar17 = *(byte *)(param_1 + 0x1fc);
      iVar15 = *(int *)(*(longlong *)(lVar18 + 0x178) + 0x3e4);
      if (iVar15 < 0) {
        iVar15 = FUN_141348de4();
      }
      if (iVar15 < (int)(uint)bVar17) goto LAB_1417c93a0;
    }
    if (((int)(uint)*(byte *)(param_1 + 0x1fc) <= DAT_14cb0cbf8) &&
       ((*(byte *)(param_1 + 0x1f8) & 0x20) != 0)) {
      if ((((*(byte *)(param_1 + 0x1fc) != 0) && (DAT_14c76152c != '\0')) &&
          ((lVar18 = *(longlong *)(param_1 + 0xb0), lVar18 != 0 ||
           (lVar18 = FUN_1448abda6(param_1), lVar18 != 0)))) &&
         (((*(byte *)(lVar18 + 0x152) == 1 || (*(byte *)(lVar18 + 0x152) - 5 < 2)) &&
          ((*(longlong *)(lVar18 + 0x178) != 0 && (DAT_14c76152c == '\x01')))))) {
        bVar17 = *(byte *)(param_1 + 0x1fc);
        iVar15 = *(int *)(*(longlong *)(lVar18 + 0x178) + 0x3e4);
        if (iVar15 < 0) {
          iVar15 = FUN_141348de4();
        }
        if (iVar15 < (int)(uint)bVar17) goto LAB_1417c93a0;
      }
      if (((((int)(uint)*(byte *)(param_1 + 0x1fc) <= DAT_14cb0cbf8) &&
           (cVar14 = FUN_140041326(param_1), cVar14 != '\0')) &&
          ((*(byte *)(param_1 + 0x9c) & 1) != 0)) &&
         (((*(longlong *)(param_1 + 0x20) == 0 ||
           ((*(uint *)(*(longlong *)(param_1 + 0x20) + 8) & 0x10) == 0)) &&
          (uVar1 = *(uint *)(param_1 + 0x2b0),
          ((uVar1 >> 0xb | uVar1 >> 10 | uVar1 >> 9 | uVar1 >> 6 | uVar1 |
           uVar1 >> 1 | *(uint *)(param_1 + 700) |
           uVar1 >> 8 | uVar1 >> 7 | uVar1 >> 5 | uVar1 >> 4 | uVar1 >> 3 | uVar1 >> 2) & 1) != 0)))
         ) {
        puVar16 = (undefined8 *)FUN_14001cc68(0x100,0x10);
        puVar16[0x14] = 0x3e4ccccd3ca3d70a;
        *(undefined4 *)(puVar16 + 0x15) = 0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cadc078) &&
           (FUN_144b3d300(&DAT_14cadc078), DAT_14cadc078 == -1)) {
          DAT_14cadc040 = 0.0;
          DAT_14cadc048 = 0.0;
          DAT_14cadc050 = 0.0;
          DAT_14cadc058 = 1.0;
          DAT_14cadc060 = 1.0;
          DAT_14cadc068 = 1.0;
          _DAT_14cadc070 = 1.7320508075688772;
          _Init_thread_footer(&DAT_14cadc078);
        }
        dVar7 = *(double *)(param_1 + 0x240);
        dVar13 = *(double *)(param_1 + 0x248);
        dVar4 = *(double *)(param_1 + 0x250);
        local_f8 = *(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x260);
        uStack_f0 = *(undefined8 *)(param_1 + 0x268);
        local_218 = *(undefined1 (*) [16])(param_1 + 0x260);
        local_1e8 = *(undefined4 *)(param_1 + 0x270);
        uStack_1e4 = *(undefined4 *)(param_1 + 0x274);
        uStack_1e0 = *(undefined8 *)(param_1 + 0x278);
        dVar9 = *(double *)(param_1 + 0x280) * 500.0;
        dVar10 = *(double *)(param_1 + 0x288) * 500.0;
        dVar28 = *(double *)(param_1 + 0x290) * 500.0;
        dVar29 = *(double *)(param_1 + 600);
        dVar2 = dVar13 + dVar13;
        dVar32 = dVar4 + dVar4;
        dVar5 = dVar7 * (dVar7 + dVar7);
        dVar25 = (1.0 - (dVar4 * dVar32 + dVar13 * dVar2)) * dVar9;
        dVar26 = (1.0 - (dVar4 * dVar32 + dVar5)) * dVar10;
        dVar11 = (1.0 - (dVar5 + dVar13 * dVar2)) * dVar28;
        dVar5 = *(double *)(param_1 + 0x240) * dVar32;
        dVar33 = dVar32 * dVar29;
        dVar34 = (dVar7 + dVar7) * *(double *)(param_1 + 600);
        dVar29 = dVar2 * dVar29;
        dVar6 = (dVar2 * dVar7 + dVar33) * dVar9;
        dVar8 = (dVar32 * dVar13 + dVar34) * dVar10;
        dVar4 = (dVar29 + dVar5) * dVar28;
        dVar2 = (dVar2 * dVar7 - dVar33) * dVar10;
        dVar28 = (dVar32 * dVar13 - dVar34) * dVar28;
        dVar29 = (dVar5 - dVar29) * dVar9;
        local_158._8_4_ = SUB84(dVar6,0);
        local_158._0_8_ = dVar25;
        local_158._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        uStack_140 = 0;
        local_138._8_4_ = SUB84(dVar26,0);
        local_138._0_8_ = dVar2;
        local_138._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
        uStack_120 = 0;
        local_118._8_4_ = SUB84(dVar28,0);
        local_118._0_8_ = dVar4;
        local_118._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
        uStack_1f0 = 0;
        uStack_100 = 0;
        uStack_e0 = 0;
        uStack_dc = 0x3ff00000;
        local_208._8_4_ = SUB84(dVar10,0);
        local_208._0_8_ = dVar9;
        local_208._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        local_1f8 = dVar11;
        local_148 = dVar29;
        local_128 = dVar8;
        local_108 = dVar11;
        local_e8 = local_1e8;
        uStack_e4 = uStack_1e4;
        if (((((9.99999993922529e-09 < ABS(dVar25)) || (9.99999993922529e-09 < ABS(dVar6))) ||
             (9.99999993922529e-09 < ABS(dVar29))) ||
            (((9.99999993922529e-09 < ABS(dVar2) || (9.99999993922529e-09 < ABS(dVar26))) ||
             ((9.99999993922529e-09 < ABS(dVar8) ||
              ((9.99999993922529e-09 < ABS(dVar4) || (9.99999993922529e-09 < ABS(dVar28))))))))) ||
           (9.99999993922529e-09 < ABS(dVar11))) {
          FUN_14007522e(local_1d8,local_158);
        }
        else {
          pdVar19 = (double *)&DAT_14c846400;
          pdVar20 = local_1d8;
          for (lVar18 = 0x10; lVar18 != 0; lVar18 = lVar18 + -1) {
            *pdVar20 = *pdVar19;
            pdVar19 = pdVar19 + 1;
            pdVar20 = pdVar20 + 1;
          }
        }
        *(float *)(puVar16 + 8) = (float)local_1d8[0];
        *(float *)((longlong)puVar16 + 0x44) = (float)local_1d8[1];
        *(float *)(puVar16 + 9) = (float)local_1d8[2];
        *(float *)((longlong)puVar16 + 0x4c) = (float)local_1d8[3];
        *(float *)(puVar16 + 10) = (float)local_1b8;
        *(float *)((longlong)puVar16 + 0x54) = (float)local_1b0;
        *(float *)(puVar16 + 0xb) = (float)local_1a8;
        *(float *)((longlong)puVar16 + 0x5c) = (float)local_1a0;
        *(float *)(puVar16 + 0xc) = (float)local_198;
        *(float *)((longlong)puVar16 + 100) = (float)local_190;
        *(float *)(puVar16 + 0xd) = (float)local_188;
        *(float *)((longlong)puVar16 + 0x6c) = (float)local_180;
        *(float *)(puVar16 + 0xe) = (float)local_178;
        *(float *)((longlong)puVar16 + 0x74) = (float)local_170;
        *(float *)(puVar16 + 0xf) = (float)local_168;
        *(float *)((longlong)puVar16 + 0x7c) = (float)local_160;
        dVar5 = (double)local_218._8_8_ +
                DAT_14cadc050 * dVar28 + dVar26 * DAT_14cadc048 + DAT_14cadc040 * dVar6;
        local_218._8_4_ = SUB84(dVar5,0);
        local_218._0_8_ =
             (double)local_218._0_8_ +
             DAT_14cadc050 * dVar4 + dVar2 * DAT_14cadc048 + DAT_14cadc040 * dVar25;
        local_218._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        dVar9 = ABS(dVar4 * DAT_14cadc068) +
                ABS(dVar2 * DAT_14cadc060) + ABS(dVar25 * DAT_14cadc058);
        dVar10 = ABS(dVar28 * DAT_14cadc068) +
                 ABS(dVar26 * DAT_14cadc060) + ABS(dVar6 * DAT_14cadc058);
        dVar7 = ABS(DAT_14cadc068 * local_1f8) +
                ABS(DAT_14cadc060 * dVar8) + ABS(DAT_14cadc058 * dVar29);
        dVar5 = DAT_14cadc040 * dVar29;
        dVar32 = DAT_14cadc048 * dVar8;
        dVar11 = dVar11 * DAT_14cadc050;
        dVar13 = (double)CONCAT44(uStack_1e4,local_1e8);
        dVar2 = dVar4 * dVar4 + dVar2 * dVar2 + dVar25 * dVar25;
        dVar28 = dVar28 * dVar28 + dVar26 * dVar26 + dVar6 * dVar6;
        dVar29 = local_1f8 * local_1f8 + dVar29 * dVar29 + dVar8 * dVar8;
        if (dVar2 <= dVar28) {
          dVar2 = dVar28;
        }
        if (dVar2 <= dVar29) {
          dVar2 = dVar29;
        }
        uVar31 = uStack_1f0;
        if (dVar2 < 0.0) {
          dVar2 = sqrt(dVar2);
        }
        else {
          dVar2 = SQRT(dVar2);
        }
        dVar29 = SQRT(dVar10 * dVar10 + dVar7 * dVar7 + dVar9 * dVar9);
        dVar28 = dVar2 * _DAT_14cadc070;
        if (dVar29 <= dVar2 * _DAT_14cadc070) {
          dVar28 = dVar29;
        }
        *puVar16 = local_218._0_8_;
        puVar16[1] = local_218._8_8_;
        puVar16[2] = dVar13 + dVar11 + dVar32 + dVar5;
        auVar3._8_4_ = SUB84(dVar10,0);
        auVar3._0_8_ = dVar9;
        auVar3._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(puVar16 + 3) = auVar3;
        puVar16[5] = dVar7;
        puVar16[6] = dVar28;
        fVar24 = 0.0;
        if (0.0 <= *(float *)(param_1 + 0x2ac)) {
          fVar24 = *(float *)(param_1 + 0x2ac);
        }
        auVar12._4_8_ = uVar31;
        auVar12._0_4_ = local_208._4_4_;
        auVar30._0_8_ = auVar12._0_8_ << 0x20;
        auVar30._8_4_ = local_208._8_4_;
        auVar30._12_4_ = local_208._12_4_;
        fVar23 = 1.0;
        if (1.0 <= (float)auVar30._8_8_) {
          fVar23 = (float)auVar30._8_8_;
        }
        uVar1 = *(uint *)(param_1 + 0x2a8);
        bVar17 = (byte)uVar1 >> 1 & 1;
        *(byte *)(puVar16 + 0x12) = bVar17;
        fVar35 = 0.0;
        if ((uVar1 & 4) != 0) {
          fVar35 = fVar24;
        }
        fVar27 = 1e-08;
        fVar22 = fVar27;
        if (1e-08 <= fVar35) {
          fVar22 = fVar35;
        }
        *(float *)(puVar16 + 0x11) = fVar22 / fVar23;
        fVar35 = 0.0;
        if ((uVar1 & 8) != 0) {
          fVar35 = fVar24;
        }
        fVar22 = 1.0;
        if (1.0 <= (float)local_208._0_8_) {
          fVar22 = (float)local_208._0_8_;
        }
        fVar36 = fVar27;
        if (1e-08 <= fVar35) {
          fVar36 = fVar35;
        }
        *(float *)((longlong)puVar16 + 0x8c) = fVar36 / -fVar23;
        fVar23 = 0.0;
        if ((uVar1 & 0x10) != 0) {
          fVar23 = fVar24;
        }
        if (1e-08 <= fVar23) {
          fVar27 = fVar23;
        }
        *(float *)(puVar16 + 0x10) = fVar27 / -fVar22;
        fVar23 = 0.0;
        if ((uVar1 & 0x20) != 0) {
          fVar23 = fVar24;
        }
        fVar24 = 1e-08;
        if (1e-08 <= fVar23) {
          fVar24 = fVar23;
        }
        *(float *)((longlong)puVar16 + 0x84) = fVar24 / fVar22;
        uVar1 = *(uint *)(param_1 + 0x2b0);
        bVar21 = 1;
        if ((uVar1 & 0xc40) == 0) {
          bVar21 = bVar17;
        }
        *(byte *)((longlong)puVar16 + 0x91) = bVar21;
        *(uint *)((longlong)puVar16 + 0x94) =
             ((uVar1 & 0x180 | uVar1 * 2 & 0x78) + (uVar1 & 0x40) * 8 | uVar1 * 2 & 0x1c00 |
             uVar1 & 3 | *(uint *)((longlong)puVar16 + 0x94) & 0xffffe000) +
             (*(uint *)(param_1 + 700) & 1) * 4;
        *(undefined4 *)(puVar16 + 0x13) = *(undefined4 *)(param_1 + 0x2b4);
        *(undefined4 *)((longlong)puVar16 + 0x9c) = *(undefined4 *)(param_1 + 0x2b8);
        *(undefined4 *)(puVar16 + 0x15) = *(undefined4 *)(param_1 + 0x2c8);
        puVar16[0x14] = *(undefined8 *)(param_1 + 0x2c0);
        *(undefined4 *)((longlong)puVar16 + 0xac) = *(undefined4 *)(param_1 + 0x2ec);
        *(undefined4 *)(puVar16 + 0x16) = *(undefined4 *)(param_1 + 0x2f0);
        uVar31 = *(undefined8 *)(param_1 + 0x2d4);
        *(undefined8 *)((longlong)puVar16 + 0xb4) = *(undefined8 *)(param_1 + 0x2cc);
        *(undefined8 *)((longlong)puVar16 + 0xbc) = uVar31;
        uVar31 = *(undefined8 *)(param_1 + 0x2e4);
        *(undefined8 *)((longlong)puVar16 + 0xc4) = *(undefined8 *)(param_1 + 0x2dc);
        *(undefined8 *)((longlong)puVar16 + 0xcc) = uVar31;
        *(undefined4 *)((longlong)puVar16 + 0xd4) = *(undefined4 *)(param_1 + 0x2f8);
        uVar31 = *(undefined8 *)(param_1 + 0x304);
        puVar16[0x1b] = *(undefined8 *)(param_1 + 0x2fc);
        puVar16[0x1c] = uVar31;
        *(undefined4 *)(puVar16 + 0x1d) = *(undefined4 *)(param_1 + 0x2f4);
        *(undefined4 *)((longlong)puVar16 + 0xec) = *(undefined4 *)(param_1 + 0x30c);
        *(undefined4 *)(puVar16 + 0x1e) = *(undefined4 *)(param_1 + 0x314);
        *(undefined4 *)((longlong)puVar16 + 0xf4) = *(undefined4 *)(param_1 + 0x310);
        *(undefined8 **)(param_1 + 0x318) = puVar16;
        if (*(longlong *)(param_1 + 0xb0) == 0) {
          FUN_1448abda6(param_1);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_238);
      }
    }
  }
LAB_1417c93a0:
  if ((local_d0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417c9516 FUN_1417c9516 body=933 status=ok
// SIG undefined FUN_1417c9516(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1417c9516(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  undefined1 auStack_c8 [40];
  int local_a0;
  int local_9c;
  undefined4 *local_98;
  ulonglong local_90;
  longlong local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  ulonglong local_68;
  undefined *puStack_60;
  ulonglong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14cadc114 == '\x01') {
    if (((DAT_14cadc104 != 0 || _DAT_14cadc100 != 0) || _DAT_14cadc108 != 0) || _DAT_14cadc10c != 0)
    {
      uVar8 = 0;
      goto LAB_1417c9560;
    }
  }
  local_68 = 0x100000000;
  puStack_60 = &DAT_14cadc0b0;
  local_58 = 0xffffffff;
  local_50 = 0;
  uVar7 = 0;
  local_98 = param_1;
  if (DAT_14cadc0c8 == 0) {
    uVar14 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar13 = 0;
    uVar9 = 0;
    uVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar16 = local_68 & 0xffffffff;
    uVar14 = local_68 >> 0x20;
    uVar9 = local_58 >> 0x20;
    iVar13 = DAT_14cadc0c8;
  }
  if ((int)uVar9 != iVar13 || puStack_60 != &DAT_14cadc0b0) {
    local_70 = *(undefined **)(puStack_60 + 0x10);
    if (*(undefined **)(puStack_60 + 0x10) == (undefined *)0x0) {
      local_70 = puStack_60;
    }
    local_88 = DAT_14cadc0a0;
    uVar1 = *(uint *)(puStack_60 + 0x18);
    local_90 = (ulonglong)uVar1;
    local_9c = uVar1 + 0x1e;
    if (-1 < (int)(uVar1 - 1)) {
      local_9c = uVar1 - 1;
    }
    local_9c = local_9c >> 5;
    local_80 = local_70 + 4;
    local_78 = &DAT_14cadc0b0;
    uVar7 = 0;
    uVar17 = (uint)local_58;
    iVar12 = local_50;
    do {
      iVar15 = (int)uVar16;
      lVar19 = (longlong)(int)uVar9 * 0x20;
      iVar6 = *(int *)(DAT_14cadc0a0 + 0x10 + lVar19);
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      uVar11 = 0;
      if (0 < iVar5) {
        puVar10 = &DAT_149dfb77a;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(DAT_14cadc0a0 + lVar19 + 8);
        }
        lVar19 = 0;
        uVar9 = 0;
        do {
          uVar11 = ((uint)(ushort)puVar10[lVar19] +
                   (uint)(0x19 < (ushort)puVar10[lVar19] - 0x61) * 0x20) - 0x20;
          uVar21 = (uint)(uVar9 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar9 ^ uVar11) & 0xff) * 4);
          uVar11 = uVar21 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar21 & 0xff ^ uVar11 >> 8 & 0xff) * 4);
          uVar9 = (ulonglong)uVar11;
          lVar19 = lVar19 + 1;
        } while (iVar5 != (int)lVar19);
      }
      uVar17 = uVar17 & ~(uint)uVar14;
      lVar19 = (longlong)iVar15;
      uVar21 = *(uint *)(local_70 + lVar19 * 4) & uVar17;
      if (uVar21 == 0) {
        iVar12 = iVar12 + 0x20;
        iVar6 = local_9c;
        if (local_9c < iVar15) {
          iVar6 = iVar15;
        }
        if (iVar15 < local_9c) {
          lVar20 = 0;
          do {
            uVar21 = *(uint *)(local_80 + lVar20 * 4 + lVar19 * 4);
            if (uVar21 != 0) {
              uVar16 = (ulonglong)(iVar15 + (int)lVar20 + 1);
              uVar17 = 0xffffffff;
              goto LAB_1417c977c;
            }
            iVar12 = iVar12 + 0x20;
            lVar20 = lVar20 + 1;
          } while (iVar6 - lVar19 != lVar20);
          uVar17 = 0xffffffff;
          iVar15 = iVar6;
        }
        uVar16 = (ulonglong)(iVar15 + 1);
        uVar9 = local_90;
      }
      else {
LAB_1417c977c:
        uVar14 = (ulonglong)(-uVar21 & uVar21);
        uVar9 = uVar14 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar21 = (iVar12 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        uVar9 = (ulonglong)uVar21;
        if ((int)uVar1 <= (int)uVar21) {
          uVar9 = local_90;
        }
      }
      uVar7 = uVar11 >> 0xd ^ uVar7 - uVar11;
      uVar18 = uVar7 << 8 ^ (-0x61c88647 - uVar11) - uVar7;
      uVar21 = uVar18 >> 0xd ^ (uVar11 - uVar7) - uVar18;
      uVar11 = uVar21 >> 0xc ^ (uVar7 - uVar18) - uVar21;
      uVar7 = uVar11 << 0x10 ^ (uVar18 - uVar21) - uVar11;
      uVar21 = uVar7 >> 5 ^ (uVar21 - uVar11) - uVar7;
      uVar11 = uVar21 >> 3 ^ (uVar11 - uVar7) - uVar21;
      uVar7 = uVar11 << 10 ^ (uVar7 - uVar21) - uVar11;
      uVar7 = uVar7 >> 0xf ^ uVar21 - (uVar11 + uVar7);
      local_a0 = iVar13;
    } while ((int)uVar9 != iVar13 || puStack_60 != &DAT_14cadc0b0);
  }
  if (uVar7 == DAT_14cadc110) {
    uVar8 = 0;
    param_1 = local_98;
  }
  else {
    FUN_1412e3d1e(&local_68);
    _DAT_14cadc100 = local_68;
    _DAT_14cadc108 = puStack_60;
    DAT_14cadc114 = '\x01';
    uVar8 = 1;
    param_1 = local_98;
    DAT_14cadc110 = uVar7;
  }
LAB_1417c9560:
  uVar2 = DAT_14cadc104;
  uVar3 = _DAT_14cadc108;
  uVar4 = _DAT_14cadc10c;
  *param_1 = _DAT_14cadc100;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1417c98bc FUN_1417c98bc body=101 status=ok
// SIG undefined FUN_1417c98bc(void)

void FUN_1417c98bc(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140959fa0();
    lVar2 = (**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_140959fa0();
      lVar3 = FUN_144718840(lVar2,uVar1);
      if ((lVar2 != lVar3) && (lVar3 != 0)) {
        FUN_14095a086(lVar3 + 0x20,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1417c9922 FUN_1417c9922 body=448 status=ok
// SIG undefined FUN_1417c9922(void)

void FUN_1417c9922(longlong param_1,uint *param_2,float param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  uint uVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    *(float *)(param_1 + 4) =
         ((float)param_2[1] - *(float *)(param_1 + 4)) * param_3 + *(float *)(param_1 + 4);
    uVar4 = *param_2;
  }
  if ((uVar4 & 2) != 0) {
    *(float *)(param_1 + 8) =
         ((float)param_2[2] - *(float *)(param_1 + 8)) * param_3 + *(float *)(param_1 + 8);
    uVar4 = *param_2;
  }
  if ((uVar4 & 4) != 0) {
    *(float *)(param_1 + 0xc) =
         param_3 * ((float)param_2[3] - *(float *)(param_1 + 0xc)) + *(float *)(param_1 + 0xc);
    uVar4 = *param_2;
  }
  if ((uVar4 & 8) != 0) {
    *(char *)(param_1 + 0x10) = (char)param_2[4];
    uVar4 = *param_2;
  }
  if ((uVar4 & 0x10) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cade0f8) {
      FUN_144b3d300(&DAT_14cade0f8);
      if (DAT_14cade0f8 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar7 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"gbx.Shadow.Virtual.ForegroundProjectionModeDefault",1);
        if (plVar7 == (longlong *)0x0) {
          DAT_14cade0f0 = 0;
        }
        else {
          DAT_14cade0f0 = (**(code **)(*plVar7 + 0x68))(plVar7);
        }
        _Init_thread_footer(&DAT_14cade0f8);
      }
    }
    lVar2 = DAT_14cade0f0;
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    uVar3 = *(undefined1 *)(lVar2 + uVar8 * 4);
  }
  else {
    uVar3 = *(undefined1 *)((longlong)param_2 + 0x11);
  }
  *(undefined1 *)(param_1 + 0x11) = uVar3;
  return;
}



// FUNCTION 1417c9ae2 FUN_1417c9ae2 body=403 status=ok
// SIG undefined FUN_1417c9ae2(void)

bool FUN_1417c9ae2(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  if ((*(ulonglong *)(param_1 + 0x38) & 0x8000000002) != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cade580) && (FUN_144b3d300(&DAT_14cade580), DAT_14cade580 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.gbx.ForceGeometryCollectionMaterialUsageDisabled",1);
      if (plVar4 == (longlong *)0x0) {
        DAT_14cade578 = 0;
      }
      else {
        DAT_14cade578 = (**(code **)(*plVar4 + 0x68))(plVar4);
      }
      _Init_thread_footer(&DAT_14cade580);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cade588) &&
       (FUN_144b3d300(&DAT_14cade588), lVar1 = DAT_14cade578, DAT_14cade588 == -1)) {
      if (DAT_14cade578 == 0) {
        DAT_14cade584 = false;
      }
      else {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) == 0x40000002) {
          uVar5 = 0;
        }
        else {
          bVar3 = FUN_144a61b4f();
          uVar5 = (ulonglong)(bVar3 ^ 1);
        }
        DAT_14cade584 = *(int *)(lVar1 + uVar5 * 4) != 0;
      }
      _Init_thread_footer(&DAT_14cade588);
    }
    if (((((*(ulonglong *)(param_1 + 0x38) & 0x8000000000) == 0) ||
         ((*(ulonglong *)(param_1 + 0x38) >> 0x35 & 1) == 0)) || (DAT_14cade584 == '\0')) ||
       (cVar2 = FUN_144a617d4(*(undefined2 *)(param_1 + 0x48),1), cVar2 == '\0')) {
      return *(int *)(param_1 + 0x10) != 5;
    }
  }
  return false;
}



// FUNCTION 1417c9c76 FUN_1417c9c76 body=177 status=ok
// SIG undefined FUN_1417c9c76(void)

void FUN_1417c9c76(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  if (*param_1 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_1 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1417c9d28 FUN_1417c9d28 body=432 status=ok
// SIG undefined FUN_1417c9d28(void)

void FUN_1417c9d28(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *_Dst;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  _Dst = *(undefined4 **)(param_1 + 0x178);
  if (_Dst == (undefined4 *)0x0) {
    _Dst = (undefined4 *)FUN_14001cc68(0x140);
    memset(_Dst,0,0x118);
    _Dst[0x1d] = 4;
    *(undefined8 *)(_Dst + 0x1e) = 0;
    *(undefined8 *)(_Dst + 0x20) = 0;
    *(undefined8 *)(_Dst + 0x22) = 0;
    *(undefined8 *)(_Dst + 0x24) = 0;
    *(undefined8 *)(_Dst + 0x26) = 0;
    *(undefined8 *)(_Dst + 0x28) = 0;
    *(undefined8 *)(_Dst + 0x2a) = 0;
    *(undefined8 *)(_Dst + 0x2c) = 0;
    _Dst[0x2e] = 0xffffffff;
    *(undefined1 *)(_Dst + 0x2f) = 0xff;
    *(undefined8 *)(_Dst + 0x30) = 0;
    *(undefined8 *)(_Dst + 0x32) = 0;
    *(undefined8 *)(_Dst + 0x34) = 0;
    *(undefined8 *)(_Dst + 0x36) = 0;
    *(undefined8 *)(_Dst + 0x38) = 0;
    *(undefined8 *)(_Dst + 0x3a) = 0;
    *(undefined8 *)(_Dst + 0x3c) = 0;
    *(undefined8 *)(_Dst + 0x3e) = 0;
    *(undefined8 *)(_Dst + 0x40) = 0;
    *(undefined8 *)(_Dst + 0x42) = 0;
    *(undefined8 *)((longlong)_Dst + 0x10e) = 0;
    *(undefined8 *)(_Dst + 0x46) = 0;
    *(undefined8 *)(_Dst + 0x48) = 0;
    *(undefined8 *)(_Dst + 0x4a) = 0;
    *(undefined8 *)(_Dst + 0x4c) = 0;
    *(undefined8 *)(_Dst + 0x4e) = 0;
    *(undefined4 **)(param_1 + 0x178) = _Dst;
  }
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  uVar10 = param_3[9];
  uVar11 = param_3[10];
  uVar12 = param_3[0xb];
  _Dst[8] = param_3[8];
  _Dst[9] = uVar10;
  _Dst[10] = uVar11;
  _Dst[0xb] = uVar12;
  _Dst[4] = uVar6;
  _Dst[5] = uVar7;
  _Dst[6] = uVar8;
  _Dst[7] = uVar9;
  *_Dst = uVar2;
  _Dst[1] = uVar3;
  _Dst[2] = uVar4;
  _Dst[3] = uVar5;
  if (_Dst != param_3) {
    iVar1 = param_3[0x1c];
    _Dst[0x1c] = iVar1;
    if (iVar1 == 0 && _Dst[0x1d] == 0) {
      _Dst[0x1d] = 4;
    }
    else {
      FUN_144780848(_Dst + 0xc,iVar1);
      if (iVar1 != 0) {
        memcpy(_Dst + 0xc,param_3 + 0xc,(longlong)iVar1 << 4);
      }
    }
  }
  puVar14 = (undefined8 *)(param_3 + 0x1e);
  puVar15 = (undefined8 *)(_Dst + 0x1e);
  for (lVar13 = 8; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  uVar2 = param_3[0x2e];
  *(undefined4 *)((longlong)_Dst + 0xbb) = *(undefined4 *)((longlong)param_3 + 0xbb);
  _Dst[0x2e] = uVar2;
  puVar14 = (undefined8 *)(param_3 + 0x30);
  puVar15 = (undefined8 *)(_Dst + 0x30);
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  FUN_1447fd100(param_1,param_2);
  return;
}



// FUNCTION 1417c9ed8 FUN_1417c9ed8 body=87 status=ok
// SIG undefined FUN_1417c9ed8(void)

undefined8 * FUN_1417c9ed8(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)((longlong)puVar1 + 0xc) = 0x2a;
  *(byte *)((longlong)puVar1 + 0xd) = *(byte *)((longlong)puVar1 + 0xd) | 3;
  *puVar1 = &PTR_FUN_14a914760;
  puVar1[2] = param_2;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  *param_1 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1417c9f30 FUN_1417c9f30 body=269 status=ok
// SIG undefined FUN_1417c9f30(void)

undefined8 *
FUN_1417c9f30(undefined8 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = param_2;
  *(undefined2 *)((longlong)param_1 + 0xd) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0x800000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0x200000000;
  param_1[0x20] = 0;
  param_1[0x21] = 0x300000000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x1ffffff;
  *param_1 = &PTR_LAB_14a915990;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  FUN_1401a8bec();
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x194) = param_3;
  *(undefined4 *)(param_1 + 0x33) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x19c) = param_5;
  return param_1;
}



// FUNCTION 1417ca03e FUN_1417ca03e body=73 status=ok
// SIG undefined FUN_1417ca03e(void)

void FUN_1417ca03e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x140) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1417ca088 FUN_1417ca088 body=223 status=ok
// SIG undefined FUN_1417ca088(void)

void FUN_1417ca088(longlong *param_1)

{
  uint uVar1;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong *local_c0;
  undefined1 local_b0 [136];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1400e134e();
  local_28 = 0x1100000000;
  (**(code **)(*param_1 + 0xc0))(param_1,local_b0);
  FUN_1447f9616(param_1,local_b0,0);
  local_28 = 0x1100000000;
  local_c0 = param_1 + 0x32;
  local_c8 = param_1 + 2;
  uVar1 = (uint)*(byte *)((longlong)param_1 + 0xc);
  if (*(byte *)((longlong)param_1 + 0xc) == 5) {
    uVar1 = DAT_14c760db4;
  }
  FUN_1448d2f52(uVar1,0,param_1[0x2f],local_b0);
  local_c8 = (longlong *)CONCAT71(local_c8._1_7_,0xff);
  FUN_1447f936a(param_1,0,local_b0,0x10);
  FUN_1447f9616(param_1,local_b0,0);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ca168 FUN_1417ca168 body=40 status=ok
// SIG undefined FUN_1417ca168(void)

undefined8 FUN_1417ca168(undefined8 param_1,int param_2)

{
  FUN_14006e79a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ca190 FUN_1417ca190 body=40 status=ok
// SIG undefined FUN_1417ca190(void)

undefined8 FUN_1417ca190(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ca1b8 FUN_1417ca1b8 body=89 status=ok
// SIG undefined FUN_1417ca1b8(void)

undefined8 * FUN_1417ca1b8(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a914760;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ca212 FUN_1417ca212 body=118 status=ok
// SIG undefined FUN_1417ca212(void)

void FUN_1417ca212(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a914c20;
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



// FUNCTION 1417ca288 FUN_1417ca288 body=99 status=ok
// SIG undefined FUN_1417ca288(void)

void FUN_1417ca288(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001417ca2da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001417ca2e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1417ca2ec FUN_1417ca2ec body=462 status=ok
// SIG undefined FUN_1417ca2ec(void)

void FUN_1417ca2ec(undefined4 *param_1,undefined8 param_2,longlong *param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_118 [32];
  uint local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  uint local_dc;
  char *local_d8;
  undefined4 local_d0;
  char *local_c8;
  undefined4 local_c0;
  char local_b8 [16];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 6) + 0x30);
  local_b8[0] = -1;
  local_b8[1] = -1;
  local_b8[2] = -1;
  local_b8[3] = -1;
  local_b8[4] = -1;
  local_b8[5] = -1;
  local_b8[6] = -1;
  local_b8[7] = -1;
  local_b8[8] = -1;
  local_b8[9] = -1;
  local_b8[10] = -1;
  local_b8[0xb] = -1;
  local_a0 = 3;
  local_9c = 0x40000000000;
  local_94 = 0;
  local_88 = 0;
  lVar4 = *(longlong *)(param_1 + 4);
  lVar7 = *(longlong *)(lVar4 + 0x20);
  if (*(longlong *)(lVar4 + 0x20) == 0) {
    lVar7 = lVar4;
  }
  local_70 = *(undefined8 *)
              (*(longlong *)(lVar7 + (longlong)(*(int *)(lVar4 + 0x28) + -1) * 8) + 0x20);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 3;
  local_64 = 0x40000000000;
  local_5c = 0;
  local_50 = 0;
  local_c0 = 2;
  local_dc = param_4;
  local_c8 = local_b8;
  local_a8 = uVar2;
  FUN_144760590(param_2,&local_c8,0);
  lVar4 = param_3[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar7 = *param_3;
    uVar6 = local_dc & 0xc;
    lVar8 = 0;
    do {
      uVar1 = *(uint *)(lVar7 + 0x10 + lVar8);
      if ((uVar6 & uVar1) != 0) {
        lVar3 = *(longlong *)(param_1 + 4);
        lVar9 = *(longlong *)(lVar3 + 0x20);
        if (*(longlong *)(lVar3 + 0x20) == 0) {
          lVar9 = lVar3;
        }
        if (*(int *)(lVar7 + 8 + lVar8) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(lVar7 + lVar8);
        }
        local_e8 = *(undefined8 *)
                    ((ulonglong)(-1 < (char)uVar1) * 0x10 + 0x30 +
                    *(longlong *)(lVar9 + (longlong)(*(int *)(lVar3 + 0x28) + -1) * 8));
        local_f8 = param_1[2] & 3 | local_dc;
        local_f0 = uVar2;
        (**(code **)(*plVar5 + 0x58))(plVar5,param_2,*param_1,param_1[1]);
      }
      lVar8 = lVar8 + 0x20;
    } while ((longlong)(int)lVar4 * 0x20 != lVar8);
  }
  local_d0 = 2;
  local_d8 = local_b8;
  FUN_144760590(param_2,&local_d8,0);
  lVar4 = 0x68;
  do {
    if (local_b8[lVar4] == '\x01') {
      local_b8[lVar4] = '\0';
    }
    lVar4 = lVar4 + -0x38;
  } while (lVar4 != -8);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ca4bc FUN_1417ca4bc body=217 status=ok
// SIG undefined FUN_1417ca4bc(void)

longlong FUN_1417ca4bc(longlong param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar4 = param_1 + 0x100;
  lVar7 = *(longlong *)(param_1 + 0x120);
  lVar3 = lVar7;
  if (lVar7 == 0) {
    lVar3 = lVar4;
  }
  iVar1 = *(int *)(param_1 + 0x128);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar6);
      if (((*(int *)(lVar2 + 0x38) == -1) && ((param_2 & 3 & *(uint *)(lVar2 + 0x34)) != 0)) &&
         ((*(uint *)(lVar2 + 0x34) & param_2 & 0x30) != 0)) {
        *(undefined4 *)(lVar2 + 0x38) = param_3;
        return lVar2;
      }
      lVar6 = lVar6 + 8;
    } while (lVar5 * 8 - lVar6 != 0);
  }
  lVar3 = FUN_14001cc68(0x40,0x10);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x400000000;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined4 *)(lVar3 + 0x38) = param_3;
  *(uint *)(param_1 + 0x128) = iVar1 + 1U;
  if (*(uint *)(param_1 + 300) < iVar1 + 1U) {
    FUN_1462b1344(lVar4,iVar1);
    lVar7 = *(longlong *)(param_1 + 0x120);
  }
  if (lVar7 != 0) {
    lVar4 = lVar7;
  }
  *(longlong *)(lVar4 + lVar5 * 8) = lVar3;
  return lVar3;
}



// FUNCTION 1417ca596 FUN_1417ca596 body=122 status=ok
// SIG undefined FUN_1417ca596(void)

undefined8 * FUN_1417ca596(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)((longlong)param_2 + 4) = 2;
  *(undefined4 *)(param_2 + 2) = 0x80;
  if ((2 < (ulonglong)*(byte *)(param_1 + 0xb51)) ||
     ((*(uint *)(&DAT_14a920798 + (ulonglong)*(byte *)(param_1 + 0xb51) * 4) &
      *(uint *)(*(longlong *)(param_3 + 8) + 0x50)) != 0)) {
    FUN_140061418(param_1,param_2);
    uVar1 = *(uint *)(param_2 + 2);
    *(uint *)(param_2 + 2) = (uVar1 & 0xfffffffc) + 2;
    if ((0 < *(int *)(param_1 + 0xd0)) && ((*(byte *)(param_1 + 0x6e) & 8) == 0)) {
      *(uint *)(param_2 + 2) = uVar1 & 0xfffffffc;
    }
  }
  return param_2;
}



// FUNCTION 1417ca610 FUN_1417ca610 body=49 status=ok
// SIG undefined FUN_1417ca610(void)

longlong FUN_1417ca610(void)

{
  if (DAT_14cae45b8 == 0) {
    FUN_14073dd9a(&DAT_14cae45b8,&PTR_LAB_14a91d7f0);
  }
  return DAT_14cae45b8;
}



// FUNCTION 1417ca641 FUN_1417ca641 body=49 status=ok
// SIG undefined FUN_1417ca641(void)

longlong FUN_1417ca641(void)

{
  if (DAT_14cae4668 == 0) {
    FUN_14073dd9a(&DAT_14cae4668,&PTR_LAB_14a91e768);
  }
  return DAT_14cae4668;
}



// FUNCTION 1417ca672 FUN_1417ca672 body=123 status=ok
// SIG undefined FUN_1417ca672(void)

void FUN_1417ca672(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [40];
  undefined **local_1a0;
  longlong *local_198;
  undefined ***local_190;
  undefined8 **local_188;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_188 = &local_190;
  local_1a0 = &PTR_FUN_149e37810;
  local_190 = &local_1a0;
  local_198 = param_2;
  switchD_143c3d4dc::caseD_20();
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001417ca6e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x218))(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_1c8,&DAT_149e38ef4);
}



// FUNCTION 1417ca6ee FUN_1417ca6ee body=597 status=ok
// SIG undefined FUN_1417ca6ee(void)

longlong FUN_1417ca6ee(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_1 + 0xb48) = 0;
  if (*(longlong *)(param_1 + 0xb40) != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)(param_1 + 0xb00);
  lVar4 = param_1 + 0xb10;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = lVar4;
  if (*(int *)(param_1 + 0xb28) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = plVar3;
  if (iStack_3c < *(int *)(local_48 + 0x18)) {
    do {
      if (*(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x18));
  }
  *(undefined4 *)(param_1 + 0xb08) = 0;
  if (*(int *)(param_1 + 0xb0c) != 0) {
    FUN_14494313c(plVar3,0);
  }
  *(undefined8 *)(param_1 + 0xb30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb28) = 0;
  if (0x80 < *(uint *)(param_1 + 0xb2c)) {
    *(undefined4 *)(param_1 + 0xb2c) = 0x80;
    FUN_1446efbd8(lVar4,0);
  }
  if (*(longlong *)(param_1 + 0xb20) != 0) {
    FUN_1400020a8();
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xaf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xad0) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0xac0);
  if (plVar3 != (longlong *)0x0) {
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
  FUN_1407601ea(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1417ca944 FUN_1417ca944 body=29 status=ok
// SIG undefined FUN_1417ca944(void)

undefined8 FUN_1417ca944(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



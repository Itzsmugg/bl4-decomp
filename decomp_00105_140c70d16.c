// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140c70d16 FUN_140c70d16 body=126 status=ok
// SIG undefined FUN_140c70d16(void)

longlong FUN_140c70d16(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_140c70e1c(param_1,*param_2,*param_3);
  if (lVar1 == 0) {
    local_38 = param_2;
    local_30 = param_3;
    FUN_140c70f6e(param_1,&local_24,&local_38,0);
    lVar1 = *param_1 + (longlong)local_24 * 0x18 + 8;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c70d96 FUN_140c70d96 body=133 status=ok
// SIG undefined FUN_140c70d96(void)

bool FUN_140c70d96(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  
  lVar2 = DAT_14cad2360;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar6 = 0;
  }
  else if (iVar1 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar6 = 1;
  }
  if (*(char *)(lVar2 + uVar6) == '\x01') {
    bVar3 = DAT_14cb0cbf8 < (int)(uint)*(byte *)(param_1 + 0x1fc);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



// FUNCTION 140c70e1c FUN_140c70e1c body=337 status=ok
// SIG undefined FUN_140c70e1c(void)

longlong FUN_140c70e1c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_3;
  if ((int)param_1[9] == 0) {
    lVar3 = 0;
  }
  else {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    (longlong)
                    (int)((int)param_1[9] - 1U &
                         ((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2)) * 4);
    lVar3 = 0;
    do {
      if (iVar4 == -1) goto LAB_140c70e75;
      lVar5 = (longlong)iVar4;
      iVar4 = *(int *)(*param_1 + 0x10 + lVar5 * 0x18);
      local_50 = *(undefined8 *)(*param_1 + lVar5 * 0x18);
      local_58 = param_2;
      cVar1 = FUN_140bf1e82();
    } while (cVar1 == '\0');
    cVar1 = FUN_14582c8d6(*param_1 + lVar5 * 0x18 + 8,&local_60);
    if (cVar1 == '\0') {
      lVar3 = 0;
      do {
        if (iVar4 == -1) goto LAB_140c70e75;
        lVar5 = (longlong)iVar4;
        iVar4 = *(int *)(*param_1 + 0x10 + lVar5 * 0x18);
        local_50 = *(undefined8 *)(*param_1 + lVar5 * 0x18);
        local_58 = param_2;
        cVar1 = FUN_140bf1e82(&local_50,&local_58);
      } while ((cVar1 == '\0') ||
              (cVar1 = FUN_14582c8d6(*param_1 + lVar5 * 0x18 + 8,&local_60), cVar1 == '\0'));
    }
    lVar3 = *param_1 + lVar5 * 0x18 + 8;
  }
LAB_140c70e75:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 140c70f6e FUN_140c70f6e body=466 status=ok
// SIG undefined FUN_140c70f6e(void)

int * FUN_140c70f6e(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar10) {
      FUN_1403951a8(param_1,iVar10);
    }
    lVar13 = (longlong)iVar10;
    iVar11 = FUN_144a54ea4(param_1 + 2,1);
    plVar8 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar8 = param_1 + 2;
    }
    iVar7 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar7 = iVar11;
    }
    bVar6 = (byte)iVar11 & 0x1f;
    puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar10 = (int)param_1[6];
    lVar13 = (longlong)iVar10;
    iVar11 = *(int *)(*param_1 + 4 + lVar13 * 0x18);
    *(int *)(param_1 + 6) = iVar11;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar11 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[4];
  }
  iVar11 = iVar10 + 0x1f;
  if (-1 < iVar10) {
    iVar11 = iVar10;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar11 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  iVar11 = 1;
  lVar2 = *param_1;
  puVar3 = (undefined8 *)param_3[1];
  uVar4 = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar2 + lVar13 * 0x18) = uVar4;
  *(undefined8 *)(lVar2 + 8 + lVar13 * 0x18) = *puVar3;
  *(undefined4 *)(lVar2 + 0x10 + lVar13 * 0x18) = 0xffffffff;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar12) {
    uVar9 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
    lVar5 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar11 = 1 << ((byte)lVar5 & 0x1f);
  }
  if (((int)uVar12 < 1) || (iVar11 <= (int)param_1[9])) {
    lVar2 = lVar2 + lVar13 * 0x18;
    uVar12 = (int)param_1[9] - 1U & ((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4);
    *(uint *)(lVar2 + 0x14) = uVar12;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(lVar2 + 0x10) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    FUN_14578ab18(param_1);
  }
  *param_2 = iVar10;
  return param_2;
}



// FUNCTION 140c71140 FUN_140c71140 body=277 status=ok
// SIG undefined FUN_140c71140(void)

undefined8 FUN_140c71140(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140c7124f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140c7124f;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140c7124f:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140c711fc;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_140c711fc;
    }
  }
  uVar6 = 0;
LAB_140c711fc:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c71256 FUN_140c71256 body=57 status=ok
// SIG undefined FUN_140c71256(void)

void FUN_140c71256(longlong param_1,int param_2)

{
  if ((*(byte *)(param_1 + 0x128) & 2) == 0) {
    if ((0 < param_2) && (*(int *)(param_1 + 0x114) == 0)) {
      FUN_1447f69b6(param_1 + 0x40);
    }
    *(int *)(param_1 + 0x114) = param_2;
  }
  return;
}



// FUNCTION 140c71290 FUN_140c71290 body=217 status=ok
// SIG undefined FUN_140c71290(void)

void FUN_140c71290(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  if ((*(byte *)(param_1 + 0x25) & 2) == 0) {
    lVar1 = param_1[0x20];
    iVar4 = param_2 - (int)lVar1;
    if ((iVar4 < 0 & *(byte *)((longlong)param_1 + 0x91) >> 1) == 1) {
      iVar3 = 0;
      if (0 < param_2) {
        iVar3 = param_2;
      }
      lVar2 = param_1[0x21];
      *(int *)((longlong)param_1 + 0x11c) = iVar3;
      *(int *)(param_1 + 0x20) = iVar3;
      if ((int)lVar1 != iVar3) {
        FUN_140a429bc(param_1);
      }
      if ((int)lVar2 == 0) {
        FUN_1447f69b6(param_1 + 8);
      }
      if ((*(byte *)(param_1 + 0x25) & 8) == 0) {
        FUN_140a43498(param_1,-iVar4);
      }
      else {
        (**(code **)(*param_1 + 0x360))(param_1);
      }
    }
    iVar3 = 0;
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
    if ((int)param_1[0x21] != iVar3) {
      *(int *)(param_1 + 0x21) = iVar3;
      FUN_144a62f0c(param_1,param_1[7],3);
      FUN_140a429bc(param_1);
      FUN_1447f69b6(param_1 + 8);
      return;
    }
  }
  return;
}



// FUNCTION 140c7136a FUN_140c7136a body=397 status=ok
// SIG undefined FUN_140c7136a(void)

void FUN_140c7136a(longlong *param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [46];
  short local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == (longlong *)0x0) {
LAB_140c714a2:
    plVar4 = (longlong *)0x0;
  }
  else {
    lVar3 = (**(code **)(*param_2 + 0x2b8))(param_2);
    if ((lVar3 == 0) || ((~*(byte *)(lVar3 + 0x1c2) & 6) != 0)) goto LAB_140c714a2;
    cVar1 = (**(code **)(*param_2 + 0x460))(param_2);
    if (cVar1 != '\x02') goto LAB_140c714a2;
    uVar2 = (**(code **)(*param_2 + 0x408))(param_2);
    if (uVar2 < 2) goto LAB_140c714a2;
    (**(code **)(*param_2 + 0x410))(param_2,&local_2a);
    plVar4 = (longlong *)0x0;
    if (local_2a == 1) {
      plVar4 = param_2;
    }
  }
  if ((longlong *)param_1[0xe1] == plVar4) goto LAB_140c71481;
  if ((plVar4 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[0xe1] = (longlong)plVar4;
    if (plVar4 != (longlong *)0x0) goto LAB_140c71425;
  }
  else {
    FUN_1456cec3c(plVar4);
    param_1[0xe1] = (longlong)plVar4;
LAB_140c71425:
    (**(code **)(*param_1 + 0x310))(param_1);
  }
  cVar1 = FUN_140c714f8(param_1);
  if (cVar1 == '\0') {
    if ((param_1[0xb5] != 0) &&
       (param_1[0xe1] == 0 ||
        (DAT_14cad2be8 == 0 || (int)param_1[0x65] == *(int *)((longlong)param_1 + 0x32c)))) {
      FUN_140e6c13a(param_1[0xb5]);
    }
  }
  else if ((((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0) && (param_1[0x16] != 0)) &&
          (plVar4 = *(longlong **)(param_1[0x16] + 0x218), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x18))(plVar4,param_1);
    (**(code **)(*plVar4 + 8))(plVar4,param_1);
  }
LAB_140c71481:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c714f8 FUN_140c714f8 body=176 status=ok
// SIG undefined FUN_140c714f8(void)

bool FUN_140c714f8(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x66c) & 8) != 0) {
    if (*(longlong *)(param_1 + 0x700) != 0) {
      return true;
    }
    return *(longlong *)(param_1 + 0x708) != 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x660);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
    lVar1 = *(longlong *)(param_1 + 0x660);
  }
  else if (lVar1 == 0) {
    return false;
  }
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if (((*(longlong *)(lVar1 + 0xe0) != 0) &&
      (0 < *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0xe0) + 0x40) + 0x70))) &&
     (*(longlong *)(param_1 + 0x700) == 0)) {
    return *(longlong *)(param_1 + 0x708) == 0;
  }
  return false;
}



// FUNCTION 140c715a8 FUN_140c715a8 body=647 status=ok
// SIG undefined FUN_140c715a8(void)

undefined8 FUN_140c715a8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (uint)param_2;
  iVar6 = (int)((ulonglong)param_2 >> 0x20);
  uVar11 = (uint)((ulonglong)param_2 >> 0x10);
  if (*(int *)(param_1 + 0x410) != *(int *)(param_1 + 0x43c)) {
    lVar5 = param_1 + 0x440;
    if (*(longlong *)(param_1 + 0x448) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x448);
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x450) - 1U &
                             iVar6 + (uVar3 << 0x10 | uVar3 & 0xffff) +
                             (uVar11 << 0x13 | uVar11 & 0xffff) + ((uVar3 & 0xffff) >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x408) + (longlong)iVar8 * 0x18);
        if (*plVar1 == param_2) {
          if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
            local_30 = plVar1[1];
            if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
              lVar5 = *(longlong *)(param_1 + 0x20);
            }
            else {
              lVar5 = 0;
            }
            lVar5 = *(longlong *)(lVar5 + 0x30);
            if (lVar5 != 0) goto LAB_140c71681;
          }
          break;
        }
        iVar8 = (int)plVar1[2];
      } while (iVar8 != -1);
    }
  }
  if (*(int *)(param_1 + 0x4c8) != *(int *)(param_1 + 0x4f4)) {
    uVar11 = iVar6 + (uVar3 << 0x10 | uVar3 & 0xffff) + (uVar11 << 0x13 | uVar11 & 0xffff) +
             ((uVar3 & 0xffff) >> 4);
    lVar5 = param_1 + 0x4f8;
    if (*(longlong *)(param_1 + 0x500) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x500);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x508) - 1U & uVar11) * 4);
    if (iVar6 != -1) {
      uVar4 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x4c0) + (longlong)iVar6 * 0x18);
        if (*plVar1 == param_2) {
          plVar9 = plVar1 + 1;
          if (((plVar9 == (longlong *)0x0 || plVar1 == (longlong *)0x0) ||
              (cVar2 = FUN_144729dda(plVar9), cVar2 == '\0')) ||
             (lVar5 = FUN_14479d2ce(plVar9), *(int *)(lVar5 + 0x40) == *(int *)(lVar5 + 0x6c)))
          goto LAB_140c71656;
          lVar7 = lVar5 + 0x70;
          if (*(longlong *)(lVar5 + 0x78) != 0) {
            lVar7 = *(longlong *)(lVar5 + 0x78);
          }
          iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar5 + 0x80) - 1U & uVar11) * 4);
          if (iVar6 == -1) goto LAB_140c71656;
          uVar4 = 0;
          goto LAB_140c717dd;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
      goto LAB_140c716cf;
    }
  }
LAB_140c71656:
  uVar4 = 0;
  goto LAB_140c716cf;
LAB_140c717dd:
  plVar1 = (longlong *)(*(longlong *)(lVar5 + 0x38) + (longlong)iVar6 * 0x18);
  if (*plVar1 != param_2) {
    iVar6 = (int)plVar1[2];
    if (iVar6 == -1) goto LAB_140c716cf;
    goto LAB_140c717dd;
  }
  if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) goto LAB_140c71656;
  local_30 = plVar1[1];
  lVar5 = FUN_14479d2ce(plVar9);
  if (lVar5 == 0) goto LAB_140c71656;
LAB_140c71681:
  FUN_1400021e4(&local_30,&local_40);
  puVar10 = local_40;
  if (local_38 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  uVar4 = FUN_140c71830();
  uVar4 = FUN_140277b32(uVar4,lVar5,puVar10,0);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_140c716cf:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140c71830 FUN_140c71830 body=228 status=ok
// SIG undefined FUN_140c71830(void)

longlong FUN_140c71830(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb11cd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14639adaa;
    local_38 = &LAB_147dcd7f2;
    local_40 = FUN_1437b1a6e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 200;
    FUN_14081cfa3(L"/Script/Engine",L"WorldPartitionRuntimeLevelStreamingCell",&DAT_14cb11cd8,
                  FUN_1464124b6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb11cd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c71916 FUN_140c71916 body=38 status=ok
// SIG undefined FUN_140c71916(void)

void FUN_140c71916(longlong param_1,byte param_2)

{
  if (((byte)*(uint *)(param_1 + 0x750) & 1) == param_2) {
    return;
  }
  *(uint *)(param_1 + 0x750) = *(uint *)(param_1 + 0x750) & 0xfffffffe | (uint)param_2;
  FUN_140c7193c();
  return;
}



// FUNCTION 140c7193c FUN_140c7193c body=198 status=ok
// SIG undefined FUN_140c7193c(void)

void FUN_140c7193c(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 unaff_RDI;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
  uVar2 = (undefined4)CONCAT71(uVar3,1);
  if (((*(byte *)(param_1 + 0xea) & 1) == 0) && (param_1[0x117] == 0)) {
    if (ABS(*(float *)(param_1 + 0x116) + -1.0) <= 1e-08) {
      if (param_1[0xcd] == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (undefined4)CONCAT71(uVar3,*(undefined1 *)(param_1[0xcd] + 0x44a));
      }
    }
  }
  if (param_1[0xec] != 0) {
    lVar1 = *(longlong *)(param_1[0xec] + 0x30);
    if (((*(byte *)(lVar1 + 0x790) & 8) == 0) == (bool)(char)uVar2) {
      *(byte *)(lVar1 + 0x790) = *(byte *)(lVar1 + 0x790) & 0xf7 | (char)uVar2 * '\b';
      FUN_140c71a02(lVar1,uVar2);
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140c719a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x3b0))(param_1,uVar2);
    return;
  }
  return;
}



// FUNCTION 140c71a02 FUN_140c71a02 body=494 status=ok
// SIG undefined FUN_140c71a02(void)

void FUN_140c71a02(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)(param_1 + 0x790) & 4) == 0) != (bool)param_2) goto LAB_140c71bce;
  FUN_140336cb8(param_1,0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (param_2 == '\0') {
      uVar3 = FUN_143ac6210(param_1);
      uVar5 = FUN_1400bd118(*(undefined8 *)(param_1 + 0x30));
      FUN_143ad0ca6(uVar5,&local_40,uVar3,*(undefined8 *)(param_1 + 0x38));
      plVar4 = local_38;
      plVar6 = local_40;
      if (local_38 == (longlong *)0x0) goto LAB_140c71b9c;
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_38)(local_38);
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
    else {
      plVar4 = (longlong *)FUN_14001cc68(0x590,0x10);
      plVar4[1] = (longlong)&DAT_100000001;
      *plVar4 = (longlong)&PTR_FUN_14ae26cf0;
      plVar6 = plVar4 + 2;
      FUN_143ac93ec(plVar6);
      local_40 = plVar6;
      local_38 = plVar4;
      FUN_143acc8ee(&local_40,plVar6);
      plVar4 = local_38;
      plVar6 = local_40;
      if (local_38 == (longlong *)0x0) {
        local_48 = 8;
        FUN_143ac5c84(local_40,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),1);
LAB_140c71b9c:
        FUN_14032de7e(plVar6,param_1);
        goto LAB_140c71ba7;
      }
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_48 = 8;
      FUN_143ac5c84(plVar6,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),1);
    }
    FUN_14032de7e(plVar6,param_1);
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_140c71ba7:
  *(byte *)(param_1 + 0x790) = *(byte *)(param_1 + 0x790) & 0xfb | param_2 << 2;
  if (*(longlong *)(param_1 + 0x7b0) != 0) {
    FUN_14005a35e(param_1,1);
  }
LAB_140c71bce:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c71bf2 FUN_140c71bf2 body=171 status=ok
// SIG undefined FUN_140c71bf2(void)

ulonglong FUN_140c71bf2(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_14578acd6(param_2);
  if (cVar2 == '\0') {
    uVar5 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x9f8))(param_1,&local_30);
    lVar1 = local_30;
    if ((longlong)local_28 == 0) {
      uVar5 = CONCAT71((int7)(int3)((uint)local_28 >> 8),1);
    }
    else {
      lVar4 = (longlong)local_28 * 8;
      lVar3 = 0;
      do {
        if ((*(longlong **)(lVar1 + lVar3) != (longlong *)0x0) &&
           (cVar2 = (**(code **)(**(longlong **)(lVar1 + lVar3) + 0x478))(), cVar2 == '\0')) {
          uVar5 = 0;
          goto LAB_140c71c59;
        }
        lVar3 = lVar3 + 8;
      } while (lVar4 != lVar3);
      uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    }
LAB_140c71c59:
    if (local_30 != 0) {
      FUN_1400020a8(local_30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 140c71cb0 FUN_140c71cb0 body=70 status=ok
// SIG undefined FUN_140c71cb0(void)

void FUN_140c71cb0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_2,1,0xffffffff);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0xe0) = param_3;
    FUN_14034b25c(lVar1);
    return;
  }
  return;
}



// FUNCTION 140c71cf6 FUN_140c71cf6 body=102 status=ok
// SIG undefined FUN_140c71cf6(void)

ulonglong FUN_140c71cf6(longlong param_1)

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
LAB_140c71d3f:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140c71d3f;
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



// FUNCTION 140c71d5c FUN_140c71d5c body=143 status=ok
// SIG undefined FUN_140c71d5c(void)

void FUN_140c71d5c(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x48);
    uVar3 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140c71dc5;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x4c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))) {
      cVar1 = *(char *)(*(longlong *)(param_1 + 0x30) + 0x10);
      if (cVar1 == '\0') {
        uVar3 = (**(code **)(*plVar5 + 0x330))();
        goto LAB_140c71dc5;
      }
      if (cVar1 == '\x01') {
        iVar4 = (**(code **)(*plVar5 + 0x2e8))();
        uVar3 = iVar4 == 0;
        goto LAB_140c71dc5;
      }
    }
  }
  uVar3 = 0;
LAB_140c71dc5:
  FUN_1402a7054(param_1,uVar3);
  return;
}



// FUNCTION 140c71dec FUN_140c71dec body=141 status=ok
// SIG undefined FUN_140c71dec(void)

void FUN_140c71dec(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (((*(byte *)(param_1 + 0x38) & 4) != 0) && (*(int *)(param_1 + 0x10) < iVar1)) {
    iVar1 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
      FUN_140c71e7a(param_1 + 0x28,iVar1);
    }
    FUN_140c541bc((longlong)iVar1 * 0xd8 + *(longlong *)(param_1 + 0x28),param_2);
    *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 2;
    return;
  }
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_140c71e7a((longlong *)(param_1 + 0x18),iVar1);
  }
  FUN_140c541bc((longlong)iVar1 * 0xd8 + *(longlong *)(param_1 + 0x18),param_2);
  return;
}



// FUNCTION 140c71e7a FUN_140c71e7a body=372 status=ok
// SIG undefined FUN_140c71e7a(void)

void FUN_140c71e7a(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xd8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c71f02;
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
LAB_140c71f02:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xd8)) {
    uVar7 = uVar5 / 0xd8 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xd8,8);
  return;
}



// FUNCTION 140c71ff0 FUN_140c71ff0 body=75 status=ok
// SIG undefined FUN_140c71ff0(void)

void FUN_140c71ff0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3e38b0;
  FUN_140c7203b(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140c72088(param_1);
  return;
}



// FUNCTION 140c7203b FUN_140c7203b body=77 status=ok
// SIG undefined FUN_140c7203b(void)

void FUN_140c7203b(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140c72088 FUN_140c72088 body=74 status=ok
// SIG undefined FUN_140c72088(void)

void FUN_140c72088(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3fe540;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140c720ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140c720da FUN_140c720da body=116 status=ok
// SIG undefined FUN_140c720da(void)

void FUN_140c720da(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 0x4c) != 0) && (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x4c))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && ((longlong *)*plVar3 != (longlong *)0x0)))) {
      lVar2 = *(longlong *)*plVar3;
      if (*(char *)(param_1 + 0x50) == '\x01') {
        (**(code **)(lVar2 + 0xa48))();
      }
      else {
        (**(code **)(lVar2 + 0x2b0))();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 140c7214e FUN_140c7214e body=40 status=ok
// SIG undefined FUN_140c7214e(void)

undefined8 FUN_140c7214e(undefined8 param_1,int param_2)

{
  FUN_140c72176();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c72176 FUN_140c72176 body=163 status=ok
// SIG undefined FUN_140c72176(void)

void FUN_140c72176(undefined8 *param_1)

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
  return;
}



// FUNCTION 140c7221a FUN_140c7221a body=346 status=ok
// SIG undefined FUN_140c7221a(void)

void FUN_140c7221a(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar4 = FUN_1404fa388((undefined8 *)(param_1 + 0x68));
  if ((cVar4 == '\0') && (*param_3 != 0)) {
    local_38 = *param_2;
    local_30 = param_2[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    lVar5 = FUN_140206ee8(param_1 + 8,&local_38);
    if (lVar5 != 0) {
      local_60 = *param_3;
      if (local_60 != 0) {
        *(int *)(local_60 + 0x108) = *(int *)(local_60 + 0x108) + 1;
      }
      local_70 = *param_2;
      local_68 = param_2[1];
      if (local_68 != 0) {
        LOCK();
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
        UNLOCK();
      }
      FUN_140c72376(&local_58,&local_70,&local_60,lVar5);
      if ((undefined8 *)(param_1 + 0x68) != &local_58) {
        *(undefined8 *)(param_1 + 0x68) = local_58;
        local_58 = 0;
        plVar3 = *(longlong **)(param_1 + 0x70);
        *(longlong **)(param_1 + 0x70) = local_50;
        local_50 = (longlong *)0x0;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
      }
      *(undefined4 *)(param_1 + 0x78) = local_48;
      *(undefined4 *)(param_1 + 0x7c) = uStack_44;
      *(undefined4 *)(param_1 + 0x80) = uStack_40;
      *(undefined4 *)(param_1 + 0x84) = uStack_3c;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c72376 FUN_140c72376 body=405 status=ok
// SIG undefined FUN_140c72376(void)

longlong * FUN_140c72376(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_78 [56];
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *param_2;
  if (((lVar3 == 0) || (param_4 == 0)) || (lVar4 = *param_3, lVar4 == 0)) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *(int *)(lVar4 + 0x108) = *(int *)(lVar4 + 0x108) + 1;
    local_40 = lVar4;
    FUN_140a3cb0a(lVar3,&local_38);
    lVar3 = *param_2;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 == (longlong *)0x0) {
      *param_1 = lVar3;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 2) = local_38;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_34;
      *(undefined4 *)(param_1 + 3) = uStack_30;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_2c;
    }
    else {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      *param_1 = lVar3;
      param_1[1] = (longlong)plVar5;
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      *(undefined4 *)(param_1 + 2) = local_38;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_34;
      *(undefined4 *)(param_1 + 3) = uStack_30;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_2c;
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = (longlong *)*param_3;
  if (plVar5 == (longlong *)0x0) goto LAB_140c72456;
  *(int *)(plVar5 + 0x21) = (int)plVar5[0x21] + -1;
  if ((int)plVar5[0x26] < 1) {
    FUN_1400847bc(plVar5 + 0x17,0);
    if ((int)plVar5[0x21] == 0) {
      FUN_140087e46(plVar5);
      if (*plVar5 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_140c7244f;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar5);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar5);
      }
    }
  }
LAB_140c7244f:
  *param_3 = 0;
LAB_140c72456:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c72514 FUN_140c72514 body=111 status=ok
// SIG undefined FUN_140c72514(void)

undefined8 FUN_140c72514(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  uVar1 = DAT_14cbc3028;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_1;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_144837462(uVar1,local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c72590 FUN_140c72590 body=227 status=ok
// SIG undefined FUN_140c72590(void)

undefined8 * FUN_140c72590(undefined8 *param_1)

{
  FUN_140c72674();
  *param_1 = &PTR_FUN_14b177260;
  param_1[5] = &PTR_FUN_14b177d30;
  param_1[6] = &PTR_LAB_14b177d70;
  param_1[0x55] = &PTR_FUN_14b177dc0;
  param_1[0x56] = &PTR_FUN_14b177e40;
  param_1[0x57] = &PTR_FUN_14b177e50;
  param_1[0xca] = &PTR_FUN_14b177e80;
  param_1[0x15e] = &PTR_FUN_14b177ea0;
  param_1[0x202] = 0;
  *(undefined4 *)(param_1 + 0x203) = 0;
  param_1[0x1f6] = 0;
  param_1[0x1f7] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfd1) = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  *(undefined8 *)((longlong)param_1 + 0x101c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1024) = 0;
  param_1[0x206] = 0;
  *(undefined4 *)(param_1 + 0x207) = 0;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 1;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 2;
  return param_1;
}



// FUNCTION 140c72674 FUN_140c72674 body=311 status=ok
// SIG undefined FUN_140c72674(void)

longlong * FUN_140c72674(longlong *param_1)

{
  undefined8 *puVar1;
  
  FUN_140c727ac();
  *param_1 = (longlong)&PTR_FUN_14ac97bd0;
  param_1[5] = (longlong)&PTR_FUN_14ac986a0;
  param_1[6] = (longlong)&PTR_LAB_14ac986e0;
  param_1[0x55] = (longlong)&PTR_FUN_14ac98730;
  param_1[0x56] = (longlong)&PTR_FUN_14ac987b0;
  param_1[0x57] = (longlong)&PTR_FUN_14ac987c0;
  param_1[0xca] = (longlong)&PTR_FUN_14ac987f0;
  param_1[0x15e] = (longlong)&PTR_FUN_14ac98810;
  param_1[0x15f] = 0;
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb04) = 0;
  *(undefined1 *)(param_1 + 0x161) = 0;
  *(undefined1 *)(param_1 + 0x168) = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  *(undefined4 *)(param_1 + 0x16b) = 2;
  *(undefined8 *)((longlong)param_1 + 0xb5c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb64) = 0;
  FUN_140396f9a(param_1 + 0x16d);
  FUN_144805afa(param_1 + 0x1be);
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  param_1[0x1f1] = (longlong)puVar1;
  param_1[0x1f0] = (longlong)puVar1;
  param_1[0x1f2] = 0;
  param_1[499] = 0;
  param_1[500] = 0x3f80000000000001;
  *(undefined1 *)(param_1 + 0x1f5) = 1;
  (**(code **)(*param_1 + 0x3b0))(param_1,0);
  return param_1;
}



// FUNCTION 140c727ac FUN_140c727ac body=1521 status=ok
// SIG undefined FUN_140c727ac(void)

longlong * FUN_140c727ac(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_108 [40];
  longlong local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1400ea892();
  *param_1 = (longlong)&PTR_FUN_14a409ec0;
  param_1[5] = (longlong)&PTR_FUN_14a40a980;
  param_1[6] = (longlong)&PTR_LAB_14a40a9c0;
  param_1[0x55] = (longlong)&PTR_FUN_14a40aa10;
  param_1[0x56] = (longlong)&PTR_FUN_14a40aa90;
  param_1[0x57] = (longlong)&PTR_FUN_14a40aaa0;
  param_1[0xca] = (longlong)&PTR_FUN_14a40aad0;
  *(undefined2 *)((longlong)param_1 + 0x679) = 0x400;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined8 *)((longlong)param_1 + 0x67c) = 0xffffffff00000000;
  *(undefined2 *)((longlong)param_1 + 0x684) = 0;
  *(undefined1 *)((longlong)param_1 + 0x686) = 1;
  param_1[0xd1] = 0x6400000000;
  *(undefined4 *)(param_1 + 0xd2) = 100;
  param_1[0xd3] = 0;
  *(undefined4 *)(param_1 + 0xd4) = 3;
  FUN_1447c510a(param_1 + 0xd3,3,0);
  puVar1 = (undefined8 *)param_1[0xd3];
  *puVar1 = 0x4743500048f42400;
  *(undefined4 *)(puVar1 + 1) = 0x459c4000;
  *(undefined2 *)(param_1 + 0xd5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6ac) = 1;
  param_1[0xd6] = 0x3f800000;
  *(undefined2 *)(param_1 + 0xd7) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x6ba) = 1;
  *(undefined1 *)((longlong)param_1 + 0x6bc) = 2;
  param_1[0xd8] = 0x3f80000000000000;
  param_1[0xda] = 0;
  *(undefined1 *)(param_1 + 0xdb) = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x709) = 0;
  *(undefined8 *)((longlong)param_1 + 0x711) = 0;
  param_1[0xe4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x726) = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0x200;
  *(undefined1 *)((longlong)param_1 + 0x734) = 0;
  param_1[0xe7] = 0x142480000;
  *(undefined2 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x744) = 0x200;
  *(undefined1 *)(param_1 + 0xe9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74c) = 0x142480000;
  *(undefined2 *)((longlong)param_1 + 0x754) = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0x200;
  *(undefined8 *)((longlong)param_1 + 0x75c) = 0x461c400043480000;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  *(undefined4 *)(param_1 + 0xf5) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x7ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x804) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x814) = 0;
  *(undefined4 *)((longlong)param_1 + 0x81c) = 0;
  param_1[0x104] = 2;
  *(undefined1 *)((longlong)param_1 + 0x82c) = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  *(undefined2 *)(param_1 + 0x108) = 0;
  *(undefined1 *)((longlong)param_1 + 0x84b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x843) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84c) = 1;
  *(undefined1 *)(param_1 + 0x10a) = 1;
  *(byte *)((longlong)param_1 + 0x851) = *(byte *)((longlong)param_1 + 0x851) & 0xe0 | 2;
  *(undefined2 *)((longlong)param_1 + 0x852) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x854) = DAT_14cad0ef0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  *(undefined8 *)((longlong)param_1 + 0x89c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8a4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8ac) = 100;
  *(undefined1 *)((longlong)param_1 + 0x8dc) = 0;
  *(undefined1 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x11d) = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0x8000000000;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  *(undefined1 *)(param_1 + 0x122) = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  *(undefined4 *)(param_1 + 0x125) = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = -1;
  param_1[0x129] = 0;
  *(byte *)(param_1 + 0x12a) = *(byte *)(param_1 + 0x12a) & 0xf0 | 8;
  *(undefined4 *)((longlong)param_1 + 0x954) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x130) = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  *(undefined4 *)(param_1 + 0x12f) = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  *(undefined4 *)(param_1 + 0x134) = 0xffffffff;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = (longlong)param_1;
  *(byte *)((longlong)param_1 + 0x9a4) = *(byte *)((longlong)param_1 + 0x9a4) | 3;
  *(undefined1 *)(param_1 + 0x13e) = 0;
  *(undefined1 *)(param_1 + 0x145) = 0;
  *(undefined4 *)(param_1 + 0x151) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa8c) = 0;
  param_1[0x152] = 0;
  param_1[0x155] = 0;
  *(undefined4 *)(param_1 + 0x156) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  *(undefined4 *)((longlong)param_1 + 0xab4) = 0x80;
  param_1[0x159] = 0;
  param_1[0x15a] = 0x8000000000;
  *(undefined4 *)(param_1 + 0x15b) = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xf9 | 2;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 0x80;
  DAT_14caa9770 = DAT_14caa9770 + 3;
  *(int *)(param_1 + 299) = DAT_14caa9770;
  *(undefined4 *)((longlong)param_1 + 0x97c) = 0x7f7fffff;
  if ((*(byte *)((longlong)param_1 + 0x2d3) & 8) != 0) {
    *(byte *)((longlong)param_1 + 0x2d3) = *(byte *)((longlong)param_1 + 0x2d3) & 0xf7;
    (**(code **)(*param_1 + 0x958))(param_1);
  }
  *(undefined8 *)((longlong)param_1 + 0x454) = DAT_14cad0ef0;
  param_1[0x96] = 0;
  *(byte *)((longlong)param_1 + 0x44d) = *(byte *)((longlong)param_1 + 0x44d) & 0xbf;
  *(undefined1 *)((longlong)param_1 + 0x425) = 7;
  FUN_1400bcfd8(param_1 + 0x82);
  *(byte *)(param_1 + 0x83) = *(byte *)(param_1 + 0x83) | 1;
  if ((*(uint *)(param_1 + 1) & 0x30) == 0) {
    FUN_1446f470e(&local_e0,L"GameplayEventDispatcher",1);
    if (local_e0 == 0) {
      FUN_14058b40c(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                   );
    }
    local_d8 = FUN_140deaa76();
    local_88 = (longlong *)0x0;
    local_58 = 0;
    local_b8 = 0;
    local_a0 = 0;
    lStack_98 = 0;
    local_c8 = local_e0;
    uStack_c0 = 0x40;
    local_b0 = 0;
    uStack_a8 = 0;
    local_d0 = param_1;
    lVar2 = FUN_1402710dd(&local_d8);
    if (lStack_98 != 0) {
      plVar3 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar3 = local_78;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    param_1[0x14b] = lVar2;
  }
  puVar1 = (undefined8 *)param_1[0x149];
  param_1[0x149] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined1 *)((longlong)param_1 + 0x2e9) = 1;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 1;
  *(undefined1 *)((longlong)param_1 + 0x6ac) = 0;
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c72de2 FUN_140c72de2 body=175 status=ok
// SIG undefined FUN_140c72de2(void)

void FUN_140c72de2(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  
  if (*(char *)(param_1 + 0x308) == '\0') {
    *(undefined1 *)(param_1 + 0x308) = 1;
    FUN_144b46310(*(undefined8 *)(param_1 + 0x278),0x300005,param_1 + 0x1b0);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
    if ((*(char *)(param_1 + 0x14b) == '\0') && ((*(byte *)(param_1 + 0x149) & 1) == 0)) {
      lVar2 = FUN_141054386();
      pfVar3 = (float *)(param_1 + 0x140);
      if (*(char *)(param_1 + 0x144) == '\0') {
        pfVar3 = (float *)(lVar2 + 0x18);
      }
      fVar1 = *pfVar3;
      if ((fVar1 != 0.0) || (NAN(fVar1))) {
        FUN_140c72f52(param_1,(double)fVar1);
        FUN_140c72e92(param_1);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  }
  FUN_140c72e92(param_1);
  return;
}



// FUNCTION 140c72e92 FUN_140c72e92 body=191 status=ok
// SIG undefined FUN_140c72e92(void)

void FUN_140c72e92(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  float *pfVar3;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  if ((*(char *)(param_1 + 0x14b) == '\0') && (*(longlong *)(param_1 + 0x170) != 0)) {
    QueryPerformanceCounter(&local_38);
    dVar1 = (double)local_38.QuadPart * DAT_14c83f420;
    lVar2 = FUN_141054386();
    pfVar3 = (float *)(param_1 + 0x140);
    if (*(char *)(param_1 + 0x144) == '\0') {
      pfVar3 = (float *)(lVar2 + 0x18);
    }
    *(double *)(param_1 + 0x158) = (double)*pfVar3 + dVar1 + 16777216.0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c72f52 FUN_140c72f52 body=489 status=ok
// SIG undefined FUN_140c72f52(void)

void FUN_140c72f52(longlong param_1,double param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined ***pppuVar8;
  undefined8 uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x170) == 0) {
    plVar10 = *(longlong **)(param_1 + 0x10);
    bVar4 = true;
    if (plVar10 == (longlong *)0x0) {
LAB_140c72ff6:
      uVar9 = 0;
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar10[1];
      do {
        if (iVar6 == 0) goto LAB_140c72ff6;
        LOCK();
        iVar5 = (int)plVar10[1];
        bVar11 = iVar6 == iVar5;
        if (bVar11) {
          *(int *)(plVar10 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar11);
      uVar9 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar10 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar10 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      bVar4 = false;
    }
    lVar7 = FUN_141054386();
    lVar7 = *(longlong *)(lVar7 + 0x20);
    if (!bVar4) {
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
    }
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_149f2a750;
    local_88[0] = FUN_14291fb7a;
    plVar2 = *(longlong **)(lVar7 + 0x28);
    local_60 = uVar9;
    local_58 = plVar10;
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_98,local_88,(float)(param_2 + 0.05));
    plVar2 = local_90;
    if ((undefined8 *)(param_1 + 0x170) != &local_98) {
      *(undefined8 *)(param_1 + 0x170) = local_98;
      local_98 = 0;
      plVar3 = *(longlong **)(param_1 + 0x178);
      if (local_90 != plVar3) {
        local_90 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x178) = plVar2;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
      }
    }
    plVar2 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_90 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar8 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar8 = &local_68;
      }
      (*(code *)(*pppuVar8)[2])();
    }
    if (!bVar4) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c7313c FUN_140c7313c body=51 status=ok
// SIG undefined FUN_140c7313c(void)

void FUN_140c7313c(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xfb1) = 1;
  FUN_14067171c(param_1 + 0xf78);
  *(undefined8 *)(param_1 + 0xf78) = 0;
  FUN_140c73170(param_1);
  return;
}



// FUNCTION 140c73170 FUN_140c73170 body=73 status=ok
// SIG undefined FUN_140c73170(void)

void FUN_140c73170(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*param_1 + 0x8c0))();
  FUN_140c731ba(param_1);
  puVar1 = (undefined8 *)param_1[0x7b];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[0x7b] = 0;
  }
  FUN_140872622(param_1);
  return;
}



// FUNCTION 140c731ba FUN_140c731ba body=168 status=ok
// SIG undefined FUN_140c731ba(void)

void FUN_140c731ba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x900) != 0) {
    FUN_140521208();
    *(undefined8 *)(param_1 + 0x900) = 0;
    plVar3 = *(longlong **)(param_1 + 0x908);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x908) = 0;
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
    *(undefined8 *)(param_1 + 0x820) = 0;
    plVar3 = *(longlong **)(param_1 + 0x828);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x828) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140c73245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140c73262 FUN_140c73262 body=252 status=ok
// SIG undefined FUN_140c73262(void)

void FUN_140c73262(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xd10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd08);
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar4);
      FUN_140c733be(puVar3);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0xd10) = 0;
  if (*(int *)(param_1 + 0xd14) != 0) {
    FUN_140c7335e(param_1 + 0xd08,0);
  }
  iVar1 = *(int *)(param_1 + 0xd20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd18);
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar4);
      FUN_140c733be(puVar3);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0xd20) = 0;
  if (*(int *)(param_1 + 0xd24) != 0) {
    FUN_140c7335e(param_1 + 0xd18,0);
    return;
  }
  return;
}



// FUNCTION 140c7335e FUN_140c7335e body=96 status=ok
// SIG undefined FUN_140c7335e(void)

void FUN_140c7335e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 140c733be FUN_140c733be body=424 status=ok
// SIG undefined FUN_140c733be(void)

void FUN_140c733be(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (lVar3 != 0) {
    if (DAT_14cad2858 == 0) {
      local_40 = &local_28;
      local_28 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146395584;
      local_48 = &LAB_147a0ba80;
      local_50 = &LAB_14575ccce;
      local_58 = L"Engine";
      local_60 = 0x40000000000;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      lVar3 = *(longlong *)(param_1 + 0x48);
      if (lVar3 == 0) goto LAB_140c73460;
    }
    if ((((DAT_14cad2858 != 0) && (lVar2 = *(longlong *)(lVar3 + 0x10), lVar2 != 0)) &&
        (*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      if (*(int *)(lVar3 + 0xa98) != 0) {
        puVar1 = *(undefined8 **)(lVar3 + 0xa90);
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,0);
          FUN_1446efa72((longlong *)(lVar3 + 0xa90),0,0,0x10);
          *(undefined4 *)(lVar3 + 0xa98) = 0;
        }
      }
      lVar3 = *(longlong *)(lVar3 + 0xae8);
      if (lVar3 != 0) {
        lVar2 = FUN_1407831c2();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          *(undefined8 *)(lVar3 + 0x630) = 0;
        }
      }
    }
  }
LAB_140c73460:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140c73568(param_1);
  return;
}



// FUNCTION 140c73568 FUN_140c73568 body=134 status=ok
// SIG undefined FUN_140c73568(void)

void FUN_140c73568(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if (0 < (longlong)iVar1) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)*plVar3)(plVar3,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    *(undefined4 *)(param_1 + 0xa8) = 0;
    if (*(int *)(param_1 + 0xac) < 0) {
      FUN_1488ca5ec((longlong *)(param_1 + 0xa0),0);
    }
    *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) & 0xfd;
  }
  return;
}



// FUNCTION 140c735f0 FUN_140c735f0 body=151 status=ok
// SIG undefined FUN_140c735f0(void)

undefined8 * FUN_140c735f0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b410a90;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xb];
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
  *param_1 = &PTR_FUN_14b411430;
  plVar3 = (longlong *)param_1[8];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c73688 FUN_140c73688 body=135 status=ok
// SIG undefined FUN_140c73688(void)

undefined8 * FUN_140c73688(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b410960;
  plVar3 = (longlong *)param_1[0xb];
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
  *param_1 = &PTR_FUN_14b411430;
  plVar3 = (longlong *)param_1[8];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c73710 FUN_140c73710 body=84 status=ok
// SIG undefined FUN_140c73710(void)

void FUN_140c73710(longlong *param_1,wchar_t *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  FUN_140c73872();
  cVar1 = FUN_1409df8ac(param_1,param_3);
  if (cVar1 != '\0') {
    iVar2 = _wtoi(param_2);
    *(int *)(param_1 + 10) = iVar2;
                    /* WARNING: Could not recover jumptable at 0x000140c73758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf8))(param_1,param_3,0);
    return;
  }
  return;
}



// FUNCTION 140c73764 FUN_140c73764 body=78 status=ok
// SIG undefined FUN_140c73764(void)

void FUN_140c73764(longlong param_1,uint param_2)

{
  FUN_140c737b2(param_1 + 0x54,param_1 + 0x50,*(undefined4 *)(param_1 + 0x18),param_2);
  if ((param_2 >> 0x11 & 1) == 0) {
    *(uint *)(param_1 + 0x18) = (uint)*(ushort *)(param_1 + 0x18) | param_2 & 0xff00ffff;
    FUN_14078f2d2(param_1 + 0x20,param_1);
    return;
  }
  return;
}



// FUNCTION 140c737b2 FUN_140c737b2 body=191 status=ok
// SIG undefined FUN_140c737b2(void)

void FUN_140c737b2(undefined4 *param_1,undefined4 *param_2,ulonglong param_3,uint param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  if ((param_4 >> 0x11 & 1) != 0) {
    *param_1 = *param_2;
    return;
  }
  if (DAT_14c8407a8 == 0) {
    FUN_1414b00ea();
  }
  lVar3 = DAT_14c8407a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 != 1) goto LAB_140c73809;
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    if (DVar4 != DVar5) goto LAB_140c73809;
  }
  if (((param_3 & 0x20) == 0) || (plVar2 = *(longlong **)(lVar3 + 0xf0), plVar2 == (longlong *)0x0))
  {
    *param_1 = *param_2;
  }
  else {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_1,*param_2);
  }
LAB_140c73809:
  if ((param_4 >> 0x10 & 1) == 0) {
    *(undefined1 *)(lVar3 + 0x170) = 1;
  }
  return;
}



// FUNCTION 140c73872 FUN_140c73872 body=504 status=ok
// SIG undefined FUN_140c73872(void)

void FUN_140c73872(ulonglong *param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined *puVar5;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  ulonglong local_58;
  ulonglong *local_50;
  undefined8 **local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = param_1[9];
  local_58 = param_4;
  if (uVar3 == 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    param_1[9] = (ulonglong)puVar2;
    (**(code **)(*param_1 + 0xc0))(param_1,&local_50);
    puVar4 = local_50;
    if ((int)local_48 == 0) {
      puVar4 = (ulonglong *)&DAT_149dfb77a;
    }
    FUN_140c73a6c(puVar2,puVar4,0,0);
    if (local_50 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    uVar3 = param_1[9];
  }
  FUN_140c73a6c(uVar3,param_2,param_3,param_4);
  if (param_4 != 0) {
    iVar1 = FUN_144a788f7(param_4 & 0xffffffff);
    if (DAT_14c83f430 != DAT_14c83f45c) {
      puVar5 = &DAT_14c83f460;
      if (DAT_14c83f468 != (undefined *)0x0) {
        puVar5 = DAT_14c83f468;
      }
      iVar1 = *(int *)(puVar5 + (ulonglong)(DAT_14c83f470 - 1U & iVar1 + (int)(param_4 >> 0x20)) * 4
                      );
      while (iVar1 != -1) {
        puVar4 = (ulonglong *)(DAT_14c83f428 + (longlong)iVar1 * 0x18);
        if (*puVar4 == param_4) {
          if ((puVar4 != (ulonglong *)0x0) && (uVar3 = puVar4[1], uVar3 != 0)) goto LAB_140c73a10;
          break;
        }
        iVar1 = (int)puVar4[2];
      }
    }
    local_60 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    local_60[4] = 0;
    *(undefined4 *)(local_60 + 5) = 0;
    *local_60 = 0;
    local_60[1] = 0;
    *(undefined8 *)((longlong)local_60 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)local_60 + 0x34) = 0;
    local_60[8] = 0;
    *(undefined4 *)(local_60 + 9) = 0;
    local_48 = &local_60;
    local_50 = &local_58;
    FUN_1467be6a8(&local_3c);
    uVar3 = *(ulonglong *)(DAT_14c83f428 + 8 + (longlong)local_3c * 0x18);
LAB_140c73a10:
    local_50 = param_1;
    FUN_1467bebf6(uVar3,&local_60);
    *(undefined1 *)(param_1[9] + 0x10) = 1;
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c73a6c FUN_140c73a6c body=550 status=ok
// SIG undefined FUN_140c73a6c(void)

void FUN_140c73a6c(longlong *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  wchar_t *_Str;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  
  _Str = (wchar_t *)FUN_1409e01db(param_2);
  iVar6 = _wtoi(_Str);
  uVar2 = *(uint *)(param_1 + 1);
  lVar11 = *param_1;
  uVar7 = 0;
  uVar13 = uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar1 = (uVar13 >> 1) + uVar7;
      if (*(int *)(lVar11 + (ulonglong)uVar1 * 0x18) < (int)param_3) {
        uVar7 = uVar1 + (uVar13 & 1);
      }
      bVar5 = 1 < uVar13;
      uVar13 = uVar13 >> 1;
    } while (bVar5);
  }
  if ((((int)uVar7 < (int)uVar2) && (*(int *)(lVar11 + (ulonglong)uVar7 * 0x18) <= (int)param_3)) &&
     (puVar14 = (uint *)(lVar11 + (ulonglong)uVar7 * 0x18 + 8), puVar14 != (uint *)0x0))
  goto LAB_140c73b69;
  uVar7 = 0;
  uVar13 = uVar2;
  if ((int)uVar2 < 1) {
LAB_140c73b14:
    *(uint *)(param_1 + 1) = uVar2 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
      FUN_140c73e5a(param_1,uVar2);
      lVar11 = *param_1;
    }
    lVar12 = (ulonglong)uVar7 * 0x18;
    memmove((void *)(lVar11 + lVar12 + 0x18),(void *)(lVar11 + lVar12),
            (ulonglong)(uVar2 - uVar7) * 0x18);
    puVar14 = (uint *)(lVar12 + *param_1);
  }
  else {
    do {
      uVar1 = (uVar13 >> 1) + uVar7;
      if (*(int *)(lVar11 + (ulonglong)uVar1 * 0x18) < (int)param_3) {
        uVar7 = uVar1 + (uVar13 & 1);
      }
      bVar5 = 1 < uVar13;
      uVar13 = uVar13 >> 1;
    } while (bVar5);
    if (((int)uVar2 <= (int)uVar7) || ((int)param_3 < *(int *)(lVar11 + (ulonglong)uVar7 * 0x18)))
    goto LAB_140c73b14;
    puVar14 = (uint *)(lVar11 + (ulonglong)uVar7 * 0x18);
    FUN_1467be678(puVar14,1);
  }
  *puVar14 = param_3;
  puVar14[2] = 0;
  puVar14[3] = 0;
  puVar14[4] = 0;
  puVar14[5] = 0;
  puVar14 = puVar14 + 2;
LAB_140c73b69:
  if ((((param_3 & 0xfd000000) != 0x5000000) && ((param_3 & 0xfe000000) != 0xa000000)) &&
     (0 < (int)puVar14[2])) {
    plVar4 = *(longlong **)puVar14;
    if (*plVar4 == param_4) {
      iVar3 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
        uVar10 = 0;
      }
      else if (iVar3 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        uVar10 = (ulonglong)(DVar8 != DVar9);
      }
      else {
        uVar10 = 1;
      }
      if (*(int *)((longlong)plVar4 + uVar10 * 4 + 8) == iVar6) {
        return;
      }
    }
    puVar14[2] = 0;
    if (puVar14[3] != 1) {
      FUN_140c73fcc(puVar14);
    }
  }
  uVar2 = puVar14[2];
  puVar14[2] = uVar2 + 1;
  if (puVar14[3] < uVar2 + 1) {
    FUN_140c73c92(puVar14,uVar2);
  }
  lVar11 = *(longlong *)puVar14;
  lVar12 = (longlong)(int)uVar2 * 0x10;
  *(longlong *)(lVar11 + lVar12) = param_4;
  *(int *)(lVar11 + 8 + lVar12) = iVar6;
  *(int *)(lVar11 + 0xc + lVar12) = iVar6;
  return;
}



// FUNCTION 140c73c92 FUN_140c73c92 body=269 status=ok
// SIG undefined FUN_140c73c92(void)

void FUN_140c73c92(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140c73da0 FUN_140c73da0 body=59 status=ok
// SIG undefined FUN_140c73da0(void)

undefined8 FUN_140c73da0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_140052f36();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)(param_1 + 0x58);
  }
  else {
    puVar2 = *(undefined4 **)(param_1 + 0x50);
  }
  FUN_140002266(param_2,&DAT_149e063bc,*puVar2);
  return param_2;
}



// FUNCTION 140c73ddc FUN_140c73ddc body=126 status=ok
// SIG undefined FUN_140c73ddc(void)

undefined8 FUN_140c73ddc(longlong param_1,undefined8 param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar4 = 0;
  }
  else if (iVar1 == 1) {
    DVar2 = FUN_140ad26c0();
    DVar3 = GetCurrentThreadId();
    uVar4 = (ulonglong)(DVar2 != DVar3);
  }
  else {
    uVar4 = 1;
  }
  FUN_140002266(param_2,&DAT_149e063bc,*(undefined4 *)(param_1 + 0x50 + uVar4 * 4));
  return param_2;
}



// FUNCTION 140c73e5a FUN_140c73e5a body=370 status=ok
// SIG undefined FUN_140c73e5a(void)

void FUN_140c73e5a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c73ee3;
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
LAB_140c73ee3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140c73fcc FUN_140c73fcc body=144 status=ok
// SIG undefined FUN_140c73fcc(void)

void FUN_140c73fcc(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x10;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x10,4);
  }
  uVar2 = 0x7fffffff;
  if (0 < (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 140c7405c FUN_140c7405c body=724 status=ok
// SIG undefined FUN_140c7405c(void)

void FUN_140c7405c(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined4 param_5,float param_6,undefined4 param_7)

{
  longlong lVar1;
  float *pfVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_68 [40];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[4];
  *(undefined8 *)(*param_1 + 0x10) = param_4;
  *(undefined8 *)(*param_1 + 0x18) = param_2;
  *(float *)(*param_1 + 0x40) = param_6 + 0.0;
  *(undefined4 *)(*param_1 + 0x44) = 0;
  *(undefined4 *)(*param_1 + 0x54) = param_5;
  *(undefined4 *)(*param_1 + 0x58) = *param_3;
  *(byte *)(*param_1 + 0x5e) = *(byte *)(*param_1 + 0x5e) & 0xfe;
  if (*(char *)(param_1[1] + 0x92) == '\x01') {
    bVar5 = *(char *)(param_1[1] + 0x93) * '\x02';
  }
  else {
    bVar5 = 0;
  }
  *(byte *)(*param_1 + 0x5e) = *(byte *)(*param_1 + 0x5e) & 0xfd | bVar5;
  *(undefined1 *)(*param_1 + 0x5c) = *(undefined1 *)(param_1[1] + 0x90);
  *(undefined1 *)(*param_1 + 0x5d) = *(undefined1 *)(param_1[1] + 0x91);
  *(undefined4 *)(*param_1 + 0x50) = param_7;
  if ((*(int *)(*(longlong *)param_1[2] + 8) < 0xc9) &&
     ((*(longlong *)param_1[3] == 0 || (*(char *)(*param_1 + 0x5c) == '\0')))) goto LAB_140c74132;
  lVar8 = *(longlong *)(param_1[1] + 0x30);
  if (lVar8 == 0) {
    iVar6 = *(int *)(param_1[1] + 0x38);
    if (((-1 < (longlong)iVar6) && (plVar3 = *(longlong **)(lVar1 + 0x18), iVar6 < (int)plVar3[1]))
       && (lVar8 = (longlong)iVar6 * 0x40 + *plVar3, lVar8 != 0)) goto LAB_140c74182;
LAB_140c741a0:
    lVar8 = *param_1;
  }
  else {
LAB_140c74182:
    if ((*(char *)(lVar8 + 0x34) != '\x01') || ((*(byte *)(lVar8 + 0x30) & 1) == 0))
    goto LAB_140c741a0;
    pfVar2 = (float *)param_1[5];
    cVar4 = FUN_142876ddf(pfVar2);
    if (cVar4 == '\0') goto LAB_140c741a0;
    FUN_146948f3a(lVar8 + 0x10,&local_40);
    fVar13 = 1.0 / (*pfVar2 * pfVar2[3] - pfVar2[1] * pfVar2[2]);
    fVar12 = -pfVar2[2] * fVar13;
    fVar13 = fVar13 * pfVar2[3];
    fVar14 = -pfVar2[4] * fVar13 - pfVar2[5] * fVar12;
    fVar15 = local_40 * fVar13 + local_3c * fVar12 + fVar14;
    fVar14 = fVar13 * local_38 + fVar12 * local_34 + fVar14;
    fVar12 = fVar14;
    if (fVar15 <= fVar14) {
      fVar12 = fVar15;
      fVar15 = fVar14;
    }
    *(float *)(*param_1 + 0x48) = fVar12;
    *(float *)(*param_1 + 0x4c) = fVar15;
    lVar8 = *param_1;
    iVar6 = (int)ROUND(*(float *)(lVar8 + 0x48) + *(float *)(lVar8 + 0x48) + -0.5);
    if (iVar6 < 2) {
      bVar9 = false;
    }
    else {
      bVar9 = *(char *)(lVar8 + 0x5c) == '\x02';
    }
    iVar7 = -((int)ROUND(-0.5 - (*(float *)(lVar8 + 0x4c) + *(float *)(lVar8 + 0x4c))) >> 1);
    if (iVar7 < *(int *)(*(longlong *)param_1[2] + 0x40)) {
      bVar10 = *(char *)(lVar8 + 0x5c) == '\x01';
    }
    else {
      bVar10 = false;
    }
    bVar11 = *(char *)(lVar8 + 0x5d) == '\x03';
    if (((1 < iVar6 && bVar11) || ((bool)(bVar9 | bVar10))) ||
       ((iVar7 < *(int *)(*(longlong *)param_1[2] + 0x40) && bVar11 ||
        (*(char *)(param_1[1] + 0x93) != '\0')))) {
      if (*(longlong *)param_1[3] == 0) {
        *(byte *)(lVar8 + 0x5e) = *(byte *)(lVar8 + 0x5e) | 1;
      }
      goto LAB_140c74132;
    }
  }
  *(undefined1 *)(lVar8 + 0x5c) = 0;
LAB_140c74132:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_140c74332(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68,*param_1);
}



// FUNCTION 140c74332 FUN_140c74332 body=8622 status=ok
// SIG undefined FUN_140c74332(void)

uint FUN_140c74332(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  float *pfVar4;
  longlong *plVar5;
  uint3 uVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  uint *puVar16;
  byte bVar17;
  byte bVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  int iVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  uint uVar26;
  undefined8 in_R10;
  longlong *plVar27;
  undefined4 uVar28;
  int iVar29;
  uint uVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  float fVar49;
  undefined4 uVar51;
  undefined1 auVar50 [16];
  undefined4 uVar52;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  float fVar53;
  float fVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  float fVar58;
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  undefined1 unaff_XMM14 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  undefined1 unaff_XMM15 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  undefined1 local_2a0;
  undefined1 local_298;
  undefined1 local_290;
  undefined2 local_288;
  longlong local_280;
  byte local_271;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  char local_25d;
  int local_25c;
  undefined8 *local_258;
  float local_24c;
  ulonglong local_248;
  float local_23c;
  undefined4 local_238;
  float local_234;
  byte local_22e;
  byte local_22d;
  float local_22c;
  float local_228;
  undefined4 local_224;
  float local_220;
  float local_21c;
  undefined1 local_218 [8];
  undefined4 uStack_210;
  undefined4 uStack_20c;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  uint local_1f0;
  float local_1ec;
  float local_1e8;
  int local_1e4;
  ulonglong local_1e0;
  uint local_1d8;
  int local_1d4;
  float local_1d0;
  float local_1cc;
  longlong *local_1c8;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  int local_1b0;
  undefined4 local_1ac;
  ulonglong local_1a8;
  undefined8 *local_1a0;
  longlong *local_198;
  ulonglong local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  longlong *local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 local_12c;
  float local_118;
  float local_114;
  undefined2 local_fc;
  byte local_fa;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_1c8 = (longlong *)*param_2;
  local_258 = param_2;
  local_1a0 = param_1;
  (**(code **)(*(longlong *)param_1[4] + 8))((longlong *)param_1[4],&local_158);
  plVar20 = local_150;
  local_168 = local_158;
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar27 = local_150 + 1;
    *(int *)plVar27 = (int)*plVar27 + -1;
    UNLOCK();
    if ((int)*plVar27 == 0) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  puVar24 = local_258;
  uVar26 = *(uint *)(local_258 + 8);
  auVar34 = ZEXT416(uVar26);
  pfVar4 = (float *)local_258[6];
  local_264 = *pfVar4;
  local_268 = pfVar4[1];
  local_1e8 = pfVar4[2];
  local_1ec = pfVar4[3];
  local_26c = pfVar4[4];
  local_270 = pfVar4[5];
  auVar45 = ZEXT416((uint)local_270);
  uVar25 = CONCAT71((int7)((ulonglong)in_R10 >> 8),*(char *)((longlong)local_258 + 0x5c));
  local_25d = *(char *)((longlong)local_258 + 0x5d);
  local_188 = ZEXT416(*(uint *)(local_1c8 + 0xe));
  cVar2 = *(char *)((longlong)local_1c8 + 0x14);
  local_248 = (ulonglong)*(uint *)(local_1c8 + 1);
  local_1d4 = *(int *)local_258[3];
  local_224 = (undefined4)uVar25;
  bVar17 = *(char *)((longlong)local_258 + 0x5c) != '\0' &&
           *(float *)((longlong)local_258 + 0x4c) - *(float *)(local_258 + 9) <
           (float)(int)local_1c8[8];
  fVar58 = *(float *)((longlong)local_258 + 0x44);
  iVar9 = -1;
  if (local_25d == '\x03') {
    if ((bool)bVar17) {
      plVar20 = &local_158;
      local_158 = (longlong *)0xffffffffffffffff;
      local_148 = 0;
      local_150 = (longlong *)local_258[8];
      FUN_14695e3ee(local_258,uVar25 & 0xffffffff,plVar20);
      local_1e4 = (uint)local_158;
      auVar34 = ZEXT416((uint)local_150);
      local_228 = (float)local_148;
      local_1fc = local_148._4_4_;
      auVar45 = ZEXT416((uint)local_270);
      fVar58 = local_150._4_4_;
      iVar9 = local_158._4_4_;
    }
    else {
      local_1e4 = -1;
      local_1fc = 0.0;
      local_228 = 0.0;
      auVar45 = ZEXT416((uint)local_270);
      auVar34 = ZEXT416(uVar26);
    }
  }
  else {
    local_1e4 = -1;
    local_1fc = 0.0;
    local_228 = 0.0;
  }
  fVar31 = 0.0;
  uVar52 = 0;
  uVar51 = 0;
  if (0 < (int)local_248) {
    local_188._0_8_ = local_188._0_8_ & 0x7fffffff7fffffff;
    local_188._8_4_ = local_188._8_4_ & 0x7fffffff;
    local_188._12_4_ = local_188._12_4_ & 0x7fffffff;
    local_1cc = 0.0;
    local_1ac = 0x3f800000;
    if (cVar2 == '\0') {
      local_1ac = 0;
    }
    local_22d = local_25d == '\x03' && (bool)bVar17;
    local_1b0 = (int)local_248 + -1;
    bVar18 = 1;
    local_1f0 = -1;
    auVar43._0_12_ = ZEXT812(0x3f000000);
    auVar43._12_4_ = 0;
    local_1d0 = 0.0;
    lVar19 = 0;
    local_198 = (longlong *)0x0;
    uVar28 = 0xffffffff;
    local_1a8 = 0;
    local_1d8 = 0;
    local_1b4 = 0.0;
    local_1b8 = 0.0;
    local_1bc = 0.0;
    local_190 = 0;
    uVar26 = 0;
    iVar22 = 0;
    uVar25 = local_248;
    fVar47 = local_264;
    fVar40 = local_268;
    fVar46 = local_26c;
    local_25c = iVar9;
    local_22e = bVar17;
LAB_140c745e3:
    iVar29 = local_1d4;
    if (iVar9 < iVar22 || iVar22 < local_1e4) {
      lVar15 = *(longlong *)(*local_1c8 + (longlong)iVar22 * 0xa8);
      fVar60 = 1.0;
      if (lVar15 != 0) {
        fVar60 = *(float *)(lVar15 + 0x1c);
      }
      plVar27 = (longlong *)(*local_1c8 + (longlong)iVar22 * 0xa8);
      cVar2 = *(char *)(lVar15 + 0x24);
      plVar20 = (longlong *)CONCAT71((int7)((ulonglong)plVar20 >> 8),cVar2 != '\0');
      cVar7 = *(char *)((longlong)plVar27 + 0x24);
      local_1f8 = (float)CONCAT31(local_1f8._1_3_,cVar7);
      auVar59._4_12_ = unaff_XMM15._4_12_;
      fVar61 = auVar34._0_4_;
      local_238 = uVar28;
      local_234 = fVar31;
      if (cVar7 == '\x01') {
        local_218._0_4_ = uVar26;
        auVar45._12_4_ = unaff_XMM15._12_4_;
        if (cVar2 == '\0') {
          uVar11 = FUN_140c765f8(puVar24[5],&local_158,plVar27,puVar24[3]);
          uVar26 = local_218._0_4_;
          if ((local_150._6_1_ != '\x01') ||
             (0 < iVar29 && ((ulonglong)local_150 & 0x10000000000) == 0)) {
LAB_140c751c0:
            local_21c = 0.0;
            local_22c = 0.0;
            local_24c = 0.0;
            cVar7 = '\0';
            unaff_XMM14 = ZEXT816(0);
            auVar64 = ZEXT816(0);
            auVar45 = ZEXT416((uint)local_270);
            fVar60 = 0.0;
            fVar39 = 0.0;
            fVar53 = 0.0;
            fVar31 = 0.0;
            auVar43._0_12_ = ZEXT812(0x3f000000);
            auVar43._12_4_ = 0;
            puVar24 = local_258;
            uVar25 = local_248;
            fVar47 = local_264;
            fVar40 = local_268;
            fVar46 = local_26c;
            auVar59 = ZEXT816(0);
            iVar9 = local_25c;
            goto LAB_140c748c8;
          }
          local_21c = (float)(int)(short)local_158;
          fVar39 = (float)local_150._2_2_;
          fVar47 = (float)(ushort)local_150;
          local_22c = (float)local_158._6_2_;
          local_24c = (float)local_158._4_2_;
          local_1e0 = local_1e0 & 0xffffffff00000000;
          unaff_XMM14 = ZEXT816(0);
          local_220 = 0.0;
          unaff_XMM8_Db = 0;
          unaff_XMM8_Dc = 0;
          unaff_XMM8_Dd = 0;
          fVar53 = fVar47;
          cVar7 = local_150._4_1_;
          fVar31 = (float)(int)local_158._2_2_;
          local_23c = fVar39;
        }
        else {
          uVar11 = FUN_142862ae2(puVar24[5],&local_158,plVar27,puVar24[3]);
          if ((uStack_138._7_1_ != '\x01') || ((uStack_138 & 0x10000000000) == 0)) {
            uVar26 = local_218._0_4_;
            goto LAB_140c751c0;
          }
          lVar15 = *plVar27;
          if (local_1d4 < 1) {
            fVar31 = 0.0;
          }
          else {
            uVar26 = FUN_1469357d3();
            lVar15 = *plVar27;
            fVar31 = (float)*(int *)local_258[3] * *(float *)(lVar15 + 0x18) + 0.5;
            auVar43 = roundps(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31),1);
            fVar31 = auVar43._0_4_ / (float)uVar26;
          }
          local_21c = (float)local_140;
          local_23c = (float)uStack_138;
          fVar39 = (float)(int)(local_150._2_2_ - 1);
          fVar47 = (float)(int)((ushort)local_150 - 1);
          local_22c = (float)local_158._6_2_ + 0.5;
          local_24c = (float)local_158._4_2_ + 0.5;
          local_220 = (float)local_148 + local_150._4_4_;
          unaff_XMM14._0_4_ = (float)(int)*(short *)(lVar15 + 0x26) * local_220;
          local_1e0 = CONCAT44(local_1e0._4_4_,(local_150._4_4_ - fVar31) / local_220);
          fVar53 = local_140._4_4_;
          cVar7 = uStack_138._4_1_;
          fVar31 = local_148._4_4_;
        }
        bVar18 = iVar22 <= local_25c & bVar18;
        auVar59._0_4_ = (float)(int)*(short *)((longlong)plVar27 + 0x1c) + fVar31 + fVar61;
        sVar3 = *(short *)((longlong)plVar27 + 0x1e);
        fVar40 = *(float *)((longlong)local_258 + 0x3c);
        fVar46 = *(float *)(local_258 + 7);
        uVar26 = local_218._0_4_;
        if ((*(byte *)((longlong)local_258 + 0x5e) & 1) == 0) {
LAB_140c747cd:
          auVar43._0_12_ = ZEXT812(0x3f000000);
          auVar43._12_4_ = 0;
          auVar45 = ZEXT416((uint)local_270);
          fVar31 = fVar58 - local_21c;
          uVar30 = (uint)cVar7;
          fVar65 = unaff_XMM14._0_4_;
          if (((local_198 == (longlong *)0x0) || (local_1f0 != uVar30)) ||
             (((cVar2 != '\0' ^ (byte)local_190) & 1) != 0)) {
LAB_140c74e40:
            plVar5 = *(longlong **)(*(longlong *)(local_258[5] + 0x1e0) + (longlong)cVar7 * 0x10);
            local_271 = bVar18;
            plVar12 = (longlong *)(**(code **)(*plVar5 + 8))(plVar5);
            uVar13 = (**(code **)(*local_168 + 0x20))(local_168,uVar30,plVar12,local_258[2]);
            local_1f0 = (**(code **)*plVar12)(plVar12);
            local_198 = plVar12;
            uVar26 = (**(code **)(*plVar12 + 8))(plVar12);
            iVar9 = (**(code **)(*plVar5 + 0x18))(plVar5);
            local_238 = 0xffffffff;
            if (iVar9 != 1) {
              local_238 = *(undefined4 *)(local_258 + 0xb);
            }
            if (iVar9 == 0) {
              local_298 = 2;
              if (cVar2 != '\0') {
                local_298 = 8;
              }
            }
            else {
              local_298 = 3;
              if ((iVar9 == 2) &&
                 ((local_1d4 < 1 || (local_298 = 8, *(char *)(local_258[3] + 4) == '\x01')))) {
                local_298 = 9;
              }
            }
            local_1cc = 1.0 / (float)local_1f0;
            local_1d0 = 1.0 / (float)uVar26;
            fVar44 = 0.0;
            fVar41 = 0.0;
            uVar28 = 0;
            fVar54 = 0.0;
            fVar49 = 1.0;
            if (cVar2 != '\0') {
              if (iVar9 == 2) {
                uVar28 = 0x3f800000;
              }
              fVar41 = local_1d0 * 0.5 * fVar65;
              fVar44 = local_1cc * 0.5 * fVar65;
              local_1bc = (float)local_1e0;
              local_1b4 = local_220;
              fVar54 = (float)local_1e0;
              fVar49 = local_220;
              local_1b8 = fVar65;
              local_178 = auVar59;
            }
            local_158 = (longlong *)CONCAT44(fVar41,fVar44);
            local_150 = (longlong *)CONCAT44(fVar49,fVar54);
            local_148 = CONCAT44(local_1ac,uVar28);
            local_140 = 0;
            uStack_138 = 0;
            local_130 = 0;
            local_12c = 0x3f800000;
            local_280 = local_258[4];
            local_290 = *(undefined1 *)(local_280 + 0x45);
            local_288 = 0;
            local_2a0 = 2;
            local_2a8 = uVar13;
            lVar19 = FUN_140c7650a(local_1a0,*local_1a0,*(undefined4 *)((longlong)local_258 + 0x54),
                                   &local_158);
            uVar25 = local_248;
            iVar9 = (int)local_248;
            iVar29 = iVar9 - iVar22;
            FUN_140c764e2(lVar19,iVar29 * 4);
            if (iVar9 < 0x1400) {
              auVar45 = ZEXT416((uint)local_270);
              auVar43._0_12_ = ZEXT812(0x3f000000);
              auVar43._12_4_ = 0;
              if (*(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x110) < DAT_14c975250) {
                FUN_144b3d300(&DAT_14c975250);
                auVar43._0_12_ = ZEXT812(0x3f000000);
                auVar43._12_4_ = 0;
                auVar45 = ZEXT416((uint)local_270);
                uVar25 = local_248;
                if (DAT_14c975250 == -1) {
                  local_15c = 0x1400;
                  FUN_140c78102();
                  atexit((_func_5014 *)&LAB_142876e81);
                  _Init_thread_footer(&DAT_14c975250);
                  auVar43._0_12_ = ZEXT812(0x3f000000);
                  auVar43._12_4_ = 0;
                  auVar45 = ZEXT416((uint)local_270);
                  uVar25 = local_248;
                }
              }
              *(undefined8 **)(lVar19 + 0x58) = &DAT_14c975240;
              *(undefined4 *)(lVar19 + 0x78) = 0;
              *(undefined4 *)(lVar19 + 0x70) = 0;
              uVar26 = local_218._0_4_;
              bVar18 = local_271;
            }
            else {
              FUN_14696d336(lVar19,iVar29 * 6);
              auVar45 = ZEXT416((uint)local_270);
              auVar43._0_12_ = ZEXT812(0x3f000000);
              auVar43._12_4_ = 0;
              uVar25 = local_248;
              uVar26 = local_218._0_4_;
              bVar18 = local_271;
            }
          }
          else {
            if (cVar2 != '\0') {
              if ((local_220 == local_1b4) && (!NAN(local_220) && !NAN(local_1b4))) {
                if ((fVar65 == local_1b8) && (!NAN(fVar65) && !NAN(local_1b8))) {
                  if (((float)local_1e0 == local_1bc) && (!NAN((float)local_1e0) && !NAN(local_1bc))
                     ) goto LAB_140c74843;
                }
              }
              goto LAB_140c74e40;
            }
LAB_140c74843:
            plVar20 = (longlong *)(local_190 & 0xffffffff);
            uVar25 = local_248;
            uVar30 = local_1f0;
          }
          auVar62._4_4_ = unaff_XMM8_Db;
          auVar62._0_4_ = fVar47;
          auVar62._8_4_ = unaff_XMM8_Dc;
          auVar62._12_4_ = unaff_XMM8_Dd;
          auVar64 = ZEXT416((uint)((fVar40 + fVar46) * (1.0 / fVar60) + (float)(int)sVar3 + fVar31))
          ;
          local_24c = local_24c * local_1cc;
          local_22c = local_22c * local_1d0;
          unaff_XMM14._4_12_ = auVar62._4_12_;
          unaff_XMM14._0_4_ = fVar47 * local_1cc;
          fVar39 = fVar39 * local_1d0;
          fVar53 = fVar53 * fVar60;
          fVar60 = fVar60 * local_23c;
          cVar7 = '\x01';
          uVar11 = (ulonglong)plVar20 & 0xffffffff;
          puVar24 = local_258;
          fVar47 = local_264;
          fVar40 = local_268;
          fVar46 = local_26c;
          fVar31 = local_23c;
          iVar9 = local_25c;
          local_1f0 = uVar30;
          local_190 = uVar11;
          goto LAB_140c748c8;
        }
        auVar45._4_4_ = unaff_XMM15._4_4_;
        auVar45._0_4_ = auVar59._0_4_;
        auVar45._8_4_ = unaff_XMM15._8_4_;
        uVar26 = local_218._0_4_;
        if (*(float *)(local_258 + 9) <= fVar53 + auVar59._0_4_) {
          puVar24 = local_258;
          auVar59 = auVar45;
          fVar31 = local_234;
          if (auVar59._0_4_ < *(float *)((longlong)local_258 + 0x4c) ||
              auVar59._0_4_ == *(float *)((longlong)local_258 + 0x4c)) goto LAB_140c747cd;
          goto LAB_140c75511;
        }
        fVar58 = fVar58 + (float)(int)*(short *)((longlong)plVar27 + 0x1a);
        auVar38._4_4_ = 0;
        auVar38._0_4_ = fVar61 + (float)(int)(short)plVar27[3];
        auVar38._8_4_ = auVar34._8_4_;
        auVar38._12_4_ = auVar34._12_4_;
LAB_140c7639d:
        auVar45 = ZEXT416((uint)local_270);
        auVar43._0_12_ = ZEXT812(0x3f000000);
        auVar43._12_4_ = 0;
        puVar24 = local_258;
        uVar25 = local_248;
        auVar34 = auVar38;
        fVar47 = local_264;
        fVar40 = local_268;
        fVar46 = local_26c;
        unaff_XMM15 = auVar59;
        iVar9 = local_25c;
        uVar28 = local_238;
        fVar31 = local_234;
      }
      else {
        uVar11 = (ulonglong)(uint)(int)(short)plVar27[3];
        fVar53 = (float)(int)(short)plVar27[3];
        local_21c = 0.0;
        fVar31 = 0.0;
        fVar39 = 0.0;
        unaff_XMM14 = ZEXT816(0);
        fVar60 = 0.0;
        local_22c = 0.0;
        local_24c = 0.0;
        auVar64 = ZEXT816(0);
        auVar59 = auVar34;
LAB_140c748c8:
        uVar30 = iVar22 + 1;
        plVar20 = (longlong *)(ulonglong)uVar30;
        uVar11 = CONCAT71((int7)(uVar11 >> 8),local_1e4 <= (int)uVar30);
        bVar17 = iVar22 < iVar9 & local_22d & local_1e4 <= (int)uVar30;
        fVar65 = auVar59._0_4_;
        auVar66._4_12_ = auVar59._4_12_;
        if (bVar17 == 1) {
          uVar11 = (ulonglong)(uint)(int)(short)plVar27[3];
          local_228 = (float)(int)(short)plVar27[3] + fVar61;
          _local_218 = ZEXT416((uint)fVar53);
          local_271 = bVar18;
          local_23c = fVar31;
          local_1fc = fVar58;
LAB_140c75228:
          puVar24 = local_258;
          uVar25 = local_248;
          fVar47 = local_264;
          fVar40 = local_268;
          fVar46 = local_26c;
          fVar31 = local_23c;
          uVar55 = local_218._4_4_;
          uVar56 = uStack_210;
          uVar57 = uStack_20c;
          iVar9 = local_25c;
          bVar18 = local_271;
          if ((char)local_224 != '\x02') {
            if ((char)local_224 != '\x01') {
              auVar45 = ZEXT416((uint)local_270);
              auVar43._0_12_ = ZEXT812(0x3f000000);
              auVar43._12_4_ = 0;
              fVar53 = (float)local_218._0_4_;
              goto LAB_140c74905;
            }
            local_224 = 1;
            if (local_25d != '\x03') {
              iVar29 = 0;
              if (iVar22 < (int)local_248 + -1) {
                iVar29 = *(int *)(local_258[1] + 0x40);
              }
              if ((fVar53 + fVar65 + (float)iVar29 < *(float *)((longlong)local_258 + 0x4c)) &&
                 ((*(int *)(local_258 + 10) < 0 || (iVar22 < *(int *)(local_258 + 10))))) {
LAB_140c763f9:
                uVar26 = uVar26 + 1;
                goto LAB_140c7641e;
              }
              local_228 = fVar61 - local_234;
              bVar18 = 1;
              fVar47 = fVar58;
              bVar17 = local_22e;
              goto LAB_140c75549;
            }
LAB_140c7641e:
            auVar45 = ZEXT416((uint)local_270);
            auVar43._0_12_ = ZEXT812(0x3f000000);
            auVar43._12_4_ = 0;
            fVar53 = (float)local_218._0_4_;
            goto LAB_140c74908;
          }
          local_224 = (undefined4)CONCAT71((int7)(uVar11 >> 8),2);
          if (local_25d == '\x03') goto LAB_140c7641e;
          bVar8 = 1;
          if ((*(float *)(local_258 + 9) <= fVar65) &&
             (bVar8 = 1,
             ((int)local_248 - *(int *)(local_258 + 10) <= iVar22 || *(int *)(local_258 + 10) < 0)
             && (local_1d8 & 1) == 0)) {
            if (*(char *)((longlong)plVar27 + 0x24) == '\x01') {
              cVar7 = '\x01';
              local_1d8 = 0;
              local_224 = 0;
              goto LAB_140c763f9;
            }
            bVar8 = 0;
          }
          local_228 = (float)(int)(short)plVar27[3];
          auVar59._0_4_ = (fVar65 + local_228) - *(float *)(local_258 + 9);
          auVar59._4_12_ = auVar66._4_12_;
          uVar6 = (uint3)(char)((ushort)(short)plVar27[3] >> 8);
          local_1d8 = CONCAT31(uVar6,auVar59._0_4_ < (float)*(int *)(local_258[1] + 0x40) & bVar8);
          local_228 = local_228 + fVar61;
          auVar38 = ZEXT416((uint)local_228);
          local_228 = local_228 - (float)*(int *)(local_258[1] + 0x40);
          local_224 = (undefined4)CONCAT71((uint7)uVar6,2);
          unaff_XMM8_Dc = uVar51;
          unaff_XMM8_Dd = uVar52;
          if (1 < *(byte *)((longlong)plVar27 + 0x21)) {
            iVar22 = iVar22 + (uint)*(byte *)((longlong)plVar27 + 0x21) + -1;
            local_224 = 2;
            local_1a8 = 1;
            unaff_XMM8_Db = 0;
            local_1fc = fVar58;
            goto LAB_140c7639d;
          }
          local_1a8 = 1;
          auVar45 = ZEXT416((uint)local_270);
          auVar43._0_12_ = ZEXT812(0x3f000000);
          auVar43._12_4_ = 0;
          unaff_XMM15 = auVar59;
          local_1fc = fVar58;
LAB_140c74dff:
          uVar28 = local_238;
          fVar31 = local_234;
          if (local_1f8._0_1_ != '\0') goto LAB_140c74d61;
          fVar60 = (float)(int)(short)plVar27[3];
          fVar31 = local_234 + fVar60;
          if (bVar17 != 0) {
            local_228 = local_228 - fVar31;
            auVar34._0_4_ = fVar61 - fVar31;
            goto LAB_140c75c21;
          }
          if (local_25d == '\x03') goto LAB_140c75c37;
LAB_140c74d79:
          auVar34._0_4_ = auVar34._0_4_ + fVar60;
        }
        else {
          uVar55 = 0;
          uVar56 = 0;
          uVar57 = 0;
          if ((char)local_224 != '\0') {
            _local_218 = ZEXT416((uint)fVar53);
            if ((1 < *(byte *)((longlong)plVar27 + 0x22)) ||
               (local_271 = bVar18, local_23c = fVar31, 1 < *(byte *)((longlong)plVar27 + 0x21))) {
              iVar9 = iVar22;
              if ((int)uVar30 < (int)local_248) {
                uVar11 = (ulonglong)*(uint *)((longlong)plVar27 + 0x14);
                puVar16 = (uint *)(*local_1c8 + (longlong)(int)uVar30 * 0xa8 + 0x14);
                iVar29 = iVar22;
                do {
                  iVar9 = iVar29;
                  if (*puVar16 != *(uint *)((longlong)plVar27 + 0x14)) break;
                  iVar29 = iVar29 + 1;
                  puVar16 = puVar16 + 0x2a;
                  iVar9 = local_1b0;
                } while (local_1b0 != iVar29);
              }
              local_271 = bVar18;
              local_23c = fVar31;
              if (iVar22 < iVar9) {
                local_2a8 = CONCAT71(local_2a8._1_7_,1);
                FUN_140863a48(local_1c8,&local_158,iVar22);
                if (local_158._4_1_ == '\0') {
                  uVar10 = (uint)(float)local_218._0_4_;
                }
                else {
                  uVar10 = (uint)local_158;
                }
                uVar11 = (ulonglong)uVar10;
                fVar53 = (float)(int)uVar10;
              }
            }
            goto LAB_140c75228;
          }
LAB_140c74905:
          uVar26 = uVar26 + 1;
LAB_140c74908:
          uVar28 = local_238;
          fVar44 = local_24c;
          unaff_XMM8_Dd = 0;
          unaff_XMM8_Dc = 0;
          unaff_XMM15 = auVar59;
          if ((cVar7 == '\0') || (lVar19 == 0)) goto LAB_140c74dff;
          fVar49 = auVar64._0_4_;
          fVar60 = fVar60 + fVar49;
          local_234 = 0.0;
          fVar54 = 0.0;
          local_23c = 0.0;
          local_220 = 0.0;
          if (puVar24[2] != 0) {
            local_234 = (float)iVar22 / (float)(int)uVar25 + 0.0;
            fVar54 = fVar49 / *(float *)((longlong)puVar24 + 0x3c) + 0.0;
            local_23c = (float)(int)uVar30 / (float)(int)uVar25 + 0.0;
            auVar43._0_12_ = ZEXT812(0x3f000000);
            auVar43._12_4_ = 0;
            local_220 = fVar60 / *(float *)((longlong)puVar24 + 0x3c) + 0.0;
          }
          fVar53 = fVar53 + fVar65;
          local_218._4_4_ = uVar55;
          local_218._0_4_ = fVar53;
          uStack_210 = uVar56;
          uStack_20c = uVar57;
          local_1e0 = (ulonglong)*(uint *)(lVar19 + 0x74);
          local_1f8 = fVar39;
          local_1f4 = fVar61;
          if (((float)local_188._0_4_ <= 1e-08) || (cVar2 == '\0')) {
            auVar34 = _local_218;
            if (cVar2 != '\0') goto LAB_140c75684;
            lVar15 = *(longlong *)(lVar19 + 0x50);
            iVar29 = *(int *)(lVar15 + 8);
            *(int *)(lVar15 + 8) = iVar29 + 1;
            local_24c = fVar58;
            if (*(int *)(lVar15 + 0xc) == iVar29) {
              FUN_146964c32(lVar15,iVar29);
              auVar43._0_12_ = ZEXT812(0x3f000000);
              auVar43._12_4_ = 0;
              auVar45 = ZEXT416((uint)local_270);
              puVar24 = local_258;
              uVar25 = local_248;
              fVar47 = local_264;
              fVar40 = local_268;
              fVar46 = local_26c;
              iVar9 = local_25c;
            }
            fVar31 = local_22c;
            fVar58 = local_1ec * fVar49;
            fVar61 = fVar65 * fVar40;
            fVar49 = fVar49 * local_1e8;
            auVar66._0_4_ = fVar65 * fVar47;
            auVar32._4_4_ = auVar59._4_4_;
            auVar32._0_4_ = auVar66._0_4_;
            auVar32._8_4_ = auVar59._8_4_;
            auVar32._12_4_ = auVar59._12_4_;
            auVar33._4_12_ = auVar32._4_12_;
            auVar33._0_4_ = auVar66._0_4_ + fVar49 + fVar46 + auVar43._0_4_;
            auVar34 = blendps(auVar33,ZEXT816(0),0xe);
            auVar34 = roundps(auVar34,auVar34,1);
            lVar15 = **(longlong **)(lVar19 + 0x50);
            lVar14 = (longlong)iVar29 * 0x2c;
            *(float *)(lVar15 + lVar14) = fVar44;
            *(float *)(lVar15 + 4 + lVar14) = local_22c;
            *(float *)(lVar15 + 8 + lVar14) = local_234;
            *(float *)(lVar15 + 0xc + lVar14) = fVar54;
            *(undefined8 *)(lVar15 + 0x10 + lVar14) = 0;
            *(int *)(lVar15 + 0x18 + lVar14) = auVar34._0_4_;
            auVar35._4_4_ = auVar59._4_4_;
            auVar35._0_4_ = fVar61;
            auVar35._8_4_ = auVar59._8_4_;
            auVar35._12_4_ = auVar59._12_4_;
            auVar36._4_12_ = auVar35._4_12_;
            auVar36._0_4_ = fVar61 + fVar58 + auVar45._0_4_ + auVar43._0_4_;
            auVar34 = blendps(auVar36,ZEXT816(0),0xe);
            auVar37 = roundps(auVar34,auVar34,1);
            *(int *)(lVar15 + 0x1c + lVar14) = auVar37._0_4_;
            *(undefined4 *)(lVar15 + 0x20 + lVar14) = uVar28;
            *(undefined4 *)(lVar15 + 0x24 + lVar14) = 0;
            *(int *)(lVar19 + 0x74) = *(int *)(lVar19 + 0x74) + 1;
            lVar15 = *(longlong *)(lVar19 + 0x50);
            iVar29 = *(int *)(lVar15 + 8);
            *(int *)(lVar15 + 8) = iVar29 + 1;
            local_21c = fVar60;
            local_178 = auVar66;
            if (*(int *)(lVar15 + 0xc) == iVar29) {
              auVar37._0_8_ = FUN_146964c32(lVar15,iVar29);
              auVar37._8_8_ = extraout_XMM0_Qb;
              auVar43._0_12_ = ZEXT812(0x3f000000);
              auVar43._12_4_ = 0;
              auVar45 = ZEXT416((uint)local_270);
              puVar24 = local_258;
              uVar25 = local_248;
              fVar47 = local_264;
              fVar40 = local_268;
              fVar46 = local_26c;
              iVar9 = local_25c;
            }
            fVar39 = unaff_XMM14._0_4_ + fVar44;
            auVar67._4_12_ = local_218._4_12_;
            fVar65 = local_218._0_4_ * fVar40;
            fVar53 = local_218._0_4_ * fVar47;
            fVar60 = auVar43._0_4_;
            auVar64._0_4_ = fVar49 + fVar53 + fVar46 + fVar60;
            auVar34 = blendps(auVar64,ZEXT816(0),0xe);
            auVar34 = roundps(auVar37,auVar34,1);
            auVar59 = blendps(ZEXT416((uint)(fVar58 + fVar65 + auVar45._0_4_ + fVar60)),ZEXT816(0),
                              0xe);
            auVar59 = roundps(auVar43,auVar59,1);
            lVar15 = **(longlong **)(lVar19 + 0x50);
            lVar14 = (longlong)iVar29 * 0x2c;
            stack0xfffffffffffffdec = auVar67._4_12_;
            local_218._0_4_ = fVar39;
            *(float *)(lVar15 + lVar14) = fVar39;
            *(float *)(lVar15 + 4 + lVar14) = fVar31;
            *(float *)(lVar15 + 8 + lVar14) = local_23c;
            *(float *)(lVar15 + 0xc + lVar14) = fVar54;
            *(undefined8 *)(lVar15 + 0x10 + lVar14) = 0x3f800000;
            *(int *)(lVar15 + 0x18 + lVar14) = auVar34._0_4_;
            *(int *)(lVar15 + 0x1c + lVar14) = auVar59._0_4_;
            *(undefined4 *)(lVar15 + 0x20 + lVar14) = uVar28;
            *(undefined4 *)(lVar15 + 0x24 + lVar14) = 0;
            *(int *)(lVar19 + 0x74) = *(int *)(lVar19 + 0x74) + 1;
            lVar15 = *(longlong *)(lVar19 + 0x50);
            iVar29 = *(int *)(lVar15 + 8);
            plVar20 = (longlong *)(longlong)iVar29;
            *(int *)(lVar15 + 8) = iVar29 + 1;
            auVar34 = ZEXT816(0);
            if (*(int *)(lVar15 + 0xc) == iVar29) {
              FUN_146964c32(lVar15,iVar29);
              auVar45 = ZEXT416((uint)local_270);
              puVar24 = local_258;
              uVar25 = local_248;
              fVar47 = local_264;
              fVar40 = local_268;
              fVar46 = local_26c;
              iVar9 = local_25c;
            }
            fVar58 = local_220;
            fVar31 = local_1f8 + fVar31;
            auVar42._4_12_ = local_178._4_12_;
            auVar42._0_4_ = local_178._0_4_ + local_21c * local_1e8 + fVar46 + fVar60;
            auVar59 = blendps(auVar42,auVar34,0xe);
            auVar59 = roundps(auVar59,auVar59,1);
            auVar63._0_4_ = fVar61 + local_1ec * local_21c + auVar45._0_4_ + fVar60;
            auVar63._4_12_ = auVar66._4_12_;
            auVar64 = blendps(auVar63,auVar34,0xe);
            auVar45 = roundps(auVar45,auVar64,1);
            lVar15 = **(longlong **)(lVar19 + 0x50);
            lVar14 = (longlong)plVar20 * 0x2c;
            *(float *)(lVar15 + lVar14) = fVar44;
            *(float *)(lVar15 + 4 + lVar14) = fVar31;
            *(float *)(lVar15 + 8 + lVar14) = local_234;
            *(float *)(lVar15 + 0xc + lVar14) = local_220;
            *(undefined8 *)(lVar15 + 0x10 + lVar14) = 0x3f80000000000000;
            *(int *)(lVar15 + 0x18 + lVar14) = auVar59._0_4_;
            *(int *)(lVar15 + 0x1c + lVar14) = auVar45._0_4_;
            *(undefined4 *)(lVar15 + 0x20 + lVar14) = uVar28;
            *(undefined4 *)(lVar15 + 0x24 + lVar14) = 0;
            *(int *)(lVar19 + 0x74) = *(int *)(lVar19 + 0x74) + 1;
            auVar48._0_4_ = fVar53 + local_21c * local_1e8 + fVar46 + fVar60;
            auVar48._4_12_ = auVar67._4_12_;
            auVar45 = blendps(auVar48,auVar34,0xe);
            unaff_XMM14 = roundps(auVar64,auVar45,1);
            auVar67._0_4_ = fVar65 + local_1ec * local_21c + local_270 + fVar60;
            unaff_XMM15 = blendps(auVar67,auVar34,0xe);
            auVar34 = roundps(auVar45,unaff_XMM15,1);
            fVar61 = auVar34._0_4_;
            lVar15 = *(longlong *)(lVar19 + 0x50);
            iVar29 = *(int *)(lVar15 + 8);
            *(int *)(lVar15 + 8) = iVar29 + 1;
            auVar50 = ZEXT416((uint)local_24c);
            if (*(int *)(lVar15 + 0xc) == iVar29) {
              plVar20 = (longlong *)(ulonglong)uVar26;
              FUN_146964c32(lVar15,iVar29);
              auVar43._0_12_ = ZEXT812(0x3f000000);
              auVar43._12_4_ = 0;
              puVar24 = local_258;
              uVar25 = local_248;
              fVar47 = local_264;
              fVar40 = local_268;
              fVar46 = local_26c;
              iVar9 = local_25c;
            }
          }
          else {
            fVar47 = local_21c * *(float *)(local_1c8 + 0xe) + 0.0;
            fVar31 = (local_21c - fVar31) * *(float *)(local_1c8 + 0xe) + 0.0;
            unaff_XMM15._0_4_ = fVar65 + fVar47;
            unaff_XMM15._4_12_ = auVar66._4_12_;
            _local_218 = ZEXT416((uint)(fVar47 + fVar53));
            auVar59._0_4_ = fVar65 + fVar31;
            auVar59._4_12_ = auVar66._4_12_;
            fVar65 = unaff_XMM15._0_4_;
            auVar34 = ZEXT416((uint)(fVar31 + fVar53));
LAB_140c75684:
            lVar15 = *(longlong *)(lVar19 + 0x50);
            iVar9 = *(int *)(lVar15 + 8);
            *(int *)(lVar15 + 8) = iVar9 + 1;
            if (*(int *)(lVar15 + 0xc) == iVar9) {
              FUN_146964c32(lVar15,iVar9);
            }
            fVar31 = local_1ec * fVar49;
            fVar49 = fVar49 * local_1e8;
            lVar15 = **(longlong **)(lVar19 + 0x50);
            lVar14 = (longlong)iVar9 * 0x2c;
            *(float *)(lVar15 + lVar14) = local_24c;
            *(float *)(lVar15 + 4 + lVar14) = local_22c;
            *(float *)(lVar15 + 8 + lVar14) = local_234;
            *(float *)(lVar15 + 0xc + lVar14) = fVar54;
            *(undefined8 *)(lVar15 + 0x10 + lVar14) = 0;
            *(float *)(lVar15 + 0x18 + lVar14) = fVar65 * local_264 + fVar49 + local_26c;
            *(float *)(lVar15 + 0x1c + lVar14) = fVar65 * local_268 + fVar31 + local_270;
            *(undefined4 *)(lVar15 + 0x20 + lVar14) = local_238;
            *(undefined4 *)(lVar15 + 0x24 + lVar14) = 0;
            *(int *)(lVar19 + 0x74) = *(int *)(lVar19 + 0x74) + 1;
            lVar15 = *(longlong *)(lVar19 + 0x50);
            iVar9 = *(int *)(lVar15 + 8);
            *(int *)(lVar15 + 8) = iVar9 + 1;
            if (*(int *)(lVar15 + 0xc) == iVar9) {
              FUN_146964c32(lVar15,iVar9);
            }
            fVar40 = unaff_XMM14._0_4_ + local_24c;
            fVar47 = local_218._0_4_;
            lVar15 = **(longlong **)(lVar19 + 0x50);
            lVar14 = (longlong)iVar9 * 0x2c;
            local_218._0_4_ = fVar40;
            *(float *)(lVar15 + lVar14) = fVar40;
            *(float *)(lVar15 + 4 + lVar14) = local_22c;
            *(float *)(lVar15 + 8 + lVar14) = local_23c;
            *(float *)(lVar15 + 0xc + lVar14) = fVar54;
            *(undefined8 *)(lVar15 + 0x10 + lVar14) = 0x3f800000;
            *(float *)(lVar15 + 0x18 + lVar14) = fVar47 * local_264 + fVar49 + local_26c;
            *(float *)(lVar15 + 0x1c + lVar14) = fVar47 * local_268 + fVar31 + local_270;
            *(undefined4 *)(lVar15 + 0x20 + lVar14) = local_238;
            *(undefined4 *)(lVar15 + 0x24 + lVar14) = 0;
            *(int *)(lVar19 + 0x74) = *(int *)(lVar19 + 0x74) + 1;
            lVar15 = *(longlong *)(lVar19 + 0x50);
            iVar9 = *(int *)(lVar15 + 8);
            plVar20 = (longlong *)(longlong)iVar9;
            *(int *)(lVar15 + 8) = iVar9 + 1;
            if (*(int *)(lVar15 + 0xc) == iVar9) {
              FUN_146964c32(lVar15,iVar9);
            }
            fVar31 = local_1f8 + local_22c;
            lVar15 = **(longlong **)(lVar19 + 0x50);
            lVar14 = (longlong)plVar20 * 0x2c;
            *(float *)(lVar15 + lVar14) = local_24c;
            *(float *)(lVar15 + 4 + lVar14) = fVar31;
            *(float *)(lVar15 + 8 + lVar14) = local_234;
            *(float *)(lVar15 + 0xc + lVar14) = local_220;
            *(undefined8 *)(lVar15 + 0x10 + lVar14) = 0x3f80000000000000;
            *(float *)(lVar15 + 0x18 + lVar14) =
                 auVar59._0_4_ * local_264 + fVar60 * local_1e8 + local_26c;
            *(float *)(lVar15 + 0x1c + lVar14) =
                 auVar59._0_4_ * local_268 + local_1ec * fVar60 + local_270;
            *(undefined4 *)(lVar15 + 0x20 + lVar14) = local_238;
            *(undefined4 *)(lVar15 + 0x24 + lVar14) = 0;
            *(int *)(lVar19 + 0x74) = *(int *)(lVar19 + 0x74) + 1;
            fVar61 = auVar34._0_4_ * local_268 + local_1ec * fVar60 + local_270;
            unaff_XMM14._0_4_ = auVar34._0_4_ * local_264 + fVar60 * local_1e8 + local_26c;
            unaff_XMM14._4_12_ = auVar34._4_12_;
            lVar15 = *(longlong *)(lVar19 + 0x50);
            iVar29 = *(int *)(lVar15 + 8);
            *(int *)(lVar15 + 8) = iVar29 + 1;
            if (*(int *)(lVar15 + 0xc) == iVar29) {
              FUN_146964c32(lVar15,iVar29);
            }
            auVar50._4_4_ = 0;
            auVar50._0_4_ = fVar58;
            auVar50._8_4_ = uVar51;
            auVar50._12_4_ = uVar52;
            auVar43._0_12_ = ZEXT812(0x3f000000);
            auVar43._12_4_ = 0;
            puVar24 = local_258;
            uVar25 = local_248;
            fVar47 = local_264;
            fVar40 = local_268;
            fVar46 = local_26c;
            fVar58 = local_220;
            iVar9 = local_25c;
            uVar28 = local_238;
          }
          auVar34 = ZEXT416((uint)local_1f4);
          unaff_XMM8_Dd = 0;
          unaff_XMM8_Dc = 0;
          lVar15 = **(longlong **)(lVar19 + 0x50);
          lVar14 = (longlong)iVar29 * 0x2c;
          *(undefined4 *)(lVar15 + lVar14) = local_218._0_4_;
          *(float *)(lVar15 + 4 + lVar14) = fVar31;
          *(float *)(lVar15 + 8 + lVar14) = local_23c;
          *(float *)(lVar15 + 0xc + lVar14) = fVar58;
          *(undefined1 **)(lVar15 + 0x10 + lVar14) = &DAT_3f8000003f800000;
          *(int *)(lVar15 + 0x18 + lVar14) = unaff_XMM14._0_4_;
          *(float *)(lVar15 + 0x1c + lVar14) = fVar61;
          *(undefined4 *)(lVar15 + 0x20 + lVar14) = uVar28;
          *(undefined4 *)(lVar15 + 0x24 + lVar14) = 0;
          *(int *)(lVar19 + 0x74) = *(int *)(lVar19 + 0x74) + 1;
          fVar58 = auVar50._0_4_;
          uVar51 = auVar50._8_4_;
          uVar52 = auVar50._12_4_;
          if ((int)uVar25 < 0x1400) {
            iVar29 = 6;
          }
          else {
            local_218._0_4_ = uVar26;
            plVar20 = *(longlong **)(lVar19 + 0x58);
            iVar9 = (int)plVar20[1];
            *(uint *)(plVar20 + 1) = iVar9 + 1U;
            if (*(uint *)((longlong)plVar20 + 0xc) < iVar9 + 1U) {
              FUN_1447808da(plVar20,iVar9);
            }
            *(int *)(*plVar20 + (longlong)iVar9 * 4) = (int)local_1e0;
            *(int *)(lVar19 + 0x78) = *(int *)(lVar19 + 0x78) + 1;
            plVar20 = *(longlong **)(lVar19 + 0x58);
            iVar9 = (int)plVar20[1];
            *(uint *)(plVar20 + 1) = iVar9 + 1U;
            if (*(uint *)((longlong)plVar20 + 0xc) < iVar9 + 1U) {
              FUN_1447808da(plVar20,iVar9);
            }
            iVar29 = (int)local_1e0 + 1;
            *(int *)(*plVar20 + (longlong)iVar9 * 4) = iVar29;
            *(int *)(lVar19 + 0x78) = *(int *)(lVar19 + 0x78) + 1;
            plVar20 = *(longlong **)(lVar19 + 0x58);
            iVar9 = (int)plVar20[1];
            *(uint *)(plVar20 + 1) = iVar9 + 1U;
            if (*(uint *)((longlong)plVar20 + 0xc) < iVar9 + 1U) {
              FUN_1447808da(plVar20,iVar9);
            }
            local_24c = (float)((int)local_1e0 + 2);
            *(float *)(*plVar20 + (longlong)iVar9 * 4) = local_24c;
            *(int *)(lVar19 + 0x78) = *(int *)(lVar19 + 0x78) + 1;
            plVar20 = *(longlong **)(lVar19 + 0x58);
            iVar9 = (int)plVar20[1];
            *(uint *)(plVar20 + 1) = iVar9 + 1U;
            if (*(uint *)((longlong)plVar20 + 0xc) < iVar9 + 1U) {
              FUN_1447808da(plVar20,iVar9);
            }
            *(int *)(*plVar20 + (longlong)iVar9 * 4) = iVar29;
            *(int *)(lVar19 + 0x78) = *(int *)(lVar19 + 0x78) + 1;
            plVar20 = *(longlong **)(lVar19 + 0x58);
            iVar9 = (int)plVar20[1];
            *(uint *)(plVar20 + 1) = iVar9 + 1U;
            if (*(uint *)((longlong)plVar20 + 0xc) < iVar9 + 1U) {
              FUN_1447808da(plVar20,iVar9);
            }
            *(int *)(*plVar20 + (longlong)iVar9 * 4) = (int)local_1e0 + 3;
            *(int *)(lVar19 + 0x78) = *(int *)(lVar19 + 0x78) + 1;
            plVar20 = *(longlong **)(lVar19 + 0x58);
            iVar9 = (int)plVar20[1];
            *(uint *)(plVar20 + 1) = iVar9 + 1U;
            if (*(uint *)((longlong)plVar20 + 0xc) < iVar9 + 1U) {
              FUN_1447808da(plVar20,iVar9);
            }
            *(float *)(*plVar20 + (longlong)iVar9 * 4) = local_24c;
            iVar29 = 1;
            auVar43._0_12_ = ZEXT812(0x3f000000);
            auVar43._12_4_ = 0;
            puVar24 = local_258;
            uVar25 = local_248;
            fVar47 = local_264;
            fVar40 = local_268;
            fVar46 = local_26c;
            iVar9 = local_25c;
            uVar28 = local_238;
            uVar26 = local_218._0_4_;
          }
          auVar45 = ZEXT416((uint)local_270);
          *(int *)(lVar19 + 0x78) = *(int *)(lVar19 + 0x78) + iVar29;
          fVar31 = 0.0;
LAB_140c74d61:
          if (local_25d != '\x03') {
            fVar60 = (float)(int)(short)plVar27[3];
            goto LAB_140c74d79;
          }
          if (bVar17 != 0) {
LAB_140c75c21:
            auVar34._0_4_ = auVar34._0_4_ + (float)*(int *)(local_258[1] + 0x40);
          }
LAB_140c75c37:
          iVar9 = 0;
          if ((local_25c < iVar22 & bVar18) == 0) {
            iVar9 = (int)(short)plVar27[3];
          }
          auVar34._0_4_ = auVar34._0_4_ + (float)iVar9;
          auVar45 = ZEXT416((uint)local_270);
          auVar43._0_12_ = ZEXT812(0x3f000000);
          auVar43._12_4_ = 0;
          puVar24 = local_258;
          uVar25 = local_248;
          fVar47 = local_264;
          fVar40 = local_268;
          fVar46 = local_26c;
          iVar9 = local_25c;
          uVar28 = local_238;
        }
        unaff_XMM8_Db = 0;
        fVar58 = fVar58 + (float)(int)*(short *)((longlong)plVar27 + 0x1a);
      }
    }
    iVar22 = iVar22 + 1;
    if ((int)uVar25 <= iVar22) goto LAB_140c75511;
    goto LAB_140c745e3;
  }
  bVar18 = 0;
  uVar26 = 0;
LAB_140c7553a:
  fVar47 = local_1fc;
  if ((*(byte *)((longlong)puVar24 + 0x5e) & 2) == 0) goto LAB_140c75549;
  local_228 = auVar34._0_4_ - fVar31;
LAB_140c7609b:
  puVar21 = puVar24;
  puVar23 = &local_158;
  for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
    *puVar23 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar23 = puVar23 + 1;
  }
  local_158 = (longlong *)puVar24[1];
  local_150 = (longlong *)0x0;
  local_fa = local_fa & 0xfc;
  local_fc = 0;
  local_118 = local_228;
  local_114 = fVar58;
  FUN_140c74332(local_1a0);
LAB_140c75564:
  if ((local_f0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar26;
LAB_140c75511:
  bVar18 = (byte)local_1a8;
  fVar47 = local_1fc;
  bVar17 = local_22e;
  if ((local_1a8 & 1) == 0) goto LAB_140c7553a;
LAB_140c75549:
  if (local_25d == '\x03') {
    bVar18 = bVar17;
  }
  fVar58 = fVar47;
  if ((bVar18 & 1) == 0) goto LAB_140c75564;
  goto LAB_140c7609b;
}



// FUNCTION 140c764e2 FUN_140c764e2 body=39 status=ok
// SIG undefined FUN_140c764e2(void)

void FUN_140c764e2(longlong param_1,int param_2)

{
  param_2 = param_2 + *(int *)(*(longlong *)(param_1 + 0x50) + 8);
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(*(longlong *)(param_1 + 0x50) + 0xc)) {
    return;
  }
  FUN_14578aec0();
  return;
}



// FUNCTION 140c7650a FUN_140c7650a body=238 status=ok
// SIG undefined FUN_140c7650a(void)

longlong FUN_140c7650a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                      longlong *param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                      undefined2 param_9,longlong param_10)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar3 = FUN_14023c64a(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          *(undefined1 *)(param_10 + 0x44));
  }
  else {
    lVar3 = FUN_1469544de(*(longlong *)(param_1 + 0x10),param_3,param_4,param_5,param_6,param_7,
                          param_8,param_9,*(undefined1 *)(param_10 + 0x44));
  }
  lVar4 = *(longlong *)(param_10 + 0x30);
  if (lVar4 == 0) {
    iVar1 = *(int *)(param_10 + 0x38);
    if (((longlong)iVar1 < 0) || ((int)(*(longlong **)(param_1 + 0x18))[1] <= iVar1)) {
      lVar4 = 0;
    }
    else {
      lVar4 = (longlong)iVar1 * 0x40 + **(longlong **)(param_1 + 0x18);
    }
  }
  *(longlong *)(lVar3 + 0x38) = lVar4;
  if (param_5 != (longlong *)0x0) {
    bVar2 = (**(code **)(*param_5 + 0x20))(param_5);
    *(byte *)(lVar3 + 0x8f) = bVar2;
    *(byte *)(param_1 + 0x33) = *(byte *)(param_1 + 0x33) | bVar2;
  }
  return lVar3;
}



// FUNCTION 140c765f8 FUN_140c765f8 body=6915 status=ok
// SIG undefined FUN_140c765f8(void)

undefined8 * FUN_140c765f8(longlong param_1,undefined8 *param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  ulonglong *puVar9;
  longlong lVar10;
  double dVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  short *psVar19;
  longlong lVar20;
  byte bVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  int *piVar28;
  longlong lVar29;
  ulonglong uVar30;
  int iVar31;
  size_t _Size;
  char cVar32;
  longlong lVar33;
  longlong *plVar34;
  uint uVar35;
  ulonglong uVar36;
  uint uVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  uint *puVar41;
  longlong *plVar42;
  int iVar43;
  longlong lVar44;
  longlong *plVar45;
  bool bVar46;
  float fVar47;
  double dVar48;
  undefined1 auVar49 [16];
  float fVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 unaff_XMM9 [16];
  undefined4 uVar57;
  undefined4 uVar58;
  undefined1 auStack_1f8 [32];
  uint local_1d8;
  int **local_1d0;
  longlong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  int local_19c;
  longlong *local_198;
  longlong *local_190;
  undefined8 *local_188;
  ulonglong local_180;
  longlong *local_178;
  uint local_170;
  uint uStack_16c;
  byte bStack_168;
  byte bStack_167;
  undefined2 uStack_166;
  uint uStack_164;
  uint local_160;
  uint uStack_15c;
  int *local_158;
  uint uStack_150;
  int iStack_14c;
  short sStack_148;
  short sStack_146;
  undefined1 uStack_144;
  undefined1 uStack_143;
  short sStack_142;
  uint uStack_140;
  byte bStack_13c;
  longlong local_130;
  int *local_128;
  longlong *plStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  byte local_f8;
  undefined8 local_e8;
  ulonglong uStack_e0;
  short local_d8;
  short sStack_d6;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  double dStack_c0;
  byte local_b8;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  iVar15 = *param_4;
  iVar43 = *(int *)(param_1 + 600);
  plVar34 = (longlong *)param_3[(ulonglong)(0 < iVar15) * 4 + (longlong)iVar43 * 2 + 6];
  if (plVar34 != (longlong *)0x0) {
    iVar17 = (int)plVar34[1];
    do {
      if (iVar17 == 0) goto LAB_140c766f8;
      LOCK();
      iVar23 = (int)plVar34[1];
      bVar46 = iVar17 == iVar23;
      if (bVar46) {
        *(int *)(plVar34 + 1) = iVar17 + 1;
        iVar23 = iVar17;
      }
      iVar17 = iVar23;
      UNLOCK();
    } while (!bVar46);
    puVar27 = (undefined8 *)param_3[(ulonglong)(0 < iVar15) * 4 + (longlong)iVar43 * 2 + 5];
    if (puVar27 != (undefined8 *)0x0) {
      uVar13 = puVar27[1];
      *param_2 = *puVar27;
      param_2[1] = uVar13;
      LOCK();
      plVar45 = plVar34 + 1;
      *(int *)plVar45 = (int)*plVar45 + -1;
      UNLOCK();
      if ((int)*plVar45 == 0) {
        (**(code **)*plVar34)(plVar34);
        LOCK();
        piVar28 = (int *)((longlong)plVar34 + 0xc);
        *piVar28 = *piVar28 + -1;
        UNLOCK();
        if (*piVar28 == 0) {
          (**(code **)(*plVar34 + 0x10))(plVar34);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_1f8);
        }
      }
      goto LAB_140c77c2c;
    }
    LOCK();
    plVar45 = plVar34 + 1;
    *(int *)plVar45 = (int)*plVar45 + -1;
    UNLOCK();
    if ((int)*plVar45 == 0) {
      (**(code **)*plVar34)(plVar34);
      LOCK();
      piVar28 = (int *)((longlong)plVar34 + 0xc);
      *piVar28 = *piVar28 + -1;
      UNLOCK();
      if (*piVar28 == 0) {
        (**(code **)(*plVar34 + 0x10))(plVar34);
      }
    }
  }
LAB_140c766f8:
  uVar16 = *(uint *)(param_3 + 2);
  puVar9 = (ulonglong *)*param_3;
  uVar24 = *puVar9;
  local_178 = (longlong *)puVar9[1];
  if (local_178 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_178 + 0xcU) = *(int *)((longlong)local_178 + 0xcU) + 1;
    UNLOCK();
  }
  bVar21 = *(byte *)(param_4 + 1);
  bVar4 = *(byte *)((longlong)param_4 + 5);
  uStack_15c = (uint)puVar9[4];
  fVar50 = 0.0;
  if (0.0 <= *(float *)((longlong)puVar9 + 0x14)) {
    fVar50 = *(float *)((longlong)puVar9 + 0x14);
  }
  fVar47 = 0.0;
  if (0.0 <= *(float *)(puVar9 + 3)) {
    fVar47 = *(float *)(puVar9 + 3);
  }
  local_1c0 = param_1;
  local_1b8 = param_3 + (ulonglong)(0 < iVar15) * 4 + (longlong)iVar43 * 2 + 5;
  local_188 = param_2;
  local_180 = uVar24;
  bStack_168 = bVar21;
  bStack_167 = bVar4;
  uStack_164 = uVar16;
  iVar15 = FUN_144b42fe0(((int)(fVar50 * 64.0) * 0x60 + 0x24) / 0x48,(int)(fVar47 * 65536.0));
  lVar29 = local_1c0;
  local_170 = iVar15 + 0x20 >> 6;
  auVar49 = blendps(ZEXT416((uint)((float)*param_4 * *(float *)(puVar9 + 3) + 0.5)),ZEXT816(0),0xe);
  auVar49 = roundps(auVar49,auVar49,1);
  uStack_16c = (uint)auVar49._0_4_;
  uVar22 = ((uint)(uVar24 >> 0x14) & 0xffff ^ (uint)(uVar24 >> 4)) * -0x7a143595;
  uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
  uVar22 = uVar22 >> 0x10 ^ uVar22;
  uVar35 = uVar22 >> 0xd ^ -uVar22;
  uVar37 = uVar35 << 8 ^ (-0x61c88647 - uVar22) - uVar35;
  uVar40 = uVar37 >> 0xd ^ (uVar22 - uVar35) - uVar37;
  uVar35 = uVar40 >> 0xc ^ (uVar35 - uVar37) - uVar40;
  uVar22 = uVar35 << 0x10 ^ (uVar37 - uVar40) - uVar35;
  uVar37 = uVar22 >> 5 ^ (uVar40 - uVar35) - uVar22;
  uVar35 = uVar37 >> 3 ^ (uVar35 - uVar22) - uVar37;
  uVar22 = uVar35 << 10 ^ (uVar22 - uVar37) - uVar35;
  uVar22 = local_170 >> 0xd ^ (uVar22 >> 0xf ^ uVar37 - (uVar35 + uVar22)) - local_170;
  uVar35 = uVar22 << 8 ^ (-0x61c88647 - local_170) - uVar22;
  uVar37 = uVar35 >> 0xd ^ (local_170 - uVar22) - uVar35;
  uVar22 = uVar37 >> 0xc ^ (uVar22 - uVar35) - uVar37;
  uVar35 = uVar22 << 0x10 ^ (uVar35 - uVar37) - uVar22;
  uVar37 = uVar35 >> 5 ^ (uVar37 - uVar22) - uVar35;
  uVar40 = uVar37 >> 3 ^ (uVar22 - uVar35) - uVar37;
  uVar22 = uVar40 << 10 ^ (uVar35 - uVar37) - uVar40;
  uVar35 = uStack_16c >> 0xd ^ (uVar22 >> 0xf ^ uVar37 - (uVar40 + uVar22)) - uStack_16c;
  uVar22 = uVar35 << 8 ^ (-0x61c88647 - uStack_16c) - uVar35;
  uVar37 = uVar22 >> 0xd ^ (uStack_16c - uVar35) - uVar22;
  uVar35 = uVar37 >> 0xc ^ (uVar35 - uVar22) - uVar37;
  uVar22 = uVar35 << 0x10 ^ (uVar22 - uVar37) - uVar35;
  uVar37 = uVar22 >> 5 ^ (uVar37 - uVar35) - uVar22;
  uVar35 = uVar37 >> 3 ^ (uVar35 - uVar22) - uVar37;
  uVar22 = uVar35 << 10 ^ (uVar22 - uVar37) - uVar35;
  uVar22 = uVar22 >> 0xf ^ uVar37 - (uVar35 + uVar22);
  iVar15 = uVar22 - bVar21;
  uVar35 = iVar15 * 0x100 ^ 0x9e3779b9 - uVar22;
  uVar22 = uVar35 >> 0xd ^ ((uint)bVar21 - iVar15) - uVar35;
  uVar40 = uVar22 >> 0xc ^ (iVar15 - uVar35) - uVar22;
  uVar38 = uVar40 << 0x10 ^ (uVar35 - uVar22) - uVar40;
  uVar37 = uVar38 >> 5 ^ (uVar22 - uVar40) - uVar38;
  uVar35 = uVar37 >> 3 ^ (uVar40 - uVar38) - uVar37;
  uVar22 = uVar35 << 10 ^ (uVar38 - uVar37) - uVar35;
  uVar22 = uVar22 >> 0xf ^ uVar37 - (uVar35 + uVar22);
  iVar15 = uVar22 - bVar4;
  uVar22 = iVar15 * 0x100 ^ 0x9e3779b9 - uVar22;
  uVar35 = uVar22 >> 0xd ^ ((uint)bVar4 - iVar15) - uVar22;
  uVar40 = uVar35 >> 0xc ^ (iVar15 - uVar22) - uVar35;
  uVar22 = uVar40 << 0x10 ^ (uVar22 - uVar35) - uVar40;
  uVar37 = uVar22 >> 5 ^ (uVar35 - uVar40) - uVar22;
  uVar35 = uVar37 >> 3 ^ (uVar40 - uVar22) - uVar37;
  uVar22 = uVar35 << 10 ^ (uVar22 - uVar37) - uVar35;
  uVar22 = uVar16 >> 0xd ^ (uVar22 >> 0xf ^ uVar37 - (uVar35 + uVar22)) - uVar16;
  uVar35 = uVar22 << 8 ^ (-0x61c88647 - uVar16) - uVar22;
  uVar37 = uVar35 >> 0xd ^ (uVar16 - uVar22) - uVar35;
  uVar40 = uVar37 >> 0xc ^ (uVar22 - uVar35) - uVar37;
  uVar16 = uVar40 << 0x10 ^ (uVar35 - uVar37) - uVar40;
  uVar22 = uVar16 >> 5 ^ (uVar37 - uVar40) - uVar16;
  uVar35 = uVar22 >> 3 ^ (uVar40 - uVar16) - uVar22;
  uVar16 = uVar35 << 10 ^ (uVar16 - uVar22) - uVar35;
  uVar16 = uStack_15c >> 0xd ^ (uVar16 >> 0xf ^ uVar22 - (uVar35 + uVar16)) - uStack_15c;
  uVar35 = uVar16 << 8 ^ (-0x61c88647 - uStack_15c) - uVar16;
  uVar22 = uVar35 >> 0xd ^ (uStack_15c - uVar16) - uVar35;
  uVar16 = uVar22 >> 0xc ^ (uVar16 - uVar35) - uVar22;
  uVar37 = uVar16 << 0x10 ^ (uVar35 - uVar22) - uVar16;
  uVar35 = uVar37 >> 5 ^ (uVar22 - uVar16) - uVar37;
  uVar16 = uVar35 >> 3 ^ (uVar16 - uVar37) - uVar35;
  uVar22 = uVar16 << 10 ^ (uVar37 - uVar35) - uVar16;
  local_160 = uVar22 >> 0xf ^ uVar35 - (uVar16 + uVar22);
  plVar34 = (longlong *)(local_1c0 + 0xb0);
  iVar15 = FUN_142867452(plVar34,local_160,&local_180);
  param_2 = local_188;
  plVar45 = local_1b8;
  if (iVar15 == -1) {
LAB_140c76be3:
    local_1b0 = plVar34;
    psVar19 = (short *)FUN_14001cc68(0x10,0x10);
    psVar19[0] = 0;
    psVar19[1] = 0;
    psVar19[2] = 0;
    psVar19[3] = 0;
    psVar19[4] = 0;
    psVar19[5] = 0;
    psVar19[6] = 0;
    psVar19[7] = 0;
    local_190 = (longlong *)FUN_14001cc68(0x18,0x10);
    local_190[1] = (longlong)&DAT_100000001;
    *local_190 = (longlong)&PTR_FUN_149eda220;
    local_190[2] = (longlong)psVar19;
    sStack_148 = 0;
    sStack_146 = 0;
    uStack_144 = 0;
    uStack_143 = 0;
    sStack_142 = 0;
    uStack_140 = 0;
    bStack_13c = 0;
    local_158 = (int *)0x0;
    uStack_150 = 0;
    iStack_14c = 0;
    plVar45 = (longlong *)*param_3;
    plVar34 = (longlong *)plVar45[1];
    if (plVar34 == (longlong *)0x0) {
LAB_140c77f91:
      *(undefined1 *)(psVar19 + 7) = 0;
      bVar21 = 0;
      plVar34 = local_1b8;
    }
    else {
      puVar27 = *(undefined8 **)(lVar29 + 0x48);
      iVar15 = (int)plVar34[1];
      do {
        if (iVar15 == 0) goto LAB_140c77f91;
        LOCK();
        iVar43 = (int)plVar34[1];
        bVar46 = iVar15 == iVar43;
        if (bVar46) {
          *(int *)(plVar34 + 1) = iVar15 + 1;
          iVar43 = iVar15;
        }
        iVar15 = iVar43;
        UNLOCK();
      } while (!bVar46);
      plVar45 = (longlong *)*plVar45;
      if ((plVar45 == (longlong *)0x0) || (*plVar45 == 0)) {
        bVar46 = false;
        lVar29 = local_1c0;
      }
      else {
        lVar29 = param_3[2];
        uVar51 = *(undefined4 *)(*param_3 + 0x10);
        fVar50 = *(float *)(*param_3 + 0x20);
        if (1e-08 < ABS(fVar50)) {
          puVar26 = &local_e8;
          local_e8 = (int *)CONCAT44((int)(fVar50 * 65536.0),0x10000);
          uStack_e0 = 0x1000000000000;
        }
        else {
          puVar26 = (undefined8 *)0x0;
        }
        local_198 = plVar34;
        FUN_144b45cb0(*plVar45,puVar26,0);
        fVar50 = *(float *)(*param_3 + 0x14);
        fVar47 = 0.0;
        if (0.0 <= fVar50) {
          fVar47 = fVar50;
        }
        fVar50 = *(float *)(*param_3 + 0x18);
        fVar12 = 0.0;
        if (0.0 <= fVar50) {
          fVar12 = fVar50;
        }
        lVar18 = *plVar45;
        iVar15 = FUN_144b42fe0(((int)(fVar47 * 64.0) * 0x60 + 0x24) / 0x48,(int)(fVar12 * 65536.0));
        FUN_14011ecb7(lVar18,iVar15 + 0x20 >> 6);
        iVar15 = FUN_144b54d40(lVar18,(int)lVar29,uVar51);
        lVar29 = local_1c0;
        if (iVar15 == 0) {
          lVar18 = *plVar45;
          fVar50 = 1.0;
          if (((*(uint *)(lVar18 + 8) & 3) == 2) &&
             (iVar15 = *(int *)(*(longlong *)(lVar18 + 0x80) + 0x1c), iVar15 < 0x10000)) {
            fVar50 = (float)iVar15 * 1.5258789e-05;
          }
          lVar33 = *(longlong *)(lVar18 + 0x78);
          auVar49 = roundps(unaff_XMM9,
                            ZEXT416((uint)(*(float *)(*param_3 + 0x18) * (float)*param_4 + 0.5)),1);
          uStack_140 = 0;
          bStack_13c = *(byte *)(lVar18 + 8) & 1;
          fVar47 = auVar49._0_4_;
          if (((fVar47 <= 0.0) && (DAT_14c968510 != 1)) || (*(int *)(lVar33 + 0x60) != 0x6f75746c))
          {
            FUN_144b551c0(lVar33);
            puVar3 = (uint *)(lVar33 + 0x68);
            puVar41 = puVar3;
            if (*(char *)(lVar33 + 0x82) == '\x02') {
LAB_140c7702a:
              iVar15 = 1;
              if (uStack_140 != 0) {
                lVar29 = local_1c0;
                if (uStack_140 - 1 < 2) {
                  iVar15 = 4;
                }
                else {
                  iVar15 = 0;
                }
              }
            }
            else {
              if (*(char *)(lVar33 + 0x82) != '\a') {
                puVar41 = (uint *)&local_e8;
                FUN_144b53f70(puVar41);
                FUN_144b54160(*(undefined8 *)*puVar27,puVar3,puVar41,4);
                goto LAB_140c7702a;
              }
              uStack_140 = 1;
              iVar15 = 4;
            }
            uStack_150 = 0;
            uVar16 = 0;
            if (iStack_14c < 0) {
              FUN_144893a1c(&local_158,0);
              uVar16 = uStack_150;
            }
            uVar22 = *puVar41 * iVar15 * puVar41[1];
            uStack_150 = uVar22 + uVar16;
            if (iStack_14c - uVar16 < uVar22) {
              FUN_1447403be(&local_158);
            }
            if (uStack_150 != 0) {
              if (*puVar41 != 0) {
                uVar16 = 0;
                do {
                  memcpy((void *)((longlong)(int)(puVar41[1] * iVar15 * uVar16) +
                                 (longlong)local_158),
                         (void *)((ulonglong)(puVar41[2] * uVar16) + *(longlong *)(puVar41 + 4)),
                         (ulonglong)(puVar41[1] * iVar15));
                  uVar16 = uVar16 + 1;
                } while (uVar16 < *puVar41);
              }
              if (((uStack_140 == 0) && (uVar16 = puVar41[6], (ushort)uVar16 != 0x100)) &&
                 ((longlong)(int)uStack_150 != 0)) {
                lVar18 = 0;
                do {
                  *(char *)((longlong)local_158 + lVar18) =
                       *(char *)((longlong)local_158 + lVar18) *
                       (char)(0xff / (longlong)(int)((ushort)uVar16 - 1));
                  lVar18 = lVar18 + 1;
                } while ((int)uStack_150 != lVar18);
              }
            }
            sStack_148 = (short)puVar41[1];
            sStack_146 = (short)*puVar41;
            if (puVar41 == (uint *)&local_e8) {
              FUN_144b54640(*(undefined8 *)*puVar27,puVar41);
            }
            if (fVar50 < 1.0) {
              iVar15 = (int)sStack_148;
              iVar17 = (int)((float)iVar15 * fVar50);
              iVar43 = (int)sStack_146;
              uVar16 = (uint)((float)iVar43 * fVar50);
              local_1d0 = &local_128;
              local_128 = (int *)0x0;
              plStack_120 = (longlong *)0x0;
              local_1d8 = uVar16;
              if (uStack_140 == 0) {
                FUN_1469384e6(iVar15,iVar43,&local_158,iVar17);
              }
              else {
                FUN_1469386d8(iVar15,iVar43,&local_158,iVar17);
              }
              sStack_148 = (short)iVar17;
              sStack_146 = (short)uVar16;
              if (local_158 != (int *)0x0) {
                FUN_1400020a8();
              }
              local_158 = local_128;
              uStack_150 = (uint)plStack_120;
              iStack_14c = (int)((ulonglong)plStack_120 >> 0x20);
            }
            iVar15 = 0;
            iVar43 = 0;
          }
          else {
            local_19c = DAT_14c75ed40;
            local_e8 = (int *)0x0;
            uStack_e0 = 0;
            local_c8 = DAT_14c8463f0;
            dStack_c0 = DAT_14c8463f8;
            local_d8 = SUB82(DAT_14c8463f0,0);
            sStack_d6 = (short)((ulonglong)DAT_14c8463f0 >> 0x10);
            uStack_d4 = (undefined4)((ulonglong)DAT_14c8463f0 >> 0x20);
            uStack_d0 = SUB84(DAT_14c8463f8,0);
            uStack_cc = (undefined4)((ulonglong)DAT_14c8463f8 >> 0x20);
            local_b8 = 0;
            FUN_141238963(*(undefined8 *)*puVar27);
            local_128 = (int *)0x0;
            plStack_120 = (longlong *)0x0;
            local_108 = DAT_14c8463f0;
            dStack_100 = DAT_14c8463f8;
            local_118 = DAT_14c8463f0;
            dStack_110 = DAT_14c8463f8;
            local_f8 = 0;
            if (fVar47 <= 0.0) {
              uVar51 = CONCAT22(sStack_d6,local_d8);
              uVar53 = uStack_d4;
              uVar54 = SUB84(dStack_c0,0);
              uVar55 = (int)((ulonglong)dStack_c0 >> 0x20);
              uVar16 = uStack_d0;
              uVar58 = uStack_cc;
              dVar48 = local_c8;
            }
            else {
              bVar21 = *(byte *)(param_4 + 1);
              local_a8 = 0;
              FUN_144b5f040(*(undefined8 *)*puVar27,&local_a8);
              local_1d8 = (uint)bVar21 << 0x11;
              FUN_144b5f100(local_a8,(int)(fVar47 * 64.0),bVar21 + 1,(uint)bVar21 + (uint)bVar21);
              local_130 = 0;
              FUN_144b5edc0(lVar33,&local_130);
              FUN_144b60470(&local_130,local_a8,0,1);
              FUN_141238963(*(undefined8 *)*puVar27,local_130 + 0x20,&local_128);
              FUN_144b603a0(local_a8);
              FUN_144b5ef90(local_130);
              uVar51 = CONCAT22(sStack_d6,local_d8);
              uVar54 = SUB84(dStack_c0,0);
              uVar55 = (undefined4)((ulonglong)dStack_c0 >> 0x20);
              uVar52 = (undefined4)((ulonglong)local_118 >> 0x20);
              uVar57 = (undefined4)((ulonglong)dStack_110 >> 0x20);
              uVar56 = (undefined4)((ulonglong)dStack_100 >> 0x20);
              lVar29 = local_1c0;
              uVar53 = uStack_d4;
              uVar16 = uStack_d0;
              uVar58 = uStack_cc;
              dVar48 = local_c8;
              if ((local_b8 & 1) == 0) {
                if ((local_f8 & 1) != 0) {
                  uVar51 = SUB84(local_118,0);
                  uVar53 = uVar52;
                  uVar54 = SUB84(dStack_100,0);
                  uVar55 = uVar56;
                  uVar16 = SUB84(dStack_110,0);
                  uVar58 = uVar57;
                  dVar48 = local_108;
                }
              }
              else if ((local_f8 & 1) != 0) {
                if (local_118 <= (double)CONCAT44(uStack_d4,uVar51)) {
                  uVar51 = SUB84(local_118,0);
                  uVar53 = uVar52;
                }
                if (dStack_110 <= (double)CONCAT44(uStack_cc,uStack_d0)) {
                  uVar16 = SUB84(dStack_110,0);
                  uVar58 = uVar57;
                }
                if (local_c8 <= local_108) {
                  dVar48 = local_108;
                }
                if (dStack_c0 <= dStack_100) {
                  uVar54 = SUB84(dStack_100,0);
                  uVar55 = uVar56;
                }
              }
            }
            iVar43 = (int)(longlong)(dVar48 - (double)CONCAT44(uVar53,uVar51)) + 1;
            local_1a8 = (longlong)
                        ((double)CONCAT44(uVar55,uVar54) - (double)CONCAT44(uVar58,uVar16));
            iVar15 = (int)local_1a8 + 1;
            sStack_148 = (short)iVar43;
            sStack_146 = (short)iVar15;
            uVar22 = 0;
            if (iStack_14c < 0) {
              uStack_150 = 0;
              FUN_144893a1c(&local_158);
              uVar22 = uStack_150;
            }
            uVar35 = iVar15 * iVar43;
            uStack_150 = uVar22 + uVar35;
            if (iStack_14c - uVar22 < uVar35) {
              FUN_1447403be(&local_158);
            }
            memset((void *)((longlong)(int)uVar22 + (longlong)local_158),0,(longlong)(int)uVar35);
            dVar48 = (double)CONCAT44(uVar53,uVar51) -
                     (double)CONCAT44(uStack_d4,CONCAT22(sStack_d6,local_d8));
            dVar11 = (double)CONCAT44(uVar55,uVar54) - dStack_c0;
            iVar17 = (int)(longlong)(double)CONCAT44(uVar58,uVar16);
            iVar15 = (int)(longlong)(double)CONCAT44(uVar53,uVar51);
            iVar23 = (int)local_1a8;
            if ((longlong)(int)plStack_120 != 0) {
              piVar28 = local_128;
              do {
                if (0 < piVar28[2]) {
                  iVar39 = piVar28[3];
                  iVar31 = 0;
                  do {
                    *(char *)((longlong)local_158 +
                             (longlong)
                             (((((iVar23 + iVar17) - piVar28[1]) * iVar43 + *piVar28) - iVar15) +
                             iVar31)) = (char)iVar39;
                    iVar31 = iVar31 + 1;
                  } while (iVar31 < piVar28[2]);
                }
                piVar28 = piVar28 + 4;
              } while (piVar28 != local_128 + (longlong)(int)plStack_120 * 4);
            }
            if (fVar47 <= 0.0) {
              if ((int)uStack_e0 != 0) {
                piVar28 = local_e8;
                do {
                  if (0 < piVar28[2]) {
                    iVar39 = piVar28[3];
                    iVar31 = 0;
                    do {
                      *(char *)((longlong)local_158 +
                               (longlong)
                               (((((iVar17 + iVar23) - piVar28[1]) * iVar43 + *piVar28) - iVar15) +
                               iVar31)) = (char)iVar39;
                      iVar31 = iVar31 + 1;
                    } while (iVar31 < piVar28[2]);
                  }
                  piVar28 = piVar28 + 4;
                } while (piVar28 != local_e8 + (longlong)(int)uStack_e0 * 4);
              }
            }
            else if ((int)uStack_e0 != 0) {
              piVar28 = local_e8;
              do {
                if (0 < piVar28[2]) {
                  iVar39 = 0;
                  do {
                    lVar18 = (longlong)
                             (((((iVar17 + iVar23) - piVar28[1]) * iVar43 + *piVar28) - iVar15) +
                             iVar39);
                    cVar5 = (char)piVar28[3];
                    if (*(char *)((longlong)param_4 + 5) == '\x01') {
                      if (cVar5 == '\0') {
                        cVar32 = '\0';
                      }
                      else {
                        cVar32 = *(char *)((longlong)local_158 + lVar18) - cVar5;
                      }
                    }
                    else {
                      cVar32 = *(char *)((longlong)local_158 + lVar18);
                      if (cVar5 == -1) {
                        cVar32 = -1;
                      }
                    }
                    *(char *)((longlong)local_158 + lVar18) = cVar32;
                    iVar39 = iVar39 + 1;
                  } while (iVar39 < piVar28[2]);
                }
                piVar28 = piVar28 + 4;
              } while (piVar28 != local_e8 + (longlong)(int)uStack_e0 * 4);
            }
            FUN_144b551c0(lVar33,(local_19c == 0) * '\x02');
            if (local_128 != (int *)0x0) {
              FUN_1400020a8();
            }
            if (local_e8 != (int *)0x0) {
              FUN_1400020a8();
            }
            iVar43 = (int)ROUND(dVar48 + dVar48 + 0.5) >> 1;
            iVar15 = (int)ROUND(dVar11 + dVar11 + 0.5) >> 1;
          }
          fVar47 = (float)(iVar43 + *(int *)(lVar33 + 0x90)) * fVar50;
          iVar15 = (int)((float)(iVar15 + *(int *)(lVar33 + 0x94)) * fVar50);
          sStack_142 = (short)((uint)(int)ROUND(fVar47 + fVar47 + 0.5) >> 1);
          uStack_144 = (undefined1)iVar15;
          uStack_143 = (undefined1)((uint)iVar15 >> 8);
          bVar46 = true;
          plVar34 = local_198;
        }
        else {
          bVar46 = false;
          plVar34 = local_198;
        }
      }
      LOCK();
      plVar45 = plVar34 + 1;
      *(int *)plVar45 = (int)*plVar45 + -1;
      UNLOCK();
      if ((int)*plVar45 == 0) {
        (**(code **)*plVar34)(plVar34);
        LOCK();
        piVar28 = (int *)((longlong)plVar34 + 0xc);
        *piVar28 = *piVar28 + -1;
        UNLOCK();
        if (*piVar28 == 0) {
          (**(code **)(*plVar34 + 0x10))(plVar34);
        }
      }
      piVar28 = local_158;
      if (!bVar46) goto LAB_140c77f91;
      local_e8 = (int *)0x0;
      _Size = (size_t)(int)uStack_150;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uStack_150);
      if (_Size == 0) {
        uStack_e0 = (ulonglong)uStack_150;
      }
      else {
        FUN_1447a127e(&local_e8,uStack_150,0);
        memcpy(local_e8,piVar28,_Size);
      }
      uStack_d4 = CONCAT22(sStack_142,CONCAT11(uStack_143,uStack_144));
      uStack_d0 = uStack_140;
      uStack_cc = CONCAT31(uStack_cc._1_3_,bStack_13c);
      local_d8 = sStack_148;
      sStack_d6 = sStack_146;
      (**(code **)**(undefined8 **)(lVar29 + 0x1f0))
                (*(undefined8 **)(lVar29 + 0x1f0),&local_a8,uStack_140);
      if (((int)local_a8 < local_d8) || (local_a8._4_4_ < sStack_d6)) {
        local_1d0 = (int **)&local_e8;
        local_1d8 = uStack_d0;
        (**(code **)(**(longlong **)(lVar29 + 0x1f0) + 0x10))
                  (*(longlong **)(lVar29 + 0x1f0),&local_128);
        plVar34 = plStack_120;
        piVar28 = local_128;
        if ((local_128 == (int *)0x0) || (iVar15 = *(int *)(lVar29 + 0x1e8), 0xfe < iVar15)) {
          bVar46 = false;
          plVar34 = local_1b8;
        }
        else {
          if (plStack_120 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
            UNLOCK();
            iVar15 = *(int *)(lVar29 + 0x1e8);
          }
          *(uint *)(lVar29 + 0x1e8) = iVar15 + 1U;
          if (*(uint *)(lVar29 + 0x1ec) < iVar15 + 1U) {
            FUN_14627a3ee((longlong *)(lVar29 + 0x1e0),iVar15);
          }
          lVar18 = *(longlong *)(lVar29 + 0x1e0);
          *(int **)(lVar18 + (longlong)iVar15 * 0x10) = piVar28;
          *(longlong **)(lVar18 + 8 + (longlong)iVar15 * 0x10) = plVar34;
          if (plVar34 == (longlong *)0x0) {
            *(char *)(psVar19 + 6) = (char)iVar15;
          }
          else {
            LOCK();
            *(int *)(plVar34 + 1) = (int)plVar34[1] + 1;
            UNLOCK();
            *(char *)(psVar19 + 6) = (char)iVar15;
            LOCK();
            plVar45 = plVar34 + 1;
            *(int *)plVar45 = (int)*plVar45 + -1;
            UNLOCK();
            if ((int)*plVar45 == 0) {
              (**(code **)*plVar34)(plVar34);
              LOCK();
              piVar28 = (int *)((longlong)plVar34 + 0xc);
              *piVar28 = *piVar28 + -1;
              UNLOCK();
              if (*piVar28 == 0) {
                (**(code **)(*plVar34 + 0x10))(plVar34);
              }
            }
          }
          plVar34 = local_1b8;
          iVar15 = *(int *)(lVar29 + 0x1d8);
          *(uint *)(lVar29 + 0x1d8) = iVar15 + 1U;
          if (*(uint *)(lVar29 + 0x1dc) < iVar15 + 1U) {
            FUN_1447403be(lVar29 + 0x1d0,iVar15);
          }
          *(char *)(*(longlong *)(lVar29 + 0x1d0) + (longlong)iVar15) = (char)psVar19[6];
          psVar19[2] = 0;
          psVar19[3] = 0;
          psVar19[4] = local_d8;
          psVar19[5] = sStack_d6;
          bVar46 = true;
          if ((*(byte *)(lVar29 + 0x200) & 1) == 0) {
            local_1d8 = *(uint *)(lVar29 + 0x1d8);
            FUN_145c1c9a0(lVar29 + 8,*(undefined4 *)(lVar29 + 0x1a8),*(undefined4 *)(lVar29 + 0x1b8)
                          ,*(undefined4 *)(lVar29 + 0x1c8));
          }
        }
        plVar45 = plStack_120;
        if (plStack_120 != (longlong *)0x0) {
          LOCK();
          plVar42 = plStack_120 + 1;
          *(int *)plVar42 = (int)*plVar42 + -1;
          UNLOCK();
          if ((int)*plVar42 == 0) {
            (**(code **)*plStack_120)(plStack_120);
            LOCK();
            piVar28 = (int *)((longlong)plVar45 + 0xc);
            *piVar28 = *piVar28 + -1;
            UNLOCK();
            if (*piVar28 == 0) {
              (**(code **)(*plVar45 + 0x10))(plVar45);
            }
          }
        }
        bVar21 = 0;
      }
      else {
        lVar18 = 0x1b0;
        if ((ulonglong)uStack_d0 < 3) {
          lVar18 = (ulonglong)uStack_d0 * 0x10 + 0x1a0;
        }
        lVar33 = (longlong)*(int *)(lVar29 + 8 + lVar18);
        if (lVar33 != 0) {
          lVar10 = *(longlong *)(lVar29 + lVar18);
          lVar44 = 0;
          do {
            bVar21 = *(byte *)(lVar10 + lVar44);
            lVar20 = FUN_1408fb716(*(longlong *)
                                    (*(longlong *)(lVar29 + 0x1e0) + (ulonglong)bVar21 * 0x10) + 8,
                                   (int)local_d8,(int)sStack_d6,&local_e8);
            if (lVar20 != 0) {
              *(byte *)(psVar19 + 6) = bVar21;
              sVar6 = *(short *)(lVar20 + 0x14);
              sVar7 = *(short *)(lVar20 + 0x18);
              sVar8 = *(short *)(lVar20 + 0x1c);
              psVar19[2] = *(short *)(lVar20 + 0x10);
              psVar19[3] = sVar6;
              psVar19[4] = sVar7;
              psVar19[5] = sVar8;
              bVar21 = *(byte *)(lVar20 + 0x20);
              bVar46 = true;
              plVar34 = local_1b8;
              goto LAB_140c77938;
            }
            lVar44 = lVar44 + 1;
          } while (lVar33 != lVar44);
        }
        bVar21 = 0;
        bVar46 = false;
        plVar34 = local_1b8;
        if (*(int *)(lVar29 + 0x1e8) < 0xff) {
          (**(code **)(**(longlong **)(lVar29 + 0x1f0) + 8))
                    (*(longlong **)(lVar29 + 0x1f0),&local_128,uStack_d0);
          plVar45 = plStack_120;
          piVar28 = local_128;
          if (plStack_120 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
            UNLOCK();
          }
          iVar15 = *(int *)(lVar29 + 0x1e8);
          *(uint *)(lVar29 + 0x1e8) = iVar15 + 1U;
          if (*(uint *)(lVar29 + 0x1ec) < iVar15 + 1U) {
            FUN_14627a3ee((longlong *)(lVar29 + 0x1e0),iVar15);
          }
          plVar34 = local_1b8;
          plVar42 = (longlong *)(lVar18 + lVar29);
          lVar18 = *(longlong *)(lVar29 + 0x1e0);
          *(int **)(lVar18 + (longlong)iVar15 * 0x10) = piVar28;
          *(longlong **)(lVar18 + 8 + (longlong)iVar15 * 0x10) = plVar45;
          if (plVar45 == (longlong *)0x0) {
            *(char *)(psVar19 + 6) = (char)iVar15;
          }
          else {
            LOCK();
            *(int *)(plVar45 + 1) = (int)plVar45[1] + 1;
            UNLOCK();
            *(char *)(psVar19 + 6) = (char)iVar15;
            LOCK();
            plVar1 = plVar45 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar45)(plVar45);
              LOCK();
              piVar28 = (int *)((longlong)plVar45 + 0xc);
              *piVar28 = *piVar28 + -1;
              UNLOCK();
              if (*piVar28 == 0) {
                (**(code **)(*plVar45 + 0x10))(plVar45);
              }
            }
          }
          iVar15 = (int)plVar42[1];
          *(uint *)(plVar42 + 1) = iVar15 + 1U;
          if (*(uint *)((longlong)plVar42 + 0xc) < iVar15 + 1U) {
            FUN_1447403be(plVar42,iVar15);
          }
          *(char *)(*plVar42 + (longlong)iVar15) = (char)psVar19[6];
          lVar18 = FUN_1408fb716(local_128 + 2,(int)local_d8,(int)sStack_d6);
          bVar46 = lVar18 != 0;
          if (lVar18 == 0) {
            bVar21 = 0;
          }
          else {
            sVar6 = *(short *)(lVar18 + 0x14);
            sVar7 = *(short *)(lVar18 + 0x18);
            sVar8 = *(short *)(lVar18 + 0x1c);
            psVar19[2] = *(short *)(lVar18 + 0x10);
            psVar19[3] = sVar6;
            psVar19[4] = sVar7;
            psVar19[5] = sVar8;
            bVar21 = *(byte *)(lVar18 + 0x20);
          }
          if ((*(byte *)(lVar29 + 0x200) & 1) == 0) {
            local_1d8 = *(uint *)(lVar29 + 0x1d8);
            FUN_145c1c9a0(lVar29 + 8,*(undefined4 *)(lVar29 + 0x1a8),*(undefined4 *)(lVar29 + 0x1b8)
                          ,*(undefined4 *)(lVar29 + 0x1c8));
          }
          plVar45 = plStack_120;
          if (plStack_120 != (longlong *)0x0) {
            LOCK();
            plVar42 = plStack_120 + 1;
            *(int *)plVar42 = (int)*plVar42 + -1;
            UNLOCK();
            if ((int)*plVar42 == 0) {
              (**(code **)*plStack_120)(plStack_120);
              LOCK();
              piVar28 = (int *)((longlong)plVar45 + 0xc);
              *piVar28 = *piVar28 + -1;
              UNLOCK();
              if (*piVar28 == 0) {
                (**(code **)(*plVar45 + 0x10))(plVar45);
              }
            }
          }
        }
      }
LAB_140c77938:
      if (local_e8 != (int *)0x0) {
        FUN_1400020a8();
      }
      *(bool *)(psVar19 + 7) = bVar46;
      if (bVar46 == false) {
        bVar21 = 0;
      }
      else {
        *psVar19 = CONCAT11(uStack_143,uStack_144) + (ushort)bVar21;
        psVar19[1] = sStack_142 - (ushort)bVar21;
        *(byte *)((longlong)psVar19 + 0xd) = bStack_13c;
        bVar21 = 1;
      }
    }
    plVar45 = local_190;
    if (local_158 != (int *)0x0) {
      FUN_1400020a8();
      bVar21 = *(byte *)(psVar19 + 7);
    }
    if ((bVar21 & 1) != 0) {
      *plVar34 = (longlong)psVar19;
      plVar42 = (longlong *)plVar34[1];
      if (plVar42 != plVar45) {
        if (plVar45 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar45 + 0xc) = *(int *)((longlong)plVar45 + 0xc) + 1;
          UNLOCK();
          plVar42 = (longlong *)plVar34[1];
        }
        if (plVar42 != (longlong *)0x0) {
          LOCK();
          piVar28 = (int *)((longlong)plVar42 + 0xc);
          *piVar28 = *piVar28 + -1;
          UNLOCK();
          if (*piVar28 == 0) {
            (**(code **)(*plVar42 + 0x10))();
          }
        }
        plVar34[1] = (longlong)plVar45;
      }
      if (*(int *)(lVar29 + 0xe4) == 0) {
        iVar15 = *(int *)(lVar29 + 0xb8);
        *(int *)(lVar29 + 0xb8) = iVar15 + 1;
        if (*(int *)(lVar29 + 0xbc) == iVar15) {
          FUN_1406cd6a8(local_1b0,iVar15);
        }
        iVar43 = *(int *)(lVar29 + 0xd8);
        if (iVar43 == 0) {
          iVar17 = -1;
        }
        else {
          iVar17 = iVar43 + 0x1e;
          if (-1 < iVar43 + -1) {
            iVar17 = iVar43 + -1;
          }
          iVar17 = iVar17 >> 5;
        }
        lVar29 = local_1c0 + 0xc0;
        iVar23 = iVar43 + 1;
        iVar39 = iVar43 + 0x1f;
        if (-1 < iVar43) {
          iVar39 = iVar43;
        }
        lVar18 = local_1c0;
        if (iVar39 >> 5 == iVar17) {
          *(int *)(local_1c0 + 0xd8) = iVar23;
        }
        else {
          if (*(int *)(local_1c0 + 0xdc) <= iVar43) {
            iVar17 = iVar43;
            if (iVar43 + 0x20U < 0xa0) {
              iVar23 = 0x80;
            }
            else {
              uVar16 = iVar43 + 0x20U >> 5;
              if (*(int *)(local_1c0 + 0xdc) + 0x1fU < 0xa0) {
                uVar22 = 4;
                if (4 < uVar16) {
                  uVar22 = uVar16;
                }
              }
              else {
                uVar22 = uVar16 + (uVar16 * 3 >> 3) + 0x10;
              }
              uVar24 = (ulonglong)(uVar22 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar35 = (uint)(uVar24 + 0xf);
                  if (uVar22 < 0x1ffd) {
                    uVar24 = (ulonglong)
                             (ushort)(&DAT_14c841d90)
                                     [0x32 - (byte)(&DAT_14c841e00)[uVar24 + 0xf >> 4]];
                  }
                  else {
                    uVar25 = (ulonglong)(uVar35 & 0xfffffff0);
                    if (uVar25 < 0x7ff1) {
                      bVar21 = (&DAT_14c841e00)[uVar35 >> 4];
                      uVar30 = 0x32;
                      if (0x32 < bVar21) {
                        uVar30 = (ulonglong)bVar21;
                      }
                      uVar36 = 0x32 - (ulonglong)bVar21;
                      do {
                        uVar24 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar36 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar36 & 0xffffffff] & 0xf) == 0) goto LAB_140c77f0b;
                        lVar18 = uVar30 + 1 + uVar36;
                        uVar36 = uVar36 - 1;
                      } while (lVar18 != 0x33);
                    }
                    uVar24 = 0x10;
                    if (0x10 < DAT_14c841df8) {
                      uVar24 = (ulonglong)DAT_14c841df8;
                    }
                    uVar24 = -uVar24 & (uVar25 + uVar24) - 1;
                  }
                }
                else {
                  uVar24 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar24,0);
                  iVar17 = *(int *)(local_1c0 + 0xd8);
                }
              }
LAB_140c77f0b:
              iVar31 = (int)(uVar24 >> 2);
              iVar23 = -0x20;
              if ((int)uVar16 <= iVar31) {
                iVar23 = iVar31 << 5;
              }
            }
            lVar18 = local_1c0;
            *(int *)(local_1c0 + 0xdc) = iVar23;
            FUN_1446efbd8(lVar29,iVar17);
            iVar23 = *(int *)(lVar18 + 0xd8) + 1;
          }
          iVar17 = iVar23 + 0x1f;
          if (-1 < iVar23) {
            iVar17 = iVar23;
          }
          *(int *)(lVar18 + 0xd8) = iVar23;
          if (iVar23 % 0x20 != 0) {
            lVar33 = *(longlong *)(lVar18 + 0xd0);
            if (*(longlong *)(lVar18 + 0xd0) == 0) {
              lVar33 = lVar29;
            }
            bVar21 = -(char)(iVar23 % 0x20);
            *(uint *)(lVar33 + (longlong)(iVar17 >> 5) * 4) =
                 (uint)(*(int *)(lVar33 + (longlong)(iVar17 >> 5) * 4) << (bVar21 & 0x1f)) >>
                 (bVar21 & 0x1f);
          }
        }
        lVar33 = (longlong)iVar15;
        if (*(longlong *)(lVar18 + 0xd0) != 0) {
          lVar29 = *(longlong *)(lVar18 + 0xd0);
        }
        bVar21 = (byte)iVar43 & 0x1f;
        puVar3 = (uint *)(lVar29 + (longlong)(iVar39 >> 5) * 4);
        *puVar3 = *puVar3 & (-2 << bVar21 | 0xfffffffeU >> 0x20 - bVar21);
      }
      else {
        iVar15 = *(int *)(lVar29 + 0xe0);
        lVar33 = (longlong)iVar15;
        iVar43 = *(int *)(*(longlong *)(lVar29 + 0xb0) + 4 + lVar33 * 0x40);
        *(int *)(lVar29 + 0xe0) = iVar43;
        iVar17 = *(int *)(lVar29 + 0xe4) + -1;
        *(int *)(lVar29 + 0xe4) = iVar17;
        lVar18 = local_1c0;
        if (iVar17 != 0) {
          *(undefined4 *)(*(longlong *)(lVar29 + 0xb0) + (longlong)iVar43 * 0x40) = 0xffffffff;
        }
      }
      plVar45 = local_190;
      lVar29 = lVar18 + 0xc0;
      if (*(longlong *)(lVar18 + 0xd0) != 0) {
        lVar29 = *(longlong *)(lVar18 + 0xd0);
      }
      iVar43 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar43 = iVar15;
      }
      puVar3 = (uint *)(lVar29 + (longlong)(iVar43 >> 5) * 4);
      *puVar3 = *puVar3 | 1 << ((byte)iVar15 & 0x1f);
      lVar29 = *(longlong *)(lVar18 + 0xb0);
      lVar33 = lVar33 * 0x40;
      puVar27 = (undefined8 *)(lVar29 + lVar33);
      *(ulonglong *)(lVar29 + lVar33) = local_180;
      *(longlong **)(lVar29 + 8 + lVar33) = local_178;
      if (local_178 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_178 + 0xcU) = *(int *)((longlong)local_178 + 0xcU) + 1;
        UNLOCK();
      }
      puVar27[4] = CONCAT44(uStack_15c,local_160);
      puVar27[2] = CONCAT44(uStack_16c,local_170);
      puVar27[3] = CONCAT44(uStack_164,CONCAT22(uStack_166,CONCAT11(bStack_167,bStack_168)));
      puVar27[5] = psVar19;
      puVar27[6] = local_190;
      if (local_190 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_190 + 1) = (int)local_190[1] + 1;
        UNLOCK();
      }
      *(undefined4 *)(puVar27 + 7) = 0xffffffff;
      uVar16 = *(uint *)(puVar27 + 4);
      iVar43 = 1;
      if (*(int *)(local_1c0 + 0xb8) - *(int *)(local_1c0 + 0xe4) == 1) {
        uVar22 = 1;
      }
      else {
        iVar17 = FUN_142867452(local_1b0,uVar16,puVar27);
        plVar34 = local_1b0;
        if (iVar17 != -1) {
          lVar29 = *local_1b0;
          lVar18 = (longlong)iVar17 * 0x40;
          FUN_14694a5ee(lVar29 + lVar18);
          uVar13 = *puVar27;
          uVar14 = puVar27[1];
          uVar51 = *(undefined4 *)(puVar27 + 2);
          uVar53 = *(undefined4 *)((longlong)puVar27 + 0x14);
          uVar54 = *(undefined4 *)(puVar27 + 3);
          uVar55 = *(undefined4 *)((longlong)puVar27 + 0x1c);
          uVar58 = *(undefined4 *)(puVar27 + 4);
          uVar52 = *(undefined4 *)((longlong)puVar27 + 0x24);
          uVar56 = *(undefined4 *)(puVar27 + 5);
          uVar57 = *(undefined4 *)((longlong)puVar27 + 0x2c);
          *(undefined8 *)(lVar29 + 0x30 + lVar18) = puVar27[6];
          puVar2 = (undefined4 *)(lVar29 + 0x20 + lVar18);
          *puVar2 = uVar58;
          puVar2[1] = uVar52;
          puVar2[2] = uVar56;
          puVar2[3] = uVar57;
          puVar2 = (undefined4 *)(lVar29 + 0x10 + lVar18);
          *puVar2 = uVar51;
          puVar2[1] = uVar53;
          puVar2[2] = uVar54;
          puVar2[3] = uVar55;
          *(undefined8 *)(lVar29 + lVar18) = uVar13;
          ((undefined8 *)(lVar29 + lVar18))[1] = uVar14;
          FUN_14694d9b0(plVar34,iVar15);
          goto LAB_140c77be3;
        }
        uVar22 = *(int *)(local_1c0 + 0xb8) - *(int *)(local_1c0 + 0xe4);
        if (3 < uVar22) {
          uVar24 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
          lVar29 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar29 == 0; lVar29 = lVar29 + -1) {
            }
          }
          iVar43 = 1 << ((byte)lVar29 & 0x1f);
        }
      }
      if (((int)uVar22 < 1) || (iVar43 <= *(int *)(local_1c0 + 0xf8))) {
        uVar16 = *(int *)(local_1c0 + 0xf8) - 1U & uVar16;
        *(uint *)((longlong)puVar27 + 0x3c) = uVar16;
        lVar29 = *(longlong *)(local_1c0 + 0xf0);
        if (*(longlong *)(local_1c0 + 0xf0) == 0) {
          lVar29 = local_1c0 + 0xe8;
        }
        *(undefined4 *)(puVar27 + 7) =
             *(undefined4 *)
              (lVar29 + ((longlong)*(int *)(local_1c0 + 0xf8) - 1U & (longlong)(int)uVar16) * 4);
        lVar29 = *(longlong *)(local_1c0 + 0xf0);
        if (*(longlong *)(local_1c0 + 0xf0) == 0) {
          lVar29 = local_1c0 + 0xe8;
        }
        *(int *)(lVar29 + ((longlong)*(int *)(local_1c0 + 0xf8) - 1U & (longlong)(int)uVar16) * 4) =
             iVar15;
      }
      else {
        *(int *)(local_1c0 + 0xf8) = iVar43;
        FUN_1412d62cc(local_1b0);
      }
    }
LAB_140c77be3:
    param_2 = local_188;
    uVar13 = *(undefined8 *)(psVar19 + 4);
    *local_188 = *(undefined8 *)psVar19;
    local_188[1] = uVar13;
    if (plVar45 != (longlong *)0x0) {
      LOCK();
      plVar34 = plVar45 + 1;
      *(int *)plVar34 = (int)*plVar34 + -1;
      UNLOCK();
      if ((int)*plVar34 == 0) {
        (**(code **)*plVar45)(plVar45);
        LOCK();
        piVar28 = (int *)((longlong)plVar45 + 0xc);
        *piVar28 = *piVar28 + -1;
        UNLOCK();
        if (*piVar28 == 0) {
          (**(code **)(*plVar45 + 0x10))(plVar45);
        }
      }
    }
  }
  else {
    lVar18 = (longlong)iVar15 * 0x40 + *plVar34;
    if ((undefined8 *)(lVar18 + 0x28) == (undefined8 *)0x0 || lVar18 == 0) goto LAB_140c76be3;
    puVar27 = *(undefined8 **)(lVar18 + 0x28);
    *local_1b8 = (longlong)puVar27;
    plVar34 = *(longlong **)(lVar18 + 0x30);
    plVar42 = (longlong *)local_1b8[1];
    if (plVar42 != plVar34) {
      if (plVar34 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar34 + 0xc) = *(int *)((longlong)plVar34 + 0xc) + 1;
        UNLOCK();
        plVar42 = (longlong *)local_1b8[1];
      }
      if (plVar42 != (longlong *)0x0) {
        LOCK();
        piVar28 = (int *)((longlong)plVar42 + 0xc);
        *piVar28 = *piVar28 + -1;
        UNLOCK();
        if (*piVar28 == 0) {
          (**(code **)(*plVar42 + 0x10))();
        }
      }
      plVar45[1] = (longlong)plVar34;
      puVar27 = *(undefined8 **)(lVar18 + 0x28);
    }
    uVar13 = puVar27[1];
    *param_2 = *puVar27;
    param_2[1] = uVar13;
  }
  if (local_178 != (longlong *)0x0) {
    LOCK();
    piVar28 = (int *)((longlong)local_178 + 0xc);
    *piVar28 = *piVar28 + -1;
    UNLOCK();
    if (*piVar28 == 0) {
      (**(code **)(*local_178 + 0x10))();
    }
  }
LAB_140c77c2c:
  if ((local_a0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140c78102 FUN_140c78102 body=452 status=ok
// SIG undefined FUN_140c78102(void)

void FUN_140c78102(int *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  iVar3 = *param_1;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3 * 6);
  }
  if (iVar3 != 0) {
    FUN_14480809c(&local_48);
    if (0 < *param_1) {
      iVar3 = 0;
      iVar5 = 3;
      do {
        lVar4 = (longlong)(int)(uint)uStack_40;
        uVar1 = (uint)uStack_40 + 1;
        if (uStack_40._4_4_ < uVar1) {
          uVar2 = uStack_40 & 0xffffffff;
          uStack_40._0_4_ = uVar1;
          FUN_1447808da(&local_48,uVar2);
          uVar1 = (uint)uStack_40;
        }
        uStack_40._0_4_ = uVar1;
        uVar1 = (uint)uStack_40;
        *(int *)(local_48 + lVar4 * 4) = iVar5 + -3;
        lVar4 = (longlong)(int)(uint)uStack_40;
        uStack_40._0_4_ = (uint)uStack_40 + 1;
        if (uStack_40._4_4_ < (uint)uStack_40) {
          FUN_1447808da(&local_48,uVar1);
        }
        uVar1 = (uint)uStack_40;
        *(int *)(local_48 + lVar4 * 4) = iVar5 + -2;
        lVar4 = (longlong)(int)(uint)uStack_40;
        uStack_40._0_4_ = (uint)uStack_40 + 1;
        if (uStack_40._4_4_ < (uint)uStack_40) {
          FUN_1447808da(&local_48,uVar1);
        }
        uVar1 = (uint)uStack_40;
        *(int *)(local_48 + lVar4 * 4) = iVar5 + -1;
        lVar4 = (longlong)(int)(uint)uStack_40;
        uStack_40._0_4_ = (uint)uStack_40 + 1;
        if (uStack_40._4_4_ < (uint)uStack_40) {
          FUN_1447808da(&local_48,uVar1);
        }
        uVar1 = (uint)uStack_40;
        *(int *)(local_48 + lVar4 * 4) = iVar5 + -2;
        lVar4 = (longlong)(int)(uint)uStack_40;
        uStack_40._0_4_ = (uint)uStack_40 + 1;
        if (uStack_40._4_4_ < (uint)uStack_40) {
          FUN_1447808da(&local_48,uVar1);
        }
        uVar1 = (uint)uStack_40;
        *(int *)(local_48 + lVar4 * 4) = iVar5;
        lVar4 = (longlong)(int)(uint)uStack_40;
        uStack_40._0_4_ = (uint)uStack_40 + 1;
        if (uStack_40._4_4_ < (uint)uStack_40) {
          FUN_1447808da(&local_48,uVar1);
        }
        *(int *)(local_48 + lVar4 * 4) = iVar5 + -1;
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar3 < *param_1);
    }
  }
  DAT_14c975240._0_4_ = (undefined4)local_48;
  DAT_14c975240._4_4_ = local_48._4_4_;
  uRam000000014c975248 = (uint)uStack_40;
  uRam000000014c97524c = uStack_40._4_4_;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c782c8 FUN_140c782c8 body=212 status=ok
// SIG undefined FUN_140c782c8(void)

void FUN_140c782c8(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_34 = param_2;
    uVar1 = FUN_14477b072(param_1,DAT_14cac9bd0);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_34);
    lVar2 = FUN_1447210f0(param_1);
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        lVar3 = lVar2 + 0x460;
      }
      else {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf8);
      }
      FUN_140e65914(lVar3,param_1,*(undefined4 *)(lVar2 + 0x6f4));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_140c7839e(param_1,2,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c7839e FUN_140c7839e body=494 status=ok
// SIG undefined FUN_140c7839e(void)

void FUN_140c7839e(longlong *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)param_1 + 0x39c) != 0) {
    puVar3 = (uint *)(param_1 + 0x73);
    uVar2 = *puVar3;
    if ((((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) &&
        (lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar6 != 0)) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)((longlong)param_1 + 0x39c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) goto LAB_140c78406;
  }
  puVar3 = (uint *)(param_1 + 0x72);
LAB_140c78406:
  if (((((puVar3[1] != 0) && (uVar2 = *puVar3, -1 < (int)uVar2)) &&
       (((int)uVar2 < DAT_14c9647dc &&
        (((plVar5 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar5 != (longlong *)0x0 && (*(uint *)(plVar5 + 2) == puVar3[1])) &&
         ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))))) &&
      ((*plVar5 != 0 && (lVar6 = FUN_140bede9a(), lVar6 != 0)))) &&
     ((*(int *)(lVar6 + 0x798) == 0) + 1 == param_2)) {
    cVar1 = (char)param_1[0x2f];
    if (*(char *)((longlong)param_1 + 0x4c4) == '\x01') {
      if (((char)param_1[0x96] != '\0') &&
         ((*(char *)((longlong)param_1 + 0x4a5) != '\x01' ||
          (lVar4 = FUN_148928538(param_1), lVar4 != 0)))) {
        *(undefined1 *)((longlong)param_1 + 0x4c4) = 0;
        if (cVar1 == '\x03') {
          (**(code **)(*param_1 + 0x650))();
        }
        else {
          (**(code **)(*param_1 + 0x660))(param_1,lVar6);
        }
      }
    }
    else if ((((char)param_1[0x96] != '\0') &&
             ((**(code **)((ulonglong)(cVar1 != '\x03') * 0x10 + 0x658 + *param_1))
                        (param_1,param_3,lVar6), (char)param_1[0x96] == '\x01')) &&
            ((*(float *)(param_1 + 0x94) <= *(float *)(param_1 + 0x7a) ||
             (*(char *)((longlong)param_1 + 0x4a4) == '\x01')))) {
      *(undefined1 *)(param_1 + 0x96) = 0;
      FUN_1447cd2ec(lVar6 + 0x7b0,0);
      if (cVar1 == '\x03') {
        FUN_1489284c6(param_1,lVar6);
      }
    }
    if ((char)param_1[0x96] == '\0') {
      FUN_14578370a(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 140c7858c FUN_140c7858c body=40 status=ok
// SIG undefined FUN_140c7858c(void)

undefined8 FUN_140c7858c(undefined8 param_1,int param_2)

{
  FUN_140c785b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c785b4 FUN_140c785b4 body=86 status=ok
// SIG undefined FUN_140c785b4(void)

void FUN_140c785b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b000780;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_140c7860a(param_1 + 8);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140c7860a FUN_140c7860a body=55 status=ok
// SIG undefined FUN_140c7860a(void)

void FUN_140c7860a(longlong *param_1)

{
  FUN_140c78642(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c78642 FUN_140c78642 body=538 status=ok
// SIG undefined FUN_140c78642(void)

void FUN_140c78642(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar12 = *puVar9;
    if (uVar12 == 0) {
      iVar5 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar5 = iVar3 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_140c787a3;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar9[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 < iVar3) {
    uVar12 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar4 = (longlong)iVar5;
      FUN_140c7885d(*(undefined8 *)(lVar11 + 0x10 + lVar4 * 0x28),
                    *(undefined4 *)(lVar11 + 0x18 + lVar4 * 0x28));
      if (*(longlong *)(lVar11 + 0x10 + lVar4 * 0x28) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar5 = (int)uVar13;
      lVar11 = (longlong)iVar5;
      uVar6 = puVar9[lVar11] & uVar12;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar7 <= iVar5) break;
        lVar4 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = puVar9[lVar11 + lVar4 + 1];
          if (uVar6 != 0) break;
          lVar4 = lVar4 + 1;
          if (iVar8 - lVar11 == lVar4) goto LAB_140c787a3;
        }
        uVar13 = (ulonglong)(iVar5 + (int)lVar4 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar3);
  }
LAB_140c787a3:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar6 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140c7885d FUN_140c7885d body=105 status=ok
// SIG undefined FUN_140c7885d(void)

void FUN_140c7885d(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x50);
    do {
      FUN_140c788c6(*(undefined8 *)(puVar4 + -2),*puVar4);
      if (*(longlong *)(puVar4 + -2) != 0) {
        FUN_1400020a8();
      }
      plVar3 = *(longlong **)(puVar4 + -0x10);
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
      puVar4 = puVar4 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140c788c6 FUN_140c788c6 body=75 status=ok
// SIG undefined FUN_140c788c6(void)

void FUN_140c788c6(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140c78912 FUN_140c78912 body=443 status=ok
// SIG undefined FUN_140c78912(void)

void FUN_140c78912(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar15 = 0;
    uVar16 = 1;
    iVar6 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar10;
    if (uVar14 == 0) {
      iVar6 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar6 = iVar4 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar16 == uVar15) goto LAB_140c78a6c;
        iVar12 = iVar12 + 0x20;
        uVar14 = puVar10[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar3 = uVar16 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar6) {
      iVar6 = iVar4;
    }
  }
  if (iVar6 < iVar4) {
    uVar14 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar6 * 0x20);
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
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar4 = (int)param_1[5];
      iVar6 = (int)uVar15;
      lVar13 = (longlong)iVar6;
      uVar7 = puVar10[lVar13] & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = puVar10[lVar13 + lVar11 + 1];
          if (uVar7 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar9 - lVar13 == lVar11) goto LAB_140c78a6c;
        }
        uVar15 = (ulonglong)(iVar6 + (int)lVar11 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_140c78a6c:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 140c78ace FUN_140c78ace body=48 status=ok
// SIG undefined FUN_140c78ace(void)

void FUN_140c78ace(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140c78afe(param_1 + 0x28);
  return;
}



// FUNCTION 140c78afe FUN_140c78afe body=55 status=ok
// SIG undefined FUN_140c78afe(void)

void FUN_140c78afe(longlong *param_1)

{
  FUN_140c78c8e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c78b36 FUN_140c78b36 body=46 status=ok
// SIG undefined FUN_140c78b36(void)

void FUN_140c78b36(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140c78b64(param_1 + 0x28);
  return;
}



// FUNCTION 140c78b64 FUN_140c78b64 body=55 status=ok
// SIG undefined FUN_140c78b64(void)

void FUN_140c78b64(longlong *param_1)

{
  FUN_140c78c14(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c78b9c FUN_140c78b9c body=64 status=ok
// SIG undefined FUN_140c78b9c(void)

void FUN_140c78b9c(longlong param_1)

{
  if (*(char *)(param_1 + 0x80) == '\x01') {
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140c78bdc(param_1 + 0x28);
  return;
}



// FUNCTION 140c78bdc FUN_140c78bdc body=55 status=ok
// SIG undefined FUN_140c78bdc(void)

void FUN_140c78bdc(longlong *param_1)

{
  FUN_140c78ebe(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c78c14 FUN_140c78c14 body=121 status=ok
// SIG undefined FUN_140c78c14(void)

void FUN_140c78c14(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 140c78c8e FUN_140c78c8e body=560 status=ok
// SIG undefined FUN_140c78c8e(void)

void FUN_140c78c8e(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar14 = 0;
    uVar12 = 1;
    iVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar13 = *puVar8;
    if (uVar13 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar14 = 0;
      uVar12 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar12 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar12 == uVar14) goto LAB_140c78dfb;
        iVar9 = iVar9 + 0x20;
        uVar13 = puVar8[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar2 = uVar12 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar13 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar4 * 0x60;
      *(undefined4 *)(lVar11 + 0x50 + lVar10) = 0;
      if (*(longlong *)(lVar11 + 0x48 + lVar10) != 0) {
        FUN_1400020a8();
      }
      FUN_1406c8ecc(lVar11 + lVar10 + 8);
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar4 = (int)uVar14;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar13;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar10 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = puVar8[lVar11 + lVar10 + 1];
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar7 - lVar11 == lVar10) goto LAB_140c78dfb;
        }
        uVar14 = (ulonglong)(iVar4 + (int)lVar10 + 1);
        uVar13 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_140c78dfb:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar5 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar5 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar5;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140c78ebe FUN_140c78ebe body=505 status=ok
// SIG undefined FUN_140c78ebe(void)

void FUN_140c78ebe(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar4 = 0;
    iVar10 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar12 = *puVar8;
    if (uVar12 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_140c79006;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar4 * 0x20) != 0) {
        FUN_1400020a8();
        iVar3 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar8[lVar11 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar11 == lVar9) goto LAB_140c79006;
        }
        uVar13 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_140c79006:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar5 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar5 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar5;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140c790b8 FUN_140c790b8 body=508 status=ok
// SIG undefined FUN_140c790b8(void)

double * FUN_140c790b8(longlong param_1,double *param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140c792f4();
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    cVar1 = *(char *)(*(longlong *)(param_1 + 0x1f0) + 0x178);
    fVar8 = *(float *)(param_1 + 0x44c + (ulonglong)(cVar1 == '\x01') * 4);
    if (DAT_14caf64b8 == 0) {
      local_60 = &local_48;
      local_48 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_142b4754c;
      local_68 = &LAB_147c45ce0;
      local_70 = &LAB_1463f1ff4;
      local_78 = &DAT_149e063b2;
      local_80 = 0x4000000000;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    cVar2 = FUN_140c792b6(param_3 + 0xb8,DAT_14caf64b8);
    if (cVar2 != '\0') {
      fVar8 = *(float *)(param_1 + 0x454 + (ulonglong)(cVar1 == '\x01') * 4);
    }
    dVar3 = DAT_14c8464e0;
    dVar4 = DAT_14c8464e8;
    dVar5 = DAT_14c8464f0;
    if (0.0001 <= fVar8) {
      dVar6 = (double)fVar8;
      dVar3 = *param_2;
      dVar4 = param_2[1];
      dVar5 = param_2[2];
      dVar7 = dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4;
      if (dVar6 * dVar6 < dVar7) {
        dVar6 = (1.0 / SQRT(dVar7)) * dVar6;
        dVar3 = dVar3 * dVar6;
        dVar4 = dVar4 * dVar6;
        dVar5 = dVar5 * dVar6;
      }
    }
    *param_2 = dVar3;
    param_2[1] = dVar4;
    param_2[2] = dVar5;
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140c792b6 FUN_140c792b6 body=62 status=ok
// SIG undefined FUN_140c792b6(void)

undefined8 FUN_140c792b6(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_144835338();
  uVar3 = 0;
  if ((param_2 != 0) && (lVar2 != 0)) {
    iVar1 = *(int *)(param_2 + 0x38);
    if (*(int *)(lVar2 + 0x38) < iVar1) {
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),
                       *(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
                       param_2 + 0x30);
    }
  }
  return uVar3;
}



// FUNCTION 140c792f4 FUN_140c792f4 body=224 status=ok
// SIG undefined FUN_140c792f4(void)

undefined4 * FUN_140c792f4(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_3 + 0xad) & 2) == 0) {
    *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar1 = DAT_14c8464e0._4_4_;
    *param_2 = (undefined4)DAT_14c8464e0;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  uVar4 = -(uint)(0.0 < *(float *)(param_3 + 0xa0));
  local_28 = (double)((float)(~uVar4 & 0x3e000000 | (uint)*(float *)(param_3 + 0xa0) & uVar4) +
                     ABS(DAT_14c761408));
  local_18 = *(double *)(param_3 + 0x50) * local_28;
  local_20 = *(double *)(param_3 + 0x48) * local_28;
  local_28 = local_28 * *(double *)(param_3 + 0x40);
  (**(code **)(*param_1 + 0x550))(SUB84(local_28,0),param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c793d8 FUN_140c793d8 body=4618 status=ok
// SIG undefined FUN_140c793d8(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140c793d8(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4,
                  uint param_5)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  code *pcVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  code *pcVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  byte bVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  undefined1 *puVar25;
  int iVar26;
  int iVar27;
  byte bVar28;
  undefined1 auStack_498 [32];
  longlong *local_478;
  longlong *local_470;
  undefined8 *local_468;
  undefined8 *local_460;
  undefined8 *local_458;
  longlong *local_450;
  longlong *local_448;
  undefined8 *local_440;
  longlong *local_438;
  longlong *local_428;
  longlong *local_420;
  longlong local_418;
  undefined8 *local_410;
  undefined8 *local_408;
  longlong local_400;
  uint local_3f4;
  int local_3f0;
  int local_3ec;
  ulonglong local_3e8;
  longlong local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  ulonglong local_3c8;
  ulonglong local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  longlong *******local_3a0;
  longlong local_398;
  longlong local_390;
  longlong local_388;
  longlong local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  longlong local_338 [15];
  undefined1 local_2c0 [8];
  undefined8 auStack_2b8 [12];
  undefined4 auStack_258 [12];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 uStack_1a0;
  undefined2 local_19f;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_190;
  longlong local_180 [2];
  longlong *local_170;
  undefined8 local_168;
  longlong *******local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_98;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68;
  char local_67;
  undefined1 local_66;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_498;
  if ((*(byte *)(param_2 + 0xe5) & 2) != 0) {
    plVar7 = (longlong *)
             FUN_14485b2b4(*(undefined8 *)(param_2 + 0xc0),*(undefined4 *)(param_1 + 0x20));
    bVar2 = (**(code **)(*plVar7 + 0xe8))(plVar7);
    plVar7 = *(longlong **)(param_2 + 0xc0);
    if ((plVar7 != (longlong *)0x0 & bVar2) == 1) {
      uVar22 = 1 << ((byte)param_5 & 0x1f);
      local_420 = (longlong *)(ulonglong)(param_5 >> 5);
      do {
        plVar8 = (longlong *)(**(code **)(*plVar7 + 0x30))(plVar7,*(undefined4 *)(param_1 + 0x20));
        if (plVar8 != (longlong *)0x0) {
          cVar3 = (**(code **)(*plVar8 + 0xe8))(plVar8);
          if ((cVar3 == '\0') || (plVar8[3] == 0)) break;
          uVar5 = FUN_144a42af8(*(undefined2 *)
                                 (&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x20) * 2),plVar8);
          bVar2 = *(byte *)(param_1 + 0x80);
          if ((byte)((byte)(uVar5 >> 8) & (byte)(1 << (bVar2 & 0x1f))) == 0) break;
          if (bVar2 == 2) {
            bVar2 = (uVar5 >> 0x11 & 1) == 0 | 2;
          }
          else {
            switch(bVar2) {
            case 1:
              break;
            default:
              bVar2 = 0;
              break;
            case 3:
            case 5:
              bVar2 = 4;
              break;
            case 4:
              bVar2 = 2;
              break;
            case 6:
              bVar2 = 5;
            }
          }
          if (bVar2 != *(byte *)(param_1 + 0x81)) break;
          local_410 = (undefined8 *)CONCAT44(local_410._4_4_,uVar22);
          uVar1 = *(uint *)(param_2 + 0xe4);
          pcVar14 = *(code **)(*plVar8 + 0x38);
          plVar12 = plVar8;
          if (pcVar14 == FUN_144765e18) {
            plVar12 = (longlong *)plVar8[9];
            if (plVar12 == (longlong *)0x0) {
              plVar12 = (longlong *)plVar8[8];
              pcVar14 = *(code **)(*plVar12 + 0x420);
              pcVar18 = (code *)&LAB_144b24e8a;
            }
            else {
              pcVar14 = *(code **)(*plVar12 + 0x420);
              pcVar18 = (code *)&LAB_14497e108;
            }
            if (pcVar14 != pcVar18) goto LAB_140c7a4df;
          }
          else {
LAB_140c7a4df:
            (*pcVar14)(plVar12);
          }
          lVar23 = *plVar8;
          local_3e8 = param_3;
          if (*(code **)(lVar23 + 0x100) == (code *)&LAB_144b25520) {
            bVar2 = (*(byte *)(plVar8[8] + 0x1d0) & 0x40) >> 6;
          }
          else {
            bVar2 = (**(code **)(lVar23 + 0x100))(plVar8);
            lVar23 = *plVar8;
          }
          pcVar14 = *(code **)(lVar23 + 0x38);
          plVar12 = plVar8;
          local_428 = plVar8;
          if (pcVar14 == FUN_144765e18) {
            plVar12 = (longlong *)plVar8[9];
            if (plVar12 == (longlong *)0x0) {
              plVar12 = (longlong *)plVar8[8];
              pcVar14 = *(code **)(*plVar12 + 0x420);
              if (pcVar14 != (code *)&LAB_144b24e8a) goto LAB_140c7a4fa;
              bVar21 = *(byte *)(plVar12 + 0x30);
            }
            else {
              pcVar14 = *(code **)(*plVar12 + 0x420);
              if (pcVar14 != (code *)&LAB_14497e108) goto LAB_140c7a4fa;
              bVar21 = *(byte *)(plVar12 + 0x2a);
            }
            bVar21 = (bVar21 & 0x10) >> 4;
          }
          else {
LAB_140c7a4fa:
            bVar21 = (*pcVar14)(plVar12);
          }
          uVar9 = FUN_144a64ef0(uVar5,*(undefined1 *)(param_1 + 0x80),
                                *(undefined1 *)(param_1 + 0x81));
          *(undefined8 *)(param_1 + 0x40) = uVar9;
          uVar9 = (**(code **)(**(longlong **)(param_2 + 0xb8) + 0x30))();
          memset(local_2c0,0,0x98);
          FUN_140c7a5e4();
          auStack_2b8[DAT_14c9c1c18] = &DAT_14c9c1bd0;
          auStack_258[DAT_14c9c1c18] = 0;
          if (*(char *)(param_1 + 0x80) == '\x06') {
            FUN_140b9f70e();
            puVar10 = &DAT_14c9c1f48;
          }
          else if (*(char *)(param_1 + 0x80) == '\x05') {
            FUN_1460c258c();
            puVar10 = &DAT_14c9c1e20;
          }
          else {
            FUN_140c7a700();
            puVar10 = &DAT_14c9c1cf8;
          }
          bVar28 = puVar10[0x48];
          auStack_2b8[bVar28] = puVar10;
          auStack_258[bVar28] = 0;
          local_338[0xc] = 0;
          local_338[0xd] = 0;
          local_338[10] = 0;
          local_338[0xb] = 0;
          local_338[8] = 0;
          local_338[9] = 0;
          local_338[6] = 0;
          local_338[7] = 0;
          local_338[4] = 0;
          local_338[5] = 0;
          local_338[2] = 0;
          local_338[3] = 0;
          local_338[0] = 0;
          local_338[1] = 0;
          cVar3 = FUN_14007744c(local_428,local_2c0,uVar9,local_338);
          param_3 = local_3e8;
          uVar22 = (uint)local_410;
          if (cVar3 != '\0') {
            local_3ec = 2 - (uint)((uVar1 >> 0xc & 1) != 0);
            if (bVar2 != 0) {
              local_3ec = 1;
            }
            bVar21 = (char)uVar1 < '\0' | bVar21;
            local_3f4 = CONCAT31(local_3f4._1_3_,bVar21);
            local_3f0 = 0;
            if (bVar21 == 0) {
              local_3f0 = 2 - (uint)((uVar1 & 0x40) == 0);
            }
            local_3d8 = local_338[0];
            if (local_338[2] == 0) {
              local_3d8 = 0;
            }
            local_3d0 = local_338[0];
            if (local_338[5] == 0) {
              local_3d0 = 0;
            }
            lVar23 = *(longlong *)(param_1 + 0x28);
            uVar22 = *(uint *)(param_2 + 0xe4);
            local_3b8 = DAT_14ca44d40;
            local_3b0 = DAT_14ca44d68;
            local_400 = local_338[2];
            local_418 = local_338[5];
            if (lVar23 != 0) {
              if (((uVar22 >> 0x18 & 1) != 0 && -1 < (int)param_5) &&
                 (*(char *)(lVar23 + 0x13821) == '\0')) {
                lVar13 = lVar23 + 0x3208;
                if (*(longlong *)(lVar23 + 0x3218) != 0) {
                  lVar13 = *(longlong *)(lVar23 + 0x3218);
                }
                if ((*(uint *)(lVar13 + (longlong)local_420 * 4) & (uint)local_410) == 0) {
                  lVar13 = lVar23 + 0x3228;
                  if (*(longlong *)(lVar23 + 0x3238) != 0) {
                    lVar13 = *(longlong *)(lVar23 + 0x3238);
                  }
                  if ((*(uint *)(lVar13 + (longlong)local_420 * 4) & (uint)local_410) == 0)
                  goto LAB_140c797de;
                  lVar13 = 0x31c8;
                }
                else {
                  lVar13 = 0x31d0;
                }
                local_3b0 = *(undefined8 *)(lVar23 + lVar13);
              }
LAB_140c797de:
              if (param_4 != (undefined8 *)0x0) {
                uVar5 = *(uint *)(param_4[0x43] + 0x158);
                if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar23 + 0x31c0))) {
                  puVar25 = &DAT_000031a8 + lVar23;
                  if (*(undefined1 **)(lVar23 + 0x31b8) != (undefined1 *)0x0) {
                    puVar25 = *(undefined1 **)(lVar23 + 0x31b8);
                  }
                  if ((*(uint *)(puVar25 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0)
                  {
                    local_3b8 = *(undefined8 *)
                                 (*(longlong *)(lVar23 + 0x3198) + (ulonglong)uVar5 * 8);
                  }
                }
              }
            }
            if (local_338[2] == 0) {
              local_3c0 = 0;
            }
            else {
              local_3c0 = (ulonglong)*(ushort *)(local_338[2] + 0xdc);
            }
            if (local_338[5] == 0) {
              local_410 = (undefined8 *)0x0;
            }
            else {
              local_410 = (undefined8 *)((ulonglong)*(uint *)(local_338[5] + 0xdc) << 0x10);
            }
            uVar5 = 0;
            if (param_4 == (undefined8 *)0x0) {
              local_3e0 = 0;
            }
            else {
              local_3e0 = param_4[0x43];
            }
            local_3c8 = (ulonglong)*(uint *)(param_4 + 0xc);
            local_420 = *(longlong **)(param_2 + 0xb8);
            local_170 = (longlong *)0x0;
            local_168 = 0x200000000;
            local_b0 = 0;
            local_a8 = 0;
            local_110 = 0;
            local_120 = 0;
            uStack_118 = 0;
            local_130 = 0;
            uStack_128 = 0;
            local_140 = 0;
            uStack_138 = 0;
            local_150 = 0;
            uStack_148 = 0;
            local_160 = (longlong *******)0x0;
            uStack_158 = 0;
            local_a4 = 7;
            local_98 = 0;
            local_78 = 0xffffffff;
            local_70 = 0;
            local_68 = 0;
            local_408 = param_4;
            if (local_428[3] != 0) {
              if ((*(byte *)(*(longlong *)(local_428[3] + 0x28) + 0x246) & 0x10) == 0) {
                uVar5 = 0;
              }
              else {
                cVar3 = (**(code **)(*local_428 + 0x358))();
                uVar5 = (uint)(byte)(cVar3 * '\x02' + 1);
                uVar22 = *(uint *)(param_2 + 0xe4);
              }
            }
            local_66 = *(undefined1 *)(param_1 + 0x78);
            local_19c = uVar22 >> 0xe & 7;
            uVar4 = 0;
            local_218 = 0;
            local_228 = 0;
            uStack_220 = 0;
            local_210 = 1;
            local_1e8 = 0;
            lStack_1e0 = 0;
            local_1f8 = 0;
            lStack_1f0 = 0;
            local_208 = 0;
            uStack_200 = 0;
            local_1d8 = 0xffffffff;
            uStack_1d4 = 0xffffffff;
            uStack_1d0 = 0xffffffff;
            uStack_1cc = 0xffffffff;
            uStack_1a0 = 0;
            local_1b8 = 0;
            local_1c8 = 0;
            uStack_1c0 = 0;
            local_19f = 1;
            local_198 = 0;
            local_190 = 0;
            uStack_1b0 = (undefined4)plVar7[10];
            uStack_1ac = *(undefined4 *)((longlong)plVar7 + 0x54);
            uStack_1a8 = (undefined4)plVar7[0xb];
            uStack_1a4 = *(undefined4 *)((longlong)plVar7 + 0x5c);
            local_358 = 0;
            uStack_350 = 0;
            local_390 = local_3d8;
            local_388 = local_418;
            local_380 = local_3d0;
            local_368 = 0;
            uStack_360 = 0;
            local_378 = 0;
            uStack_370 = 0;
            local_348 = 0;
            uStack_340 = 0;
            local_398 = local_400;
            local_64 = local_19c;
            FUN_144765e6c(&local_228,local_420[0x22]);
            FUN_1447662e4(local_180,&local_398);
            uVar17 = local_3e8;
            puVar15 = &DAT_14c9c0e10;
            if (local_3f0 == 2) {
              puVar15 = &DAT_14c9c0e28;
            }
            puVar19 = &DAT_14c9c0d68;
            if (local_3f0 == 2) {
              puVar19 = &DAT_14c9c0df8;
            }
            if ((char)local_3f4 != '\0') {
              puVar15 = &DAT_14c9c0e40;
            }
            puVar11 = &DAT_14c9c0db0;
            if ((char)local_3f4 == '\0') {
              puVar11 = puVar19;
            }
            if (local_3ec == 1) {
              puVar11 = puVar15;
            }
            uStack_1c0 = *puVar11;
            local_1c8 = *(undefined8 *)(param_1 + 0x40);
            local_1b8 = *(undefined8 *)(param_1 + 0x48);
            if (DAT_14ca84f32 == '\x01') {
              if (*(int *)(DAT_14ca620d8 + 4) == 0) {
                uVar4 = 0;
              }
              else {
                uVar22 = (**(code **)(*local_428 + 0x490))();
                if (uVar22 < 4) {
                  uVar4 = (undefined1)(0x5010400 >> ((byte)(uVar22 << 3) & 0x1f));
                }
                else {
                  uVar4 = 0;
                  if ((uVar22 < 7) && (DAT_14ca84f33 != '\0')) {
                    uVar4 = (undefined1)(0xa060900000000 >> ((byte)(uVar22 << 3) & 0x3f));
                  }
                }
              }
            }
            local_19f = CONCAT11(uVar4,(undefined1)local_19f);
            cVar3 = (**(code **)(*local_428 + 0x4a0))();
            if (cVar3 == '\0') {
              uVar4 = 0;
            }
            else {
              uVar4 = FUN_1449c014c(param_1);
            }
            local_19f = CONCAT11(local_19f._1_1_,uVar4);
            if ((DAT_14c760d84 != 0) && ((DAT_14ca84f5a & 1) != 0)) {
              FUN_144766928(&local_228);
            }
            FUN_144765fea(local_420,*(undefined4 *)(param_1 + 0x20));
            plVar8 = local_420;
            if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
               (DAT_14cafb358 == 2)) {
              uVar6 = *(undefined4 *)(param_1 + 8);
              uVar9 = (**(code **)(*local_420 + 0x30))(local_420);
              plVar12 = local_428;
              local_478._0_4_ = uVar6;
              FUN_1456c013a(&local_228,local_428,uVar9,local_408);
              uVar6 = *(undefined4 *)(param_1 + 8);
              (**(code **)(*plVar8 + 0x30))(plVar8);
              local_478 = (longlong *)CONCAT44(local_478._4_4_,uVar6);
              FUN_1456c0257(&local_228,plVar12);
            }
            lVar23 = local_418;
            local_3f4 = uVar5 + 4;
            if ((char)local_420[0x25] == -1) {
              local_3f4 = uVar5;
            }
            local_3f4 = local_3f4 & 0xff;
            local_67 = (char)local_420[0x25];
            if (local_400 == 0) {
              lVar13 = 0;
            }
            else {
              if ((local_110 & 1) == 0) {
                local_3a8 = 0x58;
                local_3a0 = (longlong *******)0x0;
                lVar13 = 0;
              }
              else {
                plVar8 = local_170;
                if (local_170 == (longlong *)0x0) {
                  plVar8 = local_180;
                }
                local_3a8 = *plVar8;
                uVar16 = *(ulonglong *)(local_3a8 + 0x30);
                if ((uVar16 & 1) != 0) {
                  uVar16 = ((longlong)uVar16 >> 0x18) + local_3a8 + 0x30;
                }
                iVar27 = *(int *)(local_3a8 + 0x28);
                iVar26 = 0;
                if ((longlong)*(int *)(local_3a8 + 0x38) != 0) {
                  lVar13 = 0;
                  iVar26 = 0;
                  do {
                    iVar26 = iVar26 + (uint)*(ushort *)(uVar16 + 2 + lVar13);
                    lVar13 = lVar13 + 0x18;
                  } while ((longlong)*(int *)(local_3a8 + 0x38) * 0x18 != lVar13);
                }
                iVar24 = iVar27 + 0xe;
                if (-1 < iVar27 + 7) {
                  iVar24 = iVar27 + 7;
                }
                local_3a0 = (longlong *******)&local_160;
                if (0x50 < local_110._2_2_) {
                  local_3a0 = local_160;
                }
                lVar13 = (longlong)
                         (int)(iVar26 + (iVar24 >> 3) +
                                        (*(int *)(local_3a8 + 0x18) + *(int *)(local_3a8 + 8) +
                                        iVar27) * 8 + 7U & 0xfffffff8);
              }
              local_460 = &local_3a8;
              local_468 = &local_3b8;
              local_470 = local_428;
              local_478 = plVar7;
              FUN_14474308c(local_400,*(undefined8 *)(param_1 + 0x18),
                            *(undefined4 *)(param_1 + 0x20));
            }
            if (lVar23 != 0) {
              uVar16 = (ulonglong)(local_110 & 0xf) - (ulonglong)(local_110 >> 1 & 5);
              uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333);
              uVar16 = ((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar16 < 0x100000000000000) {
                local_3a8 = 0x58;
                local_3a0 = (longlong *******)0x0;
              }
              else {
                plVar8 = local_180;
                if (local_170 != (longlong *)0x0) {
                  plVar8 = local_170;
                }
                local_3a0 = (longlong *******)&local_160;
                if (0x50 < local_110._2_2_) {
                  local_3a0 = local_160;
                }
                local_3a0 = (longlong *******)((longlong)local_3a0 + lVar13);
                local_3a8 = plVar8[(uVar16 >> 0x38) - 1];
              }
              local_460 = &local_3a8;
              local_468 = &local_3b8;
              local_470 = local_428;
              local_478 = plVar7;
              FUN_14474308c(lVar23,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
            }
            plVar7 = (longlong *)(longlong)*(int *)(param_2 + 0xb0);
            if (0 < (longlong)plVar7) {
              local_410 = (undefined8 *)((ulonglong)local_410 | local_3c0 | local_3c8 << 0x31);
              plVar8 = (longlong *)0x0;
              local_428 = plVar7;
              do {
                if ((uVar17 >> ((ulonglong)plVar8 & 0x3f) & 1) != 0) {
                  lVar23 = *(longlong *)(param_2 + 0xa8);
                  if (*(longlong *)(param_2 + 0xa8) == 0) {
                    lVar23 = param_2;
                  }
                  plVar7 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
                  uVar22 = *(uint *)(lVar23 + 0x7c + (longlong)plVar8 * 0xa8);
                  bVar21 = (byte)(uVar22 >> 8);
                  bVar28 = (bVar21 & 8) + (char)local_3f4;
                  bVar2 = bVar28;
                  if (((uVar22 >> 0xc & 1) != 0) &&
                     (bVar2 = bVar28 + 0x10, *(int *)(param_1 + 0x20) < 2)) {
                    bVar2 = bVar28;
                  }
                  lVar23 = lVar23 + (longlong)plVar8 * 0xa8;
                  if (local_400 == 0) {
                    uVar22 = 0;
                  }
                  else {
                    if ((*(byte *)(plVar7 + 0xe) & 1) == 0) {
                      local_3a0 = (longlong *******)0x0;
                      local_3a8 = 0x58;
                      uVar22 = 0;
                    }
                    else {
                      plVar12 = (longlong *)plVar7[2];
                      if ((longlong *)plVar7[2] == (longlong *)0x0) {
                        plVar12 = plVar7;
                      }
                      local_3a8 = *plVar12;
                      uVar17 = *(ulonglong *)(local_3a8 + 0x30);
                      if ((uVar17 & 1) != 0) {
                        uVar17 = ((longlong)uVar17 >> 0x18) + local_3a8 + 0x30;
                      }
                      iVar27 = 0;
                      if ((longlong)*(int *)(local_3a8 + 0x38) != 0) {
                        lVar13 = 0;
                        iVar27 = 0;
                        do {
                          iVar27 = iVar27 + (uint)*(ushort *)(uVar17 + 2 + lVar13);
                          lVar13 = lVar13 + 0x18;
                        } while ((longlong)*(int *)(local_3a8 + 0x38) * 0x18 != lVar13);
                      }
                      iVar26 = *(int *)(local_3a8 + 0x28);
                      iVar24 = iVar26 + 0xe;
                      if (-1 < iVar26 + 7) {
                        iVar24 = iVar26 + 7;
                      }
                      if (*(ushort *)((longlong)plVar7 + 0x72) < 0x51) {
                        local_3a0 = (longlong *******)(plVar7 + 4);
                      }
                      else {
                        local_3a0 = (longlong *******)plVar7[4];
                      }
                      uVar22 = iVar27 + (iVar24 >> 3) +
                                        (*(int *)(local_3a8 + 8) + *(int *)(local_3a8 + 0x18) +
                                        iVar26) * 8 + 7U & 0xfffffff8;
                    }
                    local_438 = plVar7 + 0xf;
                    local_440 = &local_3a8;
                    local_448 = &local_3b8;
                    local_460 = local_408;
                    local_468 = (undefined8 *)
                                CONCAT44(local_468._4_4_,*(undefined4 *)(param_1 + 0x20));
                    local_478 = local_420;
                    local_470 = (longlong *)((ulonglong)local_470 & 0xffffffffffffff00);
                    local_458 = (undefined8 *)param_2;
                    local_450 = (longlong *)lVar23;
                    FUN_1456bf974(local_400,*(undefined8 *)(local_3d8 + 0x18),
                                  *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
                  }
                  if (local_418 != 0) {
                    uVar17 = (ulonglong)(*(ushort *)(plVar7 + 0xe) & 0xf) -
                             (ulonglong)(*(ushort *)(plVar7 + 0xe) >> 1 & 5);
                    uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333);
                    uVar17 = ((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                    if (uVar17 < 0x100000000000000) {
                      local_3a8 = 0x58;
                      local_3a0 = (longlong *******)0x0;
                    }
                    else {
                      plVar12 = (longlong *)plVar7[2];
                      if ((longlong *)plVar7[2] == (longlong *)0x0) {
                        plVar12 = plVar7;
                      }
                      if (*(ushort *)((longlong)plVar7 + 0x72) < 0x51) {
                        plVar20 = plVar7 + 4;
                      }
                      else {
                        plVar20 = (longlong *)plVar7[4];
                      }
                      local_3a8 = plVar12[(uVar17 >> 0x38) - 1];
                      local_3a0 = (longlong *******)((longlong)(int)uVar22 + (longlong)plVar20);
                    }
                    local_438 = plVar7 + 0xf;
                    local_440 = &local_3a8;
                    local_448 = &local_3b8;
                    local_460 = local_408;
                    local_468 = (undefined8 *)
                                CONCAT44(local_468._4_4_,*(undefined4 *)(param_1 + 0x20));
                    local_478 = local_420;
                    local_470 = (longlong *)((ulonglong)local_470 & 0xffffffffffffff00);
                    local_458 = (undefined8 *)param_2;
                    local_450 = (longlong *)lVar23;
                    FUN_1456bf974(local_418,*(undefined8 *)(local_3d0 + 0x18),
                                  *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
                  }
                  uVar22 = 0;
                  local_3a0 = (longlong *******)CONCAT44(local_3a0._4_4_,0x7fffffff);
                  bVar28 = DAT_14ca96500;
                  if (*(int *)(param_1 + 0x20) == 1) {
joined_r0x000140c7a4bf:
                    if (bVar28 != 0) {
LAB_140c7a17f:
                      uVar5 = *(uint *)(lVar23 + 0x54) & 7;
                      if (uVar5 == 0) {
                        uVar22 = *(uint *)(local_3e0 + 0x15c);
                        uVar5 = *(uint *)(local_3e0 + 0x204) & 0x7fffffff;
                      }
                      else {
                        if ((uVar5 != 1) || (*(longlong *)(param_1 + 0x28) == 0))
                        goto LAB_140c7a1ae;
                        uVar22 = *(uint *)(lVar23 + 0xa0) | 0x80000000;
                        uVar5 = *(uint *)(lVar23 + 0xa4) | 0x80000000;
                      }
                      local_3a0 = (longlong *******)CONCAT44(local_3a0._4_4_,uVar5);
                    }
                  }
                  else if (((2 < *(int *)(param_1 + 0x20)) &&
                           (lVar13 = (ulonglong)DAT_14ca85550 * 0x3c,
                           *(longlong *)(&DAT_14ca814b0 + lVar13) != DAT_14ca81490)) &&
                          (DAT_14ca85550 != 0xc)) {
                    if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar13 + 3) & 0x10) != 0) {
                      bVar28 = *(byte *)((longlong)&DAT_14ca814c8 + lVar13 + 3) & 0x20;
                      goto joined_r0x000140c7a4bf;
                    }
                    goto LAB_140c7a17f;
                  }
LAB_140c7a1ae:
                  if (local_3e0 == 0) {
                    uVar6 = 0xffffffff;
                  }
                  else {
                    uVar6 = *(undefined4 *)(local_3e0 + 0x158);
                  }
                  local_3a8 = CONCAT44(uVar6,uVar22);
                  local_450 = &local_398;
                  local_458 = &local_228;
                  local_460 = (undefined8 *)CONCAT71(local_460._1_7_,bVar2 | bVar21 & 0x20);
                  local_468 = local_410;
                  local_470 = (longlong *)CONCAT44(local_470._4_4_,local_3f0);
                  local_478 = (longlong *)CONCAT44(local_478._4_4_,local_3ec);
                  local_448 = plVar7;
                  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
                            (*(longlong **)(param_1 + 0x30),param_2,(ulonglong)plVar8 & 0xffffffff);
                  plVar7 = local_428;
                  uVar17 = local_3e8;
                }
                plVar8 = (longlong *)((longlong)plVar8 + 1);
              } while (plVar8 != plVar7);
            }
            if (lStack_1e0 != 0) {
              FUN_140021284();
            }
            if (local_1e8 != 0) {
              FUN_140021284();
            }
            if (lStack_1f0 != 0) {
              FUN_140021284();
            }
            if (local_1f8 != 0) {
              FUN_140021284();
            }
            if (local_b0 != 0) {
              FUN_1400020a8();
            }
            if ((0x50 < local_110._2_2_) && (local_160 != (longlong *******)0x0)) {
              FUN_1400020a8();
            }
            local_110 = local_110 & 0xffff;
            local_160 = (longlong *******)0x0;
            if (local_170 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            break;
          }
        }
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x38))(plVar7,*(undefined4 *)(param_1 + 0x20));
      } while (plVar7 != (longlong *)0x0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c7a5e4 FUN_140c7a5e4 body=284 status=ok
// SIG undefined FUN_140c7a5e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140c7a5e4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c1c78) {
    FUN_144b3d300(&DAT_14c9c1c78);
    if (DAT_14c9c1c78 == -1) {
      FUN_14578b072();
      FUN_140db5666(&DAT_14c9c1bd0,2,&DAT_14c9c1b68,L"FMeshDecalsVS",
                    L"/Engine/Private/MeshDecals.usf",L"MainVS",0,1,FUN_147144e24,FUN_147144dfc,
                    FUN_140e6dc5a,&LAB_147144df8,&LAB_14712ac0c,&LAB_14712ac08,0x108,0);
      _DAT_14c9c1bd0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142ba5e2b);
      _Init_thread_footer(&DAT_14c9c1c78);
    }
  }
  return &DAT_14c9c1bd0;
}



// FUNCTION 140c7a700 FUN_140c7a700 body=284 status=ok
// SIG undefined FUN_140c7a700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140c7a700(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c1da0) {
    FUN_144b3d300(&DAT_14c9c1da0);
    if (DAT_14c9c1da0 == -1) {
      FUN_14578af2e();
      FUN_140db5666(&DAT_14c9c1cf8,2,&DAT_14c9c1c90,L"FMeshDecalsPS",
                    L"/Engine/Private/MeshDecals.usf",L"MainPS",3,1,FUN_147144ed6,FUN_147144eae,
                    FUN_14175ea42,&LAB_147144eaa,&LAB_14712ac0c,&LAB_14712ac08,0x108,0);
      _DAT_14c9c1cf8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142ba5e37);
      _Init_thread_footer(&DAT_14c9c1da0);
    }
  }
  return &DAT_14c9c1cf8;
}



// FUNCTION 140c7a828 FUN_140c7a828 body=137 status=ok
// SIG undefined FUN_140c7a828(void)

void FUN_140c7a828(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e2cb8c(param_1,iVar1);
    }
    FUN_140c7a8b1((longlong)iVar1 * 0x50 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146e2cc20(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146e2cc88(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140c7a8b1 FUN_140c7a8b1 body=56 status=ok
// SIG undefined FUN_140c7a8b1(void)

void FUN_140c7a8b1(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x48);
    do {
      *(undefined8 *)(puVar1 + -10) = 0;
      puVar1[-8] = 0;
      *(undefined8 *)(puVar1 + -0x12) = 0;
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *(undefined8 *)(puVar1 + -7) = 0xffffffff00000080;
      puVar1[-5] = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140c7a916 FUN_140c7a916 body=469 status=ok
// SIG undefined FUN_140c7a916(void)

void FUN_140c7a916(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x1c8);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_140c7aaec();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      cVar1 = *(char *)(param_1 + 0x2831);
      if (cVar1 == '\x02') {
        (**(code **)(*plVar2 + 0x720))(plVar2,3);
        (**(code **)(*plVar2 + 0x728))(plVar2,DAT_14cacfd60,1);
        (**(code **)(*plVar2 + 0x690))(plVar2,0);
        (**(code **)(*plVar2 + 0x878))(plVar2,0);
        *(undefined1 *)(plVar2 + 0xec) = 0;
        (**(code **)(*plVar2 + 0x928))(plVar2);
        FUN_1406413d0(param_1,1);
        return;
      }
      if (cVar1 != '\0') {
        if (cVar1 == '\x01') {
          FUN_1406413d0(param_1,0);
          (**(code **)(*plVar2 + 0x690))(plVar2,0);
          (**(code **)(*plVar2 + 0x878))(plVar2,0);
          (**(code **)(*plVar2 + 0x720))(plVar2,0);
          (**(code **)(*plVar2 + 0x728))(plVar2,DAT_14cad0f30,1);
        }
        else {
          if (cVar1 != '\x03') {
            return;
          }
          (**(code **)(*plVar2 + 0x690))(plVar2,0);
          (**(code **)(*plVar2 + 0x878))(plVar2,0);
          (**(code **)(*plVar2 + 0x720))(plVar2,0);
          (**(code **)(*plVar2 + 0x728))(plVar2,DAT_14cad0f30,1);
          *(undefined1 *)(plVar2 + 0xec) = 1;
        }
                    /* WARNING: Could not recover jumptable at 0x000140c7aa8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x928))(plVar2);
        return;
      }
      FUN_1406413d0(param_1,0);
      (**(code **)(*plVar2 + 0x870))(plVar2);
      (**(code **)(*plVar2 + 0x720))(plVar2,3);
      (**(code **)(*plVar2 + 0x728))(plVar2,DAT_14cacfd60,1);
      (**(code **)(*plVar2 + 0x690))(plVar2,1);
                    /* WARNING: Could not recover jumptable at 0x000140c7aa31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x878))(plVar2,*(undefined1 *)(param_1 + 0x2830));
      return;
    }
  }
  return;
}



// FUNCTION 140c7aaec FUN_140c7aaec body=228 status=ok
// SIG undefined FUN_140c7aaec(void)

longlong FUN_140c7aaec(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5c880 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144b223ce;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432411d6;
    local_38 = &LAB_14868af43;
    local_40 = &LAB_140949e8b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xa10;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDestructibleComponent",&DAT_14cb5c880,FUN_1464d6cf4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5c880;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c7abd2 FUN_140c7abd2 body=313 status=ok
// SIG undefined FUN_140c7abd2(void)

void FUN_140c7abd2(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = *param_2;
    if ((uVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar6);
    }
    uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar4 + uVar6 * 4);
    if (iVar5 != -1) {
      puVar8 = (ulonglong *)((longlong)plVar4 + uVar6 * 4);
      bVar2 = DAT_14c950c29;
      do {
        puVar7 = (ulonglong *)((longlong)iVar5 * 0x70 + *param_1);
        uVar6 = *param_2;
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        uVar1 = *puVar7;
        if (((bVar2 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar2 = DAT_14c950c29;
        }
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        if (uVar1 == uVar6) {
          FUN_140c7ad0c(param_1,(int)*puVar8);
          return;
        }
        iVar5 = (int)puVar7[0xd];
        puVar8 = puVar7 + 0xd;
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 140c7ad0c FUN_140c7ad0c body=145 status=ok
// SIG undefined FUN_140c7ad0c(void)

void FUN_140c7ad0c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x70;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x6c + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x70 + 0x68);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x68);
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x30 + lVar2) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(lVar1 + lVar2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1402a5e54(param_1,param_2);
  return;
}



// FUNCTION 140c7ad9e FUN_140c7ad9e body=744 status=ok
// SIG undefined FUN_140c7ad9e(void)

longlong * FUN_140c7ad9e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)FUN_1447262c2(param_3);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cb1c498 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_147e36893;
      local_60 = FUN_146420564;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
    }
    plVar2 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb1c498);
    if (plVar2 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      if (DAT_14cb1c498 == 0) {
        local_50 = &local_38;
        local_38 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_147e36893;
        local_60 = FUN_146420564;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
      }
      plVar3 = (longlong *)FUN_144718840(plVar2,DAT_14cb1c498);
      lVar4 = 0;
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    uVar5 = FUN_1401b0f18();
    plVar2 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar5);
    if (plVar2 != (longlong *)0x0) {
      uVar5 = FUN_1401b0f18();
      plVar6 = (longlong *)FUN_144718840(plVar2,uVar5);
      plVar3 = (longlong *)0x0;
      if ((plVar2 == plVar6) || (plVar6 == (longlong *)0x0)) goto LAB_140c7af17;
      lVar7 = (**(code **)(*plVar6 + 0x28))();
      plVar2 = *(longlong **)(lVar7 + 0xd8);
      if (plVar2 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar2 + 8))(plVar2);
        lVar8 = FUN_140c7b088();
        if ((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) {
          lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8);
          if (lVar7 != lVar8 + 0x30) {
            plVar2 = (longlong *)0x0;
          }
          plVar3 = (longlong *)0x0;
          if ((lVar4 == 0) || (plVar3 = (longlong *)0x0, lVar7 != lVar8 + 0x30)) goto LAB_140c7af17;
          lVar7 = FUN_14058d91e(param_1 + 0x10);
          if (lVar7 != 0) {
            lVar4 = *(longlong *)(lVar4 + 0x140);
            plVar3 = (longlong *)FUN_14058d91e(param_1 + 0x10);
            uVar5 = FUN_140c7b0c2(plVar2);
            lVar7 = (**(code **)(*plVar3 + 0x28))(plVar3,plVar1,uVar5);
            plVar3 = (longlong *)(ulonglong)(lVar4 == lVar7);
            goto LAB_140c7af17;
          }
        }
      }
    }
  }
  plVar3 = (longlong *)0x0;
LAB_140c7af17:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c7b088 FUN_140c7b088 body=57 status=ok
// SIG undefined FUN_140c7b088(void)

void FUN_140c7b088(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1b718 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1b718 = FUN_140002ddd(FUN_14641c018,uVar1,L"GbxNavActorDef");
  }
  return;
}



// FUNCTION 140c7b0c2 FUN_140c7b0c2 body=340 status=ok
// SIG undefined FUN_140c7b0c2(void)

longlong FUN_140c7b0c2(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x100) == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0x110);
    if (lVar5 == 0) {
      uVar4 = FUN_1410780a4();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x110) = lVar5;
    }
    plVar1 = (longlong *)(param_1 + 0x108);
    lVar6 = *(longlong *)(param_1 + 0x118);
    if (lVar6 != 0) {
LAB_140c7b11d:
      if (lVar5 == 0) {
        uVar4 = FUN_1410780a4();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x110) = lVar5;
        lVar6 = *(longlong *)(param_1 + 0x118);
        if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            lVar6 = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar4,plVar1);
          }
          *(longlong *)(param_1 + 0x118) = lVar6;
        }
      }
      return lVar6 + 0x18;
    }
    if ((lVar5 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x118) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(param_1 + 0x118) = lVar6;
        if (lVar6 != 0) {
          lVar5 = *(longlong *)(param_1 + 0x110);
          goto LAB_140c7b11d;
        }
      }
    }
  }
  return param_1 + 0x98;
}



// FUNCTION 140c7b224 FUN_140c7b224 body=54 status=ok
// SIG undefined FUN_140c7b224(void)

undefined8 * FUN_140c7b224(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1f93b0;
  FUN_140485912(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c7b25a FUN_140c7b25a body=41 status=ok
// SIG undefined FUN_140c7b25a(void)

void FUN_140c7b25a(longlong param_1,undefined8 param_2)

{
  FUN_140c8307c();
  FUN_140c7b284(param_1 + 0x1488,param_2);
  return;
}



// FUNCTION 140c7b284 FUN_140c7b284 body=277 status=ok
// SIG undefined FUN_140c7b284(void)

void FUN_140c7b284(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_140789e1e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      if (*(longlong *)(param_1 + 0x60) == 0) {
        if (DAT_14c950c29 != '\0') {
          FUN_1456cec3c(param_2);
        }
        iVar1 = *(int *)(param_1 + 0x78);
        *(uint *)(param_1 + 0x78) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x7c) < iVar1 + 1U) {
          FUN_1418660f4((longlong *)(param_1 + 0x70),iVar1);
        }
        *(longlong **)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 8) = param_2;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
          return;
        }
      }
      else {
        if (DAT_14c950c29 != '\0') {
          FUN_1456cec3c(param_2);
        }
        iVar1 = *(int *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x38) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
          FUN_1418660f4((longlong *)(param_1 + 0x30),iVar1);
        }
        *(longlong **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = param_2;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        FUN_140a689fe(param_1,param_2);
        if (*(char *)(param_1 + 0x6a) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000140c7b326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_2 + 0x2d8))(param_2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140c7b4a2 FUN_140c7b4a2 body=736 status=ok
// SIG undefined FUN_140c7b4a2(void)

ulonglong FUN_140c7b4a2(longlong *param_1,int param_2,undefined8 param_3,uint param_4,
                       undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 unaff_RBP;
  undefined7 uVar10;
  longlong lVar11;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong local_128;
  ulonglong uStack_120;
  longlong local_c8;
  undefined2 *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  int local_9c;
  undefined2 *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined4 local_80;
  int local_7c;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar10 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar9 = CONCAT71(uVar10,1);
  if ((param_4 & 2) != 0) goto LAB_140c7b5b4;
  cVar3 = (**(code **)(*param_1 + 8))();
  if (cVar3 != '\0') {
    FUN_140e45f8a(&local_128,param_1 + 8);
    cVar3 = FUN_140c7b784(&local_128,param_2,param_4,param_5);
    FUN_140060f6a(local_78);
    local_98 = &DAT_14a171d50;
    local_80 = 0;
    if (local_7c != 0) {
      FUN_140115c12(&local_88,0);
    }
    local_90 = 0;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    local_b8 = &DAT_14a171d50;
    local_a0 = 0;
    if (local_9c != 0) {
      FUN_140115c12(&local_a8,0);
    }
    local_b0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (cVar3 != '\0') goto LAB_140c7b5b4;
  }
  if (param_1[1] == 0) {
    if (param_1[5] != 0) {
      iVar4 = (int)param_1[2];
      goto LAB_140c7b626;
    }
  }
  else {
    iVar4 = (int)param_1[2];
    if ((iVar4 - 1U < 0xfffffffe) || (param_1[5] != 0)) {
LAB_140c7b626:
      param_1 = param_1 + 1;
      if (iVar4 == 0x1010) {
        lVar7 = FUN_14005ef80(param_1);
        if (lVar7 == 0) {
          lVar7 = FUN_140cde26e(param_1);
          if (lVar7 == 0) goto LAB_140c7b63e;
          iVar4 = FUN_14005f6be(lVar7,param_5,param_4 & 0xffffff01);
        }
        else {
          iVar4 = FUN_14005f32a(lVar7,param_5,param_4 & 0xffffff01);
        }
        if (iVar4 <= param_2) goto LAB_140c7b5b4;
      }
      else {
        plVar6 = (longlong *)FUN_140372928(param_1);
        if (plVar6 != (longlong *)0x0) {
          local_128 = 0;
          uStack_120 = 0;
          (**(code **)(*plVar6 + 0x20))(plVar6,&local_128,param_6);
          lVar7 = local_128;
          lVar8 = (longlong)(int)uStack_120;
          if (lVar8 == 0) {
            uVar9 = 0;
            bVar2 = true;
          }
          else {
            lVar11 = 0;
            do {
              lVar1 = *(longlong *)(lVar7 + lVar11);
              if (lVar1 != 0) {
                uVar5 = FUN_14005ff6c(lVar1,param_5,param_4 & 0xffffff01);
                local_138 = param_5;
                cVar3 = FUN_14005edf0(lVar1 + 0x48,param_2,uVar5,param_4);
                if (cVar3 != '\0') {
                  bVar2 = false;
                  goto LAB_140c7b71f;
                }
              }
              lVar11 = lVar11 + 0xd0;
            } while (lVar8 * 0xd0 - lVar11 != 0);
            bVar2 = true;
LAB_140c7b71f:
            uVar9 = uStack_120 & 0xffffffff;
          }
          FUN_140372266(local_128,uVar9);
          if (local_128 != 0) {
            FUN_1400020a8();
          }
          if (!bVar2) {
            uVar9 = CONCAT71(uVar10,1);
            goto LAB_140c7b5b4;
          }
        }
      }
    }
  }
LAB_140c7b63e:
  uVar9 = 0;
LAB_140c7b5b4:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 140c7b784 FUN_140c7b784 body=1935 status=ok
// SIG undefined FUN_140c7b784(void)

undefined4 FUN_140c7b784(longlong param_1,int param_2,uint param_3,longlong **param_4)

{
  uint uVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  longlong *plVar8;
  ulonglong uVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong **pplVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong **_Src;
  longlong **pplVar19;
  longlong lVar20;
  undefined1 auStack_108 [40];
  int local_e0;
  undefined4 local_dc;
  longlong **local_d8;
  uint local_cc;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong **local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  int local_68;
  undefined4 uStack_64;
  int local_5c;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = param_2;
  local_cc = param_3;
  if ((param_3 & 2) == 0) {
    lVar12 = *(longlong *)(param_1 + 8);
    if (lVar12 == 0) {
      local_dc = 0;
    }
    else {
      lVar16 = DAT_14cb848c0 + 0x420;
      local_b8 = *(longlong *)(param_1 + 0x10);
      local_c8 = *(longlong *)(param_1 + 0x18);
      local_58 = (longlong *)0x0;
      uStack_50 = 1;
      pplVar15 = (longlong **)0x0;
      FUN_140c7c10c(&local_58,0);
      *local_58 = lVar16;
      local_58[1] = lVar12;
      local_a8 = param_1 + 0x70;
      local_d8 = param_4;
      local_c0 = param_1;
      do {
        lVar12 = (longlong)(int)uStack_50;
        local_dc = (undefined4)CONCAT71((int7)((ulonglong)pplVar15 >> 8),0 < lVar12);
        if (lVar12 < 1) break;
        pplVar15 = (longlong **)(lVar12 * 0x10);
        plVar4 = (longlong *)(local_58 + -2)[lVar12 * 2];
        lVar12 = (local_58 + -1)[lVar12 * 2];
        uStack_50 = CONCAT44(uStack_50._4_4_,(int)uStack_50 + -1);
        lVar16 = *plVar4;
        if (0 < *(int *)(lVar16 + 0x20)) {
          lVar20 = lVar12 + 0x20;
          lVar18 = 0;
          local_a0 = lVar20;
          do {
            plVar17 = (longlong *)(lVar18 * 8 + *(longlong *)(lVar16 + 0x18));
            if (lVar12 == 0) {
              local_5c = 1;
LAB_140c7b8fe:
              plVar5 = (longlong *)*plVar17;
              if ((longlong)(int)plVar5[2] == 0) {
                if ((undefined8 *)*plVar5 == (undefined8 *)0x0) {
                  local_70 = (longlong *)0x0;
                }
                else {
                  local_70 = *(longlong **)*plVar5;
                }
                pplVar15 = &local_70;
                lVar16 = FUN_140cde484(local_c0,pplVar15);
                if (lVar16 == 0) {
                  if (*(undefined8 **)*plVar17 == (undefined8 *)0x0) {
                    local_78 = (longlong *)0x0;
                  }
                  else {
                    local_78 = (longlong *)**(undefined8 **)*plVar17;
                  }
                  pplVar15 = &local_78;
                  FUN_145795b53(&local_70,pplVar15);
                  plVar8 = local_70;
                  plVar5 = (longlong *)CONCAT44(uStack_64,local_68);
                  if (plVar5 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = plVar5 + 1;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)*plVar2 == 0) {
                      (**(code **)*plVar5)(plVar5);
                      LOCK();
                      piVar3 = (int *)((longlong)plVar5 + 0xc);
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      if (*piVar3 == 0) {
                        (**(code **)(*plVar5 + 0x10))(plVar5);
                      }
                    }
                  }
                  param_4 = local_d8;
                  lVar20 = local_a0;
                  if (plVar8 == (longlong *)0x0) goto LAB_140c7b8b8;
                }
                uVar9 = uStack_50;
                iVar11 = (int)uStack_50;
                uVar1 = (int)uStack_50 + 1;
                uStack_50 = CONCAT44(uStack_50._4_4_,uVar1);
                if (uStack_50._4_4_ < uVar1) {
                  pplVar15 = (longlong **)(uVar9 & 0xffffffff);
                  FUN_140c7c10c(&local_58,pplVar15);
                }
                local_58[(longlong)iVar11 * 2] = (longlong)plVar17;
                local_58[(longlong)iVar11 * 2 + 1] = lVar16;
                lVar20 = local_a0;
              }
              else {
                plVar17 = (longlong *)plVar5[1];
                local_90 = plVar17;
                local_88 = (longlong)(int)plVar5[2];
                do {
                  lVar16 = *plVar17;
                  lVar20 = (ulonglong)*(ushort *)(lVar16 + 0x386) * 0x20;
                  local_80 = plVar17;
                  if (*(longlong *)(*(longlong *)(DAT_14cb848c0 + 0x3a8) + 8 + lVar20) != 0) {
                    pplVar15 = (longlong **)(*(longlong *)(DAT_14cb848c0 + 0x3a8) + lVar20);
                    if ((longlong)*(int *)(pplVar15 + 3) != 0) {
                      lVar20 = 0;
                      do {
                        if (*(longlong *)((longlong)pplVar15[2] + lVar20) != 0) {
                          cVar10 = FUN_1405d595e(local_a8);
                          if (cVar10 != '\0') goto LAB_140c7ba82;
                          break;
                        }
                        lVar20 = lVar20 + 8;
                      } while ((longlong)*(int *)(pplVar15 + 3) * 8 != lVar20);
                    }
                  }
                  pplVar19 = param_4;
                  iVar11 = FUN_14005f6be(lVar16,param_4);
                  pplVar15 = pplVar19;
                  if (iVar11 <= local_e0) {
                    if ((local_b8 == 0) || (lVar20 = FUN_140a2d0dc(lVar16), lVar20 == 0)) {
LAB_140c7ba12:
                      local_70 = (longlong *)0x0;
                      local_68 = *(int *)(lVar16 + 0x410);
                      lVar20 = (longlong)local_68;
                      _Src = *(longlong ***)(lVar16 + 0x408);
                      if (lVar20 == 0) {
                        uStack_64 = 0;
                        bVar7 = true;
                        bVar6 = false;
                        pplVar15 = pplVar19;
                      }
                      else {
                        FUN_140c7c212(&local_70,local_68,0);
                        memcpy(local_70,_Src,lVar20 << 3);
                        if ((longlong)local_68 == 0) {
LAB_140c7bdff:
                          bVar6 = false;
                          bVar7 = true;
                          pplVar15 = _Src;
                        }
                        else {
                          if (*(longlong *)(lVar16 + 0x268) == 0) {
                            local_b0 = local_70 + local_68;
                            lVar16 = 0;
                            plVar17 = local_70;
                          }
                          else {
                            pplVar15 = (longlong **)(lVar16 + 0x268);
                            lVar16 = FUN_140cde484(local_c0,pplVar15);
                            if ((longlong)local_68 == 0) {
                              bVar7 = false;
                              bVar6 = true;
                              goto LAB_140c7ba57;
                            }
                            local_b0 = local_70 + local_68;
                            plVar17 = local_70;
                          }
                          do {
                            lVar20 = *plVar17;
                            lVar13 = (ulonglong)*(ushort *)(lVar20 + 0x15a) * 0x20;
                            if (*(longlong *)(*(longlong *)(DAT_14cb848c0 + 0x3a8) + 8 + lVar13) !=
                                0) {
                              pplVar15 = (longlong **)
                                         (*(longlong *)(DAT_14cb848c0 + 0x3a8) + lVar13);
                              if ((longlong)*(int *)(pplVar15 + 3) != 0) {
                                lVar13 = 0;
                                do {
                                  if (*(longlong *)((longlong)pplVar15[2] + lVar13) != 0) {
                                    cVar10 = FUN_1405d595e(local_a8);
                                    if (cVar10 != '\0') goto LAB_140c7bbd9;
                                    break;
                                  }
                                  lVar13 = lVar13 + 8;
                                } while ((longlong)*(int *)(pplVar15 + 3) * 8 != lVar13);
                              }
                            }
                            _Src = local_d8;
                            iVar11 = FUN_14005f32a(lVar20,local_d8);
                            pplVar15 = _Src;
                            if (iVar11 <= local_e0) {
                              if (lVar16 == 0) {
LAB_140c7bb26:
                                if ((local_c8 == 0) ||
                                   ((lVar20 = FUN_14087df18(lVar20), lVar20 == 0 ||
                                    (*(longlong *)(lVar20 + 0x208) == 0)))) goto LAB_140c7bdff;
                                _Src = (longlong **)(lVar20 + 0x208);
                                lVar20 = local_c8 + 0x20;
                                lVar14 = FUN_140c7c082(local_c8 + 8);
                                lVar13 = lVar14 + 0x30;
                                if (lVar14 == 0) {
                                  lVar13 = lVar20;
                                }
                                pplVar15 = _Src;
                                cVar10 = FUN_140cde234(lVar13,_Src);
                                if (cVar10 != '\0') {
                                  local_78 = (longlong *)CONCAT44(local_78._4_4_,1);
                                  cVar10 = FUN_140c7bf14(local_c8,_Src,local_d8,&local_78);
                                  if ((cVar10 == '\0') ||
                                     (pplVar15 = _Src, (int)local_78 <= local_e0))
                                  goto LAB_140c7bdff;
                                }
                              }
                              else if (*(longlong *)(lVar20 + 0x140) != 0) {
                                local_98 = (longlong **)(lVar20 + 0x140);
                                lVar14 = FUN_140c7c082(lVar16 + 8);
                                lVar13 = lVar14 + 0x30;
                                if (lVar14 == 0) {
                                  lVar13 = lVar16 + 0x20;
                                }
                                pplVar15 = local_98;
                                cVar10 = FUN_140cde234(lVar13,local_98);
                                if (cVar10 != '\0') {
                                  local_78 = (longlong *)CONCAT44(local_78._4_4_,1);
                                  _Src = (longlong **)
                                         ((ulonglong)*(ushort *)(lVar20 + 0x158) * 0x20 +
                                         *(longlong *)(DAT_14cb848c0 + 0x3a8));
                                  cVar10 = FUN_1488ccc98(lVar16,_Src);
                                  if ((cVar10 == '\0') ||
                                     (pplVar15 = _Src, (int)local_78 <= local_e0))
                                  goto LAB_140c7bb26;
                                }
                              }
                            }
LAB_140c7bbd9:
                            plVar17 = plVar17 + 1;
                            bVar7 = false;
                            bVar6 = true;
                          } while (plVar17 != local_b0);
                        }
                      }
LAB_140c7ba57:
                      if (local_70 != (longlong *)0x0) {
                        FUN_1400020a8(local_70);
                      }
                      param_4 = local_d8;
                      if (!bVar6) goto LAB_140c7bbf7;
                    }
                    else {
                      lVar20 = local_b8 + 8;
                      lVar13 = local_b8 + 0x20;
                      lVar14 = FUN_140a2d0dc(lVar16);
                      pplVar19 = (longlong **)(lVar14 + 0xf0);
                      lVar14 = FUN_140c7c082(lVar20);
                      param_4 = local_d8;
                      lVar20 = lVar14 + 0x30;
                      if (lVar14 == 0) {
                        lVar20 = lVar13;
                      }
                      pplVar15 = pplVar19;
                      cVar10 = FUN_140cde234(lVar20,pplVar19);
                      if (cVar10 != '\0') {
                        local_70 = (longlong *)CONCAT44(local_70._4_4_,1);
                        cVar10 = FUN_140c7bf14(local_b8,pplVar19,param_4,&local_70);
                        if ((cVar10 == '\0') || (pplVar15 = pplVar19, (int)local_70 <= local_e0))
                        goto LAB_140c7ba12;
                      }
                    }
                  }
LAB_140c7ba82:
                  plVar17 = local_80 + 1;
                  lVar20 = local_a0;
                } while (plVar17 != local_90 + local_88);
              }
            }
            else {
              pplVar15 = (longlong **)*plVar17;
              lVar13 = FUN_140c7c082(lVar12 + 8);
              lVar16 = lVar13 + 0x30;
              if (lVar13 == 0) {
                lVar16 = lVar20;
              }
              cVar10 = FUN_140cde234(lVar16,pplVar15);
              if (cVar10 != '\0') {
                local_5c = 1;
                pplVar15 = (longlong **)*plVar17;
                cVar10 = FUN_140c7bf14(lVar12,pplVar15,param_4,&local_5c);
                if ((cVar10 == '\0') || (lVar20 = local_a0, local_5c <= local_e0))
                goto LAB_140c7b8fe;
              }
            }
LAB_140c7b8b8:
            lVar18 = lVar18 + 1;
            lVar16 = *plVar4;
          } while (lVar18 < *(int *)(lVar16 + 0x20));
        }
        bVar7 = false;
LAB_140c7bbf7:
      } while (!bVar7);
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    local_dc = (undefined4)CONCAT71((int7)(local_48 >> 8),1);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_dc;
}



// FUNCTION 140c7bf14 FUN_140c7bf14 body=365 status=ok
// SIG undefined FUN_140c7bf14(void)

bool FUN_140c7bf14(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 ****ppppuVar10;
  undefined1 auStack_78 [40];
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = FUN_140c7c082(param_1 + 8);
  plVar9 = (longlong *)(param_1 + 0x90);
  if (lVar4 != 0) {
    plVar9 = (longlong *)(lVar4 + 0xa8);
  }
  if ((longlong *)*param_2 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)*param_2;
  }
  if ((int)plVar9[1] != *(int *)((longlong)plVar9 + 0x34)) {
    uVar2 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar8 = (uint)lVar4 & 0xffff;
    plVar6 = plVar9 + 7;
    if ((longlong *)plVar9[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar9[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)plVar9[9] - 1U &
                    (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar8) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar7 = *plVar9 + (longlong)iVar5 * 0x60;
        if (*(longlong *)(*plVar9 + (longlong)iVar5 * 0x60) == lVar4) goto LAB_140c7bfda;
        iVar5 = *(int *)(lVar7 + 0x58);
      } while (iVar5 != -1);
    }
  }
  lVar7 = 0;
LAB_140c7bfda:
  lVar4 = lVar7 + 8;
  if (lVar7 == 0) {
    lVar4 = 0;
  }
  if (lVar4 != 0) {
    FUN_1448729ea(lVar4,local_50,param_3);
    uVar3 = FUN_14005fbd2(local_50,1);
    *param_4 = uVar3;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppppuVar10 = local_50;
      if (0x18 < local_38) {
        ppppuVar10 = (undefined8 ****)local_50[0];
      }
      (*pcVar1)(ppppuVar10);
    }
    if (0x18 < local_38) {
      FUN_1400020a8(local_50[0]);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c7c082 FUN_140c7c082 body=136 status=ok
// SIG undefined FUN_140c7c082(void)

longlong FUN_140c7c082(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb84920 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb84920,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c7c10c FUN_140c7c10c body=262 status=ok
// SIG undefined FUN_140c7c10c(void)

void FUN_140c7c10c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140c7c212 FUN_140c7c212 body=317 status=ok
// SIG undefined FUN_140c7c212(void)

void FUN_140c7c212(longlong param_1,int param_2,int param_3)

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
  else {
    uVar5 = (longlong)param_2 * 8;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c7c280;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_140c7c280:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140c7c34f FUN_140c7c34f body=116 status=ok
// SIG undefined FUN_140c7c34f(void)

void FUN_140c7c34f(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_140c7c3c3(*(undefined8 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x30));
        if (*(longlong *)(lVar1 + 0x28) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar1 + 0x18) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar1 + 8) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 140c7c3c3 FUN_140c7c3c3 body=61 status=ok
// SIG undefined FUN_140c7c3c3(void)

void FUN_140c7c3c3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140c7c400 FUN_140c7c400 body=84 status=ok
// SIG undefined FUN_140c7c400(void)

void FUN_140c7c400(longlong *param_1,wchar_t *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  FUN_140c73872();
  cVar1 = FUN_1409df8ac(param_1,param_3);
  if (cVar1 != '\0') {
    iVar2 = _wtoi(param_2);
    *(int *)(param_1 + 0xb) = iVar2;
                    /* WARNING: Could not recover jumptable at 0x000140c7c448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf8))(param_1,param_3,0);
    return;
  }
  return;
}



// FUNCTION 140c7c454 FUN_140c7c454 body=78 status=ok
// SIG undefined FUN_140c7c454(void)

void FUN_140c7c454(longlong param_1,uint param_2)

{
  FUN_140c737b2(*(undefined8 *)(param_1 + 0x50),param_1 + 0x58,*(undefined4 *)(param_1 + 0x18),
                param_2);
  if ((param_2 >> 0x11 & 1) == 0) {
    *(uint *)(param_1 + 0x18) = (uint)*(ushort *)(param_1 + 0x18) | param_2 & 0xff00ffff;
    FUN_14078f2d2(param_1 + 0x20,param_1);
    return;
  }
  return;
}



// FUNCTION 140c7c4ae FUN_140c7c4ae body=137 status=ok
// SIG undefined FUN_140c7c4ae(void)

void FUN_140c7c4ae(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = 0x7012;
  local_18 = 0;
  if ((*param_2 != 0) || ((int)param_2[1] != 0x7012)) {
    local_28 = *param_2;
    local_20 = (int)param_2[1];
  }
  uVar1 = FUN_14477b072(param_1,DAT_14cb61bb8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c7c538 FUN_140c7c538 body=217 status=ok
// SIG undefined FUN_140c7c538(void)

void FUN_140c7c538(longlong param_1)

{
  float fVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  
  fVar1 = *(float *)(param_1 + 0x1b40);
  if ((0.0 < fVar1) && (fVar1 < *(float *)(param_1 + 0xee4))) {
    *(float *)(param_1 + 0xeec) = *(float *)(param_1 + 0xee4) / fVar1;
  }
  FUN_140c7c612(param_1);
  if (*(longlong *)(param_1 + 0x1bd0) != 0) {
    lVar4 = FUN_140a2d0dc();
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0xf8) != 0)) {
      FUN_140559328(param_1 + 0xeb8,lVar4 + 0xf8);
    }
  }
  if (*(longlong **)(param_1 + 0x1cc8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1cc8) + 0x20))();
  }
  lVar4 = 0;
  bVar3 = true;
  do {
    bVar5 = bVar3;
    plVar2 = *(longlong **)(param_1 + 0x1cd0 + lVar4 * 8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    lVar4 = 1;
    bVar3 = false;
  } while (bVar5);
  if (*(float *)(param_1 + 0x1b3c) <= 0.0) {
    return;
  }
  FUN_14578b382(param_1);
  return;
}



// FUNCTION 140c7c612 FUN_140c7c612 body=295 status=ok
// SIG undefined FUN_140c7c612(void)

void FUN_140c7c612(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c7c830();
  plVar1 = (longlong *)(param_1 + 0x1538);
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x1538) + 0x20))(plVar1);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (((cVar2 == '\0') && (*(char *)(param_1 + 0x958) == '\x01')) &&
       (*(char *)(param_1 + 0x980) != '\0')) goto LAB_140c7c667;
  }
  if ((*(byte *)(param_1 + 0x87d) & 1) != 0) {
    cVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0x938) = 1;
    }
  }
  FUN_140c7d22e(param_1 + 0x1590,param_1);
  if (*(char *)(param_1 + 0x1828) == '\0') {
    FUN_14036c39e(param_1 + 0x1758,param_1);
    *(undefined1 *)(param_1 + 0x1828) = 1;
  }
LAB_140c7c667:
  FUN_140c7c762(param_1 + 0x15c8,param_1);
  if ((*(longlong *)(param_1 + 0x1568) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x1568) + 0x6f1) == '\x01')) {
    FUN_140e15d6e(&local_28);
    local_38 = FUN_14125e7bc;
    local_30 = 0;
    FUN_140c7d442(param_1 + 0x203,param_1,&local_38,local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c7c762 FUN_140c7c762 body=205 status=ok
// SIG undefined FUN_140c7c762(void)

void FUN_140c7c762(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x10) = param_2;
  uVar2 = FUN_140437b04();
  uVar2 = FUN_144718840(param_2,uVar2);
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  if ((*(int *)(param_1 + 0x5c) < *(int *)(param_1 + 0x30)) && (*(longlong *)(param_1 + 0x88) == 0))
  {
    plVar1 = (longlong *)(param_1 + 0x78);
    *(longlong **)(param_1 + 0x90) = &DAT_14cbcb330;
    *(longlong *)(param_1 + 0x88) = param_1;
    lVar3 = DAT_14cbcb330;
    while( true ) {
      *(longlong *)(param_1 + 0x78) = lVar3;
      LOCK();
      lVar4 = **(longlong **)(param_1 + 0x90);
      bVar5 = lVar3 == lVar4;
      if (bVar5) {
        **(longlong **)(param_1 + 0x90) = (longlong)plVar1;
        lVar4 = lVar3;
      }
      UNLOCK();
      if (bVar5) break;
      *(longlong *)(param_1 + 0x78) = lVar4;
      lVar3 = **(longlong **)(param_1 + 0x90);
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return;
}



// FUNCTION 140c7c830 FUN_140c7c830 body=902 status=ok
// SIG undefined FUN_140c7c830(void)

void FUN_140c7c830(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 ****ppppuVar8;
  bool bVar9;
  float fVar10;
  undefined1 auStack_a8 [40];
  char local_80 [16];
  longlong *local_70;
  longlong local_68;
  undefined4 local_58 [2];
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1405f1eac();
  *(undefined8 *)(param_1 + 0x11a0) = DAT_14c872be0;
  if ((*(char *)(param_1 + 0xe09) == '\x01') &&
     (*(undefined1 *)(param_1 + 0xe09) = 0, *(char *)(param_1 + 0x178) == '\x03')) {
    FUN_140c7ce82(param_1,1);
  }
  FUN_1401b3e2a(param_1 + 0x770);
  FUN_140c7cbb8(param_1 + 0xc10,param_1);
  lVar7 = *(longlong *)(param_1 + 0xe10);
  if (lVar7 == 0) goto LAB_140c7c987;
  if (((~*(byte *)(lVar7 + 0x251) & 3) == 0) ||
     (((*(byte *)(lVar7 + 0x300) & 1) != 0 &&
      (lVar7 = FUN_140ccfc10(), *(char *)(lVar7 + 0xea8) == '\x01')))) {
    FUN_14045a684(param_1 + 0x1370,1);
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0xe10) + 0x588) & 4) != 0) {
    if (*(longlong *)(param_1 + 0x11e0) == 0) {
      plVar3 = (longlong *)(param_1 + 0x11d0);
      *(undefined8 **)(param_1 + 0x11e8) = &DAT_14cb89d80;
      *(longlong *)(param_1 + 0x11e0) = param_1;
      lVar7 = DAT_14cb89db0;
      while( true ) {
        *(longlong *)(param_1 + 0x11d0) = lVar7;
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x11e8) + 0x30);
        LOCK();
        lVar6 = *plVar1;
        bVar9 = lVar7 == lVar6;
        if (bVar9) {
          *plVar1 = (longlong)plVar3;
          lVar6 = lVar7;
        }
        UNLOCK();
        if (bVar9) break;
        *(longlong *)(param_1 + 0x11d0) = lVar6;
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x11e8) + 0x30);
      }
      if (*plVar3 != 0) {
        *(longlong **)(*plVar3 + 8) = plVar3;
      }
      plVar3 = *(longlong **)(param_1 + 0x11e8);
      if ((longlong)(int)plVar3[1] != 0) {
        lVar7 = 0;
        do {
          if ((*(int *)(*plVar3 + 8 + lVar7) != 0) && (*(longlong *)(*plVar3 + lVar7) != 0)) {
            FUN_14879b0e2(plVar3,*(undefined8 *)(param_1 + 0x11e0));
            break;
          }
          lVar7 = lVar7 + 0x10;
        } while ((longlong)(int)plVar3[1] * 0x10 != lVar7);
      }
    }
    lVar7 = *(longlong *)(param_1 + 0xe10);
    if ((*(byte *)(lVar7 + 0x588) & 8) == 0) {
      fVar10 = *(float *)(lVar7 + 0x58c);
      if (0.0 < fVar10) goto LAB_140c7cac2;
    }
    else {
      local_50[0] = *(undefined8 ****)(lVar7 + 0x2e8);
      FUN_1446dcdd4(local_80);
      if (DAT_14cb77e00 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = FUN_144837462(DAT_14cb77e00,local_80);
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if ((lVar7 != 0) && (plVar3 = *(longlong **)(lVar7 + 0x348), plVar3 != (longlong *)0x0)) {
        fVar10 = (float)(**(code **)(*plVar3 + 0x18))(plVar3,*(undefined8 *)(param_1 + 0x1b0));
LAB_140c7cac2:
        *(float *)(param_1 + 0x11cc) = fVar10;
      }
    }
  }
  lVar7 = *(longlong *)(param_1 + 0xe10);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  lVar7 = (ulonglong)((uint)*(ushort *)(lVar7 + 0x302) * 0x50) + DAT_14c9a6588;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
  local_80[0] = '\0';
  local_58[0] = 0;
  FUN_1456bb102(local_80,param_1);
  FUN_1448729ea(lVar7,local_50,local_80);
  uVar5 = FUN_1405d5f74(local_50);
  *(undefined4 *)(param_1 + 0xedc) = uVar5;
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar8 = local_50;
    if (0x18 < local_38) {
      ppppuVar8 = (undefined8 ****)local_50[0];
    }
    (*pcVar4)(ppppuVar8);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_1448173f8(local_58);
  if ((local_80[0] == '\x03') && (local_70 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_70 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
LAB_140c7c987:
  FUN_140c7cdec(param_1);
  FUN_140c7ccc4(param_1);
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c7cbb8 FUN_140c7cbb8 body=267 status=ok
// SIG undefined FUN_140c7cbb8(void)

void FUN_140c7cbb8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if (*param_1 != 0) {
    *param_1 = 0;
    FUN_14063ac6a(param_1 + 0xe,0);
  }
  *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar2 = DAT_14c950c29;
  *param_1 = param_2;
  if ((param_2 == 0) || ((bVar2 & 1) == 0)) {
    param_1[1] = param_2;
    if (param_2 == 0) {
      param_1[2] = 0;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    param_1[1] = param_2;
  }
  uVar3 = FUN_1407ca880();
  lVar4 = FUN_144718840(param_2,uVar3);
  param_1[2] = lVar4;
  *(undefined1 *)((longlong)param_1 + 0x39) = 0;
  *(bool *)(param_1 + 7) = *(char *)(*param_1 + 0x178) == '\x03';
  if (param_1[0x10] == 0) {
    plVar1 = param_1 + 0xe;
    param_1[0x11] = (longlong)&DAT_14cb8ccc0;
    param_1[0x10] = (longlong)param_1;
    lVar4 = DAT_14cb8ccc0;
    while( true ) {
      param_1[0xe] = lVar4;
      LOCK();
      lVar5 = *(longlong *)param_1[0x11];
      bVar6 = lVar4 == lVar5;
      if (bVar6) {
        *(longlong *)param_1[0x11] = (longlong)plVar1;
        lVar5 = lVar4;
      }
      UNLOCK();
      if (bVar6) break;
      param_1[0xe] = lVar5;
      lVar4 = *(longlong *)param_1[0x11];
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return;
}



// FUNCTION 140c7ccc4 FUN_140c7ccc4 body=295 status=ok
// SIG undefined FUN_140c7ccc4(void)

void FUN_140c7ccc4(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 unaff_RBX;
  uint uVar6;
  undefined1 auStack_58 [36];
  undefined1 local_34 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = *(longlong **)(param_1 + 0xe10);
  if ((plVar5 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x65) & 0x18) == 0x10)) {
    lVar4 = plVar5[0xd6];
    (**(code **)(*plVar5 + 0xa0))(plVar5,local_34);
    FUN_1409b5530(param_1 + 0x13b0,param_1 + 0x440,local_34,
                  CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)lVar4) & 0xffffffff);
    uVar1 = *(ulonglong *)(param_1 + 0x28);
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x25);
    }
    else {
      uVar6 = (uint)uVar1;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
        puVar3 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar3 = DAT_14c998080;
        }
        if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
          lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
          lVar4 = *(longlong *)(lVar2 + 0x18);
          if (*(longlong *)(lVar2 + 0x18) == 0) {
            lVar4 = lVar2 + 8;
          }
          *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) | 0x20;
          *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c7cdec FUN_140c7cdec body=149 status=ok
// SIG undefined FUN_140c7cdec(void)

void FUN_140c7cdec(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((((char)param_1[0x2f] != '\x03') && ((*(byte *)((longlong)param_1 + 0x1151) & 1) != 0)) &&
     ((*(byte *)((longlong)param_1 + 0x65) & 0x18) == 0x10)) {
    lVar1 = param_1[0x265];
    lVar3 = param_1[0x266];
    param_1[0x265] = 0;
    param_1[0x266] = 0;
    if ((longlong)(int)lVar3 != 0) {
      lVar4 = 0;
      do {
        uVar2 = FUN_14477b072(param_1,*(undefined8 *)(lVar1 + lVar4));
        (**(code **)(*param_1 + 0x248))(param_1,uVar2,0);
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar4);
    }
    if (lVar1 != 0) {
      FUN_1400020a8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140c7ce82 FUN_140c7ce82 body=906 status=ok
// SIG undefined FUN_140c7ce82(void)

void FUN_140c7ce82(longlong *param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((char)param_1[0x2f] == '\x03') &&
     ((bVar1 = *(byte *)((longlong)param_1 + 99), ((bVar1 & 8) == 0) == (bool)param_2 ||
      (*(byte *)(param_1 + 0xd) != param_2)))) {
    *(byte *)(param_1 + 0xd) = param_2;
    *(byte *)((longlong)param_1 + 99) = bVar1 & 0xf7 | param_2 * '\b';
    if ((*(byte *)((longlong)param_1 + 100) & 2) != 0) {
      if (param_2 == 0) {
        if ((*(byte *)((longlong)param_1 + 0x65) & 0x18) == 0x10) {
          FUN_1400b2a20(param_1,3);
        }
      }
      else if ((((*(uint *)(param_1 + 1) & 0x10) == 0) && (lVar5 = param_1[4], lVar5 != 0)) &&
              (-1 < (short)*(undefined4 *)(lVar5 + 8))) {
        uVar9 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar9 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
          if (DAT_14cae8b20 == 0) {
            local_50 = &local_30;
            local_30 = (code *)&LAB_14355090c;
            local_40 = FUN_14081d0ea;
            local_48 = FUN_14081d0ea;
            local_58 = &LAB_147b8e16d;
            local_60 = (code *)&LAB_140810a38;
            local_68 = L"Engine";
            local_70 = 0x800000000;
            local_78 = 0x10000000;
            local_80 = 8;
            local_88 = 0x3f0;
            FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
          }
          lVar5 = DAT_14cae8b20;
          if (DAT_14c951858 == 0) {
            local_50 = &local_30;
            local_30 = FUN_1449e2820;
            local_40 = FUN_14081d0ea;
            local_48 = FUN_14081d0ea;
            local_58 = &LAB_1468c5283;
            local_60 = FUN_142809da0;
            local_68 = L"Engine";
            local_70 = 0x400000000;
            local_78 = 0x10000000;
            local_80 = 8;
            local_88 = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          lVar4 = param_1[4];
          if (lVar4 != 0) {
            iVar2 = *(int *)(lVar5 + 0x38);
            do {
              if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
                 (lVar8 = lVar4,
                 *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
                 lVar5 + 0x30)) {
                lVar8 = 0;
              }
            } while ((lVar8 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
            if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0xc0) != 0)) {
              if (((bVar1 & 8) == 0 & param_2) == 0) {
                if ((*(byte *)((longlong)param_1 + 0x65) & 0x18) == 0x10) {
                  FUN_1405f18a8(param_1);
                }
              }
              else {
                FUN_14081b2ca(*(longlong *)(lVar8 + 0xc0),param_1);
                if ((*(byte *)((longlong)param_1 + 0x65) & 0x18) == 0x10) {
                  (**(code **)(*param_1 + 0x4f8))(param_1);
                }
              }
              FUN_140de30c6(param_1);
            }
          }
        }
      }
      uVar3 = param_1[5];
      if (uVar3 < 0xffffffff00000000) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
      uVar9 = (uint)uVar3;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
        puVar6 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar6 = DAT_14c998080;
        }
        if ((*(uint *)(puVar6 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) != 0) {
          lVar5 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
          puVar7 = *(uint **)(lVar5 + 0x18);
          if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
            puVar7 = (uint *)(lVar5 + 8);
          }
          *puVar7 = *puVar7 | 0x10;
          *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c7d22e FUN_140c7d22e body=302 status=ok
// SIG undefined FUN_140c7d22e(void)

void FUN_140c7d22e(uint *param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (param_2 == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar3 = *(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar7 + 0x10);
      bVar8 = uVar3 == 0;
      if (bVar8) {
        *(uint *)(lVar7 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar3 = uVar6;
      }
    }
    param_1[1] = uVar3;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 2) = param_2;
  }
  uVar4 = FUN_140c7d35c();
  uVar4 = FUN_144718840(param_2,uVar4);
  *(undefined8 *)(param_1 + 4) = uVar4;
  if (*(longlong *)(param_1 + 10) == 0) {
    puVar1 = param_1 + 6;
    *(longlong **)(param_1 + 0xc) = &DAT_14cbc2058;
    *(uint **)(param_1 + 10) = param_1;
    lVar7 = DAT_14cbc2058;
    while( true ) {
      *(longlong *)(param_1 + 6) = lVar7;
      LOCK();
      lVar5 = **(longlong **)(param_1 + 0xc);
      bVar8 = lVar7 == lVar5;
      if (bVar8) {
        **(longlong **)(param_1 + 0xc) = (longlong)puVar1;
        lVar5 = lVar7;
      }
      UNLOCK();
      if (bVar8) break;
      *(longlong *)(param_1 + 6) = lVar5;
      lVar7 = **(longlong **)(param_1 + 0xc);
    }
    if (*(longlong *)puVar1 != 0) {
      *(uint **)(*(longlong *)puVar1 + 8) = puVar1;
    }
  }
  return;
}



// FUNCTION 140c7d35c FUN_140c7d35c body=228 status=ok
// SIG undefined FUN_140c7d35c(void)

longlong FUN_140c7d35c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba5ea0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148be649d;
    local_40 = &LAB_1459bf270;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"NameplateInfoProviderInterface",&DAT_14cba5ea0,&DAT_148be649c
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba5ea0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c7d442 FUN_140c7d442 body=389 status=ok
// SIG undefined FUN_140c7d442(void)

void FUN_140c7d442(byte *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(param_2 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar3 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar8 + 0x10);
      bVar9 = uVar3 == 0;
      if (bVar9) {
        *(uint *)(lVar8 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar3 = uVar6;
      }
    }
    uVar5 = (ulonglong)uVar3;
    if (param_4 == 0) {
      param_4 = 0;
    }
    else if (uVar3 == 0) {
      uVar5 = 0;
    }
    else if ((((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) &&
             (plVar4 = (longlong *)
                       ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
             plVar4 != (longlong *)0x0)) &&
            (((*(uint *)(plVar4 + 2) == uVar3 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
             (*plVar4 != 0)))) {
      FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),param_4,1);
    }
  }
  FUN_140649f3e(param_1,&local_50);
  local_48 = (ulonglong)uVar7 | uVar5 << 0x20;
  local_40 = param_4;
  bVar2 = FUN_140a28ca8(param_1 + -0x203,local_50);
  *param_1 = *param_1 | bVar2;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c7d5ce FUN_140c7d5ce body=57 status=ok
// SIG undefined FUN_140c7d5ce(void)

void FUN_140c7d5ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5adb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5adb0 = FUN_140002ddd(FUN_1464ccfbd,uVar1,L"GbxBrainAspect_RetraceSteps");
  }
  return;
}



// FUNCTION 140c7d608 FUN_140c7d608 body=138 status=ok
// SIG undefined FUN_140c7d608(void)

void FUN_140c7d608(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_140313b20();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  local_20 = FUN_140c7d694();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_140313ab6(lVar2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c7d694 FUN_140c7d694 body=228 status=ok
// SIG undefined FUN_140c7d694(void)

longlong FUN_140c7d694(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb26f20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462785c0;
    local_38 = &LAB_147f90557;
    local_40 = FUN_14644bad0;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/EnhancedInput",L"EnhancedInputPlatformSettings",&DAT_14cb26f20,
                  &DAT_147f90556);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb26f20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c7d77a FUN_140c7d77a body=333 status=ok
// SIG undefined FUN_140c7d77a(void)

undefined8 FUN_140c7d77a(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  
  pcVar1 = (char *)(param_1 + 0x220);
  LOCK();
  bVar7 = *(char *)(param_1 + 0x220) == '\0';
  if (bVar7) {
    *(char *)(param_1 + 0x220) = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    FUN_1447d2058(pcVar1);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb42c70) && (FUN_144b3d300(&DAT_14cb42c70), DAT_14cb42c70 == -1)) {
    FUN_1446ddc76(&DAT_14cb42c68,"FNiagaraGpuRibbonsDataManager",1);
    _Init_thread_footer(&DAT_14cb42c70);
  }
  lVar4 = DAT_14cb42c68;
  if ((longlong)*(int *)(param_1 + 0x1b8) != 0) {
    lVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + lVar6) == DAT_14cb42c68) {
        uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 8 + lVar6);
        goto LAB_140c7d7ef;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x1b8) * 0x10 != lVar6);
  }
  uVar5 = FUN_14001cc68(0x180,0x10);
  FUN_14578b45e(uVar5,param_1);
  iVar3 = *(int *)(param_1 + 0x1b8);
  *(uint *)(param_1 + 0x1b8) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1bc) < iVar3 + 1U) {
    FUN_14578b3da((longlong *)(param_1 + 0x1b0),iVar3);
  }
  lVar6 = *(longlong *)(param_1 + 0x1b0);
  *(longlong *)(lVar6 + (longlong)iVar3 * 0x10) = lVar4;
  *(undefined8 *)(lVar6 + 8 + (longlong)iVar3 * 0x10) = uVar5;
LAB_140c7d7ef:
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\x01') {
    *pcVar1 = '\0';
  }
  UNLOCK();
  if (cVar2 != '\x01') {
    FUN_14008cdb0(pcVar1);
  }
  return uVar5;
}



// FUNCTION 140c7d8c8 FUN_140c7d8c8 body=370 status=ok
// SIG undefined FUN_140c7d8c8(void)

undefined8 * FUN_140c7d8c8(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140c7da48 FUN_140c7da48 body=308 status=ok
// SIG undefined FUN_140c7da48(void)

void FUN_140c7da48(longlong param_1)

{
  if (*(char *)(param_1 + 0x78) == '\x01') {
    if (*(char *)(param_1 + 0x77) == '\x01') {
      *(undefined1 *)(param_1 + 0x77) = 0;
    }
    if (*(char *)(param_1 + 0x75) == '\x01') {
      *(undefined1 *)(param_1 + 0x75) = 0;
    }
    if (*(int *)(param_1 + 0x6c) != -1) {
      *(undefined8 *)(param_1 + 0x6c) = 0xffffffff;
    }
    if (*(int *)(param_1 + 100) != -1) {
      *(undefined8 *)(param_1 + 100) = 0xffffffff;
    }
    if (*(char *)(param_1 + 0x61) == '\x01') {
      *(undefined1 *)(param_1 + 0x61) = 0;
    }
    if (*(char *)(param_1 + 0x5f) == '\x01') {
      *(undefined1 *)(param_1 + 0x5f) = 0;
    }
    if (*(char *)(param_1 + 0x5d) == '\x01') {
      *(undefined1 *)(param_1 + 0x5d) = 0;
    }
    if (*(char *)(param_1 + 0x5b) == '\x01') {
      *(undefined1 *)(param_1 + 0x5b) = 0;
    }
    if (*(char *)(param_1 + 0x59) == '\x01') {
      *(undefined1 *)(param_1 + 0x59) = 0;
    }
    if (*(char *)(param_1 + 0x54) == '\x01') {
      *(undefined1 *)(param_1 + 0x54) = 0;
    }
    if (*(char *)(param_1 + 0x4c) == '\x01') {
      *(undefined1 *)(param_1 + 0x4c) = 0;
    }
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  FUN_140c7db7c(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x33) == '\x01') {
    *(undefined1 *)(param_1 + 0x33) = 0;
  }
  if (*(char *)(param_1 + 0x31) == '\x01') {
    *(undefined1 *)(param_1 + 0x31) = 0;
  }
  if (*(int *)(param_1 + 0x28) != -1) {
    *(undefined8 *)(param_1 + 0x28) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x20) != -1) {
    *(undefined8 *)(param_1 + 0x20) = 0xffffffff;
  }
  if (*(char *)(param_1 + 0x1d) == '\x01') {
    *(undefined1 *)(param_1 + 0x1d) = 0;
  }
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    *(undefined1 *)(param_1 + 0x1b) = 0;
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  if (*(char *)(param_1 + 0x17) == '\x01') {
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  if (*(char *)(param_1 + 0x15) == '\x01') {
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 140c7db7c FUN_140c7db7c body=132 status=ok
// SIG undefined FUN_140c7db7c(void)

void FUN_140c7db7c(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x37);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      if (pcVar1[-2] == '\x01') {
        pcVar1[-2] = '\0';
      }
      if (*(int *)(pcVar1 + -0xb) != -1) {
        pcVar1[-0xb] = -1;
        pcVar1[-10] = -1;
        pcVar1[-9] = -1;
        pcVar1[-8] = -1;
        pcVar1[-7] = '\0';
        pcVar1[-6] = '\0';
        pcVar1[-5] = '\0';
        pcVar1[-4] = '\0';
      }
      if (*(int *)(pcVar1 + -0x13) != -1) {
        pcVar1[-0x13] = -1;
        pcVar1[-0x12] = -1;
        pcVar1[-0x11] = -1;
        pcVar1[-0x10] = -1;
        pcVar1[-0xf] = '\0';
        pcVar1[-0xe] = '\0';
        pcVar1[-0xd] = '\0';
        pcVar1[-0xc] = '\0';
      }
      if (pcVar1[-0x16] == '\x01') {
        pcVar1[-0x16] = '\0';
      }
      if (pcVar1[-0x18] == '\x01') {
        pcVar1[-0x18] = '\0';
      }
      if (pcVar1[-0x1a] == '\x01') {
        pcVar1[-0x1a] = '\0';
      }
      if (pcVar1[-0x1c] == '\x01') {
        pcVar1[-0x1c] = '\0';
      }
      if (pcVar1[-0x1e] == '\x01') {
        pcVar1[-0x1e] = '\0';
      }
      if (pcVar1[-0x23] == '\x01') {
        pcVar1[-0x23] = '\0';
      }
      if (pcVar1[-0x2b] == '\x01') {
        pcVar1[-0x2b] = '\0';
      }
      pcVar1 = pcVar1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140c7dc00 FUN_140c7dc00 body=259 status=ok
// SIG undefined FUN_140c7dc00(void)

void FUN_140c7dc00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  
  lVar1 = DAT_14cb8a688;
  iVar6 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar6 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar6 == 2)) {
    uVar5 = 0;
  }
  else if (iVar6 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar5 = 1;
  }
  if (*(char *)(lVar1 + uVar5) == '\x01') {
    iVar6 = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x20);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (*(int *)(param_1 + 0x24) < iVar6) {
      FUN_140c7e556(param_1 + 0x18);
    }
  }
  iVar6 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar6 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar7);
      if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
        FUN_140c7dd04(param_1 + -0x20);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar6 * 8 != lVar7);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) < 0) {
    FUN_140c7e556(param_1 + 0x38,0);
  }
  FUN_1449db8d8(param_1);
  return;
}



// FUNCTION 140c7dd04 FUN_140c7dd04 body=389 status=ok
// SIG undefined FUN_140c7dd04(void)

void FUN_140c7dd04(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c7de9c(param_2);
  lVar6 = DAT_14cb8a688;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar5 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar5 = 1;
  }
  if (*(char *)(lVar6 + uVar5) == '\x01') {
    if (DAT_14c950c29 == '\x01') {
      FUN_14689c22e(param_2);
    }
    iVar1 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
      FUN_145781a2e((longlong *)(param_1 + 0x38),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  else {
    FUN_144757f48(param_2,0x40000000);
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    do {
      uVar2 = *(uint *)(lVar6 + 8);
      if ((uVar2 >> 0x15 & 1) != 0) break;
      LOCK();
      bVar7 = uVar2 == *(uint *)(lVar6 + 8);
      if (bVar7) {
        *(uint *)(lVar6 + 8) = uVar2 | 0x200000;
      }
      UNLOCK();
    } while (!bVar7);
    local_38 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_14689c22e(param_2);
    }
    local_30 = &local_38;
    FUN_148965be0(param_1 + 0x48);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c7de9c FUN_140c7de9c body=109 status=ok
// SIG undefined FUN_140c7de9c(void)

void FUN_140c7de9c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_140c7df0a();
  lVar5 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))(param_1 + 0x28);
  lVar3 = *(longlong *)(lVar5 + 8);
  plVar4 = *(longlong **)(lVar5 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if (lVar3 != 0) {
    FUN_14087345e(param_1 + 0x28);
  }
  FUN_140873278(param_1);
  return;
}



// FUNCTION 140c7df0a FUN_140c7df0a body=110 status=ok
// SIG undefined FUN_140c7df0a(void)

void FUN_140c7df0a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(byte *)((longlong)param_1 + 0x294) & 1) == 0) {
    local_18 = (undefined4)param_1[0x54];
    uStack_14 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x2c8))(param_1,&local_18);
  }
  FUN_140c7df7a(param_1,CONCAT44(uStack_14,local_18));
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c7df7a FUN_140c7df7a body=1499 status=ok
// SIG undefined FUN_140c7df7a(void)

void FUN_140c7df7a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  int local_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_60 [2];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(longlong *)(param_1 + 0x220) != 0) && (*(longlong **)(param_1 + 0x228) != (longlong *)0x0)
      ) && (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x228) + 0x10))(), cVar6 == '\0'))
  goto LAB_140c7e2e0;
  cVar6 = FUN_1405246fa(param_1);
  if (cVar6 != '\0') {
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_1446efa72(&local_50,0,3,0x10);
    puVar5 = local_50;
    local_48 = 3;
    *local_50 = &PTR_LAB_14a4918a0;
    local_50[1] = param_2;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar13 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar13 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar13;
    local_50[2] = lVar11;
    *local_50 = &PTR_FUN_14a491830;
    local_50[3] = 0;
    iVar10 = 0;
    if (param_1 != 0) {
      uVar3 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_50 + 3) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      iVar10 = *(int *)(lVar13 + 0x10);
      if (*(int *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar10 = *(int *)(lVar13 + 0x10);
        bVar14 = iVar10 == 0;
        if (bVar14) {
          *(int *)(lVar13 + 0x10) = iVar12;
          iVar10 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar10 = iVar12;
        }
      }
    }
    *(int *)((longlong)puVar5 + 0x1c) = iVar10;
    puVar5[4] = FUN_140c7df7a;
    *(undefined4 *)(puVar5 + 5) = 0;
    FUN_14621550a(param_1,&local_50);
    goto LAB_140c7e2e0;
  }
  FUN_14179f158(param_1,local_60,1);
  if ((*(byte *)(param_1 + 0x290) | 4) == 5) {
    *(undefined1 *)(param_1 + 0x290) = 0;
    *(longlong *)(param_1 + 0x31c) = param_2;
    if (*(char *)(param_1 + 0x32c) == '\x01') {
      *(undefined1 *)(param_1 + 0x32c) = 0;
    }
    if (*(char *)(param_1 + 0x358) == '\x01') {
      *(undefined1 *)(param_1 + 0x358) = 0;
    }
    plVar4 = *(longlong **)(param_1 + 0x3d0);
    if (plVar4 != (longlong *)0x0) {
      plStack_70 = *(longlong **)(param_1 + 0x308);
      local_78 = param_2;
      (**(code **)(*plVar4 + 0x18))(plVar4);
      if ((char)plVar4[3] == '\x01') {
        *(undefined1 *)(plVar4 + 3) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x2ac) = 0;
    if (*(char *)(param_1 + 0x448) == '\x01') {
      *(undefined1 *)(param_1 + 0x448) = 0;
    }
    if (*(char *)(param_1 + 0x438) == '\x01') {
      *(undefined1 *)(param_1 + 0x438) = 0;
    }
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    if (*(char *)(param_1 + 0x2d4) == '\x01') {
      FUN_14087345e(param_1 + 0x28);
    }
    else if (*(char *)(param_1 + 0x2d4) == '\x02') {
      FUN_1461545f4(param_1 + 0x28);
    }
    if (*(longlong *)(param_1 + 0x2e8) == 0) {
LAB_140c7e456:
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      goto LAB_140c7e2aa;
    }
    FUN_140232b8e(*(longlong *)(param_1 + 0x2e8),&local_78);
    lVar13 = local_78;
    if (local_78 == 0) goto LAB_140c7e2aa;
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,3,0x10);
    puVar5 = local_88;
    local_80 = 3;
    *local_88 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    local_88[2] = lVar8;
    *local_88 = &PTR_FUN_14a491910;
    local_88[3] = 0;
    iVar10 = 0;
    if (param_1 != 0) {
      uVar3 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_88 + 3) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar10 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar10 = *(int *)(lVar11 + 0x10);
        bVar14 = iVar10 == 0;
        if (bVar14) {
          *(int *)(lVar11 + 0x10) = iVar12;
          iVar10 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar10 = iVar12;
        }
      }
    }
    *(int *)((longlong)puVar5 + 0x1c) = iVar10;
    puVar5[4] = param_1;
    puVar5[5] = param_2;
    if (*(longlong *)(param_1 + 0x2e8) == 0) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = *(undefined4 *)(*(longlong *)(param_1 + 0x2e8) + 0x30);
    }
    cVar6 = FUN_140d64b1c(lVar13,uVar9,&local_88,0);
    if (local_80 == 0) {
LAB_140c7e274:
      if (local_88 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_88 != (undefined8 *)0x0) {
      (**(code **)*local_88)(local_88,0);
      FUN_1446efa72(&local_88,0,0,0x10);
      local_80 = 0;
      goto LAB_140c7e274;
    }
    if (cVar6 != '\0') {
      lVar13 = local_78;
      if (*(int *)(local_78 + 0x80) == 0) {
        *(undefined4 *)(local_78 + 0x80) = DAT_14cab2be4;
      }
LAB_140c7e2a5:
      FUN_14029f2bc(lVar13,0);
    }
LAB_140c7e2aa:
    plVar4 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_70)(plStack_70);
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
  else if (((*(longlong *)(param_1 + 0x2e0) != 0) && (*(longlong *)(param_1 + 0x2e8) != 0)) &&
          ((uVar7 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x2e8) + 0x30), uVar7 != 0xffff
           && ((*(byte *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x2e0) + 0x548) + 8) +
                          0x126 + uVar7 * 0x128) & 4) != 0)))) {
    if (*(char *)(param_1 + 0x2d4) == '\x01') {
      FUN_14087345e(param_1 + 0x28);
    }
    else if (*(char *)(param_1 + 0x2d4) == '\x02') {
      FUN_1461545f4(param_1 + 0x28);
    }
    if (*(longlong *)(param_1 + 0x2e8) == 0) goto LAB_140c7e456;
    FUN_140232b8e(*(longlong *)(param_1 + 0x2e8),&local_78);
    lVar13 = local_78;
    if (local_78 != 0) {
      if (*(longlong *)(param_1 + 0x2e8) == 0) {
        uVar9 = 0xffff;
      }
      else {
        uVar9 = *(undefined4 *)(*(longlong *)(param_1 + 0x2e8) + 0x30);
      }
      cVar6 = FUN_14179d8a8(local_78,uVar9);
      if (cVar6 != '\0') {
        if (*(int *)(lVar13 + 0x80) == 0) {
          *(undefined4 *)(lVar13 + 0x80) = DAT_14cab2be4;
        }
        goto LAB_140c7e2a5;
      }
    }
    goto LAB_140c7e2aa;
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
LAB_140c7e2e0:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c7e556 FUN_140c7e556 body=320 status=ok
// SIG undefined FUN_140c7e556(void)

void FUN_140c7e556(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140c7e5bf;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140c7e5bf:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 140c7e696 FUN_140c7e696 body=284 status=ok
// SIG undefined FUN_140c7e696(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffb8 : 0x000140c7e7ab */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_140c7e696(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_68;
  undefined8 local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  local_58[0] = 0;
  local_78 = param_2;
  if (local_68 != 0) {
    plVar4 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[2];
    }
    (**(code **)*plVar4)(plVar4,local_58);
  }
  iVar2 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar2 + 1U) {
    FUN_140c7e7b4((longlong *)(param_1 + 0x20),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar5 = (longlong)iVar2 * 0x50;
  *(undefined8 *)(lVar3 + lVar5) = local_78;
  *(longlong *)(lVar3 + 0x10 + lVar5) = local_68;
  *(undefined8 *)(lVar3 + 0x20 + lVar5) = local_58[0];
  local_58[0] = 0;
  puVar1 = (undefined4 *)(lVar3 + 0x40 + lVar5);
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar5);
  *puVar1 = local_48;
  puVar1[1] = uStack_44;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  if ((*(longlong *)(lVar3 + 0x10 + lVar5) == 0) && (local_68 != 0)) {
    (**(code **)(CONCAT44(uStack_44,local_48) + 0x10))();
  }
  if (*param_3 != 0) {
    plVar4 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c7e7b4 FUN_140c7e7b4 body=272 status=ok
// SIG undefined FUN_140c7e7b4(void)

void FUN_140c7e7b4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0x50;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140c7e8d2 FUN_140c7e8d2 body=45 status=ok
// SIG undefined FUN_140c7e8d2(void)

undefined8 FUN_140c7e8d2(undefined8 param_1,int param_2)

{
  FUN_140c7e900();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 140c7e900 FUN_140c7e900 body=391 status=ok
// SIG undefined FUN_140c7e900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c7e900(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b073630;
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_140c7ea88(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1408ff272(param_1 + 0x13);
  param_1[0xf] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (*(int *)((longlong)param_1 + 0x94) != 0) {
    FUN_140115c12(param_1 + 0x11,0);
  }
  param_1[0x10] = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  param_1[0xb] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    FUN_140115c12(param_1 + 0xd,0);
  }
  param_1[0xc] = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140c7ea51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140c7ea88 FUN_140c7ea88 body=55 status=ok
// SIG undefined FUN_140c7ea88(void)

void FUN_140c7ea88(longlong *param_1)

{
  FUN_140c7eac0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c7eac0 FUN_140c7eac0 body=123 status=ok
// SIG undefined FUN_140c7eac0(void)

void FUN_140c7eac0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 140c7eb3c FUN_140c7eb3c body=597 status=ok
// SIG undefined FUN_140c7eb3c(void)

void FUN_140c7eb3c(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  ulonglong *param_5,ulonglong param_6)

{
  byte bVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  code *pcVar6;
  int iVar7;
  ulonglong uVar8;
  
  *(undefined8 *)(param_1 + 0x48) = DAT_14c9c0ea0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  uVar8 = *param_5;
  if ((uVar8 & 0x40) != 0) {
    uVar8 = param_6;
    FUN_140c7ef0c(param_1,param_4,param_3,0,param_6);
    FUN_140c7ed92(param_1,param_4,param_3,2,uVar8 & 0xffffffff00000000,param_6);
    FUN_140c7ef0c(param_1,param_4,param_3,1,param_6);
    FUN_140c7ed92(param_1,param_4,param_3,2,1,param_6);
    FUN_140c7ef0c(param_1,param_4,param_3,2,param_6);
    cVar5 = '\x02';
    iVar7 = 2;
    goto LAB_140c7ec46;
  }
  if ((uVar8 & 0x600000000000) == 0) {
    return;
  }
  pcVar2 = *(code **)(*param_3 + 0x38);
  plVar3 = param_3;
  if (pcVar2 == FUN_144765e18) {
    plVar3 = (longlong *)param_3[9];
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)param_3[8];
      pcVar2 = *(code **)(*plVar3 + 0x420);
      pcVar6 = (code *)&LAB_144b24e8a;
    }
    else {
      pcVar2 = *(code **)(*plVar3 + 0x420);
      pcVar6 = (code *)&LAB_14497e108;
    }
    if (pcVar2 != pcVar6) goto LAB_140c7ed73;
  }
  else {
LAB_140c7ed73:
    (*pcVar2)(plVar3);
  }
  lVar4 = *param_3;
  if (*(code **)(lVar4 + 0x100) == (code *)&LAB_144b25520) {
    bVar1 = (*(byte *)(param_3[8] + 0x1d0) & 0x40) >> 6;
  }
  else {
    bVar1 = (**(code **)(lVar4 + 0x100))(param_3);
    lVar4 = *param_3;
  }
  iVar7 = 2 - (uint)bVar1;
  pcVar2 = *(code **)(lVar4 + 0x38);
  if (pcVar2 == FUN_144765e18) {
    plVar3 = (longlong *)param_3[9];
    if (plVar3 == (longlong *)0x0) {
      pcVar2 = *(code **)(*(longlong *)param_3[8] + 0x420);
      if (pcVar2 != (code *)&LAB_144b24e8a) goto LAB_140c7ed8a;
      bVar1 = *(byte *)((longlong *)param_3[8] + 0x30);
    }
    else {
      pcVar2 = *(code **)(*plVar3 + 0x420);
      if (pcVar2 != (code *)&LAB_14497e108) goto LAB_140c7ed8a;
      bVar1 = *(byte *)(plVar3 + 0x2a);
    }
    bVar1 = (bVar1 & 0x10) >> 4;
  }
  else {
LAB_140c7ed8a:
    bVar1 = (*pcVar2)();
  }
  cVar5 = (((uint)uVar8 >> 0x10 & 1) != 0) + '\x01';
  if (bVar1 != 0) {
    cVar5 = '\0';
  }
  if ((uVar8 & 0x20000) != 0) {
    cVar5 = '\0';
  }
LAB_140c7ec46:
  FUN_140c7ed92(param_1,param_4,param_3,iVar7,cVar5,param_6);
  return;
}



// FUNCTION 140c7ed92 FUN_140c7ed92 body=376 status=ok
// SIG undefined FUN_140c7ed92(void)

void FUN_140c7ed92(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  char cVar1;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  ulonglong local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined2 local_5e;
  undefined1 *local_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_170 = &local_108;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_168 = &local_128;
  local_128 = 0;
  uStack_120 = 0;
  local_178 = &local_118;
  cVar1 = FUN_1447e3edc(param_3,*param_2,*(undefined4 *)(param_1 + 0x20),1);
  if (cVar1 != '\0') {
    local_b8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_5c = &DAT_100000002;
    local_68 = DAT_14ca4af90 | 0x400000c;
    local_70 = 0xb;
    local_60 = 1;
    local_5e = 1;
    local_5f = ((uint)DAT_14ca4af90 >> 0xc & 1) == 0;
    local_138 = *(undefined4 *)(param_1 + 8);
    local_130 = param_6;
    local_140 = 1;
    local_148 = 0;
    local_150 = 0;
    local_158 = 0;
    local_160 = 0;
    local_168 = (undefined8 *)CONCAT44(local_168._4_4_,param_5);
    local_170 = (undefined8 *)CONCAT44(local_170._4_4_,param_4);
    local_178 = &local_118;
    FUN_140b07aec(param_2,param_3,param_1 + 0x40);
  }
  if ((local_50 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c7ef0c FUN_140c7ef0c body=375 status=ok
// SIG undefined FUN_140c7ef0c(void)

void FUN_140c7ef0c(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  ulonglong local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined2 local_5e;
  undefined1 *local_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_170 = &local_108;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_168 = &local_128;
  local_128 = 0;
  uStack_120 = 0;
  local_178 = &local_118;
  cVar1 = FUN_1400cee52(param_3,*param_2,*(undefined4 *)(param_1 + 0x20),1);
  if (cVar1 != '\0') {
    local_b8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_5c = &DAT_100000002;
    local_68 = DAT_14ca4af90 | 0x400000c;
    local_70 = 0xb;
    local_60 = 1;
    local_5e = 1;
    local_5f = ((uint)DAT_14ca4af90 >> 0xc & 1) == 0;
    local_138 = *(undefined4 *)(param_1 + 8);
    local_130 = param_5;
    local_140 = 1;
    local_148 = 0;
    local_150 = 0;
    local_160 = 0;
    local_168 = (undefined8 *)CONCAT44(local_168._4_4_,param_4);
    local_158 = 1;
    local_170 = (undefined8 *)CONCAT44(local_170._4_4_,2);
    local_178 = &local_118;
    FUN_140b09aec(param_2,param_3,param_1 + 0x40);
  }
  if ((local_50 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c7f084 FUN_140c7f084 body=37 status=ok
// SIG undefined FUN_140c7f084(void)

void FUN_140c7f084(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000140c7f0a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 140c7f0b6 FUN_140c7f0b6 body=142 status=ok
// SIG undefined FUN_140c7f0b6(void)

void FUN_140c7f0b6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_f;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  local_28 = *(undefined4 *)(param_1 + 0x10);
  local_24 = *(undefined4 *)(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x10) = 0;
  local_20 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  local_18 = *(undefined4 *)(param_1 + 0x20);
  local_14 = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)(param_1 + 0x20) = 0;
  local_10 = *(undefined1 *)(param_1 + 0x28);
  local_f = *(undefined1 *)(param_1 + 0x29);
  FUN_140c7f146(param_2);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c7f146 FUN_140c7f146 body=139 status=ok
// SIG undefined FUN_140c7f146(void)

undefined8 * FUN_140c7f146(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e34ce0;
  param_1[1] = 0;
  param_1[1] = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 2) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[3] = 0;
  param_1[3] = param_2[2];
  param_2[2] = 0;
  *(int *)(param_1 + 4) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  *(char *)(param_1 + 5) = (char)param_2[4];
  *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_2 + 0x21);
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 140c7f1d1 FUN_140c7f1d1 body=83 status=ok
// SIG undefined FUN_140c7f1d1(void)

void FUN_140c7f1d1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c7f224(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b3cec70;
  *(undefined1 *)(puVar1 + 6) = 0;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  return;
}



// FUNCTION 140c7f224 FUN_140c7f224 body=102 status=ok
// SIG undefined FUN_140c7f224(void)

undefined8 * FUN_140c7f224(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14ab53440;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 140c7f28a FUN_140c7f28a body=41 status=ok
// SIG undefined FUN_140c7f28a(void)

longlong FUN_140c7f28a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_140c7f2b4();
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)iVar1 * 0xf0 + *(longlong *)(param_1 + 0x60);
  }
  return lVar2;
}



// FUNCTION 140c7f2b4 FUN_140c7f2b4 body=229 status=ok
// SIG undefined FUN_140c7f2b4(void)

ulonglong FUN_140c7f2b4(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x68);
  lVar4 = *(longlong *)(param_1 + 0x60);
  uVar6 = 0;
  if (0 < (int)uVar2) {
    uVar6 = 0;
    uVar9 = uVar2;
    do {
      uVar8 = (uVar9 >> 1) + (int)uVar6;
      lVar7 = (ulonglong)uVar8 * 0xf0;
      lVar1 = lVar4 + lVar7;
      uVar3 = *(uint *)(lVar4 + 0xa0 + lVar7);
      if ((uVar3 < *param_2) ||
         ((uVar3 == *param_2 &&
          ((*(uint *)(lVar1 + 0xa4) < param_2[1] ||
           ((*(uint *)(lVar1 + 0xa4) == param_2[1] &&
            ((*(uint *)(lVar1 + 0xa8) < param_2[2] ||
             ((*(uint *)(lVar1 + 0xa8) == param_2[2] && (*(uint *)(lVar1 + 0xac) < param_2[3])))))))
           ))))) {
        uVar6 = (ulonglong)(uVar8 + (uVar9 & 1));
      }
      bVar5 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar5);
  }
  if ((int)uVar6 < (int)uVar2) {
    lVar1 = lVar4 + uVar6 * 0xf0;
    uVar2 = *(uint *)(lVar4 + 0xa0 + uVar6 * 0xf0);
    if (uVar2 <= *param_2) {
      if (*param_2 != uVar2) {
        return uVar6;
      }
      if (*(uint *)(lVar1 + 0xa4) <= param_2[1]) {
        if (param_2[1] != *(uint *)(lVar1 + 0xa4)) {
          return uVar6;
        }
        if (*(uint *)(lVar1 + 0xa8) <= param_2[2]) {
          if (param_2[2] != *(uint *)(lVar1 + 0xa8)) {
            return uVar6;
          }
          if (*(uint *)(lVar1 + 0xac) <= param_2[3]) {
            return uVar6;
          }
        }
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 140c7f39c FUN_140c7f39c body=54 status=ok
// SIG undefined FUN_140c7f39c(void)

void FUN_140c7f39c(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 100) == '\x01') {
    iVar2 = FUN_1402e04a8();
    iVar1 = *(int *)(param_1 + 0x80);
    if ((iVar1 != iVar2) && (*(int *)(param_1 + 0x80) = iVar2, iVar2 < iVar1)) {
      FUN_1402e0832(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140c7f3d2 FUN_140c7f3d2 body=686 status=ok
// SIG undefined FUN_140c7f3d2(void)

void FUN_140c7f3d2(longlong *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  wchar_t *_Str;
  size_t sVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  double dVar8;
  undefined1 auStack_238 [44];
  int local_20c;
  undefined1 *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  char local_1f0;
  undefined1 local_1e8 [256];
  undefined1 local_e8 [128];
  undefined1 *local_68;
  undefined1 *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (param_1[0x51] != 0) {
    *(byte *)(param_1[0x51] + 0xa8) = *(byte *)((longlong)param_1 + 0x8c) >> 7;
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  if ((*(int *)((longlong)param_1 + 0x17c) == 0) ||
     (fVar1 = *(float *)(param_1 + 0x55), *(float *)(param_1 + 0x55) = param_2 + fVar1,
     param_2 + fVar1 <= 1.0)) goto LAB_140c7f448;
  *(undefined4 *)(param_1 + 0x55) = 0;
  if ((*(int *)((longlong)param_1 + 0x34) == 0) ||
     ((uVar5 = *(uint *)(param_1 + 6), (int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5))))
  goto LAB_140c7f448;
  plVar4 = (longlong *)
           ((ulonglong)((uVar5 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
  if ((plVar4 == (longlong *)0x0) ||
     ((((int)plVar4[2] != *(int *)((longlong)param_1 + 0x34) ||
       ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) || ((longlong *)*plVar4 == (longlong *)0x0))))
  goto LAB_140c7f448;
  lVar2 = (**(code **)(*(longlong *)*plVar4 + 0x180))();
  if ((lVar2 == 0) || (*(longlong **)(lVar2 + 0x178) == (longlong *)0x0)) goto LAB_140c7f448;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
LAB_140c7f635:
    uVar6 = 0;
  }
  else {
    uVar5 = *(uint *)(param_1 + 6);
    uVar6 = 0;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != *(int *)((longlong)param_1 + 0x34) ||
          ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_140c7f635;
      uVar6 = *puVar7;
    }
  }
  dVar8 = (double)(**(code **)(**(longlong **)(lVar2 + 0x178) + 0x640))();
  local_20c = (int)dVar8;
  local_208 = local_1e8;
  local_1f0 = '\0';
  local_1f8 = local_e8;
  local_200 = local_208;
  _Str = (wchar_t *)FUN_140c7f682(param_1,L"UpdateGameTime",&local_208);
  local_68 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_60 = (undefined1 *)0x0;
    local_58 = 0;
  }
  else {
    sVar3 = wcslen(_Str);
    local_58 = FUN_14475aa65(0,_Str,sVar3 & 0xffffffff);
    uVar5 = local_58 + 1;
    local_60 = (undefined1 *)0x0;
    if (0x80 < uVar5) {
      FUN_1446efa72(&local_68,0,uVar5,1);
      local_60 = local_68;
    }
    if (local_60 == (undefined1 *)0x0) {
      local_60 = local_e8;
    }
    FUN_14475a98a(local_60,uVar5,_Str,(int)sVar3 + 1);
  }
  FUN_140c7f7d4(uVar6,local_60,&local_20c);
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_1f0 == '\x01') {
    FUN_1400020a8(local_208);
  }
LAB_140c7f448:
  if ((local_50 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c7f682 FUN_140c7f682 body=337 status=ok
// SIG undefined FUN_140c7f682(void)

undefined8 FUN_140c7f682(longlong param_1,wchar_t *param_2,undefined8 *param_3)

{
  uint uVar1;
  void *_Src;
  undefined8 *puVar2;
  size_t sVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  
  puVar2 = (undefined8 *)param_3[1];
  if ((ulonglong)param_3[2] <= (longlong)puVar2 + 0xcU) {
    FUN_140213274(param_3,6);
    puVar2 = (undefined8 *)param_3[1];
  }
  *puVar2 = 0x6e006500760045;
  *(undefined4 *)(puVar2 + 1) = 0x5f0074;
  puVar5 = (undefined2 *)((longlong)puVar2 + 0xc);
  param_3[1] = puVar5;
  _Src = *(void **)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x28);
  iVar4 = uVar1 - 1;
  if (uVar1 == 0) {
    iVar4 = 0;
  }
  lVar6 = (longlong)iVar4;
  if ((ulonglong)param_3[2] <= (ulonglong)((longlong)puVar2 + lVar6 * 2 + 0xc)) {
    FUN_140213274(param_3,lVar6);
    puVar5 = (undefined2 *)param_3[1];
  }
  if (1 < uVar1) {
    memcpy(puVar5,_Src,lVar6 * 2);
    puVar5 = puVar5 + lVar6;
    param_3[1] = puVar5;
  }
  if ((undefined2 *)param_3[2] <= puVar5 + 1) {
    FUN_140213274(param_3,1);
    puVar5 = (undefined2 *)param_3[1];
  }
  param_3[1] = puVar5 + 1;
  *puVar5 = 0x5f;
  if (param_2 == (wchar_t *)0x0) {
    iVar4 = 0;
  }
  else {
    sVar3 = wcslen(param_2);
    iVar4 = (int)sVar3;
  }
  puVar5 = (undefined2 *)param_3[1];
  lVar6 = (longlong)iVar4;
  if ((undefined2 *)param_3[2] <= puVar5 + lVar6) {
    FUN_140213274(param_3,lVar6);
    puVar5 = (undefined2 *)param_3[1];
  }
  if (iVar4 != 0) {
    memcpy(puVar5,param_2,lVar6 * 2);
    puVar5 = puVar5 + lVar6;
    param_3[1] = puVar5;
  }
  *puVar5 = 0;
  return *param_3;
}



// FUNCTION 140c7f7d4 FUN_140c7f7d4 body=393 status=ok
// SIG undefined FUN_140c7f7d4(void)

/* WARNING: Removing unreachable block (ram,0x000140c7f940) */
/* WARNING: Removing unreachable block (ram,0x000140c7f94f) */
/* WARNING: Removing unreachable block (ram,0x000140c7f953) */

undefined8 FUN_140c7f7d4(longlong param_1,char *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined1 local_180 [256];
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_80 = 0;
  if (param_2 == (char *)0x0) {
    local_78 = 0;
    local_70 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_180,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(&local_198,local_78);
  local_188 = *param_3;
  local_48 = &PTR_FUN_14b9c1470;
  uStack_40 = local_198;
  uStack_38 = uStack_190;
  local_198 = 0;
  uStack_190 = 0;
  uStack_30 = local_188;
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar3 = 0;
  puVar3[2] = &LAB_140bb681c;
  puVar3[4] = 0;
  local_58 = 0;
  *(undefined4 *)(puVar3 + 6) = (undefined4)local_48;
  *(undefined4 *)((longlong)puVar3 + 0x34) = local_48._4_4_;
  *(undefined4 *)(puVar3 + 7) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_40._4_4_;
  *(undefined4 *)(puVar3 + 8) = (undefined4)uStack_38;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_38._4_4_;
  *(undefined4 *)(puVar3 + 9) = uStack_30;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_2c;
  local_68 = 0;
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    UNLOCK();
    LOCK();
    uVar4 = *puVar1;
    *puVar1 = puVar3;
    UNLOCK();
  }
  if (local_198 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if (local_80 != 0) {
    uVar4 = FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140c7f95e FUN_140c7f95e body=4568 status=ok
// SIG undefined FUN_140c7f95e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_140c7f95e(longlong param_1,double param_2,double *param_3,double *param_4,double param_5,
             double *param_6,undefined8 *param_7,undefined8 *param_8,undefined4 *param_9,
             undefined8 *param_10,double param_11,undefined1 param_12,double *param_13)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  bool bVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar43;
  float fVar44;
  double dVar31;
  double dVar32;
  double dVar46;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar45;
  undefined1 auVar42 [16];
  float fVar47;
  float fVar48;
  float fVar58;
  double dVar49;
  double dVar50;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  float fVar79;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  double dVar80;
  double dVar85;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar86;
  double dVar87;
  float fVar91;
  undefined1 auVar88 [16];
  float fVar90;
  float fVar92;
  undefined1 auVar89 [16];
  double dVar93;
  float fVar94;
  float fVar95;
  undefined1 auStack_5b8 [32];
  double *local_598;
  undefined8 *local_590;
  float *local_588;
  double *local_580;
  undefined1 **local_578;
  undefined1 local_570;
  undefined *local_568;
  double local_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  longlong local_538;
  double *local_530;
  double local_528;
  double *local_520;
  double *local_518;
  double *local_510;
  undefined1 *local_508;
  double *local_500;
  undefined8 *local_4f8;
  double *local_4f0;
  double *local_4e8;
  double *local_4e0;
  undefined8 *puStack_4d8;
  undefined8 *local_4d0;
  undefined4 *puStack_4c8;
  undefined8 *local_4c0;
  undefined1 *local_4b8;
  undefined1 local_4a9;
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double dStack_490;
  undefined1 local_488 [16];
  double local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  double local_440;
  double local_438;
  double dStack_430;
  double local_428;
  undefined1 local_411;
  double local_410 [3];
  longlong local_3f8;
  longlong *local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  double local_388;
  undefined1 local_380;
  double local_378;
  undefined8 local_368;
  undefined8 uStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  undefined1 local_338 [8];
  float fStack_330;
  float local_328;
  float local_324;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [8];
  float fStack_280;
  undefined1 local_278 [8];
  float fStack_270;
  undefined1 local_268 [8];
  undefined8 uStack_260;
  undefined1 local_258 [8];
  undefined8 uStack_250;
  longlong local_248;
  undefined8 uStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 *local_228;
  double dStack_220;
  double local_218;
  double local_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined1 *local_1e8;
  undefined8 local_1e0;
  code *local_1d8;
  double local_1d0;
  float local_1c8;
  float local_1c4;
  undefined1 *local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined1 *local_158;
  double dStack_150;
  code *local_148;
  double dStack_140;
  float local_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 auStack_108 [24];
  ulonglong local_f0;
  
  pdVar8 = param_13;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  local_411 = param_12;
  dVar49 = *param_13;
  dVar46 = param_13[1];
  dVar3 = param_13[2];
  local_428 = param_4[2] * dVar3;
  dStack_430 = param_4[1] * dVar46;
  dVar93 = *param_4 * dVar49;
  local_440 = SQRT(local_428 * local_428 + dVar93 * dVar93 + dStack_430 * dStack_430);
  dVar87 = 1.0 / local_440;
  local_438 = (double)(~-(ulonglong)(2.2250738585072014e-308 < local_440) & 0x3ff0000000000000 |
                      (ulonglong)(dVar93 * dVar87) &
                      -(ulonglong)(2.2250738585072014e-308 < local_440));
  if (2.2250738585072014e-308 < local_440) {
    local_428 = local_428 * dVar87;
    dStack_430 = dStack_430 * dVar87;
  }
  else {
    dStack_430 = 0.0;
    local_428 = 0.0;
  }
  local_520 = &local_438;
  local_518 = &local_440;
  local_4a8 = *param_3;
  dStack_4a0 = param_3[1];
  local_498 = param_3[2];
  dStack_490 = param_3[3];
  local_478 = param_3[6] * dVar3;
  dVar93 = param_3[5] * dVar46;
  local_510 = &local_4a8;
  local_488._8_4_ = SUB84(dVar93,0);
  local_488._0_8_ = param_3[4] * dVar49;
  local_488._12_4_ = (int)((ulonglong)dVar93 >> 0x20);
  uStack_470 = 0;
  local_468 = 0x3ff0000000000000;
  uStack_460 = 0x3ff0000000000000;
  local_458 = 0x3ff0000000000000;
  uStack_450 = 0;
  local_4b8 = &local_4a9;
  local_4a9 = 0;
  local_530 = param_13;
  local_508 = &local_411;
  local_4f8 = &param_11;
  local_4e8 = &param_5;
  local_4e0 = param_6;
  puStack_4d8 = param_7;
  local_4d0 = param_8;
  puStack_4c8 = param_9;
  local_4c0 = param_10;
  local_538 = param_1;
  local_528 = param_2;
  local_500 = param_3;
  local_4f0 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e599de(&local_538,param_1 + 0x60);
  }
  else {
    local_3f0 = (longlong *)(param_1 + 0x70);
    local_378 = 0.0;
    if (*(char *)(param_1 + 0xd8) == '\x01') {
      uVar24 = ~-(ulonglong)(0.0 <= dVar49) & ((&DAT_149931160)[0.0 <= dVar46] ^ 0x8000000000000000)
               | -(ulonglong)(0.0 <= dVar49) & (&DAT_149931160)[0.0 <= dVar46];
      local_378 = (double)(~-(ulonglong)(0.0 <= dVar3) & (uVar24 ^ 0x8000000000000000) |
                          uVar24 & -(ulonglong)(0.0 <= dVar3));
    }
    local_2c0 = param_13[2];
    local_2d0 = *param_13;
    dStack_2c8 = param_13[1];
    local_3e8 = 0;
    uStack_3e0 = 0;
    local_3d8 = 0;
    uStack_3d4 = 0;
    uStack_3d0 = 0;
    uStack_3cc = 0x3ff00000;
    local_3c8 = 0;
    uStack_3c0 = 0;
    local_3b8 = 0;
    uStack_3b0 = 0;
    local_3a8 = 0x3ff0000000000000;
    uStack_3a0 = 0x3ff0000000000000;
    local_398 = 0x3ff0000000000000;
    uStack_390 = 0;
    local_380 = param_12;
    local_328 = (float)local_440;
    local_324 = 3.4028235e+38;
    local_2f0 = 0xffffffff;
    uStack_260 = 0x7f7fc99e7f7fc99e;
    local_268 = (undefined1  [8])0x7f7fc99e7f7fc99e;
    uStack_250 = 0xff7fc99eff7fc99e;
    local_258 = (undefined1  [8])0xff7fc99eff7fc99e;
    local_338._0_4_ = (undefined4)local_438;
    local_338._4_4_ = (undefined4)dStack_430;
    fStack_330 = (float)local_428;
    register0x0000120c = 0;
    local_368 = CONCAT44((float)local_378,(float)local_378);
    fVar28 = (float)local_498;
    fVar43 = (float)dStack_490;
    fVar47 = (float)local_4a8;
    fVar58 = (float)dStack_4a0;
    local_2a8._0_4_ = (float)(param_3[4] * dVar49);
    local_2a8._4_4_ = (float)dVar93;
    local_2a8._8_4_ = (float)local_478;
    local_2a8._12_4_ = 0;
    fVar29 = fVar47 * fVar47 + fVar58 * fVar58;
    fVar44 = fVar28 * fVar28 + fVar43 * fVar43;
    auVar60._0_4_ = fVar44 + fVar29;
    auVar60._4_4_ = fVar44 + fVar29;
    auVar60._8_4_ = fVar29 + fVar44;
    auVar60._12_4_ = fVar29 + fVar44;
    auVar88._4_4_ = -(uint)(1e-08 <= auVar60._4_4_);
    auVar88._0_4_ = -(uint)(1e-08 <= auVar60._0_4_);
    auVar88._8_4_ = -(uint)(1e-08 <= auVar60._8_4_);
    auVar88._12_4_ = -(uint)(1e-08 <= auVar60._12_4_);
    auVar60 = sqrtps(auVar60,auVar60);
    auVar60 = divps(_DAT_1499314a0,auVar60);
    auVar62._0_4_ = auVar60._0_4_ * fVar47;
    auVar62._4_4_ = auVar60._4_4_ * fVar58;
    auVar62._8_4_ = auVar60._8_4_ * fVar28;
    auVar62._12_4_ = auVar60._12_4_ * fVar43;
    local_2b8 = blendvps(_DAT_149932320,auVar62,auVar88);
    local_298._0_4_ = (float)local_438;
    local_298._4_4_ = (float)dStack_430;
    local_298._8_4_ = (float)local_428;
    local_298._12_4_ = 0;
    local_238 = *(double *)((longlong)param_2 + 0x10);
    local_210 = local_238 + *(double *)((longlong)param_2 + 0x30);
    local_218 = local_238 + *(double *)((longlong)param_2 + 0x28);
    dStack_220 = local_238 + *(double *)((longlong)param_2 + 0x20);
    local_228 = (undefined1 *)(*(double *)((longlong)param_2 + 0x30) - local_238);
    uStack_230 = *(double *)((longlong)param_2 + 0x28) - local_238;
    local_238 = *(double *)((longlong)param_2 + 0x20) - local_238;
    local_3f8 = param_1;
    local_388 = param_2;
    uStack_360 = local_368;
    local_358 = local_438;
    dStack_350 = dStack_430;
    local_348 = local_428;
    FUN_1400c6592(&local_238,local_128,&local_4a8);
    dVar7 = param_11;
    local_268._0_4_ = (undefined4)(double)local_128._0_8_;
    local_268._4_4_ = (undefined4)(double)local_128._8_8_;
    uStack_260._0_4_ = (float)(double)local_118._0_8_;
    uStack_260._4_4_ = 0.0;
    local_258._0_4_ = (undefined4)(double)local_118._8_8_;
    local_258._4_4_ = (undefined4)(double)auStack_108._0_8_;
    uStack_250._0_4_ = (float)(double)auStack_108._8_8_;
    uStack_250._4_4_ = 0.0;
    dVar32 = *param_3;
    dVar50 = param_3[1];
    dVar59 = param_3[2];
    dVar31 = *(double *)((longlong)param_2 + 0x20);
    dVar6 = *(double *)((longlong)param_2 + 0x28);
    dVar87 = *(double *)((longlong)param_2 + 0x30) * 1.0;
    dVar49 = param_3[3];
    dVar46 = param_3[3];
    dVar80 = dVar6 * dVar32 - dVar50 * dVar31;
    dVar85 = dVar87 * dVar50 - dVar59 * dVar6;
    dVar93 = dVar31 * dVar59 - dVar32 * dVar87;
    dVar85 = dVar85 + dVar85;
    dVar93 = dVar93 + dVar93;
    dVar80 = dVar80 + dVar80;
    dVar3 = *(double *)((longlong)param_2 + 0x10);
    lVar14 = 0;
    do {
      uVar24 = -(ulonglong)(ABS(pdVar8[lVar14]) < 9.999999974752427e-07);
      local_410[lVar14] =
           (double)(uVar24 & 0x412e8480014aeccc | ~uVar24 & (ulonglong)(1.0 / pdVar8[lVar14]));
      lVar14 = lVar14 + 1;
    } while (lVar14 != 3);
    local_560 = param_5;
    dVar51 = param_5;
    if (*(int *)(param_1 + 0xe8) != 0) {
      dVar31 = DAT_14c8464e0 + dVar31 + dVar49 * dVar85 + (dVar80 * dVar50 - dVar59 * dVar93);
      dVar46 = DAT_14c8464e8 + dVar6 + dVar46 * dVar93 + (dVar59 * dVar85 - dVar32 * dVar80);
      dVar49 = DAT_14c8464f0 + dVar80 * dVar49 + dVar87 + (dVar93 * dVar32 - dVar50 * dVar85);
      dVar59 = dVar46 - dVar3;
      dVar50 = dVar49 - dVar3;
      dVar32 = dVar31 - dVar3;
      dVar87 = (dVar3 + dVar49) - dVar50;
      dVar93 = (dVar3 + dVar46) - dVar59;
      dVar31 = (dVar3 + dVar31) - dVar32;
      dVar49 = param_3[6];
      dVar46 = param_3[5];
      dVar3 = param_3[4];
      local_548 = *param_4;
      dStack_540 = param_4[1];
      local_558 = param_4[2];
      dStack_550 = 0.0;
      local_248 = 0;
      uStack_240 = 0;
      FUN_14481578e(&local_248,0x10);
      uVar24 = uStack_240;
      uVar23 = (ulonglong)(int)uStack_240;
      uVar11 = (int)uStack_240 + 1;
      uStack_240 = CONCAT44(uStack_240._4_4_,uVar11);
      if (uStack_240._4_4_ < uVar11) {
        FUN_1446f48e2(&local_248,uVar24 & 0xffffffff);
      }
      *(undefined4 *)(local_248 + uVar23 * 4) = 0;
      if ((int)uStack_240 != 0) {
        fVar29 = (float)((dVar87 * 0.5 + dVar50) * local_410[2] + dVar49);
        fVar44 = (float)((dVar31 * 0.5 + dVar32) * local_410[0] + dVar3);
        fVar47 = (float)((dVar93 * 0.5 + dVar59) * local_410[1] + dVar46);
        fVar43 = (float)(dVar87 * ABS(local_410[2]) * 0.5 + dVar7);
        fVar58 = (float)(dVar31 * ABS(local_410[0]) * 0.5 + dVar7);
        fVar94 = (float)(dVar93 * ABS(local_410[1]) * 0.5 + dVar7);
        fVar28 = (float)local_560;
        auVar81._4_4_ = (float)dStack_540;
        auVar81._0_4_ = (float)local_548;
        auVar81._8_4_ = (float)local_558;
        auVar81._12_4_ = (float)dStack_550;
        auVar88 = divps(_DAT_1499314a0,auVar81);
        uVar11 = -(uint)(ABS((float)local_548) < 1e-08);
        uVar25 = -(uint)(ABS((float)dStack_540) < 1e-08);
        uVar26 = -(uint)(ABS((float)local_558) < 1e-08);
        uVar27 = -(uint)(ABS((float)dStack_550) < 1e-08);
        do {
          lVar14 = (longlong)(int)uStack_240;
          uStack_240 = CONCAT44(uStack_240._4_4_,(int)uStack_240 + -1);
          lVar20 = (longlong)*(int *)(local_248 + -4 + lVar14 * 4) * 0x50 +
                   *(longlong *)(param_1 + 0xe0);
          lVar14 = 0;
          bVar9 = true;
          do {
            bVar21 = bVar9;
            uVar24 = uStack_240;
            iVar4 = *(int *)(lVar20 + 0x40 + lVar14 * 4);
            lVar22 = (longlong)iVar4;
            if (lVar22 != -1) {
              lVar16 = lVar14 * 0x20;
              pfVar2 = (float *)(lVar20 + 0x10 + lVar16);
              pfVar1 = (float *)(lVar20 + lVar16);
              auVar52._4_4_ = -(uint)(fVar47 < pfVar1[1] - fVar94);
              auVar52._0_4_ = -(uint)(fVar44 < *pfVar1 - fVar58);
              auVar52._8_4_ = -(uint)(fVar29 < pfVar1[2] - fVar43);
              auVar52._12_4_ = -(uint)(0.0 < pfVar1[3] - 0.0);
              auVar70._4_4_ = -(uint)(pfVar2[1] + fVar94 < fVar47);
              auVar70._0_4_ = -(uint)(*pfVar2 + fVar58 < fVar44);
              auVar70._8_4_ = -(uint)(pfVar2[2] + fVar43 < fVar29);
              auVar70._12_4_ = -(uint)(pfVar2[3] + 0.0 < 0.0);
              auVar70 = auVar70 | auVar52;
              auVar71._0_4_ = auVar70._0_4_ & uVar11;
              auVar71._4_4_ = auVar70._4_4_ & uVar25;
              auVar71._8_4_ = auVar70._8_4_ & uVar26;
              auVar71._12_4_ = auVar70._12_4_ & uVar27;
              iVar15 = movmskps((int)lVar16,auVar71);
              if (iVar15 == 0) {
                auVar53._4_4_ = fVar28;
                auVar53._0_4_ = fVar28;
                auVar53._8_4_ = fVar28;
                auVar53._12_4_ = fVar28;
                fVar86 = auVar88._0_4_;
                fVar90 = auVar88._4_4_;
                fVar91 = auVar88._8_4_;
                fVar92 = auVar88._12_4_;
                auVar61._0_4_ = ((*pfVar2 + fVar58) - fVar44) * fVar86;
                auVar61._4_4_ = ((pfVar2[1] + fVar94) - fVar47) * fVar90;
                auVar61._8_4_ = ((pfVar2[2] + fVar43) - fVar29) * fVar91;
                auVar61._12_4_ = ((pfVar2[3] + 0.0) - 0.0) * fVar92;
                auVar72._0_8_ =
                     CONCAT44(~uVar25 & (uint)(((pfVar1[1] - fVar94) - fVar47) * fVar90),
                              ~uVar11 & (uint)(((*pfVar1 - fVar58) - fVar44) * fVar86));
                auVar72._8_4_ = ~uVar26 & (uint)(((pfVar1[2] - fVar43) - fVar29) * fVar91);
                auVar72._12_4_ = ~uVar27 & (uint)(((pfVar1[3] - 0.0) - 0.0) * fVar92);
                auVar33._4_4_ = uVar25;
                auVar33._0_4_ = uVar11;
                auVar33._8_4_ = uVar26;
                auVar33._12_4_ = uVar27;
                auVar62 = blendvps(auVar61,auVar53,auVar33);
                auVar34._8_4_ = auVar72._8_4_;
                auVar34._0_8_ = auVar72._0_8_;
                auVar34._12_4_ = auVar72._12_4_;
                auVar60 = minps(auVar34,auVar62);
                auVar62 = maxps(auVar72,auVar62);
                auVar35._12_4_ = auVar60._12_4_;
                auVar63._0_8_ = auVar60._4_8_;
                auVar63._8_4_ = auVar60._0_4_;
                auVar63._12_4_ = auVar35._12_4_;
                auVar81 = maxps(auVar60,auVar63);
                auVar35._4_4_ = auVar60._0_4_;
                auVar35._0_4_ = auVar60._8_4_;
                auVar35._8_4_ = auVar60._4_4_;
                auVar60 = maxps(auVar81,auVar35);
                auVar81 = maxps(auVar60,ZEXT816(0));
                auVar73._12_4_ = auVar62._12_4_;
                auVar36._0_8_ = auVar62._4_8_;
                auVar36._8_4_ = auVar62._0_4_;
                auVar36._12_4_ = auVar73._12_4_;
                auVar60 = minps(auVar62,auVar36);
                auVar73._4_4_ = auVar62._0_4_;
                auVar73._0_4_ = auVar62._8_4_;
                auVar73._8_4_ = auVar62._4_4_;
                auVar60 = minps(auVar60,auVar73);
                auVar60 = minps(auVar60,auVar53);
                auVar64._4_4_ = -(uint)(auVar60._4_4_ < auVar81._4_4_);
                auVar64._0_4_ = -(uint)(auVar60._0_4_ < auVar81._0_4_);
                auVar64._8_4_ = -(uint)(auVar60._8_4_ < auVar81._8_4_);
                auVar64._12_4_ = -(uint)(auVar60._12_4_ < auVar81._12_4_);
                iVar15 = movmskps(0,auVar64);
                if (iVar15 == 0) {
                  iVar15 = *(int *)(lVar20 + 0x48 + lVar14 * 4);
                  if (iVar15 == 0) {
                    lVar14 = (longlong)(int)uStack_240;
                    uVar12 = (int)uStack_240 + 1;
                    uStack_240 = CONCAT44(uStack_240._4_4_,uVar12);
                    if (uStack_240._4_4_ < uVar12) {
                      FUN_1446f48e2(&local_248,uVar24 & 0xffffffff);
                    }
                    *(int *)(local_248 + lVar14 * 4) = iVar4;
                  }
                  else if (0 < iVar15) {
                    lVar14 = lVar22 << 0x20;
                    uVar24 = lVar22 << 5 | 0x10;
                    do {
                      lVar16 = *(longlong *)(param_1 + 0xf0);
                      pfVar1 = (float *)(lVar16 + uVar24);
                      pfVar2 = (float *)(lVar16 + -0x10 + uVar24);
                      auVar54._4_4_ = -(uint)(fVar47 < pfVar2[1] - fVar94);
                      auVar54._0_4_ = -(uint)(fVar44 < *pfVar2 - fVar58);
                      auVar54._8_4_ = -(uint)(fVar29 < pfVar2[2] - fVar43);
                      auVar54._12_4_ = -(uint)(0.0 < pfVar2[3] - 0.0);
                      auVar74._4_4_ = -(uint)(pfVar1[1] + fVar94 < fVar47);
                      auVar74._0_4_ = -(uint)(*pfVar1 + fVar58 < fVar44);
                      auVar74._8_4_ = -(uint)(pfVar1[2] + fVar43 < fVar29);
                      auVar74._12_4_ = -(uint)(pfVar1[3] + 0.0 < 0.0);
                      auVar74 = auVar74 | auVar54;
                      auVar75._0_4_ = auVar74._0_4_ & uVar11;
                      auVar75._4_4_ = auVar74._4_4_ & uVar25;
                      auVar75._8_4_ = auVar74._8_4_ & uVar26;
                      auVar75._12_4_ = auVar74._12_4_ & uVar27;
                      iVar13 = movmskps((int)lVar16,auVar75);
                      if (iVar13 == 0) {
                        auVar55._4_4_ = fVar28;
                        auVar55._0_4_ = fVar28;
                        auVar55._8_4_ = fVar28;
                        auVar55._12_4_ = fVar28;
                        auVar65._0_4_ = ((*pfVar1 + fVar58) - fVar44) * fVar86;
                        auVar65._4_4_ = ((pfVar1[1] + fVar94) - fVar47) * fVar90;
                        auVar65._8_4_ = ((pfVar1[2] + fVar43) - fVar29) * fVar91;
                        auVar65._12_4_ = ((pfVar1[3] + 0.0) - 0.0) * fVar92;
                        auVar76._0_8_ =
                             CONCAT44(~uVar25 & (uint)(((pfVar2[1] - fVar94) - fVar47) * fVar90),
                                      ~uVar11 & (uint)(((*pfVar2 - fVar58) - fVar44) * fVar86));
                        auVar76._8_4_ = ~uVar26 & (uint)(((pfVar2[2] - fVar43) - fVar29) * fVar91);
                        auVar76._12_4_ = ~uVar27 & (uint)(((pfVar2[3] - 0.0) - 0.0) * fVar92);
                        auVar37._4_4_ = uVar25;
                        auVar37._0_4_ = uVar11;
                        auVar37._8_4_ = uVar26;
                        auVar37._12_4_ = uVar27;
                        auVar62 = blendvps(auVar65,auVar55,auVar37);
                        auVar38._8_4_ = auVar76._8_4_;
                        auVar38._0_8_ = auVar76._0_8_;
                        auVar38._12_4_ = auVar76._12_4_;
                        auVar60 = minps(auVar38,auVar62);
                        auVar62 = maxps(auVar76,auVar62);
                        auVar39._12_4_ = auVar60._12_4_;
                        auVar66._0_8_ = auVar60._4_8_;
                        auVar66._8_4_ = auVar60._0_4_;
                        auVar66._12_4_ = auVar39._12_4_;
                        auVar81 = maxps(auVar60,auVar66);
                        auVar39._4_4_ = auVar60._0_4_;
                        auVar39._0_4_ = auVar60._8_4_;
                        auVar39._8_4_ = auVar60._4_4_;
                        auVar60 = maxps(auVar81,auVar39);
                        auVar81 = maxps(auVar60,ZEXT816(0));
                        auVar77._12_4_ = auVar62._12_4_;
                        auVar40._0_8_ = auVar62._4_8_;
                        auVar40._8_4_ = auVar62._0_4_;
                        auVar40._12_4_ = auVar77._12_4_;
                        auVar60 = minps(auVar62,auVar40);
                        auVar77._4_4_ = auVar62._0_4_;
                        auVar77._0_4_ = auVar62._8_4_;
                        auVar77._8_4_ = auVar62._4_4_;
                        auVar60 = minps(auVar60,auVar77);
                        auVar60 = minps(auVar60,auVar55);
                        auVar67._4_4_ = -(uint)(auVar60._4_4_ < auVar81._4_4_);
                        auVar67._0_4_ = -(uint)(auVar60._0_4_ < auVar81._0_4_);
                        auVar67._8_4_ = -(uint)(auVar60._8_4_ < auVar81._8_4_);
                        auVar67._12_4_ = -(uint)(auVar60._12_4_ < auVar81._12_4_);
                        iVar13 = movmskps(0,auVar67);
                        if (iVar13 == 0) {
                          fVar48 = (float)local_2c0;
                          fVar69 = (float)local_2d0;
                          fVar79 = (float)dStack_2c8;
                          lVar16 = *local_3f0;
                          lVar18 = lVar14 >> 0x20;
                          uVar17 = (ulonglong)*(ushort *)(lVar16 + lVar18 * 6);
                          lVar5 = *(longlong *)(local_3f8 + 0x48);
                          uVar19 = (ulonglong)*(ushort *)(lVar16 + 2 + lVar18 * 6);
                          auVar41._8_8_ = 0;
                          auVar41._0_8_ = *(ulonglong *)(lVar5 + uVar17 * 0xc);
                          auVar60 = insertps(auVar41,*(undefined4 *)(lVar5 + 8 + uVar17 * 0xc),0x28)
                          ;
                          uVar17 = (ulonglong)*(ushort *)(lVar16 + 4 + lVar18 * 6);
                          auVar56._8_8_ = 0;
                          auVar56._0_8_ = *(ulonglong *)(lVar5 + uVar19 * 0xc);
                          auVar62 = insertps(auVar56,*(undefined4 *)(lVar5 + 8 + uVar19 * 0xc),0x28)
                          ;
                          auVar68._8_8_ = 0;
                          auVar68._0_8_ = *(ulonglong *)(lVar5 + uVar17 * 0xc);
                          auVar81 = insertps(auVar68,*(undefined4 *)(lVar5 + 8 + uVar17 * 0xc),0x28)
                          ;
                          fVar30 = auVar60._0_4_ * fVar69;
                          fVar45 = auVar60._4_4_ * fVar79;
                          local_128._0_8_ = CONCAT44(fVar45,fVar30);
                          local_128._8_4_ = auVar60._8_4_ * fVar48;
                          local_128._12_4_ = auVar60._12_4_ * 0.0;
                          local_118._0_4_ = auVar62._0_4_ * fVar69;
                          local_118._4_4_ = auVar62._4_4_ * fVar79;
                          local_118._8_4_ = auVar62._8_4_ * fVar48;
                          local_118._12_4_ = auVar62._12_4_ * 0.0;
                          auStack_108._0_4_ = auVar81._0_4_ * fVar69;
                          auStack_108._4_4_ = auVar81._4_4_ * fVar79;
                          auStack_108._8_4_ = auVar81._8_4_ * fVar48;
                          auStack_108._12_4_ = auVar81._12_4_ * 0.0;
                          fVar69 = (auStack_108._4_4_ - fVar45) * (local_118._0_4_ - fVar30) -
                                   (local_118._4_4_ - fVar45) * (auStack_108._0_4_ - fVar30);
                          fVar79 = (auStack_108._8_4_ - local_128._8_4_) *
                                   (local_118._4_4_ - fVar45) -
                                   (local_118._8_4_ - local_128._8_4_) *
                                   (auStack_108._4_4_ - fVar45);
                          fVar95 = (auStack_108._0_4_ - fVar30) *
                                   (local_118._8_4_ - local_128._8_4_) -
                                   (local_118._0_4_ - fVar30) *
                                   (auStack_108._8_4_ - local_128._8_4_);
                          fVar48 = fStack_330 * fVar69 +
                                   (float)local_338._0_4_ * fVar79 + (float)local_338._4_4_ * fVar95
                          ;
                          auVar82._4_4_ = -(uint)(0.0 < fVar48 * local_368._4_4_);
                          auVar82._0_4_ = -(uint)(0.0 < fVar48 * (float)local_368);
                          auVar82._8_4_ = -(uint)(0.0 < fVar48 * (float)uStack_360);
                          auVar82._12_4_ = -(uint)(0.0 < fVar48 * uStack_360._4_4_);
                          uVar12 = movmskps((int)uVar23,auVar82);
                          uVar23 = (ulonglong)uVar12;
                          if (((local_378 != 0.0) || (NAN(local_378))) && ((char)uVar12 != '\0')) {
                            auVar78._8_4_ = local_128._8_4_;
                            auVar78._0_8_ = local_128._0_8_;
                            auVar78._12_4_ = local_128._12_4_;
                            auVar60 = minps(auVar78,local_118);
                            auVar60 = minps(auVar60,auStack_108._0_16_);
                            auVar83._8_4_ = local_128._8_4_;
                            auVar83._0_8_ = local_128._0_8_;
                            auVar83._12_4_ = local_128._12_4_;
                            auVar62 = maxps(auVar83,local_118);
                            auVar62 = maxps(auVar62,auStack_108._0_16_);
                            auVar84._4_4_ = -(uint)(auVar62._4_4_ < (float)local_268._4_4_);
                            auVar84._0_4_ = -(uint)(auVar62._0_4_ < (float)local_268._0_4_);
                            auVar84._8_4_ = -(uint)(auVar62._8_4_ < (float)uStack_260);
                            auVar84._12_4_ = -(uint)(auVar62._12_4_ < uStack_260._4_4_);
                            auVar89._4_4_ = -(uint)((float)local_258._4_4_ < auVar60._4_4_);
                            auVar89._0_4_ = -(uint)((float)local_258._0_4_ < auVar60._0_4_);
                            auVar89._8_4_ = -(uint)((float)uStack_250 < auVar60._8_4_);
                            auVar89._12_4_ = -(uint)(uStack_250._4_4_ < auVar60._12_4_);
                            iVar13 = movmskps((int)lVar5,auVar84 | auVar89);
                            if (iVar13 != 0) goto LAB_140c803b1;
                          }
                          auVar57._0_8_ =
                               CONCAT44(local_118._4_4_ - auStack_108._4_4_,
                                        local_118._0_4_ - auStack_108._0_4_) & 0x7fffffff7fffffff;
                          auVar57._8_4_ = ABS(local_118._8_4_ - auStack_108._8_4_);
                          auVar57._12_4_ = ABS(local_118._12_4_ - auStack_108._12_4_);
                          auVar42._0_8_ =
                               CONCAT44(fVar45 - local_118._4_4_,fVar30 - local_118._0_4_) &
                               0x7fffffff7fffffff;
                          auVar42._8_4_ = ABS(local_128._8_4_ - local_118._8_4_);
                          auVar42._12_4_ = ABS(local_128._12_4_ - local_118._12_4_);
                          auVar60 = maxps(auVar42,auVar57);
                          if (1e+10 < auVar60._8_4_ * auVar60._8_4_ +
                                      auVar60._0_4_ * auVar60._0_4_ + auVar60._4_4_ * auVar60._4_4_)
                          {
                            local_178 = (double)local_298._0_4_;
                            dStack_170 = (double)local_298._4_4_;
                            local_598 = &local_178;
                            local_168 = (double)local_298._8_4_;
                            dStack_160 = (double)local_298._12_4_;
                            local_198 = (double)local_2a8._0_4_;
                            dStack_190 = (double)local_2a8._4_4_;
                            local_188 = (double)local_2a8._8_4_;
                            dStack_180 = (double)local_2a8._12_4_;
                            local_1b8 = (double)local_2b8._0_4_;
                            dStack_1b0 = (double)local_2b8._4_4_;
                            local_1a8 = (double)local_2b8._8_4_;
                            dStack_1a0 = (double)local_2b8._12_4_;
                            local_1d0 = local_388;
                            local_1c8 = (float)*(double *)((longlong)local_388 + 0x10);
                            local_1c0 = &LAB_144a386ca;
                            local_1e8 = local_128;
                            local_1e0 = 0;
                            local_1d8 = FUN_14014b546;
                            local_570 = local_380;
                            local_578 = &local_158;
                            local_580 = &local_238;
                            local_588 = &local_12c;
                            local_590 = (undefined8 *)CONCAT44(local_590._4_4_,local_328 * fVar28);
                            local_1c4 = local_1c8;
                            cVar10 = FUN_146e5a99a();
                            register0x0000124c = (float)dStack_220;
                            fStack_280 = (float)(double)local_228;
                            local_288._0_4_ = (undefined4)local_238;
                            local_288._4_4_ = (undefined4)uStack_230;
                            register0x0000120c = (float)dStack_140;
                            fStack_270 = (float)(double)local_148;
                            local_278._0_4_ = (undefined4)(double)local_158;
                            local_278._4_4_ = (undefined4)dStack_150;
                          }
                          else {
                            local_238 = local_388;
                            uStack_230 = (double)CONCAT44((float)*(double *)
                                                                  ((longlong)local_388 + 0x10),
                                                          (float)*(double *)
                                                                  ((longlong)local_388 + 0x10));
                            local_228 = &LAB_144a386ca;
                            local_158 = local_128;
                            dStack_150 = 0.0;
                            local_148 = FUN_14014b546;
                            local_568 = &DAT_149f52c20;
                            local_570 = local_380;
                            local_578 = (undefined1 **)local_278;
                            local_580 = (double *)local_288;
                            local_588 = &local_12c;
                            local_590 = (undefined8 *)CONCAT44(local_590._4_4_,local_328 * fVar28);
                            local_598 = (double *)local_298;
                            cVar10 = FUN_1448541f8(&local_158,&local_238,local_2b8,local_2a8);
                          }
                          fVar30 = local_12c;
                          if (((cVar10 != '\0') && ((local_12c <= 0.0 || ((char)uVar12 == '\0'))))
                             && (local_12c < local_324 * local_328)) {
                            local_158 = (undefined1 *)(double)(float)local_278._0_4_;
                            dStack_150 = (double)(float)local_278._4_4_;
                            local_148 = (code *)(double)fStack_270;
                            local_238 = (double)(float)local_288._0_4_;
                            uStack_230 = (double)(float)local_288._4_4_;
                            local_228 = (undefined1 *)(double)fStack_280;
                            local_208 = local_2d0;
                            dStack_200 = dStack_2c8;
                            local_1f8 = local_2c0;
                            local_580 = (double *)&local_324;
                            local_588 = (float *)&local_320;
                            local_590 = &local_308;
                            local_598 = (double *)CONCAT44(local_598._4_4_,local_12c);
                            FUN_1409130d6(&local_208,&local_158,&local_238);
                            local_2f0 = (undefined4)lVar22;
                            local_2e8 = (double)fVar79;
                            dStack_2e0 = (double)fVar95;
                            local_2d8 = (double)fVar69;
                            fVar28 = local_324;
                            if (fVar30 <= 0.0) goto LAB_140c807c8;
                          }
                        }
                      }
LAB_140c803b1:
                      lVar22 = lVar22 + 1;
                      lVar14 = lVar14 + 0x100000000;
                      uVar24 = uVar24 + 0x20;
                    } while (lVar22 < iVar15 + iVar4);
                  }
                }
              }
            }
            lVar14 = 1;
            bVar9 = false;
          } while (bVar21);
        } while ((int)uStack_240 != 0);
      }
LAB_140c807c8:
      if (local_248 != 0) {
        FUN_1400020a8();
      }
      dVar51 = *local_4e8;
    }
    if ((double)local_324 <= dVar51) {
      *local_4e0 = (double)local_324;
      puStack_4d8[2] = local_310;
      *puStack_4d8 = local_320;
      puStack_4d8[1] = uStack_318;
      local_4d0[2] = local_2f8;
      *local_4d0 = local_308;
      local_4d0[1] = uStack_300;
      *puStack_4c8 = local_2f0;
      FUN_140490318(param_1,local_128);
      local_4c0[2] = local_118._0_8_;
      *local_4c0 = local_128._0_8_;
      local_4c0[1] = local_128._8_8_;
      *local_4b8 = 1;
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_5b8) == DAT_14c707940) {
    return local_4a9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c80b38 FUN_140c80b38 body=188 status=ok
// SIG undefined FUN_140c80b38(void)

undefined8 FUN_140c80b38(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar4 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar4 + 1U) {
    FUN_140c80c84((longlong *)(param_1 + 8),iVar4);
  }
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x18);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  uVar5 = FUN_140c80c4a();
  FUN_140005f6c(puVar3,uVar5,0,0);
  FUN_140c80bf6(puVar3,&local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c80bf6 FUN_140c80bf6 body=83 status=ok
// SIG undefined FUN_140c80bf6(void)

longlong * FUN_140c80bf6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_140c80c4a();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140c80c4a FUN_140c80c4a body=57 status=ok
// SIG undefined FUN_140c80c4a(void)

void FUN_140c80c4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b8e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b8e8 = FUN_140002ddd(FUN_14652d500,uVar1,L"MissionActionCondition_OnLoadFilter");
  }
  return;
}



// FUNCTION 140c80c84 FUN_140c80c84 body=370 status=ok
// SIG undefined FUN_140c80c84(void)

void FUN_140c80c84(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c80d0d;
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
LAB_140c80d0d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140c80e02 FUN_140c80e02 body=408 status=ok
// SIG undefined FUN_140c80e02(void)

undefined8 * FUN_140c80e02(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446f470e(&local_30,L"LightComponent0",1);
  uVar1 = FUN_140c81140();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar1,0);
  FUN_140c80f9c(param_1,param_2);
  *param_1 = &PTR_FUN_14aab5710;
  param_1[0x74] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb098e0) {
    FUN_144b3d300(&DAT_14cb098e0);
    if (DAT_14cb098e0 == -1) {
      FUN_140c81226();
      atexit((_func_5014 *)&LAB_14370c266);
      _Init_thread_footer(&DAT_14cb098e0);
    }
  }
  lVar2 = param_1[0x72];
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x74] = lVar2;
  *(undefined1 *)(lVar2 + 0x1fb) = 1;
  local_48 = 0xc056800000000000;
  local_40 = 0;
  uStack_38 = 0;
  local_58 = 0;
  FUN_14020f75c(param_1[0x74],&local_48,0,0);
  lVar2 = param_1[0x74];
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_1[0x74];
    }
  }
  param_1[0x39] = lVar2;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c80f9c FUN_140c80f9c body=188 status=ok
// SIG undefined FUN_140c80f9c(void)

undefined8 * FUN_140c80f9c(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a9ba760;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"LightComponent0",1);
  uVar1 = FUN_140c8105a();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x72] = lVar2;
  *(byte *)((longlong)param_1 + 0x62) = *(byte *)((longlong)param_1 + 0x62) | 0x10;
  *(undefined1 *)((longlong)param_1 + 0x17a) = 3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c8105a FUN_140c8105a body=228 status=ok
// SIG undefined FUN_140c8105a(void)

longlong FUN_140c8105a(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad1638 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14637e182;
    local_38 = &LAB_1479e3d8b;
    local_40 = &LAB_1463b8530;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x400;
    FUN_14081cfa3(L"/Script/Engine",L"LightComponent",&DAT_14cad1638,FUN_1463b850e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad1638;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c81140 FUN_140c81140 body=228 status=ok
// SIG undefined FUN_140c81140(void)

longlong FUN_140c81140(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad35c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b9dee;
    local_38 = &LAB_147a2e9c7;
    local_40 = FUN_1417c257c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x450;
    FUN_14081cfa3(L"/Script/Engine",L"SpotLightComponent",&DAT_14cad35c8,FUN_1463bf8d6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad35c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c81226 FUN_140c81226 body=186 status=ok
// SIG undefined FUN_140c81226(void)

void FUN_140c81226(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&DAT_14cb098c8,L"Lighting",1);
  local_40 = L"Lighting";
  local_38 = 8;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"SpriteCategory";
  local_38 = 0xe;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Lighting";
  local_38 = 8;
  FUN_140208c1e(&DAT_14cb098d0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c812e2 FUN_140c812e2 body=674 status=ok
// SIG undefined FUN_140c812e2(void)

undefined4
FUN_140c812e2(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  longlong lStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  lVar2 = DAT_14c9c7c78;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_158 = *(undefined4 *)(param_1 + 0x40);
  uStack_154 = *(undefined4 *)(param_1 + 0x44);
  lStack_150 = *(longlong *)(param_1 + 0x48);
  local_148 = *(undefined4 *)(param_1 + 0x50);
  uStack_144 = *(undefined4 *)(param_1 + 0x54);
  uStack_140 = *(undefined4 *)(param_1 + 0x58);
  uStack_13c = *(undefined4 *)(param_1 + 0x5c);
  local_138 = *(undefined4 *)(param_1 + 0x60);
  uStack_134 = *(undefined4 *)(param_1 + 100);
  uStack_130 = *(undefined4 *)(param_1 + 0x68);
  uStack_12c = *(undefined4 *)(param_1 + 0x6c);
  local_128 = *(undefined4 *)(param_1 + 0x70);
  uStack_124 = *(undefined4 *)(param_1 + 0x74);
  uStack_120 = *(undefined4 *)(param_1 + 0x78);
  uStack_11c = *(undefined4 *)(param_1 + 0x7c);
  if (*(int *)(param_1 + 0x80) == 5) {
    if (DAT_14c9c7c78 == 0) {
      lStack_150 = 0;
      uStack_120 = 0;
    }
    else {
      LOCK();
      *(int *)(DAT_14c9c7c78 + 8) = *(int *)(DAT_14c9c7c78 + 8) + 1;
      UNLOCK();
      lStack_150 = lVar2;
      uStack_120 = 0;
      LOCK();
      puVar1 = (uint *)(lVar2 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  local_188 = &local_118;
  uVar4 = FUN_140c81585(param_4,*param_3,&local_108,&local_f8);
  if ((char)uVar4 == '\0') goto LAB_140c813db;
  uVar8 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x20) * 2);
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_50 = 1;
  cVar3 = FUN_140052d29(uVar8);
  local_a8 = DAT_14ca4ae48 | 0x20009;
  if (cVar3 == '\0') {
    local_a8 = 0x20009;
  }
  cVar3 = FUN_14498f84a();
  if ((cVar3 == '\0') || (((&DAT_14ca814cc)[uVar8 * 0x3c] & 0x10) == 0)) {
    uVar5 = (&DAT_14ca814c8)[uVar8 * 0xf];
    if ((uVar5 >> 0x16 & 1) != 0) goto LAB_140c814ac;
    uVar6 = 0xe;
    uVar7 = 0x31;
  }
  else {
    uVar5 = (&DAT_14ca814c8)[uVar8 * 0xf];
LAB_140c814ac:
    uVar6 = 0x13;
    uVar7 = 0x22;
  }
  if ((uVar5 & 0x20) == 0) {
    uVar7 = uVar6;
  }
  local_b8 = CONCAT44(CONCAT31(local_b8._5_3_,uVar7),1);
  local_60 = *(undefined8 *)(param_2 + 0x38);
  local_68 = 0xb;
  local_58 = 1;
  local_56 = 1;
  local_54 = 0x22;
  local_57 = ((uint)local_60 >> 0xc & 1) == 0;
  local_170 = *(undefined4 *)(param_1 + 8);
  local_168 = param_7;
  local_178 = param_6;
  local_180 = param_5;
  local_188 = &local_108;
  local_55 = local_57;
  FUN_140c818fc(param_3,param_4,&local_158);
LAB_140c813db:
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c81585 FUN_140c81585 body=885 status=ok
// SIG undefined FUN_140c81585(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c81585(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  char cVar1;
  undefined1 auStack_1b8 [32];
  wchar_t *local_198;
  wchar_t *local_190;
  undefined4 local_188;
  undefined4 local_180;
  code *local_178;
  code *local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined8 local_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 local_c0 [12];
  undefined4 auStack_60 [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  memset(local_c0,0,0x90);
  local_c8 = &DAT_14ca640e0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca63e78) {
    FUN_144b3d300(&DAT_14ca63e78);
    if (DAT_14ca63e78 == -1) {
      FUN_1456da2ee();
      local_150 = &LAB_14712ac08;
      local_158 = &LAB_14712ac0c;
      local_160 = &LAB_14732a4f6;
      local_168 = &LAB_14178444c;
      local_170 = FUN_14732a4fa;
      local_178 = FUN_14732a522;
      local_190 = L"MainVertexShader";
      local_198 = L"/Engine/Private/VelocityShader.usf";
      local_140 = 0;
      local_148 = 0x108;
      local_180 = 1;
      local_188 = 0;
      FUN_140db5666(&DAT_14ca63dd0,2,&DAT_14ca63d68,L"FVelocityVS");
      _DAT_14ca63dd0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1430ca128);
      _Init_thread_footer(&DAT_14ca63e78);
    }
  }
  local_c0[DAT_14ca63e18] = &DAT_14ca63dd0;
  auStack_60[DAT_14ca63e18] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca63fa0) {
    FUN_144b3d300(&DAT_14ca63fa0);
    if (DAT_14ca63fa0 == -1) {
      FUN_1456da438();
      local_150 = &LAB_14712ac08;
      local_158 = &LAB_14712ac0c;
      local_160 = &LAB_14732a6c4;
      local_168 = &LAB_1404de8b2;
      local_170 = FUN_14732a6c8;
      local_178 = FUN_14732a6f0;
      local_190 = L"MainPixelShader";
      local_198 = L"/Engine/Private/VelocityShader.usf";
      local_140 = 0;
      local_148 = 0x108;
      local_180 = 1;
      local_188 = 3;
      FUN_140db5666(&DAT_14ca63ef8,2,&DAT_14ca63e90,L"FVelocityPS");
      _DAT_14ca63ef8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1430ca134);
      _Init_thread_footer(&DAT_14ca63fa0);
    }
  }
  local_c0[DAT_14ca63f40] = &DAT_14ca63ef8;
  auStack_60[DAT_14ca63f40] = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  lStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  cVar1 = FUN_14007744c(param_1,&local_c8,param_2);
  if (cVar1 != '\0') {
    if (lStack_130 != 0) {
      *param_5 = lStack_130;
      param_5[1] = local_138;
    }
    if (local_128 != 0) {
      *param_3 = local_128;
      param_3[1] = local_138;
    }
    if (lStack_110 != 0) {
      *param_4 = lStack_110;
      param_4[1] = local_138;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c818fc FUN_140c818fc body=2338 status=ok
// SIG undefined FUN_140c818fc(void)

/* WARNING: Removing unreachable block (ram,0x000140c8203f) */

void FUN_140c818fc(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined8 *param_5,int param_6,int param_7,uint param_8,longlong *param_9)

{
  void *_Dst;
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_4a8 [32];
  uint *local_488;
  undefined1 *local_480;
  longlong *local_470;
  undefined1 local_462 [2];
  undefined8 local_460;
  undefined1 local_455;
  uint local_454;
  undefined8 local_450 [6];
  longlong local_420;
  longlong local_418;
  longlong local_410;
  longlong local_408;
  undefined8 local_3c0;
  undefined1 local_3b0 [48];
  longlong local_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  undefined8 local_320;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255;
  undefined4 local_254;
  undefined2 local_250;
  undefined2 local_24e;
  undefined1 local_24a;
  undefined1 local_249;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined8 uStack_1b7;
  undefined2 local_1af;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined2 local_190 [4];
  undefined1 local_188 [216];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  local_190[0] = 0x100;
  local_80 = 0;
  local_78 = 0x300000000;
  local_70 = 0x7fffffff;
  uStack_68 = 0;
  cVar2 = FUN_1406917e6();
  if (cVar2 == '\0') {
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    local_220 = 1;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    lStack_200 = 0;
    local_1f8 = 0;
    lStack_1f0 = 0;
    local_1e8 = 0xffffffff;
    uStack_1e4 = 0xffffffff;
    uStack_1e0 = 0xffffffff;
    uStack_1dc = 0xffffffff;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1bf = 0;
    uStack_1b8 = 0;
    uStack_1b7 = 0;
    local_1af = 1;
    local_1ac = 0;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    lVar6 = param_1[1];
    local_470 = param_1;
    if (lVar6 == 0) {
      local_288 = 0x1100000000;
      (**(code **)(*param_1 + 0x48))(0,&local_310);
      lVar6 = FUN_14486d71a(&local_310);
    }
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_310 = *param_5;
    local_308 = param_5[1];
    local_300 = param_5[2];
    local_2f8 = param_5[3];
    local_2f0 = param_5[4];
    local_2e8 = param_5[5];
    local_2e0 = param_5[6];
    local_2d8 = param_5[7];
    local_2c0 = param_5[8];
    local_2b8 = param_5[9];
    FUN_144765e6c(&local_238,lVar6);
    puVar8 = &DAT_14c9c0e10;
    if (param_7 == 2) {
      puVar8 = &DAT_14c9c0e28;
    }
    puVar9 = &DAT_14c9c0d68;
    if (param_7 == 2) {
      puVar9 = &DAT_14c9c0df8;
    }
    puVar7 = &DAT_14c9c0e40;
    if (param_7 != 0) {
      puVar7 = puVar8;
    }
    puVar8 = &DAT_14c9c0db0;
    if (param_7 != 0) {
      puVar8 = puVar9;
    }
    if (param_6 == 1) {
      puVar8 = puVar7;
    }
    uStack_1d0 = *puVar8;
    local_1d8 = *param_3;
    local_1c8 = param_3[1];
    uVar5 = (**(code **)(*param_2 + 0x490))(param_2);
    param_1 = local_470;
    if (uVar5 < 4) {
      uVar3 = (undefined1)(0x5010400 >> ((byte)(uVar5 << 3) & 0x1f));
    }
    else {
      uVar3 = 0;
      if ((uVar5 < 7) && (uVar3 = 0, DAT_14ca84f33 != '\0')) {
        uVar3 = (undefined1)(0xa060900000000 >> ((byte)(uVar5 << 3) & 0x3f));
      }
    }
    local_1af = CONCAT11(uVar3,(undefined1)local_1af);
    cVar2 = (**(code **)(*param_2 + 0x4a0))(param_2);
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_144a12f44(DAT_14ca85550);
    }
    local_1af = CONCAT11(local_1af._1_1_,uVar3);
    FUN_144a1fecc(&local_238,&local_310);
    if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
       (DAT_14cafb358 == 2)) {
      uStack_1a8 = (undefined4)local_240;
      uStack_1a4 = (undefined4)((ulonglong)local_240 >> 0x20);
      FUN_14573402d(local_3b0);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        lVar6 = *param_1;
        local_450[0] = local_320;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
        local_488 = &local_454;
        local_454 = local_454 & 0xffff0000;
        local_480 = local_462;
        FUN_14573482a(&DAT_14cafccf8,&local_460,
                      (int)((ulonglong)local_450[0] >> 0x20) * 0x17 + (int)local_450[0] & 0x7fffffff
                      ,local_450);
        if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_460 * 0x10) == '\x01') {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          param_1 = local_470;
        }
        else {
          *(undefined1 *)((longlong)(int)local_460 * 0x10 + DAT_14cafccf8 + 8) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          FUN_140691a2a(&DAT_14cafc0a0,param_8,lVar6);
          param_1 = local_470;
        }
      }
      FUN_1457340f6(local_450,&local_238);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
        lVar6 = *param_1;
        local_460 = local_3c0;
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
        local_488 = (uint *)local_462;
        local_462 = (undefined1  [2])0x0;
        local_480 = &local_455;
        FUN_14573482a(&DAT_14cafd9c8,&local_454,
                      (int)((ulonglong)local_460 >> 0x20) * 0x17 + (int)local_460 & 0x7fffffff,
                      &local_460);
        if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_454 * 0x10) == '\x01') {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          param_1 = local_470;
        }
        else {
          *(undefined1 *)((longlong)(int)local_454 * 0x10 + DAT_14cafd9c8 + 8) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          FUN_140691a2a(&DAT_14cafcd70,param_8,lVar6);
          param_1 = local_470;
        }
      }
      if (local_408 != 0) {
        FUN_140021284();
      }
      if (local_410 != 0) {
        FUN_140021284();
      }
      if (local_418 != 0) {
        FUN_140021284();
      }
      if (local_420 != 0) {
        FUN_140021284();
      }
      if (local_368 != 0) {
        FUN_140021284();
      }
      if (local_370 != 0) {
        FUN_140021284();
      }
      if (local_378 != 0) {
        FUN_140021284();
      }
      if (local_380 != 0) {
        FUN_140021284();
      }
    }
    local_2b8 = CONCAT44(*param_4,(undefined4)local_2b8);
    local_2b0 = *(undefined8 *)(param_4 + 1);
    local_2a8 = *(undefined8 *)(param_4 + 4);
    uStack_2a0 = *(undefined8 *)(param_4 + 6);
    local_298 = *(undefined8 *)(param_4 + 8);
    uStack_290 = *(undefined8 *)(param_4 + 10);
    local_288 = *(undefined8 *)(param_4 + 0xc);
    uStack_280 = *(undefined8 *)(param_4 + 0xe);
    local_278 = *(undefined8 *)(param_4 + 0x10);
    uStack_270 = *(undefined8 *)(param_4 + 0x12);
    local_250 = *(undefined2 *)(param_4 + 0x1a);
    local_268 = *(undefined1 *)(param_4 + 0x14);
    local_260 = *(undefined8 *)(param_4 + 0x16);
    local_258 = *(undefined1 *)(param_4 + 0x18);
    local_257 = *(undefined1 *)((longlong)param_4 + 0x61);
    local_256 = *(undefined1 *)((longlong)param_4 + 0x62);
    local_255 = *(undefined1 *)((longlong)param_4 + 99);
    local_254 = param_4[0x19];
    local_24a = *(undefined1 *)((longlong)param_4 + 0x6a);
    local_249 = *(undefined1 *)((longlong)param_4 + 0x6b);
    local_24e = 0;
    memcpy(local_188,&local_310,0xd8);
    if (lStack_1f0 != 0) {
      FUN_140021284();
    }
    if (local_1f8 != 0) {
      FUN_140021284();
    }
    if (lStack_200 != 0) {
      FUN_140021284();
    }
    if (local_208 != 0) {
      FUN_140021284();
    }
    local_70 = 0;
  }
  else {
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_310 = *param_5;
    local_308 = param_5[1];
    local_300 = param_5[2];
    local_2f8 = param_5[3];
    local_2f0 = param_5[4];
    local_2e8 = param_5[5];
    local_2e0 = param_5[6];
    local_2d8 = param_5[7];
    local_2c0 = param_5[8];
    local_2b8 = param_5[9];
    FUN_145734aa6(&local_310,&local_238);
    FUN_1457347b6(&local_b0,&local_238);
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    local_70 = local_70 & 0x80000000;
  }
  local_190[0] = 0x100;
  local_70 = param_8 & 0x7fffffff | local_70;
  uStack_68 = *param_1;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    bVar4 = (**(code **)(*param_2 + 0x400))(param_2);
    local_70 = local_70 & 0x7fffffff | (uint)bVar4 << 0x1f;
    FUN_1406918b2();
  }
  iVar1 = (int)param_9[1];
  *(uint *)(param_9 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_9 + 0xc) < iVar1 + 1U) {
    FUN_14069191a(param_9,iVar1);
  }
  lVar6 = *param_9;
  _Dst = (void *)(lVar6 + (longlong)iVar1 * 0x130);
  memcpy(_Dst,local_190,0xe0);
  *(undefined8 *)(lVar6 + 0x110 + (longlong)iVar1 * 0x130) = 0;
  if (local_80 == 0) {
    *(undefined8 *)((longlong)_Dst + 0x100) = local_90;
    *(undefined8 *)((longlong)_Dst + 0x108) = uStack_88;
    *(undefined8 *)((longlong)_Dst + 0xf0) = local_a0;
    *(undefined8 *)((longlong)_Dst + 0xf8) = uStack_98;
    *(undefined8 *)((longlong)_Dst + 0xe0) = local_b0;
    *(undefined8 *)((longlong)_Dst + 0xe8) = uStack_a8;
  }
  *(longlong *)((longlong)_Dst + 0x110) = local_80;
  *(undefined4 *)((longlong)_Dst + 0x118) = (undefined4)local_78;
  *(undefined4 *)((longlong)_Dst + 0x11c) = local_78._4_4_;
  *(uint *)((longlong)_Dst + 0x120) = local_70;
  *(undefined4 *)((longlong)_Dst + 0x124) = uStack_6c;
  *(undefined4 *)((longlong)_Dst + 0x128) = (undefined4)uStack_68;
  *(undefined4 *)((longlong)_Dst + 300) = uStack_68._4_4_;
  local_78 = 0x300000000;
  local_80 = 0;
  if ((local_60 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c82220 FUN_140c82220 body=171 status=ok
// SIG undefined FUN_140c82220(void)

void FUN_140c82220(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar1 + 8))();
    lVar4 = FUN_14112039e();
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
      plVar6 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        plVar6 = plVar1;
      }
      goto LAB_140c8226d;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_140c8226d:
  lVar3 = param_1 + -0x400;
  *(longlong **)(param_1 + 0x2200) = plVar6;
  FUN_140655f5e(param_1,param_2);
  FUN_140c822cc(lVar3);
  cVar2 = FUN_140c8232a(lVar3);
  uVar5 = (**(code **)(*(longlong *)(param_1 + 0x68) + 0x10))(param_1 + 0x68);
  FUN_140a82c6c(uVar5,&DAT_14cbc1890,
                CONCAT71((int7)((ulonglong)lVar3 >> 8),cVar2 == '\x02') & 0xffffffff,1);
  return;
}



// FUNCTION 140c822cc FUN_140c822cc body=94 status=ok
// SIG undefined FUN_140c822cc(void)

void FUN_140c822cc(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x448) + 0x20))(param_1 + 0x448);
  if (lVar2 == 0) {
    return;
  }
  cVar1 = FUN_140c8232a(param_1);
  if (cVar1 == '\0') {
    FUN_1400bc96c();
    return;
  }
  FUN_1400bc8c2(lVar2 + 0x90,&DAT_14cbc1890);
  return;
}



// FUNCTION 140c8232a FUN_140c8232a body=134 status=ok
// SIG undefined FUN_140c8232a(void)

undefined1 FUN_140c8232a(longlong param_1)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x4e0) < 1) {
    local_20[0] = 0;
  }
  else {
    local_30 = DAT_14cbc18a0;
    local_28 = 0xffffffff;
    FUN_140c823b2(param_1 + 0x4d8,local_20);
  }
  uVar1 = 2;
  if (local_20[0] != DAT_14cbc1898) {
    uVar1 = local_20[0] == DAT_14cbc18a8;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c823b2 FUN_140c823b2 body=250 status=ok
// SIG undefined FUN_140c823b2(void)

void FUN_140c823b2(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  lVar2 = *param_3;
  uVar5 = *(uint *)(param_3 + 1);
  if (lVar2 != 0 || uVar5 != 0xffffffff) {
    if ((int)uVar5 < 0) {
      lVar3 = *param_1;
      uVar7 = *(uint *)(param_1 + 1);
LAB_140c823e6:
      if (uVar7 != 0) {
        uVar6 = (ulonglong)(int)uVar7;
        goto LAB_140c823f9;
      }
    }
    else {
      uVar7 = *(uint *)(param_1 + 1);
      uVar6 = (ulonglong)uVar7;
      lVar3 = *param_1;
      if ((int)uVar7 <= (int)uVar5) goto LAB_140c823e6;
      if (*(longlong *)(lVar3 + 0x68 + (ulonglong)uVar5 * 0x88) == lVar2) {
LAB_140c8243f:
        lVar3 = (longlong)(int)uVar5 * 0x88 + lVar3;
        if (lVar3 != 0) {
          *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar3 + 0x80);
          uVar4 = *(undefined8 *)(lVar3 + 0x78);
          goto LAB_140c82471;
        }
        goto LAB_140c82461;
      }
LAB_140c823f9:
      uVar8 = 0;
      do {
        if (*(longlong *)(lVar3 + 0x68 + uVar8) == lVar2) {
          uVar5 = (int)(uVar8 >> 3) * -0xf0f0f0f;
          *(uint *)(param_3 + 1) = uVar5;
          if (uVar5 == 0xffffffff) goto LAB_140c82461;
          lVar3 = *param_1;
          goto LAB_140c8243f;
        }
        lVar1 = lVar3 + uVar8;
        uVar8 = uVar8 + 0x88;
      } while (lVar1 + 0x88 != uVar6 * 0x88 + lVar3);
    }
    *(undefined4 *)(param_3 + 1) = 0xffffffff;
  }
LAB_140c82461:
  *(undefined4 *)(param_2 + 1) = DAT_14c9a632c;
  uVar4 = DAT_14c9a6324;
LAB_140c82471:
  *param_2 = uVar4;
  return;
}



// FUNCTION 140c824ac FUN_140c824ac body=105 status=ok
// SIG undefined FUN_140c824ac(void)

undefined8 FUN_140c824ac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x1960);
  plVar4 = *(longlong **)(param_1 + 0x1968);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  return uVar3;
}



// FUNCTION 140c8251c FUN_140c8251c body=824 status=ok
// SIG undefined FUN_140c8251c(void)

void FUN_140c8251c(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  undefined1 *local_98;
  undefined8 **local_90;
  longlong local_88;
  longlong *local_80;
  undefined1 **local_78;
  code *local_70;
  longlong **local_68;
  code **local_60;
  code *local_58;
  code ***local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined2 *)(param_1 + 0x26c) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  plVar7 = *(longlong **)(param_1 + 0xf0);
  if ((((plVar7 == (longlong *)0x0) || (*(int *)(param_1 + 0xec) == 0)) ||
      (uVar2 = *(uint *)(param_1 + 0xe8), (int)uVar2 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar2 ||
       (lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar8 == 0)) ||
      ((*(int *)(lVar8 + 0x10) != *(int *)(param_1 + 0xec) ||
       ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)))))) goto LAB_140c827a8;
  local_b8 = *(longlong *)(param_1 + 0x48);
  if (*(code **)(*plVar7 + 0x10) == (code *)&LAB_144944cea) {
    plVar7 = plVar7 + 0xe1;
  }
  else {
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7);
  }
  lVar8 = param_1 + 0xf8;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x218);
  }
  iVar6 = *(int *)(param_1 + 0x220);
  if ((longlong)iVar6 != 0) {
    lVar9 = 0;
    do {
      local_b0 = *(undefined8 *)(lVar8 + lVar9);
      local_88 = 0;
      local_a8 = &local_b0;
      local_a0 = &local_88;
      local_90 = &local_a8;
      local_98 = &LAB_143cbcae0;
      if (plVar7[8] != 0) {
        local_78 = &local_98;
        local_68 = &local_80;
        local_70 = FUN_143cbca2e;
        local_60 = &local_70;
        local_50 = &local_60;
        local_58 = FUN_1487df56e;
        local_80 = plVar7;
        FUN_1447c5ba2(plVar7[8],&local_58);
        lVar5 = local_88;
        if (local_88 != 0) {
          iVar3 = *(int *)(lVar8 + 0x14 + lVar9);
          if ((-1 < iVar3) && (iVar3 < *(int *)(local_b8 + 0x2b0))) {
            FUN_14056e94c(local_88 + 0x5d0,param_1 + 0x228);
          }
          FUN_140c82872(lVar5,3);
        }
      }
      lVar9 = lVar9 + 0x60;
    } while ((longlong)iVar6 * 0x60 != lVar9);
  }
  puVar10 = *(undefined8 **)(param_1 + 0xe0);
  bVar4 = true;
  if (puVar10 == (undefined8 *)0x0) {
LAB_140c82803:
    puVar10 = (undefined8 *)0x0;
  }
  else {
    iVar6 = *(int *)(puVar10 + 1);
    do {
      if (iVar6 == 0) goto LAB_140c82803;
      LOCK();
      iVar3 = *(int *)(puVar10 + 1);
      bVar11 = iVar6 == iVar3;
      if (bVar11) {
        *(int *)(puVar10 + 1) = iVar6 + 1;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      UNLOCK();
    } while (!bVar11);
    lVar8 = *(longlong *)(param_1 + 0xd8);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x14) != 0)) {
      uVar2 = *(uint *)(lVar8 + 0x10);
      bVar4 = false;
      if (((int)uVar2 < 0) || (bVar4 = false, DAT_14c9647dc <= (int)uVar2)) goto LAB_140c82788;
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == *(int *)(lVar8 + 0x14))) &&
           ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) && (*plVar7 != 0)) &&
         ((*(char *)(local_b8 + 0x2a0) != '\0' || (*(char *)(local_b8 + 0x1d8) == '\x01')))) {
        FUN_141051c98(*plVar7,param_1 + 0x228);
      }
    }
    bVar4 = false;
  }
LAB_140c82788:
  if (*(char *)(param_1 + 0x250) == '\x01') {
    *(undefined1 *)(param_1 + 0x250) = 0;
  }
  if (*(char *)(param_1 + 0x264) == '\x01') {
    *(undefined1 *)(param_1 + 0x264) = 0;
  }
  if (!bVar4) {
    LOCK();
    piVar1 = (int *)(puVar10 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar10)(puVar10);
      LOCK();
      piVar1 = (int *)((longlong)puVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
      }
    }
  }
LAB_140c827a8:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c82872 FUN_140c82872 body=205 status=ok
// SIG undefined FUN_140c82872(void)

void FUN_140c82872(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(byte *)(param_1 + 0x7e8) & 2) == 0) &&
     (lVar1 = param_1, *(char *)(param_1 + 0x290) == '\x01')) {
    do {
      lVar2 = lVar1;
      if ((*(byte *)(lVar2 + 0x7e8) & 2) == 0) {
        uVar3 = (ulonglong)param_2;
        goto LAB_140c828ad;
      }
      lVar1 = *(longlong *)(lVar2 + 0xd0);
    } while (*(longlong *)(lVar2 + 0xd0) != 0);
    uVar3 = (ulonglong)(*(int *)(lVar2 + 0x288) + -1);
LAB_140c828ad:
    lVar2 = lVar2 + uVar3 * 0x48;
    if (*(char *)(lVar2 + 0x118) != -1) {
      local_28 = 0;
      uStack_20 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_18 = 0xff;
      if (*(byte *)(lVar2 + 0x118) < 6) {
        *(undefined1 *)(lVar2 + 0x118) = 0xff;
      }
      FUN_140219b74(lVar2 + 0xd8,&local_58);
      FUN_140219c88(param_1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c82940 FUN_140c82940 body=274 status=ok
// SIG undefined FUN_140c82940(void)

void FUN_140c82940(longlong param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) | 2;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  if ((*(byte *)(param_1 + 0x2d4) & 1) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xb0);
    if (lVar5 == 0) {
      lVar5 = FUN_1448abda6(param_1);
    }
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
    if ((((int)(uint)*(byte *)(param_1 + 0x1fc) <= DAT_14cb0cbf8) &&
        (cVar2 = FUN_140041326(param_1), cVar2 != '\0')) && (0.0 < *(float *)(param_1 + 0x2cc))) {
      FUN_140c82a52(param_1);
      (**(code **)(**(longlong **)(lVar5 + 0x218) + 0xe0))(*(longlong **)(lVar5 + 0x218),param_1);
      *(byte *)(param_1 + 0x3f8) = *(byte *)(param_1 + 0x3f8) | 1;
    }
  }
  return;
}



// FUNCTION 140c82a52 FUN_140c82a52 body=1276 status=ok
// SIG undefined FUN_140c82a52(void)

void FUN_140c82a52(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(char *)(param_1 + 0x1fb) == '\x02') || (*(char *)(param_1 + 0x1fb) == '\0')) ||
     (*(longlong *)(param_1 + 0xa8) == 0)) goto LAB_140c82ba4;
  lVar9 = FUN_140a83ce8(param_1);
  lVar17 = lVar9 + 0x10;
  if (lVar9 == 0) {
    lVar17 = 0;
  }
  lVar9 = param_1 + 0x3a0;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_140c82ad3;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_140c82ad8;
      goto LAB_140c82aff;
    }
LAB_140c82ad8:
    *(longlong *)(param_1 + 1000) = lVar17;
  }
  else {
LAB_140c82ad3:
    if (iVar6 == 0x10) goto LAB_140c82ad8;
LAB_140c82aff:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
      goto LAB_140c82ad8;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_140c82ad8;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_140c82c6a;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_14348442c);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        FUN_140217a48(puVar2);
        puVar11 = (uint *)*puVar2;
LAB_140c82c6a:
        puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = puVar11[0x12];
        if (puVar15 <= puVar11 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar3 = *puVar11;
          *puVar11 = *puVar11 + uVar13 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar13) != 0xffffffff) break;
          puVar11 = (uint *)*puVar2;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar16 + 0x17);
          uVar13 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_140c82cea;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_140c82cea:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar6 = 0;
      FUN_1447247dc(puVar16,0);
      *puVar16 = &PTR_FUN_14a861650;
      puVar16[0x15] = lVar9;
      puVar16[0x16] = lVar17;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          iVar6 = 0;
        }
        else {
          uVar18 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar18 = 5;
      }
      if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
      }
      puVar16[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar16[9] = puVar16;
      puVar16[10] = puVar16;
      lVar17 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar17 == 0) {
        uVar5 = 1;
        if ((char)uVar18 != '\x06') {
          uVar5 = uVar18;
        }
        uVar18 = uVar5;
        uVar12 = 0;
      }
      else {
        if ((char)uVar18 == '\x06') {
          uVar18 = *(ulonglong *)(lVar17 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar17 + 0x30);
      }
      puVar16[0xf] = uVar12;
      puVar16[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar16 + 0x1c) = iVar6;
      if (puVar16 == (undefined8 *)0x0) {
        local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        UNLOCK();
        local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(puVar16);
        LOCK();
        piVar1 = (int *)(puVar16 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar16)(puVar16,1);
        }
      }
    }
    else {
      local_88 = local_78;
      local_68 = (undefined ***)0x0;
      local_58 = &PTR_LAB_14a861610;
      local_78[0] = &LAB_1434871d2;
      local_50 = lVar9;
      local_48 = lVar17;
      FUN_14005a792(&DAT_14ca9a440,L"SetDepthMapData",&DAT_14cad1e2c);
      if (local_78[0] != (undefined1 *)0x0) {
        pppuVar14 = local_68;
        if (local_68 == (undefined ***)0x0) {
          pppuVar14 = &local_58;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  FUN_140308182(lVar9,0);
LAB_140c82ba4:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c82f50 FUN_140c82f50 body=299 status=ok
// SIG undefined FUN_140c82f50(void)

void FUN_140c82f50(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_140c8307c();
  if (param_2 != 0) {
    lVar2 = FUN_140d53794();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) != lVar2 + 0x30)) {
      lVar2 = FUN_140317d24();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
        *(undefined1 *)(param_2 + 0x38) = 1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        iVar1 = *(int *)(param_1 + 0x3b0);
        *(uint *)(param_1 + 0x3b0) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x3b4) < iVar1 + 1U) {
          FUN_14582c57a((longlong *)(param_1 + 0x3a8),iVar1);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x3a8) + (longlong)iVar1 * 8) = param_2;
        if (DAT_14c950c29 == '\x01') goto LAB_140c83053;
      }
    }
    else {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      iVar1 = *(int *)(param_1 + 0x3c0);
      *(uint *)(param_1 + 0x3c0) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x3c4) < iVar1 + 1U) {
        FUN_14582c600((longlong *)(param_1 + 0x3b8),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x3b8) + (longlong)iVar1 * 8) = param_2;
      if (DAT_14c950c29 != '\0') {
LAB_140c83053:
        FUN_1456cec3c(param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140c8307c FUN_140c8307c body=323 status=ok
// SIG undefined FUN_140c8307c(void)

void FUN_140c8307c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cad00c8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1479b7a0c;
      local_50 = &LAB_1463b464e;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 8;
      local_78 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) == DAT_14cad00c8 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
    uVar1 = FUN_140c83220();
    lVar2 = FUN_144718840(param_2,uVar1);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c83220 FUN_140c83220 body=228 status=ok
// SIG undefined FUN_140c83220(void)

longlong FUN_140c83220(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac1db8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147878fc5;
    local_40 = &LAB_1459be412;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"Interface_ActorSubobject",&DAT_14cac1db8,&DAT_147878fc4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac1db8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c83306 FUN_140c83306 body=19 status=ok
// SIG undefined FUN_140c83306(void)

longlong FUN_140c83306(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x3cd0) == 0) {
    return 0;
  }
  lVar1 = FUN_140c8335a();
  if (lVar1 != 0) {
    lVar2 = FUN_140c833a4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140c8331a FUN_140c8331a body=63 status=ok
// SIG undefined FUN_140c8331a(void)

longlong FUN_140c8331a(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140c8335a();
  if (lVar1 != 0) {
    lVar2 = FUN_140c833a4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140c8335a FUN_140c8335a body=73 status=ok
// SIG undefined FUN_140c8335a(void)

undefined8 FUN_140c8335a(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x1c)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 140c833a4 FUN_140c833a4 body=228 status=ok
// SIG undefined FUN_140c833a4(void)

longlong FUN_140c833a4(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb66620 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14592272a;
    local_38 = &LAB_14872866b;
    local_40 = &LAB_1461e460b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x590;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStandInViewer",&DAT_14cb66620,&DAT_14872866a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb66620;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c8348a FUN_140c8348a body=261 status=ok
// SIG undefined FUN_140c8348a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140c8348a(undefined8 *param_1,longlong param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c83590(**(undefined8 **)(param_2 + 8),&local_30);
  puVar4 = _DAT_14ca84f40;
  if (param_3 != '\0') {
    puVar4 = &DAT_200000002;
  }
  *(undefined4 *)(param_1 + 3) = DAT_14ca85098;
  uVar3 = DAT_14ca85094;
  uVar2 = DAT_14ca85090;
  uVar1 = DAT_14ca8508c;
  uVar5 = 0x39;
  if (param_3 == '\0') {
    uVar5 = DAT_14ca84f49;
  }
  *(undefined4 *)(param_1 + 1) = DAT_14ca85088;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  iVar6 = (int)((ulonglong)puVar4 >> 0x20);
  *param_1 = 0x30408;
  *(int *)((longlong)param_1 + 0x1c) = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  *(undefined4 *)(param_1 + 4) = 0;
  *(ulonglong *)((longlong)param_1 + 0x24) =
       (longlong)(int)(~local_2c + local_24 + iVar6) / (longlong)iVar6 << 0x20 |
       (longlong)(int)(~local_30 + local_28 + (int)puVar4) / (longlong)(int)puVar4 & 0xffffffffU;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x10001;
  *(undefined2 *)(param_1 + 6) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x32) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33) = uVar5;
  *(undefined2 *)((longlong)param_1 + 0x34) = 0xff00;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140c83590 FUN_140c83590 body=189 status=ok
// SIG undefined FUN_140c83590(void)

void FUN_140c83590(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x23f4) == '\x01') {
    *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x13b88);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 0x13b90);
  }
  else {
    lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x10);
    if (lVar3 == 0) {
      iVar2 = 0;
      iVar5 = 0;
      iVar6 = 0;
      iVar7 = 0;
    }
    else {
      lVar4 = 0;
      iVar7 = 0;
      iVar6 = 0;
      iVar5 = 0;
      iVar2 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (lVar4 >> 0x1d));
        if (*(int *)(lVar1 + 0x30f8) <= iVar7) {
          iVar7 = *(int *)(lVar1 + 0x30f8);
        }
        if (*(int *)(lVar1 + 0x30fc) <= iVar6) {
          iVar6 = *(int *)(lVar1 + 0x30fc);
        }
        if (iVar5 < *(int *)(lVar1 + 0x3100)) {
          iVar5 = *(int *)(lVar1 + 0x3100);
        }
        if (iVar2 < *(int *)(lVar1 + 0x3104)) {
          iVar2 = *(int *)(lVar1 + 0x3104);
        }
        lVar4 = lVar4 + 0x100000000;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    *param_2 = iVar7;
    param_2[1] = iVar6;
    param_2[2] = iVar5;
    param_2[3] = iVar2;
  }
  return;
}



// FUNCTION 140c8364e FUN_140c8364e body=103 status=ok
// SIG undefined FUN_140c8364e(void)

ulonglong FUN_140c8364e(longlong param_1)

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
LAB_140c83698:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140c83698;
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



// FUNCTION 140c836b6 FUN_140c836b6 body=47 status=ok
// SIG undefined FUN_140c836b6(void)

void FUN_140c836b6(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 == '\0') {
    return;
  }
  FUN_140c836ee(param_1,*(undefined8 *)(param_2 + 0x18));
  return;
}



// FUNCTION 140c836ee FUN_140c836ee body=298 status=ok
// SIG undefined FUN_140c836ee(void)

void FUN_140c836ee(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  int local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x58);
    bVar3 = 1;
    if (*(int *)(param_1 + 0x18) <= iVar2) goto LAB_140c8378e;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_48 = *(undefined4 *)(param_1 + 0x40);
  uStack_44 = *(undefined4 *)(param_1 + 0x44);
  uStack_40 = *(undefined4 *)(param_1 + 0x48);
  uStack_3c = *(undefined4 *)(param_1 + 0x4c);
  local_34 = 0;
  if (param_2 == 0) {
    local_38 = 0;
    iVar2 = 0;
  }
  else {
    local_38 = *(uint *)(param_2 + 0xc);
    if ((int)local_38 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_38 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_38 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar2 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar4;
      }
    }
  }
  local_30 = *(undefined8 *)(param_1 + 0x50);
  local_34 = iVar2;
  FUN_140c83860(uVar1);
  iVar2 = *(int *)(param_1 + 0x58) + 1;
  *(int *)(param_1 + 0x58) = iVar2;
  bVar3 = *(byte *)(param_1 + 0x1c);
LAB_140c8378e:
  if (((bVar3 & 1) != 0) && (*(int *)(param_1 + 0x18) <= iVar2)) {
    FUN_140c8381a(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c8381a FUN_140c8381a body=70 status=ok
// SIG undefined FUN_140c8381a(void)

void FUN_140c8381a(longlong *param_1)

{
  if (param_1[5] == 0) {
    return;
  }
  if ((char)param_1[4] == '\x01') {
    FUN_14480f766(param_1[6] + 0xf0);
  }
  else if ((char)param_1[4] != '\x02') goto LAB_140c8384b;
  (**(code **)(*param_1 + 0x20))(param_1);
LAB_140c8384b:
  param_1[5] = 0;
  return;
}



// FUNCTION 140c83860 FUN_140c83860 body=190 status=ok
// SIG undefined FUN_140c83860(void)

void FUN_140c83860(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x148) != '\x01') goto LAB_140c838fd;
  if (*(longlong *)(param_2 + 6) != 0) {
    FUN_140c8398a(param_1,param_2 + 6,param_2 + 4);
  }
  local_30 = *param_2;
  uStack_2c = param_2[1];
  uStack_28 = param_2[2];
  uStack_24 = param_2[3];
  if (param_2[5] == 0) {
LAB_140c8391b:
    local_20 = 0;
  }
  else {
    uVar1 = param_2[4];
    local_20 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar2 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar2 == (undefined8 *)0x0) ||
         ((*(int *)(puVar2 + 2) != param_2[5] || ((*(uint *)(puVar2 + 1) & 0x10200000) != 0))))
      goto LAB_140c8391b;
      local_20 = *puVar2;
    }
  }
  local_38 = param_1;
  FUN_140c83920(param_1);
LAB_140c838fd:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c83920 FUN_140c83920 body=105 status=ok
// SIG undefined FUN_140c83920(void)

void FUN_140c83920(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x118);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (((((int)plVar3[7] == *(int *)(param_2 + 8)) &&
           (*(int *)((longlong)plVar3 + 0x3c) == *(int *)(param_2 + 0xc))) &&
          ((int)plVar3[8] == *(int *)(param_2 + 0x10))) &&
         (*(int *)((longlong)plVar3 + 0x44) == *(int *)(param_2 + 0x14))) {
        (**(code **)(*plVar3 + 0x90))(plVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 140c8398a FUN_140c8398a body=328 status=ok
// SIG undefined FUN_140c8398a(void)

void FUN_140c8398a(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if ((((*(int *)(param_1 + 0x74) != 0) && (uVar2 = *(uint *)(param_1 + 0x70), -1 < (int)uVar2)) &&
      ((int)uVar2 < DAT_14c9647dc)) &&
     (((plVar9 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(param_1 + 0x74))) &&
      ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
      lVar7 = *plVar9;
    }
    else {
      lVar7 = 0;
    }
    if ((longlong)*(int *)(lVar7 + 0x108) != 0) {
      plVar9 = *(longlong **)(lVar7 + 0x100);
      lVar4 = *param_2;
      lVar7 = (longlong)*(int *)(lVar7 + 0x108) << 4;
      do {
        if (*plVar9 == lVar4) {
          if (plVar9 == (longlong *)0x0) {
            return;
          }
          lVar7 = plVar9[1];
          if (lVar7 == 0) {
            return;
          }
          uVar5 = *param_3;
          iVar3 = *(int *)(param_1 + 0x130);
          *(uint *)(param_1 + 0x130) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x134) < iVar3 + 1U) {
            FUN_1418ade56((longlong *)(param_1 + 0x128),iVar3);
          }
          lVar6 = *(longlong *)(param_1 + 0x128);
          lVar8 = (longlong)iVar3 * 0x20;
          *(longlong *)(lVar6 + lVar8) = lVar4;
          *(undefined8 *)(lVar6 + 8 + lVar8) = uVar5;
          puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
          FUN_140ee7917(0,0);
          lVar7 = *(longlong *)(lVar7 + 0x30);
          if (lVar7 != 0) {
            FUN_140c19fa4(param_1,lVar7,lVar6 + lVar8 + 0x10);
          }
          if ((*(byte *)(param_1 + 0x150) & 8) != 0) {
            return;
          }
          *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) | 8;
          FUN_144958d50(param_1 + 0x30);
          return;
        }
        plVar9 = plVar9 + 2;
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != 0);
    }
  }
  return;
}



// FUNCTION 140c83ad2 FUN_140c83ad2 body=852 status=ok
// SIG undefined FUN_140c83ad2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140c83ad2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140c83e26();
  *param_1 = &PTR_FUN_14b0ad300;
  param_1[0x1b] = 0x10000000000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0xffffffff7fffffff;
  param_1[0x1e] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0xfc) = 0x300;
  uVar1 = DAT_14c8464e8;
  param_1[0x20] = DAT_14c8464e0;
  param_1[0x21] = uVar1;
  param_1[0x22] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x23] = DAT_14c8464e0;
  param_1[0x24] = uVar1;
  param_1[0x25] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(byte *)((longlong)param_1 + 0x16c) = *(byte *)((longlong)param_1 + 0x16c) & 0xf8;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x34] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(byte *)((longlong)param_1 + 0x1ac) = *(byte *)((longlong)param_1 + 0x1ac) & 0xf8;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x3c] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(byte *)((longlong)param_1 + 0x1ec) = *(byte *)((longlong)param_1 + 0x1ec) & 0xf8;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined2 *)(param_1 + 0x3e) = 0x300;
  param_1[0x41] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x3f] = DAT_14c8464f8;
  param_1[0x40] = uVar1;
  param_1[0x44] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x42] = DAT_14c8464f8;
  param_1[0x43] = uVar1;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x4b] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(byte *)((longlong)param_1 + 0x264) = *(byte *)((longlong)param_1 + 0x264) & 0xf8;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  param_1[0x53] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(byte *)((longlong)param_1 + 0x2a4) = *(byte *)((longlong)param_1 + 0x2a4) & 0xf8;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  param_1[0x5b] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(byte *)((longlong)param_1 + 0x2e4) = *(byte *)((longlong)param_1 + 0x2e4) & 0xf8;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0x5d) = 0x300;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0;
  param_1[0x6a] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(byte *)((longlong)param_1 + 0x35c) = *(byte *)((longlong)param_1 + 0x35c) & 0xf8;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x72] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(byte *)((longlong)param_1 + 0x39c) = *(byte *)((longlong)param_1 + 0x39c) & 0xf8;
  *(undefined4 *)(param_1 + 0x73) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0;
  param_1[0x7a] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(byte *)((longlong)param_1 + 0x3dc) = *(byte *)((longlong)param_1 + 0x3dc) & 0xf8;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0x3f80000000000000;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x82] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x80] = DAT_14c8464e0;
  param_1[0x81] = uVar1;
  param_1[0x85] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x83] = DAT_14c8464f8;
  param_1[0x84] = uVar1;
  *(undefined4 *)(param_1 + 0x89) = 0;
  *(byte *)((longlong)param_1 + 0x44c) = *(byte *)((longlong)param_1 + 0x44c) & 0xf0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  *(byte *)((longlong)param_1 + 0x454) = *(byte *)((longlong)param_1 + 0x454) & 0xf0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  *(byte *)((longlong)param_1 + 0x45c) = *(byte *)((longlong)param_1 + 0x45c) & 0xf0;
  *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) & 0xf8;
  param_1[0x60] = DAT_14cb71d78;
  uVar1 = _DAT_14cb71d70;
  param_1[0x5e] = _DAT_14cb71d68;
  param_1[0x5f] = uVar1;
  param_1[99] = DAT_14cb71d78;
  uVar1 = _DAT_14cb71d70;
  param_1[0x61] = _DAT_14cb71d68;
  param_1[0x62] = uVar1;
  param_1[0x88] = DAT_14cb71d78;
  uVar1 = _DAT_14cb71d70;
  param_1[0x86] = _DAT_14cb71d68;
  param_1[0x87] = uVar1;
  return param_1;
}



// FUNCTION 140c83e26 FUN_140c83e26 body=201 status=ok
// SIG undefined FUN_140c83e26(void)

undefined8 * FUN_140c83e26(undefined8 *param_1)

{
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_14a42dce0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[5] = 0xffffffff;
  *(undefined2 *)(param_1 + 6) = 0x100;
  *(undefined1 **)((longlong)param_1 + 0x34) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  FUN_1404163bc(param_1 + 0xb);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3f800000;
  param_1[0x14] = &DAT_3f8000003f800000;
  param_1[0x15] = 0;
  param_1[0x16] = 0x412000003f800000;
  *(undefined4 *)(param_1 + 0x17) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  return param_1;
}



// FUNCTION 140c83ef0 FUN_140c83ef0 body=49 status=ok
// SIG undefined FUN_140c83ef0(void)

undefined4 FUN_140c83ef0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_140c83f22(param_2,param_1[1]);
  if ((char)uVar2 != '\0') {
    FUN_140ceeb80(uVar1);
  }
  return uVar2;
}



// FUNCTION 140c83f22 FUN_140c83f22 body=105 status=ok
// SIG undefined FUN_140c83f22(void)

bool FUN_140c83f22(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c83f8c(param_1,local_30,param_2);
  local_20 = local_30;
  iVar1 = FUN_140c8411c(param_1);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c83f8c FUN_140c83f8c body=398 status=ok
// SIG undefined FUN_140c83f8c(void)

undefined8 FUN_140c83f8c(longlong param_1,undefined8 param_2,wchar_t *param_3)

{
  uint uVar1;
  void *_Src;
  undefined2 *puVar2;
  size_t sVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_178 [32];
  undefined2 *local_158;
  undefined2 *local_150;
  ulonglong *local_148;
  char local_140;
  undefined2 local_138 [128];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_158 = local_138;
  local_140 = '\0';
  local_148 = &local_38;
  _Src = *(void **)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x18);
  iVar4 = uVar1 - 1;
  if (uVar1 == 0) {
    iVar4 = 0;
  }
  lVar5 = (longlong)iVar4;
  local_150 = local_158;
  if (0x7f < iVar4) {
    FUN_140213274(&local_158,lVar5);
  }
  puVar2 = local_150;
  if (1 < uVar1) {
    memcpy(local_150,_Src,lVar5 * 2);
    local_150 = puVar2 + lVar5;
  }
  if (local_148 <= local_150 + 1) {
    FUN_140213274(&local_158,1);
  }
  *local_150 = 0x2e;
  if (param_3 == (wchar_t *)0x0) {
    iVar4 = 0;
    local_150 = local_150 + 1;
  }
  else {
    local_150 = local_150 + 1;
    sVar3 = wcslen(param_3);
    iVar4 = (int)sVar3;
  }
  lVar5 = (longlong)iVar4;
  if (local_148 <= local_150 + lVar5) {
    FUN_140213274(&local_158,lVar5);
  }
  puVar2 = local_150;
  if (iVar4 != 0) {
    memcpy(local_150,param_3,lVar5 * 2);
    local_150 = puVar2 + lVar5;
  }
  *local_150 = 0;
  FUN_140056680(param_2,local_158);
  if (local_140 == '\x01') {
    FUN_1400020a8(local_158);
  }
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c8411c FUN_140c8411c body=608 status=ok
// SIG undefined FUN_140c8411c(void)

int FUN_140c8411c(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar15 = (ulonglong)(int)uVar3;
  if (uVar15 == 0) {
    return 0;
  }
  plVar4 = (longlong *)*param_1;
  iVar7 = (int)plVar4[1];
  iVar6 = (int)((longlong *)*param_2)[1];
  if (iVar7 == iVar6) {
    if (iVar7 < 2) {
      bVar16 = true;
      goto LAB_140c841c2;
    }
    lVar12 = 0;
    while( true ) {
      uVar1 = *(ushort *)(*plVar4 + lVar12);
      uVar10 = (uint)uVar1;
      uVar2 = *(ushort *)(*(longlong *)*param_2 + lVar12);
      uVar13 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_140c84192;
        }
        iVar7 = uVar10 - uVar13;
        goto LAB_140c841bf;
      }
      if (uVar1 == 0) break;
LAB_140c84192:
      lVar12 = lVar12 + 2;
    }
    iVar7 = 0;
  }
  else {
    iVar7 = iVar6 + iVar7 + -1;
  }
LAB_140c841bf:
  bVar16 = iVar7 == 0;
LAB_140c841c2:
  iVar7 = 0;
  uVar9 = 0;
LAB_140c841d2:
  iVar6 = (int)uVar9;
  uVar9 = (ulonglong)(iVar6 + 1U);
  lVar12 = (longlong)iVar6;
  if ((int)(iVar6 + 1U) < (int)uVar3) {
    uVar9 = lVar12 + 1;
    iVar8 = (int)((longlong *)*param_2)[1];
    bVar5 = true;
LAB_140c841f0:
    if ((int)plVar4[uVar9 * 2 + 1] != iVar8) {
      bVar17 = (int)plVar4[uVar9 * 2 + 1] + iVar8 == 1;
      goto LAB_140c84208;
    }
    if (1 < iVar8) {
      lVar11 = 0;
      do {
        uVar1 = *(ushort *)(plVar4[uVar9 * 2] + lVar11);
        uVar2 = *(ushort *)(*(longlong *)*param_2 + lVar11);
        if (uVar1 == uVar2) {
          if (uVar1 == 0) goto LAB_140c8429a;
        }
        else {
          if (0x7f < (uVar2 | uVar1)) {
            iVar14 = (uint)uVar1 - (uint)uVar2;
            goto LAB_140c8429d;
          }
          if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
            iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2]
            ;
            goto LAB_140c8429d;
          }
        }
        lVar11 = lVar11 + 2;
      } while( true );
    }
    if (bVar16) goto LAB_140c84219;
    iVar8 = (int)uVar9 - iVar6;
    goto LAB_140c842d5;
  }
  bVar5 = false;
  goto LAB_140c842a8;
LAB_140c8429a:
  iVar14 = 0;
LAB_140c8429d:
  bVar17 = iVar14 == 0;
LAB_140c84208:
  if ((bool)(bVar17 ^ bVar16)) goto LAB_140c842a8;
LAB_140c84219:
  uVar9 = uVar9 + 1;
  bVar5 = (longlong)uVar9 < (longlong)uVar15;
  if (uVar9 == uVar15) goto LAB_140c842a5;
  goto LAB_140c841f0;
LAB_140c842a5:
  uVar9 = (ulonglong)uVar3;
LAB_140c842a8:
  iVar8 = (int)uVar9 - iVar6;
  if (bVar16) {
    FUN_1447a1747(plVar4 + lVar12 * 2,iVar8);
    bVar16 = false;
  }
  else {
LAB_140c842d5:
    if (iVar7 != iVar6) {
      memmove(plVar4 + (longlong)iVar7 * 2,plVar4 + lVar12 * 2,(longlong)iVar8 << 4);
    }
    iVar7 = iVar7 + iVar8;
    bVar16 = true;
  }
  if (!bVar5) {
    *(int *)(param_1 + 1) = iVar7;
    return uVar3 - iVar7;
  }
  goto LAB_140c841d2;
}



// FUNCTION 140c8437c FUN_140c8437c body=514 status=ok
// SIG undefined FUN_140c8437c(void)

double * FUN_140c8437c(longlong *param_1,double *param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  fVar4 = (float)(**(code **)(*param_1 + 0x308))();
  if (0.0 < fVar4) {
    dVar7 = (double)FUN_144719204((int)*param_3,0x4076800000000000);
    dVar2 = (double)FUN_144719204((int)param_3[1],0x4076800000000000);
    dVar8 = sin(dVar7 * 0.017453292519943295);
    dVar7 = cos(dVar7 * 0.017453292519943295);
    dVar1 = sin(dVar2 * 0.017453292519943295);
    local_a0 = cos(dVar2 * 0.017453292519943295);
    local_98 = dVar1 * dVar7;
    local_a0 = local_a0 * dVar7;
    local_90 = dVar8;
    FUN_140c84580(&local_88);
    uVar5 = SUB84(local_80,0);
    uVar6 = (undefined4)((ulonglong)local_80 >> 0x20);
    dVar8 = 0.0;
    if ((((local_88 != 0.0) || (NAN(local_88))) || (local_80 != 0.0)) || (NAN(local_80))) {
      dVar8 = atan2(local_80,local_88);
      dVar8 = dVar8 * 57.29577951308232;
      uVar5 = SUB84(local_80,0);
      uVar6 = (undefined4)((ulonglong)local_80 >> 0x20);
    }
    param_2[1] = dVar8;
    dVar7 = SQRT(local_88 * local_88 + (double)CONCAT44(uVar6,uVar5) * (double)CONCAT44(uVar6,uVar5)
                );
    dVar8 = 0.0;
    if (((dVar7 != 0.0) || (NAN(dVar7))) || ((local_78 != 0.0 || (NAN(local_78))))) {
      dVar8 = atan2(local_78,dVar7);
      dVar8 = dVar8 * 57.29577951308232;
    }
    *param_2 = dVar8;
    param_2[2] = 0.0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_c8);
  }
  param_2[2] = (double)param_3[2];
  uVar5 = *(undefined4 *)((longlong)param_3 + 4);
  uVar6 = *(undefined4 *)(param_3 + 1);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 *)param_2 = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)param_2 + 4) = uVar5;
  *(undefined4 *)(param_2 + 1) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140c84580 FUN_140c84580 body=1526 status=ok
// SIG undefined FUN_140c84580(void)

double * FUN_140c84580(double *param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
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
  
  if ((float)param_3 <= 0.0) {
    dVar11 = *param_2;
    dVar9 = param_2[1];
    dVar8 = param_2[2];
    dVar17 = dVar8 * dVar8 + dVar11 * dVar11 + dVar9 * dVar9;
    if ((dVar17 != 1.0) || (NAN(dVar17))) {
      if (9.99999993922529e-09 <= dVar17) {
        dVar17 = 1.0 / SQRT(dVar17);
        *param_1 = dVar11 * dVar17;
        param_1[1] = dVar9 * dVar17;
        param_1[2] = dVar8 * dVar17;
        return param_1;
      }
      param_1[2] = DAT_14c8464f0;
      dVar11 = DAT_14c8464e0;
      dVar9 = DAT_14c8464e8;
    }
    else {
      param_1[2] = param_2[2];
      dVar11 = *param_2;
      dVar9 = param_2[1];
    }
    *param_1 = dVar11;
    param_1[1] = dVar9;
  }
  else {
    uVar4 = rand();
    uVar5 = rand();
    fVar6 = (float)(uVar5 & 0x7fff) / 32767.0;
    fVar7 = fVar6 + fVar6 + -1.0;
    fVar6 = fVar7;
    if (1.0 <= fVar7) {
      fVar6 = 1.0;
    }
    fVar6 = acosf((float)(-(uint)(fVar7 < -1.0) & 0xbf800000 | ~-(uint)(fVar7 < -1.0) & (uint)fVar6)
                 );
    fVar6 = (float)FUN_1447c7e44(fVar6,param_3);
    dVar11 = *param_2;
    dVar9 = param_2[1];
    dVar8 = 0.0;
    if ((((dVar11 != 0.0) || (NAN(dVar11))) || (dVar9 != 0.0)) || (NAN(dVar9))) {
      dVar8 = atan2(dVar9,dVar11);
      dVar8 = dVar8 * 57.29577951308232;
      dVar11 = *param_2;
      dVar9 = param_2[1];
    }
    dVar17 = SQRT(dVar11 * dVar11 + dVar9 * dVar9);
    dVar11 = param_2[2];
    dVar9 = 0.0;
    if (((dVar11 != 0.0) || (NAN(dVar11))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
      dVar9 = atan2(dVar11,dVar17);
      dVar9 = dVar9 * 57.29577951308232;
    }
    dVar10 = sin(dVar9 * 0.01745329238474369);
    dVar11 = sin(dVar8 * 0.01745329238474369);
    dVar12 = cos(dVar9 * 0.01745329238474369);
    dVar13 = cos(dVar8 * 0.01745329238474369);
    dVar2 = dVar12 * dVar13;
    dVar18 = dVar11 * dVar12;
    dVar16 = dVar10 * 0.0 * dVar13 - dVar11;
    dVar12 = dVar12 * -0.0;
    dVar13 = dVar10 * 0.0 * dVar11 + dVar13;
    dVar11 = (double)((fVar6 * 180.0) / 3.1415927) * 0.017453292519943295;
    dVar14 = sin(dVar11);
    dVar15 = cos(dVar11);
    dVar17 = 1.0 - dVar15;
    dVar20 = dVar12 * dVar16 * dVar17;
    dVar3 = dVar12 * dVar13 * dVar17;
    dVar11 = param_2[1];
    dVar9 = *param_2;
    dVar8 = param_2[2];
    dVar1 = (dVar12 * dVar12 * dVar17 + dVar15) * dVar8 +
            (dVar20 - dVar13 * dVar14) * dVar9 + (dVar3 + dVar16 * dVar14) * dVar11;
    dVar19 = dVar16 * dVar13 * dVar17;
    dVar3 = (dVar3 - dVar16 * dVar14) * dVar8 +
            (dVar19 + dVar12 * dVar14) * dVar9 + (dVar13 * dVar13 * dVar17 + dVar15) * dVar11;
    dVar8 = (dVar20 + dVar13 * dVar14) * dVar8 +
            (dVar17 * dVar16 * dVar16 + dVar15) * dVar9 + (dVar19 - dVar12 * dVar14) * dVar11;
    dVar11 = (double)((((float)(uVar4 & 0x7fff) / 32767.0) * 6.2831855 * 180.0) / 3.1415927) *
             0.017453292519943295;
    dVar17 = sin(dVar11);
    dVar16 = cos(dVar11);
    dVar9 = 1.0 - dVar16;
    dVar11 = dVar10 * dVar2 * dVar9;
    dVar20 = dVar10 * dVar18 * dVar9;
    dVar12 = (dVar10 * dVar10 * dVar9 + dVar16) * dVar1 +
             (dVar11 - dVar18 * dVar17) * dVar8 + (dVar20 + dVar2 * dVar17) * dVar3;
    dVar13 = dVar18 * dVar2 * dVar9;
    dVar20 = (dVar20 - dVar2 * dVar17) * dVar1 +
             (dVar13 + dVar10 * dVar17) * dVar8 + (dVar18 * dVar18 * dVar9 + dVar16) * dVar3;
    dVar11 = (dVar11 + dVar18 * dVar17) * dVar1 +
             (dVar9 * dVar2 * dVar2 + dVar16) * dVar8 + (dVar13 - dVar10 * dVar17) * dVar3;
    dVar9 = dVar12 * dVar12 + dVar11 * dVar11 + dVar20 * dVar20;
    if (((dVar9 != 1.0) || (dVar17 = dVar12, dVar16 = dVar20, dVar8 = dVar11, NAN(dVar9))) &&
       (dVar17 = DAT_14c8464f0, dVar16 = DAT_14c8464e8, dVar8 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar9)) {
      dVar9 = 1.0 / SQRT(dVar9);
      dVar17 = dVar12 * dVar9;
      dVar16 = dVar20 * dVar9;
      dVar8 = dVar11 * dVar9;
    }
    *param_1 = dVar8;
    param_1[1] = dVar16;
    param_1[2] = dVar17;
  }
  return param_1;
}



// FUNCTION 140c84b76 FUN_140c84b76 body=138 status=ok
// SIG undefined FUN_140c84b76(void)

undefined8 FUN_140c84b76(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (((char)param_2 == '\0') && (lVar1 = *(longlong *)(param_1 + 0x1a0), lVar1 != 0)) {
    plVar2 = (longlong *)(lVar1 + 0x3ac8);
    lVar1 = (**(code **)(*(longlong *)(lVar1 + 0x3ac8) + 0x28))(plVar2);
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
      lVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if (lVar1 != 0) {
        uVar3 = FUN_1401d646e(lVar1 + 0x71a8);
        return uVar3;
      }
    }
  }
  lVar1 = FUN_140c84c00(param_1);
  if (lVar1 != 0) {
    uVar3 = FUN_140c84c86(lVar1,param_2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140c84c00 FUN_140c84c00 body=133 status=ok
// SIG undefined FUN_140c84c00(void)

undefined8 FUN_140c84c00(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1402f20d0(param_1,&local_28);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_140c84de2(local_28,param_1);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c84c86 FUN_140c84c86 body=348 status=ok
// SIG undefined FUN_140c84c86(void)

float FUN_140c84c86(longlong param_1,byte param_2)

{
  char cVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = 0.0;
  if (param_2 == 0) {
    lVar5 = 0x4a0;
    lVar2 = 0x28;
LAB_140c84caf:
    lVar4 = 0;
    if (*(char *)(param_1 + lVar5) != '\0') {
      lVar4 = lVar2 + param_1;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 != 1) goto LAB_140c84d14;
LAB_140c84d6f:
      lVar5 = 0x920;
      lVar2 = 0x4a8;
      goto LAB_140c84caf;
    }
    if (*(char *)(param_1 + 0x4a0) == '\0') goto LAB_140c84d6f;
    lVar4 = param_1 + 0x28;
  }
  pfVar3 = (float *)0x0;
  if (param_2 < 2) {
    pfVar3 = (float *)(param_1 + 0x948 + (ulonglong)param_2 * 8);
  }
  if (((pfVar3 == (float *)0x0) || (lVar4 == 0)) || (fVar8 = *pfVar3, fVar8 < 0.0))
  goto LAB_140c84d14;
  cVar1 = *(char *)(lVar4 + 0x460);
  if (cVar1 == '\x02') {
    if (*(char *)(pfVar3 + 1) == '\0') {
      fVar8 = 0.0;
    }
  }
  else if (cVar1 == '\x03') {
    if (*(char *)(lVar4 + 0x470) == '\x01') {
      lVar2 = *(longlong *)(param_1 + 0x928);
      if (lVar2 != 0) {
        fVar6 = (float)FUN_1489ae9f8(lVar2,*(undefined8 *)(lVar4 + 0x468));
        fVar8 = (float)FUN_1489aeab8(lVar2,*(undefined8 *)(lVar4 + 0x468));
        fVar7 = (float)FUN_1489aeb88(lVar2,*(undefined8 *)(lVar4 + 0x468));
        fVar6 = (float)(-(uint)(0.0 < fVar8) & (uint)(1.0 - (fVar6 - fVar7) / fVar8));
      }
      goto LAB_140c84d14;
    }
    if (*(char *)(lVar4 + 0x471) != '\0') goto LAB_140c84d14;
  }
  else if (cVar1 == '\0') goto LAB_140c84d14;
  fVar6 = 1.0 - (*(float *)(lVar4 + 0x464) - fVar8) / *(float *)(lVar4 + 0x464);
LAB_140c84d14:
  if (1.0 <= fVar6) {
    fVar6 = 1.0;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  return fVar6;
}



// FUNCTION 140c84de2 FUN_140c84de2 body=184 status=ok
// SIG undefined FUN_140c84de2(void)

ulonglong FUN_140c84de2(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1b90) != *(int *)(param_1 + 0x1bb4)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x1bb8;
    if (*(longlong *)(param_1 + 0x1bc0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1bc0);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x1bc8) - 1U & (uVar2 >> 0x10 ^ uVar2))
                             * 4);
    if (iVar4 != -1) {
      lVar3 = param_1 + 0x1b28;
      if (*(longlong *)(param_1 + 0x1b88) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x1b88);
      }
      while (puVar1 = (ulonglong *)(lVar3 + (longlong)iVar4 * 0x18), *puVar1 != param_2) {
        iVar4 = (int)puVar1[2];
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (puVar1 != (ulonglong *)0x0) {
        if (puVar1 + 1 != (ulonglong *)0x0) {
          return puVar1[1];
        }
        return 0;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 140c84e9a FUN_140c84e9a body=85 status=ok
// SIG undefined FUN_140c84e9a(void)

undefined8 * FUN_140c84e9a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5afc70;
  plVar3 = (longlong *)param_1[5];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c84ef0 FUN_140c84ef0 body=88 status=ok
// SIG undefined FUN_140c84ef0(void)

void FUN_140c84ef0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c84f48 FUN_140c84f48 body=51 status=ok
// SIG undefined FUN_140c84f48(void)

void FUN_140c84f48(undefined8 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  undefined1 auStack_128 [32];
  undefined4 *puStack_108;
  longlong lStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  undefined4 auStack_e0 [2];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined1 uStack_62;
  undefined4 uStack_61;
  longlong lStack_58;
  ulonglong uStack_50;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar9 = (undefined1 *)*param_1;
    lVar3 = (longlong)*(int *)(param_1 + 1) * 0x118;
    do {
      if (*(int *)(puVar9 + 8) == param_2) {
        if (puVar9 == (undefined1 *)0x0) {
          return;
        }
        uStack_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
        FUN_14031cffa(*(undefined8 *)(puVar9 + 0xf8),puVar9,1);
        if (((((puVar9[0xed] == '\x01') && (*(longlong **)(puVar9 + 0x18) != (longlong *)0x0)) &&
             (*(int *)(puVar9 + 0x14) != 0)) &&
            (((uVar1 = *(uint *)(puVar9 + 0x10), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
             ((lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0 &&
              ((*(int *)(lVar3 + 0x10) == *(int *)(puVar9 + 0x14) &&
               ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))))))) &&
           (lVar3 = (**(code **)(**(longlong **)(puVar9 + 0x18) + 0x18))(), lVar3 != 0)) {
          lVar6 = FUN_145978cdc();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) {
            *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) & 0xf7;
          }
        }
        *puVar9 = 4;
        if (*(longlong *)(puVar9 + 0x78) == 0) goto LAB_140c851cd;
        auStack_e0[0] = 0;
        uStack_d8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        uStack_a8 = 0;
        uStack_a4 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_64 = 0;
        uStack_62 = 1;
        uStack_61 = 0;
        uStack_68 = *(undefined4 *)(puVar9 + 0x90);
        uVar4 = (**(code **)(**(longlong **)(puVar9 + 0x18) + 0x18))();
        uVar8 = *(undefined8 *)(puVar9 + 0x78);
        lStack_f0 = 0;
        uStack_e8 = 0;
        uVar5 = FUN_1407ad36c();
        lVar3 = FUN_14477b664(uVar5);
        lVar6 = FUN_1407ad36c();
        uVar5 = FUN_1407ad36c();
        FUN_1402d1bfa(&lStack_58,uVar5,uVar8);
        if (lStack_58 != 0) {
          uStack_e8 = 0;
        }
        lStack_f8 = lStack_58;
        lVar7 = FUN_1407ad36c();
        if (lVar6 == 0) {
LAB_140c85116:
          lVar7 = lVar6;
        }
        else if (lVar7 == 0) {
          lVar7 = 0;
        }
        else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
                (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                 == lVar7 + 0x30)) goto LAB_140c85116;
        if (lVar3 != lVar7) {
          uStack_e8 = 0;
        }
        uVar5 = FUN_14477b664(lVar7);
        lStack_f0 = FUN_14477b664(uVar5);
        if (lStack_f0 != 0 && lStack_58 != 0) {
          uStack_e8 = uVar8;
        }
        iVar2 = *(int *)(*(longlong *)(puVar9 + 0xf8) + 0x24c);
        if (iVar2 == 0) {
LAB_140c85200:
          uVar8 = 0;
        }
        else {
          uVar1 = *(uint *)(*(longlong *)(puVar9 + 0xf8) + 0x248);
          uVar8 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            plVar10 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((plVar10 == (longlong *)0x0) ||
               ((((int)plVar10[2] != iVar2 || ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) ||
                (*plVar10 == 0)))) goto LAB_140c85200;
            uVar8 = FUN_140115352();
          }
        }
        puStack_108 = auStack_e0;
        FUN_140d5168f(uVar8,&lStack_f8,uVar4,0);
LAB_140c851cd:
        if ((uStack_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      puVar9 = puVar9 + 0x118;
      lVar3 = lVar3 + -0x118;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 140c84f7c FUN_140c84f7c body=702 status=ok
// SIG undefined FUN_140c84f7c(void)

void FUN_140c84f7c(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  longlong local_f8;
  longlong local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined4 local_61;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_14031cffa(*(undefined8 *)(param_1 + 0xf8),param_1,1);
  if ((((param_1[0xed] == '\x01') && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) &&
      (*(int *)(param_1 + 0x14) != 0)) &&
     ((uVar1 = *(uint *)(param_1 + 0x10), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
    lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar9 != 0) &&
       ((*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x14) &&
        ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))) {
      lVar9 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
      if (lVar9 != 0) {
        lVar5 = FUN_145978cdc();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) {
          *(byte *)(lVar9 + 0x60) = *(byte *)(lVar9 + 0x60) & 0xf7;
        }
      }
    }
  }
  *param_1 = 4;
  if (*(longlong *)(param_1 + 0x78) == 0) goto LAB_140c851cd;
  local_e0[0] = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_64 = 0;
  local_62 = 1;
  local_61 = 0;
  local_68 = *(undefined4 *)(param_1 + 0x90);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  uVar7 = *(undefined8 *)(param_1 + 0x78);
  local_f0 = 0;
  uStack_e8 = 0;
  uVar4 = FUN_1407ad36c();
  lVar9 = FUN_14477b664(uVar4);
  lVar5 = FUN_1407ad36c();
  uVar4 = FUN_1407ad36c();
  FUN_1402d1bfa(&local_58,uVar4,uVar7);
  if (local_58 != 0) {
    uStack_e8 = 0;
  }
  local_f8 = local_58;
  lVar6 = FUN_1407ad36c();
  if (lVar5 == 0) {
LAB_140c85116:
    lVar6 = lVar5;
  }
  else if (lVar6 == 0) {
    lVar6 = 0;
  }
  else if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)) goto LAB_140c85116;
  if (lVar9 != lVar6) {
    uStack_e8 = 0;
  }
  uVar4 = FUN_14477b664(lVar6);
  local_f0 = FUN_14477b664(uVar4);
  if (local_f0 != 0 && local_58 != 0) {
    uStack_e8 = uVar7;
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0xf8) + 0x24c);
  if (iVar2 == 0) {
LAB_140c85200:
    uVar7 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0xf8) + 0x248);
    uVar7 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         ((((int)plVar8[2] != iVar2 || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) ||
          (*plVar8 == 0)))) goto LAB_140c85200;
      uVar7 = FUN_140115352();
    }
  }
  local_108 = local_e0;
  FUN_140d5168f(uVar7,&local_f8,uVar3,0);
LAB_140c851cd:
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c8523c FUN_140c8523c body=270 status=ok
// SIG undefined FUN_140c8523c(void)

undefined8 FUN_140c8523c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140c85344;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140c85344;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140c85344:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140c852f2;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_140c852f2;
    }
  }
  uVar6 = 0;
LAB_140c852f2:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c85358 FUN_140c85358 body=104 status=ok
// SIG undefined FUN_140c85358(void)

void FUN_140c85358(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_143e2abdc(param_1 + 0x140);
  if (((cVar1 != '\0') && (*(longlong *)(param_1 + 0x40) != 0)) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x40) + 8) >> 0x1e & 1) == 0)) {
    FUN_143e2ac56(param_1 + 0x140);
    if (*(char *)(param_1 + 0x1e8) == '\x02') {
      uVar2 = 3;
    }
    else {
      if (*(char *)(param_1 + 0x1e8) != '\x04') {
        return;
      }
      uVar2 = 5;
    }
    *(undefined1 *)(param_1 + 0x1e8) = uVar2;
    FUN_143e2ad8a(param_1);
    return;
  }
  return;
}



// FUNCTION 140c853c0 FUN_140c853c0 body=40 status=ok
// SIG undefined FUN_140c853c0(void)

undefined8 FUN_140c853c0(undefined8 param_1,int param_2)

{
  FUN_140c853e8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c853e8 FUN_140c853e8 body=380 status=ok
// SIG undefined FUN_140c853e8(void)

void FUN_140c853e8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a3afab0;
  param_1[5] = &PTR_FUN_14a3b04b0;
  param_1[6] = &PTR_LAB_14a3b04f0;
  param_1[0x55] = &PTR_FUN_14a3b0540;
  param_1[0x56] = &PTR_FUN_14a3b05c0;
  param_1[0x57] = &PTR_FUN_14a3b05d0;
  if (param_1[0x101] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x100];
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
  if (param_1[0xfd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xfa] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xec] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xea] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc9] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 140c85564 FUN_140c85564 body=42 status=ok
// SIG undefined FUN_140c85564(void)

void FUN_140c85564(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1408410b2(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 140c8558e FUN_140c8558e body=81 status=ok
// SIG undefined FUN_140c8558e(void)

undefined8 FUN_140c8558e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x1b0) == '\x01') {
    FUN_140c855e0(param_1);
    cVar1 = FUN_140c8580e(param_1,param_2);
    if (cVar1 == '\0') {
      return 2;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0xfc) = 0;
  }
  return 0;
}



// FUNCTION 140c855e0 FUN_140c855e0 body=533 status=ok
// SIG undefined FUN_140c855e0(void)

void FUN_140c855e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x168) != '\x01') goto LAB_140c8560a;
  plVar8 = *(longlong **)(param_1 + 0xf0);
  bVar11 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_140c85670:
    plVar7 = (longlong *)0x0;
LAB_140c85673:
    uVar6 = FUN_140343d7a(param_1);
    FUN_14070cbf4(&local_50,uVar6);
    plVar2 = local_48;
    lVar9 = local_50;
    local_50 = 0;
    plVar8 = plVar7;
    if (local_48 == plVar7) {
LAB_140c8579a:
      plVar7 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    else {
      local_48 = (longlong *)0x0;
      plVar8 = plVar2;
      if (!bVar11) {
        LOCK();
        plVar2 = plVar7 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
        goto LAB_140c8579a;
      }
    }
    *(longlong *)(param_1 + 0xe8) = lVar9;
    plVar7 = *(longlong **)(param_1 + 0xf0);
    if (plVar7 != plVar8) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar7 = *(longlong **)(param_1 + 0xf0);
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0xf0) = plVar8;
    }
    if (lVar9 != 0) goto LAB_140c856f8;
LAB_140c85790:
    bVar11 = false;
  }
  else {
    iVar5 = (int)plVar8[1];
    do {
      if (iVar5 == 0) goto LAB_140c85670;
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    lVar9 = *(longlong *)(param_1 + 0xe8);
    if (lVar9 == 0) {
      bVar11 = false;
      plVar7 = plVar8;
      goto LAB_140c85673;
    }
LAB_140c856f8:
    if ((*(longlong *)(lVar9 + 0x520) == 0) || (*(longlong *)(lVar9 + 0x4b0) == 0))
    goto LAB_140c85790;
    cVar4 = FUN_1449c239e();
    bVar11 = cVar4 == '\x05';
  }
  if ((bool)*(char *)(param_1 + 0xf8) != bVar11) {
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0xf9) = 1;
  *(bool *)(param_1 + 0xf8) = bVar11;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
  }
LAB_140c8560a:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c8580e FUN_140c8580e body=1316 status=ok
// SIG undefined FUN_140c8580e(void)

undefined4 FUN_140c8580e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined *puVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 ****ppppuVar18;
  bool bVar19;
  undefined1 auStack_128 [32];
  char *local_108;
  undefined1 local_f4 [4];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [72];
  char local_a0 [8];
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80;
  int local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar4 = *(longlong *)(param_1 + 0xe0);
  if ((lVar4 == 0) || (*(int *)(param_1 + 0xdc) == 0)) {
LAB_140c85896:
    uVar9 = 0;
    goto LAB_140c85898;
  }
  uVar3 = *(uint *)(param_1 + 0xd8);
  uVar9 = 0;
  if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_140c85898;
  lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  if (((lVar14 == 0) || (*(int *)(lVar14 + 0x10) != *(int *)(param_1 + 0xdc))) ||
     ((*(uint *)(lVar14 + 8) & 0x10200000) != 0)) goto LAB_140c85896;
  lVar14 = *(longlong *)(param_1 + 0x48);
  lVar17 = *(longlong *)(param_1 + 0x40);
  if (lVar17 == 0) {
    lVar16 = 0;
    local_98 = 0;
LAB_140c85c4c:
    local_90 = (longlong *)0x0;
    bVar7 = true;
  }
  else {
    if (*(int *)(lVar17 + 0x4c) == 0) {
LAB_140c85b64:
      lVar16 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar17 + 0x48);
      lVar16 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar11 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar11 == (longlong *)0x0) ||
           (((int)plVar11[2] != *(int *)(lVar17 + 0x4c) ||
            ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_140c85b64;
        lVar16 = *plVar11;
      }
    }
    plVar11 = *(longlong **)(lVar17 + 0x118);
    local_98 = param_1;
    if (plVar11 == (longlong *)0x0) goto LAB_140c85c4c;
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
    UNLOCK();
    bVar7 = false;
    local_90 = plVar11;
  }
  plVar11 = local_90;
  local_78 = 0;
  local_a0[0] = '\x03';
  local_88._0_4_ = 0;
  if (lVar16 == 0) {
    iVar8 = 0;
    uVar3 = (uint)local_88;
  }
  else {
    uVar3 = *(uint *)(lVar16 + 0xc);
    local_88 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar8 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar8 = *(int *)(lVar17 + 0x10);
      bVar19 = iVar8 == 0;
      if (bVar19) {
        *(int *)(lVar17 + 0x10) = iVar13;
        iVar8 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_88;
      if (bVar19) {
        iVar8 = iVar13;
      }
    }
  }
  local_88._0_4_ = uVar3;
  local_88 = CONCAT44(iVar8,(uint)local_88);
  local_80 = 2;
  if (local_78 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_78 + -1,1);
    local_78 = 0;
  }
  if (!bVar7) {
    LOCK();
    piVar2 = (int *)((longlong)plVar11 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  uVar10 = FUN_140343d7a(param_1);
  lVar17 = *(longlong *)(lVar14 + 0xb8);
  if (lVar17 == DAT_14cb72618) {
    local_f4[0] = 0;
  }
  else if ((lVar17 == DAT_14cb72620) || ((lVar17 != DAT_14cb72628 && (lVar17 != DAT_14cb725f8)))) {
    local_f4[0] = 1;
  }
  else {
    local_f4[0] = 2;
  }
  local_f0 = 0;
  local_ec = 0;
  FUN_1447c3578(lVar14 + 0x80,local_70,local_a0);
  FUN_14070d2c0(local_e8,local_70,local_f4,uVar10);
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar5 != (code *)0x0) {
    ppppuVar18 = local_70;
    if (0x18 < local_58) {
      ppppuVar18 = (undefined8 ****)local_70[0];
    }
    (*pcVar5)(ppppuVar18);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
  uVar15 = 0xb8;
  if (((byte)(*(char *)(param_1 + 0xb4) - 1U) < 2) && (*(char *)(lVar14 + 0x1b0) == '\x01')) {
    uVar15 = (ulonglong)*(byte *)(lVar14 + 0x1b1) << 8 | 0xb8;
  }
  uVar9 = FUN_14070c9d0(param_1 + 0xf8,*(undefined4 *)(param_2 + 8),0x3f000000);
  local_108 = local_a0;
  uVar9 = FUN_1406ec4ca(lVar14 + uVar15,lVar4,local_e8,uVar9);
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_78 != 0) {
    lVar14 = (longlong)local_78 + -1;
    lVar17 = lVar14 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar17),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar17));
    if (*(longlong *)(lVar4 + lVar17) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar8 = (int)lVar14;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar4 + lVar17) = 0xffffffff;
    iVar13 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar13 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar17) = iVar13;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar12 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar12 = DAT_14c9a3dc0;
    }
    iVar13 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar13 = iVar8;
    }
    bVar6 = (byte)lVar14 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar12 + (longlong)(iVar13 >> 5) * 4) =
         *(uint *)(puVar12 + (longlong)(iVar13 >> 5) * 4) &
         (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
    local_78 = 0;
  }
  if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_90 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
LAB_140c85898:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 140c85d34 FUN_140c85d34 body=40 status=ok
// SIG undefined FUN_140c85d34(void)

undefined8 FUN_140c85d34(undefined8 param_1,int param_2)

{
  FUN_140c85d5c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c85d5c FUN_140c85d5c body=391 status=ok
// SIG undefined FUN_140c85d5c(void)

void FUN_140c85d5c(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14b3ed460;
  if (param_1[0x22] != 0) {
    lVar1 = *(longlong *)(param_1[0x22] + 0x6a0);
    lVar4 = (longlong)*(int *)(lVar1 + 0x158);
    if (lVar4 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x150);
      lVar5 = 0;
      do {
        if (((*(int *)(lVar1 + 8 + lVar5) != 0) &&
            (plVar2 = *(longlong **)(lVar1 + lVar5), plVar2 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1), cVar3 != '\0')) {
          if (param_1[0xb9] != 0) {
            FUN_14480f766(*(longlong *)(param_1[0x22] + 0x6a0) + 0x150);
          }
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while (lVar4 * 0x10 != lVar5);
    }
  }
  *(undefined4 *)(param_1 + 0xc3) = 0;
  if (param_1[0xc2] != 0) {
    FUN_1400020a8();
  }
  FUN_140c85ee4(param_1 + 0xba);
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  FUN_140166747(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a442710;
  FUN_1408f8ca5(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c85ee4 FUN_140c85ee4 body=55 status=ok
// SIG undefined FUN_140c85ee4(void)

void FUN_140c85ee4(longlong *param_1)

{
  FUN_140c85f1c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c85f1c FUN_140c85f1c body=123 status=ok
// SIG undefined FUN_140c85f1c(void)

void FUN_140c85f1c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 140c85f98 FUN_140c85f98 body=49 status=ok
// SIG undefined FUN_140c85f98(void)

void FUN_140c85f98(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_140c85fca();
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  switchD_143c3d4dc::caseD_1f(param_1);
  return;
}



// FUNCTION 140c85fca FUN_140c85fca body=1630 status=ok
// SIG undefined FUN_140c85fca(void)

void FUN_140c85fca(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined ***pppuVar18;
  uint *puVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_140c8600c;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_140c86015;
      goto LAB_140c86155;
    }
LAB_140c86015:
    FUN_14490df4a();
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      LOCK();
      puVar12 = (uint *)(lVar4 + 8);
      uVar16 = *puVar12;
      *puVar12 = *puVar12 - 1;
      UNLOCK();
      if ((uVar16 & 0x3fffffff) == 1) {
        puVar12 = (uint *)(lVar4 + 8);
        LOCK();
        uVar16 = *puVar12;
        *puVar12 = *puVar12 | 0x40000000;
        UNLOCK();
        if ((uVar16 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar4;
          plVar15 = DAT_14ca843c0;
          plVar14 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar15;
              LOCK();
              bVar21 = plVar15 != DAT_14ca843c0;
              plVar14 = plVar9;
              if (bVar21) {
                plVar15 = DAT_14ca843c0;
                plVar14 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar14;
              UNLOCK();
            } while (bVar21);
          }
          else {
            do {
              *plVar9 = (longlong)plVar14;
              LOCK();
              bVar21 = plVar14 != DAT_14ca843c8;
              plVar15 = plVar9;
              if (bVar21) {
                plVar14 = DAT_14ca843c8;
                plVar15 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar15;
              UNLOCK();
            } while (bVar21);
          }
        }
      }
    }
  }
  else {
LAB_140c8600c:
    if (iVar6 == 0x10) goto LAB_140c86015;
LAB_140c86155:
    if (DAT_14ca9a438 != '\0') {
LAB_140c86186:
      if (DAT_14ca9a43c == 0) {
        puVar17 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar12 = (uint *)*puVar17;
        if (puVar12 != (uint *)0x0) goto LAB_140c862b6;
        while( true ) {
          uVar16 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar16 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar16 | 1;
            __tlregdtor(&LAB_143590326);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar17 = puVar11;
          FUN_140217a48(puVar17);
          puVar12 = (uint *)*puVar17;
LAB_140c862b6:
          puVar10 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar19 = (uint *)(puVar10 + 0x16);
          uVar16 = puVar12[0x12];
          if (puVar19 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar2 = *puVar12;
            *puVar12 = *puVar12 + uVar16 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar16) != 0xffffffff) break;
            puVar12 = (uint *)*puVar17;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar17 = puVar12;
            puVar10 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar19 = (uint *)(puVar10 + 0x16);
            uVar16 = 0;
            if (puVar19 <= puVar12 + 0x4000) {
              uVar16 = 1;
              goto LAB_140c86336;
            }
          }
        }
        uVar16 = uVar16 + 1;
LAB_140c86336:
        *(uint **)(puVar12 + 0x10) = puVar19;
        puVar12[0x12] = uVar16;
        iVar6 = 0;
        FUN_1447247dc(puVar10,0);
        *puVar10 = &PTR_FUN_14a9e49c8;
        puVar10[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar16 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
            iVar6 = 0;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
        }
        if (*(code **)(puVar10[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar10[0xe] + 0x18))(puVar10 + 0xe,puVar10 + 9);
        }
        puVar10[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar10[9] = puVar10;
        puVar10[10] = puVar10;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar20 != '\x06') {
            uVar5 = uVar20;
          }
          uVar20 = uVar5;
          uVar13 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar10[0xf] = uVar13;
        puVar10[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar10 + 0x1c) = iVar6;
        if (puVar10 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar10);
          LOCK();
          piVar1 = (int *)(puVar10 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar10)(puVar10,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a9e4970;
        local_68[0] = FUN_1435916b2;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"DestroyCollectionCommand",&DAT_14caf1ee4);
        if (local_68[0] != (code *)0x0) {
          pppuVar18 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar18 = &local_48;
          }
          (*(code *)(*pppuVar18)[2])();
        }
      }
      goto LAB_140c861f4;
    }
    if ((DAT_14c86a9f8 == '\x01') && (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 != 2)) {
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_140c86571;
      }
      goto LAB_140c86186;
    }
LAB_140c86571:
    FUN_14490df4a();
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      LOCK();
      puVar12 = (uint *)(lVar4 + 8);
      uVar16 = *puVar12;
      *puVar12 = *puVar12 - 1;
      UNLOCK();
      if ((uVar16 & 0x3fffffff) == 1) {
        puVar12 = (uint *)(lVar4 + 8);
        LOCK();
        uVar16 = *puVar12;
        *puVar12 = *puVar12 | 0x40000000;
        UNLOCK();
        if ((uVar16 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar4;
          plVar15 = DAT_14ca843c0;
          plVar14 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar15;
              LOCK();
              bVar21 = plVar15 != DAT_14ca843c0;
              plVar14 = plVar9;
              if (bVar21) {
                plVar15 = DAT_14ca843c0;
                plVar14 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar14;
              UNLOCK();
            } while (bVar21);
          }
          else {
            do {
              *plVar9 = (longlong)plVar14;
              LOCK();
              bVar21 = plVar14 != DAT_14ca843c8;
              plVar15 = plVar9;
              if (bVar21) {
                plVar14 = DAT_14ca843c8;
                plVar15 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar15;
              UNLOCK();
            } while (bVar21);
          }
        }
      }
    }
  }
  if (DAT_14ca85164 == '\x01') {
    FUN_143582732(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
  puVar10 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar17 = puVar10 + 3;
  if (DAT_14ca85108 < puVar17) {
    FUN_140023dd8(&DAT_14ca85100,0x20);
    puVar10 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar17 = puVar10 + 3;
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar17;
  *DAT_14ca85130 = puVar10;
  DAT_14ca85130 = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_14a9e4960;
  puVar10[2] = param_1;
LAB_140c861f4:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c8663c FUN_140c8663c body=149 status=ok
// SIG undefined FUN_140c8663c(void)

undefined8 * FUN_140c8663c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0adb50;
  param_1[1] = &PTR_FUN_14b0ad9d0;
  FUN_140c866d1(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xf];
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
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c866d1 FUN_140c866d1 body=73 status=ok
// SIG undefined FUN_140c866d1(void)

void FUN_140c866d1(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140c8671a FUN_140c8671a body=330 status=ok
// SIG undefined FUN_140c8671a(void)

void FUN_140c8671a(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(int *)((longlong)param_1 + 0x4c) != 0) &&
      (uVar3 = *(uint *)(param_1 + 9), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)((longlong)param_1 + 0x4c))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
        ((lVar4 = *plVar5, lVar4 != 0 && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)))))) {
      lVar6 = 0;
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar6 = lVar4;
      }
      if ((*(byte *)(lVar6 + 0x9e) & 0x10) != 0) {
        local_40 = param_1[3];
        local_38 = (longlong *)param_1[4];
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        local_48 = lVar4;
        local_30 = param_2;
        local_2c = (**(code **)(*param_1 + 0x38))(param_1);
        lVar4 = (longlong)*(int *)(param_1[8] + 0x78);
        if (lVar4 != 0) {
          lVar6 = *(longlong *)(param_1[8] + 0x70);
          lVar7 = 0;
          do {
            plVar5 = *(longlong **)(lVar6 + lVar7);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))(plVar5,&local_48);
            }
            lVar7 = lVar7 + 0x18;
          } while (lVar4 * 0x18 != lVar7);
        }
        plVar5 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_38 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c86878 FUN_140c86878 body=175 status=ok
// SIG undefined FUN_140c86878(void)

undefined8 * FUN_140c86878(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b07d840;
  FUN_140c86997(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_140c86960(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_140c86928(param_1 + 0x11);
  FUN_1403d767a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c86928 FUN_140c86928 body=55 status=ok
// SIG undefined FUN_140c86928(void)

void FUN_140c86928(longlong *param_1)

{
  FUN_140c86bc6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c86960 FUN_140c86960 body=55 status=ok
// SIG undefined FUN_140c86960(void)

void FUN_140c86960(longlong *param_1)

{
  FUN_140c86a20(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c86997 FUN_140c86997 body=136 status=ok
// SIG undefined FUN_140c86997(void)

void FUN_140c86997(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      FUN_1400020a8();
    }
    FUN_140c86960(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140c86928(param_1);
    param_1 = param_1 + 0xc0;
  }
  return;
}



// FUNCTION 140c86a20 FUN_140c86a20 body=420 status=ok
// SIG undefined FUN_140c86a20(void)

void FUN_140c86a20(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar5) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar5) != 0) {
        FUN_1400020a8();
      }
      FUN_140c86928(lVar2 + lVar5 + 8);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c86bc6 FUN_140c86bc6 body=515 status=ok
// SIG undefined FUN_140c86bc6(void)

void FUN_140c86bc6(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_140c86ca7;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x20 + (longlong)iVar6 * 0x38) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_140c86ca7;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140c86ca7:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140c86dca FUN_140c86dca body=272 status=ok
// SIG undefined FUN_140c86dca(void)

void FUN_140c86dca(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  bVar3 = DAT_14cb26569;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *param_3;
  if (((param_2 == 0) || (lVar5 == 0)) || ((DAT_14cb26569 & 1) == 0)) goto LAB_140c86e88;
  iVar1 = *(int *)(param_1 + 0x308);
  *(uint *)(param_1 + 0x308) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x30c) < iVar1 + 1U) {
    FUN_140c86f74((longlong *)(param_1 + 0x300),iVar1);
    bVar3 = DAT_14cb26569;
  }
  lVar5 = *(longlong *)(param_1 + 0x300);
  local_30 = *param_3;
  if ((local_30 != 0) && ((bVar3 & 1) != 0)) {
    piVar2 = *(int **)(local_30 + 0x50);
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    if (DAT_14cb259f8 == 0) {
      iVar4 = 5;
    }
    else {
      if ((char)piVar2[1] != '\x01') {
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
        goto LAB_140c86e6a;
      }
      iVar4 = 2;
    }
    LOCK();
    piVar2[2] = iVar4;
    UNLOCK();
  }
LAB_140c86e6a:
  FUN_140c86edc(lVar5 + (longlong)iVar1 * 0x48,param_2,&local_30);
  lVar5 = *param_3;
LAB_140c86e88:
  if ((lVar5 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lVar5 + 0x50));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c86edc FUN_140c86edc body=152 status=ok
// SIG undefined FUN_140c86edc(void)

undefined8 * FUN_140c86edc(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = param_2;
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if ((lVar1 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    piVar2 = *(int **)(lVar1 + 0x50);
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    if (DAT_14cb259f8 == 0) {
      iVar3 = 5;
    }
    else {
      if ((char)piVar2[1] != '\x01') {
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
        goto LAB_140c86f28;
      }
      iVar3 = 2;
    }
    LOCK();
    piVar2[2] = iVar3;
    UNLOCK();
  }
LAB_140c86f28:
  param_1[2] = 0;
  param_1[3] = 0xffffffffffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  if ((*param_3 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*param_3 + 0x50));
  }
  return param_1;
}



// FUNCTION 140c86f74 FUN_140c86f74 body=373 status=ok
// SIG undefined FUN_140c86f74(void)

void FUN_140c86f74(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x48;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c86ffd;
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
LAB_140c86ffd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 140c870ea FUN_140c870ea body=63 status=ok
// SIG undefined FUN_140c870ea(void)

longlong FUN_140c870ea(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140c87192(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_140c87129(lVar2);
  return lVar2;
}



// FUNCTION 140c87129 FUN_140c87129 body=104 status=ok
// SIG undefined FUN_140c87129(void)

void FUN_140c87129(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30 [2];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x10) = 0xff;
  local_20 = 0xff;
  FUN_140513334(local_30);
  local_30[0] = 0;
  local_20 = 0;
  FUN_140513298(param_1,local_30);
  FUN_140513334(local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c87192 FUN_140c87192 body=373 status=ok
// SIG undefined FUN_140c87192(void)

void FUN_140c87192(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c8721b;
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
LAB_140c8721b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140c87310 FUN_140c87310 body=139 status=ok
// SIG undefined FUN_140c87310(void)

undefined8 * FUN_140c87310(undefined8 *param_1)

{
  longlong lVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b401180;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3a83126f;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfe;
  lVar1 = FUN_140c8739c();
  if (lVar1 != 0) {
    *(undefined1 *)((longlong)param_1 + 0x1a) = *(undefined1 *)(lVar1 + 0x38);
  }
  return param_1;
}



// FUNCTION 140c8739c FUN_140c8739c body=118 status=ok
// SIG undefined FUN_140c8739c(void)

void FUN_140c8739c(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_14cb7d238 != 0) {
    return;
  }
  lVar1 = FUN_1459efd4c();
  if (*(longlong *)(lVar1 + 0x110) != 0) {
    lVar2 = FUN_1459efd4c();
    DAT_14cb7d238 = *(longlong *)(lVar1 + 0x110);
    if (DAT_14cb7d238 != 0) {
      if (lVar2 == 0) {
        DAT_14cb7d238 = 0;
        return;
      }
      lVar1 = *(longlong *)(DAT_14cb7d238 + 0x10);
      if (lVar1 == 0) {
        DAT_14cb7d238 = 0;
        return;
      }
      if (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
            lVar2 + 0x30) {
          DAT_14cb7d238 = 0;
          return;
        }
        return;
      }
    }
  }
  DAT_14cb7d238 = 0;
  return;
}



// FUNCTION 140c8741c FUN_140c8741c body=29 status=ok
// SIG undefined FUN_140c8741c(void)

undefined1 FUN_140c8741c(void)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140425b2f();
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x732);
  }
  return uVar1;
}



// FUNCTION 140c87439 FUN_140c87439 body=38 status=ok
// SIG undefined FUN_140c87439(void)

undefined8 FUN_140c87439(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_140425b2f();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140c87451. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x9e8))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140c87460 FUN_140c87460 body=94 status=ok
// SIG undefined FUN_140c87460(void)

undefined8 * FUN_140c87460(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b02dcf0;
  FUN_140c874be(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140c874be FUN_140c874be body=51 status=ok
// SIG undefined FUN_140c874be(void)

void FUN_140c874be(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140c874fc FUN_140c874fc body=152 status=ok
// SIG undefined FUN_140c874fc(void)

undefined8 * FUN_140c874fc(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"NavMesh",1);
  uVar1 = FUN_140c87682();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar1,0);
  FUN_140c87596(param_1,param_2);
  *param_1 = &PTR_FUN_14b277b30;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c87596 FUN_140c87596 body=235 status=ok
// SIG undefined FUN_140c87596(void)

undefined8 * FUN_140c87596(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14ab8e960;
  *(undefined1 *)(param_1 + 0x72) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  FUN_1446f470e(&local_28,L"NavMesh",1);
  uVar2 = FUN_140c87682();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_28,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x74] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x74];
  }
  param_1[0x39] = lVar3;
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) & 0xbf;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c87682 FUN_140c87682 body=228 status=ok
// SIG undefined FUN_140c87682(void)

longlong FUN_140c87682(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1be48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459ea784;
    local_38 = &LAB_147e33e23;
    local_40 = FUN_141801db7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x6f0;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavMeshComponent",&DAT_14cb1be48,&DAT_147e33e22);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1be48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c87768 FUN_140c87768 body=1381 status=ok
// SIG undefined FUN_140c87768(void)

void FUN_140c87768(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  uint local_8c;
  uint *local_88;
  longlong *local_80;
  longlong local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_140c87cce();
  local_60 = (void *)0x0;
  local_58 = *(int *)(param_1 + 0x218);
  lVar10 = (longlong)local_58;
  pvVar4 = *(void **)(param_1 + 0x210);
  if (lVar10 == 0) {
    local_54 = 0;
  }
  else {
    FUN_14010590e(&local_60,local_58,0);
    memcpy(local_60,pvVar4,lVar10 << 3);
  }
  local_70 = (void *)0x0;
  local_68 = *(int *)(param_1 + 0x208);
  lVar10 = (longlong)local_68;
  pvVar4 = *(void **)(param_1 + 0x200);
  if (lVar10 == 0) {
    local_64 = 0;
  }
  else {
    FUN_14016dbec(&local_70,local_68,0);
    memcpy(local_70,pvVar4,lVar10 << 3);
  }
  puVar15 = (uint *)(param_2 + 2);
  iVar2 = (int)param_2[5];
  if (iVar2 == 0) {
    uVar17 = 1;
    uVar16 = 0;
    iVar5 = 0;
    iVar12 = 0;
  }
  else {
    puVar6 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar6 = puVar15;
    }
    uVar14 = *puVar6;
    if (uVar14 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar16;
      }
      iVar12 = 0;
      do {
        if (uVar17 == uVar16) goto LAB_140c87a17;
        iVar12 = iVar12 + 0x20;
        uVar14 = puVar6[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar16 = 0;
      iVar12 = 0;
    }
    uVar17 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar17 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar5 = (iVar12 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar14 = 0xffffffff;
    local_80 = param_2;
    do {
      plVar11 = (longlong *)((longlong)iVar5 * 0x18 + *param_2);
      if ((longlong)local_58 != 0) {
        lVar10 = (longlong)local_58 * 8;
        lVar13 = 0;
        do {
          param_2 = local_80;
          local_8c = uVar14;
          local_88 = puVar15;
          if (*(longlong *)((longlong)local_60 + lVar13 * 8) == *plVar11) {
            uVar9 = (uint)lVar13;
            if ((-1 < (int)uVar9) && ((int)uVar9 < local_58)) {
              lVar10 = plVar11[1];
              local_78 = *(longlong *)(param_1 + 0x210);
              if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(lVar10);
              }
              *(longlong *)(local_78 + (ulonglong)(uVar9 & 0x7fffffff) * 8) = lVar10;
              *(byte *)(param_1 + 0x250) = *(byte *)(param_1 + 0x250) | 4;
              param_2 = local_80;
              puVar15 = local_88;
              uVar14 = local_8c;
            }
            break;
          }
          lVar13 = lVar13 + 1;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
      if ((longlong)local_68 != 0) {
        lVar10 = (longlong)local_68 * 8;
        lVar13 = 0;
        do {
          if (*(longlong *)((longlong)local_70 + lVar13 * 8) == *plVar11) {
            uVar9 = (uint)lVar13;
            if ((-1 < (int)uVar9) && ((int)uVar9 < local_68)) {
              lVar10 = plVar11[1];
              if (lVar10 == 0) {
LAB_140c87b3f:
                lVar13 = *(longlong *)(param_1 + 0x200);
                lVar10 = 0;
              }
              else {
                if (DAT_14cb3a798 == 0) {
                  local_b0 = &local_50;
                  local_50 = FUN_1449e2820;
                  local_a0 = FUN_14081d0ea;
                  local_a8 = &LAB_145a7874c;
                  local_b8 = &LAB_14811919b;
                  local_c0 = FUN_14646e15f;
                  local_c8 = L"Engine";
                  local_d0 = 0;
                  local_d8 = 0x10000001;
                  local_e0 = 8;
                  local_e8 = 0x38;
                  local_88 = puVar15;
                  FUN_14081cfa3(L"/Script/Niagara",L"NiagaraDataInterface",&DAT_14cb3a798,
                                &DAT_14811919a);
                  puVar15 = local_88;
                }
                if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cb3a798 + 0x38))
                   || (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14cb3a798 + 0x38) * 8) != DAT_14cb3a798 + 0x30))
                goto LAB_140c87b3f;
                lVar13 = *(longlong *)(param_1 + 0x200);
                if (DAT_14c950c29 == '\x01') {
                  local_8c = uVar14;
                  local_88 = puVar15;
                  FUN_1456cec3c(lVar10);
                  puVar15 = local_88;
                  uVar14 = local_8c;
                }
              }
              *(longlong *)(lVar13 + (ulonglong)(uVar9 & 0x7fffffff) * 8) = lVar10;
              *(byte *)(param_1 + 0x250) = *(byte *)(param_1 + 0x250) | 2;
              param_2 = local_80;
            }
            break;
          }
          lVar13 = lVar13 + 1;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
      uVar14 = uVar14 & ~(uint)uVar17;
      puVar6 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar6 = puVar15;
      }
      iVar3 = (int)param_2[5];
      iVar5 = (int)uVar16;
      lVar10 = (longlong)iVar5;
      uVar9 = puVar6[lVar10] & uVar14;
      if (uVar9 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar13 = 0;
          do {
            uVar9 = puVar6[lVar10 + lVar13 + 1];
            if (uVar9 != 0) {
              uVar16 = (ulonglong)(iVar5 + (int)lVar13 + 1);
              uVar14 = 0xffffffff;
              goto LAB_140c879e8;
            }
            iVar12 = iVar12 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar8 - lVar10 != lVar13);
          uVar14 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar16 = (ulonglong)(iVar5 + 1);
        param_2 = local_80;
        iVar5 = iVar3;
      }
      else {
LAB_140c879e8:
        uVar17 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar17 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar5 = (iVar12 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
LAB_140c87a17:
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c87cce FUN_140c87cce body=207 status=ok
// SIG undefined FUN_140c87cce(void)

void FUN_140c87cce(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  
  FUN_140c87d9e();
  uVar2 = *(ulonglong *)(param_1 + 0x1c8);
  if ((uVar2 != 0) && ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34))) {
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[8];
    }
    iVar5 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)param_2[9] - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_2 + (longlong)iVar5 * 0x18);
        if (*puVar1 == uVar2) {
          if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
            return;
          }
          uVar2 = puVar1[1];
          if ((uVar2 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(uVar2);
          }
          *(ulonglong *)(param_1 + 0x1c8) = uVar2;
          return;
        }
        iVar5 = (int)puVar1[2];
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 140c87d9e FUN_140c87d9e body=973 status=ok
// SIG undefined FUN_140c87d9e(void)

void FUN_140c87d9e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong **pplVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 auStack_118 [40];
  longlong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  uint uStack_dc;
  longlong **local_d8;
  uint local_d0;
  int iStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined1 local_6c [4];
  longlong *local_68;
  longlong **local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar1 = (longlong *)(param_1 + 0x110);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  iVar8 = *(int *)(param_1 + 0x118) - *(int *)(param_1 + 0x144);
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (iVar8 != 0) {
    FUN_1417c1774(&local_88);
  }
  local_60 = (longlong **)(param_1 + 0x120);
  local_68 = (longlong *)&DAT_100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x138) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_d0 = local_58;
  iStack_cc = iStack_54;
  local_c8 = local_50;
  local_c4 = local_4c;
  local_e0 = local_68;
  local_d8 = local_60;
  local_e8 = plVar1;
  if (iStack_54 < *(int *)(local_60 + 3)) {
    do {
      uVar4 = uStack_80;
      lVar11 = (longlong)iStack_cc;
      lVar7 = *local_e8;
      lVar12 = (longlong)(int)uStack_80;
      uVar5 = (int)uStack_80 + 1;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
      if (uStack_80._4_4_ < uVar5) {
        FUN_140f41d82(&local_88,uVar4 & 0xffffffff);
      }
      lVar7 = *(longlong *)(lVar11 * 0x80 + lVar7);
      local_88[lVar12] = lVar7;
      if ((DAT_14c950c29 == 1) && (lVar7 != 0)) {
        FUN_1456cec3c();
      }
      local_d0 = local_d0 & ~uStack_dc;
      FUN_1449c0562(&stack0xffffffffffffff20);
    } while (iStack_cc < *(int *)(local_d8 + 3));
  }
  if ((longlong)(int)uStack_80 != 0) {
    puVar2 = local_88 + (int)uStack_80;
    puVar13 = local_88;
    do {
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        plVar3 = (longlong *)*puVar13;
        uVar5 = ((uint)((ulonglong)plVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar3 >> 4)) *
                -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        plVar6 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar6 = param_2 + 7;
        }
        iVar8 = *(int *)((longlong)plVar6 +
                        (ulonglong)((int)param_2[9] - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
        if (iVar8 != -1) {
          do {
            puVar9 = (undefined8 *)(*param_2 + (longlong)iVar8 * 0x18);
            if ((longlong *)*puVar9 == plVar3) {
              plVar6 = puVar9 + 1;
              if (plVar6 != (longlong *)0x0 && puVar9 != (undefined8 *)0x0) {
                if (*plVar6 == 0) {
                  if (plVar3 != (longlong *)0x0 && DAT_14c950c29 == 1) {
                    FUN_1456cec3c(plVar3);
                  }
                  local_e8 = plVar3;
                  if ((plVar3 != (longlong *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
                    FUN_1456cec3c(plVar3);
                  }
                  FUN_1479d5980(plVar1,&local_e8);
                }
                else {
                  if (plVar3 != (longlong *)0x0 && DAT_14c950c29 == 1) {
                    FUN_1456cec3c(plVar3);
                  }
                  local_68 = plVar3;
                  if ((plVar3 != (longlong *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
                    FUN_1456cec3c(plVar3);
                  }
                  FUN_1479d58b2(plVar1,&local_f0,&local_68);
                  puVar9 = (undefined8 *)(*plVar1 + (longlong)(int)local_f0 * 0x80 + 0x10);
                  pplVar10 = &local_e8;
                  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
                    *pplVar10 = (longlong *)*puVar9;
                    puVar9 = puVar9 + 1;
                    pplVar10 = pplVar10 + 1;
                  }
                  FUN_1479d5920(plVar1);
                  local_f0 = *plVar6;
                  if ((local_f0 != 0) && (DAT_14c950c29 != 0)) {
                    FUN_1456cec3c();
                  }
                  local_68 = &local_f0;
                  local_60 = &local_e8;
                  FUN_1479d520c(plVar1,local_6c,&local_68,0);
                }
              }
              break;
            }
            iVar8 = *(int *)(puVar9 + 2);
          } while (iVar8 != -1);
        }
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar2);
  }
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8(local_88);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c8816c FUN_140c8816c body=95 status=ok
// SIG undefined FUN_140c8816c(void)

undefined8 * FUN_140c8816c(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b7d42f0;
  param_1[6] = &PTR_LAB_14b80e960;
  FUN_1409e1656(param_1 + 7);
  *param_1 = &PTR_FUN_14b80bef0;
  param_1[6] = &PTR_LAB_14b80c1b0;
  param_1[7] = &PTR_LAB_14b80c240;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  return param_1;
}



// FUNCTION 140c881cc FUN_140c881cc body=20 status=ok
// SIG undefined FUN_140c881cc(void)

void FUN_140c881cc(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_140c881e0(param_1,*(undefined4 *)(param_1 + 8),param_2);
    return;
  }
  return;
}



// FUNCTION 140c881e0 FUN_140c881e0 body=224 status=ok
// SIG undefined FUN_140c881e0(void)

void FUN_140c881e0(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,0x10);
    }
    _Src = (void *)*param_1;
    iVar4 = param_3 * 0x10;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar3 = (ulonglong)((uint)(0xf < iVar4) * 8);
    lVar1 = uVar3 + 7;
    uVar3 = uVar3 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar3);
    uVar5 = (longlong)_Dst + (longlong)iVar4;
    if (puVar2[1] < uVar5) {
      FUN_140023dd8(puVar2,iVar4 + (uint)(0xf < iVar4) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar2 & uVar3);
      uVar5 = (longlong)iVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar5;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)param_2 << 4);
      return;
    }
  }
  return;
}



// FUNCTION 140c882c0 FUN_140c882c0 body=137 status=ok
// SIG undefined FUN_140c882c0(void)

undefined8 FUN_140c882c0(int *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 != 0) {
    local_58 = *(undefined8 *)param_1;
    local_50 = param_1[2];
    FUN_1448075d0(local_48);
    lVar1 = FUN_14060eaf6(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (lVar1 != 0) {
      uVar2 = FUN_140c8834a(lVar1,param_2);
      goto LAB_140c88320;
    }
  }
  uVar2 = 0;
LAB_140c88320:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



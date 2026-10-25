// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1458ef50a FUN_1458ef50a body=115 status=ok
// SIG undefined FUN_1458ef50a(void)

void FUN_1458ef50a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1458ef57e FUN_1458ef57e body=42 status=ok
// SIG undefined FUN_1458ef57e(void)

void FUN_1458ef57e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1458ef5be(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001458ef593. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_1458ef716();
  FUN_1459b06a0(uVar2);
  return;
}



// FUNCTION 1458ef5a8 FUN_1458ef5a8 body=21 status=ok
// SIG undefined FUN_1458ef5a8(void)

void FUN_1458ef5a8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458ef716();
  FUN_1459b06a0(uVar1);
  return;
}



// FUNCTION 1458ef5be FUN_1458ef5be body=191 status=ok
// SIG undefined FUN_1458ef5be(void)

longlong FUN_1458ef5be(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_1458ef67e();
  lVar3 = *param_1;
  if (DAT_14cbc5d40 != DAT_14cbc5d6c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cbc5d70;
    if (DAT_14cbc5d78 != (undefined *)0x0) {
      puVar7 = DAT_14cbc5d78;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cbc5d80 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cbc5d38 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cbc5d30;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 1458ef67e FUN_1458ef67e body=152 status=ok
// SIG undefined FUN_1458ef67e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1458ef67e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc5d88) {
    FUN_144b3d300(&DAT_14cbc5d88);
    if (DAT_14cbc5d88 == -1) {
      DAT_14cbc5d58 = 0;
      DAT_14cbc5d60 = 0;
      DAT_14cbc5d38 = 0;
      _DAT_14cbc5d40 = 0;
      _DAT_14cbc5d64 = 0xffffffff00000080;
      DAT_14cbc5d6c = 0;
      DAT_14cbc5d78 = 0;
      DAT_14cbc5d80 = 0;
      atexit(FUN_1440e7cb0);
      _Init_thread_footer(&DAT_14cbc5d88);
      return;
    }
  }
  return;
}



// FUNCTION 1458ef716 FUN_1458ef716 body=113 status=ok
// SIG undefined FUN_1458ef716(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1458ef716(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cbc5d90;
  if (DAT_14cbc5d90 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x1880,0);
    lVar4 = 0xf;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x31;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cbc5d90;
    DAT_14cbc5d98 = DAT_14cbc5d98 + 0x10;
  }
  DAT_14cbc5d90 = (undefined8 *)*puVar2;
  _DAT_14cbc5d9c = _DAT_14cbc5d9c + 1;
  return;
}



// FUNCTION 1458ef788 FUN_1458ef788 body=42 status=ok
// SIG undefined FUN_1458ef788(void)

void FUN_1458ef788(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1458ef7c8(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001458ef79d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_1458ef920();
  FUN_145f9f920(uVar2);
  return;
}



// FUNCTION 1458ef7b2 FUN_1458ef7b2 body=21 status=ok
// SIG undefined FUN_1458ef7b2(void)

void FUN_1458ef7b2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458ef920();
  FUN_145f9f920(uVar1);
  return;
}



// FUNCTION 1458ef7c8 FUN_1458ef7c8 body=191 status=ok
// SIG undefined FUN_1458ef7c8(void)

longlong FUN_1458ef7c8(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_1458ef888();
  lVar3 = *param_1;
  if (DAT_14cbe6e10 != DAT_14cbe6e3c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cbe6e40;
    if (DAT_14cbe6e48 != (undefined *)0x0) {
      puVar7 = DAT_14cbe6e48;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cbe6e50 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cbe6e08 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cbe6e00;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 1458ef888 FUN_1458ef888 body=152 status=ok
// SIG undefined FUN_1458ef888(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1458ef888(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbe6e58) {
    FUN_144b3d300(&DAT_14cbe6e58);
    if (DAT_14cbe6e58 == -1) {
      DAT_14cbe6e28 = 0;
      DAT_14cbe6e30 = 0;
      DAT_14cbe6e08 = 0;
      _DAT_14cbe6e10 = 0;
      _DAT_14cbe6e34 = 0xffffffff00000080;
      DAT_14cbe6e3c = 0;
      DAT_14cbe6e48 = 0;
      DAT_14cbe6e50 = 0;
      atexit(FUN_1443454c4);
      _Init_thread_footer(&DAT_14cbe6e58);
      return;
    }
  }
  return;
}



// FUNCTION 1458ef920 FUN_1458ef920 body=113 status=ok
// SIG undefined FUN_1458ef920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1458ef920(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cbe6e60;
  if (DAT_14cbe6e60 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x7f80,0);
    lVar4 = 0xf;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0xff;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cbe6e60;
    DAT_14cbe6e68 = DAT_14cbe6e68 + 0x10;
  }
  DAT_14cbe6e60 = (undefined8 *)*puVar2;
  _DAT_14cbe6e6c = _DAT_14cbe6e6c + 1;
  return;
}



// FUNCTION 1458ef992 FUN_1458ef992 body=692 status=ok
// SIG undefined FUN_1458ef992(void)

void FUN_1458ef992(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  if (lVar2 == 0) goto LAB_1458ef9fc;
  if (*(longlong *)(param_3 + 0x10) == 0) {
LAB_1458ef9ba:
    cVar1 = FUN_144729dda(lVar2);
    if (cVar1 != '\0') {
LAB_1458ef9c3:
      FUN_141323fc0(param_1,param_2,1);
    }
    lVar2 = *(longlong *)(param_3 + 0x10);
    if (lVar2 != 0) goto LAB_1458efb28;
    if (*(int *)(*(longlong *)(param_2 + 0x10) + 8) == -1) goto LAB_1458ef9fc;
  }
  else {
    cVar1 = FUN_1458efcb6();
    if (cVar1 == '\0') goto LAB_1458ef9c3;
    lVar2 = *(longlong *)(param_3 + 0x10);
    if (lVar2 == 0) {
      lVar2 = *(longlong *)(param_2 + 0x10);
      goto LAB_1458ef9ba;
    }
LAB_1458efb28:
    if (*(int *)(*(longlong *)(param_2 + 0x10) + 8) == *(int *)(lVar2 + 8)) goto LAB_1458ef9fc;
  }
  FUN_141323fc0(param_1,param_2,4);
LAB_1458ef9fc:
  cVar1 = FUN_1458efc46(param_2 + 0x18,param_3 + 0x18);
  if (cVar1 == '\0') {
    FUN_141323fc0(param_1,param_2,2);
  }
  if (*(int *)(param_2 + 0x50) != *(int *)(param_3 + 0x50)) {
    FUN_141323fc0(param_1,param_2,8);
  }
  if (*(longlong *)(param_2 + 0x58) != *(longlong *)(param_3 + 0x58)) {
    FUN_141323fc0(param_1,param_2,0x10);
  }
  cVar1 = FUN_1458efced(param_2 + 0x60,param_3 + 0x60);
  if (cVar1 == '\0') {
    FUN_141323fc0(param_1,param_2,0x10);
  }
  cVar1 = FUN_1458efef3(param_2 + 0xc0,param_3 + 0xc0);
  if (cVar1 == '\0') {
    FUN_141323fc0(param_1,param_2,0x20);
  }
  if (*(char *)(param_2 + 0x11c) != *(char *)(param_3 + 0x11c)) {
    FUN_141323fc0(param_1,param_2,0x40);
  }
  cVar1 = FUN_141291ffc(param_2 + 0x24,param_3 + 0x24);
  if ((cVar1 == '\0') && (cVar1 = FUN_144729dda(param_2 + 0x24), cVar1 != '\0')) {
    FUN_141323fc0(param_1,param_2,0x80);
  }
  cVar1 = FUN_1458efc7e(param_2 + 0x2c,param_3 + 0x2c);
  if ((cVar1 == '\0') && (cVar1 = FUN_144729dda(param_2 + 0x2c), cVar1 != '\0')) {
    FUN_141323fc0(param_1,param_2,0x100);
  }
  if ((*(longlong *)(param_2 + 0x40) != 0) &&
     (*(longlong *)(param_2 + 0x40) != *(longlong *)(param_3 + 0x40))) {
    FUN_141323fc0(param_1,param_2,0x200);
  }
  if (*(short *)(param_2 + 0xb0) != *(short *)(param_3 + 0xb0)) {
    FUN_141323fc0(param_1,param_2,0x400);
  }
  if (*(short *)(param_2 + 0xb2) != *(short *)(param_3 + 0xb2)) {
    FUN_141323fc0(param_1,param_2,0x800);
  }
  if (*(longlong *)(param_2 + 0x110) != *(longlong *)(param_3 + 0x110)) {
    FUN_141323fc0(param_1,param_2,0x1000);
    return;
  }
  return;
}



// FUNCTION 1458efc46 FUN_1458efc46 body=55 status=ok
// SIG undefined FUN_1458efc46(void)

ulonglong FUN_1458efc46(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 != *param_2) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != param_2[1])) {
    cVar1 = FUN_144729dda();
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(param_2);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 1458efc7e FUN_1458efc7e body=55 status=ok
// SIG undefined FUN_1458efc7e(void)

ulonglong FUN_1458efc7e(int *param_1,int *param_2)

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



// FUNCTION 1458efcb6 FUN_1458efcb6 body=55 status=ok
// SIG undefined FUN_1458efcb6(void)

ulonglong FUN_1458efcb6(int *param_1,int *param_2)

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



// FUNCTION 1458efced FUN_1458efced body=517 status=ok
// SIG undefined FUN_1458efced(void)

undefined8 FUN_1458efced(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar12 = 0;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) ==
      (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
    plVar1 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
      uVar12 = *(uint *)(param_1 + 5);
    }
    local_68 = local_48;
    uVar7 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_78 = local_58;
    local_70 = local_50;
    local_68._4_4_ = (uint)((ulonglong)local_48 >> 0x20);
    uVar6 = (ulonglong)local_68._4_4_;
    local_80 = param_1;
    local_68 = uVar7;
    if ((local_68._4_4_ != uVar12) || (local_50 != plVar1)) {
      do {
        if ((int)param_2[1] == *(int *)((longlong)param_2 + 0x34)) goto LAB_1458efed6;
        lVar8 = (longlong)(int)uVar6 * 0x30;
        lVar2 = *(longlong *)(*local_80 + lVar8);
        uVar4 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar13 = (uint)lVar2 & 0xffff;
        plVar10 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar10 = param_2 + 7;
        }
        iVar9 = *(int *)((longlong)plVar10 +
                        (ulonglong)
                        ((int)param_2[9] - 1U &
                        (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar13) +
                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar13 >> 4)) * 4);
        if (iVar9 == -1) goto LAB_1458efed6;
        lVar3 = *param_2;
        iVar14 = iVar9;
        while (*(longlong *)(lVar3 + (longlong)iVar14 * 0x30) != lVar2) {
          iVar14 = *(int *)((longlong)iVar14 * 0x30 + lVar3 + 0x28);
          uVar7 = 0;
          if (iVar14 == -1) goto LAB_1458efd9c;
        }
        do {
          lVar11 = lVar3 + (longlong)iVar9 * 0x30;
          if (*(longlong *)(lVar3 + (longlong)iVar9 * 0x30) == lVar2) goto LAB_1458efe8d;
          iVar9 = *(int *)(lVar11 + 0x28);
        } while (iVar9 != -1);
        lVar11 = 0;
LAB_1458efe8d:
        cVar5 = FUN_140ba41f1(lVar11 + 8,*local_80 + lVar8 + 8);
        if (cVar5 == '\0') goto LAB_1458efed6;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        uVar6 = (ulonglong)local_68._4_4_;
      } while (((local_68._4_4_ != uVar12) || (local_70 != plVar1)) || (local_80 != param_1));
    }
    uVar7 = CONCAT71((int7)(uVar6 >> 8),1);
  }
  else {
LAB_1458efed6:
    uVar7 = 0;
  }
LAB_1458efd9c:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1458efef3 FUN_1458efef3 body=620 status=ok
// SIG undefined FUN_1458efef3(void)

undefined8 FUN_1458efef3(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  ushort uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar10 = 0;
  uVar9 = 0;
  uVar4 = local_78;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) ==
      (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
    plVar1 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
      iVar10 = (int)param_1[5];
    }
    local_78 = local_58;
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    uVar9 = 1;
    local_90 = param_1;
    if ((local_78._4_4_ != iVar10) || (local_60 != plVar1)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar4;
      do {
        if ((int)param_2[1] == *(int *)((longlong)param_2 + 0x34)) {
LAB_1458f015c:
          uVar9 = 0;
          uVar4 = local_78;
          break;
        }
        lVar13 = *(longlong *)(*local_90 + (longlong)iVar6 * 0x20);
        uVar3 = (uint)((ulonglong)lVar13 >> 0x10);
        uVar16 = (uint)lVar13 & 0xffff;
        plVar12 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar12 = param_2 + 7;
        }
        iVar11 = *(int *)((longlong)plVar12 +
                         (ulonglong)
                         ((int)param_2[9] - 1U &
                         (int)((ulonglong)lVar13 >> 0x20) + ((uint)lVar13 << 0x10 | uVar16) +
                         (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar16 >> 4)) * 4);
        if (iVar11 == -1) goto LAB_1458f015c;
        lVar5 = *local_90 + (longlong)iVar6 * 0x20;
        lVar2 = *param_2;
        iVar6 = iVar11;
        while (*(longlong *)(lVar2 + (longlong)iVar6 * 0x20) != lVar13) {
          iVar6 = *(int *)((longlong)iVar6 * 0x20 + lVar2 + 0x18);
          if (iVar6 == -1) goto LAB_1458f015c;
        }
        do {
          lVar14 = lVar2 + (longlong)iVar11 * 0x20;
          if (*(longlong *)(lVar2 + (longlong)iVar11 * 0x20) == lVar13) goto LAB_1458f0083;
          iVar11 = *(int *)(lVar14 + 0x18);
        } while (iVar11 != -1);
        lVar14 = 0;
LAB_1458f0083:
        iVar6 = *(int *)(lVar14 + 0x10);
        iVar11 = *(int *)(lVar5 + 0x10);
        if (iVar6 == iVar11) {
          if (1 < iVar6) {
            lVar13 = 0;
            while( true ) {
              uVar7 = *(ushort *)(*(longlong *)(lVar14 + 8) + lVar13);
              uVar8 = (ulonglong)uVar7;
              uVar15 = *(ushort *)(*(longlong *)(lVar5 + 8) + lVar13);
              if (uVar7 != uVar15) break;
              if (uVar7 == 0) goto LAB_1458f00dc;
LAB_1458f00b6:
              lVar13 = lVar13 + 2;
            }
            if ((uVar15 | uVar7) < 0x80) {
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar17 = (ulonglong)uVar15;
              uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
              if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar17]) goto LAB_1458f00b6;
            }
            if (uVar7 != uVar15) goto LAB_1458f015c;
          }
        }
        else if (iVar11 + iVar6 != 1) goto LAB_1458f015c;
LAB_1458f00dc:
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_90 != param_1 || (local_80 != plVar1 || local_78._4_4_ != iVar10));
    }
  }
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1458f0160 FUN_1458f0160 body=422 status=ok
// SIG undefined FUN_1458f0160(void)

void FUN_1458f0160(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(char *)(param_1 + 0x1e0) == '\x01') && (*(char *)(param_2 + 0x8e) == '\0')) {
    lVar3 = FUN_1458f0308(param_1,param_3,param_2 + 0x28);
    if (lVar3 != 0) {
      FUN_140128f82(param_2 + 0xf8,&local_88,param_3,0);
    }
    if (((*(int *)(param_2 + 300) < *(int *)(param_2 + 0x100)) &&
        (*(longlong *)(param_1 + 0x210) == 0)) && (*(longlong *)(param_1 + 0x1b0) != 0)) {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b0) + 0xf0);
      local_a0 = (undefined8 *)0x0;
      local_98 = 0;
      FUN_1446efa72(&local_a0,0,3,0x10);
      puVar2 = local_a0;
      local_98 = 3;
      *local_a0 = &PTR_LAB_14a1c8830;
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
      local_a0[2] = lVar4;
      *local_a0 = &PTR_FUN_14b434960;
      local_a0[3] = 0;
      FUN_14485c47a(local_a0 + 3,param_1);
      puVar2[4] = param_1;
      local_88 = 0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_a0);
      local_48 = 1;
      FUN_14016fdb0(uVar1,&local_90,&local_88);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      *(undefined8 *)(param_1 + 0x210) = local_90;
      FUN_1449db362(&local_a0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f0308 FUN_1458f0308 body=348 status=ok
// SIG undefined FUN_1458f0308(void)

undefined8 FUN_1458f0308(longlong param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x168) != *(int *)(param_1 + 0x194)) {
    lVar3 = param_1 + 0x198;
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1a0);
    }
    uVar6 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x1a8) - 1U & *param_3) * 4);
    if (uVar6 != 0xffffffff) {
      while (puVar1 = (uint *)(*(longlong *)(param_1 + 0x160) + (longlong)(int)uVar6 * 0x18),
            *puVar1 != *param_3) {
        uVar6 = puVar1[4];
        if (uVar6 == 0xffffffff) {
          return 0;
        }
      }
      if (puVar1 == (uint *)0x0) {
        return 0;
      }
      if (puVar1 + 2 == (uint *)0x0) {
        return 0;
      }
      lVar3 = *(longlong *)(puVar1 + 2);
      if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
      }
      else if (lVar3 == 0) {
        return 0;
      }
      lVar3 = *(longlong *)(lVar3 + 0x38);
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x60) != *(int *)(lVar3 + 0x8c))) {
        lVar5 = lVar3 + 0x90;
        if (*(longlong *)(lVar3 + 0x98) != 0) {
          lVar5 = *(longlong *)(lVar3 + 0x98);
        }
        iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 0xa0) - 1U & *param_2) * 4);
        if (iVar4 != -1) {
          while (lVar5 = *(longlong *)(lVar3 + 0x58) + (longlong)iVar4 * 0x38,
                *(uint *)(*(longlong *)(lVar3 + 0x58) + (longlong)iVar4 * 0x38) != *param_2) {
            iVar4 = *(int *)(lVar5 + 0x30);
            if (iVar4 == -1) {
              return 0;
            }
          }
          if (lVar5 == 0) {
            return 0;
          }
          if ((ushort *)(lVar5 + 0x28) == (ushort *)0x0) {
            return 0;
          }
          uVar2 = *(ushort *)(lVar5 + 0x28);
          if ((-1 < (short)uVar2) && ((int)(short)uVar2 < *(int *)(param_1 + 200))) {
            return *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)uVar2 * 8);
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1458f046a FUN_1458f046a body=228 status=ok
// SIG undefined FUN_1458f046a(void)

longlong FUN_1458f046a(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99e068 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147023f37;
    local_40 = FUN_146295363;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/FieldNotification",L"NotifyFieldValueChanged",&DAT_14c99e068,
                  &DAT_147023f36);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99e068;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f0550 FUN_1458f0550 body=55 status=ok
// SIG undefined FUN_1458f0550(void)

void FUN_1458f0550(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99e660 == 0) {
    uVar1 = FUN_14132552c();
    DAT_14c99e660 =
         FUN_140002ddd(FUN_14629685c,uVar1,L"SoundWaveCloudStreamingPlatformProjectSettings");
  }
  return;
}



// FUNCTION 1458f058c FUN_1458f058c body=228 status=ok
// SIG undefined FUN_1458f058c(void)

longlong FUN_1458f058c(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99f4c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14704ed9d;
    local_40 = FUN_14629b364;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/TypedElementFramework",L"TypedElementCounterInterface",&DAT_14c99f4c0,
                  &DAT_14704ed9c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99f4c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f0672 FUN_1458f0672 body=9 status=ok
// SIG undefined FUN_1458f0672(void)

void FUN_1458f0672(longlong param_1)

{
  FUN_1458f067c(param_1 + 0x10);
  return;
}



// FUNCTION 1458f067c FUN_1458f067c body=43 status=ok
// SIG undefined FUN_1458f067c(void)

void FUN_1458f067c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f149b0;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1458f06a8 FUN_1458f06a8 body=55 status=ok
// SIG undefined FUN_1458f06a8(void)

void FUN_1458f06a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa1388 == 0) {
    uVar1 = FUN_14132555d();
    DAT_14caa1388 = FUN_140002ddd(FUN_14632163e,uVar1,L"FoliageVertexColorChannelMask");
  }
  return;
}



// FUNCTION 1458f06e6 FUN_1458f06e6 body=228 status=ok
// SIG undefined FUN_1458f06e6(void)

longlong FUN_1458f06e6(void)

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
  if (DAT_14cab2078 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145909292;
    local_38 = &LAB_147523229;
    local_40 = FUN_14633a76d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneSpawnableBindingBase",&DAT_14cab2078,
                  &DAT_147523228);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab2078;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f07e6 FUN_1458f07e6 body=55 status=ok
// SIG undefined FUN_1458f07e6(void)

void FUN_1458f07e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab4028 == 0) {
    uVar1 = FUN_14132558e();
    DAT_14cab4028 = FUN_140002ddd(FUN_146343bca,uVar1,L"ConstraintsInWorld");
  }
  return;
}



// FUNCTION 1458f0824 FUN_1458f0824 body=228 status=ok
// SIG undefined FUN_1458f0824(void)

longlong FUN_1458f0824(void)

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
  if (DAT_14cab5b68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432d0f4c;
    local_38 = &LAB_147656ffd;
    local_40 = &LAB_145dbd177;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneBaseValueEvaluatorSystem",&DAT_14cab5b68,
                  &DAT_147656ffc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab5b68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f0910 FUN_1458f0910 body=228 status=ok
// SIG undefined FUN_1458f0910(void)

longlong FUN_1458f0910(void)

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
  if (DAT_14cab7db8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145958334;
    local_38 = &LAB_14773bc12;
    local_40 = &LAB_146354e7c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0xb40;
    FUN_14081cfa3(L"/Script/UMG",L"ListView",&DAT_14cab7db8,FUN_146354e5a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab7db8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f09fa FUN_1458f09fa body=228 status=ok
// SIG undefined FUN_1458f09fa(void)

longlong FUN_1458f09fa(void)

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
  if (DAT_14cab7348 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411172fa;
    local_38 = &LAB_1476d5fc5;
    local_40 = FUN_146351d46;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/UMG",L"CanvasPanelSlot",&DAT_14cab7348,FUN_146351d24);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab7348;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f0ae6 FUN_1458f0ae6 body=228 status=ok
// SIG undefined FUN_1458f0ae6(void)

longlong FUN_1458f0ae6(void)

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
  if (DAT_14cab8060 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146351894;
    local_38 = &LAB_147742c21;
    local_40 = &LAB_14583cf30;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 400;
    FUN_14081cfa3(L"/Script/UMG",L"Overlay",&DAT_14cab8060,FUN_146355a72);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab8060;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f0bd2 FUN_1458f0bd2 body=228 status=ok
// SIG undefined FUN_1458f0bd2(void)

longlong FUN_1458f0bd2(void)

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
  if (DAT_14cabb6d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_1477da829;
    local_40 = &LAB_1458d76bf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x910;
    FUN_14081cfa3(L"/Script/AudioMixer",L"SynthComponent",&DAT_14cabb6d0,FUN_14636141e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabb6d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f0cbc FUN_1458f0cbc body=228 status=ok
// SIG undefined FUN_1458f0cbc(void)

longlong FUN_1458f0cbc(void)

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
  if (DAT_14cabc1e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_14780cd3f;
    local_40 = &LAB_145e78942;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x120;
    FUN_14081cfa3(L"/Script/MediaAssets",L"MediaComponent",&DAT_14cabc1e8,FUN_146364e60);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabc1e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f0da8 FUN_1458f0da8 body=228 status=ok
// SIG undefined FUN_1458f0da8(void)

longlong FUN_1458f0da8(void)

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
  if (DAT_14cabfd58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459d4a5e;
    local_38 = &LAB_14786171d;
    local_40 = FUN_14637252a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"DistributionVector",&DAT_14cabfd58,&DAT_14786171c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabfd58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f0e92 FUN_1458f0e92 body=228 status=ok
// SIG undefined FUN_1458f0e92(void)

longlong FUN_1458f0e92(void)

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
  if (DAT_14cabffb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459e72da;
    local_38 = &LAB_147863ea5;
    local_40 = &LAB_14619715d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x480;
    FUN_14081cfa3(L"/Script/Engine",L"EmitterCameraLensEffectBase",&DAT_14cabffb0,&DAT_147863ea4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabffb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f0f82 FUN_1458f0f82 body=228 status=ok
// SIG undefined FUN_1458f0f82(void)

longlong FUN_1458f0f82(void)

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
  if (DAT_14cac1e00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147879221;
    local_40 = &LAB_1459be46a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"Interface_AsyncCompilation",&DAT_14cac1e00,&DAT_147879220);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac1e00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f106c FUN_1458f106c body=228 status=ok
// SIG undefined FUN_1458f106c(void)

longlong FUN_1458f106c(void)

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
  if (DAT_14cac32c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140d4fe26;
    local_38 = &LAB_1478813f5;
    local_40 = &LAB_145ca17d7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000010;
    local_60 = 8;
    local_68 = 0xe8;
    FUN_14081cfa3(L"/Script/Engine",L"MaterialExpressionMaterialFunctionCall",&DAT_14cac32c0,
                  &DAT_1478813f4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac32c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f1158 FUN_1458f1158 body=228 status=ok
// SIG undefined FUN_1458f1158(void)

longlong FUN_1458f1158(void)

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
  if (DAT_14cac42c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459e7df0;
    local_38 = &LAB_147881cbd;
    local_40 = &LAB_146384e87;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000011;
    local_60 = 8;
    local_68 = 0x220;
    FUN_14081cfa3(L"/Script/Engine",L"MaterialExpressionTextureSampleParameter",&DAT_14cac42c0,
                  &DAT_147881cbc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac42c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f1244 FUN_1458f1244 body=228 status=ok
// SIG undefined FUN_1458f1244(void)

longlong FUN_1458f1244(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac5ee8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad77a;
    local_28 = &LAB_14110cf44;
    local_38 = &LAB_147888c47;
    local_40 = &LAB_1459be8b6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleModuleVectorFieldBase",&DAT_14cac5ee8,&DAT_147888c46);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac5ee8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f1330 FUN_1458f1330 body=228 status=ok
// SIG undefined FUN_1458f1330(void)

longlong FUN_1458f1330(void)

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
  if (DAT_14cad4ad0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147a473f1;
    local_40 = FUN_1463c205b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"PrimaryDataAsset",&DAT_14cad4ad0,&DAT_147a473f0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad4ad0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f1420 FUN_1458f1420 body=228 status=ok
// SIG undefined FUN_1458f1420(void)

longlong FUN_1458f1420(void)

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
  if (DAT_14cb0b578 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14580b774;
    local_38 = &LAB_147d6ea57;
    local_40 = FUN_1464083a8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x150;
    FUN_14081cfa3(L"/Script/Engine",L"Texture2DDynamic",&DAT_14cb0b578,&DAT_147d6ea56);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0b578;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f150a FUN_1458f150a body=228 status=ok
// SIG undefined FUN_1458f150a(void)

longlong FUN_1458f150a(void)

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
  if (DAT_14cb0b9d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146408884;
    local_38 = &LAB_147d722bd;
    local_40 = &LAB_145da1fdf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x160;
    FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTargetCube",&DAT_14cb0b9d0,&DAT_147d722bc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0b9d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f15f6 FUN_1458f15f6 body=228 status=ok
// SIG undefined FUN_1458f15f6(void)

longlong FUN_1458f15f6(void)

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
  if (DAT_14cb11208 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141117124;
    local_38 = &LAB_147db735d;
    local_40 = &LAB_145e2b1e4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x918;
    FUN_14081cfa3(L"/Script/Engine",L"WorldDataLayers",&DAT_14cb11208,FUN_14641044a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb11208;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f16e2 FUN_1458f16e2 body=228 status=ok
// SIG undefined FUN_1458f16e2(void)

longlong FUN_1458f16e2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1f268 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459eb380;
    local_38 = &LAB_147ebe4cb;
    local_40 = &LAB_14642a662;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/AIModule",L"BTService",&DAT_14cb1f268,&DAT_147ebe4ca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1f268;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f17cc FUN_1458f17cc body=228 status=ok
// SIG undefined FUN_1458f17cc(void)

longlong FUN_1458f17cc(void)

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
  if (DAT_14cb20d00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147f14a5f;
    local_40 = &LAB_1458dc3bd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/GbxAI",L"CoverSlotData",&DAT_14cb20d00,&DAT_147f14a5e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb20d00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f18b8 FUN_1458f18b8 body=228 status=ok
// SIG undefined FUN_1458f18b8(void)

longlong FUN_1458f18b8(void)

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
  if (DAT_14cb248c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146442844;
    local_38 = &LAB_147f62ce3;
    local_40 = FUN_146442d56;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x120;
    FUN_14081cfa3(L"/Script/GbxDestruction",L"GbxDestructibleStaticMeshData",&DAT_14cb248c0,
                  FUN_146442d34);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb248c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f19a4 FUN_1458f19a4 body=228 status=ok
// SIG undefined FUN_1458f19a4(void)

longlong FUN_1458f19a4(void)

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
  if (DAT_14cb274c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14644d79e;
    local_38 = &LAB_147f9f9bf;
    local_40 = FUN_14644d7eb;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x10000007;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/EnhancedInput",L"InputTriggerTimedBase",&DAT_14cb274c0,&DAT_147f9f9be);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb274c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f1a90 FUN_1458f1a90 body=228 status=ok
// SIG undefined FUN_1458f1a90(void)

longlong FUN_1458f1a90(void)

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
  if (DAT_14cb2b5c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141116d1e;
    local_38 = &LAB_148021ae5;
    local_40 = FUN_14645c7e9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"Input2DCameraNode",&DAT_14cb2b5c0,&DAT_148021ae4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb2b5c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f1b7a FUN_1458f1b7a body=228 status=ok
// SIG undefined FUN_1458f1b7a(void)

longlong FUN_1458f1b7a(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb291f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147fcf4a3;
    local_40 = FUN_14645736d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"ObjectTreeGraphObject",&DAT_14cb291f8,&DAT_147fcf4a2)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb291f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f1c64 FUN_1458f1c64 body=228 status=ok
// SIG undefined FUN_1458f1c64(void)

longlong FUN_1458f1c64(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb2b080 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_147ff94c8;
    local_40 = FUN_14645ad85;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2e0;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"GameplayCameraComponent",&DAT_14cb2b080,FUN_14645ad5e
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb2b080;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f1d4e FUN_1458f1d4e body=228 status=ok
// SIG undefined FUN_1458f1d4e(void)

longlong FUN_1458f1d4e(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb2b0f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_147ffa45a;
    local_40 = FUN_14645afe5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2c0;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"GameplayCameraSystemComponent",&DAT_14cb2b0f0,
                  FUN_14645afbe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb2b0f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f1e3a FUN_1458f1e3a body=228 status=ok
// SIG undefined FUN_1458f1e3a(void)

longlong FUN_1458f1e3a(void)

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
  if (DAT_14cb42678 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458e72d2;
    local_38 = &LAB_1481d1121;
    local_40 = FUN_146477840;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraPreviewAxis_InterpParamBase",&DAT_14cb42678,
                  &DAT_1481d1120);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb42678;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f1f24 FUN_1458f1f24 body=228 status=ok
// SIG undefined FUN_1458f1f24(void)

longlong FUN_1458f1f24(void)

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
  if (DAT_14cb44798 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_148216401;
    local_40 = FUN_14647d6f4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/CommonInput",L"CommonInputActionDomainTable",&DAT_14cb44798,
                  &DAT_148216400);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb44798;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f2010 FUN_1458f2010 body=228 status=ok
// SIG undefined FUN_1458f2010(void)

longlong FUN_1458f2010(void)

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
  if (DAT_14cb4a540 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_14840d143;
    local_40 = &LAB_145948bcb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x660;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"GizmoBaseComponent",&DAT_14cb4a540,
                  FUN_14648a0f6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4a540;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f20fa FUN_1458f20fa body=228 status=ok
// SIG undefined FUN_1458f20fa(void)

longlong FUN_1458f20fa(void)

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
  if (DAT_14cb4abe8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145840f38;
    local_38 = &LAB_148411fc3;
    local_40 = &LAB_145ebb219;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xd8;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"BrushStampIndicator",&DAT_14cb4abe8,
                  &DAT_148411fc2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4abe8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f21e4 FUN_1458f21e4 body=228 status=ok
// SIG undefined FUN_1458f21e4(void)

longlong FUN_1458f21e4(void)

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
  if (DAT_14cb4b058 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458f200a;
    local_38 = &LAB_1484309f7;
    local_40 = FUN_14648d4cc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x6a0;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"GizmoLineHandleComponent",&DAT_14cb4b058,
                  &DAT_1484309f6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b058;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f22ce FUN_1458f22ce body=228 status=ok
// SIG undefined FUN_1458f22ce(void)

longlong FUN_1458f22ce(void)

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
  if (DAT_14cb4b1a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145909b7a;
    local_38 = &LAB_14843628f;
    local_40 = FUN_14648da57;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"GizmoLocalFloatParameterSource",
                  &DAT_14cb4b1a8,&DAT_14843628e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b1a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f23ba FUN_1458f23ba body=228 status=ok
// SIG undefined FUN_1458f23ba(void)

longlong FUN_1458f23ba(void)

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
  if (DAT_14cb4b880 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145859c08;
    local_38 = &LAB_14845043f;
    local_40 = FUN_14648faf6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000009;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"InteractiveToolWithToolTargetsBuilder",
                  &DAT_14cb4b880,&DAT_14845043e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b880;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f24a6 FUN_1458f24a6 body=228 status=ok
// SIG undefined FUN_1458f24a6(void)

longlong FUN_1458f24a6(void)

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
  if (DAT_14cb4c5e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411bcb72;
    local_38 = &LAB_1484c544f;
    local_40 = FUN_146492b4e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"BaseCreateFromSelectedToolBuilder",&DAT_14cb4c5e8,
                  &DAT_1484c544e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4c5e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f2590 FUN_1458f2590 body=228 status=ok
// SIG undefined FUN_1458f2590(void)

longlong FUN_1458f2590(void)

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
  if (DAT_14cb4cbd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145859cec;
    local_38 = &LAB_1484e5d13;
    local_40 = &LAB_1461ee88c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x5c0;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"CollectSurfacePathMechanic",&DAT_14cb4cbd0,
                  &DAT_1484e5d12);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4cbd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f267a FUN_1458f267a body=228 status=ok
// SIG undefined FUN_1458f267a(void)

longlong FUN_1458f267a(void)

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
  if (DAT_14cb4cd68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145859cec;
    local_38 = &LAB_1484ff5d5;
    local_40 = &LAB_146117571;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x220;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"RectangleMarqueeMechanic",&DAT_14cb4cd68,
                  &DAT_1484ff5d4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4cd68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f2764 FUN_1458f2764 body=228 status=ok
// SIG undefined FUN_1458f2764(void)

longlong FUN_1458f2764(void)

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
  if (DAT_14cb4cd38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145859cec;
    local_38 = &LAB_1484fc487;
    local_40 = &LAB_14606f584;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x530;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"PlaneDistanceFromHitMechanic",&DAT_14cb4cd38,
                  &DAT_1484fc486);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4cd38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f284e FUN_1458f284e body=228 status=ok
// SIG undefined FUN_1458f284e(void)

longlong FUN_1458f284e(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb51368 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1485ef6be;
    local_40 = FUN_1464a5e68;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxSpline",L"GbxSplineControlPoint",&DAT_14cb51368,FUN_1464a5e46);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb51368;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f293e FUN_1458f293e body=228 status=ok
// SIG undefined FUN_1458f293e(void)

longlong FUN_1458f293e(void)

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
  if (DAT_14cb5ec90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141117124;
    local_38 = &LAB_1486ae475;
    local_40 = &LAB_145c1e664;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3a8;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameplayDirector",&DAT_14cb5ec90,FUN_1464e3ae0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5ec90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f2a28 FUN_1458f2a28 body=228 status=ok
// SIG undefined FUN_1458f2a28(void)

longlong FUN_1458f2a28(void)

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
  if (DAT_14cb67238 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_14873568f;
    local_40 = FUN_146514b9e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectQuerySpec",&DAT_14cb67238,&DAT_14873568e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb67238;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f2b14 FUN_1458f2b14 body=228 status=ok
// SIG undefined FUN_1458f2b14(void)

longlong FUN_1458f2b14(void)

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
  if (DAT_14cb68750 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a73534;
    local_38 = &LAB_148744caf;
    local_40 = &LAB_14651bb78;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x618;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTriggerVolume",&DAT_14cb68750,FUN_14651bb56);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb68750;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f2bfe FUN_1458f2bfe body=228 status=ok
// SIG undefined FUN_1458f2bfe(void)

longlong FUN_1458f2bfe(void)

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
  if (DAT_14cb90580 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1465656ce;
    local_38 = &LAB_1489c6a55;
    local_40 = &LAB_145a0e92f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x290;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlHUD",&DAT_14cb90580,&DAT_1489c6a54);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb90580;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f2cea FUN_1458f2cea body=228 status=ok
// SIG undefined FUN_1458f2cea(void)

longlong FUN_1458f2cea(void)

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
  if (DAT_14cb95df8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145832a74;
    local_38 = &LAB_148a4a21b;
    local_40 = &LAB_145e35928;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x4e8;
    FUN_14081cfa3(L"/Script/OnlineSubsystemUtils",L"PartyBeaconClient",&DAT_14cb95df8,FUN_14657a9ba)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb95df8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f2dd6 FUN_1458f2dd6 body=228 status=ok
// SIG undefined FUN_1458f2dd6(void)

longlong FUN_1458f2dd6(void)

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
  if (DAT_14cb95f80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145832a74;
    local_38 = &LAB_148a4ce5c;
    local_40 = &LAB_145f8ba92;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x518;
    FUN_14081cfa3(L"/Script/OnlineSubsystemUtils",L"SpectatorBeaconClient",&DAT_14cb95f80,
                  FUN_14657af28);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb95f80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f2ec4 FUN_1458f2ec4 body=176 status=ok
// SIG undefined FUN_1458f2ec4(void)

undefined8 * FUN_1458f2ec4(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b5dcc10;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  memset(param_1 + 3,0,0x118);
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x42480000;
  FUN_1458f2f74(param_1 + 0x35);
  FUN_1446f470e(param_1 + 0x42,L"L_Hand_Object",1);
  return param_1;
}



// FUNCTION 1458f2f74 FUN_1458f2f74 body=76 status=ok
// SIG undefined FUN_1458f2f74(void)

void FUN_1458f2f74(undefined8 *param_1)

{
  *param_1 = 0x44340000455ac000;
  param_1[1] = 0x42c8000040c00000;
  param_1[2] = 0x443b800000000000;
  param_1[3] = 0x3f00000045abe000;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3dcccccd;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3dcccccd;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x42c80000;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}



// FUNCTION 1458f2fc6 FUN_1458f2fc6 body=228 status=ok
// SIG undefined FUN_1458f2fc6(void)

longlong FUN_1458f2fc6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba2330 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141864c34;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14599947a;
    local_38 = &LAB_148baa475;
    local_40 = &LAB_146239442;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x9d00;
    FUN_14081cfa3(L"/Script/OakGame",L"OakSkillCharacter_PhaseFamiliar",&DAT_14cba2330,FUN_1465b342c
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba2330;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f30b0 FUN_1458f30b0 body=228 status=ok
// SIG undefined FUN_1458f30b0(void)

longlong FUN_1458f30b0(void)

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
  if (DAT_14cba8f68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14635ee40;
    local_38 = &LAB_148c02871;
    local_40 = FUN_1465d2401;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xd50;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCinematicStageCameraComponent",&DAT_14cba8f68,
                  &DAT_148c02870);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba8f68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f319a FUN_1458f319a body=228 status=ok
// SIG undefined FUN_1458f319a(void)

longlong FUN_1458f319a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbac828 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_148c2eb5f;
    local_40 = &LAB_1460d4102;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x26d0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakLostLootMachine",&DAT_14cbac828,FUN_1465e2c7a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbac828;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f3286 FUN_1458f3286 body=228 status=ok
// SIG undefined FUN_1458f3286(void)

longlong FUN_1458f3286(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbafa78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1465c56e4;
    local_28 = &LAB_1465d1c48;
    local_38 = &LAB_148c4a6fb;
    local_40 = FUN_1465f09fe;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIBaseDataCollector_Character",&DAT_14cbafa78,
                  &DAT_148c4a6fa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbafa78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f3372 FUN_1458f3372 body=228 status=ok
// SIG undefined FUN_1458f3372(void)

longlong FUN_1458f3372(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba5170 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_148bd4d2d;
    local_40 = &LAB_1461e33ab;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2660;
    FUN_14081cfa3(L"/Script/OakGame",L"JumpPad",&DAT_14cba5170,FUN_1465c194e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba5170;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f345e FUN_1458f345e body=228 status=ok
// SIG undefined FUN_1458f345e(void)

longlong FUN_1458f345e(void)

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
  if (DAT_14cbf3878 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e62b54;
    local_38 = &LAB_148f5c3c3;
    local_40 = FUN_14666708a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/MeshModelingTools",L"EditMeshPolygonsToolActionPropertySet",
                  &DAT_14cbf3878,&DAT_148f5c3c2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf3878;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f3544 FUN_1458f3544 body=55 status=ok
// SIG undefined FUN_1458f3544(void)

void FUN_1458f3544(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0bbd8 == 0) {
    uVar1 = FUN_14132578b();
    DAT_14cc0bbd8 = FUN_140002ddd(FUN_14671c591,uVar1,L"InterchangePipelineContextParams");
  }
  return;
}



// FUNCTION 1458f3582 FUN_1458f3582 body=228 status=ok
// SIG undefined FUN_1458f3582(void)

longlong FUN_1458f3582(void)

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
  if (DAT_14cc106d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14119ce84;
    local_38 = &LAB_1493b2d38;
    local_40 = &LAB_14672bbc2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x3f0;
    FUN_14081cfa3(L"/Script/InterchangeFactoryNodes",L"InterchangeTextureFactoryNode",&DAT_14cc106d8
                  ,FUN_14672bba0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc106d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f3668 FUN_1458f3668 body=55 status=ok
// SIG undefined FUN_1458f3668(void)

void FUN_1458f3668(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc16c08 == 0) {
    uVar1 = FUN_1413257bc();
    DAT_14cc16c08 = FUN_140002ddd(FUN_14672ecca,uVar1,L"InterchangeLodSceneNodeContainer");
  }
  return;
}



// FUNCTION 1458f36a4 FUN_1458f36a4 body=228 status=ok
// SIG undefined FUN_1458f36a4(void)

longlong FUN_1458f36a4(void)

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
  if (DAT_14cc1c950 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146386ce6;
    local_38 = &LAB_1494ac0cc;
    local_40 = &LAB_145950b93;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1c8;
    FUN_14081cfa3(L"/Script/OptimusCore",L"OptimusDeformer",&DAT_14cc1c950,FUN_14673a1ae);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1c950;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f378a FUN_1458f378a body=55 status=ok
// SIG undefined FUN_1458f378a(void)

void FUN_1458f378a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc1de88 == 0) {
    uVar1 = FUN_1413257ed();
    DAT_14cc1de88 = FUN_140002ddd(FUN_14673d5ba,uVar1,L"LiveLinkRetargetAssetReference");
  }
  return;
}



// FUNCTION 1458f37c6 FUN_1458f37c6 body=228 status=ok
// SIG undefined FUN_1458f37c6(void)

longlong FUN_1458f37c6(void)

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
  if (DAT_14cc216e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e62b54;
    local_38 = &LAB_14969d065;
    local_40 = FUN_14674a4a8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/MeshModelingToolsExp",L"PhysicsObjectToolPropertySet",&DAT_14cc216e8,
                  &DAT_14969d064);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc216e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f38b0 FUN_1458f38b0 body=228 status=ok
// SIG undefined FUN_1458f38b0(void)

longlong FUN_1458f38b0(void)

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
  if (DAT_14cc21700 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e62b54;
    local_38 = &LAB_14969d069;
    local_40 = FUN_14674a52c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xd8;
    FUN_14081cfa3(L"/Script/MeshModelingToolsExp",L"CollisionGeometryVisualizationProperties",
                  &DAT_14cc21700,&DAT_14969d068);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc21700;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f399a FUN_1458f399a body=228 status=ok
// SIG undefined FUN_1458f399a(void)

longlong FUN_1458f399a(void)

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
  if (DAT_14cc21ac8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e62b54;
    local_38 = &LAB_1496ac3f9;
    local_40 = FUN_14674af7d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xd8;
    FUN_14081cfa3(L"/Script/MeshModelingToolsExp",L"MeshStatisticsProperties",&DAT_14cc21ac8,
                  &DAT_1496ac3f8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc21ac8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f3a80 FUN_1458f3a80 body=55 status=ok
// SIG undefined FUN_1458f3a80(void)

void FUN_1458f3a80(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc268b0 == 0) {
    uVar1 = FUN_14132581e();
    DAT_14cc268b0 = FUN_140002ddd(FUN_14675d4c5,uVar1,L"GbxDynamicVegetationSimulationParameters");
  }
  return;
}



// FUNCTION 1458f3ab8 FUN_1458f3ab8 body=38 status=ok
// SIG undefined FUN_1458f3ab8(void)

undefined8 FUN_1458f3ab8(undefined8 param_1,int param_2)

{
  FUN_1458f3ade();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458f3ade FUN_1458f3ade body=574 status=ok
// SIG undefined FUN_1458f3ade(void)

void FUN_1458f3ade(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_149f61c70;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x29));
  plVar6 = param_1 + 0x1f;
  puVar3 = param_1 + 0x21;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = puVar3;
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x24);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar6;
  if ((iStack_54 != iVar5) || (uStack_60 != puVar3)) {
    do {
      lVar1 = *local_90;
      lVar4 = (longlong)iStack_74;
      puVar2 = *(undefined8 **)(lVar1 + 8 + lVar4 * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      *(undefined8 *)(lVar1 + lVar4 * 0x18 + 8) = 0;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar5) || ((undefined8 *)CONCAT44(uStack_7c,uStack_80) != puVar3)) ||
            (local_90 != plVar6));
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x29));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1410fef86(plVar6);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1410fef86(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1410feffa(param_1 + 0xb);
  puVar3 = (undefined8 *)param_1[10];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (param_1[2] != 0) {
    plVar6 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f3d1e FUN_1458f3d1e body=51 status=ok
// SIG undefined FUN_1458f3d1e(void)

longlong FUN_1458f3d1e(longlong param_1,int param_2)

{
  FUN_1458f3d52(param_1 + 0x78);
  FUN_1458f3d52(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458f3d52 FUN_1458f3d52 body=65 status=ok
// SIG undefined FUN_1458f3d52(void)

void FUN_1458f3d52(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1410ff070(param_1 + 0x20);
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458f3d94 FUN_1458f3d94 body=62 status=ok
// SIG undefined FUN_1458f3d94(void)

undefined1 FUN_1458f3d94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14132837e(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x1c);
    uVar2 = *(undefined4 *)(param_3 + 0x20);
    uVar3 = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 0x20) = uVar2;
    *(undefined4 *)(param_2 + 0x24) = uVar3;
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 1458f3e00 FUN_1458f3e00 body=91 status=ok
// SIG undefined FUN_1458f3e00(void)

undefined8 * FUN_1458f3e00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b53d730;
  param_1[1] = 0;
  FUN_144a5dc74(param_1 + 2);
  FUN_144a5dc74(param_1 + 4);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_14b53dcf0;
  FUN_144a5dc74(param_1 + 0xc);
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 1458f3e5c FUN_1458f3e5c body=40 status=ok
// SIG undefined FUN_1458f3e5c(void)

undefined8 FUN_1458f3e5c(undefined8 param_1,int param_2)

{
  FUN_1458f3e84();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458f3e84 FUN_1458f3e84 body=91 status=ok
// SIG undefined FUN_1458f3e84(void)

void FUN_1458f3e84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b833fd0;
  param_1[6] = &PTR_FUN_14b834290;
  param_1[7] = &PTR_LAB_14b834320;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1458f3ee0(param_1 + 0xf);
  FUN_140b3fd78(param_1);
  return;
}



// FUNCTION 1458f3ee0 FUN_1458f3ee0 body=53 status=ok
// SIG undefined FUN_1458f3ee0(void)

void FUN_1458f3ee0(longlong *param_1)

{
  FUN_1458f3f16();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458f3f16 FUN_1458f3f16 body=90 status=ok
// SIG undefined FUN_1458f3f16(void)

void FUN_1458f3f16(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1458f3f70 FUN_1458f3f70 body=169 status=ok
// SIG undefined FUN_1458f3f70(void)

bool FUN_1458f3f70(longlong param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 1458f401a FUN_1458f401a body=315 status=ok
// SIG undefined FUN_1458f401a(void)

void FUN_1458f401a(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined2 *puVar5;
  code *pcVar6;
  undefined1 auStack_a8 [32];
  longlong local_88 [3];
  undefined4 local_6c;
  code *local_68;
  undefined8 uStack_60;
  undefined ***local_58;
  undefined **local_48;
  undefined4 *local_40;
  longlong *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_6c = FUN_144a49b4a(iVar2,puVar5);
  if (param_3 == 0) {
    local_88[0] = 0;
    local_88[1] = 0;
  }
  else {
    local_68 = (code *)0x0;
    uStack_60 = 0;
    FUN_1401031ac(param_3,0,&local_68);
    pcVar6 = local_68;
    if ((int)uStack_60 == 0) {
      pcVar6 = (code *)&DAT_149dfb77a;
    }
    FUN_140002266(local_88,L"TextureRenderTarget2D\'%s\'",pcVar6);
    if (local_68 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar3 = (undefined8 *)FUN_1458f4156(param_1);
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14b9af830;
  local_40 = &local_6c;
  local_38 = local_88;
  local_68 = FUN_14427d844;
  FUN_1458f41cc(*puVar3,&local_68);
  if (local_68 != (code *)0x0) {
    pppuVar4 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar4 = &local_48;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458f4156 FUN_1458f4156 body=116 status=ok
// SIG undefined FUN_1458f4156(void)

longlong FUN_1458f4156(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1449027d0(param_1,&local_28);
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
    return local_28 + 0x620;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f41cc FUN_1458f41cc body=115 status=ok
// SIG undefined FUN_1458f41cc(void)

void FUN_1458f41cc(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*param_2 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x140));
    pcVar1 = (code *)*param_2;
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    cVar2 = (*pcVar1)(uVar3,param_1);
    if (cVar2 != '\0') {
      *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001458f4225. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x140));
    return;
  }
  return;
}



// FUNCTION 1458f4240 FUN_1458f4240 body=51 status=ok
// SIG undefined FUN_1458f4240(void)

void FUN_1458f4240(longlong param_1)

{
  FUN_144725486(param_1 + 0x18);
  FUN_1458f4488(param_1 + 0xe8);
  FUN_1458f4274(param_1 + 0x10);
  return;
}



// FUNCTION 1458f4274 FUN_1458f4274 body=123 status=ok
// SIG undefined FUN_1458f4274(void)

void FUN_1458f4274(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab08910;
  param_1[1] = &PTR_FUN_14ab08920;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1458f4316(param_1 + 0x12);
  FUN_1458f4316(param_1 + 0xb);
  FUN_1458f43a6(param_1 + 5);
  FUN_1458f42ef(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144a4509c(param_1 + 1);
  return;
}



// FUNCTION 1458f42ef FUN_1458f42ef body=38 status=ok
// SIG undefined FUN_1458f42ef(void)

void FUN_1458f42ef(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1413285ee(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 1458f4316 FUN_1458f4316 body=53 status=ok
// SIG undefined FUN_1458f4316(void)

void FUN_1458f4316(longlong *param_1)

{
  FUN_1458f434c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458f434c FUN_1458f434c body=89 status=ok
// SIG undefined FUN_1458f434c(void)

void FUN_1458f434c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1458f43a6 FUN_1458f43a6 body=60 status=ok
// SIG undefined FUN_1458f43a6(void)

void FUN_1458f43a6(longlong param_1)

{
  FUN_1458f43e2(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458f43e2 FUN_1458f43e2 body=54 status=ok
// SIG undefined FUN_1458f43e2(void)

void FUN_1458f43e2(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458f4418(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1458f4418 FUN_1458f4418 body=38 status=ok
// SIG undefined FUN_1458f4418(void)

void FUN_1458f4418(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458f443e(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 1458f443e FUN_1458f443e body=73 status=ok
// SIG undefined FUN_1458f443e(void)

void FUN_1458f443e(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_140e35886(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
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



// FUNCTION 1458f4488 FUN_1458f4488 body=166 status=ok
// SIG undefined FUN_1458f4488(void)

void FUN_1458f4488(longlong *param_1)

{
  if ((int)param_1[7] != 0) {
    *(undefined8 *)((longlong)param_1 + 0x34) = 0;
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    param_1[8] = (longlong)&DAT_14c7585e0;
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    param_1[9] = 0;
  }
  if ((int)param_1[3] != 0) {
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = (longlong)&DAT_14c7585e0;
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    param_1[5] = 0;
  }
  FUN_141328694(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458f452e FUN_1458f452e body=119 status=ok
// SIG undefined FUN_1458f452e(void)

undefined8 FUN_1458f452e(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_58 [40];
  undefined2 local_30 [4];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  pcVar2 = *(code **)(param_1 + 0x20);
  local_30[0] = *param_3;
  local_28 = *(longlong *)(param_3 + 4);
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  (*pcVar2)(uVar1,param_2,local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f45a6 FUN_1458f45a6 body=89 status=ok
// SIG undefined FUN_1458f45a6(void)

void FUN_1458f45a6(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  
  if ((param_2 == 0) || (DAT_14c763db0 != '\x01')) {
    return;
  }
  bVar1 = *(byte *)(param_2 + 0x152);
  if ((bVar1 != 1) &&
     (((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)) &&
      (cVar2 = FUN_1414229ce(param_2), cVar2 == '\0')))) {
    return;
  }
  FUN_1402c91d8(param_1,param_2);
  return;
}



// FUNCTION 1458f4600 FUN_1458f4600 body=294 status=ok
// SIG undefined FUN_1458f4600(void)

void FUN_1458f4600(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  puVar1 = local_40;
  local_38 = 2;
  *local_40 = &PTR_LAB_14a599010;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a598fa0;
  puVar1[3] = FUN_1498d33a0;
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x40);
    lVar4 = (longlong)*(int *)(param_1 + 0x48) << 4;
    do {
      local_50 = 0;
      local_48 = 0;
      FUN_1458f49e6(&local_50,&local_40);
      FUN_1458f4728(lVar3,&local_50);
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  FUN_1458f4d00(&DAT_14c872cf8,local_58,param_1,FUN_145dde27e);
  FUN_1458f4d00(&DAT_14c872d10,local_58,param_1,FUN_145dde1ae);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f4728 FUN_1458f4728 body=90 status=ok
// SIG undefined FUN_1458f4728(void)

void FUN_1458f4728(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1458f4784();
  local_30 = param_1;
  local_28 = param_2;
  FUN_1458f481c(local_1c);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1449db362(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f4784 FUN_1458f4784 body=152 status=ok
// SIG undefined FUN_1458f4784(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1458f4784(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cabc728) {
    FUN_144b3d300(&DAT_14cabc728);
    if (DAT_14cabc728 == -1) {
      DAT_14cabc6f8 = 0;
      DAT_14cabc700 = 0;
      DAT_14cabc6d8 = 0;
      _DAT_14cabc6e0 = 0;
      _DAT_14cabc704 = 0xffffffff00000080;
      DAT_14cabc70c = 0;
      DAT_14cabc718 = 0;
      DAT_14cabc720 = 0;
      atexit(FUN_14336f6a7);
      _Init_thread_footer(&DAT_14cabc728);
      return;
    }
  }
  return;
}



// FUNCTION 1458f481c FUN_1458f481c body=341 status=ok
// SIG undefined FUN_1458f481c(void)

undefined4 * FUN_1458f481c(undefined4 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1458f4be4(local_40);
  FUN_1458f4972(local_38,*param_2,param_2[1]);
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  iVar9 = *(int *)(local_38 + 1);
  if (iVar9 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*local_38;
  }
  iVar2 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar2 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar2,puVar10);
  cVar4 = FUN_1458f4ac2(uVar5,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar6 = DAT_14cabc6e0 - DAT_14cabc70c;
    if (uVar6 < 4) {
      iVar9 = 1;
    }
    else {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cabc720)) {
      uVar5 = DAT_14cabc720 - 1U & uVar5;
      *(uint *)((longlong)local_38 + 0x24) = uVar5;
      puVar7 = DAT_14cabc718;
      if (DAT_14cabc718 == (undefined *)0x0) {
        puVar7 = &DAT_14cabc710;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cabc720 - 1U & (longlong)(int)uVar5) * 4);
      puVar7 = DAT_14cabc718;
      if (DAT_14cabc718 == (undefined *)0x0) {
        puVar7 = &DAT_14cabc710;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cabc720 - 1U & (longlong)(int)uVar5) * 4) = local_44
      ;
    }
    else {
      DAT_14cabc720 = iVar9;
      FUN_1413286d2();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f4972 FUN_1458f4972 body=116 status=ok
// SIG undefined FUN_1458f4972(void)

undefined8 * FUN_1458f4972(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_1458f49e6(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 1458f49e6 FUN_1458f49e6 body=124 status=ok
// SIG undefined FUN_1458f49e6(void)

void FUN_1458f49e6(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f4a64 FUN_1458f4a64 body=93 status=ok
// SIG undefined FUN_1458f4a64(void)

void FUN_1458f4a64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a599010;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a598fa0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1458f4ac2 FUN_1458f4ac2 body=137 status=ok
// SIG undefined FUN_1458f4ac2(void)

undefined8 FUN_1458f4ac2(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  if ((DAT_14cabc6e0 - DAT_14cabc70c != 1) && (iVar10 = FUN_1458f4b4c(), iVar10 != -1)) {
    puVar1 = (undefined4 *)(DAT_14cabc6d8 + (longlong)iVar10 * 0x28);
    plVar2 = (longlong *)(DAT_14cabc6d8 + (longlong)iVar10 * 0x28);
    FUN_1449db362(plVar2 + 2);
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    uVar7 = param_2[5];
    uVar8 = param_2[6];
    uVar9 = param_2[7];
    puVar1[4] = param_2[4];
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_14589a58e(*param_3);
    *param_3 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 1458f4b4c FUN_1458f4b4c body=152 status=ok
// SIG undefined FUN_1458f4b4c(void)

int FUN_1458f4b4c(uint param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  
  if (DAT_14cabc6e0 != DAT_14cabc70c) {
    puVar5 = &DAT_14cabc710;
    if (DAT_14cabc718 != (undefined *)0x0) {
      puVar5 = DAT_14cabc718;
    }
    iVar1 = *(int *)(puVar5 + (ulonglong)(DAT_14cabc720 - 1U & param_1) * 4);
    lVar3 = DAT_14cabc6d8;
    while (iVar1 != -1) {
      lVar4 = (longlong)iVar1;
      iVar2 = *(int *)(lVar3 + 8 + lVar4 * 0x28);
      if (iVar2 == *(int *)(param_2 + 1)) {
        if (iVar2 < 2) {
          return iVar1;
        }
        iVar2 = FUN_144a80a00(*(undefined8 *)(lVar3 + lVar4 * 0x28),*param_2);
        lVar3 = DAT_14cabc6d8;
        if (iVar2 == 0) {
          return iVar1;
        }
      }
      else if (*(int *)(param_2 + 1) + iVar2 == 1) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar3 + 0x20 + lVar4 * 0x28);
    }
  }
  return -1;
}



// FUNCTION 1458f4be4 FUN_1458f4be4 body=283 status=ok
// SIG undefined FUN_1458f4be4(void)

int * FUN_1458f4be4(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cabc708;
  iVar3 = DAT_14cabc6e0;
  if (DAT_14cabc70c == 0) {
    iVar2 = DAT_14cabc6e0 + 1;
    bVar7 = DAT_14cabc6e4 == DAT_14cabc6e0;
    DAT_14cabc6e0 = iVar2;
    if (bVar7) {
      FUN_140549c28(&DAT_14cabc6d8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cabc6e8,1);
    puVar4 = DAT_14cabc6f8;
    if (DAT_14cabc6f8 == (undefined *)0x0) {
      puVar4 = &DAT_14cabc6e8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cabc708;
    DAT_14cabc708 = *(int *)(DAT_14cabc6d8 + 4 + lVar6 * 0x28);
    DAT_14cabc70c = DAT_14cabc70c + -1;
    if (DAT_14cabc70c != 0) {
      *(undefined4 *)(DAT_14cabc6d8 + (longlong)DAT_14cabc708 * 0x28) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cabc6e8;
  if (DAT_14cabc6f8 != (undefined *)0x0) {
    puVar4 = DAT_14cabc6f8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x28 + DAT_14cabc6d8;
  return param_1;
}



// FUNCTION 1458f4d00 FUN_1458f4d00 body=196 status=ok
// SIG undefined FUN_1458f4d00(void)

undefined8
FUN_1458f4d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar1 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bef15a0;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f4dc6 FUN_1458f4dc6 body=156 status=ok
// SIG undefined FUN_1458f4dc6(void)

void FUN_1458f4dc6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1458f4e64(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f4e64 FUN_1458f4e64 body=26 status=ok
// SIG undefined FUN_1458f4e64(void)

void FUN_1458f4e64(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x54) != -1) {
      *(undefined8 *)(param_1 + 0x54) = 0xffffffff;
      return;
    }
  }
  else {
    *(longlong *)(param_1 + 0x54) = param_2;
  }
  return;
}



// FUNCTION 1458f4e7e FUN_1458f4e7e body=270 status=ok
// SIG undefined FUN_1458f4e7e(void)

void FUN_1458f4e7e(void)

{
  int *piVar1;
  longlong *plVar2;
  size_t sVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  int local_30;
  undefined *local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)FUN_144a8054c();
  (**(code **)(*plVar2 + 0x68))(plVar2,&local_48,&DAT_14afcb7b6);
  (**(code **)(*local_48 + 0x20))(local_48,&local_68);
  local_38 = local_68;
  local_20 = 0;
  local_30 = local_60 + -1;
  if (local_60 == 0) {
    local_30 = 0;
  }
  local_28 = PTR_u__Binaries_ThirdParty_Win64_14c7632e8;
  if (PTR_u__Binaries_ThirdParty_Win64_14c7632e8 != (undefined *)0x0) {
    sVar3 = wcslen((wchar_t *)PTR_u__Binaries_ThirdParty_Win64_14c7632e8);
    local_20 = (int)sVar3;
  }
  FUN_140bee87a(&local_58,&local_38,2);
  puVar4 = local_58;
  if (local_50 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1458f4f8e(puVar4);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458f4f8e FUN_1458f4f8e body=177 status=ok
// SIG undefined FUN_1458f4f8e(void)

/* WARNING: Removing unreachable block (ram,0x0001458f5039) */

void FUN_1458f4f8e(LPCWSTR param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  SetDllDirectoryW(param_1);
  FUN_140056680(&local_20,param_1);
  iVar2 = DAT_14c8c2b78;
  lVar3 = (longlong)(int)DAT_14c8c2b78;
  DAT_14c8c2b78 = DAT_14c8c2b78 + 1;
  if (DAT_14c8c2b7c < DAT_14c8c2b78) {
    FUN_1447a1bd6(&DAT_14c8c2b70,iVar2);
  }
  lVar1 = DAT_14c8c2b70;
  lVar3 = lVar3 * 0x10;
  *(undefined8 *)(DAT_14c8c2b70 + lVar3) = 0;
  *(undefined8 *)(lVar1 + lVar3) = local_20;
  *(undefined4 *)(lVar1 + 8 + lVar3) = (undefined4)local_18;
  *(undefined4 *)(lVar1 + 0xc + lVar3) = local_18._4_4_;
  local_18 = 0;
  local_20 = 0;
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458f5040 FUN_1458f5040 body=103 status=ok
// SIG undefined FUN_1458f5040(void)

ulonglong FUN_1458f5040(longlong param_1)

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
LAB_1458f508a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1458f508a;
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



// FUNCTION 1458f50a8 FUN_1458f50a8 body=163 status=ok
// SIG undefined FUN_1458f50a8(void)

void FUN_1458f50a8(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  
  if (param_2 == 0) {
    return;
  }
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
  cVar1 = *(char *)(param_2 + 8);
  if (cVar1 == *(char *)(param_1 + 0x33c)) {
    if (*(int *)(param_1 + 0x340) != 0) goto LAB_1458f50e5;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x340) + 1;
  }
  *(char *)(param_1 + 0x33c) = cVar1;
  *(int *)(param_1 + 0x340) = iVar4;
LAB_1458f50e5:
  fVar5 = -1.0;
  if (((cVar1 != '\0') && (plVar2 != (longlong *)0x0)) && (0.0 < *(float *)(param_2 + 0xc))) {
    lVar3 = (**(code **)(*plVar2 + 0x180))(plVar2);
    fVar5 = (float)((double)*(float *)(param_2 + 0xc) + *(double *)(lVar3 + 0x6d0));
  }
  *(float *)(param_1 + 0x2a8) = fVar5;
  FUN_141328aca(param_1);
  return;
}



// FUNCTION 1458f514c FUN_1458f514c body=181 status=ok
// SIG undefined FUN_1458f514c(void)

void FUN_1458f514c(longlong param_1)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined1 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  local_58 = 0;
  local_48 = &PTR_LAB_14aaafec0;
  local_40 = &LAB_143700e58;
  local_68 = &LAB_147d476be;
  FUN_1458f5202(param_1);
  iVar1 = *(int *)(param_1 + 0x34);
  FUN_14583c1b2(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x34) != 0)) {
    FUN_147d476e6(param_1 + 0x28);
  }
  switchD_143c3d4dc::caseD_1d(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f5202 FUN_1458f5202 body=246 status=ok
// SIG undefined FUN_1458f5202(void)

void FUN_1458f5202(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x28);
    plVar10 = plVar9 + (longlong)*(int *)(param_1 + 0x30) * 2;
    do {
      plVar2 = (longlong *)plVar9[1];
      if (plVar2 != (longlong *)0x0) {
        iVar6 = (int)plVar2[1];
        do {
          if (iVar6 == 0) goto LAB_1458f52bf;
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar2 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
        lVar3 = *plVar9;
        if (lVar3 != 0) {
          pcVar4 = (code *)*param_2;
          plVar8 = (longlong *)param_2[2];
          if ((longlong *)param_2[2] == (longlong *)0x0) {
            plVar8 = param_2 + 4;
          }
          uVar7 = (**(code **)(*plVar8 + 8))();
          (*pcVar4)(uVar7,lVar3);
        }
        LOCK();
        plVar8 = plVar2 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
LAB_1458f52bf:
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (*param_2 == 0) {
    return;
  }
  plVar9 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar9 = (longlong *)param_2[2];
  }
                    /* WARNING: Could not recover jumptable at 0x0001458f5266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x10))(plVar9);
  return;
}



// FUNCTION 1458f5304 FUN_1458f5304 body=31 status=ok
// SIG undefined FUN_1458f5304(void)

undefined8 FUN_1458f5304(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458f532e FUN_1458f532e body=205 status=ok
// SIG undefined FUN_1458f532e(void)

undefined8 * FUN_1458f532e(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14ac2bae0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 9) = 0x40200000;
  *(undefined1 *)(param_1 + 0xd) = 3;
  *(char *)(param_1 + 0xe) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x13) = 4;
  *(undefined4 *)(param_1 + 0x10) = 0x40200000;
  *(undefined1 *)(param_1 + 0x14) = 3;
  *(char *)(param_1 + 0x15) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x16] = 0;
  FUN_1446f470e(param_1 + 0x17,L"FullBody",1);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return param_1;
}



// FUNCTION 1458f53fc FUN_1458f53fc body=329 status=ok
// SIG undefined FUN_1458f53fc(void)

void FUN_1458f53fc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1458f5546(param_1,local_20,local_28,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f5546 FUN_1458f5546 body=57 status=ok
// SIG undefined FUN_1458f5546(void)

void FUN_1458f5546(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  
  cVar1 = FUN_14011bcf8(param_1 + 0x30);
  if (param_4 == 0 || cVar1 != '\x01') {
    return;
  }
  FUN_1412a7c20(param_1 + 0x30);
  return;
}



// FUNCTION 1458f558e FUN_1458f558e body=72 status=ok
// SIG undefined FUN_1458f558e(void)

undefined8 * FUN_1458f558e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6fa540;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1458f55d6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458f55d6 FUN_1458f55d6 body=19 status=ok
// SIG undefined FUN_1458f55d6(void)

void FUN_1458f55d6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1458f55f2 FUN_1458f55f2 body=47 status=ok
// SIG undefined FUN_1458f55f2(void)

void FUN_1458f55f2(longlong param_1)

{
  FUN_1458f5621(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_144a2da94(param_1);
  return;
}



// FUNCTION 1458f5621 FUN_1458f5621 body=50 status=ok
// SIG undefined FUN_1458f5621(void)

void FUN_1458f5621(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_144a2da94(param_1 + 0x38);
    FUN_144a2da94(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 1458f5654 FUN_1458f5654 body=139 status=ok
// SIG undefined FUN_1458f5654(void)

void FUN_1458f5654(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))();
    lVar2 = FUN_1458f56e0();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      local_28 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        local_28 = param_2;
      }
      goto LAB_1458f56aa;
    }
  }
  local_28 = (longlong *)0x0;
LAB_1458f56aa:
  *(longlong **)(param_1 + 0x2278) = local_28;
  FUN_140de9eb8(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f56e0 FUN_1458f56e0 body=57 status=ok
// SIG undefined FUN_1458f56e0(void)

void FUN_1458f56e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4008 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4008 = FUN_140002ddd(FUN_1465bc531,uVar1,L"GrappleInteractableDef");
  }
  return;
}



// FUNCTION 1458f5724 FUN_1458f5724 body=480 status=ok
// SIG undefined FUN_1458f5724(void)

undefined8 * FUN_1458f5724(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14a4bb120;
  param_1[0x1f] = &PTR_LAB_14a4bb490;
  FUN_1458f5906(param_1 + 0x20);
  local_58 = 0xd2704c107b5ae74c;
  uStack_50 = 0xb212a5aa9585798;
  iVar4 = FUN_1448a256a(param_1);
  if (iVar4 < 4) {
    cVar3 = '\0';
  }
  else {
    local_68 = 0xd2704c107b5ae74c;
    uStack_60 = 0xb212a5aa9585798;
    iVar4 = FUN_1448a256a(param_1);
    cVar3 = '\x02' - (iVar4 < 6);
  }
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(char *)((longlong)param_1 + 0x59) = cVar3;
  *(undefined1 *)((longlong)param_1 + 0xda) = 1;
  *(undefined2 *)(param_1 + 0x1b) = 0x101;
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a492060;
  plVar1 = plVar5 + 2;
  FUN_1458f59b4(plVar1,param_1 + 0x20);
  local_78 = plVar1;
  local_70 = plVar5;
  FUN_140aec6f8(&local_78,plVar1);
  plVar1 = local_70;
  if (local_70 == (longlong *)0x0) {
    param_1[0x1c] = local_78;
    plVar5 = (longlong *)param_1[0x1d];
    if (plVar5 == (longlong *)0x0) goto LAB_1458f5844;
    param_1[0x1d] = 0;
LAB_1458f58a6:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1458f5844;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
    plVar1 = plVar5;
  }
  else {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
    param_1[0x1c] = local_78;
    plVar5 = (longlong *)param_1[0x1d];
    if (local_70 != plVar5) {
      param_1[0x1d] = local_70;
      if (plVar5 == (longlong *)0x0) goto LAB_1458f5844;
      goto LAB_1458f58a6;
    }
    LOCK();
    plVar5 = local_70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1458f5844;
    (**(code **)*local_70)(local_70);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
  }
  if (iVar4 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1458f5844:
  plVar1 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f5906 FUN_1458f5906 body=174 status=ok
// SIG undefined FUN_1458f5906(void)

void FUN_1458f5906(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 2;
  *param_1 = &PTR_FUN_14a46eaf0;
  *(undefined2 *)(param_1 + 10) = 0x404;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x65) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 1458f59b4 FUN_1458f59b4 body=197 status=ok
// SIG undefined FUN_1458f59b4(void)

undefined8 * FUN_1458f59b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 2;
  puVar1 = param_1 + 5;
  param_1[8] = 0;
  param_1[9] = 0x100000000;
  lVar4 = FUN_1458f5a7a();
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  iVar2 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1457d67de(puVar1,iVar2);
  }
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  puVar5[(longlong)iVar2 * 3] = uVar3;
  puVar5[(longlong)iVar2 * 3 + 1] = 0;
  (puVar5 + (longlong)iVar2 * 3 + 1)[1] = 0;
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  iVar2 = *(int *)(puVar5 + 2);
  *(uint *)(puVar5 + 2) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x14) < iVar2 + 1U) {
    FUN_140aec898(puVar5 + 1,iVar2);
  }
  *(undefined8 *)(puVar5[1] + (longlong)iVar2 * 8) = param_2;
  return param_1;
}



// FUNCTION 1458f5a7a FUN_1458f5a7a body=57 status=ok
// SIG undefined FUN_1458f5a7a(void)

void FUN_1458f5a7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab2408 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab2408 = FUN_140002ddd(FUN_14179cab4,uVar1,L"MovieSceneIntegerChannel");
  }
  return;
}



// FUNCTION 1458f5ab4 FUN_1458f5ab4 body=94 status=ok
// SIG undefined FUN_1458f5ab4(void)

void FUN_1458f5ab4(longlong param_1,longlong param_2,byte param_3)

{
  if (*(longlong *)(param_1 + 0xe8) != param_2) {
    FUN_14132e6a6(param_1);
  }
  if ((DAT_14c7640c8 != '\x01') || ((*(longlong *)(param_1 + 0xe8) == param_2 & (param_3 ^ 1)) == 0)
     ) {
    FUN_14132d58e(param_1,param_2,DAT_14c7640c9);
    *(longlong *)(param_1 + 0xe8) = param_2;
  }
  return;
}



// FUNCTION 1458f5b12 FUN_1458f5b12 body=113 status=ok
// SIG undefined FUN_1458f5b12(void)

void FUN_1458f5b12(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0xe8) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    FUN_14482b126(lVar2,0x4000000);
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0xe8) = param_2;
  return;
}



// FUNCTION 1458f5b84 FUN_1458f5b84 body=102 status=ok
// SIG undefined FUN_1458f5b84(void)

void FUN_1458f5b84(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1458f5cec(param_1[6]);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x19] = lVar1;
  *(undefined1 *)(lVar1 + 0x2b0) = 1;
  DAT_14cbe4778 = 1;
                    /* WARNING: Could not recover jumptable at 0x0001458f5bdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_1[0x19],&DAT_14c846480,0);
  return;
}



// FUNCTION 1458f5bea FUN_1458f5bea body=257 status=ok
// SIG undefined FUN_1458f5bea(void)

undefined8
FUN_1458f5bea(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

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
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_144a805b8();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
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



// FUNCTION 1458f5cec FUN_1458f5cec body=177 status=ok
// SIG undefined FUN_1458f5cec(void)

undefined8 FUN_1458f5cec(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14592c47e();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f5d9e FUN_1458f5d9e body=272 status=ok
// SIG undefined FUN_1458f5d9e(void)

void FUN_1458f5d9e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar4 = *(int *)(param_1 + 0x268);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar4) || (uStack_40 != lVar2)) {
    do {
      plVar3 = *(longlong **)(*local_70 + (longlong)iStack_54 * 0x10);
      if ((plVar3 != (longlong *)0x0) && ((*(byte *)((longlong)plVar3 + 0x9c) & 1) != 0)) {
        (**(code **)(*plVar3 + 0x3d0))(plVar3,0,0);
      }
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (((iStack_54 != iVar4) || (CONCAT44(uStack_5c,uStack_60) != lVar2)) ||
            (local_70 != plVar1));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f5eb0 FUN_1458f5eb0 body=275 status=ok
// SIG undefined FUN_1458f5eb0(void)

undefined4 * FUN_1458f5eb0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1458f6046(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_1458f5fc4(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1458f6260(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f5fc4 FUN_1458f5fc4 body=130 status=ok
// SIG undefined FUN_1458f5fc4(void)

undefined8 FUN_1458f5fc4(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_148eef282((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1458f6046 FUN_1458f6046 body=231 status=ok
// SIG undefined FUN_1458f6046(void)

int * FUN_1458f6046(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1458f612e FUN_1458f612e body=179 status=ok
// SIG undefined FUN_1458f612e(void)

void FUN_1458f612e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401bf202(param_2);
  local_30 = param_2;
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_28 = &local_30;
  FUN_140674ff6(param_1 + 0x20);
  if ((param_2 != (longlong *)0x0) && (*(char *)(param_1 + 0x40) != '\0')) {
    lVar1 = FUN_14081cebe();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      (**(code **)(*param_2 + 0xa18))(param_2,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f61e2 FUN_1458f61e2 body=126 status=ok
// SIG undefined FUN_1458f61e2(void)

longlong * FUN_1458f61e2(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_140c8105a();
  FUN_14123d74c(uVar2,param_1,param_3,param_2,uVar1 | param_4 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 1458f6260 FUN_1458f6260 body=457 status=ok
// SIG undefined FUN_1458f6260(void)

void FUN_1458f6260(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5;
        uVar7 = *(ulonglong *)(lVar3 + lVar10 * 0x18);
        iVar6 = FUN_144a78877(uVar7,uVar7 >> 0x20);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x14 + lVar10 * 0x18) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458f642a FUN_1458f642a body=132 status=ok
// SIG undefined FUN_1458f642a(void)

undefined8 FUN_1458f642a(longlong param_1,undefined8 param_2)

{
  if ((*(longlong *)(param_1 + 0xb8) != 0) && (*(longlong *)(param_1 + 0xb0) != 0)) {
    FUN_14010ee68();
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0xa78))(*(longlong **)(param_1 + 0xb8),param_2);
    FUN_1400f829a(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xc0));
    FUN_14045627c(*(undefined8 *)(param_1 + 0xb8),1,1);
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      FUN_14045627c(*(longlong *)(param_1 + 0xc0),0,1);
    }
  }
  return *(undefined8 *)(param_1 + 0xb8);
}



// FUNCTION 1458f64bc FUN_1458f64bc body=40 status=ok
// SIG undefined FUN_1458f64bc(void)

undefined8 FUN_1458f64bc(undefined8 param_1,int param_2)

{
  FUN_1458f64e4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458f64e4 FUN_1458f64e4 body=66 status=ok
// SIG undefined FUN_1458f64e4(void)

void FUN_1458f64e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b07ee30;
  FUN_1458f6526(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  return;
}



// FUNCTION 1458f6526 FUN_1458f6526 body=38 status=ok
// SIG undefined FUN_1458f6526(void)

void FUN_1458f6526(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458868c2(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 1458f654c FUN_1458f654c body=61 status=ok
// SIG undefined FUN_1458f654c(void)

void FUN_1458f654c(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 8))(param_2);
    FUN_1458f658a(param_1 + -0xda8,uVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 1458f658a FUN_1458f658a body=96 status=ok
// SIG undefined FUN_1458f658a(void)

void FUN_1458f658a(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadce8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f65ec FUN_1458f65ec body=40 status=ok
// SIG undefined FUN_1458f65ec(void)

undefined8 FUN_1458f65ec(undefined8 param_1,int param_2)

{
  FUN_1458f6614();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458f6614 FUN_1458f6614 body=405 status=ok
// SIG undefined FUN_1458f6614(void)

void FUN_1458f6614(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc588d0;
  if ((longlong *)param_1[0x34] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x34] + 0x10))();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x1a);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1458f67da(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1458f67a9(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458f67a9 FUN_1458f67a9 body=49 status=ok
// SIG undefined FUN_1458f67a9(void)

void FUN_1458f67a9(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458f67da FUN_1458f67da body=59 status=ok
// SIG undefined FUN_1458f67da(void)

void FUN_1458f67da(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 1458f6838 FUN_1458f6838 body=232 status=ok
// SIG undefined FUN_1458f6838(void)

void FUN_1458f6838(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined **local_c0;
  undefined2 local_b8;
  undefined2 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined2 local_90;
  undefined1 local_88 [80];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(int *)(param_1 + 0x68) != 0) || (*(char *)(param_1 + 0x74) == '\x01')) {
    lVar1 = FUN_14009d2a0();
    lVar2 = FUN_14038fb82();
    local_b8 = *(undefined2 *)(lVar2 + 0x24);
    local_b0 = *(undefined2 *)(lVar1 + 0x76);
    local_a0 = 1;
    local_98 = 0;
    local_c0 = &PTR_FUN_14a4c7680;
    local_a8 = param_1 + 8;
    local_90 = local_b8;
    local_c8 = FUN_1413319c2();
    FUN_1458f6922(&local_c0,local_88,*(undefined2 *)(lVar1 + 0xf6));
    FUN_1458f6a92(local_88,param_1 + -0xf8,param_3,param_4);
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f6922 FUN_1458f6922 body=183 status=ok
// SIG undefined FUN_1458f6922(void)

undefined8 * FUN_1458f6922(longlong param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined2 local_60;
  undefined2 local_58;
  undefined8 local_50;
  char local_48;
  undefined2 local_40;
  longlong local_38;
  char local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined2 *)(param_1 + 0x30);
  FUN_1458f69da(param_1,local_68);
  *(undefined2 *)(param_2 + 1) = local_60;
  *(undefined2 *)(param_2 + 2) = local_58;
  *(char *)(param_2 + 4) = local_48;
  if (local_48 == '\x01') {
    param_2[3] = local_50;
  }
  *(undefined2 *)(param_2 + 5) = local_40;
  *(char *)(param_2 + 7) = local_30;
  if (local_30 == '\x01') {
    param_2[6] = local_38;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  *(undefined1 *)(param_2 + 8) = local_28;
  *param_2 = &PTR_FUN_14a4c76a0;
  *(undefined2 *)(param_2 + 9) = uVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f69da FUN_1458f69da body=183 status=ok
// SIG undefined FUN_1458f69da(void)

undefined8 *
FUN_1458f69da(longlong param_1,undefined8 *param_2,undefined2 param_3,longlong *param_4)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = *param_4;
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  if ((lVar3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
  }
  uVar1 = *(undefined1 *)(param_1 + 0x28);
  *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 8);
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_1 + 0x10);
  cVar2 = *(char *)(param_1 + 0x20);
  *(char *)(param_2 + 4) = cVar2;
  if (cVar2 == '\x01') {
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
  }
  *(undefined2 *)(param_2 + 5) = param_3;
  *(undefined1 *)(param_2 + 7) = 1;
  param_2[6] = lVar3;
  if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar3);
  }
  *(undefined1 *)(param_2 + 8) = uVar1;
  *param_2 = &PTR_FUN_14a4c76a0;
  return param_2;
}



// FUNCTION 1458f6a92 FUN_1458f6a92 body=666 status=ok
// SIG undefined FUN_1458f6a92(void)

void FUN_1458f6a92(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int *piVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  undefined **local_120;
  undefined2 local_118;
  undefined2 local_110;
  undefined8 local_108;
  char local_100;
  undefined2 local_f8;
  longlong local_f0;
  char local_e8;
  undefined2 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined2 local_b8;
  undefined4 uStack_b6;
  undefined2 uStack_b2;
  undefined2 uStack_b0;
  undefined4 uStack_ae;
  undefined4 uStack_aa;
  undefined4 local_a6;
  undefined8 local_a0;
  char local_98;
  undefined2 local_90;
  longlong local_88;
  char local_80;
  uint local_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined1 local_64;
  undefined1 local_60;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  piVar3 = *(int **)(param_3 + 8);
  if (piVar3 == (int *)0x0) {
    local_138 = 0;
    iStack_134 = 0;
    iStack_130 = 0;
    iStack_12c = 0;
  }
  else {
    local_138 = *piVar3;
    iStack_134 = piVar3[1];
    iStack_130 = piVar3[2];
    iStack_12c = piVar3[3];
  }
  lVar10 = FUN_14009d2a0();
  FUN_14038fb82();
  lVar4 = *(longlong *)(param_2 + 0x20);
  if (lVar4 != 0) {
    lVar11 = FUN_140bc7f26();
    if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
        == lVar11 + 0x30)) {
      if (*(int *)(param_3 + 0x10) == 0) {
        uVar2 = *(undefined2 *)(lVar10 + 0x62);
        local_a6 = *(undefined4 *)(lVar4 + 0x110);
        uStack_b6 = *(undefined4 *)(lVar4 + 0x100);
        uStack_ae = *(undefined4 *)(lVar4 + 0x108);
        uStack_aa = *(undefined4 *)(lVar4 + 0x10c);
        uStack_b2 = (undefined2)*(undefined4 *)(lVar4 + 0x104);
        uStack_b0 = (undefined2)((uint)*(undefined4 *)(lVar4 + 0x104) >> 0x10);
        uVar1 = *(undefined1 *)(param_1 + 0x40);
        local_118 = *(undefined2 *)(param_1 + 8);
        local_110 = *(undefined2 *)(param_1 + 0x10);
        local_100 = *(char *)(param_1 + 0x20);
        if (local_100 == '\x01') {
          local_108 = *(undefined8 *)(param_1 + 0x18);
        }
        local_f8 = *(undefined2 *)(param_1 + 0x28);
        local_e8 = *(char *)(param_1 + 0x38);
        if (local_e8 == '\x01') {
          local_f0 = *(longlong *)(param_1 + 0x30);
          if ((local_f0 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
        }
        local_c8 = 1;
        uStack_d8 = CONCAT22(uStack_b0,uStack_b2);
        local_dc = uStack_b6;
        uStack_d4 = uStack_ae;
        uStack_d0 = uStack_aa;
        local_cc = local_a6;
        local_120 = &PTR_FUN_14a4c7700;
        local_148 = ((iStack_134 != 0 || local_138 != 0) || iStack_130 != 0) || iStack_12c != 0;
        local_e0 = uVar2;
        local_c0 = uVar1;
        FUN_1458f6f38(&local_120,&local_b8,*(undefined2 *)(lVar10 + 100));
        FUN_1458f706e(param_4,&local_b8);
      }
      else {
        cVar9 = FUN_145e0c77a(param_3);
        if (cVar9 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_168);
        }
      }
      goto LAB_1458f6bca;
    }
  }
  bVar7 = iStack_134 != 0;
  bVar8 = local_138 != 0;
  bVar6 = iStack_130 != 0;
  bVar5 = iStack_12c != 0;
  uVar2 = *(undefined2 *)(lVar10 + 100);
  uVar1 = *(undefined1 *)(param_1 + 0x40);
  uStack_b0 = *(undefined2 *)(param_1 + 8);
  uStack_aa = CONCAT22(*(undefined2 *)(param_1 + 0x10),(undefined2)uStack_aa);
  local_98 = *(char *)(param_1 + 0x20);
  if (local_98 == '\x01') {
    local_a0 = *(undefined8 *)(param_1 + 0x18);
  }
  local_90 = *(undefined2 *)(param_1 + 0x28);
  local_80 = *(char *)(param_1 + 0x38);
  if (local_80 == '\x01') {
    local_88 = *(longlong *)(param_1 + 0x30);
    if ((local_88 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  local_64 = 1;
  local_74 = local_138;
  iStack_70 = iStack_134;
  iStack_6c = iStack_130;
  iStack_68 = iStack_12c;
  local_b8 = 0x7740;
  uStack_b6 = 0x14a4c;
  uStack_b2 = 0;
  local_78 = (uint)CONCAT12(((bVar7 || bVar8) || bVar6) || bVar5,uVar2);
  local_60 = uVar1;
  FUN_1458f6d48(param_4);
LAB_1458f6bca:
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f6d48 FUN_1458f6d48 body=268 status=ok
// SIG undefined FUN_1458f6d48(void)

void FUN_1458f6d48(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_1458f6e56(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f6e56 FUN_1458f6e56 body=98 status=ok
// SIG undefined FUN_1458f6e56(void)

void FUN_1458f6e56(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c7760;
  FUN_1458f6eb8(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *param_1 = &PTR_FUN_14a4c7740;
  return;
}



// FUNCTION 1458f6eb8 FUN_1458f6eb8 body=127 status=ok
// SIG undefined FUN_1458f6eb8(void)

undefined2 * FUN_1458f6eb8(undefined2 *param_1,undefined2 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[4] = param_2[4];
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  param_1[0x10] = param_2[0x10];
  cVar1 = *(char *)(param_2 + 0x18);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(param_2 + 0x14);
    *(longlong *)(param_1 + 0x14) = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  cVar1 = *(char *)(param_2 + 0x26);
  *(char *)(param_1 + 0x26) = cVar1;
  if (cVar1 == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 0x22);
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(param_1 + 0x22) = uVar3;
  }
  return param_1;
}



// FUNCTION 1458f6f38 FUN_1458f6f38 body=141 status=ok
// SIG undefined FUN_1458f6f38(void)

undefined8 *
FUN_1458f6f38(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined4 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 *local_40;
  undefined2 local_30;
  undefined1 local_2e;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &local_30;
  local_2e = param_5;
  local_2c = *param_4;
  uStack_28 = param_4[1];
  uStack_24 = param_4[2];
  uStack_20 = param_4[3];
  local_1c = 1;
  local_48 = param_1 + 0x40;
  uVar1 = *(undefined1 *)(param_1 + 0x60);
  local_30 = param_3;
  FUN_1458f6fc6(param_2 + 1,param_1 + 8,param_1 + 0x10,param_1 + 0x28);
  *(undefined1 *)(param_2 + 0xf) = uVar1;
  *param_2 = &PTR_FUN_14a4c76c0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f6fc6 FUN_1458f6fc6 body=168 status=ok
// SIG undefined FUN_1458f6fc6(void)

undefined2 *
FUN_1458f6fc6(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
             undefined2 *param_5,undefined4 *param_6)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[4] = *param_3;
  cVar1 = *(char *)(param_3 + 8);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 4);
  }
  param_1[0x10] = *param_4;
  cVar1 = *(char *)(param_4 + 8);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(param_4 + 4);
    *(longlong *)(param_1 + 0x14) = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  param_1[0x1c] = *param_5;
  cVar1 = *(char *)(param_5 + 0xc);
  *(char *)(param_1 + 0x28) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_5 + 10);
    uVar3 = *(undefined8 *)(param_5 + 6);
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_5 + 2);
    *(undefined8 *)(param_1 + 0x22) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x2a) = *param_6;
  cVar1 = *(char *)(param_6 + 5);
  *(char *)(param_1 + 0x34) = cVar1;
  if (cVar1 == '\x01') {
    uVar3 = *(undefined8 *)(param_6 + 3);
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_6 + 1);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
  }
  return param_1;
}



// FUNCTION 1458f706e FUN_1458f706e body=268 status=ok
// SIG undefined FUN_1458f706e(void)

void FUN_1458f706e(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_1458f717c(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f717c FUN_1458f717c body=98 status=ok
// SIG undefined FUN_1458f717c(void)

void FUN_1458f717c(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x80,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c76e0;
  FUN_1458f71de(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0x78);
  *param_1 = &PTR_FUN_14a4c76c0;
  return;
}



// FUNCTION 1458f71de FUN_1458f71de body=159 status=ok
// SIG undefined FUN_1458f71de(void)

undefined2 * FUN_1458f71de(undefined2 *param_1,undefined2 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[4] = param_2[4];
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  param_1[0x10] = param_2[0x10];
  cVar1 = *(char *)(param_2 + 0x18);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(param_2 + 0x14);
    *(longlong *)(param_1 + 0x14) = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  param_1[0x1c] = param_2[0x1c];
  cVar1 = *(char *)(param_2 + 0x28);
  *(char *)(param_1 + 0x28) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
    uVar3 = *(undefined8 *)(param_2 + 0x22);
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(param_1 + 0x22) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x2a);
  cVar1 = *(char *)(param_2 + 0x34);
  *(char *)(param_1 + 0x34) = cVar1;
  if (cVar1 == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
  }
  return param_1;
}



// FUNCTION 1458f727e FUN_1458f727e body=179 status=ok
// SIG undefined FUN_1458f727e(void)

bool FUN_1458f727e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f7338 FUN_1458f7338 body=132 status=ok
// SIG undefined FUN_1458f7338(void)

void FUN_1458f7338(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    lVar3 = FUN_14101baae(uVar2);
    if (lVar3 != 0) {
      lVar4 = FUN_14030d4a0();
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
         (cVar1 = FUN_1458f73bc(lVar3), cVar1 != '\0')) {
        return;
      }
    }
  }
  FUN_1410ea50c(param_1);
  if (-1 < *(int *)(param_1 + 0x2a0)) {
    return;
  }
  FUN_141331aa8(param_1);
  return;
}



// FUNCTION 1458f73bc FUN_1458f73bc body=44 status=ok
// SIG undefined FUN_1458f73bc(void)

ulonglong FUN_1458f73bc(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_1458f73f0();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_1458f73e8(lVar2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 1458f73e8 FUN_1458f73e8 body=7 status=ok
// SIG undefined FUN_1458f73e8(void)

undefined1 FUN_1458f73e8(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x83);
}



// FUNCTION 1458f73f0 FUN_1458f73f0 body=57 status=ok
// SIG undefined FUN_1458f73f0(void)

void FUN_1458f73f0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x78) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14116599c();
  }
  FUN_140d75dd6(uVar1,*(undefined4 *)(param_1 + 0xe0));
  return;
}



// FUNCTION 1458f742a FUN_1458f742a body=205 status=ok
// SIG undefined FUN_1458f742a(void)

undefined8 FUN_1458f742a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = FUN_1413d305a();
  if (lVar2 != 0) {
    cVar1 = *(char *)(*(longlong *)(param_1 + 0xa8) + 0x20);
    if (cVar1 == '\x01') {
      lVar5 = *param_3;
      lVar4 = 0x168;
    }
    else {
      switch(cVar1) {
      case '\x02':
        lVar5 = *param_3;
        lVar4 = 0x180;
        break;
      case '\x03':
        lVar5 = *param_3;
        lVar4 = 0x198;
        break;
      case '\x04':
        lVar5 = *param_3;
        lVar4 = 0x1b0;
        break;
      case '\x05':
        lVar5 = *param_3;
        lVar4 = 0x240;
        break;
      case '\x06':
        lVar5 = *param_3;
        lVar4 = 600;
        break;
      case '\a':
        lVar5 = *param_3;
        lVar4 = 0x270;
        break;
      case '\b':
        lVar5 = *param_3;
        lVar4 = 0x288;
        break;
      case '\t':
        lVar5 = *param_3;
        lVar4 = 0x2a0;
        break;
      case '\n':
        lVar5 = *param_3;
        lVar4 = 0x150;
        break;
      default:
        goto switchD_1458f7496_default;
      }
    }
    if (lVar5 != 0) {
      uVar3 = FUN_14480f766(lVar2 + lVar4);
      return uVar3;
    }
  }
switchD_1458f7496_default:
  return 0;
}



// FUNCTION 1458f74f8 FUN_1458f74f8 body=103 status=ok
// SIG undefined FUN_1458f74f8(void)

ulonglong FUN_1458f74f8(longlong param_1)

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
LAB_1458f7542:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1458f7542;
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



// FUNCTION 1458f7560 FUN_1458f7560 body=293 status=ok
// SIG undefined FUN_1458f7560(void)

void FUN_1458f7560(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    bVar2 = *(byte *)(param_2 + 0xbd8);
    if ((int)(uint)bVar2 < *(int *)(param_2 + 0xbf0)) {
      lVar5 = *(longlong *)
               (*(longlong *)(param_2 + 0xbe8) + 0x10 +
               (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8);
      goto LAB_1458f758a;
    }
  }
  lVar5 = 0;
LAB_1458f758a:
  lVar1 = param_1 + 0x48;
  cVar3 = FUN_1458f7686(lVar1,lVar5);
  if (cVar3 == '\0') {
    cVar3 = FUN_144729dda(lVar1);
    if (cVar3 != '\0') {
      lVar4 = FUN_14479d2ce(lVar1);
      if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_14480f766(lVar4 + 0x40);
      }
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
  }
  if (lVar5 != 0) {
    local_58 = FUN_140c71d5c;
    local_50 = 0;
    FUN_1458f7700(local_48,param_1);
    FUN_1448b6402(lVar5 + 0x40,&local_58,local_48);
    FUN_1449db362(local_48);
    *(code **)(param_1 + 0x40) = local_58;
    FUN_14485c47a(lVar1,lVar5);
  }
  FUN_140c71d5c(param_1);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f7686 FUN_1458f7686 body=120 status=ok
// SIG undefined FUN_1458f7686(void)

ulonglong FUN_1458f7686(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if (*param_1 == (int)local_20) {
    uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
    if (param_1[1] == local_20._4_4_) goto LAB_1458f76c6;
  }
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(&local_20);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
LAB_1458f76c6:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1458f7700 FUN_1458f7700 body=428 status=ok
// SIG undefined FUN_1458f7700(void)

longlong * FUN_1458f7700(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1458f77e0:
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b99b880;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1458f77e0;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b99b880;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 1458f78ac FUN_1458f78ac body=75 status=ok
// SIG undefined FUN_1458f78ac(void)

void FUN_1458f78ac(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1458f78f8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b847f80;
  puVar1[5] = &PTR_FUN_14b848430;
  puVar1[6] = &PTR_LAB_14b848470;
  *(undefined1 *)(puVar1 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1e4) = 0;
  return;
}



// FUNCTION 1458f78f8 FUN_1458f78f8 body=54 status=ok
// SIG undefined FUN_1458f78f8(void)

undefined8 * FUN_1458f78f8(undefined8 *param_1)

{
  FUN_1458f792e();
  *param_1 = &PTR_FUN_14b469d30;
  param_1[5] = &PTR_FUN_14b46a1e0;
  param_1[6] = &PTR_LAB_14b46a220;
  return param_1;
}



// FUNCTION 1458f792e FUN_1458f792e body=64 status=ok
// SIG undefined FUN_1458f792e(void)

undefined8 * FUN_1458f792e(undefined8 *param_1)

{
  FUN_141331f26();
  *param_1 = &PTR_FUN_14b458040;
  param_1[5] = &PTR_LAB_14b4584e0;
  param_1[6] = &PTR_LAB_14b458520;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  return param_1;
}



// FUNCTION 1458f796e FUN_1458f796e body=500 status=ok
// SIG undefined FUN_1458f796e(void)

void FUN_1458f796e(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [4];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144a7484c(param_2 + 0x28,local_98);
  local_78 = *(undefined4 *)(param_2 + 0x10);
  uStack_74 = *(undefined4 *)(param_2 + 0x14);
  uStack_70 = (int)*(undefined8 *)(param_2 + 0x18);
  uStack_6c = (int)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  local_68 = *(undefined8 *)(param_2 + 0x20);
  uStack_60 = 0;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0x3ff0000000000000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  if (param_3 == '\0') {
    lVar6 = FUN_1458f7b63(param_1[6]);
  }
  else {
    plVar1 = param_1 + 0x12;
    iVar3 = (int)param_1[0x14];
    if ((-1 < (longlong)iVar3) && (iVar3 < (int)param_1[0x13])) {
      lVar6 = *(longlong *)(*plVar1 + (longlong)iVar3 * 8);
      *(byte *)(lVar6 + 0x1f8) = *(byte *)(lVar6 + 0x1f8) | 1;
      puVar8 = local_98;
      puVar9 = (undefined8 *)(lVar6 + 0x240);
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      goto LAB_1458f7a34;
    }
    lVar6 = FUN_1458f7b63(param_1[6]);
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar6);
    }
    iVar3 = (int)param_1[0x13];
    *(uint *)(param_1 + 0x13) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0x9c) < iVar3 + 1U) {
      FUN_1458f7c16(plVar1,iVar3);
    }
    lVar7 = *plVar1;
    *(longlong *)(lVar7 + (longlong)iVar3 * 8) = lVar6;
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar6);
      lVar6 = *(longlong *)(lVar7 + (longlong)iVar3 * 8);
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1,lVar6,local_98,0);
LAB_1458f7a34:
  uVar4 = FUN_141331fc4();
  uVar5 = FUN_140a2e4c6();
  FUN_144a54316(uVar5,param_2,uVar4,lVar6);
  uVar2 = (*(uint *)(lVar6 + 0x2d4) & 0xfffffffd) + (uint)*(byte *)(param_2 + 0x54) * 2;
  *(uint *)(lVar6 + 0x2d4) = uVar2;
  uVar2 = (uVar2 & 0xfffffffb) + (uint)*(byte *)(param_2 + 0x55) * 4;
  *(uint *)(lVar6 + 0x2d4) = uVar2;
  *(uint *)(lVar6 + 0x2d4) = (uVar2 & 0xfffffff7) + (uint)*(byte *)(param_2 + 0x56) * 8;
  FUN_14045627c(lVar6,1,1);
  FUN_1448215fa(lVar6);
  *(int *)(param_1 + 0x14) = (int)param_1[0x14] + 1;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f7b63 FUN_1458f7b63 body=177 status=ok
// SIG undefined FUN_1458f7b63(void)

undefined8 FUN_1458f7b63(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_141331fc4();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f7c16 FUN_1458f7c16 body=132 status=ok
// SIG undefined FUN_1458f7c16(void)

void FUN_1458f7c16(longlong param_1,int param_2)

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



// FUNCTION 1458f7ca0 FUN_1458f7ca0 body=101 status=ok
// SIG undefined FUN_1458f7ca0(void)

undefined8 FUN_1458f7ca0(ushort *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if (((*(uint *)(param_1 + 2) & 0x80000001) == 1) &&
     (((int)*(uint *)(param_1 + 2) / 2 & 0x80000001U) == 1)) {
LAB_1458f7d01:
    uVar3 = 0;
  }
  else {
    uVar2 = (ulonglong)*param_1;
    if ((int)(&DAT_14ca814b8)[uVar2 * 0xf] < 3) {
      cVar1 = FUN_14743086d();
      if (cVar1 == '\0') goto LAB_1458f7d01;
      uVar2 = (ulonglong)*param_1;
    }
    uVar2 = CONCAT71((int7)(uVar2 * 0x3c >> 8),
                     *(undefined1 *)((longlong)&DAT_14ca814c8 + uVar2 * 0x3c + 1)) &
            0xffffffffffffff10;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 4);
  }
  return uVar3;
}



// FUNCTION 1458f7d0c FUN_1458f7d0c body=101 status=ok
// SIG undefined FUN_1458f7d0c(void)

undefined8 FUN_1458f7d0c(ushort *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if (((*(uint *)(param_1 + 2) & 0x80000001) == 1) &&
     (((int)*(uint *)(param_1 + 2) / 2 & 0x80000001U) == 1)) {
LAB_1458f7d6d:
    uVar3 = 0;
  }
  else {
    uVar2 = (ulonglong)*param_1;
    if ((int)(&DAT_14ca814b8)[uVar2 * 0xf] < 3) {
      cVar1 = FUN_14743086d();
      if (cVar1 == '\0') goto LAB_1458f7d6d;
      uVar2 = (ulonglong)*param_1;
    }
    uVar2 = CONCAT71((int7)(uVar2 * 0x3c >> 8),
                     *(undefined1 *)((longlong)&DAT_14ca814c8 + uVar2 * 0x3c + 1)) &
            0xffffffffffffff10;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 4);
  }
  return uVar3;
}



// FUNCTION 1458f7d72 FUN_1458f7d72 body=439 status=ok
// SIG undefined FUN_1458f7d72(void)

void FUN_1458f7d72(longlong param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      plVar6 = (longlong *)(param_1 + 8);
      do {
        puVar1 = (ulonglong *)(*plVar6 + (longlong)iVar4 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 == (ulonglong *)0x0) {
            return;
          }
          if (puVar1 + 1 == (ulonglong *)0x0) {
            return;
          }
          iVar4 = (int)param_3[1];
          if ((longlong)iVar4 == 0) goto LAB_1458f7ea6;
          lVar3 = *param_3;
          iVar8 = 1;
          lVar9 = 0;
          lVar5 = 0;
          goto LAB_1458f7e27;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
    }
  }
  return;
  while( true ) {
    lVar5 = lVar5 + 0x100000000;
    iVar8 = iVar8 + 1;
    lVar9 = lVar9 + 8;
    if ((longlong)iVar4 << 3 == lVar9) break;
LAB_1458f7e27:
    if (*(ulonglong *)(lVar3 + lVar9) == puVar1[1]) {
      if (iVar8 != 0) {
        iVar8 = iVar4 - iVar8;
        if (iVar8 != 0) {
          iVar7 = 1;
          if (iVar8 < 1) {
            iVar7 = iVar8;
          }
          memmove((void *)(lVar3 + (lVar5 >> 0x20) * 8),
                  (void *)(lVar3 + (longlong)(iVar4 - iVar7) * 8),(longlong)iVar7 << 3);
          iVar4 = (int)param_3[1];
        }
        *(int *)(param_3 + 1) = iVar4 + -1;
      }
      break;
    }
  }
LAB_1458f7ea6:
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar3 + ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)(*plVar6 + (longlong)iVar4 * 0x18) == param_2) {
          FUN_1458f7f2a(plVar6,iVar4);
          return;
        }
        iVar4 = *(int *)(*plVar6 + (longlong)iVar4 * 0x18 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 1458f7f2a FUN_1458f7f2a body=85 status=ok
// SIG undefined FUN_1458f7f2a(void)

void FUN_1458f7f2a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_1458f7f80();
  return;
}



// FUNCTION 1458f7f80 FUN_1458f7f80 body=112 status=ok
// SIG undefined FUN_1458f7f80(void)

void FUN_1458f7f80(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1458f7ff0 FUN_1458f7ff0 body=500 status=ok
// SIG undefined FUN_1458f7ff0(void)

undefined8 * FUN_1458f7ff0(ushort *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = *param_1;
  if ((uVar2 & 1) == 0) {
    if (*(longlong *)param_1 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
    }
    else {
      FUN_1458f81e6(param_2);
    }
    *(undefined4 *)(param_2 + 2) = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    if (param_1[1] != 0) {
      FUN_140958f00(param_2);
      uVar2 = *param_1;
    }
    local_60 = param_2;
    if ((uVar2 & 1) == 0) {
      plVar5 = *(longlong **)param_1;
      if ((plVar5 != (longlong *)0x0) && (lVar6 = plVar5[1], (longlong)(int)lVar6 != 0)) {
        lVar7 = *plVar5;
        lVar9 = 0;
        do {
          local_58 = *(ulonglong *)(lVar7 + lVar9);
          local_50 = lVar7 + 8 + lVar9;
          FUN_1427b399a(&local_60,&local_58);
          lVar9 = lVar9 + 0x18;
        } while ((longlong)(int)lVar6 * 0x18 != lVar9);
      }
    }
    else {
      uVar3 = param_1[1];
      uVar10 = (ulonglong)uVar3;
      iVar4 = *(int *)(param_1 + 2);
      if ((uVar2 & 2) == 0) {
        if (uVar10 != 0) {
          puVar8 = (ulonglong *)
                   ((longlong)iVar4 * 0xc +
                   **(longlong **)(&DAT_14c927ae8 + (ulonglong)(uVar2 & 0xfffc) * 2));
          puVar1 = (ulonglong *)((longlong)puVar8 + uVar10 * 0xc);
          do {
            local_58 = *puVar8;
            local_50 = (ulonglong)CONCAT24(*param_1 >> 2,(int)puVar8[1]) | 0x8000000000000000;
            FUN_1427b399a(&local_60,&local_58);
            puVar8 = (ulonglong *)((longlong)puVar8 + 0xc);
          } while (puVar8 != puVar1);
        }
      }
      else if (uVar10 != 0) {
        lVar6 = (*(longlong **)(&DAT_14c927ae8 + (ulonglong)(uVar2 & 0xfffc) * 2))[2];
        lVar7 = 0;
        do {
          uVar10 = *(ulonglong *)((longlong)iVar4 * 8 + lVar6 + lVar7);
          local_58 = uVar10 & 0xffffffff;
          local_50 = (ulonglong)(*param_1 >> 2) << 0x20 | uVar10 >> 0x20 | 0x8000000000000000;
          FUN_1427b399a(&local_60,&local_58);
          lVar7 = lVar7 + 8;
        } while ((ulonglong)uVar3 * 8 != lVar7);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1458f81e6 FUN_1458f81e6 body=77 status=ok
// SIG undefined FUN_1458f81e6(void)

undefined8 * FUN_1458f81e6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1458f8234(param_1,iVar1,0);
    FUN_1413320a9(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1458f8234 FUN_1458f8234 body=115 status=ok
// SIG undefined FUN_1458f8234(void)

void FUN_1458f8234(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1458f82a8 FUN_1458f82a8 body=216 status=ok
// SIG undefined FUN_1458f82a8(void)

undefined8 * FUN_1458f82a8(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f838e FUN_1458f838e body=24 status=ok
// SIG undefined FUN_1458f838e(void)

bool FUN_1458f838e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1458f83a6 FUN_1458f83a6 body=363 status=ok
// SIG undefined FUN_1458f83a6(void)

void FUN_1458f83a6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1458f8512(param_2);
  local_28 = FUN_144a126be(param_1);
  lVar5 = FUN_144a126be(param_1);
  FUN_1458f8580(lVar5 + 0x570,&local_38,param_1,FUN_145e04c58);
  lVar5 = FUN_144a126be(param_1);
  FUN_1458f8580(lVar5 + 0x588,&local_38,param_1,FUN_141565bf4);
  uVar4 = FUN_141332984(param_1);
  *(undefined1 *)(param_1 + 0xd0) = uVar4;
  FUN_1458f868e(&local_38,&local_28);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xd8) = local_38;
    plVar6 = *(longlong **)(param_1 + 0xe0);
    if (plVar6 == (longlong *)0x0) goto LAB_1458f846a;
    *(undefined8 *)(param_1 + 0xe0) = 0;
LAB_1458f84b7:
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1458f846a;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar6;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xd8) = local_38;
    plVar6 = *(longlong **)(param_1 + 0xe0);
    if (local_30 != plVar6) {
      *(longlong **)(param_1 + 0xe0) = local_30;
      if (plVar6 == (longlong *)0x0) goto LAB_1458f846a;
      goto LAB_1458f84b7;
    }
    LOCK();
    plVar6 = local_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1458f846a;
    (**(code **)*local_30)(local_30);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1458f846a:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f8512 FUN_1458f8512 body=108 status=ok
// SIG undefined FUN_1458f8512(void)

void FUN_1458f8512(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14011c7bc();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  lVar1 = FUN_14134816c(param_1,&local_18);
  if (lVar1 != 0) {
    FUN_14011c7bc();
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f8580 FUN_1458f8580 body=244 status=ok
// SIG undefined FUN_1458f8580(void)

undefined8
FUN_1458f8580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14ab18ff0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14ab1f470;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_141332804(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f8676 FUN_1458f8676 body=24 status=ok
// SIG undefined FUN_1458f8676(void)

bool FUN_1458f8676(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1458f868e FUN_1458f868e body=434 status=ok
// SIG undefined FUN_1458f868e(void)

undefined8 * FUN_1458f868e(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  FUN_1458f8842(puVar2,&local_30,*param_2);
  *puVar2 = &PTR_FUN_14ab1f4e0;
  *param_1 = puVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ab1f5b0;
  plVar3[2] = (longlong)puVar2;
  param_1[1] = plVar3;
  if (puVar2 == (undefined8 *)0x0) {
    local_30 = 0;
    goto LAB_1458f875e;
  }
  if (((puVar2[1] == 0) || (puVar2[2] == 0)) || (*(int *)(puVar2[2] + 8) < 1)) {
    if (plVar3 == (longlong *)0x0) {
      puVar2[1] = puVar2;
      plVar4 = (longlong *)puVar2[2];
      if (plVar4 != (longlong *)0x0) {
LAB_1458f87e4:
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
        puVar2[2] = plVar3;
        if (plVar3 != (longlong *)0x0) goto LAB_1458f874d;
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      puVar2[1] = puVar2;
      if ((longlong *)puVar2[2] != plVar3) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)puVar2[2];
        if (plVar4 != (longlong *)0x0) goto LAB_1458f87e4;
        puVar2[2] = plVar3;
      }
LAB_1458f874d:
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  local_30 = *param_1;
  plVar3 = (longlong *)param_1[1];
LAB_1458f875e:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_28 = plVar3;
  FUN_141332b2e(&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1458f8842 FUN_1458f8842 body=58 status=ok
// SIG undefined FUN_1458f8842(void)

undefined8 * FUN_1458f8842(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14aa75360;
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5,param_3);
  return param_1;
}



// FUNCTION 1458f887c FUN_1458f887c body=100 status=ok
// SIG undefined FUN_1458f887c(void)

int FUN_1458f887c(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_141332c04();
  if (iVar2 == -1) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_1458f89e6(param_1,iVar2);
    }
    lVar1 = *param_1;
    *(undefined8 *)(lVar1 + (longlong)iVar2 * 0x10) = *param_2;
    *(undefined8 *)(lVar1 + 8 + (longlong)iVar2 * 0x10) = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
  }
  return iVar2;
}



// FUNCTION 1458f88e0 FUN_1458f88e0 body=63 status=ok
// SIG undefined FUN_1458f88e0(void)

void FUN_1458f88e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1458f8920(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1458f8920 FUN_1458f8920 body=83 status=ok
// SIG undefined FUN_1458f8920(void)

ulonglong FUN_1458f8920(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 1458f8974 FUN_1458f8974 body=113 status=ok
// SIG undefined FUN_1458f8974(void)

void FUN_1458f8974(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 8 + (longlong)(int)param_2 * 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar4 = (int)param_1[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    iVar5 = 1;
    if (iVar6 < 1) {
      iVar5 = iVar6;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar2),
            (void *)((longlong)(iVar4 - iVar5) * 0x10 + lVar2),(longlong)iVar5 << 4);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 1458f89e6 FUN_1458f89e6 body=132 status=ok
// SIG undefined FUN_1458f89e6(void)

void FUN_1458f89e6(longlong param_1,int param_2)

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



// FUNCTION 1458f8a6c FUN_1458f8a6c body=355 status=ok
// SIG undefined FUN_1458f8a6c(void)

longlong *
FUN_1458f8a6c(longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)FUN_14001cc68(0x118,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b99ea70;
  plVar1 = plVar4 + 2;
  FUN_1458f8c08(plVar1,param_4,param_5,param_6);
  local_58 = plVar1;
  local_50 = plVar4;
  FUN_1458f8c96(&local_58,plVar1);
  FUN_141332d0e(plVar4 + 0x1c,param_1 + 8);
  lVar5 = FUN_141332cf8(*(undefined8 *)(param_3 + 0x10));
  if (lVar5 != 0) {
    lVar6 = FUN_144a2f878();
    if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
         == lVar6 + 0x30)) && (*(char *)(lVar5 + 0x178) == '\x03')) {
      uVar7 = FUN_140cf8aa6(lVar5);
      FUN_1458f8bd2(plVar4 + 0x17,uVar7);
    }
  }
  plVar3 = local_50;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f8bd2 FUN_1458f8bd2 body=54 status=ok
// SIG undefined FUN_1458f8bd2(void)

void FUN_1458f8bd2(longlong param_1,longlong param_2)

{
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    FUN_14485c47a(param_1 + 8);
    *(byte *)(param_1 + 0x24) = ((param_2 != 0) * '\x02' | *(byte *)(param_1 + 0x24) & 0xfc) + 1;
  }
  return;
}



// FUNCTION 1458f8c08 FUN_1458f8c08 body=141 status=ok
// SIG undefined FUN_1458f8c08(void)

undefined8 * FUN_1458f8c08(undefined8 *param_1)

{
  int iVar1;
  
  FUN_1412e4ed4();
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  iVar1 = DAT_14c7640cc + 1;
  *(int *)(param_1 + 0x19) = DAT_14c7640cc;
  DAT_14c7640cc = iVar1;
  *(byte *)((longlong)param_1 + 0xcc) = *(byte *)((longlong)param_1 + 0xcc) & 0xf0;
  *param_1 = &PTR_FUN_14b99ea90;
  param_1[4] = &PTR_FUN_14b99eab0;
  param_1[0x15] = &PTR_FUN_14b99ead0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return param_1;
}



// FUNCTION 1458f8c96 FUN_1458f8c96 body=162 status=ok
// SIG undefined FUN_1458f8c96(void)

void FUN_1458f8c96(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x48) != 0) && (*(longlong *)(param_2 + 0x50) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x50) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x48) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x50);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x48) = param_2;
    if (*(longlong **)(param_2 + 0x50) == plVar2) goto LAB_1458f8cd5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x50);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x50) = plVar2;
      goto LAB_1458f8cd5;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x50) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1458f8cd5:
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
                    /* WARNING: Could not recover jumptable at 0x0001458f8d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1458f8d46 FUN_1458f8d46 body=59 status=ok
// SIG undefined FUN_1458f8d46(void)

undefined8 * FUN_1458f8d46(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5d11c0;
  FUN_14051f4c4(param_1 + 6);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 1458f8d81 FUN_1458f8d81 body=165 status=ok
// SIG undefined FUN_1458f8d81(void)

void FUN_1458f8d81(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_141332e0b();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_141332dba(param_1,param_2);
  return;
}



// FUNCTION 1458f8e2c FUN_1458f8e2c body=38 status=ok
// SIG undefined FUN_1458f8e2c(void)

undefined8 FUN_1458f8e2c(undefined8 param_1,int param_2)

{
  FUN_1458f8e52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458f8e52 FUN_1458f8e52 body=574 status=ok
// SIG undefined FUN_1458f8e52(void)

void FUN_1458f8e52(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_149f61de0;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x29));
  plVar6 = param_1 + 0x1f;
  puVar3 = param_1 + 0x21;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = puVar3;
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x24);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar6;
  if ((iStack_54 != iVar5) || (uStack_60 != puVar3)) {
    do {
      lVar1 = *local_90;
      lVar4 = (longlong)iStack_74;
      puVar2 = *(undefined8 **)(lVar1 + 8 + lVar4 * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      *(undefined8 *)(lVar1 + lVar4 * 0x18 + 8) = 0;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar5) || ((undefined8 *)CONCAT44(uStack_7c,uStack_80) != puVar3)) ||
            (local_90 != plVar6));
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x29));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1410fef86(plVar6);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1410fef86(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1410feffa(param_1 + 0xb);
  puVar3 = (undefined8 *)param_1[10];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (param_1[2] != 0) {
    plVar6 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f9092 FUN_1458f9092 body=54 status=ok
// SIG undefined FUN_1458f9092(void)

longlong FUN_1458f9092(longlong param_1,int param_2)

{
  FUN_1458f90c8(param_1 + 0x80);
  FUN_1458f90c8(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458f90c8 FUN_1458f90c8 body=77 status=ok
// SIG undefined FUN_1458f90c8(void)

void FUN_1458f90c8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_1410ff070(param_1 + 0x28);
  FUN_1400b4e95(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458f9116 FUN_1458f9116 body=581 status=ok
// SIG undefined FUN_1458f9116(void)

void FUN_1458f9116(longlong param_1,longlong *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 ***pppuVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined4 local_90;
  undefined8 ***local_88;
  int local_80;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar8 = FUN_144a8069e(*(undefined8 *)(param_1 + 0x40));
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_b8 = local_b8 & 0xffffff00;
  local_90 = 0;
  FUN_1456bb102(&local_b8,uVar8);
  FUN_1447c3578(lVar3 + 0xd0,&local_88,&local_b8);
  uVar13 = FUN_144a7b41a(&local_88,0x40a00000);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar11 = &local_88;
    if (0x18 < local_70) {
      ppppuVar11 = (undefined8 ****)local_88;
    }
    (*pcVar4)(ppppuVar11);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88);
  }
  FUN_144a5ac3a(&local_b8);
  FUN_14133303b(&local_88,uVar8,uVar13);
  pppuVar7 = local_88;
  if ((longlong)local_80 != 0) {
    lVar10 = 0;
    do {
      if (*(char *)(lVar3 + 0x168) == '\x01') {
        FUN_14030a482(lVar3 + 0x108,&local_b8,*(longlong *)((longlong)pppuVar7 + lVar10),0);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1403e3958(param_2,iVar2);
        }
        lVar5 = *param_2;
        *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar2 * 0x18) = local_a8;
        puVar1 = (uint *)(lVar5 + (longlong)iVar2 * 0x18);
        *puVar1 = local_b8;
        puVar1[1] = uStack_b4;
        puVar1[2] = uStack_b0;
        puVar1[3] = uStack_ac;
      }
      else {
        lVar5 = *(longlong *)(*(longlong *)((longlong)pppuVar7 + lVar10) + 0x1c8);
        if (lVar5 == 0) {
          puVar9 = &DAT_14c8464e0;
          uVar13 = (undefined4)DAT_14c8464f0;
          uVar14 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          uVar13 = (undefined4)*(undefined8 *)(lVar5 + 0x270);
          uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x270) >> 0x20);
          puVar9 = (undefined8 *)(lVar5 + 0x260);
        }
        uVar8 = *puVar9;
        uVar6 = puVar9[1];
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1403e3958(param_2,iVar2);
        }
        lVar5 = *param_2;
        puVar9 = (undefined8 *)(lVar5 + (longlong)iVar2 * 0x18);
        *puVar9 = uVar8;
        puVar9[1] = uVar6;
        *(ulonglong *)(lVar5 + 0x10 + (longlong)iVar2 * 0x18) = CONCAT44(uVar14,uVar13);
      }
    } while (((int)param_2[1] < param_3) &&
            (bVar12 = (longlong)local_80 * 8 + -8 != lVar10, lVar10 = lVar10 + 8, bVar12));
  }
  if ((undefined8 ****)local_88 != (undefined8 ****)0x0) {
    FUN_1400020a8(local_88);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458f935c FUN_1458f935c body=71 status=ok
// SIG undefined FUN_1458f935c(void)

undefined4 FUN_1458f935c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_141333532();
  if (((char)uVar1 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x48) + 0x1d0) == '\x01')) {
    uVar2 = FUN_14097cfe8();
    uVar3 = FUN_140343d7a(param_1);
    FUN_14575b048(uVar2,uVar3);
  }
  return uVar1;
}



// FUNCTION 1458f93a4 FUN_1458f93a4 body=46 status=ok
// SIG undefined FUN_1458f93a4(void)

void FUN_1458f93a4(longlong param_1)

{
  FUN_1458f93d2(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1458f93d2 FUN_1458f93d2 body=41 status=ok
// SIG undefined FUN_1458f93d2(void)

void FUN_1458f93d2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1458f93fc(param_1);
    param_1 = param_1 + 0x118;
  }
  return;
}



// FUNCTION 1458f93fc FUN_1458f93fc body=159 status=ok
// SIG undefined FUN_1458f93fc(void)

void FUN_1458f93fc(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458f949c FUN_1458f949c body=186 status=ok
// SIG undefined FUN_1458f949c(void)

void FUN_1458f949c(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = FUN_1413336e6();
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_30);
  }
  FUN_14122166c(&local_30,param_3);
  iVar1 = DAT_14cab5ab0;
  lVar3 = (longlong)(int)DAT_14cab5ab0;
  DAT_14cab5ab0 = DAT_14cab5ab0 + 1;
  if (DAT_14cab5ab4 < DAT_14cab5ab0) {
    FUN_1458f9558(iVar1);
  }
  puVar2 = &DAT_14cab5a90;
  if (DAT_14cab5aa8 != (undefined2 *)0x0) {
    puVar2 = DAT_14cab5aa8;
  }
  puVar2[lVar3 * 3] = param_1;
  puVar2[lVar3 * 3 + 1] = param_2;
  puVar2[lVar3 * 3 + 2] = (short)param_3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f9558 FUN_1458f9558 body=128 status=ok
// SIG undefined FUN_1458f9558(void)

void FUN_1458f9558(int param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = DAT_14cab5ab0;
  if (param_1 <= (int)DAT_14cab5ab0) {
    if (DAT_14cab5ab0 < 5) {
      DAT_14cab5ab4 = 4;
    }
    else {
      lVar3 = (longlong)(int)DAT_14cab5ab0;
      if (4 < DAT_14cab5ab4) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 6,0);
      iVar2 = (int)(uVar4 / 6);
      DAT_14cab5ab4 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        DAT_14cab5ab4 = iVar2;
      }
    }
    FUN_1458f95d8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14cab5ab0);
}



// FUNCTION 1458f95d8 FUN_1458f95d8 body=147 status=ok
// SIG undefined FUN_1458f95d8(void)

void FUN_1458f95d8(int param_1,uint param_2)

{
  if (param_2 < 5) {
    if (DAT_14cab5aa8 == (void *)0x0) {
      return;
    }
    memmove(&DAT_14cab5a90,DAT_14cab5aa8,(longlong)param_1 * 6);
    param_1 = 0;
    param_2 = 0;
  }
  else if (DAT_14cab5aa8 == (void *)0x0) {
    FUN_1446efa72(&DAT_14cab5aa8,0,param_2,6);
    memmove(DAT_14cab5aa8,&DAT_14cab5a90,(longlong)param_1 * 6);
    return;
  }
  FUN_1446efa72(&DAT_14cab5aa8,param_1,param_2,6);
  return;
}



// FUNCTION 1458f966c FUN_1458f966c body=104 status=ok
// SIG undefined FUN_1458f966c(void)

void FUN_1458f966c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))();
    lVar3 = FUN_1458eaa58();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
      goto LAB_1458f9685;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1458f9685:
  *(longlong **)(param_1 + 0x890) = plVar4;
  FUN_141333d14(param_1,param_2);
  return;
}



// FUNCTION 1458f96d4 FUN_1458f96d4 body=57 status=ok
// SIG undefined FUN_1458f96d4(void)

void FUN_1458f96d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66468 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66468 = FUN_140002ddd(FUN_14650ed9c,uVar1,L"GbxStandInDef");
  }
  return;
}



// FUNCTION 1458f970e FUN_1458f970e body=455 status=ok
// SIG undefined FUN_1458f970e(void)

longlong * FUN_1458f970e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 0x158) != 0) {
    lVar8 = (longlong)*(int *)(param_1 + 0x158) * 0x28;
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x150) + 8);
    do {
      plVar1 = plVar7 + -1;
      lVar5 = FUN_14479d2ce(plVar1);
      if (lVar5 == 0) {
        if (*plVar7 != 0) {
          lVar5 = FUN_140007850();
          cVar4 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar5 == 0) || (cVar4 == '\0')) {
            FUN_14485c47a(plVar1,lVar5);
            if (lVar5 == 0) goto LAB_1458f985d;
          }
          else {
            uVar3 = *(uint *)(lVar5 + 0xc);
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar6 = 0;
            }
            if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(plVar1,lVar5);
            }
          }
          if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_1458f97a4;
        }
      }
      else {
LAB_1458f97a4:
        lVar6 = FUN_144a797b2();
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
          lVar6 = FUN_140789e1e();
          if ((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) {
            lVar9 = 0;
            if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                lVar6 + 0x30) {
              lVar9 = lVar5;
            }
            if ((lVar9 == 0) || (DAT_14c950c29 == '\0')) {
              if (lVar9 == 0) goto LAB_1458f985d;
            }
            else {
              FUN_1456cec3c(lVar9);
            }
            lVar6 = FUN_140789e1e();
            if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                lVar6 + 0x30)) {
              iVar2 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar2 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
                FUN_140789f3e(param_2,iVar2);
              }
              *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar5;
              if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(lVar5);
              }
            }
          }
        }
      }
LAB_1458f985d:
      plVar7 = plVar7 + 5;
      lVar8 = lVar8 + -0x28;
    } while (lVar8 != 0);
  }
  return param_2;
}



// FUNCTION 1458f98de FUN_1458f98de body=72 status=ok
// SIG undefined FUN_1458f98de(void)

undefined8 * FUN_1458f98de(undefined8 *param_1)

{
  FUN_140c444d0();
  *param_1 = &PTR_FUN_14a40ddf0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 1458f9926 FUN_1458f9926 body=40 status=ok
// SIG undefined FUN_1458f9926(void)

undefined8 FUN_1458f9926(undefined8 param_1,int param_2)

{
  FUN_1458f994e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458f994e FUN_1458f994e body=66 status=ok
// SIG undefined FUN_1458f994e(void)

void FUN_1458f994e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1ee290;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_141333e00(param_1 + 7);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458f9990 FUN_1458f9990 body=62 status=ok
// SIG undefined FUN_1458f9990(void)

void FUN_1458f9990(longlong param_1)

{
  FUN_1458f99ce(param_1,0);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458f99ce FUN_1458f99ce body=137 status=ok
// SIG undefined FUN_1458f99ce(void)

void FUN_1458f99ce(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != param_2) {
    FUN_1404ee4d0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0xe8) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0xe4)) && (*(int *)(param_1 + 0xe4) < 0x21)) {
    return;
  }
  uVar1 = 0x20;
  if (0x20 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0xe4) = uVar1;
  FUN_14008f53c(param_1 + 0xd0,0);
  return;
}



// FUNCTION 1458f9a58 FUN_1458f9a58 body=39 status=ok
// SIG undefined FUN_1458f9a58(void)

void * FUN_1458f9a58(void *param_1,int param_2)

{
  FUN_1458f9a80();
  if (param_2 != 0) {
    cohtml::Property::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 1458f9a80 FUN_1458f9a80 body=138 status=ok
// SIG undefined FUN_1458f9a80(void)

void FUN_1458f9a80(Property *param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_14b4559e0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_1458f9b0a(param_1 + 0x40);
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined ***)param_1 = &PTR_LAB_14b455710;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001458f9afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::Property::~Property(param_1);
  return;
}



// FUNCTION 1458f9b0a FUN_1458f9b0a body=53 status=ok
// SIG undefined FUN_1458f9b0a(void)

void FUN_1458f9b0a(longlong *param_1)

{
  FUN_1458f9b40();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458f9b40 FUN_1458f9b40 body=90 status=ok
// SIG undefined FUN_1458f9b40(void)

void FUN_1458f9b40(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1458f9bb8 FUN_1458f9bb8 body=130 status=ok
// SIG undefined FUN_1458f9bb8(void)

undefined8 * FUN_1458f9bb8(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b6bd690;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[3] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 4) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[5] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 6) = (int)plVar2[1];
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  return param_1;
}



// FUNCTION 1458f9c40 FUN_1458f9c40 body=221 status=ok
// SIG undefined FUN_1458f9c40(void)

longlong FUN_1458f9c40(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab2d48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14755309d;
    local_40 = FUN_14633ce66;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneTrackInstance",&DAT_14cab2d48,&DAT_14755309c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab2d48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458f9d26 FUN_1458f9d26 body=78 status=ok
// SIG undefined FUN_1458f9d26(void)

undefined8 * FUN_1458f9d26(undefined8 *param_1)

{
  memset(param_1,0,0x1e8);
  FUN_141333e36(param_1);
  *param_1 = &PTR_FUN_14b405510;
  *(undefined2 *)(param_1 + 0x3d) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1ea) = 1;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x34) = 1;
  return param_1;
}



// FUNCTION 1458f9d74 FUN_1458f9d74 body=28 status=ok
// SIG undefined FUN_1458f9d74(void)

undefined8 FUN_1458f9d74(longlong param_1)

{
  (**(code **)(param_1 + 0x20))
            ((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18),
             *(undefined4 *)(param_1 + 8));
  return 1;
}



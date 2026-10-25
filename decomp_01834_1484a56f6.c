// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1484a56f6 FUN_1484a56f6 body=126 status=ok
// SIG undefined FUN_1484a56f6(void)

void FUN_1484a56f6(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (-1 < param_2) {
    uVar2 = (ulonglong)(param_2 + 1) * 3;
    if ((uint)((int)param_1[3] * 0x200 + *(int *)((longlong)param_1 + 0x1c)) < uVar2) {
      uVar5 = (**(code **)(*param_1 + 0xc0))(param_1);
      lVar3 = param_1[3];
      iVar1 = *(int *)((longlong)param_1 + 0x1c);
      FUN_146bfd442(param_1 + 3,uVar2 & 0xffffffff);
      for (uVar4 = (int)lVar3 * 0x200 + iVar1; uVar4 < (uint)uVar2; uVar4 = uVar4 + 1) {
        *(undefined4 *)
         (*(longlong *)(param_1[4] + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4)
             = uVar5;
      }
    }
  }
  return;
}



// FUNCTION 1484a5774 FUN_1484a5774 body=71 status=ok
// SIG undefined FUN_1484a5774(void)

undefined8 * FUN_1484a5774(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aee5ec0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484a57bc FUN_1484a57bc body=138 status=ok
// SIG undefined FUN_1484a57bc(void)

void FUN_1484a57bc(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar3 = iVar1 + 1;
  *(uint *)(param_1 + 0x10) = uVar3;
  if (*(uint *)(param_1 + 0x14) < uVar3) {
    FUN_1484a59ea((longlong *)(param_1 + 8));
  }
  lVar2 = *(longlong *)(param_1 + 8);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(int *)(lVar2 + 0xc + lVar5) = param_3;
  lVar4 = 0;
  do {
    uVar3 = param_3 * 3 + (int)lVar4;
    *(undefined4 *)(lVar2 + lVar5 + lVar4 * 4) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar3 >> 9) * 8) +
          (ulonglong)(uVar3 & 0x1ff) * 4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  return;
}



// FUNCTION 1484a5846 FUN_1484a5846 body=238 status=ok
// SIG undefined FUN_1484a5846(void)

void FUN_1484a5846(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  
  iVar4 = *(int *)(param_3 + 1);
  iVar6 = *(int *)(param_1 + 0x20) + iVar4;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x24) < iVar6) {
    FUN_1484a5a70(plVar1);
    iVar4 = *(int *)(param_3 + 1);
  }
  if (iVar4 != 0) {
    piVar9 = (int *)*param_3;
    piVar2 = piVar9 + iVar4;
    do {
      iVar4 = *piVar9;
      iVar6 = *(int *)(param_1 + 0x20);
      uVar5 = iVar6 + 1;
      *(uint *)(param_1 + 0x20) = uVar5;
      if (*(uint *)(param_1 + 0x24) < uVar5) {
        FUN_1484a59ea(plVar1);
      }
      lVar3 = *plVar1;
      lVar8 = (longlong)iVar6 * 0x10;
      *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
      *(undefined8 *)(lVar3 + lVar8) = 0;
      *(int *)(lVar3 + 0xc + lVar8) = iVar4;
      lVar7 = 0;
      do {
        uVar5 = iVar4 * 3 + (int)lVar7;
        *(undefined4 *)(lVar3 + lVar8 + lVar7 * 4) =
             *(undefined4 *)
              (*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar5 >> 9) * 8) +
              (ulonglong)(uVar5 & 0x1ff) * 4);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      piVar9 = piVar9 + 1;
    } while (piVar9 != piVar2);
  }
  return;
}



// FUNCTION 1484a5936 FUN_1484a5936 body=179 status=ok
// SIG undefined FUN_1484a5936(void)

undefined8 FUN_1484a5936(longlong param_1,longlong param_2,byte param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar4 = (ulonglong)(param_3 ^ 1) * 0x10;
  lVar2 = (longlong)*(int *)(param_1 + 0x10 + lVar4);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 8 + lVar4);
    lVar3 = lVar2 * 0x10 + lVar4;
    do {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if (((-1 < (int)uVar1) &&
          (lVar2 = *(longlong *)(param_2 + 0x10),
          (int)uVar1 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 9) * 8) +
                             (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        lVar2 = 0;
        do {
          uVar5 = uVar1 * 3 + (int)lVar2;
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar5 >> 9) * 8) +
           (ulonglong)(uVar5 & 0x1ff) * 4) = *(undefined4 *)(lVar4 + lVar2 * 4);
          lVar2 = lVar2 + 1;
        } while (lVar2 != 3);
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != lVar3);
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 1484a59ea FUN_1484a59ea body=132 status=ok
// SIG undefined FUN_1484a59ea(void)

void FUN_1484a59ea(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1484a5a70 FUN_1484a5a70 body=95 status=ok
// SIG undefined FUN_1484a5a70(void)

void FUN_1484a5a70(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 1484a5ad0 FUN_1484a5ad0 body=68 status=ok
// SIG undefined FUN_1484a5ad0(void)

undefined8 * FUN_1484a5ad0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aee5fc0;
  FUN_1484a614c(param_1 + 4,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484a5b14 FUN_1484a5b14 body=122 status=ok
// SIG undefined FUN_1484a5b14(void)

longlong * FUN_1484a5b14(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar1[1] = 0;
  *plVar1 = (longlong)&PTR_FUN_14aee5fc0;
  FUN_1484a6020(plVar1 + 3);
  plVar1[2] = param_2;
  FUN_14848804c(plVar1,0);
  (**(code **)(*plVar1 + 0xb8))(plVar1,param_1);
  plVar1[3] = *(longlong *)(param_1 + 0x18);
  FUN_1484a6214(plVar1 + 4,param_1 + 0x20);
  return plVar1;
}



// FUNCTION 1484a5b8e FUN_1484a5b8e body=88 status=ok
// SIG undefined FUN_1484a5b8e(void)

undefined8 * FUN_1484a5b8e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14aee5fc0;
  FUN_1484a6020(puVar1 + 3);
  puVar1[2] = param_2;
  FUN_14848804c(puVar1,0);
  FUN_14848804c(puVar1,0);
  return puVar1;
}



// FUNCTION 1484a5be6 FUN_1484a5be6 body=205 status=ok
// SIG undefined FUN_1484a5be6(void)

longlong * FUN_1484a5be6(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  plVar3 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar3[1] = 0;
  *plVar3 = (longlong)&PTR_FUN_14aee5fc0;
  FUN_1484a6020(plVar3 + 3);
  plVar3[2] = param_3;
  FUN_14848804c(plVar3,0);
  FUN_14848804c(plVar3,0);
  (**(code **)(*plVar3 + 0xb8))(plVar3,param_1);
  iVar1 = *(int *)(param_2 + 0x18);
  if (0 < (longlong)iVar1) {
    uVar4 = 0;
    do {
      uVar2 = *(uint *)(*(longlong *)(param_2 + 0x10) + uVar4 * 4);
      if ((ulonglong)uVar2 != 0xffffffff) {
        *(undefined1 *)
         (*(longlong *)(plVar3[4] + (ulonglong)(uVar2 >> 9) * 8) + ((ulonglong)uVar2 & 0x1ff)) =
             *(undefined1 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar4 >> 9 & 0x7fffff) * 8) +
              (uVar4 & 0x1ff));
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)iVar1 != uVar4);
  }
  return plVar3;
}



// FUNCTION 1484a5cb4 FUN_1484a5cb4 body=143 status=ok
// SIG undefined FUN_1484a5cb4(void)

void FUN_1484a5cb4(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (0 < (longlong)iVar1) {
    uVar3 = 0;
    do {
      lVar2 = (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + uVar3 * 4);
      if (lVar2 <= (longlong)uVar3 && lVar2 != -1) {
        FUN_1484a639e(param_1 + 0x18,
                      (ulonglong)((uint)uVar3 & 0x1ff) +
                      *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar3 >> 9 & 0x7fffff) * 8));
      }
      uVar3 = uVar3 + 1;
    } while ((longlong)iVar1 != uVar3);
  }
  FUN_1484a62c6(param_1 + 0x18,
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x140) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x144));
  return;
}



// FUNCTION 1484a5d4a FUN_1484a5d4a body=362 status=ok
// SIG undefined FUN_1484a5d4a(void)

undefined8 FUN_1484a5d4a(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_3 + 0xa8);
  lVar2 = param_3 + 0xb8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_3 + 0xd0) == 0) {
    uVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar9 = *(uint *)(param_3 + 0xd0);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  uStack_74 = uStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  uVar6 = (ulonglong)uStack_54;
  local_90 = plVar1;
  if ((uStack_54 != uVar9) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *local_90;
      lVar8 = (longlong)(int)uVar6 * 0x10;
      cVar5 = (**(code **)(*param_2 + 0x38))(param_2,*(undefined4 *)(lVar4 + lVar8),&local_68,1);
      if (cVar5 == '\0') {
        uVar7 = 0;
        goto LAB_1484a5dee;
      }
      uVar3 = *(uint *)(lVar4 + lVar8 + 4);
      *(undefined1 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar3 >> 9) * 8) +
       (ulonglong)(uVar3 & 0x1ff)) = (undefined1)local_68;
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
      uVar6 = (ulonglong)uStack_74;
    } while ((CONCAT44(uStack_7c,uStack_80) != lVar2 || uStack_74 != uVar9) || local_90 != plVar1);
  }
  uVar7 = CONCAT71((int7)(uVar6 >> 8),1);
LAB_1484a5dee:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1484a5f0e FUN_1484a5f0e body=56 status=ok
// SIG undefined FUN_1484a5f0e(void)

undefined8 * FUN_1484a5f0e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = &PTR_FUN_14aee6090;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 1484a5f46 FUN_1484a5f46 body=110 status=ok
// SIG undefined FUN_1484a5f46(void)

void FUN_1484a5f46(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  FUN_1484a639e(param_1 + 0x18,
                (ulonglong)(*(uint *)(param_2 + 0x14) & 0x1ff) +
                *(longlong *)
                 (*(longlong *)(param_1 + 0x20) + (ulonglong)(*(uint *)(param_2 + 0x14) >> 9) * 8),
                *(undefined4 *)(param_2 + 0x24));
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 == 0xffffffff) {
    return;
  }
  FUN_1484a639e(param_1 + 0x18,
                (ulonglong)(uVar1 & 0x1ff) +
                *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar1 >> 9) * 8),
                *(undefined4 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1484a5fb8 FUN_1484a5fb8 body=94 status=ok
// SIG undefined FUN_1484a5fb8(void)

void FUN_1484a5fb8(longlong param_1,uint *param_2)

{
  FUN_1484a639e(param_1 + 0x18,
                ((ulonglong)*param_2 & 0x1ff) +
                *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(*param_2 >> 9) * 8),
                param_2[5]);
  FUN_1484a639e(param_1 + 0x18,
                ((ulonglong)*param_2 & 0x1ff) +
                *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(*param_2 >> 9) * 8),
                param_2[6]);
  return;
}



// FUNCTION 1484a6020 FUN_1484a6020 body=97 status=ok
// SIG undefined FUN_1484a6020(void)

undefined8 * FUN_1484a6020(undefined8 *param_1)

{
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _Dst = (void *)FUN_14001cc68(0x200);
  memset(_Dst,0,0x200);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_1484a60c6(param_1 + 1,0);
  *(void **)param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 1484a6082 FUN_1484a6082 body=68 status=ok
// SIG undefined FUN_1484a6082(void)

undefined8 * FUN_1484a6082(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aee5fc0;
  FUN_1484a614c(param_1 + 4,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484a60c6 FUN_1484a60c6 body=132 status=ok
// SIG undefined FUN_1484a60c6(void)

void FUN_1484a60c6(longlong param_1,int param_2)

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



// FUNCTION 1484a614c FUN_1484a614c body=103 status=ok
// SIG undefined FUN_1484a614c(void)

void FUN_1484a614c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  if (0 < (longlong)(int)lVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar1 != lVar2);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) == param_2) {
      return;
    }
    FUN_1484a61b4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1484a61b4 FUN_1484a61b4 body=95 status=ok
// SIG undefined FUN_1484a61b4(void)

void FUN_1484a61b4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1484a6214 FUN_1484a6214 body=176 status=ok
// SIG undefined FUN_1484a6214(void)

longlong * FUN_1484a6214(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != param_1) {
    uVar1 = *(uint *)(param_2 + 1);
    uVar3 = (ulonglong)uVar1;
    FUN_1484a614c(param_1,uVar3);
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3);
    }
    if (*(int *)((longlong)param_1 + 0xc) < (int)uVar1) {
      FUN_1484a61b4(param_1,uVar1);
    }
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        _Dst = (void *)FUN_14001cc68(0x200,0x10);
        memcpy(_Dst,*(void **)(*param_2 + uVar4 * 8),0x200);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1484a60c6(param_1,iVar2);
        }
        *(void **)(*param_1 + (longlong)iVar2 * 8) = _Dst;
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  return param_1;
}



// FUNCTION 1484a62c6 FUN_1484a62c6 body=215 status=ok
// SIG undefined FUN_1484a62c6(void)

void FUN_1484a62c6(int *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  void *_Dst;
  int iVar4;
  int iVar5;
  
  if (*param_1 * 0x200 + param_1[1] != param_2) {
    uVar2 = param_2 + 0x1ff;
    if (-1 < (int)param_2) {
      uVar2 = param_2;
    }
    uVar3 = (((int)uVar2 >> 9) + 1) - (uint)((param_2 & 0x1ff) == 0);
    uVar2 = 1;
    if (1 < (int)uVar3) {
      uVar2 = uVar3;
    }
    puVar1 = (uint *)(param_1 + 4);
    iVar5 = uVar2 - *puVar1;
    if (iVar5 == 0 || (int)uVar2 < (int)*puVar1) {
      if (uVar2 < *puVar1) {
        FUN_1484a648e();
      }
    }
    else {
      do {
        _Dst = (void *)FUN_14001cc68(0x200);
        memset(_Dst,0,0x200);
        iVar4 = param_1[4];
        param_1[4] = iVar4 + 1U;
        if ((uint)param_1[5] < iVar4 + 1U) {
          FUN_1484a60c6(param_1 + 2,iVar4);
        }
        *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar4 * 8) = _Dst;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = (param_2 - 1 & 0x1ff) + 1;
    if (param_2 == 0) {
      iVar5 = 0;
    }
    iVar4 = (int)(param_2 - 1) >> 9;
    if (param_2 == 0) {
      iVar4 = 0;
    }
    *param_1 = iVar4;
    param_1[1] = iVar5;
  }
  return;
}



// FUNCTION 1484a639e FUN_1484a639e body=89 status=ok
// SIG undefined FUN_1484a639e(void)

void FUN_1484a639e(int *param_1,undefined1 *param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1 * 0x200 + param_1[1];
  uVar2 = (uint)param_3;
  if (uVar1 != uVar2) {
    if (uVar2 <= uVar1) {
      *(undefined1 *)
       (*(longlong *)(*(longlong *)(param_1 + 2) + (param_3 >> 9 & 0x7fffff) * 8) +
       (ulonglong)(uVar2 & 0x1ff)) = *param_2;
      return;
    }
    FUN_1484a62c6(param_1,param_3 & 0xffffffff);
  }
  FUN_1484a63f8(param_1,param_2);
  return;
}



// FUNCTION 1484a63f8 FUN_1484a63f8 body=150 status=ok
// SIG undefined FUN_1484a63f8(void)

void FUN_1484a63f8(int *param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  uint uVar3;
  
  iVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar3 == 0x200) {
    iVar1 = param_1[4];
    if (iVar2 == iVar1 + -1) {
      _Dst = (void *)FUN_14001cc68(0x200);
      memset(_Dst,0,0x200);
      param_1[4] = iVar1 + 1U;
      if ((uint)param_1[5] < iVar1 + 1U) {
        FUN_1484a60c6(param_1 + 2,iVar1);
      }
      *(void **)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = _Dst;
      iVar2 = *param_1;
    }
    iVar2 = iVar2 + 1;
    *param_1 = iVar2;
    param_1[1] = 0;
    uVar3 = 0;
  }
  *(undefined1 *)
   (*(longlong *)(*(longlong *)(param_1 + 2) + (longlong)iVar2 * 8) + (ulonglong)uVar3) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}



// FUNCTION 1484a648e FUN_1484a648e body=76 status=ok
// SIG undefined FUN_1484a648e(void)

void FUN_1484a648e(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)param_2 < (int)uVar1) {
    uVar3 = (ulonglong)param_2;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + uVar3 * 8) != 0) {
        FUN_1400020a8();
        lVar2 = *param_1;
      }
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
      uVar1 = *(uint *)(param_1 + 1);
    } while ((longlong)uVar3 < (longlong)(int)uVar1);
  }
  if (uVar1 != param_2) {
    *(uint *)(param_1 + 1) = param_2;
  }
  return;
}



// FUNCTION 1484a64da FUN_1484a64da body=126 status=ok
// SIG undefined FUN_1484a64da(void)

void FUN_1484a64da(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((-1 < (int)param_2) &&
     ((uint)((int)param_1[3] * 0x200 + *(int *)((longlong)param_1 + 0x1c)) <= param_2)) {
    uVar3 = (**(code **)(*param_1 + 0xc0))(param_1);
    lVar2 = param_1[3];
    iVar1 = *(int *)((longlong)param_1 + 0x1c);
    FUN_1484a62c6(param_1 + 3,param_2 + 1);
    for (uVar4 = (int)lVar2 * 0x200 + iVar1; uVar4 <= param_2; uVar4 = uVar4 + 1) {
      *(undefined1 *)
       (*(longlong *)(param_1[4] + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff)) =
           uVar3;
    }
  }
  return;
}



// FUNCTION 1484a6558 FUN_1484a6558 body=71 status=ok
// SIG undefined FUN_1484a6558(void)

undefined8 * FUN_1484a6558(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aee6090;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484a65a0 FUN_1484a65a0 body=96 status=ok
// SIG undefined FUN_1484a65a0(void)

void FUN_1484a65a0(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  lVar3 = (longlong)iVar1;
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1484a6752((longlong *)(param_1 + 8),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
  *(uint *)(lVar2 + 4 + lVar3 * 8) = param_3;
  *(undefined1 *)(lVar2 + lVar3 * 8) =
       *(undefined1 *)
        (*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(param_3 >> 9) * 8) +
        (ulonglong)(param_3 & 0x1ff));
  return;
}



// FUNCTION 1484a6600 FUN_1484a6600 body=193 status=ok
// SIG undefined FUN_1484a6600(void)

void FUN_1484a6600(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar5 = (int)param_3[1];
  iVar6 = *(int *)(param_1 + 0x20) + iVar5;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x24) < iVar6) {
    FUN_1484a67d8(plVar1);
    iVar5 = (int)param_3[1];
  }
  if (iVar5 != 0) {
    lVar3 = *param_3;
    lVar7 = 0;
    do {
      uVar2 = *(uint *)(lVar3 + lVar7);
      iVar6 = *(int *)(param_1 + 0x20);
      lVar8 = (longlong)iVar6;
      *(uint *)(param_1 + 0x20) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x24) < iVar6 + 1U) {
        FUN_1484a6752(plVar1,iVar6);
      }
      lVar4 = *plVar1;
      *(undefined8 *)(lVar4 + lVar8 * 8) = 0;
      *(uint *)(lVar4 + 4 + lVar8 * 8) = uVar2;
      *(undefined1 *)(lVar4 + lVar8 * 8) =
           *(undefined1 *)
            (*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar2 >> 9) * 8) +
            (ulonglong)(uVar2 & 0x1ff));
      lVar7 = lVar7 + 4;
    } while ((longlong)iVar5 * 4 != lVar7);
  }
  return;
}



// FUNCTION 1484a66c2 FUN_1484a66c2 body=144 status=ok
// SIG undefined FUN_1484a66c2(void)

undefined8 FUN_1484a66c2(longlong param_1,longlong param_2,byte param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (ulonglong)(param_3 ^ 1) * 0x10;
  lVar3 = (longlong)*(int *)(param_1 + 0x10 + lVar5);
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 8 + lVar5);
    lVar4 = lVar3 * 8;
    lVar3 = 0;
    do {
      uVar1 = *(uint *)(lVar5 + 4 + lVar3);
      if ((-1 < (int)uVar1) &&
         (lVar2 = *(longlong *)(param_2 + 0x10),
         (int)uVar1 < *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144))) {
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar2 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                               (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe) {
          *(undefined1 *)
           (*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar1 >> 9) * 8) +
           (ulonglong)(uVar1 & 0x1ff)) = *(undefined1 *)(lVar5 + lVar3);
        }
      }
      lVar3 = lVar3 + 8;
    } while (lVar4 != lVar3);
  }
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
}



// FUNCTION 1484a6752 FUN_1484a6752 body=132 status=ok
// SIG undefined FUN_1484a6752(void)

void FUN_1484a6752(longlong param_1,int param_2)

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



// FUNCTION 1484a67d8 FUN_1484a67d8 body=95 status=ok
// SIG undefined FUN_1484a67d8(void)

void FUN_1484a67d8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1484a6838 FUN_1484a6838 body=239 status=ok
// SIG undefined FUN_1484a6838(void)

undefined4 FUN_1484a6838(longlong *param_1,int param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_38 [32];
  undefined4 auStack_18 [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar2 = (ulonglong)(param_3 & 0x1ff);
  if (*(int *)(lVar1 + uVar2 * 0xc) == param_2) {
    lVar3 = 0;
  }
  else {
    lVar3 = 1;
    if (*(int *)(lVar1 + uVar2 * 0xc + 4) != param_2) {
      lVar3 = (ulonglong)(*(int *)(lVar1 + 8 + uVar2 * 0xc) == param_2) * 3 + -1;
    }
  }
  uVar5 = param_3 * 3 + 2;
  lVar1 = *(longlong *)(*(longlong *)param_1[1] + 0x78);
  uVar4 = param_3 * 3 + 1;
  auStack_18[1] =
       *(undefined4 *)
        (*(longlong *)(lVar1 + (ulonglong)(param_3 * 3 >> 9) * 8) +
        (ulonglong)(param_3 * 3 & 0x1ff) * 4);
  auStack_18[2] =
       *(undefined4 *)
        (*(longlong *)(lVar1 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4);
  auStack_18[3] =
       *(undefined4 *)
        (*(longlong *)(lVar1 + (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return auStack_18[lVar3 + 1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a6928 FUN_1484a6928 body=239 status=ok
// SIG undefined FUN_1484a6928(void)

undefined4 FUN_1484a6928(longlong *param_1,int param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_38 [32];
  undefined4 auStack_18 [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar2 = (ulonglong)(param_3 & 0x1ff);
  if (*(int *)(lVar1 + uVar2 * 0xc) == param_2) {
    lVar3 = 0;
  }
  else {
    lVar3 = 1;
    if (*(int *)(lVar1 + uVar2 * 0xc + 4) != param_2) {
      lVar3 = (ulonglong)(*(int *)(lVar1 + 8 + uVar2 * 0xc) == param_2) * 3 + -1;
    }
  }
  uVar5 = param_3 * 3 + 2;
  lVar1 = *(longlong *)(*(longlong *)param_1[1] + 0x78);
  uVar4 = param_3 * 3 + 1;
  auStack_18[1] =
       *(undefined4 *)
        (*(longlong *)(lVar1 + (ulonglong)(param_3 * 3 >> 9) * 8) +
        (ulonglong)(param_3 * 3 & 0x1ff) * 4);
  auStack_18[2] =
       *(undefined4 *)
        (*(longlong *)(lVar1 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4);
  auStack_18[3] =
       *(undefined4 *)
        (*(longlong *)(lVar1 + (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return auStack_18[lVar3 + 1];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a6a18 FUN_1484a6a18 body=41 status=ok
// SIG undefined FUN_1484a6a18(void)

void FUN_1484a6a18(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146be6294(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 1484a6a42 FUN_1484a6a42 body=106 status=ok
// SIG undefined FUN_1484a6a42(void)

undefined8 FUN_1484a6a42(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x88,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xf0f0f0f0f0f0f0f1),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x88)) {
    uVar4 = uVar2 / 0x88 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x88,8);
  }
  return uVar3;
}



// FUNCTION 1484a6aac FUN_1484a6aac body=150 status=ok
// SIG undefined FUN_1484a6aac(void)

void FUN_1484a6aac(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1484a6b44 FUN_1484a6b44 body=101 status=ok
// SIG undefined FUN_1484a6b44(void)

int FUN_1484a6b44(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2;
        if (((*(int *)(lVar3 + lVar5 * 0x18) == *param_3) &&
            (lVar1 = lVar3 + lVar5 * 0x18, *(int *)(lVar1 + 4) == param_3[1])) &&
           (*(int *)(lVar1 + 8) == param_3[2])) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x10 + lVar5 * 0x18);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 1484a6baa FUN_1484a6baa body=308 status=ok
// SIG undefined FUN_1484a6baa(void)

undefined4 *
FUN_1484a6baa(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140d95230(param_1,local_50);
  puVar1 = (uint *)param_3[1];
  uVar6 = *(uint *)*param_3;
  *local_48 = uVar6;
  uVar7 = puVar1[1];
  uVar2 = puVar1[2];
  uVar3 = puVar1[3];
  local_48[2] = *puVar1;
  local_48[3] = uVar7;
  local_48[4] = uVar2;
  local_48[5] = uVar3;
  *(undefined8 *)(local_48 + 6) = *(undefined8 *)(puVar1 + 4);
  local_48[8] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar4 = FUN_140d95190(param_1,uVar6,local_48);
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar7) {
      uVar5 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      local_48[9] = uVar6;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_48[8] = *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar6) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_140d9541a(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a6ce0 FUN_1484a6ce0 body=138 status=ok
// SIG undefined FUN_1484a6ce0(void)

void FUN_1484a6ce0(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1484a6d6a FUN_1484a6d6a body=91 status=ok
// SIG undefined FUN_1484a6d6a(void)

void FUN_1484a6d6a(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_146b9c0e2(param_1 + 0x18,
                (*(int *)(*(longlong *)(param_1 + 0x10) + 0x20) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x24)) * 3);
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    uVar2 = 0;
    do {
      lVar3 = 0;
      do {
        *(undefined8 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar2 * 8) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x200);
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < (ulonglong)(longlong)iVar1);
  }
  return;
}



// FUNCTION 1484a6dc6 FUN_1484a6dc6 body=68 status=ok
// SIG undefined FUN_1484a6dc6(void)

undefined8 * FUN_1484a6dc6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aee60c0;
  FUN_146bee5d0(param_1 + 4,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484a6e0a FUN_1484a6e0a body=113 status=ok
// SIG undefined FUN_1484a6e0a(void)

undefined8 * FUN_1484a6e0a(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14aee60c0;
  puVar1[2] = param_2;
  FUN_146bee4b2(puVar1 + 3);
  FUN_1484a6d6a(puVar1);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  FUN_146c453d6(puVar1 + 4,param_1 + 0x20);
  return puVar1;
}



// FUNCTION 1484a6e7c FUN_1484a6e7c body=84 status=ok
// SIG undefined FUN_1484a6e7c(void)

undefined8 * FUN_1484a6e7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14aee60c0;
  puVar1[2] = param_2;
  FUN_146bee4b2(puVar1 + 3);
  FUN_1484a6d6a(puVar1);
  FUN_1484a6d6a(puVar1);
  return puVar1;
}



// FUNCTION 1484a6ed0 FUN_1484a6ed0 body=110 status=ok
// SIG undefined FUN_1484a6ed0(void)

undefined8 * FUN_1484a6ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14aee60c0;
  puVar1[2] = param_3;
  FUN_146bee4b2(puVar1 + 3);
  FUN_1484a6d6a(puVar1);
  FUN_1484a6d6a(puVar1);
  FUN_1484a7540(puVar1,param_2,param_1);
  return puVar1;
}



// FUNCTION 1484a6f3e FUN_1484a6f3e body=173 status=ok
// SIG undefined FUN_1484a6f3e(void)

void FUN_1484a6f3e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  lVar2 = param_2[1];
  if (0 < (longlong)(int)lVar2) {
    iVar5 = 0;
    lVar4 = 0;
    do {
      iVar1 = *(int *)(*param_2 + lVar4 * 4);
      if (iVar1 <= lVar4 && (longlong)iVar1 != -1) {
        iVar3 = 0;
        do {
          FUN_146b9c256(param_1 + 0x18,
                        (ulonglong)((iVar5 + iVar3 & 0x1ffU) << 3) +
                        *(longlong *)
                         (*(longlong *)(param_1 + 0x20) +
                         (ulonglong)((uint)(iVar5 + iVar3) >> 9) * 8),iVar1 * 3 + iVar3);
          iVar3 = iVar3 + 1;
        } while (iVar3 != 3);
      }
      lVar4 = lVar4 + 1;
      iVar5 = iVar5 + 3;
    } while (lVar4 != (int)lVar2);
  }
  FUN_146b9c0e2(param_1 + 0x18,
                (*(int *)(*(longlong *)(param_1 + 0x10) + 0x20) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x24)) * 3);
  return;
}



// FUNCTION 1484a6ff2 FUN_1484a6ff2 body=377 status=ok
// SIG undefined FUN_1484a6ff2(void)

undefined8 FUN_1484a6ff2(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_3 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_3[5] == 0) {
    uVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar8 = *(uint *)(param_3 + 5);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  uStack_74 = uStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  uVar4 = (ulonglong)uStack_54;
  local_90 = param_3;
  if ((uStack_54 != uVar8) || (uStack_60 != plVar1)) {
    do {
      lVar6 = *local_90;
      lVar9 = (longlong)(int)uVar4 * 0x10;
      cVar3 = (**(code **)(*param_2 + 0x38))(param_2,*(undefined4 *)(lVar6 + lVar9),&local_68,0x18);
      if (cVar3 == '\0') {
        uVar5 = 0;
        goto LAB_1484a7086;
      }
      iVar2 = *(int *)(lVar6 + lVar9 + 4);
      lVar6 = 0;
      do {
        uVar7 = iVar2 * 3 + (int)lVar6;
        *(undefined8 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar7 >> 9) * 8) +
         (ulonglong)(uVar7 & 0x1ff) * 8) = (&local_68)[lVar6];
        lVar6 = lVar6 + 1;
      } while (lVar6 != 3);
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
      uVar4 = (ulonglong)uStack_74;
    } while (((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || uStack_74 != uVar8) ||
             local_90 != param_3);
  }
  uVar5 = CONCAT71((int7)(uVar4 >> 8),1);
LAB_1484a7086:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1484a716c FUN_1484a716c body=67 status=ok
// SIG undefined FUN_1484a716c(void)

bool FUN_1484a716c(longlong param_1,int param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  
  if (param_4 == 0x18) {
    lVar1 = 0;
    do {
      uVar2 = param_2 * 3 + (int)lVar1;
      *(undefined8 *)(param_3 + lVar1 * 8) =
           *(undefined8 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar2 >> 9) * 8) +
            (ulonglong)(uVar2 & 0x1ff) * 8);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 3);
  }
  return param_4 == 0x18;
}



// FUNCTION 1484a71b0 FUN_1484a71b0 body=67 status=ok
// SIG undefined FUN_1484a71b0(void)

bool FUN_1484a71b0(longlong param_1,int param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  
  if (param_4 == 0x18) {
    lVar1 = 0;
    do {
      uVar2 = param_2 * 3 + (int)lVar1;
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar2 >> 9) * 8) +
       (ulonglong)(uVar2 & 0x1ff) * 8) = *(undefined8 *)(param_3 + lVar1 * 8);
      lVar1 = lVar1 + 1;
    } while (lVar1 != 3);
  }
  return param_4 == 0x18;
}



// FUNCTION 1484a7222 FUN_1484a7222 body=56 status=ok
// SIG undefined FUN_1484a7222(void)

undefined8 * FUN_1484a7222(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar1 = &PTR_FUN_14aee61a0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 1484a725a FUN_1484a725a body=62 status=ok
// SIG undefined FUN_1484a725a(void)

void FUN_1484a725a(longlong *param_1,longlong param_2)

{
  FUN_1484a7610(param_1,*(undefined4 *)(param_2 + 0x20));
  (**(code **)(*param_1 + 200))
            (param_1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 4),
             *(undefined4 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1484a729a FUN_1484a729a body=40 status=ok
// SIG undefined FUN_1484a729a(void)

void FUN_1484a729a(longlong *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 200))
            (*(undefined8 *)(param_2 + 0xc),*param_2,*param_2,param_2[1],
             *(undefined8 *)(param_2 + 0xc));
  return;
}



// FUNCTION 1484a72c2 FUN_1484a72c2 body=81 status=ok
// SIG undefined FUN_1484a72c2(void)

void FUN_1484a72c2(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  FUN_1484a7610(param_1,*(undefined4 *)(param_2 + 0x10));
  (**(code **)(*param_1 + 0xd0))
            (param_1,*(undefined4 *)(param_2 + 0x10),uVar1,uVar2,uVar3,param_2 + 0x28);
  return;
}



// FUNCTION 1484a7314 FUN_1484a7314 body=98 status=ok
// SIG undefined FUN_1484a7314(void)

void FUN_1484a7314(longlong *param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x10) != -1) {
    (**(code **)(*param_1 + 200))
              (param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 8),
               *(int *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x68));
  }
  if (*(int *)(param_2 + 0x14) != -1) {
    (**(code **)(*param_1 + 200))
              (param_1,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0xc),
               *(int *)(param_2 + 0x14),*(undefined8 *)(param_2 + 0x68));
  }
  return;
}



// FUNCTION 1484a7376 FUN_1484a7376 body=40 status=ok
// SIG undefined FUN_1484a7376(void)

void FUN_1484a7376(longlong *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 200))
            (*(undefined8 *)(param_2 + 2),*param_2,*param_2,param_2[1],*(undefined8 *)(param_2 + 2))
  ;
  return;
}



// FUNCTION 1484a739e FUN_1484a739e body=92 status=ok
// SIG undefined FUN_1484a739e(void)

void FUN_1484a739e(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar4 = 0;
  do {
    uVar3 = iVar1 * 3 + iVar4;
    FUN_146b9c256(param_1 + 0x18,
                  (ulonglong)((uVar3 & 0x1ff) << 3) +
                  *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar3 >> 9) * 8),
                  iVar2 * 3 + iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  return;
}



// FUNCTION 1484a73fe FUN_1484a73fe body=141 status=ok
// SIG undefined FUN_1484a73fe(void)

void FUN_1484a73fe(longlong param_1,int param_2,int param_3,int param_4,double param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    uVar1 = param_3 * 3 + iVar5;
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar2 = param_4 * 3 + iVar5;
    uVar3 = param_2 * 3 + iVar5;
    *(double *)(*(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 8)
         = *(double *)
            (*(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 8) *
           (1.0 - param_5) +
           *(double *)
            (*(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 8) *
           param_5;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 3);
  return;
}



// FUNCTION 1484a748c FUN_1484a748c body=179 status=ok
// SIG undefined FUN_1484a748c(void)

void FUN_1484a748c(longlong param_1,int param_2,int param_3,int param_4,int param_5,double *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = 0;
  do {
    uVar1 = param_3 * 3 + iVar6;
    lVar5 = *(longlong *)(param_1 + 0x20);
    uVar2 = param_4 * 3 + iVar6;
    uVar3 = param_5 * 3 + iVar6;
    uVar4 = param_2 * 3 + iVar6;
    *(double *)(*(longlong *)(lVar5 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 8)
         = param_6[2] *
           *(double *)
            (*(longlong *)(lVar5 + (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 8) +
           *param_6 *
           *(double *)
            (*(longlong *)(lVar5 + (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 8) +
           param_6[1] *
           *(double *)
            (*(longlong *)(lVar5 + (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 8);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 3);
  return;
}



// FUNCTION 1484a7540 FUN_1484a7540 body=207 status=ok
// SIG undefined FUN_1484a7540(void)

void FUN_1484a7540(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 auStack_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
  lVar2 = param_2[1];
  if (0 < (longlong)(int)lVar2) {
    iVar6 = 0;
    lVar7 = 0;
    do {
      iVar1 = *(int *)(*param_2 + lVar7 * 4);
      if (iVar1 != -1) {
        lVar4 = *(longlong *)(param_3 + 0x20);
        lVar5 = 0;
        do {
          uVar3 = iVar6 + (int)lVar5;
          auStack_48[lVar5] =
               *(undefined8 *)
                (*(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 8
                );
          lVar5 = lVar5 + 1;
        } while (lVar5 != 3);
        lVar4 = 0;
        do {
          uVar3 = iVar1 * 3 + (int)lVar4;
          *(undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar3 >> 9) * 8) +
           (ulonglong)(uVar3 & 0x1ff) * 8) = auStack_48[lVar4];
          lVar4 = lVar4 + 1;
        } while (lVar4 != 3);
      }
      lVar7 = lVar7 + 1;
      iVar6 = iVar6 + 3;
    } while (lVar7 != (int)lVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a7610 FUN_1484a7610 body=126 status=ok
// SIG undefined FUN_1484a7610(void)

void FUN_1484a7610(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (-1 < param_2) {
    uVar3 = (ulonglong)(param_2 + 1) * 3;
    if ((uint)((int)param_1[3] * 0x200 + *(int *)((longlong)param_1 + 0x1c)) < uVar3) {
      uVar2 = (**(code **)(*param_1 + 0xc0))(param_1);
      lVar4 = param_1[3];
      iVar1 = *(int *)((longlong)param_1 + 0x1c);
      FUN_146b9c0e2(param_1 + 3,uVar3 & 0xffffffff);
      for (uVar5 = (int)lVar4 * 0x200 + iVar1; uVar5 < (uint)uVar3; uVar5 = uVar5 + 1) {
        *(undefined8 *)
         (*(longlong *)(param_1[4] + (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 8)
             = uVar2;
      }
    }
  }
  return;
}



// FUNCTION 1484a768e FUN_1484a768e body=71 status=ok
// SIG undefined FUN_1484a768e(void)

undefined8 * FUN_1484a768e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aee61a0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484a76d6 FUN_1484a76d6 body=134 status=ok
// SIG undefined FUN_1484a76d6(void)

void FUN_1484a76d6(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar4 = iVar2 + 1;
  *(uint *)(param_1 + 0x10) = uVar4;
  if (*(uint *)(param_1 + 0x14) < uVar4) {
    FUN_1484a7906((longlong *)(param_1 + 8));
  }
  lVar3 = *(longlong *)(param_1 + 8);
  lVar6 = (longlong)iVar2 * 0x20;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar6);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + lVar6) = 0;
  ((undefined8 *)(lVar3 + lVar6))[1] = 0;
  *(int *)(lVar3 + 0x18 + lVar6) = param_3;
  lVar5 = 0;
  do {
    uVar4 = param_3 * 3 + (int)lVar5;
    *(undefined8 *)(lVar3 + lVar6 + lVar5 * 8) =
         *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar4 >> 9) * 8) +
          (ulonglong)(uVar4 & 0x1ff) * 8);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  return;
}



// FUNCTION 1484a775c FUN_1484a775c body=245 status=ok
// SIG undefined FUN_1484a775c(void)

void FUN_1484a775c(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  
  iVar5 = *(int *)(param_3 + 1);
  iVar7 = *(int *)(param_1 + 0x20) + iVar5;
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x24) < iVar7) {
    FUN_1484a798c(plVar1);
    iVar5 = *(int *)(param_3 + 1);
  }
  if (iVar5 != 0) {
    piVar10 = (int *)*param_3;
    piVar2 = piVar10 + iVar5;
    do {
      iVar5 = *piVar10;
      iVar7 = *(int *)(param_1 + 0x20);
      uVar6 = iVar7 + 1;
      *(uint *)(param_1 + 0x20) = uVar6;
      if (*(uint *)(param_1 + 0x24) < uVar6) {
        FUN_1484a7906(plVar1);
      }
      lVar4 = *plVar1;
      lVar9 = (longlong)iVar7 * 0x20;
      puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar9);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined8 *)(lVar4 + lVar9) = 0;
      ((undefined8 *)(lVar4 + lVar9))[1] = 0;
      *(int *)(lVar4 + 0x18 + lVar9) = iVar5;
      lVar8 = 0;
      do {
        uVar6 = iVar5 * 3 + (int)lVar8;
        *(undefined8 *)(lVar4 + lVar9 + lVar8 * 8) =
             *(undefined8 *)
              (*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar6 >> 9) * 8) +
              (ulonglong)(uVar6 & 0x1ff) * 8);
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      piVar10 = piVar10 + 1;
    } while (piVar10 != piVar2);
  }
  return;
}



// FUNCTION 1484a7852 FUN_1484a7852 body=179 status=ok
// SIG undefined FUN_1484a7852(void)

undefined8 FUN_1484a7852(longlong param_1,longlong param_2,byte param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar4 = (ulonglong)(param_3 ^ 1) * 0x10;
  lVar2 = (longlong)*(int *)(param_1 + 0x10 + lVar4);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 8 + lVar4);
    lVar3 = lVar2 * 0x20 + lVar4;
    do {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (((-1 < (int)uVar1) &&
          (lVar2 = *(longlong *)(param_2 + 0x10),
          (int)uVar1 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 9) * 8) +
                             (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        lVar2 = 0;
        do {
          uVar5 = uVar1 * 3 + (int)lVar2;
          *(undefined8 *)
           (*(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(uVar5 >> 9) * 8) +
           (ulonglong)(uVar5 & 0x1ff) * 8) = *(undefined8 *)(lVar4 + lVar2 * 8);
          lVar2 = lVar2 + 1;
        } while (lVar2 != 3);
      }
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != lVar3);
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 1484a7906 FUN_1484a7906 body=132 status=ok
// SIG undefined FUN_1484a7906(void)

void FUN_1484a7906(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1484a798c FUN_1484a798c body=95 status=ok
// SIG undefined FUN_1484a798c(void)

void FUN_1484a798c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1484a79ec FUN_1484a79ec body=270 status=ok
// SIG undefined FUN_1484a79ec(void)

undefined4 * FUN_1484a79ec(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1484a7afc(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_40 = *puVar1;
  *(undefined8 *)((longlong)local_40 + 0xc) = *puVar2;
  *(undefined4 *)((longlong)local_40 + 0x14) = 0xffffffff;
  uVar3 = FUN_1448eb174(local_40,0xc,0);
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar7 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar6 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar7 = 1 << ((byte)lVar6 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
    uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
    *(uint *)(local_40 + 3) = uVar3;
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar6 = param_1 + 0x38;
    }
    *(undefined4 *)((longlong)local_40 + 0x14) =
         *(undefined4 *)
          (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar6 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_48[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar7;
    FUN_1484a7bf8(param_1);
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a7afc FUN_1484a7afc body=251 status=ok
// SIG undefined FUN_1484a7afc(void)

int * FUN_1484a7afc(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1406245f8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 1484a7bf8 FUN_1484a7bf8 body=456 status=ok
// SIG undefined FUN_1484a7bf8(void)

void FUN_1484a7bf8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
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
  uVar5 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar3 = *local_88;
        lVar4 = (longlong)iVar6 * 0x1c;
        iVar7 = FUN_1448eb174(lVar3 + lVar4,0xc,0);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x18 + lVar4) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar4) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484a7dc6 FUN_1484a7dc6 body=249 status=ok
// SIG undefined FUN_1484a7dc6(void)

void FUN_1484a7dc6(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  if ((int)param_1[9] != 0) {
    iVar3 = FUN_1448eb174(param_2,0xc,0);
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar2 = (longlong)iVar3 * 0x1c;
        iVar5 = *(int *)(lVar1 + 0x14 + lVar2);
        if (((*(int *)(lVar1 + lVar2) == *param_2) && (*(int *)(lVar2 + lVar1 + 4) == param_2[1]))
           && (*(int *)(lVar2 + lVar1 + 8) == param_2[2])) {
          while ((*(int *)(lVar1 + 0xc + (longlong)iVar3 * 0x1c) != *param_3 ||
                 (*(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x1c) != param_3[1]))) {
            do {
              iVar3 = iVar5;
              if (iVar3 == -1) {
                return;
              }
              lVar2 = (longlong)iVar3 * 0x1c;
              iVar5 = *(int *)(lVar1 + 0x14 + lVar2);
            } while (((*(int *)(lVar1 + lVar2) != *param_2) ||
                     (*(int *)(lVar2 + lVar1 + 4) != param_2[1])) ||
                    (*(int *)(lVar2 + lVar1 + 8) != param_2[2]));
          }
          FUN_1484a7ec0(param_1);
          return;
        }
        iVar3 = iVar5;
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 1484a7ec0 FUN_1484a7ec0 body=229 status=ok
// SIG undefined FUN_1484a7ec0(void)

void FUN_1484a7ec0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  
  lVar2 = *param_1;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar8 = (longlong)*(int *)(lVar2 + 0x18 + (longlong)param_2 * 0x1c);
  iVar7 = *(int *)((longlong)plVar6 + lVar8 * 4);
  if (iVar7 == param_2) {
    puVar5 = (undefined4 *)((longlong)plVar6 + lVar8 * 4);
  }
  else {
    do {
      lVar8 = (longlong)iVar7;
      iVar7 = *(int *)(lVar2 + 0x14 + lVar8 * 0x1c);
    } while (iVar7 != param_2);
    puVar5 = (undefined4 *)(lVar2 + lVar8 * 0x1c + 0x14);
  }
  *puVar5 = *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 0x14);
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1484a7fa6 FUN_1484a7fa6 body=64 status=ok
// SIG undefined FUN_1484a7fa6(void)

void FUN_1484a7fa6(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_141082778(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1484a7fe6 FUN_1484a7fe6 body=132 status=ok
// SIG undefined FUN_1484a7fe6(void)

void FUN_1484a7fe6(longlong param_1,int param_2)

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



// FUNCTION 1484a806b FUN_1484a806b body=52 status=ok
// SIG undefined FUN_1484a806b(void)

void FUN_1484a806b(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1484a80a0 FUN_1484a80a0 body=132 status=ok
// SIG undefined FUN_1484a80a0(void)

void FUN_1484a80a0(longlong param_1,int param_2)

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



// FUNCTION 1484a8126 FUN_1484a8126 body=62 status=ok
// SIG undefined FUN_1484a8126(void)

void FUN_1484a8126(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1484a8164(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1484a8164 FUN_1484a8164 body=93 status=ok
// SIG undefined FUN_1484a8164(void)

ulonglong FUN_1484a8164(uint param_1,uint param_2)

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



// FUNCTION 1484a81c2 FUN_1484a81c2 body=267 status=ok
// SIG undefined FUN_1484a81c2(void)

void FUN_1484a81c2(longlong *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    FUN_14840200a(plVar1,0);
  }
  iVar6 = (int)param_1[1];
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (*(int *)((longlong)param_1 + 0x1c) < iVar6) {
    FUN_14840200a(plVar1);
    iVar6 = (int)param_1[1];
  }
  if (iVar6 != 0) {
    lVar7 = *param_1;
    lVar8 = (longlong)iVar6 * 0x220;
    do {
      FUN_1484a82d0(&local_68,lVar7);
      iVar6 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar6 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar6 + 1U) {
        FUN_146bf26b8(plVar1,iVar6);
      }
      lVar4 = *plVar1;
      lVar5 = (longlong)iVar6 * 0x30;
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5);
      *puVar3 = local_48;
      puVar3[1] = uStack_40;
      puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5);
      *puVar3 = local_58;
      puVar3[1] = uStack_50;
      puVar2 = (undefined4 *)(lVar4 + lVar5);
      *puVar2 = local_68;
      puVar2[1] = uStack_64;
      puVar2[2] = uStack_60;
      puVar2[3] = uStack_5c;
      lVar7 = lVar7 + 0x220;
      lVar8 = lVar8 + -0x220;
    } while (lVar8 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484a82d0 FUN_1484a82d0 body=233 status=ok
// SIG undefined FUN_1484a82d0(void)

undefined8 * FUN_1484a82d0(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0x7fefffffffffffff;
  param_1[1] = 0x7fefffffffffffff;
  param_1[2] = 0x7fefffffffffffff;
  param_1[3] = 0xffefffffffffffff;
  param_1[4] = 0xffefffffffffffff;
  param_1[5] = 0xffefffffffffffff;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar4 = *(int *)(param_2 + 0x24);
  if (0 < iVar3 * 0x200 + iVar4) {
    uVar5 = 0;
    do {
      uVar6 = (ulonglong)(uVar5 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_2 + 0x28) + (ulonglong)(uVar5 >> 9) * 8) +
                             uVar6 * 2) - 1U) < 0xfffe) {
        lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
        local_38 = *(undefined8 *)(lVar2 + 0x10 + uVar6 * 0x18);
        puVar1 = (undefined4 *)(lVar2 + uVar6 * 0x18);
        local_48 = *puVar1;
        uStack_44 = puVar1[1];
        uStack_40 = puVar1[2];
        uStack_3c = puVar1[3];
        FUN_146ba5262(param_1,&local_48);
        iVar3 = *(int *)(param_2 + 0x20);
        iVar4 = *(int *)(param_2 + 0x24);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar3 * 0x200 + iVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1484a83ba FUN_1484a83ba body=71 status=ok
// SIG undefined FUN_1484a83ba(void)

void FUN_1484a83ba(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1484a8432();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_1484a84b8();
      return;
    }
  }
  return;
}



// FUNCTION 1484a8402 FUN_1484a8402 body=48 status=ok
// SIG undefined FUN_1484a8402(void)

void FUN_1484a8402(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1484a8432 FUN_1484a8432 body=132 status=ok
// SIG undefined FUN_1484a8432(void)

void FUN_1484a8432(longlong param_1,int param_2)

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



// FUNCTION 1484a84b8 FUN_1484a84b8 body=62 status=ok
// SIG undefined FUN_1484a84b8(void)

void FUN_1484a84b8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1484a84f6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1484a84f6 FUN_1484a84f6 body=93 status=ok
// SIG undefined FUN_1484a84f6(void)

ulonglong FUN_1484a84f6(uint param_1,uint param_2)

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



// FUNCTION 1484a8553 FUN_1484a8553 body=672 status=ok
// SIG undefined FUN_1484a8553(void)

void FUN_1484a8553(longlong param_1,uint param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  longlong *plVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  float fVar17;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar17 + fVar17);
    plVar9 = &local_348;
    do {
      piVar5 = (int *)*plVar9;
      piVar10 = (int *)plVar9[1];
      iVar12 = (int)plVar9[2];
      uVar7 = (int)((ulonglong)((longlong)piVar10 - (longlong)piVar5) >> 2) + 1;
      piVar14 = piVar10;
      piVar13 = piVar5;
      if (iVar12 != 0) {
LAB_1484a8619:
        if (8 < (int)uVar7) {
          iVar3 = piVar5[uVar7 >> 1];
          piVar5[uVar7 >> 1] = *piVar5;
          *piVar5 = iVar3;
          piVar8 = piVar10 + 1;
          piVar6 = piVar5;
          do {
            piVar4 = piVar6 + 1;
            piVar11 = piVar6 + 1;
            do {
              piVar15 = piVar11;
              piVar6 = piVar4;
              if (piVar10 < piVar6) break;
              dVar2 = *(double *)(*(longlong *)*param_3 + (longlong)*piVar5 * 0x10);
              pdVar1 = (double *)(*(longlong *)*param_3 + (longlong)*piVar6 * 0x10);
              piVar4 = piVar6 + 1;
              piVar11 = piVar15 + 1;
            } while (dVar2 < *pdVar1 || dVar2 == *pdVar1);
            piVar4 = piVar8 + -2;
            do {
              piVar11 = piVar8;
              piVar16 = piVar4;
              piVar8 = piVar11 + -1;
              if (piVar8 <= piVar5) break;
              dVar2 = *(double *)(*(longlong *)*param_3 + (longlong)*piVar8 * 0x10);
              pdVar1 = (double *)(*(longlong *)*param_3 + (longlong)*piVar5 * 0x10);
              piVar4 = piVar16 + -1;
            } while (dVar2 < *pdVar1 || dVar2 == *pdVar1);
            if (piVar8 < piVar6) goto LAB_1484a86cd;
            iVar3 = *piVar6;
            *piVar6 = *piVar8;
            *piVar8 = iVar3;
          } while( true );
        }
        if (piVar5 < piVar10) {
          do {
            piVar14 = piVar5;
            if (piVar5 + 1 <= piVar10) {
              iVar12 = *piVar5;
              piVar13 = piVar5 + 1;
              piVar8 = piVar5;
              do {
                dVar2 = *(double *)(*(longlong *)*param_3 + (longlong)iVar12 * 0x10);
                pdVar1 = (double *)(*(longlong *)*param_3 + (longlong)*piVar13 * 0x10);
                piVar14 = piVar13;
                iVar3 = *piVar13;
                if (dVar2 < *pdVar1 || dVar2 == *pdVar1) {
                  piVar14 = piVar8;
                  iVar3 = iVar12;
                }
                iVar12 = iVar3;
                piVar13 = piVar13 + 1;
                piVar8 = piVar14;
              } while (piVar13 <= piVar10);
            }
            iVar12 = *piVar14;
            *piVar14 = *piVar10;
            *piVar10 = iVar12;
            piVar10 = piVar10 + -1;
          } while (piVar5 < piVar10);
        }
        goto LAB_1484a87ca;
      }
LAB_1484a87e4:
      FUN_1484a87f4(piVar5,uVar7,param_3);
LAB_1484a87ca:
      plVar9 = plVar9 + -3;
    } while (&local_348 <= plVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1484a86cd:
  iVar3 = *piVar5;
  *piVar5 = *piVar8;
  *piVar8 = iVar3;
  iVar12 = iVar12 + -1;
  piVar11 = piVar11 + -2;
  if ((longlong)piVar16 - (longlong)piVar13 < (longlong)piVar14 - (longlong)piVar15) {
    if (piVar6 < piVar10) {
      *plVar9 = (longlong)piVar6;
      plVar9[1] = (longlong)piVar10;
      *(int *)(plVar9 + 2) = iVar12;
      plVar9 = plVar9 + 3;
    }
    piVar15 = piVar5;
    if (piVar8 <= piVar5 + 1) goto LAB_1484a87ca;
  }
  else {
    if (piVar5 + 1 < piVar8) {
      *plVar9 = (longlong)piVar5;
      plVar9[1] = (longlong)piVar11;
      *(int *)(plVar9 + 2) = iVar12;
      plVar9 = plVar9 + 3;
    }
    piVar5 = piVar6;
    piVar11 = piVar10;
    piVar16 = piVar10;
    if (piVar10 <= piVar6) goto LAB_1484a87ca;
  }
  uVar7 = (int)((ulonglong)((longlong)piVar16 - (longlong)piVar15) >> 2) + 1;
  piVar10 = piVar11;
  piVar14 = piVar16;
  piVar13 = piVar15;
  if (iVar12 == 0) goto LAB_1484a87e4;
  goto LAB_1484a8619;
}



// FUNCTION 1484a87f4 FUN_1484a87f4 body=403 status=ok
// SIG undefined FUN_1484a87f4(void)

void FUN_1484a87f4(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  if (param_2 != 0) {
    iVar5 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar10 = iVar5;
joined_r0x0001484a8819:
    do {
      iVar8 = iVar5 * 2 + 1;
      if (iVar8 < (int)param_2) {
        iVar9 = iVar5 * 2 + 2;
        lVar4 = *(longlong *)*param_3;
        if ((iVar9 < (int)param_2) &&
           (dVar2 = *(double *)(lVar4 + (longlong)(int)param_1[iVar9] * 0x10),
           pdVar1 = (double *)(lVar4 + (longlong)(int)param_1[iVar8] * 0x10),
           dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
          iVar8 = iVar9;
        }
        iVar9 = param_1[iVar5];
        dVar2 = *(double *)(lVar4 + (longlong)iVar9 * 0x10);
        pdVar1 = (double *)(lVar4 + (longlong)(int)param_1[iVar8] * 0x10);
        if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
          param_1[iVar5] = param_1[iVar8];
          param_1[iVar8] = iVar9;
          iVar5 = iVar8;
          goto joined_r0x0001484a8819;
        }
      }
      bVar11 = iVar10 != 0;
      iVar5 = iVar10 + -1;
      iVar10 = iVar5;
    } while (bVar11);
    if (1 < (int)param_2) {
      uVar6 = (ulonglong)param_2;
      uVar3 = *param_1;
      *param_1 = param_1[uVar6 - 1];
      param_1[uVar6 - 1] = uVar3;
      if (param_2 != 2) {
        do {
          uVar7 = uVar6 - 1;
          iVar5 = 0;
          iVar8 = 1;
          iVar10 = 0;
          do {
            iVar5 = iVar5 + 2;
            lVar4 = *(longlong *)*param_3;
            iVar9 = iVar8;
            if (((longlong)iVar5 < (longlong)uVar7) &&
               (dVar2 = *(double *)(lVar4 + (longlong)(int)param_1[iVar5] * 0x10),
               pdVar1 = (double *)(lVar4 + (longlong)(int)param_1[iVar8] * 0x10),
               dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
              iVar9 = iVar5;
            }
            iVar5 = param_1[iVar10];
            dVar2 = *(double *)(lVar4 + (longlong)iVar5 * 0x10);
            pdVar1 = (double *)(lVar4 + (longlong)(int)param_1[iVar9] * 0x10);
            if (dVar2 < *pdVar1 || dVar2 == *pdVar1) break;
            param_1[iVar10] = param_1[iVar9];
            param_1[iVar9] = iVar5;
            iVar5 = iVar9 * 2;
            iVar8 = iVar9 * 2 + 1;
            iVar10 = iVar9;
          } while ((longlong)iVar8 < (longlong)uVar7);
          uVar3 = *param_1;
          *param_1 = param_1[uVar6 - 2];
          param_1[uVar6 - 2] = uVar3;
          uVar6 = uVar7;
        } while (2 < uVar7);
      }
    }
  }
  return;
}



// FUNCTION 1484a8988 FUN_1484a8988 body=147 status=ok
// SIG undefined FUN_1484a8988(void)

void FUN_1484a8988(longlong param_1,int param_2)

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



// FUNCTION 1484a8a1c FUN_1484a8a1c body=112 status=ok
// SIG undefined FUN_1484a8a1c(void)

void FUN_1484a8a1c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x220 + lVar1);
  FUN_141082778(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x220),(longlong)iVar3 * 0x220);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1484a8a8c FUN_1484a8a8c body=601 status=ok
// SIG undefined FUN_1484a8a8c(void)

void FUN_1484a8a8c(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  double *pdVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  uint uVar5;
  double *pdVar6;
  double *pdVar7;
  longlong *plVar8;
  double *pdVar9;
  double *pdVar10;
  int iVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  float fVar15;
  double dVar16;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar15 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar15 + fVar15);
    plVar8 = &local_348;
    do {
      pdVar3 = (double *)*plVar8;
      pdVar9 = (double *)plVar8[1];
      iVar11 = (int)plVar8[2];
      uVar5 = (int)((ulonglong)((longlong)pdVar9 - (longlong)pdVar3) >> 3) + 1;
      pdVar7 = pdVar9;
      pdVar12 = pdVar3;
      if (iVar11 != 0) {
LAB_1484a8b53:
        if (8 < (int)uVar5) {
          dVar16 = pdVar3[uVar5 >> 1];
          pdVar3[uVar5 >> 1] = *pdVar3;
          *pdVar3 = dVar16;
          pdVar6 = pdVar9 + 1;
          pdVar4 = pdVar3;
          do {
            pdVar1 = pdVar4 + 1;
            pdVar10 = pdVar4 + 1;
            do {
              pdVar13 = pdVar10;
              pdVar4 = pdVar1;
              if (pdVar9 < pdVar4) break;
              pdVar1 = pdVar4 + 1;
              pdVar10 = pdVar13 + 1;
            } while (*pdVar4 < *pdVar3 || *pdVar4 == *pdVar3);
            pdVar1 = pdVar6 + -2;
            do {
              pdVar10 = pdVar6;
              pdVar14 = pdVar1;
              pdVar6 = pdVar10 + -1;
              if (pdVar6 <= pdVar3) break;
              pdVar1 = pdVar14 + -1;
            } while (*pdVar3 < *pdVar6 || *pdVar3 == *pdVar6);
            if (pdVar6 < pdVar4) goto LAB_1484a8bdd;
            dVar16 = *pdVar4;
            *pdVar4 = *pdVar6;
            *pdVar6 = dVar16;
          } while( true );
        }
        if (pdVar3 < pdVar9) {
          do {
            pdVar7 = pdVar3;
            if (pdVar3 + 1 <= pdVar9) {
              dVar16 = *pdVar3;
              pdVar12 = pdVar3 + 1;
              do {
                dVar2 = *pdVar12;
                pdVar6 = pdVar12;
                if (*pdVar12 <= dVar16) {
                  dVar2 = dVar16;
                  pdVar6 = pdVar7;
                }
                pdVar7 = pdVar6;
                dVar16 = dVar2;
                pdVar12 = pdVar12 + 1;
              } while (pdVar12 <= pdVar9);
            }
            dVar16 = *pdVar7;
            *pdVar7 = *pdVar9;
            *pdVar9 = dVar16;
            pdVar9 = pdVar9 + -1;
          } while (pdVar3 < pdVar9);
        }
        goto LAB_1484a8cc1;
      }
LAB_1484a8cd6:
      FUN_1484a8ce6(pdVar3,uVar5,pdVar9,param_4);
LAB_1484a8cc1:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1484a8bdd:
  dVar16 = *pdVar3;
  *pdVar3 = *pdVar6;
  *pdVar6 = dVar16;
  iVar11 = iVar11 + -1;
  pdVar10 = pdVar10 + -2;
  if ((longlong)pdVar14 - (longlong)pdVar12 < (longlong)pdVar7 - (longlong)pdVar13) {
    if (pdVar4 < pdVar9) {
      *plVar8 = (longlong)pdVar4;
      plVar8[1] = (longlong)pdVar9;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    pdVar13 = pdVar3;
    if (pdVar6 <= pdVar3 + 1) goto LAB_1484a8cc1;
  }
  else {
    if (pdVar3 + 1 < pdVar6) {
      *plVar8 = (longlong)pdVar3;
      plVar8[1] = (longlong)pdVar10;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    pdVar3 = pdVar4;
    pdVar10 = pdVar9;
    pdVar14 = pdVar9;
    if (pdVar9 <= pdVar4) goto LAB_1484a8cc1;
  }
  uVar5 = (int)((ulonglong)((longlong)pdVar14 - (longlong)pdVar13) >> 3) + 1;
  pdVar9 = pdVar10;
  pdVar7 = pdVar14;
  pdVar12 = pdVar13;
  if (iVar11 == 0) goto LAB_1484a8cd6;
  goto LAB_1484a8b53;
}



// FUNCTION 1484a8ce6 FUN_1484a8ce6 body=322 status=ok
// SIG undefined FUN_1484a8ce6(void)

void FUN_1484a8ce6(undefined8 *param_1,uint param_2)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x0001484a8d07:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) &&
           ((double)param_1[iVar6] < (double)param_1[iVar7] ||
            (double)param_1[iVar6] == (double)param_1[iVar7])) {
          iVar6 = iVar7;
        }
        dVar1 = (double)param_1[iVar3];
        if (dVar1 < (double)param_1[iVar6]) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = dVar1;
          iVar3 = iVar6;
          goto joined_r0x0001484a8d07;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar2;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               ((double)param_1[iVar6] < (double)param_1[iVar3] ||
                (double)param_1[iVar6] == (double)param_1[iVar3])) {
              iVar7 = iVar3;
            }
            dVar1 = (double)param_1[iVar8];
            if ((double)param_1[iVar7] <= dVar1) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = dVar1;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar2 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar2;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 1484a8e28 FUN_1484a8e28 body=120 status=ok
// SIG undefined FUN_1484a8e28(void)

int FUN_1484a8e28(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x1c;
        if ((((*(int *)(lVar3 + lVar4) == *param_3) &&
             (lVar1 = lVar3 + lVar4, *(int *)(lVar1 + 4) == param_3[1])) &&
            (*(int *)(lVar1 + 8) == param_3[2])) && (*(int *)(lVar1 + 0xc) == param_3[3])) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x14 + lVar4);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 1484a8ea0 FUN_1484a8ea0 body=306 status=ok
// SIG undefined FUN_1484a8ea0(void)

undefined4 * FUN_1484a8ea0(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1484a8fd4(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  local_40[4] = *puVar2;
  local_40[5] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = (*(code *)PTR_FUN_14c75b148)(local_40,0x10,0);
  cVar6 = FUN_1484a90d0(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[6] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[5] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_1484a91b2(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a8fd4 FUN_1484a8fd4 body=251 status=ok
// SIG undefined FUN_1484a8fd4(void)

int * FUN_1484a8fd4(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1406245f8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 1484a90d0 FUN_1484a90d0 body=98 status=ok
// SIG undefined FUN_1484a90d0(void)

undefined8 FUN_1484a90d0(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1484a8e28(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x1c) = param_3[4];
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x1c);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1484a9132(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1484a9132 FUN_1484a9132 body=128 status=ok
// SIG undefined FUN_1484a9132(void)

void FUN_1484a9132(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1484a91b2 FUN_1484a91b2 body=457 status=ok
// SIG undefined FUN_1484a91b2(void)

void FUN_1484a91b2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
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
  uVar5 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar3 = *local_88;
        lVar4 = (longlong)iVar6 * 0x1c;
        iVar7 = (*(code *)PTR_FUN_14c75b148)(lVar3 + lVar4,0x10,0);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x18 + lVar4) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar4) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484a937c FUN_1484a937c body=295 status=ok
// SIG undefined FUN_1484a937c(void)

undefined4 *
FUN_1484a937c(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14014832a(param_1,local_50);
  FUN_1484a94a4(param_3,local_48);
  local_48[6] = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = *local_48;
  local_68 = param_4;
  cVar1 = FUN_140147e3a(param_1,uVar3,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar2 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_48[7] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_48[6] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140148e72(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484a94a4 FUN_1484a94a4 body=106 status=ok
// SIG undefined FUN_1484a94a4(void)

undefined4 * FUN_1484a94a4(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  param_2[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_2[5] = 0;
  }
  else {
    FUN_144a06ca8(param_2 + 2,iVar1,0);
    memcpy(*(void **)(param_2 + 2),_Src,(longlong)iVar1 << 2);
  }
  return param_2;
}



// FUNCTION 1484a950e FUN_1484a950e body=96 status=ok
// SIG undefined FUN_1484a950e(void)

void FUN_1484a950e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,0x10);
  }
  return;
}



// FUNCTION 1484a956e FUN_1484a956e body=31 status=ok
// SIG undefined FUN_1484a956e(void)

undefined8 FUN_1484a956e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1484a95aa FUN_1484a95aa body=93 status=ok
// SIG undefined FUN_1484a95aa(void)

void FUN_1484a95aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aee61f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1484a9608 FUN_1484a9608 body=123 status=ok
// SIG undefined FUN_1484a9608(void)

void FUN_1484a9608(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aee61f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1484a9684 FUN_1484a9684 body=21 status=ok
// SIG undefined FUN_1484a9684(void)

undefined8 FUN_1484a9684(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1484a969e FUN_1484a969e body=4853 status=ok
// SIG undefined FUN_1484a969e(void)

uint FUN_1484a969e(longlong param_1,longlong *param_2,char *param_3,longlong param_4,char param_5,
                  undefined8 *param_6)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  undefined8 unaff_RBP;
  undefined7 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  ushort *puVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  char *pcVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar28 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb_02;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_408 [32];
  undefined1 local_3e8;
  undefined8 local_3d8;
  uint local_3cc;
  ulonglong local_3c8;
  char *local_3c0;
  ulonglong local_3b8;
  longlong *local_3b0;
  longlong local_3a8;
  undefined8 uStack_3a0;
  longlong local_398;
  ulonglong uStack_390;
  longlong local_388;
  double local_380;
  double dStack_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  char local_350;
  int local_328;
  longlong local_310;
  undefined8 *local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  longlong local_2b8;
  ulonglong uStack_2b0;
  undefined8 local_c8;
  double dStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_90;
  undefined8 extraout_XMM0_Qb_00;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_408;
  if ((((param_1 == 0) || (*(longlong **)(param_1 + 0x70) == (longlong *)0x0)) ||
      (*(longlong *)(param_1 + 0x80) == 0)) ||
     ((cVar7 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x58))(), cVar7 == '\0' ||
      (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x58))(), cVar7 == '\0')))) {
    uVar9 = 0;
  }
  else {
    local_3b0 = param_2;
    FUN_1484aa994(&local_388,param_1);
    local_380 = *(double *)(param_3 + 8);
    dStack_378 = *(double *)(param_3 + 0x10);
    local_370 = *(double *)(param_3 + 0x18);
    dVar2 = *(double *)(param_3 + 8);
    dVar3 = *(double *)(param_3 + 0x10);
    uVar27 = -(ulonglong)(-dVar2 <= dVar2);
    local_368 = (double)(-(ulonglong)
                          (1e-08 < (double)(uVar27 & (ulonglong)dVar2 | ~uVar27 & (ulonglong)-dVar2)
                          ) & (ulonglong)(1.0 / dVar2));
    uVar27 = -(ulonglong)(-dVar3 <= dVar3);
    local_360 = (double)(-(ulonglong)
                          (1e-08 < (double)(uVar27 & (ulonglong)dVar3 | ~uVar27 & (ulonglong)-dVar3)
                          ) & (ulonglong)(1.0 / dVar3));
    dVar2 = *(double *)(param_3 + 0x18);
    uVar27 = -(ulonglong)(-dVar2 <= dVar2);
    local_358 = (double)(-(ulonglong)
                          (1e-08 < (double)(uVar27 & (ulonglong)dVar2 | ~uVar27 & (ulonglong)-dVar2)
                          ) & (ulonglong)(1.0 / dVar2));
    local_350 = '\0';
    local_3e8 = 0;
    FUN_1411b354a(&local_2e8,0,0,0);
    FUN_146c00942(param_4);
    FUN_141082778(&local_2e8);
    FUN_14582eef4(param_4);
    if ((((*param_3 != '\0') || ((param_3[1] != '\0' || (param_3[2] != '\0')))) ||
        (param_3[3] != '\0')) || (param_3[4] == '\x01')) {
      FUN_14582ed12(param_4);
    }
    local_398 = 0;
    uStack_390 = 0;
    local_3a8 = 0;
    uStack_3a0 = 0;
    uVar15 = (undefined7)((ulonglong)unaff_RBP >> 8);
    if ((local_388 == 0) || (cVar7 = FUN_1461c3a34(local_388 + 0xb8), cVar7 == '\0')) {
      uVar20 = (uint)CONCAT71(uVar15,1);
      FUN_144a127d2(&local_3a8,0,1);
    }
    else {
      iVar18 = *(int *)(local_388 + 0xec);
      uVar20 = (uint)CONCAT71(uVar15,1);
      FUN_144a127d2(&local_3a8,iVar18,1);
      if (0 < iVar18) {
        uVar9 = 0;
        iVar13 = 0;
        do {
          lVar25 = *(longlong *)(local_388 + 0xe0);
          uVar27 = (ulonglong)(uint)(*(int *)(local_388 + 0xe8) * iVar13);
          local_2d8 = (double)*(float *)(lVar25 + 8 + uVar27) * local_370;
          uStack_2e0 = (double)*(float *)(lVar25 + 4 + uVar27) * dStack_378;
          local_2e8 = (double)*(float *)(lVar25 + uVar27) * local_380;
          local_2c8 = DAT_14c846338;
          uStack_2d0 = DAT_14c846330;
          uStack_2bc = DAT_14c846338;
          uStack_2c4 = (undefined4)DAT_14c846330;
          uStack_2c0 = (undefined4)((ulonglong)DAT_14c846330 >> 0x20);
          local_2b8 = DAT_14c84635c;
          uStack_2b0 = uStack_2b0 & 0xffffffffff000000;
          iVar8 = FUN_146c02208(param_4);
          *(int *)(local_3a8 + (longlong)iVar8 * 4) = iVar13;
          if (iVar13 != iVar8) {
            FUN_14582f278(param_4);
            goto LAB_1484aa512;
          }
          iVar13 = iVar13 + 1;
          uVar9 = (uint)(iVar18 <= iVar13);
          uVar20 = (uint)(iVar18 <= iVar13);
        } while (iVar13 != iVar18);
      }
    }
    local_3cc = uVar20;
    local_3c0 = param_3;
    if ((local_388 == 0) || (*(longlong *)(local_388 + 0x28) == 0)) {
      uVar27 = uStack_390 >> 0x20;
      uStack_390 = uStack_390 & 0xffffffff00000000;
      if ((int)uVar27 == 0) {
        local_3d8 = (ulonglong)local_3d8._4_4_ << 0x20;
      }
      else {
        local_3d8 = (ulonglong)local_3d8._4_4_ << 0x20;
        FUN_14481578e(&local_398);
      }
      local_3c8 = 0;
    }
    else {
      uVar27 = (ulonglong)local_328;
      FUN_1448156a8(&local_398,&DAT_149f3b198,local_328);
      local_3c8 = uVar27;
      if ((longlong)uVar27 < 1) {
        local_3d8 = (ulonglong)local_3d8._4_4_ << 0x20;
      }
      else {
        uVar27 = 0;
        do {
          local_3d8 = uVar27;
          FUN_1484aac88(&local_388,&local_c8,uVar27);
          dVar3 = dStack_c0;
          dVar2 = local_c8;
          uVar6 = local_c8._4_4_;
          local_2e8 = local_c8;
          uStack_2e0 = (double)CONCAT44(uStack_2e0._4_4_,dStack_c0._0_4_);
          uVar11 = FUN_146c01152(param_4,&local_2e8,0);
          if ((~(uint)uVar11 & 0xfffffffd) != 0) {
            if ((uint)uVar11 == 0xfffffffe) {
              local_3b8 = FUN_146c061e0(param_4,(ulonglong)dVar2 & 0xffffffff,uVar6);
              uVar20 = FUN_146c061e0(param_4,uVar6,(ulonglong)dVar3 & 0xffffffff);
              uVar9 = FUN_146c061e0(param_4,(ulonglong)dVar3 & 0xffffffff,
                                    (ulonglong)dVar2 & 0xffffffff);
              uVar27 = local_2f8 >> 0x18;
              local_2f8 = uVar27 << 0x18;
              uVar24 = local_2f8 >> 0x10;
              local_2f8 = uVar27 << 0x18;
              if (((uint)local_3b8 != 0xffffffff) &&
                 (*(int *)(*(longlong *)
                            (*(longlong *)(param_4 + 0x1c0) + (local_3b8 >> 9 & 0x7fffff) * 8) + 0xc
                          + (ulonglong)(((uint)local_3b8 & 0x1ff) << 4)) != -1)) {
                local_2f8 = CONCAT62((int6)uVar24,0x101);
              }
              if ((uVar20 != 0xffffffff) &&
                 (*(int *)(*(longlong *)
                            (*(longlong *)(param_4 + 0x1c0) + (ulonglong)(uVar20 >> 9) * 8) + 0xc +
                          (ulonglong)((uVar20 & 0x1ff) << 4)) != -1)) {
                local_2f8._0_3_ = CONCAT21(0x101,(undefined1)local_2f8);
              }
              if ((uVar9 != 0xffffffff) &&
                 (*(int *)(*(longlong *)
                            (*(longlong *)(param_4 + 0x1c0) + (ulonglong)(uVar9 >> 9) * 8) + 0xc +
                          (ulonglong)((uVar9 & 0x1ff) << 4)) != -1)) {
                local_2f8._0_3_ = CONCAT12(1,(undefined2)local_2f8);
                local_2f8 = CONCAT71(local_2f8._1_7_,1);
              }
              lVar25 = 0;
              do {
                if (*(char *)((longlong)&local_2f8 + lVar25) == '\x01') {
                  iVar18 = *(int *)((longlong)&local_c8 + lVar25 * 4);
                  lVar16 = *(longlong *)(local_388 + 0xe0);
                  uVar27 = (ulonglong)(uint)(*(int *)(local_388 + 0xe8) * iVar18);
                  local_2d8 = (double)*(float *)(lVar16 + 8 + uVar27) * local_370;
                  uStack_2e0 = (double)*(float *)(lVar16 + 4 + uVar27) * dStack_378;
                  local_2e8 = (double)*(float *)(lVar16 + uVar27) * local_380;
                  local_2c8 = DAT_14c846338;
                  uStack_2d0 = DAT_14c846330;
                  uStack_2bc = DAT_14c846338;
                  uStack_2c4 = (undefined4)DAT_14c846330;
                  uStack_2c0 = (undefined4)((ulonglong)DAT_14c846330 >> 0x20);
                  local_2b8 = DAT_14c84635c;
                  uStack_2b0 = uStack_2b0 & 0xffffffffff000000;
                  iVar13 = FUN_146c02208(param_4,&local_2e8);
                  *(int *)((longlong)&local_c8 + lVar25 * 4) = iVar13;
                  FUN_144a127d2(&local_3a8,iVar13 + 1,1);
                  *(int *)(local_3a8 + (longlong)iVar13 * 4) = iVar18;
                }
                lVar25 = lVar25 + 1;
              } while (lVar25 != 3);
              local_2e8 = local_c8;
              uStack_2e0 = (double)CONCAT44(uStack_2e0._4_4_,dStack_c0._0_4_);
              uVar11 = FUN_146c01152(param_4,&local_2e8,0);
            }
            *(int *)(local_398 + local_3d8 * 4) = (int)uVar11;
          }
          uVar27 = local_3d8 + 1;
        } while (uVar27 != local_3c8);
        local_3d8 = CONCAT44(local_3d8._4_4_,(int)CONCAT71((int7)((ulonglong)uVar11 >> 8),1));
        param_3 = local_3c0;
      }
    }
    if (param_3[4] == '\0') {
      lVar25 = 0;
    }
    else {
      FUN_14582ed9a(*(undefined8 *)(param_4 + 0x208));
      lVar25 = *(longlong *)(*(longlong *)(param_4 + 0x208) + 0x48);
    }
    lVar16 = local_388;
    iVar18 = *(int *)(param_1 + 0x18);
    if (0 < iVar18) {
      lVar22 = 0;
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x10) + 8 + lVar22 * 0xf8) != 0) {
          puVar19 = (ushort *)(*(longlong *)(param_1 + 0x10) + lVar22 * 0xf8);
          iVar18 = (int)lVar22 + 1;
          uVar20 = 0;
          do {
            uVar9 = *(uint *)(local_398 + (longlong)(int)(*(uint *)(puVar19 + 2) / 3 + uVar20) * 4);
            if (uVar9 != 0xffffffff) {
              if (*(char *)(param_4 + 0x1a8) == '\x01') {
                *(int *)(*(longlong *)(*(longlong *)(param_4 + 0x198) + (ulonglong)(uVar9 >> 9) * 8)
                        + (ulonglong)(uVar9 & 0x1ff) * 4) = (int)lVar22;
                iVar13 = *(int *)(param_4 + 0x1b0);
                if (*(int *)(param_4 + 0x1b0) < iVar18) {
                  iVar13 = iVar18;
                }
                *(int *)(param_4 + 0x1b0) = iVar13;
              }
              if (lVar25 != 0) {
                *(uint *)(*(longlong *)(*(longlong *)(lVar25 + 0x20) + (ulonglong)(uVar9 >> 9) * 8)
                         + (ulonglong)(uVar9 & 0x1ff) * 4) = (uint)*puVar19;
              }
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < *(uint *)(puVar19 + 4));
          iVar18 = *(int *)(param_1 + 0x18);
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 < iVar18);
    }
    if (local_388 != 0) {
      if (((*(longlong **)(local_388 + 0x70) != (longlong *)0x0) &&
          (*(longlong *)(local_388 + 0x80) != 0)) &&
         (cVar7 = (**(code **)(**(longlong **)(local_388 + 0x70) + 0x58))(), cVar7 != '\0')) {
        cVar7 = (**(code **)(**(longlong **)(lVar16 + 0x80) + 0x58))();
        auVar29._8_8_ = extraout_XMM0_Qb;
        auVar29._0_8_ = extraout_XMM0_Qa;
        if (((cVar7 != '\0') && (*(longlong *)(local_388 + 0x90) != 0)) &&
           ((*param_3 == '\x01' &&
            ((0 < *(int *)(*(longlong *)(param_4 + 0x208) + 0x38) &&
             (lVar25 = **(longlong **)(*(longlong *)(param_4 + 0x208) + 0x30), lVar25 != 0)))))) {
          lVar16 = (longlong)(int)uStack_3a0;
          if (0 < lVar16) {
            lVar22 = 0;
            do {
              uVar27 = (ulonglong)*(uint *)(local_3a8 + lVar22 * 4);
              if (*(char *)(local_388 + 0xb1) == '\x01') {
                auVar29 = pmovsxwd(auVar29,*(undefined8 *)
                                            (*(longlong *)(local_388 + 0x90) + 8 + uVar27 * 0x10));
                fVar30 = (float)auVar29._0_4_ * 3.051851e-05;
                fVar32 = (float)auVar29._4_4_ * 3.051851e-05;
                fVar33 = (float)auVar29._8_4_ * 3.051851e-05;
              }
              else {
                auVar29 = pmovsxbd(auVar29,*(undefined4 *)
                                            (*(longlong *)(local_388 + 0x90) + 4 + uVar27 * 8));
                fVar30 = (float)auVar29._0_4_ * 0.007874016;
                fVar32 = (float)auVar29._4_4_ * 0.007874016;
                fVar33 = (float)auVar29._8_4_ * 0.007874016;
              }
              if (local_350 != '\0') {
                fVar33 = (float)((double)fVar33 * local_358);
                fVar32 = (float)((double)fVar32 * local_360);
                fVar31 = (float)((double)fVar30 * local_368);
                fVar30 = SQRT(fVar33 * fVar33 + fVar31 * fVar31 + fVar32 * fVar32);
                if (fVar30 <= 0.0) {
                  fVar30 = 0.0;
                  fVar32 = 0.0;
                  fVar33 = 0.0;
                }
                else {
                  fVar30 = 1.0 / fVar30;
                  fVar33 = fVar33 * fVar30;
                  fVar32 = fVar32 * fVar30;
                  fVar30 = fVar30 * fVar31;
                }
              }
              local_2e8 = (double)CONCAT44(fVar32,fVar30);
              uStack_2e0 = (double)CONCAT44(uStack_2e0._4_4_,fVar33);
              auVar29._0_8_ = FUN_146c2f9e2(lVar25,&local_2e8);
              auVar29._8_8_ = extraout_XMM0_Qb_01;
              lVar22 = lVar22 + 1;
            } while (lVar16 != lVar22);
          }
          param_3 = local_3c0;
          if ((char)local_3d8 != '\0') {
            uVar27 = local_3c8 & 0xffffffff;
            uVar24 = 0;
            do {
              uVar20 = *(uint *)(local_398 + uVar24 * 4);
              if (uVar20 != 0xffffffff) {
                lVar16 = *(longlong *)
                          (*(longlong *)(param_4 + 0x130) + (ulonglong)(uVar20 >> 9) * 8);
                local_2e8 = *(double *)(lVar16 + (ulonglong)(uVar20 & 0x1ff) * 0xc);
                uStack_2e0 = (double)CONCAT44(uStack_2e0._4_4_,
                                              *(undefined4 *)
                                               (lVar16 + 8 + (ulonglong)(uVar20 & 0x1ff) * 0xc));
                FUN_146c01580(lVar25,uVar20,&local_2e8,1);
              }
              uVar24 = uVar24 + 1;
            } while (uVar27 != uVar24);
          }
        }
      }
      lVar25 = local_388;
      if (((((local_388 != 0) && (*(longlong **)(local_388 + 0x70) != (longlong *)0x0)) &&
           (*(longlong *)(local_388 + 0x80) != 0)) &&
          ((cVar7 = (**(code **)(**(longlong **)(local_388 + 0x70) + 0x58))(), cVar7 != '\0' &&
           (cVar7 = (**(code **)(**(longlong **)(lVar25 + 0x80) + 0x58))(), cVar7 != '\0')))) &&
         ((*(longlong *)(local_388 + 0x90) != 0 && (param_3[1] == '\x01')))) {
        auVar28._0_8_ = FUN_146c1a132(*(undefined8 *)(param_4 + 0x208));
        auVar28._8_8_ = extraout_XMM0_Qb_00;
        if ((1 < *(int *)(*(longlong *)(param_4 + 0x208) + 0x38)) &&
           (lVar25 = *(longlong *)(*(longlong *)(*(longlong *)(param_4 + 0x208) + 0x30) + 8),
           lVar25 != 0)) {
          lVar16 = (longlong)(int)uStack_3a0;
          if (0 < lVar16) {
            lVar22 = 0;
            do {
              uVar27 = (ulonglong)*(uint *)(local_3a8 + lVar22 * 4);
              if (*(char *)(local_388 + 0xb1) == '\x01') {
                auVar29 = pmovsxwd(auVar28,*(undefined8 *)
                                            (*(longlong *)(local_388 + 0x90) + uVar27 * 0x10));
                fVar30 = (float)auVar29._0_4_ * 3.051851e-05;
                fVar32 = (float)auVar29._4_4_ * 3.051851e-05;
                fVar33 = (float)auVar29._8_4_ * 3.051851e-05;
              }
              else {
                auVar29 = pmovsxbd(auVar28,*(undefined4 *)
                                            (*(longlong *)(local_388 + 0x90) + uVar27 * 8));
                fVar30 = (float)auVar29._0_4_ * 0.007874016;
                fVar32 = (float)auVar29._4_4_ * 0.007874016;
                fVar33 = (float)auVar29._8_4_ * 0.007874016;
              }
              if (local_350 != '\0') {
                fVar33 = (float)((double)fVar33 * local_370);
                fVar32 = (float)((double)fVar32 * dStack_378);
                fVar31 = (float)((double)fVar30 * local_380);
                fVar30 = SQRT(fVar33 * fVar33 + fVar31 * fVar31 + fVar32 * fVar32);
                if (fVar30 <= 0.0) {
                  fVar30 = 0.0;
                  fVar32 = 0.0;
                  fVar33 = 0.0;
                }
                else {
                  fVar30 = 1.0 / fVar30;
                  fVar33 = fVar33 * fVar30;
                  fVar32 = fVar32 * fVar30;
                  fVar30 = fVar30 * fVar31;
                }
              }
              local_2e8 = (double)CONCAT44(fVar32,fVar30);
              uStack_2e0 = (double)CONCAT44(uStack_2e0._4_4_,fVar33);
              auVar28._0_8_ = FUN_146c2f9e2(lVar25,&local_2e8);
              auVar28._8_8_ = extraout_XMM0_Qb_02;
              lVar22 = lVar22 + 1;
            } while (lVar16 != lVar22);
          }
          if ((char)local_3d8 != '\0') {
            uVar27 = local_3c8 & 0xffffffff;
            uVar24 = 0;
            do {
              uVar20 = *(uint *)(local_398 + uVar24 * 4);
              if (uVar20 != 0xffffffff) {
                lVar16 = *(longlong *)
                          (*(longlong *)(param_4 + 0x130) + (ulonglong)(uVar20 >> 9) * 8);
                local_2e8 = *(double *)(lVar16 + (ulonglong)(uVar20 & 0x1ff) * 0xc);
                uStack_2e0 = (double)CONCAT44(uStack_2e0._4_4_,
                                              *(undefined4 *)
                                               (lVar16 + 8 + (ulonglong)(uVar20 & 0x1ff) * 0xc));
                FUN_146c01580(lVar25,uVar20,&local_2e8,1);
              }
              uVar24 = uVar24 + 1;
            } while (uVar27 != uVar24);
          }
        }
        if ((2 < *(int *)(*(longlong *)(param_4 + 0x208) + 0x38)) &&
           (lVar25 = *(longlong *)(*(longlong *)(*(longlong *)(param_4 + 0x208) + 0x30) + 0x10),
           lVar25 != 0)) {
          lVar16 = (longlong)(int)uStack_3a0;
          if (0 < lVar16) {
            lVar22 = 0;
            do {
              FUN_1484ac45a(&local_388,&local_2e8,*(undefined4 *)(local_3a8 + lVar22 * 4));
              FUN_146c2f9e2(lVar25,&local_2e8);
              lVar22 = lVar22 + 1;
            } while (lVar16 != lVar22);
          }
          if ((char)local_3d8 == '\0') {
            local_3d8 = local_3d8 & 0xffffffff00000000;
          }
          else {
            uVar24 = local_3c8 & 0xffffffff;
            uVar27 = 0;
            do {
              uVar20 = *(uint *)(local_398 + uVar27 * 4);
              lVar16 = local_398;
              if (uVar20 != 0xffffffff) {
                lVar16 = *(longlong *)
                          (*(longlong *)(param_4 + 0x130) + (ulonglong)(uVar20 >> 9) * 8);
                local_2e8 = *(double *)(lVar16 + (ulonglong)(uVar20 & 0x1ff) * 0xc);
                uStack_2e0 = (double)CONCAT44(uStack_2e0._4_4_,
                                              *(undefined4 *)
                                               (lVar16 + 8 + (ulonglong)(uVar20 & 0x1ff) * 0xc));
                lVar16 = FUN_146c01580(lVar25,uVar20,&local_2e8,1);
              }
              uVar27 = uVar27 + 1;
              local_3d8 = CONCAT44(local_3d8._4_4_,(int)CONCAT71((int7)((ulonglong)lVar16 >> 8),1));
            } while (uVar24 != uVar27);
          }
        }
      }
    }
    cVar7 = FUN_1484aad16(&local_388);
    if (((cVar7 != '\0') && (local_3c0[2] == '\x01')) &&
       (uVar20 = FUN_1484aad78(&local_388), 0 < (int)uVar20)) {
      (**(code **)(**(longlong **)(param_4 + 0x208) + 0xa8))(*(longlong **)(param_4 + 0x208),uVar20)
      ;
      local_3b8 = (ulonglong)uVar20;
      uVar27 = local_3c8 & 0xffffffff;
      uVar24 = 0;
      do {
        if ((longlong)uVar24 < (longlong)*(int *)(*(longlong *)(param_4 + 0x208) + 0x28)) {
          uVar11 = *(undefined8 *)
                    (*(longlong *)(*(longlong *)(param_4 + 0x208) + 0x20) + uVar24 * 8);
        }
        else {
          uVar11 = 0;
        }
        lVar25 = (longlong)(int)uStack_3a0;
        if (0 < lVar25) {
          lVar16 = 0;
          do {
            FUN_1484ac614(&local_388,&local_2e8,*(undefined4 *)(local_3a8 + lVar16 * 4),
                          uVar24 & 0xffffffff);
            FUN_146c2d0a4(uVar11,&local_2e8);
            lVar16 = lVar16 + 1;
          } while (lVar25 != lVar16);
        }
        if ((char)local_3d8 != '\0') {
          uVar26 = 0;
          do {
            uVar20 = *(uint *)(local_398 + uVar26 * 4);
            if (uVar20 != 0xffffffff) {
              lVar25 = *(longlong *)(*(longlong *)(param_4 + 0x130) + (ulonglong)(uVar20 >> 9) * 8);
              local_2e8 = *(double *)(lVar25 + (ulonglong)(uVar20 & 0x1ff) * 0xc);
              uStack_2e0 = (double)CONCAT44(uStack_2e0._4_4_,
                                            *(undefined4 *)
                                             (lVar25 + 8 + (ulonglong)(uVar20 & 0x1ff) * 0xc));
              FUN_146c01486(uVar11,uVar20,&local_2e8,1);
            }
            uVar26 = uVar26 + 1;
          } while (uVar27 != uVar26);
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 != local_3b8);
    }
    pcVar23 = local_3c0;
    uVar9 = local_3cc;
    if ((param_5 != '\0') && (local_3c0[3] == '\x01')) {
      FUN_146c17f82(*(undefined8 *)(param_4 + 0x208));
      uVar11 = *(undefined8 *)(*(longlong *)(param_4 + 0x208) + 0x40);
      lVar25 = (longlong)(int)uStack_3a0;
      if (0 < lVar25) {
        lVar16 = 0;
        do {
          local_2e8 = (double)CONCAT44(local_2e8._4_4_,*(undefined4 *)(local_3a8 + lVar16 * 4));
          (*(code *)*param_6)(&local_c8,param_6[1],&local_2e8);
          local_2e8 = (double)CONCAT44((float)local_c8._1_1_ * 0.003921569,
                                       (float)local_c8._2_1_ * 0.003921569);
          uStack_2e0 = (double)CONCAT44((float)local_c8._3_1_ * 0.003921569,
                                        (float)(byte)local_c8 * 0.003921569);
          FUN_146c32f5e(uVar11,&local_2e8);
          lVar16 = lVar16 + 1;
        } while (lVar25 != lVar16);
      }
      pcVar23 = local_3c0;
      uVar9 = local_3cc;
      if ((char)local_3d8 != '\0') {
        uVar27 = local_3c8 & 0xffffffff;
        uVar24 = 0;
        do {
          uVar20 = *(uint *)(local_398 + uVar24 * 4);
          if (uVar20 != 0xffffffff) {
            lVar25 = *(longlong *)(*(longlong *)(param_4 + 0x130) + (ulonglong)(uVar20 >> 9) * 8);
            local_2e8 = *(double *)(lVar25 + (ulonglong)(uVar20 & 0x1ff) * 0xc);
            uStack_2e0 = (double)CONCAT44(uStack_2e0._4_4_,
                                          *(undefined4 *)
                                           (lVar25 + 8 + (ulonglong)(uVar20 & 0x1ff) * 0xc));
            FUN_146c2a048(uVar11,uVar20,&local_2e8,1);
          }
          uVar24 = uVar24 + 1;
        } while (uVar27 != uVar24);
      }
    }
    if (((local_388 != 0) && (*(int *)(local_388 + 0x140) != -1)) &&
       ((*(int *)(local_388 + 0x178) != 0 && (pcVar23[5] == '\x01')))) {
      puVar10 = (undefined8 *)FUN_14494321d(0x30);
      puVar10[1] = 0;
      *puVar10 = &PTR_FUN_149f36420;
      puVar10[2] = param_4;
      FUN_146be9ba2(puVar10 + 3);
      local_2b8 = 0;
      local_2e8 = 0.0;
      uStack_2e0 = 0.0;
      local_2d8 = 0.0;
      uStack_2d0 = 0;
      local_2c8 = 0;
      uStack_2c4 = 0;
      uStack_2c0 = 0;
      uStack_2bc = 0;
      uStack_2b0 = 0xc00000000;
      FUN_146bea236(puVar10,&local_2e8);
      uVar27 = (ulonglong)(int)uStack_3a0;
      if (0 < (longlong)uVar27) {
        uVar24 = 0;
        do {
          lVar25 = (longlong)*(int *)(local_3a8 + uVar24 * 4) * 0x30;
          local_c8 = *(double *)(local_310 + lVar25);
          dStack_c0 = ((double *)(local_310 + lVar25))[1];
          puVar1 = (undefined4 *)(local_310 + 0x10 + lVar25);
          local_b8 = *puVar1;
          uStack_b4 = puVar1[1];
          uStack_b0 = puVar1[2];
          uStack_ac = puVar1[3];
          puVar1 = (undefined4 *)(local_310 + 0x20 + lVar25);
          local_a8 = *puVar1;
          uStack_a4 = puVar1[1];
          uStack_a0 = puVar1[2];
          uStack_9c = puVar1[3];
          local_2f8 = 0xc00000002;
          uStack_2f0 = 0x10000000001;
          local_2b8 = 0;
          uStack_2b0 = 0xc00000000;
          local_300 = &local_2e8;
          FUN_1484ac716(&local_300,&local_c8,&uStack_b0,&local_2f8);
          FUN_146bea50a((ulonglong)(((uint)uVar24 & 0x1ff) << 6) +
                        *(longlong *)(puVar10[4] + (uVar24 >> 9 & 0x7fffff) * 8),&local_2e8);
          if (local_2b8 != 0) {
            FUN_1400020a8();
          }
          uVar24 = uVar24 + 1;
        } while (uVar27 != uVar24);
      }
      uVar11 = DAT_14c99c780;
      puVar10[1] = DAT_14c99c780;
      FUN_146c18154(*(undefined8 *)(param_4 + 0x208),uVar11,puVar10);
      plVar5 = local_3b0;
      uVar20 = *(uint *)(local_3b0 + 1);
      uVar27 = (ulonglong)uVar20;
      uVar9 = local_3cc;
      if ((uVar27 != 0) &&
         (FUN_146c26078(*(undefined8 *)(param_4 + 0x208),uVar27), uVar9 = local_3cc, 0 < (int)uVar20
         )) {
        lVar25 = *(longlong *)(param_4 + 0x208);
        lVar16 = *(longlong *)(lVar25 + 0xd8);
        lVar22 = *(longlong *)(lVar25 + 0xd0);
        lVar4 = *(longlong *)(lVar25 + 0xc0);
        lVar25 = *(longlong *)(lVar25 + 200);
        lVar21 = 0;
        lVar14 = 0;
        do {
          *(undefined8 *)(*(longlong *)(lVar4 + 0x18) + lVar21 * 2) =
               *(undefined8 *)(*plVar5 + lVar14);
          *(undefined4 *)(*(longlong *)(lVar25 + 0x18) + lVar21) =
               *(undefined4 *)(*plVar5 + 8 + lVar14);
          puVar10 = (undefined8 *)(plVar5[2] + lVar14 * 8);
          puVar17 = (undefined8 *)(lVar14 * 8 + *(longlong *)(lVar22 + 0x18));
          for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
            *puVar17 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar17 = puVar17 + 1;
          }
          puVar10 = (undefined8 *)(*(longlong *)(lVar16 + 0x18) + lVar21 * 4);
          *puVar10 = &DAT_3f8000003f800000;
          puVar10[1] = &DAT_3f8000003f800000;
          lVar14 = lVar14 + 0xc;
          lVar21 = lVar21 + 4;
        } while (uVar27 * 0xc != lVar14);
      }
    }
LAB_1484aa512:
    if (local_3a8 != 0) {
      FUN_1400020a8();
    }
    if (local_398 != 0) {
      FUN_1400020a8();
    }
    FUN_1484aadd8(&local_388);
  }
  if ((local_90 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffff01;
}



// FUNCTION 1484aa994 FUN_1484aa994 body=753 status=ok
// SIG undefined FUN_1484aa994(void)

longlong * FUN_1484aa994(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  int iVar6;
  char cVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = param_2;
  lVar10 = DAT_14c846518;
  param_1[1] = DAT_14c846510;
  param_1[2] = lVar10;
  param_1[3] = DAT_14c846520;
  lVar10 = DAT_14c846518;
  param_1[4] = DAT_14c846510;
  param_1[5] = lVar10;
  param_1[6] = DAT_14c846520;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  iVar11 = *(int *)(param_2 + 0x18);
  iVar9 = iVar11 + 1;
  if (-2 < iVar11) {
    if (iVar11 < 0) {
      iVar9 = -1;
    }
    else {
      plVar1 = param_1 + 10;
      FUN_14481578e(plVar1);
      iVar9 = *(int *)(param_2 + 0x18);
      if (-1 < iVar9) {
        plVar2 = param_1 + 8;
        if (*(int *)((longlong)param_1 + 0x4c) < iVar9) {
          FUN_1484ac302(plVar2);
          iVar9 = *(int *)(param_2 + 0x18);
        }
        if (iVar9 != 0) {
          lVar10 = *(longlong *)(param_2 + 0x10);
          lVar12 = (longlong)iVar9 * 0xf8;
          do {
            iVar9 = (int)param_1[0xb];
            *(uint *)(param_1 + 0xb) = iVar9 + 1U;
            if (*(uint *)((longlong)param_1 + 0x5c) < iVar9 + 1U) {
              FUN_1446f48e2(plVar1,iVar9);
            }
            lVar8 = param_1[0xc];
            *(int *)(param_1[10] + (longlong)iVar9 * 4) = (int)lVar8;
            *(int *)(param_1 + 0xc) = (int)lVar8 + *(int *)(lVar10 + 8);
            iVar9 = (int)param_1[9];
            *(uint *)(param_1 + 9) = iVar9 + 1U;
            if (*(uint *)((longlong)param_1 + 0x4c) < iVar9 + 1U) {
              FUN_1484ac362(plVar2,iVar9);
            }
            *(longlong *)(*plVar2 + (longlong)iVar9 * 8) = lVar10;
            lVar10 = lVar10 + 0xf8;
            lVar12 = lVar12 + -0xf8;
          } while (lVar12 != 0);
        }
        iVar9 = (int)param_1[0xb];
        *(uint *)(param_1 + 0xb) = iVar9 + 1U;
        if (*(uint *)((longlong)param_1 + 0x5c) < iVar9 + 1U) {
          FUN_1446f48e2(plVar1,iVar9);
        }
        *(int *)(param_1[10] + (longlong)iVar9 * 4) = (int)param_1[0xc];
        FUN_147cc9ff2(param_2 + 0x20,param_1 + 0xd);
        if ((*(int *)(param_2 + 0x140) != -1) && (*(int *)(param_2 + 0x178) != 0)) {
          iVar9 = 0;
          if ((*param_1 != 0) &&
             ((cVar7 = FUN_1461c3a34(*param_1 + 0xb8), cVar7 != '\0' &&
              (iVar9 = *(int *)(*param_1 + 0xec), iVar9 < 0)))) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar9);
          }
          plVar1 = param_1 + 0xf;
          if (*(int *)((longlong)param_1 + 0x84) < iVar9) {
            FUN_1484ac3e8(plVar1,iVar9);
          }
          if ((longlong)*(int *)(param_2 + 0x18) != 0) {
            lVar10 = *(longlong *)(param_2 + 0x10);
            local_80 = (longlong)*(int *)(param_2 + 0x18) * 0xf8 + lVar10;
            do {
              if (0 < *(int *)(lVar10 + 0x48)) {
                iVar9 = *(int *)(lVar10 + 0x10);
                iVar11 = *(int *)(lVar10 + 0x48) + iVar9;
                do {
                  FUN_147ccf02c(param_2 + 0x138,&local_78,iVar9);
                  iVar6 = *(int *)(lVar10 + 0x40);
                  lVar12 = 0;
                  do {
                    uVar5 = *(ushort *)((longlong)&local_78 + lVar12 * 2);
                    if ((int)(uint)uVar5 < iVar6) {
                      *(undefined2 *)((longlong)&local_78 + lVar12 * 2) =
                           *(undefined2 *)(*(longlong *)(lVar10 + 0x38) + (ulonglong)uVar5 * 2);
                    }
                    lVar12 = lVar12 + 1;
                  } while (lVar12 != 0xc);
                  iVar6 = (int)param_1[0x10];
                  *(uint *)(param_1 + 0x10) = iVar6 + 1U;
                  if (*(uint *)((longlong)param_1 + 0x84) < iVar6 + 1U) {
                    FUN_147a16750(plVar1,iVar6);
                  }
                  lVar12 = *plVar1;
                  lVar8 = (longlong)iVar6 * 0x30;
                  puVar4 = (undefined8 *)(lVar12 + 0x20 + lVar8);
                  *puVar4 = local_58;
                  puVar4[1] = uStack_50;
                  puVar4 = (undefined8 *)(lVar12 + 0x10 + lVar8);
                  *puVar4 = local_68;
                  puVar4[1] = uStack_60;
                  puVar3 = (undefined4 *)(lVar12 + lVar8);
                  *puVar3 = local_78;
                  puVar3[1] = uStack_74;
                  puVar3[2] = uStack_70;
                  puVar3[3] = uStack_6c;
                  iVar9 = iVar9 + 1;
                } while (iVar9 < iVar11);
              }
              lVar10 = lVar10 + 0xf8;
            } while (lVar10 != local_80);
          }
        }
        if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return param_1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar9);
}



// FUNCTION 1484aac88 FUN_1484aac88 body=141 status=ok
// SIG undefined FUN_1484aac88(void)

void FUN_1484aac88(longlong param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  
  if ((int)*(uint *)(param_1 + 0x58) < 1) {
    lVar8 = -1;
  }
  else {
    iVar7 = 0;
    uVar9 = *(uint *)(param_1 + 0x58);
    do {
      uVar1 = (uVar9 >> 1) + iVar7;
      if (*(int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar1 * 4) <= param_3) {
        iVar7 = uVar1 + (uVar9 & 1);
      }
      bVar5 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar5);
    lVar8 = (longlong)(iVar7 + -1);
  }
  lVar4 = *(longlong *)(param_1 + 0x68);
  iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + lVar8 * 8) + 4);
  iVar6 = (param_3 - *(int *)(*(longlong *)(param_1 + 0x50) + lVar8 * 4)) * 3;
  uVar2 = *(undefined4 *)(lVar4 + (longlong)(iVar7 + 2 + iVar6) * 4);
  uVar3 = *(undefined4 *)(lVar4 + (longlong)(iVar7 + 1 + iVar6) * 4);
  *param_2 = *(undefined4 *)(lVar4 + (longlong)(iVar7 + iVar6) * 4);
  param_2[1] = uVar3;
  param_2[2] = uVar2;
  return;
}



// FUNCTION 1484aad16 FUN_1484aad16 body=97 status=ok
// SIG undefined FUN_1484aad16(void)

undefined8 FUN_1484aad16(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_1;
  if ((((lVar1 != 0) && (*(longlong **)(lVar1 + 0x70) != (longlong *)0x0)) &&
      (*(longlong *)(lVar1 + 0x80) != 0)) &&
     (((cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x70) + 0x58))(), cVar2 != '\0' &&
       (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x80) + 0x58))(), cVar2 != '\0')) &&
      (lVar1 = *param_1, *(longlong *)(lVar1 + 0x98) != 0)))) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),0 < *(int *)(lVar1 + 0xa8));
  }
  return 0;
}



// FUNCTION 1484aad78 FUN_1484aad78 body=95 status=ok
// SIG undefined FUN_1484aad78(void)

undefined4 FUN_1484aad78(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar1 = *param_1;
  uVar3 = 0;
  uVar4 = 0;
  if (((lVar1 != 0) && (uVar4 = uVar3, *(longlong **)(lVar1 + 0x70) != (longlong *)0x0)) &&
     (*(longlong *)(lVar1 + 0x80) != 0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x70) + 0x58))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x80) + 0x58))();
      if ((cVar2 != '\0') && (*(longlong *)(*param_1 + 0x98) != 0)) {
        uVar4 = *(undefined4 *)(*param_1 + 0xa8);
      }
    }
  }
  return uVar4;
}



// FUNCTION 1484aadd8 FUN_1484aadd8 body=76 status=ok
// SIG undefined FUN_1484aadd8(void)

void FUN_1484aadd8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1484aae24 FUN_1484aae24 body=142 status=ok
// SIG undefined FUN_1484aae24(void)

void FUN_1484aae24(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 **local_50;
  longlong local_40;
  undefined1 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = FUN_147cc7ccc(param_1 + 0xf8);
  }
  local_30 = &local_40;
  local_50 = &local_38;
  local_38 = &LAB_143b6b2f4;
  local_40 = param_1;
  FUN_1484a969e(param_1,param_2,param_3,param_4);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484aaeb4 FUN_1484aaeb4 body=4245 status=ok
// SIG undefined FUN_1484aaeb4(void)

ulonglong FUN_1484aaeb4(longlong param_1,char *param_2,longlong param_3,char param_4,
                       undefined8 *param_5)

{
  double dVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  char *pcVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  undefined7 uVar16;
  longlong lVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar22 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar23 [16];
  undefined8 extraout_XMM0_Qb_02;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_3a8 [32];
  undefined1 local_388;
  char local_379;
  undefined8 local_378;
  char *local_370;
  ulonglong local_368;
  ulonglong local_360;
  byte local_354 [4];
  undefined4 uStack_350;
  undefined4 local_34c;
  longlong local_348;
  undefined8 uStack_340;
  longlong local_338;
  ulonglong uStack_330;
  longlong local_328;
  double local_320;
  double dStack_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  char local_2f0;
  longlong local_2e8;
  longlong local_2d8;
  int local_2c8;
  char local_2bc;
  undefined2 uStack_2bb;
  undefined8 local_2b8;
  undefined8 local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_288;
  undefined2 local_280;
  undefined1 local_27e;
  ulonglong local_90;
  undefined8 extraout_XMM0_Qb_00;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if ((((param_1 == 0) || (*(longlong **)(param_1 + 0xd0) == (longlong *)0x0)) ||
      (*(longlong *)(param_1 + 0xe0) == 0)) ||
     ((cVar3 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x58))(), cVar3 == '\0' ||
      (cVar3 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x58))(), cVar3 == '\0')))) {
    uVar21 = 0;
  }
  else {
    FUN_1484abf4a(&local_328,param_1);
    local_320 = *(double *)(param_2 + 8);
    dStack_318 = *(double *)(param_2 + 0x10);
    local_310 = *(double *)(param_2 + 0x18);
    dVar1 = *(double *)(param_2 + 8);
    dVar2 = *(double *)(param_2 + 0x10);
    uVar21 = -(ulonglong)(-dVar1 <= dVar1);
    local_308 = (double)(-(ulonglong)
                          (1e-08 < (double)(uVar21 & (ulonglong)dVar1 | ~uVar21 & (ulonglong)-dVar1)
                          ) & (ulonglong)(1.0 / dVar1));
    uVar21 = -(ulonglong)(-dVar2 <= dVar2);
    local_300 = (double)(-(ulonglong)
                          (1e-08 < (double)(uVar21 & (ulonglong)dVar2 | ~uVar21 & (ulonglong)-dVar2)
                          ) & (ulonglong)(1.0 / dVar2));
    dVar1 = *(double *)(param_2 + 0x18);
    uVar21 = -(ulonglong)(-dVar1 <= dVar1);
    local_2f8 = (double)(-(ulonglong)
                          (1e-08 < (double)(uVar21 & (ulonglong)dVar1 | ~uVar21 & (ulonglong)-dVar1)
                          ) & (ulonglong)(1.0 / dVar1));
    local_2f0 = '\0';
    local_388 = 0;
    local_370 = param_2;
    FUN_1411b354a(&local_2b8,0,0,0);
    FUN_146c00942(param_3,&local_2b8);
    FUN_141082778(&local_2b8);
    FUN_14582eef4(param_3,0);
    if (((*local_370 != '\0') || ((local_370[1] != '\0' || (local_370[2] != '\0')))) ||
       ((local_370[3] != '\0' || (local_370[4] == '\x01')))) {
      FUN_14582ed12(param_3);
    }
    local_338 = 0;
    uStack_330 = 0;
    local_348 = 0;
    uStack_340 = 0;
    uVar16 = (undefined7)((ulonglong)&local_2b8 >> 8);
    if ((local_328 == 0) || (cVar3 = FUN_1461c3a34(local_328 + 0x118), cVar3 == '\0')) {
      uVar21 = CONCAT71(uVar16,1);
      FUN_144a127d2(&local_348,0);
    }
    else {
      iVar4 = FUN_144b2ab14(local_328);
      uVar21 = CONCAT71(uVar16,1);
      FUN_144a127d2(&local_348,iVar4);
      if (0 < iVar4) {
        uVar21 = 0;
        iVar14 = 0;
        do {
          lVar11 = *(longlong *)(local_328 + 0x140);
          uVar10 = (ulonglong)(uint)(*(int *)(local_328 + 0x148) * iVar14);
          local_2a8 = (double)*(float *)(lVar11 + 8 + uVar10) * local_310;
          local_2b0 = (double)*(float *)(lVar11 + 4 + uVar10) * dStack_318;
          local_2b8 = (double)*(float *)(lVar11 + uVar10) * local_320;
          local_298 = DAT_14c846338;
          local_2a0 = DAT_14c846330;
          local_28c = DAT_14c846338;
          local_294 = DAT_14c846330;
          local_288 = DAT_14c84635c;
          local_280 = 0;
          local_27e = 0;
          iVar5 = FUN_146c02208(param_3,&local_2b8);
          *(int *)(local_348 + (longlong)iVar5 * 4) = iVar14;
          if (iVar14 != iVar5) {
            FUN_14582f278(param_3);
            goto LAB_1484ab245;
          }
          iVar14 = iVar14 + 1;
          uVar21 = (ulonglong)(iVar4 <= iVar14);
        } while (iVar14 != iVar4);
      }
    }
    pcVar12 = local_370;
    local_379 = param_4;
    if ((local_328 == 0) || (*(char *)(local_328 + 0x1c8) == '\0')) {
      uVar10 = uStack_330 >> 0x20;
      uStack_330 = uStack_330 & 0xffffffff00000000;
      if ((int)uVar10 == 0) {
        local_378 = (ulonglong)local_378._4_4_ << 0x20;
      }
      else {
        local_378 = (ulonglong)local_378._4_4_ << 0x20;
        FUN_14481578e(&local_338,0);
      }
      local_368 = 0;
    }
    else {
      uVar10 = (ulonglong)local_2c8;
      FUN_1448156a8(&local_338);
      pcVar12 = local_370;
      local_368 = uVar10;
      if ((longlong)uVar10 < 1) {
        local_378 = (ulonglong)local_378._4_4_ << 0x20;
      }
      else {
        uVar10 = 0;
        do {
          local_378 = uVar10;
          FUN_1484ac0ae(&local_328,local_354);
          local_2b8 = (double)CONCAT44(uStack_350,
                                       CONCAT13(local_354[3],
                                                CONCAT12(local_354[2],
                                                         CONCAT11(local_354[1],local_354[0]))));
          local_2b0 = (double)CONCAT44(local_2b0._4_4_,local_34c);
          uVar9 = FUN_146c01152(param_3,&local_2b8);
          if ((~(uint)uVar9 & 0xfffffffd) != 0) {
            if ((uint)uVar9 == 0xfffffffe) {
              uVar6 = FUN_146c061e0(param_3,CONCAT13(local_354[3],
                                                     CONCAT12(local_354[2],
                                                              CONCAT11(local_354[1],local_354[0]))),
                                    uStack_350);
              uVar7 = FUN_146c061e0(param_3,uStack_350,local_34c);
              uVar8 = FUN_146c061e0(param_3,local_34c);
              _local_2bc = 0;
              if ((uVar6 != 0xffffffff) &&
                 (*(int *)(*(longlong *)
                            (*(longlong *)(param_3 + 0x1c0) + (ulonglong)(uVar6 >> 9) * 8) + 0xc +
                          (ulonglong)((uVar6 & 0x1ff) << 4)) != -1)) {
                _local_2bc = 0x101;
              }
              if ((uVar7 != 0xffffffff) &&
                 (*(int *)(*(longlong *)
                            (*(longlong *)(param_3 + 0x1c0) + (ulonglong)(uVar7 >> 9) * 8) + 0xc +
                          (ulonglong)((uVar7 & 0x1ff) << 4)) != -1)) {
                _local_2bc = CONCAT21(0x101,local_2bc);
              }
              if ((uVar8 != 0xffffffff) &&
                 (*(int *)(*(longlong *)
                            (*(longlong *)(param_3 + 0x1c0) + (ulonglong)(uVar8 >> 9) * 8) + 0xc +
                          (ulonglong)((uVar8 & 0x1ff) << 4)) != -1)) {
                _local_2bc = CONCAT12(1,_local_2bc);
                _local_2bc = CONCAT21(uStack_2bb,1);
              }
              lVar11 = 0;
              do {
                if ((&local_2bc)[lVar11] == '\x01') {
                  iVar4 = *(int *)(local_354 + lVar11 * 4);
                  lVar15 = *(longlong *)(local_328 + 0x140);
                  uVar10 = (ulonglong)(uint)(*(int *)(local_328 + 0x148) * iVar4);
                  local_2a8 = (double)*(float *)(lVar15 + 8 + uVar10) * local_310;
                  local_2b0 = (double)*(float *)(lVar15 + 4 + uVar10) * dStack_318;
                  local_2b8 = (double)*(float *)(lVar15 + uVar10) * local_320;
                  local_298 = DAT_14c846338;
                  local_2a0 = DAT_14c846330;
                  local_28c = DAT_14c846338;
                  local_294 = DAT_14c846330;
                  local_288 = DAT_14c84635c;
                  local_280 = 0;
                  local_27e = 0;
                  iVar14 = FUN_146c02208(param_3,&local_2b8);
                  *(int *)(local_354 + lVar11 * 4) = iVar14;
                  FUN_144a127d2(&local_348,iVar14 + 1);
                  *(int *)(local_348 + (longlong)iVar14 * 4) = iVar4;
                }
                lVar11 = lVar11 + 1;
              } while (lVar11 != 3);
              local_2b8 = (double)CONCAT44(uStack_350,
                                           CONCAT13(local_354[3],
                                                    CONCAT12(local_354[2],
                                                             CONCAT11(local_354[1],local_354[0]))));
              local_2b0 = (double)CONCAT44(local_2b0._4_4_,local_34c);
              uVar9 = FUN_146c01152(param_3,&local_2b8);
              pcVar12 = local_370;
            }
            *(int *)(local_338 + local_378 * 4) = (int)uVar9;
          }
          uVar10 = local_378 + 1;
        } while (uVar10 != local_368);
        local_378 = CONCAT44(local_378._4_4_,(int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1));
      }
    }
    if (pcVar12[4] == '\0') {
      lVar11 = 0;
    }
    else {
      FUN_14582ed9a(*(undefined8 *)(param_3 + 0x208));
      lVar11 = *(longlong *)(*(longlong *)(param_3 + 0x208) + 0x48);
    }
    lVar15 = local_328;
    iVar4 = *(int *)(param_1 + 0x38);
    if (0 < iVar4) {
      lVar20 = 0;
      do {
        lVar17 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar17 = param_1 + 0x10;
        }
        if (*(int *)(lVar17 + 8 + lVar20 * 0x1c) != 0) {
          puVar18 = (undefined4 *)(lVar17 + lVar20 * 0x1c);
          iVar4 = (int)lVar20 + 1;
          uVar6 = 0;
          do {
            uVar7 = *(uint *)(local_338 + (longlong)(int)((uint)puVar18[1] / 3 + uVar6) * 4);
            if (uVar7 != 0xffffffff) {
              if (*(char *)(param_3 + 0x1a8) == '\x01') {
                *(int *)(*(longlong *)(*(longlong *)(param_3 + 0x198) + (ulonglong)(uVar7 >> 9) * 8)
                        + (ulonglong)(uVar7 & 0x1ff) * 4) = (int)lVar20;
                iVar14 = *(int *)(param_3 + 0x1b0);
                if (*(int *)(param_3 + 0x1b0) < iVar4) {
                  iVar14 = iVar4;
                }
                *(int *)(param_3 + 0x1b0) = iVar14;
              }
              if (lVar11 != 0) {
                *(undefined4 *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x20) + (ulonglong)(uVar7 >> 9) * 8) +
                 (ulonglong)(uVar7 & 0x1ff) * 4) = *puVar18;
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < (uint)puVar18[2]);
          iVar4 = *(int *)(param_1 + 0x38);
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 < iVar4);
    }
    if (local_328 != 0) {
      if (((*(longlong **)(local_328 + 0xd0) != (longlong *)0x0) &&
          (*(longlong *)(local_328 + 0xe0) != 0)) &&
         (cVar3 = (**(code **)(**(longlong **)(local_328 + 0xd0) + 0x58))(), cVar3 != '\0')) {
        cVar3 = (**(code **)(**(longlong **)(lVar15 + 0xe0) + 0x58))();
        auVar23._8_8_ = extraout_XMM0_Qb;
        auVar23._0_8_ = extraout_XMM0_Qa;
        if (((cVar3 != '\0') && (*(longlong *)(local_328 + 0xf0) != 0)) &&
           ((*local_370 == '\x01' &&
            ((0 < *(int *)(*(longlong *)(param_3 + 0x208) + 0x38) &&
             (lVar11 = **(longlong **)(*(longlong *)(param_3 + 0x208) + 0x30), lVar11 != 0)))))) {
          lVar15 = (longlong)(int)uStack_340;
          if (0 < lVar15) {
            lVar20 = 0;
            do {
              uVar10 = (ulonglong)*(uint *)(local_348 + lVar20 * 4);
              if (*(char *)(local_328 + 0x111) == '\x01') {
                auVar23 = pmovsxwd(auVar23,*(undefined8 *)
                                            (*(longlong *)(local_328 + 0xf0) + 8 + uVar10 * 0x10));
                fVar24 = (float)auVar23._0_4_ * 3.051851e-05;
                fVar26 = (float)auVar23._4_4_ * 3.051851e-05;
                fVar27 = (float)auVar23._8_4_ * 3.051851e-05;
              }
              else {
                auVar23 = pmovsxbd(auVar23,*(undefined4 *)
                                            (*(longlong *)(local_328 + 0xf0) + 4 + uVar10 * 8));
                fVar24 = (float)auVar23._0_4_ * 0.007874016;
                fVar26 = (float)auVar23._4_4_ * 0.007874016;
                fVar27 = (float)auVar23._8_4_ * 0.007874016;
              }
              if (local_2f0 != '\0') {
                fVar27 = (float)((double)fVar27 * local_2f8);
                fVar26 = (float)((double)fVar26 * local_300);
                fVar25 = (float)((double)fVar24 * local_308);
                fVar24 = SQRT(fVar27 * fVar27 + fVar25 * fVar25 + fVar26 * fVar26);
                if (fVar24 <= 0.0) {
                  fVar24 = 0.0;
                  fVar26 = 0.0;
                  fVar27 = 0.0;
                }
                else {
                  fVar24 = 1.0 / fVar24;
                  fVar27 = fVar27 * fVar24;
                  fVar26 = fVar26 * fVar24;
                  fVar24 = fVar24 * fVar25;
                }
              }
              local_2b8 = (double)CONCAT44(fVar26,fVar24);
              local_2b0 = (double)CONCAT44(local_2b0._4_4_,fVar27);
              auVar23._0_8_ = FUN_146c2f9e2(lVar11,&local_2b8);
              auVar23._8_8_ = extraout_XMM0_Qb_01;
              lVar20 = lVar20 + 1;
            } while (lVar15 != lVar20);
          }
          if ((char)local_378 != '\0') {
            uVar10 = local_368 & 0xffffffff;
            uVar19 = 0;
            do {
              uVar6 = *(uint *)(local_338 + uVar19 * 4);
              if (uVar6 != 0xffffffff) {
                lVar15 = *(longlong *)(*(longlong *)(param_3 + 0x130) + (ulonglong)(uVar6 >> 9) * 8)
                ;
                local_2b8 = *(double *)(lVar15 + (ulonglong)(uVar6 & 0x1ff) * 0xc);
                local_2b0 = (double)CONCAT44(local_2b0._4_4_,
                                             *(undefined4 *)
                                              (lVar15 + 8 + (ulonglong)(uVar6 & 0x1ff) * 0xc));
                FUN_146c01580(lVar11,uVar6,&local_2b8,1);
              }
              uVar19 = uVar19 + 1;
            } while (uVar10 != uVar19);
          }
        }
      }
      lVar11 = local_328;
      if (((((local_328 != 0) && (*(longlong **)(local_328 + 0xd0) != (longlong *)0x0)) &&
           (*(longlong *)(local_328 + 0xe0) != 0)) &&
          ((cVar3 = (**(code **)(**(longlong **)(local_328 + 0xd0) + 0x58))(), cVar3 != '\0' &&
           (cVar3 = (**(code **)(**(longlong **)(lVar11 + 0xe0) + 0x58))(), cVar3 != '\0')))) &&
         ((*(longlong *)(local_328 + 0xf0) != 0 && (local_370[1] == '\x01')))) {
        auVar22._0_8_ = FUN_146c1a132(*(undefined8 *)(param_3 + 0x208));
        auVar22._8_8_ = extraout_XMM0_Qb_00;
        if ((1 < *(int *)(*(longlong *)(param_3 + 0x208) + 0x38)) &&
           (lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x208) + 0x30) + 8),
           lVar11 != 0)) {
          lVar15 = (longlong)(int)uStack_340;
          if (0 < lVar15) {
            lVar20 = 0;
            do {
              uVar10 = (ulonglong)*(uint *)(local_348 + lVar20 * 4);
              if (*(char *)(local_328 + 0x111) == '\x01') {
                auVar23 = pmovsxwd(auVar22,*(undefined8 *)
                                            (*(longlong *)(local_328 + 0xf0) + uVar10 * 0x10));
                fVar24 = (float)auVar23._0_4_ * 3.051851e-05;
                fVar26 = (float)auVar23._4_4_ * 3.051851e-05;
                fVar27 = (float)auVar23._8_4_ * 3.051851e-05;
              }
              else {
                auVar23 = pmovsxbd(auVar22,*(undefined4 *)
                                            (*(longlong *)(local_328 + 0xf0) + uVar10 * 8));
                fVar24 = (float)auVar23._0_4_ * 0.007874016;
                fVar26 = (float)auVar23._4_4_ * 0.007874016;
                fVar27 = (float)auVar23._8_4_ * 0.007874016;
              }
              if (local_2f0 != '\0') {
                fVar27 = (float)((double)fVar27 * local_310);
                fVar26 = (float)((double)fVar26 * dStack_318);
                fVar25 = (float)((double)fVar24 * local_320);
                fVar24 = SQRT(fVar27 * fVar27 + fVar25 * fVar25 + fVar26 * fVar26);
                if (fVar24 <= 0.0) {
                  fVar24 = 0.0;
                  fVar26 = 0.0;
                  fVar27 = 0.0;
                }
                else {
                  fVar24 = 1.0 / fVar24;
                  fVar27 = fVar27 * fVar24;
                  fVar26 = fVar26 * fVar24;
                  fVar24 = fVar24 * fVar25;
                }
              }
              local_2b8 = (double)CONCAT44(fVar26,fVar24);
              local_2b0 = (double)CONCAT44(local_2b0._4_4_,fVar27);
              auVar22._0_8_ = FUN_146c2f9e2(lVar11,&local_2b8);
              auVar22._8_8_ = extraout_XMM0_Qb_02;
              lVar20 = lVar20 + 1;
            } while (lVar15 != lVar20);
          }
          if ((char)local_378 != '\0') {
            uVar10 = local_368 & 0xffffffff;
            uVar19 = 0;
            do {
              uVar6 = *(uint *)(local_338 + uVar19 * 4);
              if (uVar6 != 0xffffffff) {
                lVar15 = *(longlong *)(*(longlong *)(param_3 + 0x130) + (ulonglong)(uVar6 >> 9) * 8)
                ;
                local_2b8 = *(double *)(lVar15 + (ulonglong)(uVar6 & 0x1ff) * 0xc);
                local_2b0 = (double)CONCAT44(local_2b0._4_4_,
                                             *(undefined4 *)
                                              (lVar15 + 8 + (ulonglong)(uVar6 & 0x1ff) * 0xc));
                FUN_146c01580(lVar11,uVar6,&local_2b8,1);
              }
              uVar19 = uVar19 + 1;
            } while (uVar10 != uVar19);
          }
        }
        if ((2 < *(int *)(*(longlong *)(param_3 + 0x208) + 0x38)) &&
           (lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x208) + 0x30) + 0x10),
           lVar11 != 0)) {
          lVar15 = (longlong)(int)uStack_340;
          if (0 < lVar15) {
            lVar20 = 0;
            do {
              FUN_1484ac8fe(&local_328,&local_2b8,*(undefined4 *)(local_348 + lVar20 * 4));
              FUN_146c2f9e2(lVar11,&local_2b8);
              lVar20 = lVar20 + 1;
            } while (lVar15 != lVar20);
          }
          if ((char)local_378 == '\0') {
            local_378 = local_378 & 0xffffffff00000000;
          }
          else {
            uVar10 = local_368 & 0xffffffff;
            uVar19 = 0;
            do {
              uVar6 = *(uint *)(local_338 + uVar19 * 4);
              lVar15 = local_338;
              if (uVar6 != 0xffffffff) {
                lVar15 = *(longlong *)(*(longlong *)(param_3 + 0x130) + (ulonglong)(uVar6 >> 9) * 8)
                ;
                local_2b8 = *(double *)(lVar15 + (ulonglong)(uVar6 & 0x1ff) * 0xc);
                local_2b0 = (double)CONCAT44(local_2b0._4_4_,
                                             *(undefined4 *)
                                              (lVar15 + 8 + (ulonglong)(uVar6 & 0x1ff) * 0xc));
                lVar15 = FUN_146c01580(lVar11,uVar6,&local_2b8,1);
              }
              uVar19 = uVar19 + 1;
              local_378 = CONCAT44(local_378._4_4_,(int)CONCAT71((int7)((ulonglong)lVar15 >> 8),1));
            } while (uVar10 != uVar19);
          }
        }
      }
    }
    cVar3 = FUN_1484ac1ac(&local_328,0);
    pcVar12 = local_370;
    if (((cVar3 != '\0') && (local_370[2] == '\x01')) &&
       (uVar6 = FUN_1484ac21a(&local_328), 0 < (int)uVar6)) {
      (**(code **)(**(longlong **)(param_3 + 0x208) + 0xa8))(*(longlong **)(param_3 + 0x208),uVar6);
      local_360 = (ulonglong)uVar6;
      uVar19 = local_368 & 0xffffffff;
      uVar10 = 0;
      do {
        if ((longlong)uVar10 < (longlong)*(int *)(*(longlong *)(param_3 + 0x208) + 0x28)) {
          uVar9 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_3 + 0x208) + 0x20) + uVar10 * 8)
          ;
        }
        else {
          uVar9 = 0;
        }
        lVar11 = (longlong)(int)uStack_340;
        if (0 < lVar11) {
          lVar15 = 0;
          do {
            FUN_1484acab8(&local_328,&local_2b8,*(undefined4 *)(local_348 + lVar15 * 4),
                          uVar10 & 0xffffffff);
            FUN_146c2d0a4(uVar9,&local_2b8);
            lVar15 = lVar15 + 1;
          } while (lVar11 != lVar15);
        }
        if ((char)local_378 != '\0') {
          uVar13 = 0;
          do {
            uVar6 = *(uint *)(local_338 + uVar13 * 4);
            if (uVar6 != 0xffffffff) {
              lVar11 = *(longlong *)(*(longlong *)(param_3 + 0x130) + (ulonglong)(uVar6 >> 9) * 8);
              local_2b8 = *(double *)(lVar11 + (ulonglong)(uVar6 & 0x1ff) * 0xc);
              local_2b0 = (double)CONCAT44(local_2b0._4_4_,
                                           *(undefined4 *)
                                            (lVar11 + 8 + (ulonglong)(uVar6 & 0x1ff) * 0xc));
              FUN_146c01486(uVar9,uVar6,&local_2b8,1);
            }
            uVar13 = uVar13 + 1;
          } while (uVar19 != uVar13);
        }
        uVar10 = uVar10 + 1;
        pcVar12 = local_370;
      } while (uVar10 != local_360);
    }
    if ((local_379 != '\0') && (pcVar12[3] == '\x01')) {
      FUN_146c17f82(*(undefined8 *)(param_3 + 0x208));
      uVar9 = *(undefined8 *)(*(longlong *)(param_3 + 0x208) + 0x40);
      lVar11 = (longlong)(int)uStack_340;
      if (0 < lVar11) {
        lVar15 = 0;
        do {
          local_2b8 = (double)CONCAT44(local_2b8._4_4_,*(undefined4 *)(local_348 + lVar15 * 4));
          (*(code *)*param_5)(local_354,param_5[1],&local_2b8);
          local_2b8 = (double)CONCAT44((float)local_354[1] * 0.003921569,
                                       (float)local_354[2] * 0.003921569);
          local_2b0 = (double)CONCAT44((float)local_354[3] * 0.003921569,
                                       (float)local_354[0] * 0.003921569);
          FUN_146c32f5e(uVar9,&local_2b8);
          lVar15 = lVar15 + 1;
        } while (lVar11 != lVar15);
      }
      if ((char)local_378 != '\0') {
        uVar19 = local_368 & 0xffffffff;
        uVar10 = 0;
        do {
          uVar6 = *(uint *)(local_338 + uVar10 * 4);
          if (uVar6 != 0xffffffff) {
            lVar11 = *(longlong *)(*(longlong *)(param_3 + 0x130) + (ulonglong)(uVar6 >> 9) * 8);
            local_2b8 = *(double *)(lVar11 + (ulonglong)(uVar6 & 0x1ff) * 0xc);
            local_2b0 = (double)CONCAT44(local_2b0._4_4_,
                                         *(undefined4 *)
                                          (lVar11 + 8 + (ulonglong)(uVar6 & 0x1ff) * 0xc));
            FUN_146c2a048(uVar9,uVar6,&local_2b8,1);
          }
          uVar10 = uVar10 + 1;
        } while (uVar19 != uVar10);
      }
    }
LAB_1484ab245:
    if (local_348 != 0) {
      FUN_1400020a8();
    }
    if (local_338 != 0) {
      FUN_1400020a8();
    }
    if (local_2d8 != 0) {
      FUN_1400020a8();
    }
    if (local_2e8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar21 & 0xffffff01;
}



// FUNCTION 1484abf4a FUN_1484abf4a body=355 status=ok
// SIG undefined FUN_1484abf4a(void)

longlong * FUN_1484abf4a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = param_2;
  lVar7 = DAT_14c846518;
  param_1[1] = DAT_14c846510;
  param_1[2] = lVar7;
  param_1[3] = DAT_14c846520;
  lVar7 = DAT_14c846518;
  param_1[4] = DAT_14c846510;
  param_1[5] = lVar7;
  param_1[6] = DAT_14c846520;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar3 = *(int *)(param_2 + 0x38);
  iVar5 = iVar3 + 1;
  if (-2 < iVar3) {
    if (iVar3 < 0) {
      iVar5 = -1;
    }
    else {
      plVar1 = param_1 + 10;
      FUN_14481578e(plVar1);
      iVar5 = *(int *)(param_2 + 0x38);
      if (-1 < iVar5) {
        plVar2 = param_1 + 8;
        if (*(int *)((longlong)param_1 + 0x4c) < iVar5) {
          FUN_1484ac818(plVar2);
          iVar5 = *(int *)(param_2 + 0x38);
        }
        lVar7 = param_2 + 0x10;
        if (*(longlong *)(param_2 + 0x30) != 0) {
          lVar7 = *(longlong *)(param_2 + 0x30);
        }
        if (iVar5 != 0) {
          lVar6 = (longlong)iVar5 * 0x1c;
          do {
            iVar5 = (int)param_1[0xb];
            *(uint *)(param_1 + 0xb) = iVar5 + 1U;
            if (*(uint *)((longlong)param_1 + 0x5c) < iVar5 + 1U) {
              FUN_1446f48e2(plVar1,iVar5);
            }
            lVar4 = param_1[0xc];
            *(int *)(param_1[10] + (longlong)iVar5 * 4) = (int)lVar4;
            *(int *)(param_1 + 0xc) = (int)lVar4 + *(int *)(lVar7 + 8);
            iVar5 = (int)param_1[9];
            *(uint *)(param_1 + 9) = iVar5 + 1U;
            if (*(uint *)((longlong)param_1 + 0x4c) < iVar5 + 1U) {
              FUN_1484ac878(plVar2,iVar5);
            }
            *(longlong *)(*plVar2 + (longlong)iVar5 * 8) = lVar7;
            lVar7 = lVar7 + 0x1c;
            lVar6 = lVar6 + -0x1c;
          } while (lVar6 != 0);
        }
        iVar5 = (int)param_1[0xb];
        *(uint *)(param_1 + 0xb) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0x5c) < iVar5 + 1U) {
          FUN_1446f48e2(plVar1,iVar5);
        }
        *(int *)(param_1[10] + (longlong)iVar5 * 4) = (int)param_1[0xc];
        return param_1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar5);
}



// FUNCTION 1484ac0ae FUN_1484ac0ae body=253 status=ok
// SIG undefined FUN_1484ac0ae(void)

uint * FUN_1484ac0ae(longlong *param_1,uint *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  char local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = *(uint *)(param_1 + 0xb);
  if ((int)uVar4 < 1) {
    lVar6 = -1;
  }
  else {
    iVar9 = 0;
    uVar7 = (ulonglong)uVar4;
    do {
      uVar7 = uVar7 >> 1;
      uVar8 = (uint)uVar7 + iVar9;
      if (*(int *)(param_1[10] + (ulonglong)uVar8 * 4) <= param_3) {
        iVar9 = uVar8 + (uVar4 & 1);
      }
      bVar2 = 1 < uVar4;
      uVar4 = (uint)uVar7;
    } while (bVar2);
    lVar6 = (longlong)(iVar9 + -1);
  }
  iVar9 = *(int *)(param_1[10] + lVar6 * 4);
  lVar6 = *(longlong *)(param_1[8] + lVar6 * 8);
  FUN_1461c3a4c(*param_1 + 0x198,&local_38);
  iVar1 = *(int *)(lVar6 + 4);
  iVar3 = (param_3 - iVar9) * 3;
  iVar9 = iVar1 + iVar3;
  lVar6 = (longlong)(iVar1 + iVar3 + 2);
  if (local_2c == '\x01') {
    uVar4 = *(uint *)(local_38 + lVar6 * 4);
    uVar8 = *(uint *)(local_38 + (longlong)(iVar9 + 1) * 4);
    uVar5 = *(uint *)(local_38 + (longlong)iVar9 * 4);
  }
  else {
    uVar4 = (uint)*(ushort *)(local_38 + lVar6 * 2);
    uVar8 = (uint)*(ushort *)(local_38 + (longlong)(iVar9 + 1) * 2);
    uVar5 = (uint)*(ushort *)(local_38 + (longlong)iVar9 * 2);
  }
  *param_2 = uVar5;
  param_2[1] = uVar8;
  param_2[2] = uVar4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ac1ac FUN_1484ac1ac body=110 status=ok
// SIG undefined FUN_1484ac1ac(void)

undefined8 FUN_1484ac1ac(longlong *param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_1;
  if ((((lVar1 != 0) && (*(longlong **)(lVar1 + 0xd0) != (longlong *)0x0)) &&
      (*(longlong *)(lVar1 + 0xe0) != 0)) &&
     (((cVar2 = (**(code **)(**(longlong **)(lVar1 + 0xd0) + 0x58))(), cVar2 != '\0' &&
       (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0xe0) + 0x58))(), cVar2 != '\0')) &&
      (lVar1 = *param_1, *(longlong *)(lVar1 + 0xf8) != 0)))) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),-1 < param_2 && param_2 < *(int *)(lVar1 + 0x108))
    ;
  }
  return 0;
}



// FUNCTION 1484ac21a FUN_1484ac21a body=98 status=ok
// SIG undefined FUN_1484ac21a(void)

undefined4 FUN_1484ac21a(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar1 = *param_1;
  uVar3 = 0;
  uVar4 = 0;
  if (((lVar1 != 0) && (uVar4 = uVar3, *(longlong **)(lVar1 + 0xd0) != (longlong *)0x0)) &&
     (*(longlong *)(lVar1 + 0xe0) != 0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0xd0) + 0x58))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0xe0) + 0x58))();
      if ((cVar2 != '\0') && (*(longlong *)(*param_1 + 0xf8) != 0)) {
        uVar4 = *(undefined4 *)(*param_1 + 0x108);
      }
    }
  }
  return uVar4;
}



// FUNCTION 1484ac27c FUN_1484ac27c body=132 status=ok
// SIG undefined FUN_1484ac27c(void)

void FUN_1484ac27c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined1 **local_48;
  longlong local_38;
  undefined1 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_147cc7ccc(param_1 + 0x158);
  }
  local_28 = &local_38;
  local_48 = &local_30;
  local_30 = &LAB_143b6b312;
  local_38 = param_1;
  FUN_1484aaeb4(param_1,param_2,param_3,uVar1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ac302 FUN_1484ac302 body=95 status=ok
// SIG undefined FUN_1484ac302(void)

void FUN_1484ac302(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1484ac362 FUN_1484ac362 body=132 status=ok
// SIG undefined FUN_1484ac362(void)

void FUN_1484ac362(longlong param_1,int param_2)

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



// FUNCTION 1484ac3e8 FUN_1484ac3e8 body=113 status=ok
// SIG undefined FUN_1484ac3e8(void)

void FUN_1484ac3e8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,2);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,2);
  }
  return;
}



// FUNCTION 1484ac45a FUN_1484ac45a body=441 status=ok
// SIG undefined FUN_1484ac45a(void)

void FUN_1484ac45a(longlong *param_1,float *param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar5;
  float fVar6;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 in_XMM2 [16];
  float fVar10;
  float fVar11;
  
  lVar1 = *(longlong *)(*param_1 + 0x90);
  uVar2 = (ulonglong)param_3;
  if (*(char *)(*param_1 + 0xb1) == '\x01') {
    auVar4 = pmovsxwd(in_XMM0,*(undefined8 *)(lVar1 + uVar2 * 0x10));
    fVar3 = (float)auVar4._0_4_ * 3.051851e-05;
    fVar5 = (float)auVar4._4_4_ * 3.051851e-05;
    fVar6 = (float)auVar4._8_4_ * 3.051851e-05;
    auVar4 = pmovsxwd(in_XMM2,*(undefined8 *)(lVar1 + 8 + uVar2 * 0x10));
    fVar7 = (float)auVar4._0_4_ * 3.051851e-05;
    fVar8 = (float)auVar4._4_4_ * 3.051851e-05;
    fVar9 = (float)auVar4._8_4_ * 3.051851e-05;
    fVar10 = (float)auVar4._12_4_ * 3.051851e-05;
  }
  else {
    auVar4 = pmovsxbd(in_XMM0,*(undefined4 *)(lVar1 + uVar2 * 8));
    fVar3 = (float)auVar4._0_4_ * 0.007874016;
    fVar5 = (float)auVar4._4_4_ * 0.007874016;
    fVar6 = (float)auVar4._8_4_ * 0.007874016;
    auVar4 = pmovsxbd(in_XMM2,*(undefined4 *)(lVar1 + 4 + uVar2 * 8));
    fVar7 = (float)auVar4._0_4_ * 0.007874016;
    fVar8 = (float)auVar4._4_4_ * 0.007874016;
    fVar9 = (float)auVar4._8_4_ * 0.007874016;
    fVar10 = (float)auVar4._12_4_ * 0.007874016;
  }
  fVar11 = (fVar7 * fVar5 - fVar3 * fVar8) * fVar10;
  fVar3 = (fVar9 * fVar3 - fVar7 * fVar6) * fVar10;
  fVar10 = (fVar8 * fVar6 - fVar9 * fVar5) * fVar10;
  if ((char)param_1[7] == '\x01') {
    fVar6 = (float)((double)fVar11 * (double)param_1[3]);
    fVar7 = (float)((double)fVar3 * (double)param_1[2]);
    fVar8 = (float)((double)fVar10 * (double)param_1[1]);
    fVar5 = SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7);
    fVar10 = 0.0;
    fVar3 = 0.0;
    fVar11 = 0.0;
    if (0.0 < fVar5) {
      fVar5 = 1.0 / fVar5;
      fVar11 = fVar6 * fVar5;
      fVar3 = fVar7 * fVar5;
      fVar10 = fVar5 * fVar8;
    }
  }
  *param_2 = fVar10;
  param_2[1] = fVar3;
  param_2[2] = fVar11;
  return;
}



// FUNCTION 1484ac614 FUN_1484ac614 body=258 status=ok
// SIG undefined FUN_1484ac614(void)

void FUN_1484ac614(longlong *param_1,uint *param_2,ulonglong param_3,ulonglong param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  
  lVar5 = *param_1;
  param_4 = param_4 & 0xffffffff;
  if (*(char *)(lVar5 + 0xb0) == '\x01') {
    *(undefined8 *)param_2 =
         *(undefined8 *)
          ((param_3 & 0xffffffff) * (ulonglong)*(uint *)(lVar5 + 0xa8) * 8 +
           *(longlong *)(lVar5 + 0x98) + param_4 * 8);
    return;
  }
  lVar5 = (param_3 & 0xffffffff) * (ulonglong)*(uint *)(lVar5 + 0xa8) * 4 +
          *(longlong *)(lVar5 + 0x98);
  uVar1 = *(ushort *)(lVar5 + 2 + param_4 * 4);
  uVar3 = (uint)uVar1 << 0xd;
  if ((uVar3 & 0xf800000) == 0xf800000) {
    fVar4 = (float)(uVar3 | 0x70000000);
  }
  else if ((uVar3 & 0xf800000) == 0) {
    fVar4 = (float)(uVar3 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar4 = (float)((uVar3 & 0xfffe000) + 0x38000000);
  }
  uVar2 = *(ushort *)(lVar5 + param_4 * 4);
  uVar3 = (uint)uVar2 << 0xd;
  if ((uVar3 & 0xf800000) == 0xf800000) {
    fVar6 = (float)(uVar3 | 0x70000000);
  }
  else if ((uVar3 & 0xf800000) == 0) {
    fVar6 = (float)(uVar3 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar6 = (float)((uVar3 & 0xfffe000) + 0x38000000);
  }
  *param_2 = (int)(short)uVar2 & 0x80000000U | (uint)fVar6;
  param_2[1] = (uint)fVar4 | (int)(short)uVar1 & 0x80000000U;
  return;
}



// FUNCTION 1484ac716 FUN_1484ac716 body=257 status=ok
// SIG undefined FUN_1484ac716(void)

void FUN_1484ac716(longlong *param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = 0;
  iVar5 = 0;
  do {
    uVar1 = *(ushort *)(param_3 + lVar2 * 2);
    if (uVar1 == 0) break;
    iVar5 = (iVar5 + 1) - (uint)(uVar1 < *(ushort *)(param_4 + 2));
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xc);
  lVar2 = 0;
  FUN_146beb71e(*param_1,iVar5,0);
  iVar5 = 0;
  do {
    uVar1 = *(ushort *)(param_3 + lVar2 * 2);
    if (uVar1 == 0) break;
    if (*(ushort *)(param_4 + 2) <= uVar1) {
      lVar3 = (longlong)iVar5;
      iVar5 = iVar5 + 1;
      lVar4 = *(longlong *)(*param_1 + 0x30);
      if (lVar4 == 0) {
        lVar4 = *param_1;
      }
      *(uint *)(lVar4 + lVar3 * 4) = CONCAT22(uVar1,*(undefined2 *)(param_2 + lVar2 * 2));
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xc);
  lVar2 = *param_1;
  local_40 = &LAB_146bebfd2;
  lVar4 = *(longlong *)(lVar2 + 0x30);
  if (*(longlong *)(lVar2 + 0x30) == 0) {
    lVar4 = lVar2;
  }
  FUN_146bec52c(lVar4,*(undefined4 *)(lVar2 + 0x38));
  if ((int)param_4[1] < iVar5) {
    FUN_146beb71e(*param_1,param_4[1],0);
  }
  FUN_146bebfde(param_1,*param_4);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ac818 FUN_1484ac818 body=96 status=ok
// SIG undefined FUN_1484ac818(void)

void FUN_1484ac818(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 1484ac878 FUN_1484ac878 body=132 status=ok
// SIG undefined FUN_1484ac878(void)

void FUN_1484ac878(longlong param_1,int param_2)

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



// FUNCTION 1484ac8fe FUN_1484ac8fe body=441 status=ok
// SIG undefined FUN_1484ac8fe(void)

void FUN_1484ac8fe(longlong *param_1,float *param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar5;
  float fVar6;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 in_XMM2 [16];
  float fVar10;
  float fVar11;
  
  lVar1 = *(longlong *)(*param_1 + 0xf0);
  uVar2 = (ulonglong)param_3;
  if (*(char *)(*param_1 + 0x111) == '\x01') {
    auVar4 = pmovsxwd(in_XMM0,*(undefined8 *)(lVar1 + uVar2 * 0x10));
    fVar3 = (float)auVar4._0_4_ * 3.051851e-05;
    fVar5 = (float)auVar4._4_4_ * 3.051851e-05;
    fVar6 = (float)auVar4._8_4_ * 3.051851e-05;
    auVar4 = pmovsxwd(in_XMM2,*(undefined8 *)(lVar1 + 8 + uVar2 * 0x10));
    fVar7 = (float)auVar4._0_4_ * 3.051851e-05;
    fVar8 = (float)auVar4._4_4_ * 3.051851e-05;
    fVar9 = (float)auVar4._8_4_ * 3.051851e-05;
    fVar10 = (float)auVar4._12_4_ * 3.051851e-05;
  }
  else {
    auVar4 = pmovsxbd(in_XMM0,*(undefined4 *)(lVar1 + uVar2 * 8));
    fVar3 = (float)auVar4._0_4_ * 0.007874016;
    fVar5 = (float)auVar4._4_4_ * 0.007874016;
    fVar6 = (float)auVar4._8_4_ * 0.007874016;
    auVar4 = pmovsxbd(in_XMM2,*(undefined4 *)(lVar1 + 4 + uVar2 * 8));
    fVar7 = (float)auVar4._0_4_ * 0.007874016;
    fVar8 = (float)auVar4._4_4_ * 0.007874016;
    fVar9 = (float)auVar4._8_4_ * 0.007874016;
    fVar10 = (float)auVar4._12_4_ * 0.007874016;
  }
  fVar11 = (fVar7 * fVar5 - fVar3 * fVar8) * fVar10;
  fVar3 = (fVar9 * fVar3 - fVar7 * fVar6) * fVar10;
  fVar10 = (fVar8 * fVar6 - fVar9 * fVar5) * fVar10;
  if ((char)param_1[7] == '\x01') {
    fVar6 = (float)((double)fVar11 * (double)param_1[3]);
    fVar7 = (float)((double)fVar3 * (double)param_1[2]);
    fVar8 = (float)((double)fVar10 * (double)param_1[1]);
    fVar5 = SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7);
    fVar10 = 0.0;
    fVar3 = 0.0;
    fVar11 = 0.0;
    if (0.0 < fVar5) {
      fVar5 = 1.0 / fVar5;
      fVar11 = fVar6 * fVar5;
      fVar3 = fVar7 * fVar5;
      fVar10 = fVar5 * fVar8;
    }
  }
  *param_2 = fVar10;
  param_2[1] = fVar3;
  param_2[2] = fVar11;
  return;
}



// FUNCTION 1484acab8 FUN_1484acab8 body=258 status=ok
// SIG undefined FUN_1484acab8(void)

void FUN_1484acab8(longlong *param_1,uint *param_2,ulonglong param_3,ulonglong param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  
  lVar5 = *param_1;
  param_4 = param_4 & 0xffffffff;
  if (*(char *)(lVar5 + 0x110) == '\x01') {
    *(undefined8 *)param_2 =
         *(undefined8 *)
          ((param_3 & 0xffffffff) * (ulonglong)*(uint *)(lVar5 + 0x108) * 8 +
           *(longlong *)(lVar5 + 0xf8) + param_4 * 8);
    return;
  }
  lVar5 = (param_3 & 0xffffffff) * (ulonglong)*(uint *)(lVar5 + 0x108) * 4 +
          *(longlong *)(lVar5 + 0xf8);
  uVar1 = *(ushort *)(lVar5 + 2 + param_4 * 4);
  uVar3 = (uint)uVar1 << 0xd;
  if ((uVar3 & 0xf800000) == 0xf800000) {
    fVar4 = (float)(uVar3 | 0x70000000);
  }
  else if ((uVar3 & 0xf800000) == 0) {
    fVar4 = (float)(uVar3 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar4 = (float)((uVar3 & 0xfffe000) + 0x38000000);
  }
  uVar2 = *(ushort *)(lVar5 + param_4 * 4);
  uVar3 = (uint)uVar2 << 0xd;
  if ((uVar3 & 0xf800000) == 0xf800000) {
    fVar6 = (float)(uVar3 | 0x70000000);
  }
  else if ((uVar3 & 0xf800000) == 0) {
    fVar6 = (float)(uVar3 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar6 = (float)((uVar3 & 0xfffe000) + 0x38000000);
  }
  *param_2 = (int)(short)uVar2 & 0x80000000U | (uint)fVar6;
  param_2[1] = (uint)fVar4 | (int)(short)uVar1 & 0x80000000U;
  return;
}



// FUNCTION 1484acbba FUN_1484acbba body=29 status=ok
// SIG undefined FUN_1484acbba(void)

void FUN_1484acbba(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14aee6350;
  return;
}



// FUNCTION 1484acbd8 FUN_1484acbd8 body=36 status=ok
// SIG undefined FUN_1484acbd8(void)

undefined8 FUN_1484acbd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1484acc18 FUN_1484acc18 body=93 status=ok
// SIG undefined FUN_1484acc18(void)

void FUN_1484acc18(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aee62e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1484acc76 FUN_1484acc76 body=123 status=ok
// SIG undefined FUN_1484acc76(void)

void FUN_1484acc76(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aee62e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1484accfe FUN_1484accfe body=21 status=ok
// SIG undefined FUN_1484accfe(void)

undefined8 FUN_1484accfe(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1484acd14 FUN_1484acd14 body=34 status=ok
// SIG undefined FUN_1484acd14(void)

undefined8 FUN_1484acd14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1484acd3a FUN_1484acd3a body=29 status=ok
// SIG undefined FUN_1484acd3a(void)

void FUN_1484acd3a(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14aee6780;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 1484acd58 FUN_1484acd58 body=89 status=ok
// SIG undefined FUN_1484acd58(void)

undefined8 * FUN_1484acd58(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_14aee6780;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *param_2;
  if (param_1 + 1 == param_2) {
    if (lVar1 != 0) {
      FUN_146c2a142(lVar1);
      FUN_1400020a8(lVar1);
    }
  }
  else {
    param_1[1] = lVar1;
    *param_2 = 0;
  }
  return param_1;
}



// FUNCTION 1484acdb2 FUN_1484acdb2 body=83 status=ok
// SIG undefined FUN_1484acdb2(void)

void FUN_1484acdb2(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14aee6780;
  if (param_1[2] != 0) {
    plVar2 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_146c2a142(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1484ace06 FUN_1484ace06 body=170 status=ok
// SIG undefined FUN_1484ace06(void)

void FUN_1484ace06(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_145995958();
  plVar3 = (longlong *)FUN_144718840(param_2,uVar2);
  (**(code **)(*plVar3 + 0x10))(plVar3,param_1,0);
  pcVar1 = *(code **)(param_1 + 0x10);
  if (pcVar1 != (code *)0x0) {
    local_31 = 1;
    plVar3 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    local_48 = param_1;
    local_40 = param_2;
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*pcVar1)(uVar2,&local_48,&local_40,&local_31);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484aceb2 FUN_1484aceb2 body=170 status=ok
// SIG undefined FUN_1484aceb2(void)

void FUN_1484aceb2(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_145995958();
  plVar3 = (longlong *)FUN_144718840(param_2,uVar2);
  (**(code **)(*plVar3 + 0x10))(plVar3,param_1,1);
  pcVar1 = *(code **)(param_1 + 0x10);
  if (pcVar1 != (code *)0x0) {
    local_31 = 0;
    plVar3 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    local_48 = param_1;
    local_40 = param_2;
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*pcVar1)(uVar2,&local_48,&local_40,&local_31);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484acf5e FUN_1484acf5e body=32 status=ok
// SIG undefined FUN_1484acf5e(void)

undefined8 FUN_1484acf5e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Mesh Change");
  return param_2;
}



// FUNCTION 1484acf8c FUN_1484acf8c body=280 status=ok
// SIG undefined FUN_1484acf8c(void)

undefined8 * FUN_1484acf8c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_LAB_14aee6b60;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    param_1[1] = uVar3;
    param_1[2] = 0;
  }
  else {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    plVar5 = (longlong *)param_1[2];
    param_1[1] = uVar3;
    param_1[2] = lVar4;
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
  }
  uVar3 = *param_3;
  lVar4 = param_3[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[4];
  param_1[3] = uVar3;
  param_1[4] = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
  plVar5 = (longlong *)param_3[1];
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
  return param_1;
}



// FUNCTION 1484ad0a4 FUN_1484ad0a4 body=170 status=ok
// SIG undefined FUN_1484ad0a4(void)

void FUN_1484ad0a4(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_14595bd14();
  plVar3 = (longlong *)FUN_144718840(param_2,uVar2);
  (**(code **)(*plVar3 + 0x10))(plVar3,param_1,0);
  pcVar1 = *(code **)(param_1 + 0x30);
  if (pcVar1 != (code *)0x0) {
    local_31 = 1;
    plVar3 = (longlong *)(param_1 + 0x50);
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x40);
    }
    local_48 = param_1;
    local_40 = param_2;
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*pcVar1)(uVar2,&local_48,&local_40,&local_31);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ad150 FUN_1484ad150 body=170 status=ok
// SIG undefined FUN_1484ad150(void)

void FUN_1484ad150(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_14595bd14();
  plVar3 = (longlong *)FUN_144718840(param_2,uVar2);
  (**(code **)(*plVar3 + 0x10))(plVar3,param_1,1);
  pcVar1 = *(code **)(param_1 + 0x30);
  if (pcVar1 != (code *)0x0) {
    local_31 = 0;
    plVar3 = (longlong *)(param_1 + 0x50);
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x40);
    }
    local_48 = param_1;
    local_40 = param_2;
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*pcVar1)(uVar2,&local_48,&local_40,&local_31);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ad1fc FUN_1484ad1fc body=32 status=ok
// SIG undefined FUN_1484ad1fc(void)

undefined8 FUN_1484ad1fc(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Mesh Change");
  return param_2;
}



// FUNCTION 1484ad220 FUN_1484ad220 body=53 status=ok
// SIG undefined FUN_1484ad220(void)

void FUN_1484ad220(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_14595bdfe();
  plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001484ad252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,param_1,0,*(code **)(*plVar2 + 0x10));
  return;
}



// FUNCTION 1484ad256 FUN_1484ad256 body=53 status=ok
// SIG undefined FUN_1484ad256(void)

void FUN_1484ad256(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_14595bdfe();
  plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001484ad288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,param_1,1,*(code **)(*plVar2 + 0x10));
  return;
}



// FUNCTION 1484ad28c FUN_1484ad28c body=32 status=ok
// SIG undefined FUN_1484ad28c(void)

undefined8 FUN_1484ad28c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Mesh Vertex Change");
  return param_2;
}



// FUNCTION 1484ad2ac FUN_1484ad2ac body=305 status=ok
// SIG undefined FUN_1484ad2ac(void)

undefined8 * FUN_1484ad2ac(undefined8 *param_1)

{
  undefined8 *_Dst;
  
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xb) = 1;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  _Dst = (undefined8 *)FUN_14001cc68(0xd0);
  memset(_Dst,0,0xa0);
  *_Dst = &PTR_LAB_14aef0240;
  *(undefined1 *)(_Dst + 1) = 1;
  _Dst[2] = 0;
  _Dst[3] = 0;
  _Dst[4] = 0;
  _Dst[5] = 0;
  _Dst[6] = 0;
  _Dst[7] = 0;
  _Dst[8] = 0;
  _Dst[9] = 0;
  _Dst[10] = 0;
  _Dst[0xb] = 0;
  *(undefined1 *)(_Dst + 0xc) = 0;
  _Dst[0xd] = 0;
  _Dst[0xe] = 0;
  _Dst[0xf] = 0;
  _Dst[0x10] = 0;
  _Dst[0x11] = 0;
  _Dst[0x12] = 0;
  *(undefined1 *)(_Dst + 0x13) = 0;
  _Dst[0x14] = 0;
  _Dst[0x15] = 0;
  _Dst[0x16] = 0;
  _Dst[0x17] = 0;
  _Dst[0x18] = 0;
  _Dst[0x19] = 0;
  *param_1 = _Dst;
  return param_1;
}



// FUNCTION 1484ad3de FUN_1484ad3de body=332 status=ok
// SIG undefined FUN_1484ad3de(void)

undefined8 * FUN_1484ad3de(undefined8 *param_1,uint param_2)

{
  byte bVar1;
  undefined8 *_Dst;
  byte bVar2;
  
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  _Dst = (undefined8 *)FUN_14001cc68(0xd0);
  memset(_Dst,0,0xa0);
  *_Dst = &PTR_LAB_14aef0240;
  _Dst[2] = 0;
  _Dst[3] = 0;
  _Dst[4] = 0;
  _Dst[5] = 0;
  _Dst[6] = 0;
  _Dst[7] = 0;
  _Dst[8] = 0;
  _Dst[9] = 0;
  _Dst[10] = 0;
  _Dst[0xb] = 0;
  _Dst[0xd] = 0;
  _Dst[0xe] = 0;
  _Dst[0xf] = 0;
  _Dst[0x10] = 0;
  _Dst[0x11] = 0;
  _Dst[0x12] = 0;
  _Dst[0x14] = 0;
  _Dst[0x15] = 0;
  _Dst[0x16] = 0;
  _Dst[0x17] = 0;
  _Dst[0x18] = 0;
  _Dst[0x19] = 0;
  *param_1 = _Dst;
  bVar2 = (byte)param_2;
  *(byte *)(param_1 + 0xb) = bVar2 & 1;
  *(byte *)(_Dst + 1) = bVar2 & 1;
  bVar1 = bVar2 >> 1 & 1;
  *(byte *)((longlong)param_1 + 0x59) = bVar1;
  *(byte *)((longlong)_Dst + 9) = bVar1;
  bVar1 = (byte)(param_2 >> 4) & 1;
  *(byte *)((longlong)param_1 + 0x5a) = bVar1;
  *(byte *)(_Dst + 0xc) = bVar1;
  bVar2 = bVar2 >> 2 & 1;
  *(byte *)(param_1 + 0x16) = bVar2;
  *(byte *)(_Dst + 0x13) = bVar2;
  return param_1;
}



// FUNCTION 1484ad52a FUN_1484ad52a body=435 status=ok
// SIG undefined FUN_1484ad52a(void)

void FUN_1484ad52a(longlong *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  uint local_4c;
  uint *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = param_2;
  if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
    plVar7 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[9];
    }
    iVar6 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[10] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      lVar2 = param_1[1];
      do {
        lVar8 = lVar2 + (longlong)iVar6 * 0x10;
        if (*(uint *)(lVar2 + (longlong)iVar6 * 0x10) == param_2) {
          if ((int *)(lVar8 + 4) != (int *)0x0 && lVar8 != 0) {
            lVar8 = (longlong)*(int *)(lVar8 + 4);
            lVar2 = *(longlong *)(*param_1 + 0x30);
            *(undefined8 *)(lVar2 + 0x10 + lVar8 * 0x18) = *(undefined8 *)(param_4 + 4);
            uVar3 = param_4[1];
            uVar4 = param_4[2];
            uVar5 = param_4[3];
            puVar1 = (undefined4 *)(lVar2 + lVar8 * 0x18);
            *puVar1 = *param_4;
            puVar1[1] = uVar3;
            puVar1[2] = uVar4;
            puVar1[3] = uVar5;
            if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          break;
        }
        iVar6 = *(int *)(lVar8 + 8);
      } while (iVar6 != -1);
    }
  }
  local_50 = *(undefined4 *)(*param_1 + 0x18);
  local_40 = &local_50;
  local_48 = &local_4c;
  FUN_140263e2a(param_1 + 1,local_34,&local_48,0);
  lVar2 = *param_1;
  iVar6 = *(int *)(lVar2 + 0x18);
  *(uint *)(lVar2 + 0x18) = iVar6 + 1U;
  if (*(uint *)(lVar2 + 0x1c) < iVar6 + 1U) {
    FUN_1446f48e2((longlong *)(lVar2 + 0x10),iVar6);
  }
  *(uint *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar6 * 4) = local_4c;
  lVar2 = *param_1;
  iVar6 = *(int *)(lVar2 + 0x28);
  *(uint *)(lVar2 + 0x28) = iVar6 + 1U;
  if (*(uint *)(lVar2 + 0x2c) < iVar6 + 1U) {
    FUN_1403e3958((longlong *)(lVar2 + 0x20),iVar6);
  }
  lVar2 = *(longlong *)(lVar2 + 0x20);
  *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar6 * 0x18) = *(undefined8 *)(param_3 + 4);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar1 = (undefined4 *)(lVar2 + (longlong)iVar6 * 0x18);
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  lVar2 = *param_1;
  iVar6 = *(int *)(lVar2 + 0x38);
  *(uint *)(lVar2 + 0x38) = iVar6 + 1U;
  if (*(uint *)(lVar2 + 0x3c) < iVar6 + 1U) {
    FUN_1403e3958((longlong *)(lVar2 + 0x30),iVar6);
  }
  lVar2 = *(longlong *)(lVar2 + 0x30);
  *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar6 * 0x18) = *(undefined8 *)(param_4 + 4);
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  puVar1 = (undefined4 *)(lVar2 + (longlong)iVar6 * 0x18);
  *puVar1 = *param_4;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 1484ad6de FUN_1484ad6de body=899 status=ok
// SIG undefined FUN_1484ad6de(void)

void FUN_1484ad6de(longlong *param_1,longlong param_2,uint param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_3;
  if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
    plVar9 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[9];
    }
    iVar12 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[10] - 1U & param_3) * 4);
    if (iVar12 != -1) {
      lVar11 = param_1[1];
      do {
        lVar2 = lVar11 + (longlong)iVar12 * 0x10;
        if (*(uint *)(lVar11 + (longlong)iVar12 * 0x10) == param_3) {
          if ((int *)(lVar2 + 4) != (int *)0x0 && lVar2 != 0) {
            lVar11 = (longlong)*(int *)(lVar2 + 4);
            if ((char)param_1[0xb] == '\x01') {
              lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(param_3 >> 9) * 8);
              lVar4 = *(longlong *)(*param_1 + 0x30);
              puVar1 = (undefined4 *)(lVar2 + (ulonglong)(param_3 & 0x1ff) * 0x18);
              uVar5 = *puVar1;
              uVar6 = puVar1[1];
              uVar7 = puVar1[2];
              uVar8 = puVar1[3];
              *(undefined8 *)(lVar4 + 0x10 + lVar11 * 0x18) =
                   *(undefined8 *)(lVar2 + 0x10 + (ulonglong)(param_3 & 0x1ff) * 0x18);
              puVar1 = (undefined4 *)(lVar4 + lVar11 * 0x18);
              *puVar1 = uVar5;
              puVar1[1] = uVar6;
              puVar1[2] = uVar7;
              puVar1[3] = uVar8;
            }
            if (*(char *)((longlong)param_1 + 0x59) == '\x01') {
              local_58 = DAT_14c846350;
              uVar5 = DAT_14c846358;
              if (*(char *)(param_2 + 0x90) != '\0') {
                lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x80) + (ulonglong)(param_3 >> 9) * 8)
                ;
                local_58 = *(uint **)(lVar2 + (ulonglong)(param_3 & 0x1ff) * 0xc);
                uVar5 = *(undefined4 *)(lVar2 + 8 + (ulonglong)(param_3 & 0x1ff) * 0xc);
              }
              uStack_50 = (undefined4 *)CONCAT44(uStack_50._4_4_,uVar5);
              lVar2 = *(longlong *)(*param_1 + 0x50);
              *(undefined4 *)(lVar2 + 8 + lVar11 * 0xc) = uVar5;
              *(uint **)(lVar2 + lVar11 * 0xc) = local_58;
            }
            goto LAB_1484ad96e;
          }
          break;
        }
        iVar12 = *(int *)(lVar2 + 8);
      } while (iVar12 != -1);
    }
  }
  local_34 = *(undefined4 *)(*param_1 + 0x18);
  uStack_50 = &local_34;
  local_58 = &local_30;
  FUN_140263e2a(param_1 + 1,&local_2c,&local_58,0);
  lVar11 = *param_1;
  iVar12 = *(int *)(lVar11 + 0x18);
  *(uint *)(lVar11 + 0x18) = iVar12 + 1U;
  if (*(uint *)(lVar11 + 0x1c) < iVar12 + 1U) {
    FUN_1446f48e2((longlong *)(lVar11 + 0x10),iVar12);
  }
  *(uint *)(*(longlong *)(lVar11 + 0x10) + (longlong)iVar12 * 4) = local_30;
  if ((char)param_1[0xb] == '\x01') {
    lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(local_30 >> 9) * 8);
    local_48 = *(undefined8 *)(lVar11 + 0x10 + (ulonglong)(local_30 & 0x1ff) * 0x18);
    plVar9 = (longlong *)(lVar11 + (ulonglong)(local_30 & 0x1ff) * 0x18);
    local_58 = (uint *)*plVar9;
    uStack_50 = (undefined4 *)plVar9[1];
    lVar11 = *param_1;
    iVar12 = *(int *)(lVar11 + 0x28);
    *(uint *)(lVar11 + 0x28) = iVar12 + 1U;
    if (*(uint *)(lVar11 + 0x2c) < iVar12 + 1U) {
      FUN_1403e3958((longlong *)(lVar11 + 0x20),iVar12);
    }
    lVar11 = *(longlong *)(lVar11 + 0x20);
    *(undefined8 *)(lVar11 + 0x10 + (longlong)iVar12 * 0x18) = local_48;
    puVar1 = (undefined4 *)(lVar11 + (longlong)iVar12 * 0x18);
    *puVar1 = (undefined4)local_58;
    puVar1[1] = local_58._4_4_;
    puVar1[2] = (undefined4)uStack_50;
    puVar1[3] = uStack_50._4_4_;
    lVar11 = *param_1;
    iVar12 = *(int *)(lVar11 + 0x38);
    *(uint *)(lVar11 + 0x38) = iVar12 + 1U;
    if (*(uint *)(lVar11 + 0x3c) < iVar12 + 1U) {
      FUN_1403e3958((longlong *)(lVar11 + 0x30),iVar12);
    }
    lVar11 = *(longlong *)(lVar11 + 0x30);
    *(undefined8 *)(lVar11 + 0x10 + (longlong)iVar12 * 0x18) = local_48;
    puVar1 = (undefined4 *)(lVar11 + (longlong)iVar12 * 0x18);
    *puVar1 = (undefined4)local_58;
    puVar1[1] = local_58._4_4_;
    puVar1[2] = (undefined4)uStack_50;
    puVar1[3] = uStack_50._4_4_;
  }
  if (*(char *)((longlong)param_1 + 0x59) == '\x01') {
    if (*(char *)(param_2 + 0x90) == '\0') {
      local_58 = DAT_14c846350;
      uVar5 = DAT_14c846358;
    }
    else {
      lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x80) + (ulonglong)(local_30 >> 9) * 8);
      local_58 = *(uint **)(lVar11 + (ulonglong)(local_30 & 0x1ff) * 0xc);
      uVar5 = *(undefined4 *)(lVar11 + 8 + (ulonglong)(local_30 & 0x1ff) * 0xc);
    }
    uStack_50 = (undefined4 *)CONCAT44(uStack_50._4_4_,uVar5);
    lVar11 = *param_1;
    iVar12 = *(int *)(lVar11 + 0x48);
    *(uint *)(lVar11 + 0x48) = iVar12 + 1U;
    if (*(uint *)(lVar11 + 0x4c) < iVar12 + 1U) {
      FUN_140c0b6f2((longlong *)(lVar11 + 0x40),iVar12);
    }
    lVar11 = *(longlong *)(lVar11 + 0x40);
    *(undefined4 *)(lVar11 + 8 + (longlong)iVar12 * 0xc) = (undefined4)uStack_50;
    *(uint **)(lVar11 + (longlong)iVar12 * 0xc) = local_58;
    lVar11 = *param_1;
    iVar12 = *(int *)(lVar11 + 0x58);
    *(uint *)(lVar11 + 0x58) = iVar12 + 1U;
    if (*(uint *)(lVar11 + 0x5c) < iVar12 + 1U) {
      FUN_140c0b6f2((longlong *)(lVar11 + 0x50),iVar12);
    }
    lVar11 = *(longlong *)(lVar11 + 0x50);
    *(undefined4 *)(lVar11 + 8 + (longlong)iVar12 * 0xc) = (undefined4)uStack_50;
    *(uint **)(lVar11 + (longlong)iVar12 * 0xc) = local_58;
  }
  pcVar3 = (code *)param_1[0x22];
  if (pcVar3 != (code *)0x0) {
    local_58 = (uint *)CONCAT44(local_58._4_4_,local_34);
    local_2c = local_30;
    plVar9 = param_1 + 0x26;
    if ((longlong *)param_1[0x24] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[0x24];
    }
    uVar10 = (**(code **)(*plVar9 + 8))(plVar9);
    (*pcVar3)(uVar10,&local_2c,&local_58);
  }
LAB_1484ad96e:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484ada62 FUN_1484ada62 body=331 status=ok
// SIG undefined FUN_1484ada62(void)

void FUN_1484ada62(longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
    plVar8 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[9];
    }
    uVar10 = (uint)param_3;
    iVar11 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[10] - 1U & uVar10) * 4);
    if (iVar11 != -1) {
      do {
        lVar9 = param_1[1] + (longlong)iVar11 * 0x10;
        if (*(uint *)(param_1[1] + (longlong)iVar11 * 0x10) == uVar10) {
          if ((int *)(lVar9 + 4) != (int *)0x0 && lVar9 != 0) {
            lVar9 = (longlong)*(int *)(lVar9 + 4);
            if ((char)param_1[0xb] == '\x01') {
              lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (param_3 >> 9 & 0x7fffff) * 8);
              lVar3 = *(longlong *)(*param_1 + 0x30);
              puVar1 = (undefined4 *)(lVar2 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
              uVar4 = *puVar1;
              uVar5 = puVar1[1];
              uVar6 = puVar1[2];
              uVar7 = puVar1[3];
              *(undefined8 *)(lVar3 + 0x10 + lVar9 * 0x18) =
                   *(undefined8 *)(lVar2 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
              puVar1 = (undefined4 *)(lVar3 + lVar9 * 0x18);
              *puVar1 = uVar4;
              puVar1[1] = uVar5;
              puVar1[2] = uVar6;
              puVar1[3] = uVar7;
            }
            if (*(char *)((longlong)param_1 + 0x59) == '\x01') {
              if (*(char *)(param_2 + 0x90) == '\0') {
                local_18 = DAT_14c846358;
                local_20 = DAT_14c846350;
              }
              else {
                lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x80) + (param_3 >> 9 & 0x7fffff) * 8)
                ;
                local_18 = *(undefined4 *)(lVar2 + 8 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
                local_20 = *(undefined8 *)(lVar2 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
              }
              lVar2 = *(longlong *)(*param_1 + 0x50);
              *(undefined4 *)(lVar2 + 8 + lVar9 * 0xc) = local_18;
              *(undefined8 *)(lVar2 + lVar9 * 0xc) = local_20;
            }
          }
          break;
        }
        iVar11 = *(int *)(lVar9 + 8);
      } while (iVar11 != -1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484adbae FUN_1484adbae body=465 status=ok
// SIG undefined FUN_1484adbae(void)

void FUN_1484adbae(longlong *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  uint local_4c;
  uint *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = param_2;
  if ((int)param_1[0xd] != *(int *)((longlong)param_1 + 0x94)) {
    plVar3 = param_1 + 0x13;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x14];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[0x15] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = param_1[0xc];
      do {
        lVar4 = lVar1 + (longlong)iVar2 * 0x10;
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0x10) == param_2) {
          if ((int *)(lVar4 + 4) != (int *)0x0 && lVar4 != 0) {
            lVar4 = (longlong)*(int *)(lVar4 + 4);
            lVar1 = *(longlong *)(*param_1 + 0x88);
            *(undefined4 *)(lVar1 + 8 + lVar4 * 0xc) = *(undefined4 *)(param_4 + 1);
            *(undefined8 *)(lVar1 + lVar4 * 0xc) = *param_4;
            if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          break;
        }
        iVar2 = *(int *)(lVar4 + 8);
      } while (iVar2 != -1);
    }
  }
  local_50 = *(undefined4 *)(*param_1 + 0x70);
  local_40 = &local_50;
  local_48 = &local_4c;
  FUN_140263e2a(param_1 + 0xc,local_34,&local_48,0);
  lVar1 = *param_1;
  iVar2 = *(int *)(lVar1 + 0x70);
  *(uint *)(lVar1 + 0x70) = iVar2 + 1U;
  if (*(uint *)(lVar1 + 0x74) < iVar2 + 1U) {
    FUN_1446f48e2((longlong *)(lVar1 + 0x68),iVar2);
  }
  *(uint *)(*(longlong *)(lVar1 + 0x68) + (longlong)iVar2 * 4) = local_4c;
  lVar1 = *param_1;
  iVar2 = *(int *)(lVar1 + 0x80);
  *(uint *)(lVar1 + 0x80) = iVar2 + 1U;
  if (*(uint *)(lVar1 + 0x84) < iVar2 + 1U) {
    FUN_140c0b6f2((longlong *)(lVar1 + 0x78),iVar2);
  }
  lVar1 = *(longlong *)(lVar1 + 0x78);
  *(undefined4 *)(lVar1 + 8 + (longlong)iVar2 * 0xc) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(lVar1 + (longlong)iVar2 * 0xc) = *param_3;
  lVar1 = *param_1;
  iVar2 = *(int *)(lVar1 + 0x90);
  *(uint *)(lVar1 + 0x90) = iVar2 + 1U;
  if (*(uint *)(lVar1 + 0x94) < iVar2 + 1U) {
    FUN_140c0b6f2((longlong *)(lVar1 + 0x88),iVar2);
  }
  lVar1 = *(longlong *)(lVar1 + 0x88);
  *(undefined4 *)(lVar1 + 8 + (longlong)iVar2 * 0xc) = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(lVar1 + (longlong)iVar2 * 0xc) = *param_4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 1484add80 FUN_1484add80 body=143 status=ok
// SIG undefined FUN_1484add80(void)

void FUN_1484add80(longlong *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[0xd] != *(int *)((longlong)param_1 + 0x94)) {
    plVar2 = param_1 + 0x13;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x14];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[0x15] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = param_1[0xc] + (longlong)iVar4 * 0x10;
        if (*(uint *)(param_1[0xc] + (longlong)iVar4 * 0x10) == param_2) {
          if ((int *)(lVar1 + 4) == (int *)0x0 || lVar1 == 0) {
            return;
          }
          lVar3 = (longlong)*(int *)(lVar1 + 4);
          lVar1 = *(longlong *)(*param_1 + 0x88);
          *(undefined4 *)(lVar1 + 8 + lVar3 * 0xc) = *(undefined4 *)(param_3 + 1);
          *(undefined8 *)(lVar1 + lVar3 * 0xc) = *param_3;
          return;
        }
        iVar4 = *(int *)(lVar1 + 8);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 1484ade10 FUN_1484ade10 body=627 status=ok
// SIG undefined FUN_1484ade10(void)

void FUN_1484ade10(undefined8 param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(param_2 + 0x208);
  if (((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x38))) &&
     (lVar2 = **(longlong **)(lVar2 + 0x30), lVar2 != 0)) {
    plVar1 = param_3 + 2;
    local_80 = param_3;
    uStack_50 = plVar1;
    if (param_4 == '\0') {
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      uStack_40 = 0;
      if ((int)param_3[5] == 0) {
        iVar6 = 0;
      }
      else {
        FUN_1449c0562(&local_58);
        iVar6 = (int)param_3[5];
      }
      uStack_60 = CONCAT44(uStack_3c,uStack_40);
      local_68 = local_48;
      uVar4 = local_68;
      local_78 = (undefined4)local_58;
      uStack_74 = local_58._4_4_;
      uStack_70 = (undefined4)uStack_50;
      uStack_6c = uStack_50._4_4_;
      local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      iVar5 = local_68._4_4_;
      if ((local_68._4_4_ != iVar6) || (local_68 = uVar4, uStack_50 != plVar1)) {
        do {
          local_68 = uVar4;
          iVar5 = *(int *)(*local_80 + (longlong)iVar5 * 0xc);
          lVar3 = *(longlong *)(lVar2 + 0x48);
          lVar7 = 0;
          do {
            uVar8 = iVar5 * 3 + (int)lVar7;
            *(undefined4 *)((longlong)&local_58 + lVar7 * 4) =
                 *(undefined4 *)
                  (*(longlong *)(lVar3 + (ulonglong)(uVar8 >> 9) * 8) +
                  (ulonglong)(uVar8 & 0x1ff) * 4);
            lVar7 = lVar7 + 1;
          } while (lVar7 != 3);
          FUN_1484add80(param_1,iVar5,&local_58);
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
          FUN_1449c0562(&local_78);
          iVar5 = local_68._4_4_;
          uVar4 = local_68;
        } while (local_80 != param_3 ||
                 ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar6));
      }
    }
    else {
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      uStack_40 = 0;
      if ((int)param_3[5] == 0) {
        iVar6 = 0;
      }
      else {
        FUN_1449c0562(&local_58);
        iVar6 = (int)param_3[5];
      }
      uStack_60 = CONCAT44(uStack_3c,uStack_40);
      local_68 = local_48;
      uVar4 = local_68;
      local_78 = (undefined4)local_58;
      uStack_74 = local_58._4_4_;
      uStack_70 = (undefined4)uStack_50;
      uStack_6c = uStack_50._4_4_;
      local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      iVar5 = local_68._4_4_;
      if ((local_68._4_4_ != iVar6) || (local_68 = uVar4, uStack_50 != plVar1)) {
        do {
          local_68 = uVar4;
          iVar5 = *(int *)(*local_80 + (longlong)iVar5 * 0xc);
          lVar3 = *(longlong *)(lVar2 + 0x48);
          lVar7 = 0;
          do {
            uVar8 = iVar5 * 3 + (int)lVar7;
            *(undefined4 *)((longlong)&local_58 + lVar7 * 4) =
                 *(undefined4 *)
                  (*(longlong *)(lVar3 + (ulonglong)(uVar8 >> 9) * 8) +
                  (ulonglong)(uVar8 & 0x1ff) * 4);
            lVar7 = lVar7 + 1;
          } while (lVar7 != 3);
          FUN_1484adbae(param_1,iVar5,&local_58,&local_58);
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
          FUN_1449c0562(&local_78);
          iVar5 = local_68._4_4_;
          uVar4 = local_68;
        } while (local_80 != param_3 ||
                 ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar6));
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484ae084 FUN_1484ae084 body=443 status=ok
// SIG undefined FUN_1484ae084(void)

void FUN_1484ae084(longlong *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  uint local_4c;
  uint *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = param_2;
  if ((int)param_1[0x18] != *(int *)((longlong)param_1 + 0xec)) {
    plVar4 = param_1 + 0x1e;
    if ((longlong *)param_1[0x1f] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x1f];
    }
    iVar3 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[0x20] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar2 = param_1[0x17];
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x10;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x10) == param_2) {
          if ((int *)(lVar1 + 4) != (int *)0x0 && lVar1 != 0) {
            *(undefined8 *)(*(longlong *)(*param_1 + 0xc0) + (longlong)*(int *)(lVar1 + 4) * 8) =
                 *param_4;
            goto LAB_1484ae199;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 8);
      } while (iVar3 != -1);
    }
  }
  local_50 = *(undefined4 *)(*param_1 + 0xa8);
  local_40 = &local_50;
  local_48 = &local_4c;
  FUN_140263e2a(param_1 + 0x17,local_34,&local_48,0);
  lVar2 = *param_1;
  iVar3 = *(int *)(lVar2 + 0xa8);
  *(uint *)(lVar2 + 0xa8) = iVar3 + 1U;
  if (*(uint *)(lVar2 + 0xac) < iVar3 + 1U) {
    FUN_1446f48e2((longlong *)(lVar2 + 0xa0),iVar3);
  }
  *(uint *)(*(longlong *)(lVar2 + 0xa0) + (longlong)iVar3 * 4) = local_4c;
  lVar2 = *param_1;
  iVar3 = *(int *)(lVar2 + 0xb8);
  *(uint *)(lVar2 + 0xb8) = iVar3 + 1U;
  if (*(uint *)(lVar2 + 0xbc) < iVar3 + 1U) {
    FUN_140752556((longlong *)(lVar2 + 0xb0),iVar3);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0xb0) + (longlong)iVar3 * 8) = *param_3;
  lVar2 = *param_1;
  iVar3 = *(int *)(lVar2 + 200);
  *(uint *)(lVar2 + 200) = iVar3 + 1U;
  if (*(uint *)(lVar2 + 0xcc) < iVar3 + 1U) {
    FUN_140752556((longlong *)(lVar2 + 0xc0),iVar3);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0xc0) + (longlong)iVar3 * 8) = *param_4;
LAB_1484ae199:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484ae240 FUN_1484ae240 body=134 status=ok
// SIG undefined FUN_1484ae240(void)

void FUN_1484ae240(longlong *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((int)param_1[0x18] != *(int *)((longlong)param_1 + 0xec)) {
    plVar2 = param_1 + 0x1e;
    if ((longlong *)param_1[0x1f] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x1f];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[0x20] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = param_1[0x17] + (longlong)iVar3 * 0x10;
        if (*(uint *)(param_1[0x17] + (longlong)iVar3 * 0x10) == param_2) {
          if ((int *)(lVar1 + 4) == (int *)0x0 || lVar1 == 0) {
            return;
          }
          *(undefined8 *)(*(longlong *)(*param_1 + 0xc0) + (longlong)*(int *)(lVar1 + 4) * 8) =
               *param_3;
          return;
        }
        iVar3 = *(int *)(lVar1 + 8);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 1484ae2c6 FUN_1484ae2c6 body=304 status=ok
// SIG undefined FUN_1484ae2c6(void)

void FUN_1484ae2c6(undefined8 param_1,longlong param_2,longlong *param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_2 + 0x208);
  if (((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x28))) &&
     (lVar3 = **(longlong **)(lVar3 + 0x20), lVar3 != 0)) {
    uVar1 = *(uint *)(param_3 + 1);
    if (param_4 == '\0') {
      if (0 < (int)uVar1) {
        uVar6 = 0;
        do {
          uVar2 = *(uint *)(*param_3 + uVar6 * 4);
          lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar2 >> 5 & 0x3fffff8));
          uVar5 = (ulonglong)((uVar2 & 0xff) << 3);
          local_40 = *(undefined4 *)(lVar4 + uVar5);
          local_3c = *(undefined4 *)(lVar4 + 4 + uVar5);
          FUN_1484ae240(param_1,uVar2,&local_40);
          uVar6 = uVar6 + 1;
        } while (uVar1 != uVar6);
      }
    }
    else if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        uVar2 = *(uint *)(*param_3 + uVar6 * 4);
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar2 >> 5 & 0x3fffff8));
        uVar5 = (ulonglong)((uVar2 & 0xff) << 3);
        local_40 = *(undefined4 *)(lVar4 + uVar5);
        local_3c = *(undefined4 *)(lVar4 + 4 + uVar5);
        FUN_1484ae084(param_1,uVar2,&local_40,&local_40);
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1484ae42c FUN_1484ae42c body=41 status=ok
// SIG undefined FUN_1484ae42c(void)

void FUN_1484ae42c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xad8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1484ae456 FUN_1484ae456 body=90 status=ok
// SIG undefined FUN_1484ae456(void)

void FUN_1484ae456(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xae8))(param_1,&local_1c);
  *param_3 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ae4b2 FUN_1484ae4b2 body=41 status=ok
// SIG undefined FUN_1484ae4b2(void)

void FUN_1484ae4b2(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 3000))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1484ae4dc FUN_1484ae4dc body=42 status=ok
// SIG undefined FUN_1484ae4dc(void)

void FUN_1484ae4dc(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xa98))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1484ae50a FUN_1484ae50a body=41 status=ok
// SIG undefined FUN_1484ae50a(void)

void FUN_1484ae50a(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xb88))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1484ae538 FUN_1484ae538 body=41 status=ok
// SIG undefined FUN_1484ae538(void)

void FUN_1484ae538(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xac8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1484ae566 FUN_1484ae566 body=41 status=ok
// SIG undefined FUN_1484ae566(void)

void FUN_1484ae566(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xb08))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1484ae590 FUN_1484ae590 body=41 status=ok
// SIG undefined FUN_1484ae590(void)

void FUN_1484ae590(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xba8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1484ae5ba FUN_1484ae5ba body=166 status=ok
// SIG undefined FUN_1484ae5ba(void)

void FUN_1484ae5ba(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xb48))(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ae666 FUN_1484ae666 body=41 status=ok
// SIG undefined FUN_1484ae666(void)

void FUN_1484ae666(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xb78))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1484ae690 FUN_1484ae690 body=42 status=ok
// SIG undefined FUN_1484ae690(void)

void FUN_1484ae690(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xb68))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1484ae6be FUN_1484ae6be body=41 status=ok
// SIG undefined FUN_1484ae6be(void)

void FUN_1484ae6be(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xb18))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1484ae6e8 FUN_1484ae6e8 body=41 status=ok
// SIG undefined FUN_1484ae6e8(void)

void FUN_1484ae6e8(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xaf8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1484ae716 FUN_1484ae716 body=41 status=ok
// SIG undefined FUN_1484ae716(void)

void FUN_1484ae716(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xb28))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1484ae746 FUN_1484ae746 body=165 status=ok
// SIG undefined FUN_1484ae746(void)

void FUN_1484ae746(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0xb40))(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ae7ec FUN_1484ae7ec body=155 status=ok
// SIG undefined FUN_1484ae7ec(void)

void FUN_1484ae7ec(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xad0))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ae888 FUN_1484ae888 body=150 status=ok
// SIG undefined FUN_1484ae888(void)

void FUN_1484ae888(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xae0))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ae920 FUN_1484ae920 body=155 status=ok
// SIG undefined FUN_1484ae920(void)

void FUN_1484ae920(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xbb0))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484ae9c0 FUN_1484ae9c0 body=162 status=ok
// SIG undefined FUN_1484ae9c0(void)

void FUN_1484ae9c0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xb00))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484aea68 FUN_1484aea68 body=162 status=ok
// SIG undefined FUN_1484aea68(void)

void FUN_1484aea68(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xb80))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484aeb10 FUN_1484aeb10 body=162 status=ok
// SIG undefined FUN_1484aeb10(void)

void FUN_1484aeb10(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xac0))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484aebb4 FUN_1484aebb4 body=155 status=ok
// SIG undefined FUN_1484aebb4(void)

void FUN_1484aebb4(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xba0))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484aec50 FUN_1484aec50 body=160 status=ok
// SIG undefined FUN_1484aec50(void)

void FUN_1484aec50(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xb30))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484aecf6 FUN_1484aecf6 body=162 status=ok
// SIG undefined FUN_1484aecf6(void)

void FUN_1484aecf6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xb70))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484aed9a FUN_1484aed9a body=160 status=ok
// SIG undefined FUN_1484aed9a(void)

void FUN_1484aed9a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xb50))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484aee40 FUN_1484aee40 body=162 status=ok
// SIG undefined FUN_1484aee40(void)

void FUN_1484aee40(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xb10))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484aeee4 FUN_1484aeee4 body=155 status=ok
// SIG undefined FUN_1484aeee4(void)

void FUN_1484aeee4(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xaf0))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484aef84 FUN_1484aef84 body=162 status=ok
// SIG undefined FUN_1484aef84(void)

void FUN_1484aef84(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xb20))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484af04a FUN_1484af04a body=50 status=ok
// SIG undefined FUN_1484af04a(void)

void FUN_1484af04a(longlong *param_1,undefined4 param_2)

{
  FUN_14080c2b4();
  FUN_1417be62e(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001484af079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb90))(param_1,1);
  return;
}



// FUNCTION 1484af09a FUN_1484af09a body=79 status=ok
// SIG undefined FUN_1484af09a(void)

void FUN_1484af09a(longlong *param_1,longlong param_2)

{
  if (param_1[0xd2] != param_2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    param_1[0xd2] = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001484af0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xab8))(param_1);
    return;
  }
  return;
}



// FUNCTION 1484af10a FUN_1484af10a body=79 status=ok
// SIG undefined FUN_1484af10a(void)

void FUN_1484af10a(longlong *param_1,longlong param_2)

{
  if (param_1[0xd3] != param_2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    param_1[0xd3] = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001484af140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xab8))(param_1);
    return;
  }
  return;
}



// FUNCTION 1484af272 FUN_1484af272 body=58 status=ok
// SIG undefined FUN_1484af272(void)

void FUN_1484af272(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_1448215fa(param_1);
    return;
  }
  FUN_14080c2b4();
  if ((*(byte *)(param_1 + 0x9c) & 1) == 0) {
    return;
  }
  FUN_14072bb4a(param_1);
  return;
}



// FUNCTION 1484af2b4 FUN_1484af2b4 body=67 status=ok
// SIG undefined FUN_1484af2b4(void)

longlong FUN_1484af2b4(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x6b0) <= (int)param_2)) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x6a8) + (ulonglong)param_2 * 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  return lVar1;
}



// FUNCTION 1484af2f8 FUN_1484af2f8 body=171 status=ok
// SIG undefined FUN_1484af2f8(void)

ulonglong * FUN_1484af2f8(longlong param_1,ulonglong *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14002bab8();
  if (*(longlong *)(param_1 + 0x690) != 0) {
    FUN_14470a074(*(longlong *)(param_1 + 0x690),local_38,param_3);
    *param_2 = *param_2 | local_38[0];
    bVar1 = (byte)(local_38[0] >> 0x10);
    if (bVar1 <= *(byte *)((longlong)param_2 + 2)) {
      bVar1 = *(byte *)((longlong)param_2 + 2);
    }
    *(byte *)((longlong)param_2 + 2) = bVar1;
  }
  if (*(longlong *)(param_1 + 0x698) != 0) {
    FUN_14470a074(*(longlong *)(param_1 + 0x698),local_38,param_3);
    *param_2 = *param_2 | local_38[0];
    bVar1 = (byte)(local_38[0] >> 0x10);
    if (bVar1 <= *(byte *)((longlong)param_2 + 2)) {
      bVar1 = *(byte *)((longlong)param_2 + 2);
    }
    *(byte *)((longlong)param_2 + 2) = bVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484af3a4 FUN_1484af3a4 body=195 status=ok
// SIG undefined FUN_1484af3a4(void)

longlong * FUN_1484af3a4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x7b0))();
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_1402191ca(param_2,iVar2);
    iVar4 = 0;
    do {
      uVar3 = (**(code **)(*param_1 + 0x610))(param_1,iVar4);
      FUN_143b6b4eb(&local_40,uVar3,iVar4);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = local_40;
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484af46a FUN_1484af46a body=188 status=ok
// SIG undefined FUN_1484af46a(void)

bool FUN_1484af46a(longlong *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = (**(code **)(*param_1 + 0x7b0))();
  if (iVar3 < 1) {
    bVar2 = false;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x610))(param_1,0);
    FUN_143b6b4eb(&local_38,uVar5,0);
    bVar2 = true;
    if (local_38 != param_2) {
      iVar1 = 1;
      do {
        iVar4 = iVar1;
        if (iVar3 == iVar4) break;
        uVar5 = (**(code **)(*param_1 + 0x610))(param_1,iVar4);
        FUN_143b6b4eb(&local_38,uVar5,iVar4);
        iVar1 = iVar4 + 1;
      } while (local_38 != param_2);
      bVar2 = iVar4 < iVar3;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484af528 FUN_1484af528 body=157 status=ok
// SIG undefined FUN_1484af528(void)

undefined8 FUN_1484af528(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x7b0))();
  if (0 < (int)param_1[0xd6]) {
    iVar2 = 0;
    do {
      uVar1 = (**(code **)(*param_1 + 0x610))(param_1,iVar2);
      FUN_143b6b4eb(&local_30,uVar1,iVar2);
      if (local_30 == param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1[0xd6]);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484af5f2 FUN_1484af5f2 body=187 status=ok
// SIG undefined FUN_1484af5f2(void)

void FUN_1484af5f2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_14062ac50();
  lVar2 = *(longlong *)(param_1 + 0x690);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_144769b64(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  lVar2 = *(longlong *)(param_1 + 0x698);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_144769b64(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  lVar2 = DAT_14cb4c068;
  if (DAT_14cb4c068 != 0 && *(char *)(param_1 + 0x684) != '\0') {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_144769b64(param_2,iVar1);
      lVar2 = DAT_14cb4c068;
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 1484af6ae FUN_1484af6ae body=556 status=ok
// SIG undefined FUN_1484af6ae(void)

undefined8 * FUN_1484af6ae(undefined8 *param_1,longlong *param_2)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  char local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406ff4f8(param_1,param_2,0);
  *param_1 = &PTR_LAB_14aeea2a0;
  param_1[0x53] = param_2;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x2a4) = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  param_1[0x60] = 0;
  param_1[0x62] = 0;
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(undefined1 *)((longlong)param_1 + 0x342) = 0;
  param_1[0x6a] = 0;
  param_1[0x6c] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7c));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x7c),4000);
  uVar1 = (**(code **)(*param_2 + 0xb88))(param_2);
  *(undefined1 *)(param_1 + 0x81) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0xb28))(param_2);
  *(undefined1 *)((longlong)param_1 + 0x409) = uVar1;
  cVar2 = (**(code **)(*param_2 + 0xba8))(param_2);
  *(bool *)((longlong)param_1 + 0x40a) = cVar2 == '\x01';
  param_1[0x82] = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  uVar1 = (**(code **)(*param_2 + 0xaf8))(param_2);
  *(undefined1 *)(param_1 + 0x68) = uVar1;
  cVar2 = (**(code **)(*param_2 + 0xad8))(param_2);
  if (cVar2 == '\x03') {
    (**(code **)(*param_2 + 0xae8))(param_2,&local_50);
    *(undefined4 *)(param_1 + 0x54) = local_50;
    *(undefined1 *)((longlong)param_1 + 0x2a4) = 1;
  }
  uVar1 = (**(code **)(*param_2 + 0xb08))(param_2);
  *(undefined1 *)((longlong)param_1 + 0x341) = uVar1;
  (**(code **)(*param_2 + 0xa10))(param_2,&local_50,*(undefined4 *)(param_1[0x42] + 8));
  *(byte *)((longlong)param_1 + 0x6f) =
       *(byte *)((longlong)param_1 + 0x6f) & 0xfb | local_4c * '\x02' & 4U;
  cVar2 = (**(code **)(*param_2 + 3000))(param_2);
  if (cVar2 == '\0') {
    bVar3 = 0;
  }
  else {
    bVar3 = FUN_143b6b645();
  }
  *(byte *)((longlong)param_1 + 0x76) = *(byte *)((longlong)param_1 + 0x76) & 0xfe | bVar3;
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xef | bVar3 << 4;
  FUN_1403fc26e(param_1);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484af8dc FUN_1484af8dc body=433 status=ok
// SIG undefined FUN_1484af8dc(void)

void FUN_1484af8dc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_LAB_14aeea2a0;
  plVar3 = param_1 + 0x72;
  puVar4 = param_1 + 0x74;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar8 = 0;
  local_48 = puVar4;
  if (*(int *)(param_1 + 0x77) != 0) {
    FUN_1449c0562(&local_50);
    iVar8 = *(int *)(param_1 + 0x77);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar3;
  if ((iStack_3c != iVar8) || (local_48 != puVar4)) {
    do {
      puVar5 = *(undefined8 **)(*local_78 + (longlong)iStack_5c * 0x10);
      if ((puVar5 != (undefined8 *)0x0) && (*(int *)(puVar5 + 1) != 0)) {
        (**(code **)*puVar5)(puVar5,1);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar3 || (local_68 != puVar4 || iStack_5c != iVar8));
  }
  plVar6 = (longlong *)param_1[0x85];
  if (plVar6 != (longlong *)0x0) {
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
  lVar7 = param_1[0x82];
  if (lVar7 != 0) {
    (**(code **)(lVar7 + -0x10))(lVar7 + -0x10);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7c));
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_1484bfb1e(plVar3);
  FUN_1484afa8e(param_1 + 0x54);
  FUN_140064e2c(param_1);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484afa8e FUN_1484afa8e body=120 status=ok
// SIG undefined FUN_1484afa8e(void)

void FUN_1484afa8e(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    plVar1 = (longlong *)(param_1 + 0xd0);
    if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0xc0);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    plVar1 = (longlong *)(param_1 + 0x80);
    if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x70);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x0001484afafb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1484afb06 FUN_1484afb06 body=194 status=ok
// SIG undefined FUN_1484afb06(void)

longlong FUN_1484afb06(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14001cc68(0x540,0x10);
  FUN_1484afbca(lVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x210) + 8));
  bVar3 = 0;
  local_28 = lVar1;
  uVar2 = FUN_1447277f0(0);
  *(undefined8 *)(lVar1 + 0x360) = uVar2;
  if (*(char *)(param_1 + 0x408) == '\x01') {
    bVar3 = *(byte *)(param_1 + 0x6e) >> 1 & 1;
  }
  *(byte *)(lVar1 + 0x3a8) = bVar3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e0));
  FUN_1484bfbac(param_1 + 0x390,local_2c,&local_28,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e0));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484afbca FUN_1484afbca body=414 status=ok
// SIG undefined FUN_1484afbca(void)

undefined8 * FUN_1484afbca(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_14aeef618;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1415eaa34(param_1 + 2);
  FUN_1415ea9c8(param_1 + 0x13);
  FUN_1415ea9fe(param_1 + 0x1b);
  FUN_14322417a(param_1 + 0x23);
  param_1[0x23] = &PTR_FUN_14a83cdc0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  FUN_144b1dcb8(param_1 + 0x28,param_2);
  param_1[0x28] = &PTR_FUN_14a1ca480;
  param_1[0x5c] = 0x400000000;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x32c) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x32e) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x35c) = 0;
  param_1[0x6e] = 0xffffffff00000000;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  FUN_14322417a(param_1 + 0x70);
  param_1[0x70] = &PTR_FUN_14a83cdc0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  FUN_143268f94(param_1 + 0x76);
  FUN_143268f94(param_1 + 0x8c);
  *(undefined1 *)(param_1 + 0xa2) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xa3),4000);
  *(undefined2 *)(param_1 + 0x12) = 0x101;
  return param_1;
}



// FUNCTION 1484afd68 FUN_1484afd68 body=237 status=ok
// SIG undefined FUN_1484afd68(void)

void FUN_1484afd68(longlong param_1,undefined8 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x3e0);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4)) {
    uVar1 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar2 = param_1 + 0x3c8;
    if (*(longlong *)(param_1 + 0x3d0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x3d0);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x3d8) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x390);
      do {
        if (*(undefined8 **)(lVar2 + (longlong)iVar3 * 0x10) == param_2) {
          FUN_1484afe56((longlong *)(param_1 + 0x390),param_2);
          LeaveCriticalSection(lpCriticalSection);
          if ((param_2 != (undefined8 *)0x0) && (*(int *)(param_2 + 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001484afe49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)*param_2)(param_2,1);
            return;
          }
          return;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x10 + lVar2 + 8);
      } while (iVar3 != -1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001484afe0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1484afe56 FUN_1484afe56 body=154 status=ok
// SIG undefined FUN_1484afe56(void)

undefined8 FUN_1484afe56(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_1484c00b4(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1484aff02 FUN_1484aff02 body=41 status=ok
// SIG undefined FUN_1484aff02(void)

void FUN_1484aff02(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x298) + 0x610))();
  if (lVar1 != 0) {
    return;
  }
  FUN_1447277f0(0);
  return;
}



// FUNCTION 1484aff2c FUN_1484aff2c body=1 status=ok
// SIG undefined FUN_1484aff2c(void)

void FUN_1484aff2c(void)

{
  return;
}



// FUNCTION 1484aff30 FUN_1484aff30 body=389 status=ok
// SIG undefined FUN_1484aff30(void)

void FUN_1484aff30(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,byte param_6,uint param_7,undefined4 param_8,longlong param_9)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar3 = FUN_14470b8a2(param_2,1);
  lVar2 = *(longlong *)(*param_2 + (longlong)(iVar3 / 0x44) * 8);
  lVar4 = (ulonglong)(uint)(iVar3 % 0x44) * 0xf0;
  lVar8 = *(longlong *)(lVar2 + 0xa8 + lVar4);
  if (lVar8 == 0) {
    lVar8 = lVar2 + lVar4;
  }
  *(longlong *)(lVar8 + 0x18) = param_4;
  *(uint *)(lVar2 + 0xe4 + lVar4) =
       *(uint *)(lVar2 + 0xe4 + lVar4) & 0xffffefff | (uint)param_6 << 0xc;
  *(longlong *)(lVar2 + 0xb8 + lVar4) = param_3 + 0x140;
  *(undefined8 *)(lVar2 + 0xc0 + lVar4) = param_5;
  *(longlong *)(lVar8 + 8) = param_9 + 8;
  uVar6 = 0;
  *(undefined4 *)(lVar8 + 0x58) = 0;
  *(int *)(lVar8 + 0x5c) = *(int *)(param_4 + 0x20) / 3;
  *(undefined4 *)(lVar8 + 0x68) = 0;
  *(int *)(lVar8 + 0x6c) = *(int *)(param_3 + 0xcc) + -1;
  uVar7 = (*(byte *)(param_1 + 0x6b) & 1) << 6;
  uVar1 = *(uint *)(lVar2 + 0xe4 + lVar4);
  uVar5 = (param_7 & 7) << 0x11;
  *(uint *)(lVar2 + 0xe4 + lVar4) = uVar5 | uVar1 & 0xfff03fbf | uVar7;
  if (param_6 == 0) {
    uVar6 = (uint)*(byte *)(param_1 + 0x409) << 0x14;
  }
  *(uint *)(lVar2 + lVar4 + 0xe4) = uVar5 | uVar1 & 0xffe03fbf | uVar7 | uVar6;
  FUN_1436a14f8(param_2,param_8);
  return;
}



// FUNCTION 1484b00be FUN_1484b00be body=796 status=ok
// SIG undefined FUN_1484b00be(void)

void FUN_1484b00be(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong param_6,uint param_7,longlong param_8)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_288 [32];
  longlong local_268;
  longlong local_260;
  longlong local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_228;
  undefined8 uStack_224;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1a8;
  undefined1 uStack_1a4;
  undefined1 uStack_1a3;
  undefined2 uStack_1a2;
  undefined4 uStack_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined8 uStack_164;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined1 local_150 [168];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint uStack_70;
  undefined8 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  uStack_1a8 = 0xff;
  uStack_1a4 = 0;
  uStack_1a3 = 1;
  uStack_1a0 = 0;
  local_158 = 0;
  local_198 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  local_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  local_178 = (undefined8 *)0x0;
  uStack_16c = 0;
  local_168 = 0;
  uStack_164 = 0;
  local_1d0 = param_5;
  uStack_170 = 1;
  local_268 = param_3;
  local_260 = param_2;
  local_258 = param_4;
  FUN_140518214(&local_178,0);
  puVar9 = (undefined8 *)(param_1 + 0x100);
  puVar10 = local_178;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0;
  local_9c = 1;
  local_98 = 0;
  lStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0xffffffff;
  local_78 = 0xff0000ffffffff;
  uStack_70 = uStack_70 & 0xffffff00;
  uStack_6c = 0x40c00f07;
  FUN_141793e06(local_150);
  lVar3 = local_260;
  lVar8 = local_268;
  local_98 = local_268 + 0x140;
  local_78 = local_78 & 0xffffffff00000000;
  lStack_90 = param_6;
  uStack_6c._0_4_ =
       (uint)*(byte *)(param_1 + 0x409) << 0x14 |
       (uint)uStack_6c & 0xffe03fff | (param_7 & 7) << 0x11;
  bVar6 = FUN_144914152(param_1,*(undefined8 *)(local_260 + 0x148));
  uVar5 = uStack_1c0;
  uStack_6c = CONCAT44(uStack_6c._4_4_,(uint)uStack_6c & 0xbfffffff | (uint)bVar6 << 0x1e);
  puVar7 = local_a8;
  if (local_a8 == (undefined1 *)0x0) {
    puVar7 = local_150;
  }
  *(longlong *)(puVar7 + 0x18) = local_258;
  *(longlong *)(puVar7 + 8) = param_8 + 8;
  *(undefined4 *)(puVar7 + 0x58) = 0;
  *(int *)(puVar7 + 0x5c) = *(int *)(local_258 + 0x20) / 3;
  *(undefined4 *)(puVar7 + 0x68) = 0;
  *(int *)(puVar7 + 0x6c) = *(int *)(lVar8 + 0xcc) + -1;
  lVar8 = (longlong)(int)uStack_1c0;
  uStack_1c0 = uStack_1c0 + 1;
  if (uStack_1bc < uStack_1c0) {
    FUN_147471df6(&local_1c8,uVar5);
  }
  lVar4 = local_1c8;
  lVar8 = lVar8 * 0xf0;
  *(undefined8 *)(local_1c8 + 0xa8 + lVar8) = 0;
  puVar7 = local_a8;
  if (local_a8 == (undefined1 *)0x0) {
    puVar7 = local_150;
  }
  FUN_144739392(local_1c8 + lVar8,puVar7,local_a0,0);
  *(undefined1 *)(lVar4 + 0xe8 + lVar8) = uStack_6c._4_1_;
  puVar1 = (undefined4 *)(lVar4 + 0xd8 + lVar8);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = uStack_70;
  puVar1[3] = (uint)uStack_6c;
  puVar1 = (undefined4 *)(lVar4 + 200 + lVar8);
  *puVar1 = (undefined4)local_88;
  puVar1[1] = local_88._4_4_;
  puVar1[2] = (undefined4)uStack_80;
  puVar1[3] = uStack_80._4_4_;
  plVar2 = (longlong *)(lVar4 + 0xb8 + lVar8);
  *plVar2 = local_98;
  plVar2[1] = lStack_90;
  local_250 = local_1d0;
  uStack_240 = CONCAT44(uStack_1bc,uStack_1c0);
  local_248 = local_1c8;
  local_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  local_238 = CONCAT44(uStack_1b4,uStack_1b8);
  uStack_230 = uStack_1b0;
  uStack_224 = CONCAT44(uStack_1a0,CONCAT22(uStack_1a2,CONCAT11(uStack_1a3,uStack_1a4)));
  uStack_228 = uStack_1a8;
  local_218 = local_198;
  local_198 = 0;
  local_210 = uStack_190;
  local_20c = uStack_18c;
  uStack_190 = 0;
  uStack_18c = 0;
  local_208 = CONCAT44(uStack_184,local_188);
  uStack_200 = CONCAT44(uStack_17c,uStack_180);
  local_1f8 = local_178;
  local_178 = (undefined8 *)0x0;
  local_1f0 = uStack_170;
  local_1ec = uStack_16c;
  uStack_170 = 0;
  uStack_16c = 0;
  local_1e8 = local_168;
  uStack_1e4 = (undefined4)uStack_164;
  uStack_1e0 = uStack_164._4_4_;
  uStack_1dc = uStack_15c;
  local_1d8 = local_158;
  local_158 = 0;
  FUN_147cee9b0(lVar3);
  FUN_1446fc232(local_150);
  FUN_1472aaabe(&local_1d0);
  if ((local_60 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b03f6 FUN_1484b03f6 body=2218 status=ok
// SIG undefined FUN_1484b03f6(void)

void FUN_1484b03f6(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 uVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined **ppuVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined ***pppuVar21;
  longlong *plVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_208 [40];
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  float local_1b4 [3];
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined **local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined1 local_158;
  undefined7 uStack_157;
  undefined1 local_150;
  undefined7 uStack_14f;
  double local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  int local_100;
  undefined4 local_f7;
  undefined3 uStack_f3;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *(undefined1 *)(param_1 + 0x418) = 0;
  lVar18 = DAT_14cb4c0a0;
  if ((*(byte *)(param_1 + 0x6f) & 2) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar24 = 0;
    }
    else {
      bVar15 = FUN_144a61b4f();
      uVar24 = (ulonglong)(bVar15 ^ 1);
    }
    if ((*(char *)(lVar18 + uVar24) == '\x01') &&
       (((&DAT_14ca814cc)
         [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 0x3c] & 0x10) != 0)
       ) {
      FUN_14487e4ca(*(undefined8 *)(param_1 + 0x298),&local_190);
      dVar9 = local_178;
      ppuVar13 = local_190;
      if (*(longlong *)(param_1 + 0x410) == 0) {
        puVar17 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
        *puVar17 = FUN_1484c010e;
        puVar17[1] = 0;
        puVar17[2] = &PTR_FUN_14aabc2e8;
        *(undefined1 *)(puVar17 + 10) = 0;
        *(undefined4 *)(puVar17 + 0x14) = 0;
        puVar17[3] = 0;
        puVar17[4] = 0;
        puVar17[5] = 0;
        puVar17[6] = 0;
        puVar17[7] = 0;
        puVar17[8] = 0;
        *(undefined1 *)(puVar17 + 9) = 0;
        puVar17[0xb] = 0;
        puVar17[0xc] = 0;
        puVar17[0xd] = 0;
        puVar17[0xe] = 0;
        puVar17[0xf] = 0;
        puVar17[0x10] = 0;
        puVar17[0x11] = 0;
        puVar17[0x12] = 0;
        *(undefined4 *)(puVar17 + 0x13) = 0;
        LOCK();
        UNLOCK();
        iVar14 = DAT_14c761ba0 + 1;
        *(int *)(puVar17 + 0x14) = DAT_14c761ba0;
        DAT_14c761ba0 = iVar14;
        lVar18 = *(longlong *)(param_1 + 0x410);
        *(undefined8 **)(param_1 + 0x410) = puVar17 + 2;
        if (lVar18 != 0) {
          (**(code **)(lVar18 + -0x10))(lVar18 + -0x10);
        }
      }
      dVar7 = dStack_180 + local_168;
      dVar8 = local_188 + dStack_170;
      dVar12 = (double)local_190 + local_178;
      dVar10 = dStack_180 - local_168;
      dVar11 = local_188 - dStack_170;
      local_190 = &PTR_FUN_14aabc2e8;
      uVar23 = 0;
      local_150 = 0;
      local_188 = 0.0;
      dStack_180 = 0.0;
      local_178 = 0.0;
      dStack_170 = 0.0;
      local_168 = 0.0;
      dStack_160 = 0.0;
      local_158 = 0;
      local_148 = 0.0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      LOCK();
      UNLOCK();
      dVar9 = (double)ppuVar13 - dVar9;
      local_100 = DAT_14c761ba0;
      lVar18 = *(longlong *)(param_1 + 0x410);
      DAT_14c761ba0 = DAT_14c761ba0 + 1;
      FUN_1484b937c(lVar18 + 8);
      *(int *)(lVar18 + 0x90) = local_100;
      local_190 = &PTR_FUN_14aabc2e8;
      FUN_1401edd52(&local_138);
      if (local_148 != 0.0) {
        FUN_1400020a8();
      }
      lVar18 = *(longlong *)(param_1 + 0x410);
      *(double *)(lVar18 + 8) = dVar9;
      *(double *)(lVar18 + 0x10) = dVar11;
      *(double *)(lVar18 + 0x18) = dVar10;
      *(double *)(lVar18 + 0x20) = dVar12;
      *(double *)(lVar18 + 0x28) = dVar8;
      *(double *)(lVar18 + 0x30) = dVar7;
      *(undefined1 *)(lVar18 + 0x38) = 1;
      *(undefined4 *)(lVar18 + 0x39) = local_f7;
      *(uint *)(lVar18 + 0x3c) = CONCAT31(uStack_f3,local_f7._3_1_);
      local_1a8 = 0;
      uStack_1a0 = 0;
      do {
        local_190 = (undefined **)CONCAT44(local_190._4_4_,uVar23);
        local_1b4[0] = 0.0;
        local_1b4[1] = 0.0;
        local_1b4[2] = 0.0;
        local_1b4[uVar23 >> 1] = *(float *)(&DAT_149e1eeb0 + (ulonglong)((uVar23 & 1) == 0) * 4);
        local_178 = (double)local_1b4[2];
        dStack_180 = (double)local_1b4[1];
        local_188 = (double)local_1b4[0];
        uStack_140 = CONCAT44(uStack_140._4_4_,uVar23 >> 1);
        FUN_1467fc32a(&local_188,&dStack_170,&local_158);
        uVar24 = uStack_1a0;
        dStack_160 = local_188 * (double)CONCAT71(uStack_14f,local_150) -
                     (double)CONCAT71(uStack_157,local_158) * dStack_180;
        local_168 = (double)CONCAT71(uStack_157,local_158) * local_178 - local_188 * local_148;
        dStack_170 = dStack_180 * local_148 - (double)CONCAT71(uStack_14f,local_150) * local_178;
        dVar28 = dStack_160 * dStack_160 + dStack_170 * dStack_170 + local_168 * local_168;
        if (9.99999993922529e-09 < dVar28) {
          dVar28 = 1.0 / SQRT(dVar28);
          dStack_170 = dStack_170 * dVar28;
          local_168 = local_168 * dVar28;
          dStack_160 = dStack_160 * dVar28;
        }
        lVar20 = (longlong)(int)uStack_1a0;
        uVar16 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar16);
        if (uStack_1a0._4_4_ < uVar16) {
          FUN_143b742ee(&local_1a8,uVar24 & 0xffffffff);
        }
        pppuVar21 = &local_190;
        puVar17 = (undefined8 *)(lVar20 * 0x58 + local_1a8);
        for (lVar19 = 0xb; lVar19 != 0; lVar19 = lVar19 + -1) {
          *puVar17 = *pppuVar21;
          pppuVar21 = pppuVar21 + 1;
          puVar17 = puVar17 + 1;
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 != 6);
      plVar22 = (longlong *)(lVar18 + 0x48);
      FUN_14041c3f8(plVar22,uStack_1a0 & 0xffffffff,1);
      if (0 < (int)uStack_1a0) {
        local_1c0 = (dVar10 + dVar7) * 0.5;
        local_1c8 = (dVar11 + dVar8) * 0.5;
        local_1d0 = (dVar9 + dVar12) * 0.5;
        dVar10 = (dVar7 - dVar10) * 0.5;
        dVar7 = (dVar8 - dVar11) * 0.5;
        dVar9 = (dVar12 - dVar9) * 0.5;
        lVar18 = 0x48;
        lVar20 = 0;
        lVar19 = 0;
        do {
          dVar8 = *(double *)(local_1a8 + -0x40 + lVar18);
          dVar11 = *(double *)(local_1a8 + -0x38 + lVar18);
          dVar12 = *(double *)(local_1a8 + -0x30 + lVar18);
          dVar28 = *(double *)(local_1a8 + -0x28 + lVar18);
          dVar1 = *(double *)(local_1a8 + -0x20 + lVar18);
          dVar2 = *(double *)(local_1a8 + -0x18 + lVar18);
          dVar3 = *(double *)(local_1a8 + -0x10 + lVar18);
          dVar4 = *(double *)(local_1a8 + -8 + lVar18);
          local_1d4 = (float)dVar2;
          local_1dc = (float)dVar1;
          local_1d8 = (float)*(double *)(local_1a8 + lVar18);
          local_1e0 = (float)dVar4;
          dVar27 = dVar2 * dVar10 + dVar28 * dVar9 + dVar1 * dVar7;
          uVar24 = -(ulonglong)(-dVar27 <= dVar27);
          dVar2 = *(double *)(local_1a8 + lVar18) * dVar10 + dVar3 * dVar9 + dVar4 * dVar7;
          uVar25 = -(ulonglong)(-dVar2 <= dVar2);
          dVar1 = dVar12 * dVar10 + dVar8 * dVar9 + dVar7 * dVar11;
          uVar26 = -(ulonglong)(-dVar1 <= dVar1);
          dVar4 = (double)(~uVar26 & (ulonglong)-dVar1 | (ulonglong)dVar1 & uVar26);
          dVar1 = 5.0 - dVar4 * 0.5;
          uVar5 = *(undefined1 *)(local_1a8 + -0x48 + lVar18);
          lVar6 = *plVar22;
          *(float *)(lVar6 + lVar20) = (float)(dVar1 * dVar8 + dVar4 * dVar8 + local_1d0);
          *(float *)(lVar6 + 4 + lVar20) = (float)(dVar11 * dVar1 + dVar11 * dVar4 + local_1c8);
          *(float *)(lVar6 + 8 + lVar20) = (float)(dVar12 * dVar1 + dVar12 * dVar4 + local_1c0);
          *(float *)(lVar6 + 0xc + lVar20) = (float)dVar28;
          *(float *)(lVar6 + 0x10 + lVar20) = local_1dc;
          *(float *)(lVar6 + 0x14 + lVar20) = local_1d4;
          *(float *)(lVar6 + 0x18 + lVar20) = (float)dVar3;
          *(float *)(lVar6 + 0x1c + lVar20) = local_1e0;
          *(float *)(lVar6 + 0x20 + lVar20) = local_1d8;
          *(float *)(lVar6 + 0x24 + lVar20) = (float)dVar8;
          *(float *)(lVar6 + 0x28 + lVar20) = (float)dVar11;
          *(float *)(lVar6 + 0x2c + lVar20) = (float)dVar12;
          *(float *)(lVar6 + 0x30 + lVar20) =
               (float)(double)(~uVar24 & (ulonglong)-dVar27 | (ulonglong)dVar27 & uVar24);
          *(float *)(lVar6 + 0x34 + lVar20) =
               (float)(double)(~uVar25 & (ulonglong)-dVar2 | (ulonglong)dVar2 & uVar25);
          *(float *)(lVar6 + 0x38 + lVar20) = (float)(dVar4 * 0.5 + 2.5);
          *(undefined1 *)(*plVar22 + 0x3c + lVar20) = uVar5;
          lVar19 = lVar19 + 1;
          lVar20 = lVar20 + 0x40;
          lVar18 = lVar18 + 0x58;
        } while (lVar19 < (int)uStack_1a0);
      }
      *(undefined1 *)(param_1 + 0x418) = 1;
      if (local_1a8 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1484b0c90;
    }
  }
  if (*(longlong *)(param_1 + 0x410) != 0) {
    *(undefined8 *)(param_1 + 0x410) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_208);
  }
LAB_1484b0c90:
  if ((local_f0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b0d3a FUN_1484b0d3a body=106 status=ok
// SIG undefined FUN_1484b0d3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1484b0d3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((*(longlong *)(param_1 + 0x420) != 0) && (*(char *)(param_1 + 0x430) == '\x01')) {
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
      FUN_14026f43e(param_2,iVar2);
    }
    uVar4 = uRam000000014ca9686c;
    lVar3 = *param_2;
    lVar5 = (longlong)iVar2 * 0x30;
    puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar5);
    *puVar1 = _DAT_14ca96864;
    puVar1[1] = uVar4;
    uVar4 = uRam000000014ca9685c;
    puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar5);
    *puVar1 = _DAT_14ca96854;
    puVar1[1] = uVar4;
    uVar4 = uRam000000014ca9684c;
    *(undefined8 *)(lVar3 + lVar5) = _DAT_14ca96844;
    ((undefined8 *)(lVar3 + lVar5))[1] = uVar4;
  }
  return;
}



// FUNCTION 1484b0dee FUN_1484b0dee body=221 status=ok
// SIG undefined FUN_1484b0dee(void)

void FUN_1484b0dee(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  
  if ((*(longlong *)(param_1 + 0x420) == 0) || (*(longlong *)(param_1 + 0x420) != *param_2)) {
    if (param_3 == '\0') {
      FUN_14080c2b4();
    }
    lVar3 = *param_2;
    lVar4 = param_2[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)(param_1 + 0x428);
    *(longlong *)(param_1 + 0x420) = lVar3;
    *(longlong *)(param_1 + 0x428) = lVar4;
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
    bVar6 = *(longlong *)(param_1 + 0x420) != 0;
    *(bool *)(param_1 + 0x430) = bVar6;
    *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) & 0xfe | bVar6;
    *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) & 0xef | bVar6 << 4;
    FUN_1403fc26e(param_1);
  }
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001484b0ebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1484b0ef0 FUN_1484b0ef0 body=340 status=ok
// SIG undefined FUN_1484b0ef0(void)

void FUN_1484b0ef0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar5 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar5 = local_48;
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar2 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar3 = local_48;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  if (0 < (int)plVar3[1]) {
    uVar4 = 0;
    do {
      (**(code **)(*param_1 + 0x638))
                (param_1,uVar4 & 0xffffffff,*(undefined8 *)(*plVar5 + uVar4 * 8));
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)(int)plVar3[1]);
  }
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0xbc8))(param_1);
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b1046 FUN_1484b1046 body=102 status=ok
// SIG undefined FUN_1484b1046(void)

void FUN_1484b1046(longlong *param_1,longlong *param_2,char param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_2[1]) {
    uVar1 = 0;
    do {
      (**(code **)(*param_1 + 0x638))
                (param_1,uVar1 & 0xffffffff,*(undefined8 *)(*param_2 + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while ((longlong)uVar1 < (longlong)(int)param_2[1]);
  }
  if (param_3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001484b109e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xbc8))(param_1);
    return;
  }
  return;
}



// FUNCTION 1484b10ac FUN_1484b10ac body=105 status=ok
// SIG undefined FUN_1484b10ac(void)

void FUN_1484b10ac(longlong *param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(char *)((longlong)param_1 + 0x902) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x902) = 1;
    if ((char)param_1[0x120] != '\x03') goto LAB_1484b10d6;
  }
  else {
    if ((char)param_1[0x120] == '\x03') goto LAB_1484b10ec;
LAB_1484b10d6:
    *(undefined1 *)(param_1 + 0x120) = 3;
  }
  (**(code **)(*param_1 + 0xc80))(param_1);
LAB_1484b10ec:
                    /* WARNING: Could not recover jumptable at 0x0001484b1100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc68))(param_1,1);
  return;
}



// FUNCTION 1484b118e FUN_1484b118e body=443 status=ok
// SIG undefined FUN_1484b118e(void)

void FUN_1484b118e(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar3 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar2 = local_38;
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar1 = local_3c;
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_40 != 0;
  (**(code **)(*param_1 + 0xbe0))(param_1,iVar3 != 0,iVar2 != 0,iVar1 != 0);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b134e FUN_1484b134e body=154 status=ok
// SIG undefined FUN_1484b134e(void)

void FUN_1484b134e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x709) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b13f4 FUN_1484b13f4 body=240 status=ok
// SIG undefined FUN_1484b13f4(void)

void FUN_1484b13f4(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1484b14e6(param_1,iVar1 != 0,local_28 != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b14e6 FUN_1484b14e6 body=135 status=ok
// SIG undefined FUN_1484b14e6(void)

void FUN_1484b14e6(longlong *param_1,char param_2,char param_3)

{
  char cVar1;
  
  cVar1 = *(char *)((longlong)param_1 + 0x902);
  if (param_2 == '\0') {
    if (cVar1 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x902) = 0;
    }
    if ((char)param_1[0x120] != '\x03') goto LAB_1484b1539;
    *(undefined1 *)(param_1 + 0x120) = 0;
  }
  else {
    cVar1 = cVar1 == '\0';
    if ((bool)cVar1) {
      *(undefined1 *)((longlong)param_1 + 0x902) = 1;
    }
    if ((char)param_1[0x120] == '\x03') {
LAB_1484b1539:
      if (cVar1 == '\0') goto LAB_1484b1549;
    }
    else {
      *(undefined1 *)(param_1 + 0x120) = 3;
    }
  }
  (**(code **)(*param_1 + 0xc80))(param_1);
LAB_1484b1549:
  if (param_3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001484b1562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xc68))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1484b1578 FUN_1484b1578 body=277 status=ok
// SIG undefined FUN_1484b1578(void)

void FUN_1484b1578(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  lVar2 = (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(longlong *)(param_2 + 0x20) = lVar2;
  if ((((bool)*(char *)((longlong)param_1 + 0x903) != (iVar1 != 0)) &&
      (*(bool *)((longlong)param_1 + 0x903) = iVar1 != 0, iVar1 == 0)) && (local_28 != 0)) {
    (**(code **)(*param_1 + 0xc68))(param_1,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b168e FUN_1484b168e body=156 status=ok
// SIG undefined FUN_1484b168e(void)

void FUN_1484b168e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1484b172c(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b172c FUN_1484b172c body=281 status=ok
// SIG undefined FUN_1484b172c(void)

void FUN_1484b172c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != (longlong *)0x0) {
    if ((param_1[0xd8] != 0) && (param_1[0xe0] != 0)) {
      FUN_14480f766(param_1[0xd8] + 0x58);
    }
    (**(code **)(*param_2 + 0x170))(param_2,0,param_1,0x10);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    param_1[0xd8] = (longlong)param_2;
    local_38 = FUN_1484b1c12;
    local_30 = 0;
    FUN_145c6854e(param_2 + 0xb,&local_28,param_1);
    param_1[0xe0] = local_28;
    (**(code **)(*param_1 + 0xaa0))(param_1);
    FUN_1447f69b6(param_1 + 0xd9);
    lVar1 = 0xc80;
    if (*(char *)((longlong)param_1 + 0x903) == '\0') {
      lVar1 = (ulonglong)(*(byte *)(param_1 + 0x122) ^ 1) * 8 + 0xc80;
    }
    (**(code **)(*param_1 + lVar1))(param_1);
    (**(code **)(*param_1 + 0xc50))(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b1846 FUN_1484b1846 body=169 status=ok
// SIG undefined FUN_1484b1846(void)

void FUN_1484b1846(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((char)param_1[0x100] != local_19) {
    *(char *)(param_1 + 0x100) = local_19;
    (**(code **)(*param_1 + 0xc48))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b18f0 FUN_1484b18f0 body=25 status=ok
// SIG undefined FUN_1484b18f0(void)

void FUN_1484b18f0(longlong *param_1,char param_2)

{
  if ((char)param_1[0x100] == param_2) {
    return;
  }
  *(char *)(param_1 + 0x100) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001484b1902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc48))();
  return;
}



// FUNCTION 1484b190e FUN_1484b190e body=162 status=ok
// SIG undefined FUN_1484b190e(void)

void FUN_1484b190e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xc68))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b19c2 FUN_1484b19c2 body=247 status=ok
// SIG undefined FUN_1484b19c2(void)

void FUN_1484b19c2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar1 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1484b1aba(param_1,iVar1 != 0,local_30 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b1aba FUN_1484b1aba body=217 status=ok
// SIG undefined FUN_1484b1aba(void)

bool FUN_1484b1aba(longlong *param_1,byte param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  int *local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &local_3c;
  local_3c = 0;
  FUN_143b745b4(&local_48,*(undefined8 *)(param_1[0xd8] + 0x98));
  iVar2 = local_3c;
  iVar1 = local_3c + 1;
  iVar3 = (**(code **)(*param_1 + 0x7b0))(param_1);
  if ((iVar3 <= iVar2 & param_2) == 1) {
    do {
      (**(code **)(*param_1 + 0x638))(param_1,iVar3,0);
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  iVar3 = (**(code **)(*param_1 + 0x7b0))(param_1);
  if ((param_3 != '\0') && (iVar1 < iVar3)) {
    (**(code **)(*param_1 + 0xbc8))(param_1,iVar1);
  }
  iVar3 = (**(code **)(*param_1 + 0x7b0))(param_1);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar3 == iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b1bb8 FUN_1484b1bb8 body=48 status=ok
// SIG undefined FUN_1484b1bb8(void)

void FUN_1484b1bb8(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  FUN_1448284b2(param_1,plVar1);
                    /* WARNING: Could not recover jumptable at 0x0001484b1be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc08);
  return;
}



// FUNCTION 1484b1be8 FUN_1484b1be8 body=41 status=ok
// SIG undefined FUN_1484b1be8(void)

void FUN_1484b1be8(undefined8 param_1,longlong *param_2)

{
  FUN_1448284b2();
                    /* WARNING: Could not recover jumptable at 0x0001484b1c0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  return;
}



// FUNCTION 1484b1c12 FUN_1484b1c12 body=219 status=ok
// SIG undefined FUN_1484b1c12(void)

void FUN_1484b1c12(longlong *param_1,undefined8 param_2,char *param_3)

{
  byte bVar1;
  undefined8 in_RAX;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  
  if ((byte)(*param_3 - 1U) < 3) {
    if ((char)param_1[0xdf] == '\x01') {
      (**(code **)(*param_1 + 0xaa0))(param_1);
    }
    FUN_1447f69b6(param_1 + 0xd9);
    if (*param_3 == '\x03') {
      FUN_1484c0cc4(param_1 + 0xdc,param_1,*(undefined8 *)(param_3 + 0x18),param_3[2]);
    }
  }
  else {
    if (*param_3 == '\x04') {
      bVar1 = param_3[1];
      uVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1) & 0xffffffff;
      bVar3 = (byte)uVar4 >> 1;
      uVar4 = CONCAT71((int7)(uVar4 >> 8),bVar3) & 0xffffffffffffff08;
      FUN_1484b2d8e(param_1,CONCAT71((int7)(uVar4 >> 8),
                                     (byte)uVar4 | bVar1 >> 2 & 2 | bVar1 & 4 | bVar3 & 1));
    }
    else {
      (**(code **)(*param_1 + 0xaa0))(param_1);
    }
    FUN_1447f69b6(param_1 + 0xd9);
  }
  lVar2 = 0xc80;
  if (*(char *)((longlong)param_1 + 0x903) == '\0') {
    lVar2 = (ulonglong)(*(byte *)(param_1 + 0x122) ^ 1) * 8 + 0xc80;
  }
  (**(code **)(*param_1 + lVar2))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001484b1cb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc50))(param_1);
  return;
}



// FUNCTION 1484b1cee FUN_1484b1cee body=342 status=ok
// SIG undefined FUN_1484b1cee(void)

void FUN_1484b1cee(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144842962();
  local_38 = 0xd89b5e42;
  uStack_34 = 0x24bd4d46;
  uStack_30 = 0x8412aca8;
  uStack_2c = 0xdf641779;
  iVar2 = FUN_1448a256a(param_1);
  if ((iVar2 < 0x2a) && ((char)param_1[0x100] == -1)) {
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  lVar3 = param_1[0xd8];
  if (lVar3 == 0) {
    FUN_1446f470e(&local_40,L"DynamicMesh",1);
    lVar3 = FUN_1484b1e45(param_1,local_40);
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    param_1[0xd8] = lVar3;
  }
  local_58 = FUN_1484b1c12;
  local_50 = 0;
  FUN_145c6854e(lVar3 + 0x58,&local_48,param_1);
  param_1[0xe0] = local_48;
  FUN_145c68350(param_1);
  if (param_1[0x121] != 0) {
    cVar1 = FUN_144a792c0(param_1,0x30);
    if (cVar1 != '\0') {
      FUN_144757f48(param_1[0x121],0x21);
    }
  }
  (**(code **)(*param_1 + 0x7a0))(param_1);
  if ((*(char *)((longlong)param_1 + 0x6a3) == '\0') == (param_1[0x10d] != 0)) {
    (**(code **)(*param_1 + 0xbc0))(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b1e45 FUN_1484b1e45 body=199 status=ok
// SIG undefined FUN_1484b1e45(void)

undefined8 FUN_1484b1e45(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_b8 = FUN_140a1ade6();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  uStack_a0 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b1f32 FUN_1484b1f32 body=131 status=ok
// SIG undefined FUN_1484b1f32(void)

void FUN_1484b1f32(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  undefined2 local_28;
  undefined1 local_26;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x708) == '\x01') {
    local_26 = 0;
    local_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    local_10 = 0;
    local_30 = &local_40;
    local_38 = &LAB_143b77364;
    local_40 = param_2;
    FUN_1484b8434(*(undefined8 *)(param_1 + 0x6c0),&local_38,&local_28,0);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b1fb6 FUN_1484b1fb6 body=113 status=ok
// SIG undefined FUN_1484b1fb6(void)

void FUN_1484b1fb6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  undefined2 local_28;
  undefined1 local_26;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_26 = 0;
  local_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  local_30 = &local_40;
  local_38 = &LAB_143b77364;
  local_40 = param_2;
  FUN_1484b8434();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b2040 FUN_1484b2040 body=20 status=ok
// SIG undefined FUN_1484b2040(void)

void FUN_1484b2040(longlong param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001484b2051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_2)(param_2[1],*(undefined8 *)(param_1 + 0x98),(code *)*param_2);
  return;
}



// FUNCTION 1484b2054 FUN_1484b2054 body=143 status=ok
// SIG undefined FUN_1484b2054(void)

void FUN_1484b2054(longlong param_1,undefined4 *param_2,int param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x708) == '\x01') {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_36 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    FUN_1484b8434(*(undefined8 *)(param_1 + 0x6c0),&local_48,&local_38,0);
    if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b20f8 FUN_1484b20f8 body=119 status=ok
// SIG undefined FUN_1484b20f8(void)

void FUN_1484b20f8(undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_26 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  local_38 = *param_2;
  local_30 = param_2[1];
  local_28 = param_3;
  local_27 = param_4;
  FUN_1484b8434(0,&local_38,&local_28,param_5);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b2170 FUN_1484b2170 body=208 status=ok
// SIG undefined FUN_1484b2170(void)

void FUN_1484b2170(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  plVar1 = param_1 + 0xfb;
  if (plVar1 != param_2) {
    puVar4 = (undefined8 *)*plVar1;
    *plVar1 = *param_2;
    *param_2 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = (undefined8 *)param_1[0xfc];
  if (param_1[0xfb] == 0) {
    param_1[0xfc] = 0;
  }
  else {
    if (puVar4 != (undefined8 *)0x0) goto LAB_1484b2216;
    uVar2 = (**(code **)(*param_1 + 0xa88))(param_1);
    lVar3 = FUN_14001cc68(0x220,0x10);
    FUN_146bff712(lVar3,uVar2);
    puVar4 = (undefined8 *)param_1[0xfc];
    param_1[0xfc] = lVar3;
  }
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_1484b2216:
  puVar4 = (undefined8 *)*param_2;
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001484b2232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 1484b2284 FUN_1484b2284 body=145 status=ok
// SIG undefined FUN_1484b2284(void)

void FUN_1484b2284(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_48;
  undefined1 local_39;
  code *local_38;
  undefined1 **local_30;
  undefined2 local_28;
  undefined1 local_26;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_39 = param_3;
  if (*(char *)(param_1 + 0x708) == '\x01') {
    local_50 = &local_39;
    local_30 = &local_50;
    local_26 = 0;
    local_20 = 0;
    uStack_18 = 0;
    local_10 = 0;
    local_28 = 4;
    local_38 = FUN_143b744ec;
    local_48 = param_2;
    FUN_1484b8434(*(undefined8 *)(param_1 + 0x6c0),&local_38,&local_28,0);
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b2316 FUN_1484b2316 body=160 status=ok
// SIG undefined FUN_1484b2316(void)

longlong * FUN_1484b2316(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((char)param_1[0x100] == '\x01') &&
     (lVar1 = (**(code **)(*param_1 + 0xa98))(),
     *(longlong *)(*(longlong *)(lVar1 + 0x98) + 0x208) != 0)) {
    if (((char)param_1[0x100] == '\x01') && (*(char *)((longlong)param_1 + 0x801) == '\0')) {
      lVar1 = (**(code **)(*param_1 + 0xa98))(param_1);
      local_18 = param_1;
      FUN_143b746ca(&local_18,*(undefined8 *)(lVar1 + 0x98));
    }
    plVar2 = (longlong *)0x0;
    if (*(char *)((longlong)param_1 + 0x801) != '\0') {
      plVar2 = param_1 + 0x101;
    }
  }
  else {
    plVar2 = (longlong *)0x0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2;
}



// FUNCTION 1484b23b8 FUN_1484b23b8 body=72 status=ok
// SIG undefined FUN_1484b23b8(void)

void FUN_1484b23b8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)param_1[0xfb];
  if (plVar1 != (longlong *)0x0) {
    lVar2 = param_1[0xfc];
    uVar3 = (**(code **)(*param_1 + 0xa88))(param_1);
    (**(code **)(*plVar1 + 8))(plVar1,uVar3,lVar2);
  }
  FUN_145c68350(param_1);
  return;
}



// FUNCTION 1484b240a FUN_1484b240a body=1263 status=ok
// SIG undefined FUN_1484b240a(void)

void FUN_1484b240a(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar7 = (longlong *)param_1[0xfb];
  if (plVar7 != (longlong *)0x0) {
    lVar1 = param_1[0xfc];
    uVar6 = (**(code **)(*param_1 + 0xa88))(param_1);
    (**(code **)(*plVar7 + 8))(plVar7,uVar6,lVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_d8);
  }
  if ((((char)param_1[0x13b] != '\x01') || (lVar1 = param_1[0xb5], lVar1 == 0)) ||
     (cVar5 = (**(code **)(*param_1 + 0xb98))(param_1), cVar5 == '\0')) {
    if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
      FUN_145c68350(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  cVar5 = (**(code **)(*param_1 + 0xbf8))(param_1);
  if ((cVar5 == '\0') || (*(char *)(lVar1 + 0x2a5) != '\0')) {
    cVar5 = (**(code **)(*param_1 + 0xbf8))(param_1);
    if ((cVar5 == '\0') && (*(char *)(lVar1 + 0x2a5) == '\x01')) {
      *(undefined1 *)(lVar1 + 0x2a5) = 0;
      local_a8 = *(longlong *)(lVar1 + 0x2b0);
      uStack_60 = *(undefined8 *)(lVar1 + 0x2b8);
      local_98 = *(longlong **)(lVar1 + 0x2c0);
      uStack_50 = *(undefined8 *)(lVar1 + 0x2c8);
      local_48 = *(longlong *)(lVar1 + 0x2d0);
      uStack_40 = *(undefined8 *)(lVar1 + 0x2d8);
      local_38 = *(undefined8 *)(lVar1 + 0x2e0);
      uStack_30 = *(undefined8 *)(lVar1 + 0x2e8);
      uVar2 = local_38;
      uVar3 = uStack_30;
      local_58 = local_98;
      uVar4 = uStack_50;
      local_68 = local_a8;
      uVar6 = uStack_60;
      *(ulonglong *)(lVar1 + 0x2e0) = CONCAT44(uStack_74,local_78);
      *(ulonglong *)(lVar1 + 0x2e8) = CONCAT44(uStack_6c,uStack_70);
      *(longlong *)(lVar1 + 0x2d0) = local_88;
      *(undefined8 *)(lVar1 + 0x2d8) = uStack_80;
      *(undefined8 *)(lVar1 + 0x2c0) = 0;
      *(ulonglong *)(lVar1 + 0x2c8) = CONCAT44(uStack_8c,uStack_90);
      *(undefined8 *)(lVar1 + 0x2b0) = 0;
      *(ulonglong *)(lVar1 + 0x2b8) = CONCAT44(uStack_9c,uStack_a0);
      uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
      uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
      local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
      uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
      local_78 = (undefined4)local_38;
      uStack_74 = local_38._4_4_;
      uStack_70 = (undefined4)uStack_30;
      uStack_6c = uStack_30._4_4_;
      local_88 = local_48;
      uStack_80 = uStack_40;
      local_38 = uVar2;
      uStack_30 = uVar3;
      local_88 = local_48;
      uStack_80 = uStack_40;
      uStack_90 = (undefined4)uStack_50;
      uStack_8c = uStack_50._4_4_;
      uStack_a0 = (undefined4)uStack_60;
      uStack_9c = uStack_60._4_4_;
      goto joined_r0x0001484b2566;
    }
  }
  else {
    *(undefined1 *)(lVar1 + 0x2a5) = 1;
    local_a8 = *(longlong *)(lVar1 + 0x2b0);
    uStack_60 = *(undefined8 *)(lVar1 + 0x2b8);
    local_98 = *(longlong **)(lVar1 + 0x2c0);
    uStack_50 = *(undefined8 *)(lVar1 + 0x2c8);
    local_48 = *(longlong *)(lVar1 + 0x2d0);
    uStack_40 = *(undefined8 *)(lVar1 + 0x2d8);
    local_38 = *(undefined8 *)(lVar1 + 0x2e0);
    uStack_30 = *(undefined8 *)(lVar1 + 0x2e8);
    uVar2 = local_38;
    uVar3 = uStack_30;
    local_58 = local_98;
    uVar4 = uStack_50;
    local_68 = local_a8;
    uVar6 = uStack_60;
    *(ulonglong *)(lVar1 + 0x2e0) = CONCAT44(uStack_74,local_78);
    *(ulonglong *)(lVar1 + 0x2e8) = CONCAT44(uStack_6c,uStack_70);
    *(undefined ***)(lVar1 + 0x2d0) = &PTR_LAB_14aef0420;
    *(longlong **)(lVar1 + 0x2d8) = param_1;
    *(undefined8 *)(lVar1 + 0x2c0) = 0;
    *(ulonglong *)(lVar1 + 0x2c8) = CONCAT44(uStack_8c,uStack_90);
    *(code **)(lVar1 + 0x2b0) = FUN_143b74772;
    *(ulonglong *)(lVar1 + 0x2b8) = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    local_78 = (undefined4)local_38;
    uStack_74 = local_38._4_4_;
    uStack_70 = (undefined4)uStack_30;
    uStack_6c = uStack_30._4_4_;
    local_88 = local_48;
    uStack_80 = uStack_40;
    local_38 = uVar2;
    uStack_30 = uVar3;
    local_88 = local_48;
    uStack_80 = uStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
joined_r0x0001484b2566:
    uStack_60 = uVar6;
    uStack_50 = uVar4;
    local_68 = local_a8;
    local_58 = local_98;
    local_48 = local_88;
    uStack_40 = uStack_80;
    if (local_a8 != 0) {
      plVar7 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar7 = &local_88;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  cVar5 = (**(code **)(*param_1 + 0xc10))(param_1);
  if ((cVar5 == '\0') || (*(char *)(lVar1 + 0x2f0) != '\0')) {
    cVar5 = (**(code **)(*param_1 + 0xc10))(param_1);
    if ((cVar5 != '\0') || (*(char *)(lVar1 + 0x2f0) != '\x01')) goto LAB_1484b2692;
    *(undefined1 *)(lVar1 + 0x2f0) = 0;
    local_a8 = *(longlong *)(lVar1 + 0x300);
    uStack_60 = *(undefined8 *)(lVar1 + 0x308);
    local_98 = *(longlong **)(lVar1 + 0x310);
    uStack_50 = *(undefined8 *)(lVar1 + 0x318);
    local_48 = *(longlong *)(lVar1 + 800);
    uStack_40 = *(undefined8 *)(lVar1 + 0x328);
    local_38 = *(undefined8 *)(lVar1 + 0x330);
    uStack_30 = *(undefined8 *)(lVar1 + 0x338);
    uVar2 = local_38;
    uVar3 = uStack_30;
    local_58 = local_98;
    uVar4 = uStack_50;
    local_68 = local_a8;
    uVar6 = uStack_60;
    *(ulonglong *)(lVar1 + 0x330) = CONCAT44(uStack_74,local_78);
    *(ulonglong *)(lVar1 + 0x338) = CONCAT44(uStack_6c,uStack_70);
    *(longlong *)(lVar1 + 800) = local_88;
    *(undefined8 *)(lVar1 + 0x328) = uStack_80;
    *(undefined8 *)(lVar1 + 0x310) = 0;
    *(ulonglong *)(lVar1 + 0x318) = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(lVar1 + 0x300) = 0;
    *(ulonglong *)(lVar1 + 0x308) = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    local_78 = (undefined4)local_38;
    uStack_74 = local_38._4_4_;
    uStack_70 = (undefined4)uStack_30;
    uStack_6c = uStack_30._4_4_;
    local_88 = local_48;
    uStack_80 = uStack_40;
    local_38 = uVar2;
    uStack_30 = uVar3;
    local_88 = local_48;
    uStack_80 = uStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
  }
  else {
    *(undefined1 *)(lVar1 + 0x2f0) = 1;
    local_a8 = *(longlong *)(lVar1 + 0x300);
    uStack_60 = *(undefined8 *)(lVar1 + 0x308);
    local_98 = *(longlong **)(lVar1 + 0x310);
    uStack_50 = *(undefined8 *)(lVar1 + 0x318);
    local_48 = *(longlong *)(lVar1 + 800);
    uStack_40 = *(undefined8 *)(lVar1 + 0x328);
    local_38 = *(undefined8 *)(lVar1 + 0x330);
    uStack_30 = *(undefined8 *)(lVar1 + 0x338);
    uVar2 = local_38;
    uVar3 = uStack_30;
    local_58 = local_98;
    uVar4 = uStack_50;
    local_68 = local_a8;
    uVar6 = uStack_60;
    *(ulonglong *)(lVar1 + 0x330) = CONCAT44(uStack_74,local_78);
    *(ulonglong *)(lVar1 + 0x338) = CONCAT44(uStack_6c,uStack_70);
    *(undefined ***)(lVar1 + 800) = &PTR_LAB_14aef0440;
    *(longlong **)(lVar1 + 0x328) = param_1;
    *(undefined8 *)(lVar1 + 0x310) = 0;
    *(ulonglong *)(lVar1 + 0x318) = CONCAT44(uStack_8c,uStack_90);
    *(code **)(lVar1 + 0x300) = FUN_143b747dc;
    *(ulonglong *)(lVar1 + 0x308) = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    local_78 = (undefined4)local_38;
    uStack_74 = local_38._4_4_;
    uStack_70 = (undefined4)uStack_30;
    uStack_6c = uStack_30._4_4_;
    local_88 = local_48;
    uStack_80 = uStack_40;
    local_38 = uVar2;
    uStack_30 = uVar3;
    local_88 = local_48;
    uStack_80 = uStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
  }
  uStack_60 = uVar6;
  uStack_50 = uVar4;
  local_68 = local_a8;
  local_58 = local_98;
  local_48 = local_88;
  uStack_40 = uStack_80;
  if (local_a8 != 0) {
    plVar7 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar7 = &local_88;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
LAB_1484b2692:
  local_b8 = 0;
  FUN_143b6dd46(lVar1,0,0,1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_d8);
}



// FUNCTION 1484b290c FUN_1484b290c body=914 status=ok
// SIG undefined FUN_1484b290c(void)

void FUN_1484b290c(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined ***pppuVar9;
  longlong lVar10;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  longlong *plStack_f0;
  longlong local_e8;
  longlong *plStack_e0;
  undefined1 local_d8;
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  longlong *plStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar8 = (longlong *)param_1[0xfb];
  if (plVar8 != (longlong *)0x0) {
    lVar10 = param_1[0xfc];
    uVar6 = (**(code **)(*param_1 + 0xa88))(param_1);
    (**(code **)(*plVar8 + 8))(plVar8,uVar6,lVar10);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_138);
  }
  if ((((char)param_1[0x13b] == '\x01') && (param_1[0xb5] != 0)) &&
     (cVar4 = (**(code **)(*param_1 + 0xb98))(param_1), cVar4 != '\0')) {
    local_f8 = 0;
    plStack_f0 = (longlong *)0x0;
    local_c8 = 0;
    local_b8 = (longlong *)0x0;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14aef0460;
    local_88 = FUN_143b74860;
    plStack_60 = param_1;
    FUN_14170b918(&local_e8);
    plVar8 = plStack_e0;
    lVar10 = local_e8;
    local_d8 = 1;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
      UNLOCK();
    }
    cVar4 = FUN_144a53f06();
    pcVar3 = local_88;
    plVar2 = DAT_14c8442c0;
    if (cVar4 == '\0') {
      pppuVar9 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar9 = &local_68;
      }
      uVar6 = (*(code *)(*pppuVar9)[1])();
      (*pcVar3)(uVar6);
      *(undefined4 *)(local_e8 + 0x80) = 0;
      FUN_140b576f0();
    }
    else {
      puVar5 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      puVar5[1] = 0;
      *puVar5 = TAsyncQueuedWork<void>::vftable;
      puVar5[2] = local_88;
      puVar5[4] = local_78;
      local_78 = (undefined ***)0x0;
      *(undefined4 *)(puVar5 + 8) = local_58;
      *(undefined4 *)((longlong)puVar5 + 0x44) = uStack_54;
      *(undefined4 *)(puVar5 + 9) = uStack_50;
      *(undefined4 *)((longlong)puVar5 + 0x4c) = uStack_4c;
      puVar5[6] = local_68;
      puVar5[7] = plStack_60;
      if (local_88 != (code *)0x0) {
        local_88 = (code *)0x0;
      }
      puVar5[10] = local_e8;
      puVar5[0xb] = plStack_e0;
      local_e8 = 0;
      plStack_e0 = (longlong *)0x0;
      *(undefined1 *)(puVar5 + 0xc) = 0;
      (**(code **)(*plVar2 + 0x18))(plVar2,puVar5,3);
    }
    plVar2 = plStack_e0;
    local_108 = lVar10;
    local_100 = plVar8;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_e0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plStack_e0)(plStack_e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_88 != (code *)0x0) {
      pppuVar9 = &local_68;
      if (local_78 != (undefined ***)0x0) {
        pppuVar9 = local_78;
      }
      (*(code *)(*pppuVar9)[2])(pppuVar9);
    }
    if (local_c8 != 0) {
      plVar8 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar8 = local_a8;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    FUN_14614a64a(&local_f8,&local_108);
    plVar8 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_100 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if ((char)param_1[0x13b] == '\x01') {
      lVar10 = param_1[0xb5];
    }
    else {
      lVar10 = 0;
    }
    local_118 = param_4;
    FUN_143b6dd46(lVar10,1,param_2,param_3);
    FUN_1448c69c8(param_1);
    lVar10 = local_f8;
    if (local_f8 != 0) {
      do {
        do {
          lVar7 = lVar10;
          lVar10 = 0;
        } while (lVar7 == 0);
        plVar8 = *(longlong **)(lVar7 + 0x70);
        cVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,0xffffffff,0);
        lVar10 = local_f8;
      } while (cVar4 == '\0');
    }
    (**(code **)(*param_1 + 0x540))(param_1);
    plVar8 = (longlong *)(**(code **)(*param_1 + 0xa98))(param_1);
    (**(code **)(*plVar8 + 0x2a8))(plVar8);
    plVar8 = plStack_f0;
    if (plStack_f0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_f0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_f0)(plStack_f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_138);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    FUN_145c68350(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b2cb4 FUN_1484b2cb4 body=218 status=ok
// SIG undefined FUN_1484b2cb4(void)

void FUN_1484b2cb4(longlong *param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)param_1[0xfb];
  if (plVar2 == (longlong *)0x0) {
    if ((((char)param_1[0x13b] == '\x01') && ((byte)((byte)param_2 | (byte)param_3 | param_4) == 1))
       && (param_1[0xb5] != 0)) {
      cVar1 = (**(code **)(*param_1 + 0xb98))(param_1);
      if (cVar1 != '\0') {
        if ((char)param_1[0x13b] == '\x01') {
          lVar4 = param_1[0xb5];
        }
        else {
          lVar4 = 0;
        }
        FUN_143b6dd46(lVar4,0,param_2,param_3,param_4);
        plVar2 = (longlong *)(**(code **)(*param_1 + 0xa98))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001484b2d52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x2a8))(plVar2);
        return;
      }
    }
  }
  else {
    lVar4 = param_1[0xfc];
    uVar3 = (**(code **)(*param_1 + 0xa88))(param_1);
    (**(code **)(*plVar2 + 8))(plVar2,uVar3,lVar4);
  }
  FUN_145c68350(param_1);
  return;
}



// FUNCTION 1484b2d8e FUN_1484b2d8e body=993 status=ok
// SIG undefined FUN_1484b2d8e(void)

void FUN_1484b2d8e(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined ***pppuVar10;
  byte bVar11;
  undefined1 auStack_128 [32];
  byte local_108;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  longlong *plStack_d0;
  undefined1 local_c8;
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar5 = (longlong *)param_1[0xfb];
  if (plVar5 != (longlong *)0x0) {
    lVar9 = param_1[0xfc];
    uVar7 = (**(code **)(*param_1 + 0xa88))(param_1);
    (**(code **)(*plVar5 + 8))(plVar5,uVar7,lVar9);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_128);
  }
  if (((((char)param_1[0x13b] == '\x01') && (bVar11 = (byte)param_2, bVar11 != 0)) &&
      (param_1[0xb5] != 0)) && (cVar4 = (**(code **)(*param_1 + 0xb98))(param_1), cVar4 != '\0')) {
    local_e8 = 0;
    plStack_e0 = (longlong *)0x0;
    if ((param_2 & 1) == 0) {
      if ((char)param_1[0x13b] == '\x01') {
        lVar9 = param_1[0xb5];
      }
      else {
        lVar9 = 0;
      }
      local_108 = (bVar11 & 8) >> 3;
      FUN_143b6dd46(lVar9,0,CONCAT71((int7)((param_2 & 0xffffff04) >> 8),
                                     (byte)(param_2 & 0xffffff04) >> 2),
                    CONCAT71((int7)((param_2 & 0xffffff02) >> 8),(byte)(param_2 & 0xffffff02) >> 1))
      ;
    }
    else {
      local_b8 = 0;
      local_a8 = (longlong *)0x0;
      local_68 = (undefined ***)0x0;
      local_58 = &PTR_LAB_14aef0480;
      local_78 = FUN_143b7489c;
      plStack_50 = param_1;
      FUN_14170b918(&local_d8);
      plVar5 = plStack_d0;
      lVar9 = local_d8;
      local_c8 = 1;
      if (plStack_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
        UNLOCK();
      }
      cVar4 = FUN_144a53f06();
      pcVar3 = local_78;
      plVar1 = DAT_14c8442c0;
      if (cVar4 == '\0') {
        pppuVar10 = local_68;
        if (local_68 == (undefined ***)0x0) {
          pppuVar10 = &local_58;
        }
        uVar7 = (*(code *)(*pppuVar10)[1])();
        (*pcVar3)(uVar7);
        *(undefined4 *)(local_d8 + 0x80) = 0;
        FUN_140b576f0();
      }
      else {
        puVar6 = (undefined8 *)FUN_14001cc68(0x70,0x10);
        puVar6[1] = 0;
        *puVar6 = TAsyncQueuedWork<void>::vftable;
        puVar6[2] = local_78;
        puVar6[4] = local_68;
        local_68 = (undefined ***)0x0;
        *(undefined4 *)(puVar6 + 8) = local_48;
        *(undefined4 *)((longlong)puVar6 + 0x44) = uStack_44;
        *(undefined4 *)(puVar6 + 9) = uStack_40;
        *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_3c;
        puVar6[6] = local_58;
        puVar6[7] = plStack_50;
        if (local_78 != (code *)0x0) {
          local_78 = (code *)0x0;
        }
        puVar6[10] = local_d8;
        puVar6[0xb] = plStack_d0;
        local_d8 = 0;
        plStack_d0 = (longlong *)0x0;
        *(undefined1 *)(puVar6 + 0xc) = 0;
        (**(code **)(*plVar1 + 0x18))(plVar1,puVar6,3);
      }
      plVar1 = plStack_d0;
      local_f8 = lVar9;
      local_f0 = plVar5;
      if (plStack_d0 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_d0 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plStack_d0)(plStack_d0);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if (local_78 != (code *)0x0) {
        pppuVar10 = &local_58;
        if (local_68 != (undefined ***)0x0) {
          pppuVar10 = local_68;
        }
        (*(code *)(*pppuVar10)[2])(pppuVar10);
      }
      if (local_b8 != 0) {
        plVar5 = local_a8;
        if (local_a8 == (longlong *)0x0) {
          plVar5 = local_98;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      FUN_14614a64a(&local_e8,&local_f8);
      plVar5 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_f0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      if ((char)param_1[0x13b] == '\x01') {
        lVar9 = param_1[0xb5];
      }
      else {
        lVar9 = 0;
      }
      local_108 = (bVar11 & 8) >> 3;
      FUN_143b6dd46(lVar9,1,CONCAT71((int7)((param_2 & 0xffffff04) >> 8),
                                     (byte)(param_2 & 0xffffff04) >> 2),
                    CONCAT71((int7)((param_2 & 0xffffff02) >> 8),(byte)(param_2 & 0xffffff02) >> 1))
      ;
      FUN_1448c69c8(param_1);
      lVar9 = local_e8;
      if (local_e8 != 0) {
        do {
          do {
            lVar8 = lVar9;
            lVar9 = 0;
          } while (lVar8 == 0);
          plVar5 = *(longlong **)(lVar8 + 0x70);
          cVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,0xffffffff,0);
          lVar9 = local_e8;
        } while (cVar4 == '\0');
      }
      (**(code **)(*param_1 + 0x540))(param_1);
    }
    plVar5 = (longlong *)(**(code **)(*param_1 + 0xa98))(param_1);
    (**(code **)(*plVar5 + 0x2a8))(plVar5);
    plVar5 = plStack_e0;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_e0)(plStack_e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_128);
  }
  if ((local_38 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_145c68350(param_1);
  return;
}



// FUNCTION 1484b3184 thunk_FUN_1484b2d8e body=7 status=ok
// SIG undefined thunk_FUN_1484b2d8e(void)

void thunk_FUN_1484b2d8e(undefined8 param_1)

{
  FUN_1484b2d8e(param_1,8);
  return;
}



// FUNCTION 1484b31c2 FUN_1484b31c2 body=164 status=ok
// SIG undefined FUN_1484b31c2(void)

void FUN_1484b31c2(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)param_1[0xfb];
  if (plVar3 == (longlong *)0x0) {
    if (((char)param_1[0x13b] == '\x01') && (param_1[0xb5] != 0)) {
      cVar1 = (**(code **)(*param_1 + 0xb98))(param_1);
      if (cVar1 != '\0') {
        if ((char)param_1[0x13b] == '\x01') {
          lVar4 = param_1[0xb5];
        }
        else {
          lVar4 = 0;
        }
        FUN_1484b3266(lVar4);
        plVar3 = (longlong *)(**(code **)(*param_1 + 0xa98))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001484b325f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x2a8))(plVar3);
        return;
      }
    }
  }
  else {
    lVar4 = param_1[0xfc];
    uVar2 = (**(code **)(*param_1 + 0xa88))(param_1);
    (**(code **)(*plVar3 + 8))(plVar3,uVar2,lVar4);
  }
  FUN_145c68350(param_1);
  return;
}



// FUNCTION 1484b3266 FUN_1484b3266 body=166 status=ok
// SIG undefined FUN_1484b3266(void)

void FUN_1484b3266(longlong param_1)

{
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined8 *local_58;
  longlong local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0xc40))();
  FUN_14080c2b4();
  local_30 = &local_50;
  local_58 = &local_28;
  local_28 = 0;
  local_20 = 0;
  local_38 = &LAB_1484bbace;
  local_60 = 0;
  local_50 = param_1;
  local_48 = &local_40;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x450),1);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b330e FUN_1484b330e body=178 status=ok
// SIG undefined FUN_1484b330e(void)

void FUN_1484b330e(longlong param_1,longlong param_2)

{
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined8 *local_68;
  longlong local_60;
  longlong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0xc40))();
  FUN_14080c2b4();
  local_38 = &local_60;
  local_68 = &local_30;
  local_30 = 0;
  local_28 = 0;
  local_40 = &LAB_1484bc23a;
  local_70 = 0;
  local_60 = param_1;
  local_58 = param_2;
  local_50 = &local_48;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_2 + 8),1);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b33c2 FUN_1484b33c2 body=1087 status=ok
// SIG undefined FUN_1484b33c2(void)

longlong *
FUN_1484b33c2(undefined **param_1,longlong *param_2,undefined **param_3,undefined **param_4,
             undefined **param_5)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined ***pppuVar10;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong *plStack_110;
  undefined1 local_108;
  longlong local_f8 [2];
  longlong local_e8 [2];
  longlong local_d8 [4];
  longlong local_b8;
  longlong local_a8 [2];
  longlong local_98 [4];
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  undefined1 *puStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((((param_1[0xfb] == (undefined *)0x0) && (*(char *)(param_1 + 0x13b) == '\x01')) &&
      (param_1[0xb5] != (undefined *)0x0)) && (param_1[0xfa] != (undefined *)0x0)) {
    cVar4 = (**(code **)(*param_1 + 0xb98))(param_1);
    if (cVar4 == '\0') goto LAB_1484b33f3;
    local_f8[0] = 0;
    local_e8[0] = 0;
    local_78 = (code *)0x0;
    local_68 = (undefined ***)FUN_14001cc68(0x28,8);
    *local_68 = &PTR_LAB_14aef04e0;
    local_68[1] = param_1;
    local_68[2] = param_3;
    local_68[3] = param_4;
    local_68[4] = param_5;
    if (local_68 + 1 != (undefined ***)0x0) {
      local_78 = FUN_143b74954;
    }
    FUN_1405d8960(&local_118,local_f8);
    plVar9 = plStack_110;
    lVar2 = local_118;
    local_108 = 1;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
      UNLOCK();
    }
    cVar4 = FUN_144a53f06();
    pcVar3 = local_78;
    plVar8 = DAT_14c8442c0;
    if (cVar4 == '\0') {
      pppuVar10 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar10 = &local_58;
      }
      uVar7 = (*(code *)(*pppuVar10)[1])();
      uVar5 = (*pcVar3)(uVar7);
      *(undefined1 *)(local_118 + 0x80) = uVar5;
      FUN_140b576f0();
    }
    else {
      puVar6 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      puVar6[1] = 0;
      *puVar6 = TAsyncQueuedWork<bool>::vftable;
      puVar6[2] = local_78;
      puVar6[4] = local_68;
      local_68 = (undefined ***)0x0;
      *(undefined4 *)(puVar6 + 8) = local_48;
      *(undefined4 *)((longlong)puVar6 + 0x44) = uStack_44;
      *(undefined4 *)(puVar6 + 9) = uStack_40;
      *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_3c;
      puVar6[6] = local_58;
      puVar6[7] = puStack_50;
      if (local_78 != (code *)0x0) {
        local_78 = (code *)0x0;
      }
      puVar6[10] = local_118;
      puVar6[0xb] = plStack_110;
      local_118 = 0;
      plStack_110 = (longlong *)0x0;
      *(undefined1 *)(puVar6 + 0xc) = local_108;
      (**(code **)(*plVar8 + 0x18))(plVar8,puVar6,3);
    }
    plVar8 = plStack_110;
    *param_2 = lVar2;
    param_2[1] = (longlong)plVar9;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_110 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plStack_110)(plStack_110);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (local_78 != (code *)0x0) {
      pppuVar10 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar10 = &local_58;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    if (local_f8[0] == 0) goto LAB_1484b35b7;
    plVar9 = local_d8;
    plVar8 = local_e8;
  }
  else {
LAB_1484b33f3:
    local_b8 = 0;
    local_a8[0] = 0;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14aeb6a30;
    puStack_50 = &LAB_143b74950;
    local_78 = FUN_146bd3274;
    FUN_1405d8960(&local_118);
    plVar9 = plStack_110;
    lVar2 = local_118;
    local_108 = 1;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
      UNLOCK();
    }
    cVar4 = FUN_144a53f06();
    pcVar3 = local_78;
    plVar8 = DAT_14c8442c0;
    if (cVar4 == '\0') {
      pppuVar10 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar10 = &local_58;
      }
      uVar7 = (*(code *)(*pppuVar10)[1])();
      uVar5 = (*pcVar3)(uVar7);
      *(undefined1 *)(local_118 + 0x80) = uVar5;
      FUN_140b576f0();
    }
    else {
      puVar6 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      puVar6[1] = 0;
      *puVar6 = TAsyncQueuedWork<bool>::vftable;
      puVar6[2] = local_78;
      puVar6[4] = local_68;
      local_68 = (undefined ***)0x0;
      *(undefined4 *)(puVar6 + 8) = local_48;
      *(undefined4 *)((longlong)puVar6 + 0x44) = uStack_44;
      *(undefined4 *)(puVar6 + 9) = uStack_40;
      *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_3c;
      puVar6[6] = local_58;
      puVar6[7] = puStack_50;
      if (local_78 != (code *)0x0) {
        local_78 = (code *)0x0;
      }
      puVar6[10] = local_118;
      puVar6[0xb] = plStack_110;
      local_118 = 0;
      plStack_110 = (longlong *)0x0;
      *(undefined1 *)(puVar6 + 0xc) = local_108;
      (**(code **)(*plVar8 + 0x18))(plVar8,puVar6,3);
    }
    plVar8 = plStack_110;
    *param_2 = lVar2;
    param_2[1] = (longlong)plVar9;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_110 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plStack_110)(plStack_110);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (local_78 != (code *)0x0) {
      pppuVar10 = &local_58;
      if (local_68 != (undefined ***)0x0) {
        pppuVar10 = local_68;
      }
      (*(code *)(*pppuVar10)[2])(pppuVar10);
    }
    if (local_b8 == 0) goto LAB_1484b35b7;
    plVar9 = local_98;
    plVar8 = local_a8;
  }
  if ((longlong *)*plVar8 != (longlong *)0x0) {
    plVar9 = (longlong *)*plVar8;
  }
  (**(code **)(*plVar9 + 0x10))();
LAB_1484b35b7:
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b3802 FUN_1484b3802 body=1205 status=ok
// SIG undefined FUN_1484b3802(void)

undefined8 * FUN_1484b3802(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined ***pppuVar9;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined ***local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined **local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  undefined ***local_58;
  undefined8 uStack_50;
  undefined **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = (**(code **)(*param_1 + 0xa88))();
  if (*(int *)(lVar6 + 0x170) < 1) {
    puVar7 = (undefined8 *)0x0;
    goto LAB_1484b3835;
  }
  puVar7 = (undefined8 *)FUN_14001cc68(0x470,0x10);
  FUN_1484af6ae(puVar7,param_1);
  *puVar7 = &PTR_FUN_14aeef9f0;
  (**(code **)(*param_1 + 0xa10))(param_1,puVar7 + 0x87,*(undefined4 *)(puVar7[0x42] + 8));
  puVar7[0x89] = 0;
  puVar7[0x8a] = 0;
  *(undefined1 *)(puVar7 + 0x8b) = 0;
  puVar7[0x8c] = param_1;
  if (param_1[0xe2] == 0) {
    cVar5 = (**(code **)(*param_1 + 0xad8))(param_1);
    if (cVar5 == '\x02') {
      *(undefined1 *)((longlong)puVar7 + 0x2a5) = 1;
      local_88 = &PTR_LAB_14aef0560;
      pcVar8 = FUN_143b754aa;
      goto LAB_1484b3931;
    }
  }
  else {
    *(undefined1 *)((longlong)puVar7 + 0x2a5) = 1;
    local_88 = &PTR_LAB_14aef0540;
    pcVar8 = FUN_143b75440;
LAB_1484b3931:
    local_a8 = puVar7[0x56];
    uStack_60 = puVar7[0x57];
    local_98 = (undefined ***)puVar7[0x58];
    uStack_50 = puVar7[0x59];
    local_48 = (undefined **)puVar7[0x5a];
    uStack_40 = puVar7[0x5b];
    local_38 = puVar7[0x5c];
    uStack_30 = puVar7[0x5d];
    uVar3 = local_38;
    uVar4 = uStack_30;
    local_58 = local_98;
    uVar2 = uStack_50;
    local_68 = local_a8;
    uVar1 = uStack_60;
    puVar7[0x5c] = CONCAT44(uStack_74,local_78);
    puVar7[0x5d] = CONCAT44(uStack_6c,uStack_70);
    puVar7[0x5a] = local_88;
    puVar7[0x5b] = param_1;
    puVar7[0x58] = 0;
    puVar7[0x59] = CONCAT44(uStack_8c,uStack_90);
    puVar7[0x56] = pcVar8;
    puVar7[0x57] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    local_78 = (undefined4)local_38;
    uStack_74 = local_38._4_4_;
    uStack_70 = (undefined4)uStack_30;
    uStack_6c = uStack_30._4_4_;
    local_88 = local_48;
    uStack_80 = uStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_60 = uVar1;
    uStack_50 = uVar2;
    local_38 = uVar3;
    uStack_30 = uVar4;
    if (local_a8 != 0) {
      pppuVar9 = local_98;
      if (local_98 == (undefined ***)0x0) {
        pppuVar9 = &local_88;
      }
      (*(code *)(*pppuVar9)[2])();
    }
  }
  cVar5 = (**(code **)(*param_1 + 0xc10))(param_1);
  if (cVar5 != '\0') {
    *(undefined1 *)(puVar7 + 0x5e) = 1;
    local_a8 = puVar7[0x60];
    uStack_60 = puVar7[0x61];
    local_98 = (undefined ***)puVar7[0x62];
    uStack_50 = puVar7[99];
    local_48 = (undefined **)puVar7[100];
    uStack_40 = puVar7[0x65];
    local_38 = puVar7[0x66];
    uStack_30 = puVar7[0x67];
    uVar3 = local_38;
    uVar4 = uStack_30;
    local_58 = local_98;
    uVar2 = uStack_50;
    local_68 = local_a8;
    uVar1 = uStack_60;
    puVar7[0x66] = CONCAT44(uStack_74,local_78);
    puVar7[0x67] = CONCAT44(uStack_6c,uStack_70);
    puVar7[100] = &PTR_LAB_14aef0580;
    puVar7[0x65] = param_1;
    puVar7[0x62] = 0;
    puVar7[99] = CONCAT44(uStack_8c,uStack_90);
    puVar7[0x60] = FUN_143b75526;
    puVar7[0x61] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    local_78 = (undefined4)local_38;
    uStack_74 = local_38._4_4_;
    uStack_70 = (undefined4)uStack_30;
    uStack_6c = uStack_30._4_4_;
    local_88 = local_48;
    uStack_80 = uStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_60 = uVar1;
    uStack_50 = uVar2;
    local_38 = uVar3;
    uStack_30 = uVar4;
    if (local_a8 != 0) {
      pppuVar9 = local_98;
      if (local_98 == (undefined ***)0x0) {
        pppuVar9 = &local_88;
      }
      (*(code *)(*pppuVar9)[2])();
    }
  }
  if (param_1[0xf2] != 0) {
    *(undefined1 *)((longlong)puVar7 + 0x342) = 1;
    local_a8 = puVar7[0x6a];
    uStack_60 = puVar7[0x6b];
    local_98 = (undefined ***)puVar7[0x6c];
    uStack_50 = puVar7[0x6d];
    local_48 = (undefined **)puVar7[0x6e];
    uStack_40 = puVar7[0x6f];
    local_38 = puVar7[0x70];
    uStack_30 = puVar7[0x71];
    uVar3 = local_38;
    uVar4 = uStack_30;
    local_58 = local_98;
    uVar2 = uStack_50;
    local_68 = local_a8;
    uVar1 = uStack_60;
    puVar7[0x70] = CONCAT44(uStack_74,local_78);
    puVar7[0x71] = CONCAT44(uStack_6c,uStack_70);
    puVar7[0x6e] = &PTR_LAB_14aef05a0;
    puVar7[0x6f] = param_1;
    puVar7[0x6c] = 0;
    puVar7[0x6d] = CONCAT44(uStack_8c,uStack_90);
    puVar7[0x6a] = FUN_143b755aa;
    puVar7[0x6b] = CONCAT44(uStack_9c,uStack_a0);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    local_78 = (undefined4)local_38;
    uStack_74 = local_38._4_4_;
    uStack_70 = (undefined4)uStack_30;
    uStack_6c = uStack_30._4_4_;
    local_88 = local_48;
    uStack_80 = uStack_40;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_60 = uVar1;
    uStack_50 = uVar2;
    local_38 = uVar3;
    uStack_30 = uVar4;
    if (local_a8 != 0) {
      pppuVar9 = local_98;
      if (local_98 == (undefined ***)0x0) {
        pppuVar9 = &local_88;
      }
      (*(code *)(*pppuVar9)[2])();
    }
  }
  if (param_1[0xfa] == 0) {
    FUN_1484b3eaa(puVar7);
  }
  else {
    FUN_1484b3cb8(puVar7,param_1 + 0xfa);
  }
  if (*(char *)((longlong)param_1 + 0x6a3) != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
    lVar6 = param_1[0x10d];
    if (lVar6 != 0) {
      local_b0 = param_1[0x10e];
      if (local_b0 != 0) {
        LOCK();
        *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
        UNLOCK();
      }
      local_b8 = lVar6;
      FUN_1484b0dee(puVar7,&local_b8,1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x108));
  }
  *(byte *)((longlong)puVar7 + 0x76) =
       *(byte *)((longlong)puVar7 + 0x76) & 0xdf | *(char *)((longlong)param_1 + 0x9d9) << 5;
LAB_1484b3835:
  *(undefined1 *)(param_1 + 0x13b) = 1;
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b3cb8 FUN_1484b3cb8 body=496 status=ok
// SIG undefined FUN_1484b3cb8(void)

void FUN_1484b3cb8(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_138 [40];
  undefined4 local_110;
  undefined8 *local_108;
  longlong *local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined1 *local_a8;
  longlong **local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88 [2];
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar1 = *(int *)(*param_2 + 8);
  FUN_1484bc426((longlong *)(param_1 + 0x448),iVar1);
  if (0 < (longlong)iVar1) {
    lVar3 = 0;
    do {
      uVar2 = FUN_1484afb06(param_1);
      *(undefined8 *)(*(longlong *)(param_1 + 0x448) + lVar3 * 8) = uVar2;
      *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x448) + lVar3 * 8) + 0x360) =
           *(undefined8 *)(*(longlong *)(*(longlong *)*param_2 + lVar3 * 8) + 0x10);
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x448) + lVar3 * 8) + 0x360) == 0) {
        uVar2 = FUN_1447277f0(0);
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x448) + lVar3 * 8) + 0x360) = uVar2;
      }
      lVar3 = lVar3 + 1;
    } while (iVar1 != lVar3);
  }
  *(undefined1 *)(param_1 + 0x458) = 0;
  local_b0 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0xc40))();
  lVar3 = *(longlong *)(local_b0 + 0x208);
  if (*(int *)(lVar3 + 0x28) < 1) {
    local_b8 = 0;
  }
  else {
    local_b8 = **(undefined8 **)(lVar3 + 0x20);
  }
  if (*(int *)(lVar3 + 0x38) < 1) {
    local_c0 = 0;
  }
  else {
    local_c0 = **(undefined8 **)(lVar3 + 0x30);
  }
  local_c8 = *(undefined8 *)(lVar3 + 0x40);
  FUN_1484b94c2(param_1,local_88,0);
  local_a0 = &local_100;
  local_f0 = &local_b0;
  local_e8 = &local_b8;
  local_108 = &local_98;
  local_98 = 0;
  local_90 = 0;
  local_a8 = &LAB_1484bc5c0;
  local_110 = 0;
  local_100 = param_2;
  local_f8 = param_1;
  local_e0 = &local_c0;
  local_d8 = &local_c8;
  local_d0 = local_88;
  FUN_1401f8d10(L"ParallelFor Task",iVar1,1);
  if (local_88[0] != 0) {
    if (local_78 == (longlong *)0x0) {
      local_78 = local_68;
    }
    (**(code **)(*local_78 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484b3eaa FUN_1484b3eaa body=315 status=ok
// SIG undefined FUN_1484b3eaa(void)

void FUN_1484b3eaa(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  plVar1 = (longlong *)(param_1 + 0x448);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x298) + 0x7b0))();
  if (uVar2 == 0) {
    FUN_1484bc426(plVar1,1);
    uVar3 = FUN_1484afb06(param_1);
    **(undefined8 **)(param_1 + 0x448) = uVar3;
    uVar3 = FUN_1447277f0(0);
    *(undefined8 *)(**(longlong **)(param_1 + 0x448) + 0x360) = uVar3;
  }
  else {
    FUN_1484bc426(plVar1,(ulonglong)uVar2);
    if (0 < (int)uVar2) {
      uVar5 = 0;
      do {
        uVar3 = FUN_1484afb06(param_1);
        *(undefined8 *)(*(longlong *)(param_1 + 0x448) + uVar5 * 8) = uVar3;
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x298) + 0x610))
                          (*(longlong **)(param_1 + 0x298),uVar5 & 0xffffffff);
        if (lVar4 == 0) {
          lVar4 = FUN_1447277f0(0);
        }
        *(longlong *)(*(longlong *)(*plVar1 + uVar5 * 8) + 0x360) = lVar4;
        uVar5 = uVar5 + 1;
      } while (uVar2 != uVar5);
    }
  }
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x460) + 0xc40))();
  if (((*(longlong *)(lVar4 + 0x208) == 0) || ((int)uVar2 < 2)) ||
     (*(longlong *)(*(longlong *)(lVar4 + 0x208) + 0x48) == 0)) {
    *(undefined1 *)(param_1 + 0x458) = 1;
    FUN_143b738c6(param_1,**(undefined8 **)(param_1 + 0x448));
  }
  else {
    *(undefined1 *)(param_1 + 0x458) = 0;
    FUN_143b72eae(param_1,plVar1);
  }
  FUN_1484b03f6(param_1);
  return;
}



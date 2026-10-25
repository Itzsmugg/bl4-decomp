// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145cc67c8 FUN_145cc67c8 body=104 status=ok
// SIG undefined FUN_145cc67c8(void)

undefined8 FUN_145cc67c8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_145cc6832(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc6832 FUN_145cc6832 body=22 status=ok
// SIG undefined FUN_145cc6832(void)

undefined8 FUN_145cc6832(int *param_1)

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
  
  plVar4 = DAT_14cbc69b0;
  if (DAT_14cbc69b0 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cbc69b0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbc69b0 + 0x154) & 1) == 0) ||
       ((int)DAT_14cbc69b0[0x3a] <= *(int *)((longlong)DAT_14cbc69b0 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cbc69b0 + 0x300))(DAT_14cbc69b0);
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



// FUNCTION 145cc6848 FUN_145cc6848 body=40 status=ok
// SIG undefined FUN_145cc6848(void)

undefined8 FUN_145cc6848(undefined8 param_1,int param_2)

{
  FUN_145cc6870();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc6870 FUN_145cc6870 body=87 status=ok
// SIG undefined FUN_145cc6870(void)

void FUN_145cc6870(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b656370;
  param_1[6] = &PTR_FUN_14b656660;
  plVar3 = (longlong *)param_1[0x1c];
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
  FUN_1408ee338(param_1);
  return;
}



// FUNCTION 145cc68c8 FUN_145cc68c8 body=104 status=ok
// SIG undefined FUN_145cc68c8(void)

undefined8 FUN_145cc68c8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_145cc6932(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc6932 FUN_145cc6932 body=22 status=ok
// SIG undefined FUN_145cc6932(void)

undefined8 FUN_145cc6932(int *param_1)

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
  
  plVar4 = DAT_14cbcbd70;
  if (DAT_14cbcbd70 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cbcbd70 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbcbd70 + 0x154) & 1) == 0) ||
       ((int)DAT_14cbcbd70[0x3a] <= *(int *)((longlong)DAT_14cbcbd70 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cbcbd70 + 0x300))(DAT_14cbcbd70);
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



// FUNCTION 145cc694e FUN_145cc694e body=122 status=ok
// SIG undefined FUN_145cc694e(void)

void FUN_145cc694e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406046aa(puVar1);
  *puVar1 = &PTR_FUN_14b6c2c10;
  puVar1[5] = &PTR_FUN_14b6c2f10;
  puVar1[6] = &PTR_FUN_14b6c2f40;
  puVar1[0x1a] = 0;
  *(undefined2 *)(puVar1 + 0x1b) = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xb9) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xc1) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xdc) = 0x40a00000;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  return;
}



// FUNCTION 145cc69c8 FUN_145cc69c8 body=104 status=ok
// SIG undefined FUN_145cc69c8(void)

undefined8 FUN_145cc69c8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_145cc6a32(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc6a32 FUN_145cc6a32 body=22 status=ok
// SIG undefined FUN_145cc6a32(void)

undefined8 FUN_145cc6a32(int *param_1)

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
  
  plVar4 = DAT_14cbc8ea0;
  if (DAT_14cbc8ea0 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cbc8ea0 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbc8ea0 + 0x154) & 1) == 0) ||
       ((int)DAT_14cbc8ea0[0x3a] <= *(int *)((longlong)DAT_14cbc8ea0 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cbc8ea0 + 0x300))(DAT_14cbc8ea0);
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



// FUNCTION 145cc6a48 FUN_145cc6a48 body=40 status=ok
// SIG undefined FUN_145cc6a48(void)

undefined8 FUN_145cc6a48(undefined8 param_1,int param_2)

{
  FUN_145cc6a70();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc6a70 FUN_145cc6a70 body=87 status=ok
// SIG undefined FUN_145cc6a70(void)

void FUN_145cc6a70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7aca30;
  if (param_1[0x81] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x76) == '\x01') {
    *(undefined1 *)(param_1 + 0x76) = 0;
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145cc6ac8 FUN_145cc6ac8 body=104 status=ok
// SIG undefined FUN_145cc6ac8(void)

undefined8 FUN_145cc6ac8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_145cc6b32(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc6b32 FUN_145cc6b32 body=22 status=ok
// SIG undefined FUN_145cc6b32(void)

ulonglong FUN_145cc6b32(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  plVar3 = DAT_14cbe4798;
  if (DAT_14cbe4798 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14cbe4798 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbe4798 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14cbe4798 + 0x1fc) < (int)DAT_14cbe4798[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar6 = (int)plVar3[0x59];
    uVar14 = *param_1;
    if ((longlong)iVar6 == -1) {
      if (((uVar14 != 0) && (param_1[1] != 0)) && (uVar14 != DAT_14c948000)) {
        puVar7 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar14 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar14 == 0) || (uVar5 = param_1[1], uVar5 == 0)) || (uVar14 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < (int)uVar5) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (uVar5 == 1 && 0 < iVar6) {
        puVar8 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)plVar3 + 0x2cc) == 1) {
          puVar8 = puVar10;
        }
        uVar14 = *puVar8;
        puVar7 = (ulonglong *)(puVar8 + 1);
      }
      else {
        if ((int)uVar5 <= iVar6) goto LAB_1448160f1;
        puVar7 = (ulonglong *)(puVar10 + (longlong)iVar6 * 3 + 1);
        uVar14 = puVar10[(longlong)iVar6 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar7;
    uVar15 = uVar2 >> 0x20;
    uVar5 = uVar14;
    if (uVar15 != 0) {
      uVar5 = FUN_144a78877(uVar14,uVar15);
    }
    if ((int)plVar3[0x50] != *(int *)((longlong)plVar3 + 0x2ac)) {
      plVar11 = plVar3 + 0x56;
      if ((longlong *)plVar3[0x57] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x57];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x58] - 1U & uVar5) * 4);
      if (iVar6 != -1) {
        plVar11 = plVar3 + 0x4f;
        lVar9 = *plVar11;
        uVar15 = 0;
LAB_144815ffc:
        lVar18 = (longlong)iVar6 * 0x20;
        if ((*(uint *)(lVar9 + lVar18) != uVar14) ||
           (lVar1 = lVar9 + lVar18, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar15 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar9 = *(longlong *)(lVar1 + 0x10);
          if (lVar9 != 0) {
            lVar18 = *(longlong *)(lVar9 + 0x60);
            if (lVar18 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar18 + 0x18,(int)plVar3[0x59],
                              *(undefined4 *)((longlong)plVar3 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar6 = FUN_144b0847a(plVar11);
                if (iVar6 == -1) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = (longlong)iVar6 * 0x20 + *plVar11;
                }
                plVar12 = (longlong *)(lVar9 + 0x10);
                if (lVar9 == 0) {
                  plVar12 = (longlong *)0x0;
                }
                lVar9 = *plVar12;
                lVar18 = *(longlong *)(lVar9 + 0x60);
              } while (lVar18 != 0);
            }
            uVar15 = *(ulonglong *)(lVar9 + 0x30);
            uStack_40 = uVar15;
            if (uVar15 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(plVar3,&uStack_40,lVar9);
            uVar15 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar9 + 0x30) = uStack_40;
              if (lVar9 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar9);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar4 = (**(code **)(*DAT_14cbe4798 + 0x300))(DAT_14cbe4798);
    if (cVar4 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar10 = (uint *)&DAT_14c948618;
    if (((*param_1 != 0) && (0 < (int)param_1[1])) && (*param_1 != DAT_14c948000)) {
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < param_1[1]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
    }
    uVar14 = *puVar10;
    uVar5 = puVar10[2];
    uVar13 = uVar14;
    if (uVar5 != 0) {
      uVar13 = uVar5 >> 0xd ^ uVar14 - uVar5;
      uVar16 = uVar13 << 8 ^ (-0x61c88647 - uVar5) - uVar13;
      uVar17 = uVar16 >> 0xd ^ (uVar5 - uVar13) - uVar16;
      uVar13 = uVar17 >> 0xc ^ (uVar13 - uVar16) - uVar17;
      uVar19 = uVar13 << 0x10 ^ (uVar16 - uVar17) - uVar13;
      uVar16 = uVar19 >> 5 ^ (uVar17 - uVar13) - uVar19;
      uVar17 = uVar16 >> 3 ^ (uVar13 - uVar19) - uVar16;
      uVar13 = uVar17 << 10 ^ (uVar19 - uVar16) - uVar17;
      uVar13 = uVar13 >> 0xf ^ uVar16 - (uVar17 + uVar13);
    }
    if ((int)plVar3[0x3a] != *(int *)((longlong)plVar3 + 0x1fc)) {
      plVar11 = plVar3 + 0x40;
      if ((longlong *)plVar3[0x41] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x41];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x42] - 1U & uVar13) * 4);
      if (iVar6 != -1) {
        lVar9 = plVar3[0x39];
        uVar15 = 0;
        do {
          lVar18 = (longlong)iVar6 * 0x20;
          if ((*(uint *)(lVar9 + lVar18) == uVar14) &&
             (lVar1 = lVar9 + lVar18, *(uint *)(lVar1 + 8) == uVar5)) {
            uVar15 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar15 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
        } while (iVar6 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar15 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
  if (iVar6 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 145cc6b48 FUN_145cc6b48 body=343 status=ok
// SIG undefined FUN_145cc6b48(void)

void FUN_145cc6b48(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [36];
  int local_34;
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
  iVar2 = local_2c;
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145cc6ca0(param_1,iVar2 != 0,iVar1 != 0,local_34 != 0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc6ca0 FUN_145cc6ca0 body=417 status=ok
// SIG undefined FUN_145cc6ca0(void)

void FUN_145cc6ca0(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') goto LAB_145cc6dbb;
  lVar5 = FUN_1400d7050(param_1 + 0x30);
  if (lVar5 != 0) {
    lVar6 = FUN_144a5dd5e();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      FUN_140c125e6(lVar5 + 0xd98,&DAT_14cbd95d8);
    }
  }
  FUN_1449027d0(param_1,&local_38);
  pcVar3 = *(char **)(local_38 + 0x100);
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x58));
  *(int *)(pcVar3 + 0x50) = *(int *)(pcVar3 + 0x50) + 1;
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
  if (pcVar3[0x10] == '\0') {
    if (*(int *)(pcVar3 + 0x14) == 0) {
      iVar4 = 1;
      goto LAB_145cc6d5a;
    }
  }
  else {
    iVar4 = *(int *)(pcVar3 + 0x14) + 1;
LAB_145cc6d5a:
    pcVar3[0x10] = '\0';
    *(int *)(pcVar3 + 0x14) = iVar4;
  }
  if (pcVar3[0x18] == '\0') {
    if (*(int *)(pcVar3 + 0x1c) == 0) {
      iVar4 = 1;
      goto LAB_145cc6d74;
    }
  }
  else {
    iVar4 = *(int *)(pcVar3 + 0x1c) + 1;
LAB_145cc6d74:
    pcVar3[0x18] = '\0';
    *(int *)(pcVar3 + 0x1c) = iVar4;
  }
  if (pcVar3[0x20] == '\0') {
    if (*(int *)(pcVar3 + 0x24) == 0) {
      iVar4 = 1;
      goto LAB_145cc6e34;
    }
  }
  else {
    iVar4 = *(int *)(pcVar3 + 0x24) + 1;
LAB_145cc6e34:
    pcVar3[0x20] = '\0';
    *(int *)(pcVar3 + 0x24) = iVar4;
  }
  if (pcVar3[8] == *pcVar3) {
    if (*(int *)(pcVar3 + 4) == 0) {
      iVar4 = 1;
      goto LAB_145cc6da3;
    }
  }
  else {
    iVar4 = *(int *)(pcVar3 + 4) + 1;
LAB_145cc6da3:
    *pcVar3 = pcVar3[8];
    *(int *)(pcVar3 + 4) = iVar4;
  }
  *(undefined8 *)(param_1 + 0x54) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x58));
LAB_145cc6dbb:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc6e42 FUN_145cc6e42 body=104 status=ok
// SIG undefined FUN_145cc6e42(void)

undefined8 FUN_145cc6e42(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_145cc6eac(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc6eac FUN_145cc6eac body=22 status=ok
// SIG undefined FUN_145cc6eac(void)

undefined8 FUN_145cc6eac(int *param_1)

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
  
  plVar4 = DAT_14cbe5478;
  if (DAT_14cbe5478 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cbe5478 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbe5478 + 0x154) & 1) == 0) ||
       ((int)DAT_14cbe5478[0x3a] <= *(int *)((longlong)DAT_14cbe5478 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cbe5478 + 0x300))(DAT_14cbe5478);
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



// FUNCTION 145cc6ec2 FUN_145cc6ec2 body=40 status=ok
// SIG undefined FUN_145cc6ec2(void)

undefined8 FUN_145cc6ec2(undefined8 param_1,int param_2)

{
  FUN_145cc6eea();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc6eea FUN_145cc6eea body=87 status=ok
// SIG undefined FUN_145cc6eea(void)

void FUN_145cc6eea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba21890;
  FUN_1447a1747(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145cc6f42 FUN_145cc6f42 body=40 status=ok
// SIG undefined FUN_145cc6f42(void)

undefined8 FUN_145cc6f42(undefined8 param_1,int param_2)

{
  FUN_145cc6f6a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc6f6a FUN_145cc6f6a body=87 status=ok
// SIG undefined FUN_145cc6f6a(void)

void FUN_145cc6f6a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba225a0;
  FUN_1447a1747(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145cc6fc2 FUN_145cc6fc2 body=40 status=ok
// SIG undefined FUN_145cc6fc2(void)

undefined8 FUN_145cc6fc2(undefined8 param_1,int param_2)

{
  FUN_145cc6fea();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc6fea FUN_145cc6fea body=87 status=ok
// SIG undefined FUN_145cc6fea(void)

void FUN_145cc6fea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba37f90;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cc7042 FUN_145cc7042 body=40 status=ok
// SIG undefined FUN_145cc7042(void)

undefined8 FUN_145cc7042(undefined8 param_1,int param_2)

{
  FUN_145cc706a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc706a FUN_145cc706a body=87 status=ok
// SIG undefined FUN_145cc706a(void)

void FUN_145cc706a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bad80c0;
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  FUN_1412dab16(param_1[0x73],*(undefined4 *)(param_1 + 0x74));
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_1458b7580(param_1);
  return;
}



// FUNCTION 145cc70c2 FUN_145cc70c2 body=40 status=ok
// SIG undefined FUN_145cc70c2(void)

undefined8 FUN_145cc70c2(undefined8 param_1,int param_2)

{
  FUN_145cc70ea();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc70ea FUN_145cc70ea body=78 status=ok
// SIG undefined FUN_145cc70ea(void)

void FUN_145cc70ea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcb4670;
  FUN_145cc716e(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145cc7138(param_1 + 7);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cc7138 FUN_145cc7138 body=53 status=ok
// SIG undefined FUN_145cc7138(void)

void FUN_145cc7138(longlong *param_1)

{
  FUN_145cc71e4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cc716e FUN_145cc716e body=77 status=ok
// SIG undefined FUN_145cc716e(void)

void FUN_145cc716e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_145cc71bb(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cc71bb FUN_145cc71bb body=40 status=ok
// SIG undefined FUN_145cc71bb(void)

void FUN_145cc71bb(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1493e06a0(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 145cc71e4 FUN_145cc71e4 body=346 status=ok
// SIG undefined FUN_145cc71e4(void)

void FUN_145cc71e4(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_1493e0718(*local_68 + (longlong)iStack_4c * 0xb0 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1467f17ac(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cc7340 FUN_145cc7340 body=40 status=ok
// SIG undefined FUN_145cc7340(void)

undefined8 FUN_145cc7340(undefined8 param_1,int param_2)

{
  FUN_145cc7368();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc7368 FUN_145cc7368 body=87 status=ok
// SIG undefined FUN_145cc7368(void)

void FUN_145cc7368(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcc72f0;
  FUN_1447a1747(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1410aba6a(param_1);
  return;
}



// FUNCTION 145cc73c0 FUN_145cc73c0 body=127 status=ok
// SIG undefined FUN_145cc73c0(void)

int FUN_145cc73c0(byte *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if (*param_1 < 4) {
    iVar4 = 4;
  }
  else {
    iVar4 = 0;
    if ((*param_1 == 4) && (iVar1 = *(int *)(param_1 + 0x18), iVar4 = 0, (longlong)iVar1 != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      lVar5 = 0;
      iVar4 = 0;
      do {
        iVar3 = FUN_145cc73c0(*(undefined8 *)(lVar2 + 8 + lVar5));
        iVar4 = iVar4 + iVar3;
        lVar5 = lVar5 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar5);
    }
  }
  if (param_1[1] == 2) {
    iVar4 = iVar4 * (uint)param_1[3] * (uint)param_1[2];
  }
  else if (param_1[1] == 1) {
    iVar4 = iVar4 * (uint)param_1[2];
  }
  return iVar4;
}



// FUNCTION 145cc7440 FUN_145cc7440 body=80 status=ok
// SIG undefined FUN_145cc7440(void)

undefined8 * FUN_145cc7440(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd20940;
  param_1[7] = &PTR_LAB_14bd20bf0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_145cc7490(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc7490 FUN_145cc7490 body=47 status=ok
// SIG undefined FUN_145cc7490(void)

void FUN_145cc7490(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcd7340;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cc74c0 FUN_145cc74c0 body=40 status=ok
// SIG undefined FUN_145cc74c0(void)

undefined8 FUN_145cc74c0(undefined8 param_1,int param_2)

{
  FUN_145cc74e8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc74e8 FUN_145cc74e8 body=87 status=ok
// SIG undefined FUN_145cc74e8(void)

void FUN_145cc74e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd5c5f0;
  FUN_1447a1747(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145cc7540 FUN_145cc7540 body=40 status=ok
// SIG undefined FUN_145cc7540(void)

undefined8 FUN_145cc7540(undefined8 param_1,int param_2)

{
  FUN_145cc7568();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc7568 FUN_145cc7568 body=87 status=ok
// SIG undefined FUN_145cc7568(void)

void FUN_145cc7568(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd983c0;
  FUN_1447a1747(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145cc75c0 FUN_145cc75c0 body=40 status=ok
// SIG undefined FUN_145cc75c0(void)

undefined8 FUN_145cc75c0(undefined8 param_1,int param_2)

{
  FUN_145cc75e8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc75e8 FUN_145cc75e8 body=87 status=ok
// SIG undefined FUN_145cc75e8(void)

void FUN_145cc75e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd9d890;
  FUN_1447a1747(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145cc7644 FUN_145cc7644 body=122 status=ok
// SIG undefined FUN_145cc7644(void)

void FUN_145cc7644(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14be7aea0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  puVar1[0x14] = 0;
  *(undefined4 *)(puVar1 + 0x15) = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xb4) = 0;
  puVar1[0x18] = 0;
  *(undefined4 *)(puVar1 + 0x19) = 0;
  return;
}



// FUNCTION 145cc76be FUN_145cc76be body=630 status=ok
// SIG undefined FUN_145cc76be(void)

void FUN_145cc76be(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar7 = (longlong *)(param_1 + 0x788);
  if (*(int *)(param_1 + 0x790) != *(int *)(param_1 + 0x7bc)) {
    lVar6 = param_1 + 0x7c0;
    if (*(longlong *)(param_1 + 0x7c8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x7c8);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 2000) - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        lVar6 = *plVar7 + (longlong)iVar8 * 0x60;
        if (*(uint *)(*plVar7 + (longlong)iVar8 * 0x60) == param_2) {
          if ((lVar6 != 0) && (plVar11 = (longlong *)(lVar6 + 8), plVar11 != (longlong *)0x0)) {
            lVar1 = lVar6 + 0x18;
            local_68 = 0x100000000;
            local_58 = 0xffffffff;
            uStack_50 = 0;
            local_98 = plVar7;
            uStack_60 = lVar1;
            if (*(int *)(lVar6 + 0x30) == 0) {
              iVar8 = 0;
            }
            else {
              FUN_1449c0562(&local_68);
              iVar8 = *(int *)(lVar6 + 0x30);
            }
            uStack_70 = CONCAT44(uStack_4c,uStack_50);
            local_78 = local_58;
            uVar3 = local_78;
            local_88 = (undefined4)local_68;
            uStack_84 = local_68._4_4_;
            uStack_80 = (undefined4)uStack_60;
            uStack_7c = uStack_60._4_4_;
            local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
            iVar5 = local_78._4_4_;
            local_90 = plVar11;
            if ((local_78._4_4_ != iVar8) || (local_78 = uVar3, uStack_60 != lVar1)) {
              do {
                local_78 = uVar3;
                lVar6 = *(longlong *)(param_1 + 0x38);
                if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x40) != 0)) {
                  lVar2 = *(longlong *)(*local_90 + (longlong)iVar5 * 0x18);
                  uVar3 = *(undefined8 *)(*local_90 + 8 + (longlong)iVar5 * 0x18);
                  lVar10 = 0;
                  do {
                    lVar4 = *(longlong *)(*(longlong *)(lVar6 + 0x38) + lVar10);
                    if ((lVar4 != 0) && (*(uint *)(lVar4 + 0xe0) == param_2)) {
                      if (*(longlong *)(lVar6 + 0x30) == 0) {
                        uVar9 = 0;
                      }
                      else {
                        uVar9 = *(undefined8 *)(*(longlong *)(lVar6 + 0x30) + 0x360);
                      }
                      plVar7 = (longlong *)FUN_140334a94(lVar4,uVar9);
                      if (plVar7 != (longlong *)0x0) {
                        lVar6 = FUN_144a5dd5e();
                        if (((*(int *)(lVar6 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
                            (*(longlong *)
                              (*(longlong *)(plVar7[2] + 0x30) +
                              (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
                           (plVar7 = (longlong *)(**(code **)(*plVar7 + 0x14d0))(plVar7),
                           plVar7 != (longlong *)0x0)) {
                          (**(code **)(*plVar7 + 0x30))(plVar7,lVar2 + 0x90,uVar3);
                        }
                      }
                      break;
                    }
                    lVar10 = lVar10 + 8;
                  } while ((longlong)*(int *)(lVar6 + 0x40) * 8 != lVar10);
                }
                local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
                FUN_1449c0562(&local_88);
                iVar5 = local_78._4_4_;
                uVar3 = local_78;
              } while (local_90 != plVar11 ||
                       (CONCAT44(uStack_7c,uStack_80) != lVar1 || local_78._4_4_ != iVar8));
            }
            FUN_145cc7936(plVar11,0);
            plVar7 = local_98;
          }
          break;
        }
        iVar8 = *(int *)(lVar6 + 0x58);
      } while (iVar8 != -1);
    }
  }
  FUN_145cc79a2(plVar7,param_2);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cc7936 FUN_145cc7936 body=107 status=ok
// SIG undefined FUN_145cc7936(void)

void FUN_145cc7936(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (*(int *)(param_1 + 0x48) <= iVar3) {
LAB_145cc7988:
      FUN_145cc7b26(param_1);
      FUN_145852fdc(param_1,param_2);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) == iVar3) goto LAB_145cc7988;
  FUN_145852fdc(param_1,param_2);
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1412fa1e0(param_1);
  return;
}



// FUNCTION 145cc79a2 FUN_145cc79a2 body=85 status=ok
// SIG undefined FUN_145cc79a2(void)

void FUN_145cc79a2(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == param_2) {
          FUN_145cc79f8(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 145cc79f8 FUN_145cc79f8 body=94 status=ok
// SIG undefined FUN_145cc79f8(void)

void FUN_145cc79f8(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x60 + 0x58);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_145cc7a56();
  return;
}



// FUNCTION 145cc7a56 FUN_145cc7a56 body=84 status=ok
// SIG undefined FUN_145cc7a56(void)

void FUN_145cc7a56(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_145852fa4(lVar1 + lVar2 + 8);
  FUN_145cc7aaa(param_1,param_2);
  return;
}



// FUNCTION 145cc7aaa FUN_145cc7aaa body=124 status=ok
// SIG undefined FUN_145cc7aaa(void)

void FUN_145cc7aaa(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 145cc7b26 FUN_145cc7b26 body=335 status=ok
// SIG undefined FUN_145cc7b26(void)

void FUN_145cc7b26(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cc7c76 FUN_145cc7c76 body=264 status=ok
// SIG undefined FUN_145cc7c76(void)

void FUN_145cc7c76(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_145cc7ce8:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x28);
      if ((int)plVar3[1] == iVar1) {
        if (1 < iVar1) {
          lVar8 = 0;
          do {
            uVar5 = *(ushort *)(*plVar3 + lVar8);
            uVar6 = (ulonglong)uVar5;
            uVar7 = *(ushort *)(*param_2 + lVar8);
            if (uVar5 == uVar7) {
              if (uVar5 == 0) break;
            }
            else {
              if (0x7f < (uVar7 | uVar5)) goto LAB_145cc7d41;
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
              uVar9 = (ulonglong)uVar7;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar9]) goto LAB_145cc7d41;
            }
            lVar8 = lVar8 + 2;
          } while( true );
        }
        goto LAB_145cc7d47;
      }
      if ((int)plVar3[1] + iVar1 == 1) goto LAB_145cc7d47;
      goto LAB_145cc7d64;
    }
  }
  return;
LAB_145cc7d41:
  if (uVar5 == uVar7) {
LAB_145cc7d47:
    FUN_145cc7d7e(param_1);
    return;
  }
LAB_145cc7d64:
  iVar2 = (int)plVar3[4];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_145cc7ce8;
}



// FUNCTION 145cc7d7e FUN_145cc7d7e body=116 status=ok
// SIG undefined FUN_145cc7d7e(void)

void FUN_145cc7d7e(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x28;
  lVar5 = (longlong)*(int *)(lVar1 + 0x24);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x28 + 0x20);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x20);
  FUN_145cc7df2((longlong)param_2 * 0x28 + *param_1);
  FUN_145cc7e3e(param_1,param_2);
  return;
}



// FUNCTION 145cc7df2 FUN_145cc7df2 body=76 status=ok
// SIG undefined FUN_145cc7df2(void)

void FUN_145cc7df2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[3];
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145cc7e3e FUN_145cc7e3e body=116 status=ok
// SIG undefined FUN_145cc7e3e(void)

void FUN_145cc7e3e(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 145cc7ebe FUN_145cc7ebe body=494 status=ok
// SIG undefined FUN_145cc7ebe(void)

undefined8 * FUN_145cc7ebe(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14584e116();
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 7) = 0x7f;
  *param_1 = &PTR_FUN_14ac23530;
  param_1[5] = &PTR_FUN_14ac23850;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_145cc8164(param_1 + 0x12);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 8;
  *(undefined4 *)(param_1 + 0x20) = DAT_14cb1eff8;
  lVar1 = FUN_1413f6fa8();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(lVar2 + 0xc0);
  lVar1 = FUN_1413f6fa8();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  *(uint *)(param_1 + 0x17) =
       *(uint *)(param_1 + 0x17) & 0xfffffeff | (uint)*(byte *)(lVar2 + 0xcc) << 8;
  lVar1 = FUN_1413f6fa8();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  *(uint *)(param_1 + 0x17) =
       (*(uint *)(param_1 + 0x17) & 0xfffffff3) + (uint)*(byte *)(lVar2 + 0xcd) * 8 + 4;
  local_38 = FUN_1459eb1ae();
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_38);
  }
  FUN_145cc80ae(param_1,&local_38);
  local_40 = FUN_1459eb1ae();
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_40);
  }
  FUN_145cc80d2(param_1,&local_40);
  *(undefined1 *)(param_1 + 0x23) = 5;
  *(byte *)((longlong)param_1 + 0x119) = *(byte *)((longlong)param_1 + 0x119) & 0xfe;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc80ae FUN_145cc80ae body=35 status=ok
// SIG undefined FUN_145cc80ae(void)

void FUN_145cc80ae(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_145cc80f6(param_2);
  *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x40) | (ushort)(1 << (bVar1 & 0x1f));
  return;
}



// FUNCTION 145cc80d2 FUN_145cc80d2 body=35 status=ok
// SIG undefined FUN_145cc80d2(void)

void FUN_145cc80d2(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_145cc80f6(param_2);
  *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) | (ushort)(1 << (bVar1 & 0x1f));
  return;
}



// FUNCTION 145cc80f6 FUN_145cc80f6 body=110 status=ok
// SIG undefined FUN_145cc80f6(void)

int FUN_145cc80f6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = FUN_14588585a();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      lVar3 = *param_1;
      goto LAB_145cc812f;
    }
  }
  lVar3 = 0;
LAB_145cc812f:
  lVar2 = *(longlong *)(lVar3 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar3);
    lVar2 = *(longlong *)(lVar3 + 0x110);
  }
  iVar1 = *(int *)(lVar2 + 0x28);
  if (((*(byte *)(lVar2 + 0x30) & 1) == 0) && (iVar1 == -1)) {
    iVar1 = CONCAT31(0xffffff,*(undefined1 *)(lVar2 + 0x2c));
  }
  return iVar1;
}



// FUNCTION 145cc8164 FUN_145cc8164 body=77 status=ok
// SIG undefined FUN_145cc8164(void)

void FUN_145cc8164(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = DAT_14cb1e7b8;
  param_1[1] = DAT_14cb1e7b0;
  param_1[2] = uVar1;
  param_1[3] = DAT_14cb1e7c0;
  param_1[4] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff800 | 0x35c;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x7f7fffffbf800000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  return;
}



// FUNCTION 145cc81bc FUN_145cc81bc body=546 status=ok
// SIG undefined FUN_145cc81bc(void)

undefined8 * FUN_145cc81bc(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14b7586b0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x41a00000;
  *(undefined4 *)(param_1 + 9) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x40000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_1446ddc76(param_1 + 0x19,"FX_CenterMass",1);
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0x4348000044480000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f4ccccd;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3ff00000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x3ff00000;
  param_1[0x28] = 0x3ff0000000000000;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x4120000042480000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x4075e00000000000;
  param_1[0x30] = 0x406f400000000000;
  param_1[0x31] = 0x406f400000000000;
  param_1[0x32] = 0x4000000041480000;
  FUN_141526730(param_1 + 0x33);
  param_1[0x5d] = 0;
  param_1[0x5e] = 0x200000000;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0xf00000d0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
  FUN_141526700(param_1 + 0x69);
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0x4fc71eb4;
  param_1[0x74] = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  return param_1;
}



// FUNCTION 145cc83de FUN_145cc83de body=269 status=ok
// SIG undefined FUN_145cc83de(void)

void FUN_145cc83de(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1 = param_1 + -0x30;
  lVar3 = FUN_1400d7050();
  if (lVar3 != 0) {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      FUN_140457ffc(lVar3 + 0x2320,param_1);
      if (*(longlong *)(lVar3 + 0x2210) != 0) {
        FUN_140457ffc(*(longlong *)(lVar3 + 0x2210) + 0x18,param_1);
      }
      FUN_1407934de(&local_30,lVar3);
      if (local_30 != 0) {
        FUN_140457ffc(local_30 + 0x18,param_1);
        FUN_140457ffc(local_30 + 0x30,param_1);
        FUN_140457ffc(local_30 + 0x48,param_1);
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)local_28 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_28 + 0x10))(local_28);
          }
        }
      }
    }
  }
  FUN_145cc84ec(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc84ec FUN_145cc84ec body=256 status=ok
// SIG undefined FUN_145cc84ec(void)

void FUN_145cc84ec(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145cc85ee(param_1 + 0x48);
  FUN_1449027d0(param_1,&local_38);
  puVar3 = *(undefined8 **)(local_38 + 0x50);
  AcquireSRWLockExclusive((PSRWLOCK)(puVar3 + 0x40));
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
  FUN_140f9ed8d(*puVar3,*(undefined4 *)(puVar3 + 1));
  *(undefined4 *)(puVar3 + 1) = 0;
  if (*(int *)((longlong)puVar3 + 0xc) != 0) {
    FUN_140f9edf6(puVar3,0);
  }
  *(int *)(puVar3 + 2) = *(int *)(puVar3 + 2) + 1;
  FUN_140f9ed8d(puVar3[3],*(undefined4 *)(puVar3 + 4));
  *(undefined4 *)(puVar3 + 4) = 0;
  if (*(int *)((longlong)puVar3 + 0x24) != 0) {
    FUN_140f9edf6(puVar3 + 3,0);
  }
  *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
  *(undefined1 *)(param_1 + 0x98) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)(puVar3 + 0x40));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc85ee FUN_145cc85ee body=67 status=ok
// SIG undefined FUN_145cc85ee(void)

void FUN_145cc85ee(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145cc8632(param_1);
    FUN_1458fc9d2(param_1,0);
    return;
  }
  FUN_1458fc9d2(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_140fd5302(param_1);
  return;
}



// FUNCTION 145cc8632 FUN_145cc8632 body=327 status=ok
// SIG undefined FUN_145cc8632(void)

void FUN_145cc8632(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cc877a FUN_145cc877a body=61 status=ok
// SIG undefined FUN_145cc877a(void)

longlong FUN_145cc877a(void)

{
  longlong lVar1;
  
  FUN_141050fd7();
  lVar1 = FUN_144a8d392();
  FUN_140aa7318(lVar1,1);
  *(code **)(lVar1 + 0xc0) = FUN_1449e2820;
  FUN_140010366(lVar1,0);
  return lVar1;
}



// FUNCTION 145cc87c2 FUN_145cc87c2 body=498 status=ok
// SIG undefined FUN_145cc87c2(void)

void FUN_145cc87c2(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1449027d0(param_1,&local_38);
  puVar2 = *(undefined8 **)(local_38 + 0x300);
  AcquireSRWLockExclusive((PSRWLOCK)(puVar2 + 9));
  *(int *)(puVar2 + 8) = *(int *)(puVar2 + 8) + 1;
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
  FUN_145cc89b5(*puVar2,*(undefined4 *)(puVar2 + 1));
  *(undefined4 *)(puVar2 + 1) = 0;
  if (*(int *)((longlong)puVar2 + 0xc) != 0) {
    FUN_145cc8b30(puVar2);
  }
  *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + 1;
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_140c125e6(lVar4 + 0xd98,&DAT_14cbd9350);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(puVar2 + 9));
  lVar4 = FUN_140495e96(param_1 + 6);
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_140773fe2();
    if (plVar5 != (longlong *)0x0) {
      uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
      lVar4 = (**(code **)(*plVar5 + 0x2d0))(plVar5,*(undefined4 *)(lVar4 + 0xe0),uVar6);
      if (lVar4 != 0) {
        local_48 = (undefined8 *)0x0;
        local_40 = 0;
        FUN_1446efa72(&local_48,0,3,0x10);
        puVar2 = local_48;
        local_40 = 3;
        *local_48 = &PTR_LAB_14b507390;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar3 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar3 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar3;
        local_48[2] = lVar7;
        *local_48 = &PTR_FUN_14b9b4a40;
        local_48[3] = 0;
        FUN_14485c47a(local_48 + 3,param_1);
        puVar2[4] = param_1;
        FUN_145cc8b60(lVar4,&local_48);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc89b5 FUN_145cc89b5 body=41 status=ok
// SIG undefined FUN_145cc89b5(void)

void FUN_145cc89b5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145cc89de(param_1);
    param_1 = param_1 + 0x168;
  }
  return;
}



// FUNCTION 145cc89de FUN_145cc89de body=337 status=ok
// SIG undefined FUN_145cc89de(void)

void FUN_145cc89de(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 200) = 0;
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
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
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145cc8b30 FUN_145cc8b30 body=48 status=ok
// SIG undefined FUN_145cc8b30(void)

void FUN_145cc8b30(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x168,8);
  }
  return;
}



// FUNCTION 145cc8b60 FUN_145cc8b60 body=210 status=ok
// SIG undefined FUN_145cc8b60(void)

void FUN_145cc8b60(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  code *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = 0;
  FUN_14485c47a(&local_a0,param_1);
  local_80 = *param_2;
  *param_2 = 0;
  local_78 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = 0;
  local_48 = FUN_143efad98;
  local_40 = &LAB_143efb404;
  local_38 = &LAB_143efb42a;
  local_30 = FUN_143efb45e;
  local_88 = local_a0;
  local_98 = 0;
  local_90 = 0;
  bifrost::news::queryBySession(*(undefined8 *)(param_1 + 0x2b8));
  FUN_1449db362(&local_98);
  FUN_1449db362(param_2);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc8c34 FUN_145cc8c34 body=346 status=ok
// SIG undefined FUN_145cc8c34(void)

void FUN_145cc8c34(longlong param_1)

{
  undefined8 uVar1;
  ushort *puVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14152681e();
  lVar5 = FUN_140391552(param_1);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *puVar6 = &PTR_FUN_14b9cb898;
    puVar6[1] = uVar1;
    *(undefined4 *)(puVar6 + 2) = 1;
    FUN_14039144e(lVar5,puVar6);
    puVar6 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 2) = 0;
    puVar6[3] = 0;
    *puVar6 = &PTR_FUN_14b9cd388;
    FUN_14039144e(lVar5,puVar6);
  }
  lVar5 = *(longlong *)(param_1 + 0x288);
  if (lVar5 != 0) {
    lVar7 = FUN_144a2383e();
    if (lVar7 != 0) {
      FUN_1446ddc76(local_30,&DAT_14b9705e6,1);
      uVar3 = FUN_145cc8dbe(lVar7,local_30);
      *(undefined1 *)(lVar5 + 0x288) = uVar3;
    }
    iVar4 = FUN_145cc8d90(param_1);
    *(bool *)(lVar5 + 0x2b8) = iVar4 != -1;
    lVar7 = FUN_14479d2ce(param_1 + 0x30);
    uVar3 = FUN_140426394(lVar7 + 0x3c0,&DAT_14cbd92d8);
    *(undefined1 *)(lVar5 + 0x2b9) = uVar3;
    FUN_1415268bc(param_1);
    puVar2 = *(ushort **)(lVar5 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc8d90 FUN_145cc8d90 body=46 status=ok
// SIG undefined FUN_145cc8d90(void)

undefined8 FUN_145cc8d90(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar1 != 0) {
    uVar2 = FUN_1415267f2(lVar1 + 0x3c0);
    return uVar2;
  }
  return 0xffffffff;
}



// FUNCTION 145cc8dbe FUN_145cc8dbe body=170 status=ok
// SIG undefined FUN_145cc8dbe(void)

undefined8 FUN_145cc8dbe(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x2e0) != *(int *)(param_1 + 0x30c)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar4 = param_1 + 0x310;
    if (*(longlong *)(param_1 + 0x318) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x318);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 800) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x2d8) + (longlong)iVar6 * 0x18);
        if (*plVar1 == lVar2) {
          if (plVar1 == (longlong *)0x0) {
            return 0;
          }
          if (plVar1 + 1 != (longlong *)0x0) {
            lVar2 = plVar1[1];
            if (lVar2 == 0) {
              return 0;
            }
            return CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x36));
          }
          return 0;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 145cc8e68 FUN_145cc8e68 body=175 status=ok
// SIG undefined FUN_145cc8e68(void)

bool FUN_145cc8e68(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
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



// FUNCTION 145cc8f34 FUN_145cc8f34 body=134 status=ok
// SIG undefined FUN_145cc8f34(void)

void FUN_145cc8f34(longlong param_1,undefined8 param_2)

{
  FUN_145cc8fba(param_2,*(undefined4 *)(param_1 + 0x3a8));
  FUN_145cc8fba(param_2,*(undefined4 *)(param_1 + 0x3ac));
  FUN_145cc8fba(param_2,*(undefined4 *)(param_1 + 0x3b0));
  FUN_145cc8fba(param_2,*(undefined4 *)(param_1 + 0x3b4));
  FUN_145cc8fba(param_2,*(undefined4 *)(param_1 + 0x3b8));
  FUN_145cc8fba(param_2,*(undefined4 *)(param_1 + 0x3bc));
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  FUN_14586a994(param_1,param_2);
  return;
}



// FUNCTION 145cc8fba FUN_145cc8fba body=57 status=ok
// SIG undefined FUN_145cc8fba(void)

void FUN_145cc8fba(longlong param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (0 < (int)*(uint *)(param_1 + 0x178)) {
    lVar3 = 0;
    uVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x170) + lVar3);
      if (*(int *)(lVar1 + 0xc) == param_2) {
        FUN_1479e0cfc(param_1,lVar1);
        return;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (*(uint *)(param_1 + 0x178) != uVar2);
  }
  return;
}



// FUNCTION 145cc8ff4 FUN_145cc8ff4 body=94 status=ok
// SIG undefined FUN_145cc8ff4(void)

void FUN_145cc8ff4(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else if (param_2 < 0x21) {
    iVar2 = 0x20;
  }
  else {
    iVar1 = FUN_144a3809e(param_2,0);
    iVar2 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = iVar2;
    FUN_145cc9052(param_1,*(undefined4 *)(param_1 + 0x28),iVar2,1);
    return;
  }
  return;
}



// FUNCTION 145cc9052 FUN_145cc9052 body=129 status=ok
// SIG undefined FUN_145cc9052(void)

void FUN_145cc9052(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 145cc90d4 FUN_145cc90d4 body=313 status=ok
// SIG undefined FUN_145cc90d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145cc90d4(void)

{
  if ((DAT_14ca8657f & 2) == 0) {
    DAT_14ca8657f = DAT_14ca8657f | 2;
    _DAT_14ca86520 = L"FClearReplacementCS_Buffer_Uint4_Bounds";
    _DAT_14ca86538 = FUN_146826540;
    _DAT_14ca86540 = FUN_146825d77;
    _DAT_14ca86548 = FUN_146825fd6;
    _DAT_14ca86550 = FUN_1407e02ea;
    _DAT_14ca86558 = FUN_146826273;
    _DAT_14ca86530 = FUN_147416502;
    _DAT_14ca86570 = 0xffffffff00000100;
    _DAT_14ca86578 = 8;
    DAT_14ca8657c = 0;
    _DAT_14ca86560 = &LAB_14741652e;
    _DAT_14ca92598 = L"ClearResourceParam";
    DAT_14ca925c2 = FUN_140850cc5();
    _DAT_14ca925a0 = FUN_140fb78d0();
    _DAT_14ca925b0 = &LAB_14682652b;
    _DAT_14ca925b8 = 0x1000000f8;
    _DAT_14ca925c0 = 0;
    _DAT_14ca925a8 = DAT_14ca86528;
    DAT_14ca86528 = &DAT_14ca92598;
    FUN_145cc920e();
    FUN_1407e00cc(&DAT_14ca86518);
  }
  return &DAT_14ca86518;
}



// FUNCTION 145cc920e FUN_145cc920e body=133 status=ok
// SIG undefined FUN_145cc920e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc920e(void)

{
  _DAT_14ca925c8 = L"BASE";
  DAT_14ca925f2 = 4;
  FUN_145cc9294();
  _DAT_14ca925d8 = DAT_14ca86528;
  _DAT_14ca925d0 = &DAT_14ca925f8;
  _DAT_14ca925e0 = &LAB_14682652b;
  DAT_14ca86528 = &DAT_14ca925c8;
  DAT_14ca8657d = DAT_14ca8657d + '\x01';
  _DAT_14ca925e8 = 0x100000000;
  if (DAT_14ca9265c != '\0') {
    DAT_14ca8657e = DAT_14ca8657e + '\x01';
  }
  return;
}



// FUNCTION 145cc9294 FUN_145cc9294 body=205 status=ok
// SIG undefined FUN_145cc9294(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc9294(void)

{
  if ((DAT_14ca9265f & 2) != 0) {
    return;
  }
  DAT_14ca9265f = DAT_14ca9265f | 2;
  _DAT_14ca92600 = L"TClearReplacementBase";
  _DAT_14ca92618 = FUN_146826540;
  _DAT_14ca92620 = FUN_146825d77;
  _DAT_14ca92628 = FUN_146825fd6;
  _DAT_14ca92630 = FUN_1407e02ea;
  _DAT_14ca92638 = FUN_146826273;
  _DAT_14ca92610 = FUN_147425d8a;
  _DAT_14ca92650 = 0xffffffff000000f8;
  _DAT_14ca92658 = 8;
  DAT_14ca9265c = 0;
  _DAT_14ca92640 = &LAB_147425db6;
  FUN_145cc9362();
  FUN_145cc93dc();
  FUN_1407e00cc(&DAT_14ca925f8);
  return;
}



// FUNCTION 145cc9362 FUN_145cc9362 body=121 status=ok
// SIG undefined FUN_145cc9362(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc9362(void)

{
  FUN_145cc9462();
  _DAT_14ca92660 = L"ClearValueParam";
  DAT_14ca9268a = FUN_140850cc5();
  _DAT_14ca92668 = FUN_140ec6960();
  _DAT_14ca92678 = &LAB_14682652b;
  _DAT_14ca92680 = 0x1000000e0;
  _DAT_14ca92688 = 0;
  _DAT_14ca92670 = DAT_14ca92608;
  DAT_14ca92608 = &DAT_14ca92660;
  return;
}



// FUNCTION 145cc93dc FUN_145cc93dc body=133 status=ok
// SIG undefined FUN_145cc93dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc93dc(void)

{
  _DAT_14ca926f0 = L"BASE";
  DAT_14ca9271a = 4;
  FUN_140b35ae4();
  _DAT_14ca92700 = DAT_14ca92608;
  _DAT_14ca926f8 = &DAT_14ca8c6c8;
  _DAT_14ca92708 = &LAB_14682652b;
  DAT_14ca92608 = &DAT_14ca926f0;
  DAT_14ca9265d = DAT_14ca9265d + '\x01';
  _DAT_14ca92710 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca9265e = DAT_14ca9265e + '\x01';
  }
  return;
}



// FUNCTION 145cc9462 FUN_145cc9462 body=216 status=ok
// SIG undefined FUN_145cc9462(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cc9462(void)

{
  _DAT_14ca926c0 = L"MaxBoundsParam";
  DAT_14ca926ea = FUN_140850cc5();
  _DAT_14ca926c8 = FUN_140ec6960();
  _DAT_14ca926d8 = &LAB_14682652b;
  _DAT_14ca926e0 = 0x1000000ec;
  _DAT_14ca926e8 = 0;
  _DAT_14ca926d0 = DAT_14ca92608;
  DAT_14ca92608 = &DAT_14ca926c0;
  _DAT_14ca92690 = L"MinBoundsParam";
  DAT_14ca926ba = FUN_140850cc5();
  _DAT_14ca92698 = FUN_140ec6960();
  _DAT_14ca926a8 = &LAB_14682652b;
  _DAT_14ca926b0 = 0x1000000e6;
  _DAT_14ca926b8 = 0;
  _DAT_14ca926a0 = DAT_14ca92608;
  DAT_14ca92608 = &DAT_14ca92690;
  return;
}



// FUNCTION 145cc9542 FUN_145cc9542 body=247 status=ok
// SIG undefined FUN_145cc9542(void)

undefined8 * FUN_145cc9542(undefined8 *param_1)

{
  FUN_140dbffdc();
  FUN_1409e1656(param_1 + 6);
  *param_1 = &PTR_FUN_14a8dc380;
  param_1[6] = &PTR_FUN_14a8dc640;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  return param_1;
}



// FUNCTION 145cc9644 FUN_145cc9644 body=243 status=ok
// SIG undefined FUN_145cc9644(void)

undefined8 * FUN_145cc9644(undefined8 *param_1)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eca8ca();
  *param_1 = &PTR_FUN_14b8205e0;
  FUN_1447a97f4(&local_48,&DAT_14cbe5c60);
  FUN_1404e49fa(param_1 + 5,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1447715ec(param_1 + 10,&DAT_14cbe5c60);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,&DAT_14b9d8d88,0);
  FUN_1447325ac(&local_48,&local_50,1);
  param_1[0x10] = local_50;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  param_1[0x11] = DAT_14cbe5c88;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc9744 FUN_145cc9744 body=243 status=ok
// SIG undefined FUN_145cc9744(void)

undefined8 * FUN_145cc9744(undefined8 *param_1)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eca8ca();
  *param_1 = &PTR_FUN_14b826fb0;
  FUN_14480757c(&local_48,&DAT_14cbe4ac8);
  FUN_1404e49fa(param_1 + 5,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1447715ec(param_1 + 10,&DAT_14cbe4ae0);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,&DAT_14b9d8d88,0);
  FUN_1447325ac(&local_48,&local_50,1);
  param_1[0x10] = local_50;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  param_1[0x11] = DAT_14cbe4b08;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc9838 FUN_145cc9838 body=40 status=ok
// SIG undefined FUN_145cc9838(void)

undefined8 FUN_145cc9838(undefined8 param_1,int param_2)

{
  FUN_145cc9860();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cc9860 FUN_145cc9860 body=215 status=ok
// SIG undefined FUN_145cc9860(void)

void FUN_145cc9860(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b8370f0;
  param_1[6] = &PTR_FUN_14b8373b0;
  param_1[7] = &PTR_LAB_14b837440;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x2e];
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
  plVar3 = (longlong *)param_1[0x26];
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
  plVar3 = (longlong *)param_1[0x24];
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
  FUN_1449db362(param_1 + 0x1a);
  FUN_140e3eae6(param_1);
  return;
}



// FUNCTION 145cc9942 FUN_145cc9942 body=243 status=ok
// SIG undefined FUN_145cc9942(void)

undefined8 * FUN_145cc9942(undefined8 *param_1)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eca8ca();
  *param_1 = &PTR_FUN_14b849130;
  FUN_14480757c(&local_48,&DAT_14cbe4fa8);
  FUN_1404e49fa(param_1 + 5,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1447715ec(param_1 + 10,&DAT_14cbe4fc0);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,&DAT_14b9d8d88,0);
  FUN_1447325ac(&local_48,&local_50,1);
  param_1[0x10] = local_50;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  param_1[0x11] = DAT_14cbe4fe8;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cc9a36 FUN_145cc9a36 body=139 status=ok
// SIG undefined FUN_145cc9a36(void)

void FUN_145cc9a36(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145cc9ac2(puVar1);
  *puVar1 = &PTR_FUN_14b45b030;
  puVar1[0x10d] = 0;
  *(undefined4 *)(puVar1 + 0x10e) = 0;
  puVar1[0x109] = 0;
  puVar1[0x10a] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x874) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x87c) = 0;
  puVar1[0x111] = 0;
  *(undefined4 *)(puVar1 + 0x112) = 0;
  puVar1[0x117] = 0;
  *(undefined4 *)(puVar1 + 0x118) = 0;
  puVar1[0x113] = 0;
  puVar1[0x114] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x8cc) = 0;
  puVar1[0x11b] = 0;
  *(undefined4 *)(puVar1 + 0x11c) = 0;
  return;
}



// FUNCTION 145cc9ac2 FUN_145cc9ac2 body=830 status=ok
// SIG undefined FUN_145cc9ac2(void)

undefined8 * FUN_145cc9ac2(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145cc9e02();
  *param_1 = &PTR_FUN_14acd1580;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x51c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x524) = 0;
  param_1[0xa6] = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  *(undefined8 *)((longlong)param_1 + 0x57c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x584) = 0;
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5d4) = 0;
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0;
  param_1[0xc2] = 0;
  *(undefined4 *)(param_1 + 0xc3) = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x61c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x624) = 0;
  param_1[0xc6] = 0;
  *(undefined4 *)(param_1 + 199) = 0;
  param_1[0xcc] = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x66c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x674) = 0;
  param_1[0xd0] = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c4) = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x70c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x714) = 0;
  param_1[0xe4] = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  param_1[0xea] = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x75c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x764) = 0;
  param_1[0xee] = 0;
  *(undefined4 *)(param_1 + 0xef) = 0;
  param_1[0xf4] = 0;
  *(undefined4 *)(param_1 + 0xf5) = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7b4) = 0;
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0;
  param_1[0x100] = 0;
  *(undefined4 *)(param_1 + 0x101) = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x80c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x814) = 0;
  param_1[0x104] = 0;
  *(undefined4 *)(param_1 + 0x105) = 0;
  *(byte *)(param_1 + 0x106) = *(byte *)(param_1 + 0x106) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x834) = 0;
  *(undefined8 *)((longlong)param_1 + 0x83c) = 0;
  if (((*(uint *)(param_1 + 1) & 0x30) == 0) && (DAT_14c762768 != 0)) {
    plVar1 = (longlong *)FUN_14032f648();
    lVar4 = plVar1[0x22];
    if (lVar4 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar4 = plVar1[0x22];
    }
    if ((longlong)*(int *)(lVar4 + 0x40) != 0) {
      lVar3 = (longlong)*(int *)(lVar4 + 0x40) * 0x30;
      lVar4 = *(longlong *)(lVar4 + 0x38) + 0x28;
      do {
        lVar2 = FUN_147f96c32(lVar4 + -0x28);
        if ((lVar2 != 0) && (*(char *)(lVar4 + 4) == '\x01')) {
          local_60 = lVar2;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar2);
          }
          local_58 = &local_60;
          local_50 = lVar4;
          FUN_140ffcdc4(param_1 + 0x9e,local_44,&local_58,0);
        }
        lVar4 = lVar4 + 0x30;
        lVar3 = lVar3 + -0x30;
      } while (lVar3 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145cc9e02 FUN_145cc9e02 body=433 status=ok
// SIG undefined FUN_145cc9e02(void)

undefined8 * FUN_145cc9e02(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14aaeffb0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x464) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  param_1[0x91] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  FUN_144757f48(param_1,8);
  param_1[0x32] = 0x3c07fcb900000001;
  return param_1;
}



// FUNCTION 145cc9fb4 FUN_145cc9fb4 body=117 status=ok
// SIG undefined FUN_145cc9fb4(void)

void FUN_145cc9fb4(longlong param_1)

{
  longlong lVar1;
  
  FUN_145cca16c();
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145cca029(*(undefined8 *)(lVar1 + 1000),*(undefined4 *)(lVar1 + 0x3f0));
    *(undefined4 *)(lVar1 + 0x3f0) = 0;
    if (*(int *)(lVar1 + 0x3f4) != 0) {
      FUN_145cca324(lVar1 + 1000,0);
    }
    FUN_145cca074(*(longlong *)(param_1 + 0x10) + 1000,param_1 + 0x28);
    return;
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 145cca029 FUN_145cca029 body=75 status=ok
// SIG undefined FUN_145cca029(void)

void FUN_145cca029(longlong param_1,int param_2)

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



// FUNCTION 145cca074 FUN_145cca074 body=93 status=ok
// SIG undefined FUN_145cca074(void)

undefined8 * FUN_145cca074(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145cca029(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145cca384(param_1,iVar1);
      FUN_145cca0ea(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145cca0d2 FUN_145cca0d2 body=24 status=ok
// SIG undefined FUN_145cca0d2(void)

void FUN_145cca0d2(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145cca0e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145cca0ea FUN_145cca0ea body=45 status=ok
// SIG undefined FUN_145cca0ea(void)

void FUN_145cca0ea(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145cca118 FUN_145cca118 body=83 status=ok
// SIG undefined FUN_145cca118(void)

undefined8 * FUN_145cca118(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba423d0;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 145cca16c FUN_145cca16c body=380 status=ok
// SIG undefined FUN_145cca16c(void)

void FUN_145cca16c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar10 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_14c764890);
  plVar5 = (longlong *)*puVar10;
  iVar9 = (**(code **)(*plVar5 + 0x18))(plVar5,0x200);
  if (iVar9 < 0) {
    uVar7 = 0;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x28);
    FUN_145cca2ea(plVar1,iVar9);
    uVar7 = 1;
    if (iVar9 != 0) {
      iVar13 = 0;
      do {
        (**(code **)(*plVar5 + 0x20))(plVar5,local_50,iVar13,0x200);
        cVar8 = FUN_1458ed9e4(local_50);
        if (cVar8 != '\0') {
          lVar11 = FUN_14001cc68(0x18,0x10);
          FUN_145cca3e6(lVar11,local_50);
          plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
          plVar12[1] = (longlong)&DAT_100000001;
          *plVar12 = (longlong)&PTR_FUN_14ba45b20;
          plVar12[2] = lVar11;
          iVar4 = *(int *)(param_1 + 0x30);
          *(uint *)(param_1 + 0x30) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0x34) < iVar4 + 1U) {
            FUN_148fb9b4e(plVar1,iVar4);
          }
          lVar6 = *plVar1;
          *(longlong *)(lVar6 + (longlong)iVar4 * 0x10) = lVar11;
          *(longlong **)(lVar6 + 8 + (longlong)iVar4 * 0x10) = plVar12;
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
            LOCK();
            plVar2 = plVar12 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar3 = (int *)((longlong)plVar12 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar9 != iVar13);
      uVar7 = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x38) = uVar7;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cca2ea FUN_145cca2ea body=57 status=ok
// SIG undefined FUN_145cca2ea(void)

void FUN_145cca2ea(undefined8 *param_1,int param_2)

{
  FUN_145cca029(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_145cca324(param_1,param_2);
  return;
}



// FUNCTION 145cca324 FUN_145cca324 body=95 status=ok
// SIG undefined FUN_145cca324(void)

void FUN_145cca324(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 145cca384 FUN_145cca384 body=98 status=ok
// SIG undefined FUN_145cca384(void)

void FUN_145cca384(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145cca3e6 FUN_145cca3e6 body=144 status=ok
// SIG undefined FUN_145cca3e6(void)

undefined8 * FUN_145cca3e6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14ba423d0;
  FUN_14132161e(&local_28);
  param_1[1] = local_28;
  param_1[2] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cca478 FUN_145cca478 body=284 status=ok
// SIG undefined FUN_145cca478(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145cca478(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca86750) {
    FUN_144b3d300(&DAT_14ca86750);
    if (DAT_14ca86750 == -1) {
      FUN_145cca594();
      FUN_140db5666(&DAT_14ca866a8,0,&DAT_14ca86640,L"FClearReplacementCS_Buffer_Uint4",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147416694,
                    FUN_14741666c,&LAB_147416668,&LAB_147416664,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca866a8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1e6f);
      _Init_thread_footer(&DAT_14ca86750);
    }
  }
  return &DAT_14ca866a8;
}



// FUNCTION 145cca594 FUN_145cca594 body=313 status=ok
// SIG undefined FUN_145cca594(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cca594(void)

{
  if ((DAT_14ca866a7 & 2) == 0) {
    DAT_14ca866a7 = DAT_14ca866a7 | 2;
    _DAT_14ca86648 = L"FClearReplacementCS_Buffer_Uint4";
    _DAT_14ca86660 = FUN_146826540;
    _DAT_14ca86668 = FUN_146825d77;
    _DAT_14ca86670 = FUN_146825fd6;
    _DAT_14ca86678 = FUN_1407e02ea;
    _DAT_14ca86680 = FUN_146826273;
    _DAT_14ca86658 = FUN_147416634;
    _DAT_14ca86698 = 0xffffffff00000100;
    _DAT_14ca866a0 = 8;
    DAT_14ca866a4 = 0;
    _DAT_14ca86688 = &LAB_147416660;
    _DAT_14ca92720 = L"ClearResourceParam";
    DAT_14ca9274a = FUN_140850cc5();
    _DAT_14ca92728 = FUN_140fb78d0();
    _DAT_14ca92738 = &LAB_14682652b;
    _DAT_14ca92740 = 0x1000000f8;
    _DAT_14ca92748 = 0;
    _DAT_14ca92730 = DAT_14ca86650;
    DAT_14ca86650 = &DAT_14ca92720;
    FUN_145cca6ce();
    FUN_1407e00cc(&DAT_14ca86640);
    return;
  }
  return;
}



// FUNCTION 145cca6ce FUN_145cca6ce body=133 status=ok
// SIG undefined FUN_145cca6ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cca6ce(void)

{
  _DAT_14ca92750 = L"BASE";
  DAT_14ca9277a = 4;
  FUN_145cca754();
  _DAT_14ca92760 = DAT_14ca86650;
  _DAT_14ca92758 = &DAT_14ca92780;
  _DAT_14ca92768 = &LAB_14682652b;
  DAT_14ca86650 = &DAT_14ca92750;
  DAT_14ca866a5 = DAT_14ca866a5 + '\x01';
  _DAT_14ca92770 = 0x100000000;
  if (DAT_14ca927e4 != '\0') {
    DAT_14ca866a6 = DAT_14ca866a6 + '\x01';
  }
  return;
}



// FUNCTION 145cca754 FUN_145cca754 body=205 status=ok
// SIG undefined FUN_145cca754(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cca754(void)

{
  if ((DAT_14ca927e7 & 2) != 0) {
    return;
  }
  DAT_14ca927e7 = DAT_14ca927e7 | 2;
  _DAT_14ca92788 = L"TClearReplacementBase";
  _DAT_14ca927a0 = FUN_146826540;
  _DAT_14ca927a8 = FUN_146825d77;
  _DAT_14ca927b0 = FUN_146825fd6;
  _DAT_14ca927b8 = FUN_1407e02ea;
  _DAT_14ca927c0 = FUN_146826273;
  _DAT_14ca92798 = FUN_147425e4c;
  _DAT_14ca927d8 = 0xffffffff000000f8;
  _DAT_14ca927e0 = 8;
  DAT_14ca927e4 = 0;
  _DAT_14ca927c8 = &LAB_147425e78;
  FUN_145cca822();
  FUN_145cca89c();
  FUN_1407e00cc(&DAT_14ca92780);
  return;
}



// FUNCTION 145cca822 FUN_145cca822 body=121 status=ok
// SIG undefined FUN_145cca822(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cca822(void)

{
  FUN_145cca922();
  _DAT_14ca927e8 = L"ClearValueParam";
  DAT_14ca92812 = FUN_140850cc5();
  _DAT_14ca927f0 = FUN_140ec6960();
  _DAT_14ca92800 = &LAB_14682652b;
  _DAT_14ca92808 = 0x1000000e0;
  _DAT_14ca92810 = 0;
  _DAT_14ca927f8 = DAT_14ca92790;
  DAT_14ca92790 = &DAT_14ca927e8;
  return;
}



// FUNCTION 145cca89c FUN_145cca89c body=133 status=ok
// SIG undefined FUN_145cca89c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cca89c(void)

{
  _DAT_14ca92878 = L"BASE";
  DAT_14ca928a2 = 4;
  FUN_140b35ae4();
  _DAT_14ca92888 = DAT_14ca92790;
  _DAT_14ca92880 = &DAT_14ca8c6c8;
  _DAT_14ca92890 = &LAB_14682652b;
  DAT_14ca92790 = &DAT_14ca92878;
  DAT_14ca927e5 = DAT_14ca927e5 + '\x01';
  _DAT_14ca92898 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca927e6 = DAT_14ca927e6 + '\x01';
  }
  return;
}



// FUNCTION 145cca922 FUN_145cca922 body=216 status=ok
// SIG undefined FUN_145cca922(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cca922(void)

{
  _DAT_14ca92848 = L"MaxBoundsParam";
  DAT_14ca92872 = FUN_140850cc5();
  _DAT_14ca92850 = FUN_140ec6960();
  _DAT_14ca92860 = &LAB_14682652b;
  _DAT_14ca92868 = 0x1000000ec;
  _DAT_14ca92870 = 0;
  _DAT_14ca92858 = DAT_14ca92790;
  DAT_14ca92790 = &DAT_14ca92848;
  _DAT_14ca92818 = L"MinBoundsParam";
  DAT_14ca92842 = FUN_140850cc5();
  _DAT_14ca92820 = FUN_140ec6960();
  _DAT_14ca92830 = &LAB_14682652b;
  _DAT_14ca92838 = 0x1000000e6;
  _DAT_14ca92840 = 0;
  _DAT_14ca92828 = DAT_14ca92790;
  DAT_14ca92790 = &DAT_14ca92818;
  return;
}



// FUNCTION 145cca9fa FUN_145cca9fa body=284 status=ok
// SIG undefined FUN_145cca9fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145cca9fa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca869a0) {
    FUN_144b3d300(&DAT_14ca869a0);
    if (DAT_14ca869a0 == -1) {
      FUN_145ccab16();
      FUN_140db5666(&DAT_14ca868f8,0,&DAT_14ca86890,L"FClearReplacementCS_Buffer_Float4_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_1474168f8,
                    FUN_1474168a0,&LAB_14741689c,&LAB_147416898,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca868f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1e87);
      _Init_thread_footer(&DAT_14ca869a0);
    }
  }
  return &DAT_14ca868f8;
}



// FUNCTION 145ccab16 FUN_145ccab16 body=313 status=ok
// SIG undefined FUN_145ccab16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ccab16(void)

{
  if ((DAT_14ca868f7 & 2) == 0) {
    DAT_14ca868f7 = DAT_14ca868f7 | 2;
    _DAT_14ca86898 = L"FClearReplacementCS_Buffer_Float4_Bounds";
    _DAT_14ca868b0 = FUN_146826540;
    _DAT_14ca868b8 = FUN_146825d77;
    _DAT_14ca868c0 = FUN_146825fd6;
    _DAT_14ca868c8 = FUN_1407e02ea;
    _DAT_14ca868d0 = FUN_146826273;
    _DAT_14ca868a8 = FUN_147416868;
    _DAT_14ca868e8 = 0xffffffff00000100;
    _DAT_14ca868f0 = 8;
    DAT_14ca868f4 = 0;
    _DAT_14ca868d8 = &LAB_147416894;
    _DAT_14ca92a30 = L"ClearResourceParam";
    DAT_14ca92a5a = FUN_140850cc5();
    _DAT_14ca92a38 = FUN_140fb78d0();
    _DAT_14ca92a48 = &LAB_14682652b;
    _DAT_14ca92a50 = 0x1000000f8;
    _DAT_14ca92a58 = 0;
    _DAT_14ca92a40 = DAT_14ca868a0;
    DAT_14ca868a0 = &DAT_14ca92a30;
    FUN_145ccac50();
    FUN_1407e00cc(&DAT_14ca86890);
  }
  return &DAT_14ca86890;
}



// FUNCTION 145ccac50 FUN_145ccac50 body=133 status=ok
// SIG undefined FUN_145ccac50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ccac50(void)

{
  _DAT_14ca92a60 = L"BASE";
  DAT_14ca92a8a = 4;
  FUN_145ccacd6();
  _DAT_14ca92a70 = DAT_14ca868a0;
  _DAT_14ca92a68 = &DAT_14ca92a90;
  _DAT_14ca92a78 = &LAB_14682652b;
  DAT_14ca868a0 = &DAT_14ca92a60;
  DAT_14ca868f5 = DAT_14ca868f5 + '\x01';
  _DAT_14ca92a80 = 0x100000000;
  if (DAT_14ca92af4 != '\0') {
    DAT_14ca868f6 = DAT_14ca868f6 + '\x01';
  }
  return;
}



// FUNCTION 145ccacd6 FUN_145ccacd6 body=205 status=ok
// SIG undefined FUN_145ccacd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ccacd6(void)

{
  if ((DAT_14ca92af7 & 2) != 0) {
    return;
  }
  DAT_14ca92af7 = DAT_14ca92af7 | 2;
  _DAT_14ca92a98 = L"TClearReplacementBase";
  _DAT_14ca92ab0 = FUN_146826540;
  _DAT_14ca92ab8 = FUN_146825d77;
  _DAT_14ca92ac0 = FUN_146825fd6;
  _DAT_14ca92ac8 = FUN_1407e02ea;
  _DAT_14ca92ad0 = FUN_146826273;
  _DAT_14ca92aa8 = FUN_147425fb0;
  _DAT_14ca92ae8 = 0xffffffff000000f8;
  _DAT_14ca92af0 = 8;
  DAT_14ca92af4 = 0;
  _DAT_14ca92ad8 = &LAB_147425fdc;
  FUN_145ccada4();
  FUN_145ccae1e();
  FUN_1407e00cc(&DAT_14ca92a90);
  return;
}



// FUNCTION 145ccada4 FUN_145ccada4 body=121 status=ok
// SIG undefined FUN_145ccada4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ccada4(void)

{
  FUN_145ccaea4();
  _DAT_14ca92af8 = L"ClearValueParam";
  DAT_14ca92b22 = FUN_140850cc5();
  _DAT_14ca92b00 = FUN_140ec6960();
  _DAT_14ca92b10 = &LAB_14682652b;
  _DAT_14ca92b18 = 0x1000000e0;
  _DAT_14ca92b20 = 0;
  _DAT_14ca92b08 = DAT_14ca92aa0;
  DAT_14ca92aa0 = &DAT_14ca92af8;
  return;
}



// FUNCTION 145ccae1e FUN_145ccae1e body=133 status=ok
// SIG undefined FUN_145ccae1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ccae1e(void)

{
  _DAT_14ca92b88 = L"BASE";
  DAT_14ca92bb2 = 4;
  FUN_140b35ae4();
  _DAT_14ca92b98 = DAT_14ca92aa0;
  _DAT_14ca92b90 = &DAT_14ca8c6c8;
  _DAT_14ca92ba0 = &LAB_14682652b;
  DAT_14ca92aa0 = &DAT_14ca92b88;
  DAT_14ca92af5 = DAT_14ca92af5 + '\x01';
  _DAT_14ca92ba8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca92af6 = DAT_14ca92af6 + '\x01';
  }
  return;
}



// FUNCTION 145ccaea4 FUN_145ccaea4 body=216 status=ok
// SIG undefined FUN_145ccaea4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ccaea4(void)

{
  _DAT_14ca92b58 = L"MaxBoundsParam";
  DAT_14ca92b82 = FUN_140850cc5();
  _DAT_14ca92b60 = FUN_140ec6960();
  _DAT_14ca92b70 = &LAB_14682652b;
  _DAT_14ca92b78 = 0x1000000ec;
  _DAT_14ca92b80 = 0;
  _DAT_14ca92b68 = DAT_14ca92aa0;
  DAT_14ca92aa0 = &DAT_14ca92b58;
  _DAT_14ca92b28 = L"MinBoundsParam";
  DAT_14ca92b52 = FUN_140850cc5();
  _DAT_14ca92b30 = FUN_140ec6960();
  _DAT_14ca92b40 = &LAB_14682652b;
  _DAT_14ca92b48 = 0x1000000e6;
  _DAT_14ca92b50 = 0;
  _DAT_14ca92b38 = DAT_14ca92aa0;
  DAT_14ca92aa0 = &DAT_14ca92b28;
  return;
}



// FUNCTION 145ccaf7c FUN_145ccaf7c body=284 status=ok
// SIG undefined FUN_145ccaf7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ccaf7c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca88c50) {
    FUN_144b3d300(&DAT_14ca88c50);
    if (DAT_14ca88c50 == -1) {
      FUN_145ccb098();
      FUN_140db5666(&DAT_14ca88ba8,0,&DAT_14ca88b40,L"FClearReplacementCS_Buffer_Sint4_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearCS",5,1,FUN_147418a04,
                    FUN_1474189ac,&LAB_1474189a8,&LAB_1474189a4,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca88ba8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1fef);
      _Init_thread_footer(&DAT_14ca88c50);
    }
  }
  return &DAT_14ca88ba8;
}



// FUNCTION 145ccb098 FUN_145ccb098 body=313 status=ok
// SIG undefined FUN_145ccb098(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ccb098(void)

{
  if ((DAT_14ca88ba7 & 2) == 0) {
    DAT_14ca88ba7 = DAT_14ca88ba7 | 2;
    _DAT_14ca88b48 = L"FClearReplacementCS_Buffer_Sint4_Bounds";
    _DAT_14ca88b60 = FUN_146826540;
    _DAT_14ca88b68 = FUN_146825d77;
    _DAT_14ca88b70 = FUN_146825fd6;
    _DAT_14ca88b78 = FUN_1407e02ea;
    _DAT_14ca88b80 = FUN_146826273;
    _DAT_14ca88b58 = FUN_147418974;
    _DAT_14ca88b98 = 0xffffffff00000100;
    _DAT_14ca88ba0 = 8;
    DAT_14ca88ba4 = 0;
    _DAT_14ca88b88 = &LAB_1474189a0;
    _DAT_14ca938e8 = L"ClearResourceParam";
    DAT_14ca93912 = FUN_140850cc5();
    _DAT_14ca938f0 = FUN_140fb78d0();
    _DAT_14ca93900 = &LAB_14682652b;
    _DAT_14ca93908 = 0x1000000f8;
    _DAT_14ca93910 = 0;
    _DAT_14ca938f8 = DAT_14ca88b50;
    DAT_14ca88b50 = &DAT_14ca938e8;
    FUN_145ccb1d2();
    FUN_1407e00cc(&DAT_14ca88b40);
  }
  return &DAT_14ca88b40;
}



// FUNCTION 145ccb1d2 FUN_145ccb1d2 body=133 status=ok
// SIG undefined FUN_145ccb1d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ccb1d2(void)

{
  _DAT_14ca93918 = L"BASE";
  DAT_14ca93942 = 4;
  FUN_145ccb258();
  _DAT_14ca93928 = DAT_14ca88b50;
  _DAT_14ca93920 = &DAT_14ca93948;
  _DAT_14ca93930 = &LAB_14682652b;
  DAT_14ca88b50 = &DAT_14ca93918;
  DAT_14ca88ba5 = DAT_14ca88ba5 + '\x01';
  _DAT_14ca93938 = 0x100000000;
  if (DAT_14ca939ac != '\0') {
    DAT_14ca88ba6 = DAT_14ca88ba6 + '\x01';
  }
  return;
}



// FUNCTION 145ccb258 FUN_145ccb258 body=205 status=ok
// SIG undefined FUN_145ccb258(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ccb258(void)

{
  if ((DAT_14ca939af & 2) != 0) {
    return;
  }
  DAT_14ca939af = DAT_14ca939af | 2;
  _DAT_14ca93950 = L"TClearReplacementBase";
  _DAT_14ca93968 = FUN_146826540;
  _DAT_14ca93970 = FUN_146825d77;
  _DAT_14ca93978 = FUN_146825fd6;
  _DAT_14ca93980 = FUN_1407e02ea;
  _DAT_14ca93988 = FUN_146826273;
  _DAT_14ca93960 = FUN_14742672c;
  _DAT_14ca939a0 = 0xffffffff000000f8;
  _DAT_14ca939a8 = 8;
  DAT_14ca939ac = 0;
  _DAT_14ca93990 = &LAB_147426758;
  FUN_145ccb326();
  FUN_145ccb3a0();
  FUN_1407e00cc(&DAT_14ca93948);
  return;
}



// FUNCTION 145ccb326 FUN_145ccb326 body=121 status=ok
// SIG undefined FUN_145ccb326(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ccb326(void)

{
  FUN_145ccb426();
  _DAT_14ca939b0 = L"ClearValueParam";
  DAT_14ca939da = FUN_140850cc5();
  _DAT_14ca939b8 = FUN_140ec6960();
  _DAT_14ca939c8 = &LAB_14682652b;
  _DAT_14ca939d0 = 0x1000000e0;
  _DAT_14ca939d8 = 0;
  _DAT_14ca939c0 = DAT_14ca93958;
  DAT_14ca93958 = &DAT_14ca939b0;
  return;
}



// FUNCTION 145ccb3a0 FUN_145ccb3a0 body=133 status=ok
// SIG undefined FUN_145ccb3a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ccb3a0(void)

{
  _DAT_14ca93a40 = L"BASE";
  DAT_14ca93a6a = 4;
  FUN_140b35ae4();
  _DAT_14ca93a50 = DAT_14ca93958;
  _DAT_14ca93a48 = &DAT_14ca8c6c8;
  _DAT_14ca93a58 = &LAB_14682652b;
  DAT_14ca93958 = &DAT_14ca93a40;
  DAT_14ca939ad = DAT_14ca939ad + '\x01';
  _DAT_14ca93a60 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca939ae = DAT_14ca939ae + '\x01';
  }
  return;
}



// FUNCTION 145ccb426 FUN_145ccb426 body=216 status=ok
// SIG undefined FUN_145ccb426(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ccb426(void)

{
  _DAT_14ca93a10 = L"MaxBoundsParam";
  DAT_14ca93a3a = FUN_140850cc5();
  _DAT_14ca93a18 = FUN_140ec6960();
  _DAT_14ca93a28 = &LAB_14682652b;
  _DAT_14ca93a30 = 0x1000000ec;
  _DAT_14ca93a38 = 0;
  _DAT_14ca93a20 = DAT_14ca93958;
  DAT_14ca93958 = &DAT_14ca93a10;
  _DAT_14ca939e0 = L"MinBoundsParam";
  DAT_14ca93a0a = FUN_140850cc5();
  _DAT_14ca939e8 = FUN_140ec6960();
  _DAT_14ca939f8 = &LAB_14682652b;
  _DAT_14ca93a00 = 0x1000000e6;
  _DAT_14ca93a08 = 0;
  _DAT_14ca939f0 = DAT_14ca93958;
  DAT_14ca93958 = &DAT_14ca939e0;
  return;
}



// FUNCTION 145ccb4fe FUN_145ccb4fe body=509 status=ok
// SIG undefined FUN_145ccb4fe(void)

void FUN_145ccb4fe(longlong *param_1)

{
  void *_Src;
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  size_t _Size;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined4 local_80 [2];
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  int local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14042b052();
  if ((longlong)(int)param_1[0x2a] != 0) {
    lVar2 = param_1[0x29];
    lVar3 = (longlong)(int)param_1[0x2a] * 0xa8 + lVar2;
    do {
      FUN_1415277fc(lVar2,0);
      if ((longlong)DAT_14cb3a230 != 0) {
        plVar4 = DAT_14cb3a228 + (longlong)DAT_14cb3a230 * 4;
        plVar1 = DAT_14cb3a228;
        do {
          local_60 = (int)plVar1[1];
          local_68 = *plVar1;
          local_58 = (void *)0x0;
          local_50 = (int)plVar1[3];
          _Size = (size_t)local_50;
          _Src = (void *)plVar1[2];
          if (_Size == 0) {
            local_4c = 0;
          }
          else {
            FUN_1447a127e(&local_58,local_50,0);
            memcpy(local_58,_Src,_Size);
          }
          if ((*(longlong *)(lVar2 + 0x20) == local_68) && (*(int *)(lVar2 + 0x28) == local_60)) {
            local_88 = local_68;
            local_80[0] = FUN_144830b78(local_80,&DAT_14cb42130);
            local_78 = 0;
            uStack_70 = 0;
            FUN_140120fb8(lVar2,&local_88,&local_88,0);
            FUN_1408c4b2a(&local_98);
            lVar5 = local_98;
            if (DAT_14c950c29 == '\x01') {
              if (local_98 == 0) {
                lVar5 = 0;
              }
              else {
                FUN_1456cec3c(local_98);
              }
            }
            *(longlong *)(lVar2 + 0x40) = lVar5;
            *(undefined8 *)(lVar2 + 0x48) = local_90;
            if (local_78 != 0) {
              FUN_1400020a8();
            }
            if (local_58 != (void *)0x0) {
              FUN_1400020a8();
            }
            break;
          }
          if (local_58 != (void *)0x0) {
            FUN_1400020a8();
          }
          plVar1 = plVar1 + 4;
        } while (plVar1 != plVar4);
      }
      lVar2 = lVar2 + 0xa8;
    } while (lVar2 != lVar3);
  }
  FUN_1415277fc(param_1 + 0x19,0);
  FUN_1415277fc(param_1 + 0x20,0);
  (**(code **)(*param_1 + 0x340))(param_1,0);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ccb712 FUN_145ccb712 body=160 status=ok
// SIG undefined FUN_145ccb712(void)

void FUN_145ccb712(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      LOCK();
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(lVar3 + 0x20);
      UNLOCK();
      FUN_144725486(lVar3);
      if (lVar3 != 0) {
        FUN_144a80d50(lVar3);
        FUN_1400020a8(lVar3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_145ccb7b2(param_1 + 0x18,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_145ccb7b2(param_1 + 0x28,0);
    return;
  }
  return;
}



// FUNCTION 145ccb7b2 FUN_145ccb7b2 body=96 status=ok
// SIG undefined FUN_145ccb7b2(void)

void FUN_145ccb7b2(longlong param_1,int param_2)

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



// FUNCTION 145ccb812 FUN_145ccb812 body=160 status=ok
// SIG undefined FUN_145ccb812(void)

void FUN_145ccb812(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      LOCK();
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(lVar3 + 0x20);
      UNLOCK();
      FUN_144725486(lVar3);
      if (lVar3 != 0) {
        FUN_14003f39a(lVar3);
        FUN_1400020a8(lVar3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_145ccb8b2(param_1 + 0x18,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_145ccb8b2(param_1 + 0x28,0);
    return;
  }
  return;
}



// FUNCTION 145ccb8b2 FUN_145ccb8b2 body=96 status=ok
// SIG undefined FUN_145ccb8b2(void)

void FUN_145ccb8b2(longlong param_1,int param_2)

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



// FUNCTION 145ccb912 FUN_145ccb912 body=40 status=ok
// SIG undefined FUN_145ccb912(void)

undefined8 FUN_145ccb912(undefined8 param_1,int param_2)

{
  FUN_145ccb93a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ccb93a FUN_145ccb93a body=88 status=ok
// SIG undefined FUN_145ccb93a(void)

void FUN_145ccb93a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3a4520;
  param_1[0x7b] = &DAT_14a176f00;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  param_1[0x7b] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x7c);
  FUN_1402d9b92(param_1);
  return;
}



// FUNCTION 145ccb992 FUN_145ccb992 body=506 status=ok
// SIG undefined FUN_145ccb992(void)

void FUN_145ccb992(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14110d204();
  uVar3 = FUN_144a126be(param_1);
  FUN_141527869(&local_28,uVar3);
  lVar4 = FUN_144a126be(param_1);
  if ((lVar4 != 0) && (lVar4 = FUN_144a7b302(lVar4), lVar4 != 0)) {
    uVar3 = *(undefined8 *)(lVar4 + 0xaf0);
    lVar4 = *(longlong *)(lVar4 + 0xaf8);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    *(longlong *)(param_1 + 0x58) = lVar4;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  }
  if (*(longlong *)(param_1 + 0x50) != 0) goto LAB_145ccba65;
  plVar5 = (longlong *)FUN_14001cc68(0xa0);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a57cde0;
  plVar6 = plVar5 + 2;
  memset(plVar6,0,0x90);
  FUN_145ccbb9c(plVar6);
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x50) = 0x10;
    plVar6 = *(longlong **)(param_1 + 0x58);
    if (plVar6 == (longlong *)0x0) goto LAB_145ccba65;
    *(undefined8 *)(param_1 + 0x58) = 0;
LAB_145ccbb27:
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
    if (plVar5 == (longlong *)0x0) goto LAB_145ccba65;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x50) = plVar6;
    plVar6 = *(longlong **)(param_1 + 0x58);
    if (plVar5 == plVar6) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x58) = plVar5;
      if (plVar6 != (longlong *)0x0) goto LAB_145ccbb27;
    }
  }
  LOCK();
  plVar6 = plVar5 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_145ccba65:
  if (local_28 != (undefined8 *)0x0) {
    if ((LPCRITICAL_SECTION)*local_28 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)*local_28);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ccbb9c FUN_145ccbb9c body=89 status=ok
// SIG undefined FUN_145ccbb9c(void)

longlong FUN_145ccbb9c(longlong param_1)

{
  FUN_145967e3c();
  *(undefined8 *)(param_1 + 0x28) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x30),4000);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return param_1;
}



// FUNCTION 145ccbbf6 FUN_145ccbbf6 body=40 status=ok
// SIG undefined FUN_145ccbbf6(void)

undefined8 FUN_145ccbbf6(undefined8 param_1,int param_2)

{
  FUN_145ccbc1e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ccbc1e FUN_145ccbc1e body=88 status=ok
// SIG undefined FUN_145ccbc1e(void)

void FUN_145ccbc1e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a70b170;
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1402d9b92(param_1);
  return;
}



// FUNCTION 145ccbc82 FUN_145ccbc82 body=117 status=ok
// SIG undefined FUN_145ccbc82(void)

undefined8 * FUN_145ccbc82(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a79d540;
  puVar1 = param_1 + 5;
  FUN_140056680(puVar1,&DAT_149e01fe8);
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0x100;
  *param_1 = &PTR_FUN_14a7a01d0;
  FUN_14020fad6(puVar1,L"Bitwise Compress Only");
  *param_1 = &PTR_FUN_14a7a05b0;
  FUN_14020fad6(puVar1,L"Least Destructive");
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0x100;
  return param_1;
}



// FUNCTION 145ccbcf8 FUN_145ccbcf8 body=40 status=ok
// SIG undefined FUN_145ccbcf8(void)

undefined8 FUN_145ccbcf8(undefined8 param_1,int param_2)

{
  FUN_145ccbd20();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ccbd20 FUN_145ccbd20 body=88 status=ok
// SIG undefined FUN_145ccbd20(void)

void FUN_145ccbd20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa60fc0;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ccbd78 FUN_145ccbd78 body=62 status=ok
// SIG undefined FUN_145ccbd78(void)

void FUN_145ccbd78(void)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_14cb0d008;
  if (DAT_14cb0d018 != (undefined8 *)0x0) {
    puVar1 = DAT_14cb0d018;
  }
  FUN_145ccbdb6(puVar1,DAT_14cb0d020);
  if (DAT_14cb0d018 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ccbdb6 FUN_145ccbdb6 body=66 status=ok
// SIG undefined FUN_145ccbdb6(void)

void FUN_145ccbdb6(longlong *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1408e177a(param_1,1);
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 145ccbe04 FUN_145ccbe04 body=117 status=ok
// SIG undefined FUN_145ccbe04(void)

undefined8 * FUN_145ccbe04(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14b022ee0;
  param_1[0x79] = &PTR_FUN_14b023550;
  uVar1 = DAT_14c8462c8;
  param_1[0x7a] = DAT_14c8462c0;
  param_1[0x7b] = uVar1;
  param_1[0x7c] = DAT_14c8462d0;
  param_1[0x7d] = 0xbff0000000000000;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(byte *)((longlong)param_1 + 0x404) = *(byte *)((longlong)param_1 + 0x404) & 0xf8 | 6;
  return param_1;
}



// FUNCTION 145ccbe7a FUN_145ccbe7a body=102 status=ok
// SIG undefined FUN_145ccbe7a(void)

ulonglong FUN_145ccbe7a(longlong param_1)

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
LAB_145ccbec3:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145ccbec3;
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



// FUNCTION 145ccbee0 FUN_145ccbee0 body=100 status=ok
// SIG undefined FUN_145ccbee0(void)

void FUN_145ccbee0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x48);
  if ((cVar1 != '\0') && (lVar2 = *(longlong *)(param_1 + 0x50), lVar2 != 0)) {
    if (*(int *)(param_1 + 0x40) != 0) {
      cVar1 = FUN_140a262da(param_1 + 0x28);
      lVar2 = *(longlong *)(param_1 + 0x50);
      if (cVar1 == '\0') {
        FUN_141527906(lVar2,*(undefined1 *)(param_1 + 0x60),param_1 + 0x18);
        return;
      }
    }
    FUN_143cc52f0(lVar2,*(undefined1 *)(param_1 + 0x60),param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 145ccbf4a FUN_145ccbf4a body=123 status=ok
// SIG undefined FUN_145ccbf4a(void)

undefined8 * FUN_145ccbf4a(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2e0);
  memset(_Dst,0,0x2e0);
  FUN_140e8cffc(_Dst);
  *(ushort *)(_Dst + 0x53) = (ushort)*(undefined4 *)(_Dst + 0x53) & 0xff80 | 0x40;
  _Dst[0x54] = 0;
  _Dst[0x55] = 0;
  *(byte *)((longlong)_Dst + 0x8e) = *(byte *)((longlong)_Dst + 0x8e) & 0xfb;
  *_Dst = &PTR_FUN_14b47ac00;
  _Dst[0x56] = 0;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  _Dst[0x59] = 0;
  _Dst[0x5a] = 0;
  _Dst[0x5b] = 0;
  return _Dst;
}



// FUNCTION 145ccbfd0 FUN_145ccbfd0 body=245 status=ok
// SIG undefined FUN_145ccbfd0(void)

undefined8 * FUN_145ccbfd0(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b4d2c70;
  param_1[5] = &PTR_FUN_14b4d9d98;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x32) = 0;
  param_1[7] = 0x407f400000000000;
  param_1[8] = 0x3f80000000000000;
  param_1[9] = 0x1441200000;
  *(undefined4 *)(param_1 + 10) = 0x41a00000;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0x101;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 2;
  *(undefined2 *)(param_1 + 0x27) = 0x101;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  return param_1;
}



// FUNCTION 145ccc0c6 FUN_145ccc0c6 body=21 status=ok
// SIG undefined FUN_145ccc0c6(void)

undefined8 FUN_145ccc0c6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145ccc148 FUN_145ccc148 body=40 status=ok
// SIG undefined FUN_145ccc148(void)

undefined8 FUN_145ccc148(undefined8 param_1,int param_2)

{
  FUN_145ccc170();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ccc170 FUN_145ccc170 body=88 status=ok
// SIG undefined FUN_145ccc170(void)

void FUN_145ccc170(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7097a0;
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1402d9b92(param_1);
  return;
}



// FUNCTION 145ccc1c8 FUN_145ccc1c8 body=40 status=ok
// SIG undefined FUN_145ccc1c8(void)

undefined8 FUN_145ccc1c8(undefined8 param_1,int param_2)

{
  FUN_145ccc1f0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ccc1f0 FUN_145ccc1f0 body=796 status=ok
// SIG undefined FUN_145ccc1f0(void)

void FUN_145ccc1f0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14b835930;
  param_1[6] = &PTR_FUN_14b835bf0;
  param_1[7] = &PTR_LAB_14b835c80;
  plVar2 = (longlong *)param_1[0x7f];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((longlong *)param_1[0x7a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x7a] + 0x10))();
  }
  if ((longlong *)param_1[0x78] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x78] + 0x10))();
  }
  if ((longlong *)param_1[0x76] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x76] + 0x10))();
  }
  if ((longlong *)param_1[0x74] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x74] + 0x10))();
  }
  if ((longlong *)param_1[0x72] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x72] + 0x10))();
  }
  if ((longlong *)param_1[0x70] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x70] + 0x10))();
  }
  if ((longlong *)param_1[0x6e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x6e] + 0x10))();
  }
  plVar2 = (longlong *)param_1[0x6a];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  FUN_145ccc50c(param_1 + 0x5f);
  *(undefined4 *)(param_1 + 0x59) = 0;
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  FUN_145ccc542(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x4f) = 0;
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_145ccc578(param_1 + 0x46);
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c31a(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c31a(param_1 + 0x2f);
  FUN_140b6c1c2(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c454(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c454(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_14101c9fb(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0xe];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  lVar3 = param_1[0xc];
  if (lVar3 != 0) {
    FUN_14127b218(lVar3);
    FUN_1400020a8(lVar3);
  }
  lVar3 = param_1[0xb];
  if (lVar3 != 0) {
    FUN_14127b218(lVar3);
    FUN_1400020a8(lVar3);
  }
  FUN_140e3eae6(param_1);
  return;
}



// FUNCTION 145ccc50c FUN_145ccc50c body=53 status=ok
// SIG undefined FUN_145ccc50c(void)

void FUN_145ccc50c(longlong *param_1)

{
  FUN_145ccc750();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ccc542 FUN_145ccc542 body=53 status=ok
// SIG undefined FUN_145ccc542(void)

void FUN_145ccc542(longlong *param_1)

{
  FUN_145ccc606();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ccc578 FUN_145ccc578 body=53 status=ok
// SIG undefined FUN_145ccc578(void)

void FUN_145ccc578(longlong *param_1)

{
  FUN_145ccc5ae();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ccc5ae FUN_145ccc5ae body=88 status=ok
// SIG undefined FUN_145ccc5ae(void)

void FUN_145ccc5ae(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 145ccc606 FUN_145ccc606 body=329 status=ok
// SIG undefined FUN_145ccc606(void)

void FUN_145ccc606(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_145778c66((longlong)iStack_4c * 0x28 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ccc750 FUN_145ccc750 body=378 status=ok
// SIG undefined FUN_145ccc750(void)

void FUN_145ccc750(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar4 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ccc8da FUN_145ccc8da body=120 status=ok
// SIG undefined FUN_145ccc8da(void)

undefined8 * FUN_145ccc8da(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_14007ca06();
  FUN_1412b486a(param_1,uVar1);
  *param_1 = &PTR_FUN_14bcbce90;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  lVar2 = FUN_145a95d40();
  lVar3 = *(longlong *)(lVar2 + 0x110);
  if (lVar3 == 0) {
    FUN_140aa6c08(lVar2);
    lVar3 = *(longlong *)(lVar2 + 0x110);
  }
  param_1[0x2b] = lVar3;
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 145ccc952 FUN_145ccc952 body=40 status=ok
// SIG undefined FUN_145ccc952(void)

undefined8 FUN_145ccc952(undefined8 param_1,int param_2)

{
  FUN_145ccc97a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ccc97a FUN_145ccc97a body=88 status=ok
// SIG undefined FUN_145ccc97a(void)

void FUN_145ccc97a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bdbc920;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145ccc9de FUN_145ccc9de body=116 status=ok
// SIG undefined FUN_145ccc9de(void)

undefined8 * FUN_145ccc9de(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14beae7f0;
  FUN_1446ddc76(&local_20,"WyvrnSDKPlugin",1);
  uVar1 = FUN_144a52528();
  FUN_14493e38c(uVar1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ccca54 FUN_145ccca54 body=292 status=ok
// SIG undefined FUN_145ccca54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ccca54(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dec88) {
    FUN_144b3d300(&DAT_14c9dec88);
    if (DAT_14c9dec88 == -1) {
      FUN_145ccccc2();
      FUN_145cccb78();
      FUN_140db5666(&DAT_14c9debe0,0,&DAT_14c9deb78,L"FCreateSparseVoxelBLAS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesSparseVoxelPipeline.usf"
                    ,L"CreateSparseVoxelBLAS",5,1,FUN_14719b54a,FUN_14719b4ea,&LAB_14719b4ae,
                    &LAB_14719b4aa,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e0a48);
      _DAT_14c9debe0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c9a0d6);
      _Init_thread_footer(&DAT_14c9dec88);
    }
  }
  return &DAT_14c9debe0;
}



// FUNCTION 145cccb78 FUN_145cccb78 body=205 status=ok
// SIG undefined FUN_145cccb78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cccb78(void)

{
  if ((DAT_14c9debdf & 2) == 0) {
    DAT_14c9debdf = DAT_14c9debdf | 2;
    _DAT_14c9deb80 = L"FCreateSparseVoxelBLAS";
    _DAT_14c9deb98 = FUN_146826540;
    _DAT_14c9deba0 = FUN_146825d77;
    _DAT_14c9deba8 = FUN_146825fd6;
    _DAT_14c9debb0 = FUN_1407e02ea;
    _DAT_14c9debb8 = FUN_146826273;
    _DAT_14c9deb90 = FUN_14719b47c;
    _DAT_14c9debd0 = 0xffffffff000000e0;
    _DAT_14c9debd8 = 8;
    DAT_14c9debdc = 0;
    _DAT_14c9debc0 = &LAB_14719b4a6;
    FUN_145cccc46();
    FUN_1407e00cc(&DAT_14c9deb78);
    return;
  }
  return;
}



// FUNCTION 145cccc46 FUN_145cccc46 body=123 status=ok
// SIG undefined FUN_145cccc46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cccc46(void)

{
  _DAT_14c9e1990 = L"BASE";
  DAT_14c9e19ba = 4;
  _DAT_14c9e1998 = FUN_140b35ae4();
  _DAT_14c9e19a0 = DAT_14c9deb88;
  _DAT_14c9e19a8 = &LAB_14682652b;
  DAT_14c9deb88 = &DAT_14c9e1990;
  DAT_14c9debdd = DAT_14c9debdd + '\x01';
  _DAT_14c9e19b0 = 0x100000000;
  if (*(char *)(_DAT_14c9e1998 + 100) != '\0') {
    DAT_14c9debde = DAT_14c9debde + '\x01';
  }
  return;
}



// FUNCTION 145ccccc2 FUN_145ccccc2 body=261 status=ok
// SIG undefined FUN_145ccccc2(void)

void FUN_145ccccc2(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e0ac8) {
    FUN_144b3d300(&DAT_14c9e0ac8);
    if (DAT_14c9e0ac8 == -1) {
      FUN_145cccdc8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x40;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e0a48,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ca0e69);
      _Init_thread_footer(&DAT_14c9e0ac8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cccdc8 FUN_145cccdc8 body=226 status=ok
// SIG undefined FUN_145cccdc8(void)

longlong * FUN_145cccdc8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cf42c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ccceb0 FUN_145ccceb0 body=138 status=ok
// SIG undefined FUN_145ccceb0(void)

code * FUN_145ccceb0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWPositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145cccf3a;
}



// FUNCTION 145cccf3a FUN_145cccf3a body=138 status=ok
// SIG undefined FUN_145cccf3a(void)

undefined1 * FUN_145cccf3a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cccfc4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SparseVoxelUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSparseVoxelUniformBufferParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x42;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145ccceac;
}



// FUNCTION 145cccfc4 FUN_145cccfc4 body=275 status=ok
// SIG undefined FUN_145cccfc4(void)

undefined * FUN_145cccfc4(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e1f48) {
    FUN_144b3d300(&DAT_14c9e1f48);
    if (DAT_14c9e1f48 == -1) {
      FUN_141527a38(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"SparseVoxelUniformBuffer";
      local_78 = L"FSparseVoxelUniformBufferParameters";
      local_50 = 0x120;
      local_58 = 0xb6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e1ec8,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142caaea8);
      _Init_thread_footer(&DAT_14c9e1f48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9e1ec8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ccd0d8 FUN_145ccd0d8 body=138 status=ok
// SIG undefined FUN_145ccd0d8(void)

code * FUN_145ccd0d8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VoxelBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FVoxelDataPacked>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe8000000c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bec42;
}



// FUNCTION 145ccd162 FUN_145ccd162 body=138 status=ok
// SIG undefined FUN_145ccd162(void)

code * FUN_145ccd162(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LocalBoundsOrigin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bf092;
}



// FUNCTION 145ccd1ec FUN_145ccd1ec body=138 status=ok
// SIG undefined FUN_145ccd1ec(void)

code * FUN_145ccd1ec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bApplyHeightFog";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10c000000d3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471be906;
}



// FUNCTION 145ccd282 FUN_145ccd282 body=106 status=ok
// SIG undefined FUN_145ccd282(void)

undefined8 * FUN_145ccd282(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_149e5e270;
  FUN_145ccd2ec(param_1 + 6);
  param_1[0x15] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_145ccd2fe(param_1 + 0x1c);
  *param_1 = &PTR_FUN_149e8d2e0;
  param_1[0x1c] = &PTR_LAB_149e8d640;
  return param_1;
}



// FUNCTION 145ccd2ec FUN_145ccd2ec body=18 status=ok
// SIG undefined FUN_145ccd2ec(void)

undefined8 * FUN_145ccd2ec(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return param_1;
}



// FUNCTION 145ccd2fe FUN_145ccd2fe body=250 status=ok
// SIG undefined FUN_145ccd2fe(void)

void FUN_145ccd2fe(undefined8 *param_1)

{
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_149e8eca0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  return;
}



// FUNCTION 145ccd3f8 FUN_145ccd3f8 body=331 status=ok
// SIG undefined FUN_145ccd3f8(void)

void FUN_145ccd3f8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a63fc8();
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
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145ccd544(local_20,local_28,local_2c != 0);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ccd544 FUN_145ccd544 body=53 status=ok
// SIG undefined FUN_145ccd544(void)

bool FUN_145ccd544(undefined4 param_1,undefined4 param_2,char param_3)

{
  float fVar1;
  undefined4 uVar2;
  
  if (param_3 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f800000;
  }
  fVar1 = (float)FUN_141047926(param_1,param_2,uVar2);
  return 1e-08 < ABS(fVar1);
}



// FUNCTION 145ccd57a FUN_145ccd57a body=146 status=ok
// SIG undefined FUN_145ccd57a(void)

code * FUN_145ccd57a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ccd60c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AOSampleParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FAOSampleParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000009a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9c8740;
  return FUN_145c2c1ea;
}



// FUNCTION 145ccd60c FUN_145ccd60c body=261 status=ok
// SIG undefined FUN_145ccd60c(void)

void FUN_145ccd60c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c87c0) {
    FUN_144b3d300(&DAT_14c9c87c0);
    if (DAT_14c9c87c0 == -1) {
      FUN_145ccd712(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FAOSampleParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x56;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8740,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be76d6);
      _Init_thread_footer(&DAT_14c9c87c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ccd712 FUN_145ccd712 body=226 status=ok
// SIG undefined FUN_145ccd712(void)

longlong * FUN_145ccd712(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462bfab6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ccd7fa FUN_145ccd7fa body=132 status=ok
// SIG undefined FUN_145ccd7fa(void)

undefined1 * FUN_145ccd7fa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SampleDirections";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x57;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 9;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ccd7f6;
}



// FUNCTION 145ccd87e FUN_145ccd87e body=62 status=ok
// SIG undefined FUN_145ccd87e(void)

void FUN_145ccd87e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145ccd8bc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 145ccd8bc FUN_145ccd8bc body=89 status=ok
// SIG undefined FUN_145ccd8bc(void)

ulonglong FUN_145ccd8bc(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
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



// FUNCTION 145ccd916 FUN_145ccd916 body=122 status=ok
// SIG undefined FUN_145ccd916(void)

void FUN_145ccd916(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
      }
    }
  }
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 145ccd990 FUN_145ccd990 body=296 status=ok
// SIG undefined FUN_145ccd990(void)

void FUN_145ccd990(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [8];
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14064d852();
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x48);
    if ((ulonglong)*(byte *)(lVar4 + 0x1e9) < 2) {
      iVar5 = *(int *)(lVar3 + 0xb38 + (ulonglong)*(byte *)(lVar4 + 0x1e9) * 0xb70) + -1;
    }
    else {
      iVar5 = -1;
    }
    *(int *)(param_1 + 0x130) = iVar5;
    FUN_141033866(lVar3,&local_78,*(undefined1 *)(lVar4 + 0x1e9));
    *(undefined4 *)(param_1 + 0x140) = local_70;
    *(undefined8 *)(param_1 + 0x138) = local_78;
    *(undefined4 *)(param_1 + 0x148) = local_68;
    *(undefined4 *)(param_1 + 0x14c) = uStack_64;
    *(undefined4 *)(param_1 + 0x150) = uStack_60;
    *(undefined4 *)(param_1 + 0x154) = uStack_5c;
    *(undefined4 *)(param_1 + 0x158) = local_58;
    *(undefined4 *)(param_1 + 0x15c) = uStack_54;
    *(undefined4 *)(param_1 + 0x160) = uStack_50;
    *(undefined4 *)(param_1 + 0x164) = uStack_4c;
    *(undefined4 *)(param_1 + 0x168) = local_48;
    *(undefined4 *)(param_1 + 0x16c) = uStack_44;
    *(undefined4 *)(param_1 + 0x170) = uStack_40;
    *(undefined4 *)(param_1 + 0x174) = uStack_3c;
    FUN_144a7c4b8(param_1 + 0x178,local_38);
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
    FUN_145ccdaba(*(undefined8 *)(param_1 + 0x120),*(undefined1 *)(lVar4 + 0x1e9),
                  *(undefined1 *)(lVar4 + 0x1e8));
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ccdaba FUN_145ccdaba body=24 status=ok
// SIG undefined FUN_145ccdaba(void)

void FUN_145ccdaba(longlong param_1,byte param_2,undefined1 param_3)

{
  if (param_2 < 2) {
    *(undefined1 *)(param_1 + 0xb98 + (ulonglong)param_2 * 0xb70) = param_3;
  }
  return;
}



// FUNCTION 145ccdad2 FUN_145ccdad2 body=147 status=ok
// SIG undefined FUN_145ccdad2(void)

void FUN_145ccdad2(longlong param_1,int param_2)

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



// FUNCTION 145ccdb66 FUN_145ccdb66 body=1045 status=ok
// SIG undefined FUN_145ccdb66(void)

void FUN_145ccdb66(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0x16a) = 1;
  lVar3 = FUN_14073fae1();
  fVar7 = *(float *)(lVar3 + 0x218) * 60.0;
  if (fVar7 <= 300.0) {
    fVar7 = 300.0;
  }
  *(float *)(param_1 + 0x490) = fVar7;
  if (param_2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(param_2 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x120) = uVar8;
  *(longlong *)(param_1 + 0x128) = param_2;
  FUN_145ccdf88(&local_50,param_3);
  *(undefined4 *)(param_1 + 0x130) = (undefined4)local_50;
  *(undefined4 *)(param_1 + 0x134) = local_50._4_4_;
  *(undefined4 *)(param_1 + 0x138) = uStack_48;
  *(undefined4 *)(param_1 + 0x13c) = uStack_44;
  lVar3 = FUN_14073fae1();
  *(float *)(param_1 + 0x3b0) = *(float *)(lVar3 + 0x168) * *(float *)(lVar3 + 0x168);
  if (1 < *(int *)(param_1 + 0x120) - 1U) goto LAB_145ccdd2b;
  if (*(longlong *)(param_1 + 0x138) == 0) {
LAB_145ccdeed:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_144729dda(param_1 + 0x130);
    if (cVar2 == '\0') goto LAB_145ccdeed;
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))();
  }
  lVar5 = FUN_145ccdf7c(uVar4);
  lVar3 = *(longlong *)(param_1 + 0x140);
  if (lVar5 == 0) {
    if (lVar3 != 0) {
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
      goto LAB_145ccdc7b;
    }
  }
  else if (lVar3 != lVar5) {
    if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    FUN_1401924dc(lVar5);
LAB_145ccdc7b:
    *(longlong *)(param_1 + 0x140) = lVar5;
  }
  if (*(longlong *)(param_1 + 0x128) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(*(longlong *)(param_1 + 0x128) + 0x3c);
  }
  puVar6 = (undefined4 *)FUN_14001cc68(0x168,0x10);
  *puVar6 = uVar8;
  *(undefined8 *)(puVar6 + 10) = 0;
  puVar6[0xc] = 0;
  *(undefined8 *)(puVar6 + 2) = 0;
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined8 *)(puVar6 + 0xd) = 0xffffffff00000080;
  puVar6[0xf] = 0;
  *(undefined8 *)(puVar6 + 0x12) = 0;
  puVar6[0x14] = 0;
  *(undefined1 *)(puVar6 + 0x42) = 0;
  *(undefined8 *)(puVar6 + 0x16) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  *(undefined8 *)(puVar6 + 0x1a) = 0;
  *(undefined8 *)(puVar6 + 0x1c) = 0;
  *(undefined8 *)(puVar6 + 0x1e) = 0;
  *(undefined8 *)(puVar6 + 0x20) = 0;
  *(undefined8 *)(puVar6 + 0x22) = 0;
  *(undefined8 *)(puVar6 + 0x24) = 0;
  *(undefined8 *)(puVar6 + 0x44) = 0;
  *(undefined8 *)(puVar6 + 0x46) = 0;
  *(undefined1 *)(puVar6 + 0x48) = 0;
  *(undefined8 *)(puVar6 + 0x4a) = 0;
  *(undefined8 *)(puVar6 + 0x4c) = 0;
  *(undefined8 *)(puVar6 + 0x4e) = 0;
  *(undefined8 *)(puVar6 + 0x50) = 0;
  *(undefined8 *)(puVar6 + 0x52) = 0;
  *(undefined8 *)(puVar6 + 0x54) = 0;
  *(undefined8 *)(puVar6 + 0x56) = 0;
  *(undefined8 *)(puVar6 + 0x58) = 0;
  lVar3 = *(longlong *)(param_1 + 0x3f0);
  *(undefined4 **)(param_1 + 0x3f0) = puVar6;
  if (lVar3 != 0) {
    FUN_145ac0dae(lVar3);
    FUN_1400020a8(lVar3);
  }
LAB_145ccdd2b:
  FUN_145cce170(param_1);
  FUN_145cce34c(param_1);
  if (*(longlong *)(param_1 + 0x138) != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x130);
    if (cVar2 != '\0') {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))();
      local_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      FUN_1446efa72(&local_50,0,3,0x10);
      puVar1 = local_50;
      uStack_48 = 3;
      *local_50 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_50[2] = lVar5;
      *local_50 = &PTR_FUN_14b3f8ab0;
      local_50[3] = 0;
      FUN_14485c47a(local_50 + 3,uVar4);
      puVar1[4] = param_1;
      FUN_1448b6402(&DAT_14cb7bac0,&local_58,&local_50);
      FUN_1449db362(&local_50);
      *(undefined8 *)(param_1 + 0x3a0) = local_58;
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))();
      local_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      FUN_1446efa72(&local_50,0,3,0x10);
      puVar1 = local_50;
      uStack_48 = 3;
      *local_50 = &PTR_LAB_14b3f8d60;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_50[2] = lVar5;
      *local_50 = &PTR_FUN_14b3f8b20;
      local_50[3] = 0;
      FUN_14485c47a(local_50 + 3,uVar4);
      puVar1[4] = param_1;
      FUN_145ccdfd8(&DAT_14cb7bad8,&local_58,&local_50);
      FUN_1449db362(&local_50);
      *(undefined8 *)(param_1 + 0x3a8) = local_58;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ccdf7c FUN_145ccdf7c body=12 status=ok
// SIG undefined FUN_145ccdf7c(void)

void FUN_145ccdf7c(void)

{
  FUN_145cce0bd(DAT_14c951640);
  return;
}



// FUNCTION 145ccdf88 FUN_145ccdf88 body=80 status=ok
// SIG undefined FUN_145ccdf88(void)

undefined8 * FUN_145ccdf88(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar2 != 0) goto LAB_145ccdfad;
  }
  lVar2 = 0;
LAB_145ccdfad:
  FUN_14485c47a(param_1,lVar2);
  cVar1 = FUN_14493c216(param_1,0);
  if (cVar1 == '\0') {
    param_1[1] = param_2;
  }
  return param_1;
}



// FUNCTION 145ccdfd8 FUN_145ccdfd8 body=216 status=ok
// SIG undefined FUN_145ccdfd8(void)

undefined8 * FUN_145ccdfd8(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145cce0bd FUN_145cce0bd body=177 status=ok
// SIG undefined FUN_145cce0bd(void)

undefined8 FUN_145cce0bd(undefined8 param_1)

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
  local_b8 = FUN_145a1bc98();
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



// FUNCTION 145cce170 FUN_145cce170 body=292 status=ok
// SIG undefined FUN_145cce170(void)

void FUN_145cce170(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x130);
    if (cVar2 != '\0') {
      uVar4 = *(undefined8 *)(param_1 + 0x138);
      goto LAB_145cce1b2;
    }
  }
  uVar4 = 0;
LAB_145cce1b2:
  lVar3 = thunk_FUN_145cce29a(DAT_14c951640);
  lVar1 = *(longlong *)(param_1 + 0x1c0);
  if (lVar3 == 0) {
    if (lVar1 != 0) {
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
      *(undefined8 *)(param_1 + 0x1c0) = 0;
    }
  }
  else {
    if (lVar1 != lVar3) {
      if ((lVar1 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      FUN_1401924dc(lVar3);
      *(longlong *)(param_1 + 0x1c0) = lVar3;
    }
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0xffffffff;
    local_24 = 0;
    FUN_145ccdf88(&local_38,uVar4);
    local_28 = 0;
    local_24 = *(int *)(param_1 + 0x120) - 1U < 2;
    (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0x2a0))
              (*(longlong **)(param_1 + 0x1c0),&local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cce295 thunk_FUN_145cce29a body=5 status=ok
// SIG undefined thunk_FUN_145cce29a(void)

undefined8 thunk_FUN_145cce29a(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined2 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  longlong *plStack_68;
  longlong alStack_58 [4];
  undefined8 uStack_38;
  ulonglong uStack_20;
  
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uStack_b8 = FUN_145a10b84();
  plStack_68 = (longlong *)0x0;
  uStack_38 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_78 = 0;
  uStack_b0 = param_1;
  uVar1 = FUN_1402710dd(&uStack_b8);
  if (lStack_78 != 0) {
    plVar2 = plStack_68;
    if (plStack_68 == (longlong *)0x0) {
      plVar2 = alStack_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((uStack_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cce29a FUN_145cce29a body=177 status=ok
// SIG undefined FUN_145cce29a(void)

undefined8 FUN_145cce29a(undefined8 param_1)

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
  local_b8 = FUN_145a10b84();
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



// FUNCTION 145cce34c FUN_145cce34c body=327 status=ok
// SIG undefined FUN_145cce34c(void)

void FUN_145cce34c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    cVar4 = FUN_144729dda(param_1 + 0x130);
    if (cVar4 != '\0') {
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))();
      if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) &&
         (*(longlong *)(param_1 + 0x128) != 0)) {
        *(undefined1 *)(param_1 + 0x38c) = 1;
        uVar6 = FUN_14050fd64();
        local_38 = 0;
        FUN_14088df30(uVar6,&local_28,*(undefined8 *)(param_1 + 0x128),0);
        plVar1 = local_20;
        if ((undefined8 *)(param_1 + 0x390) != &local_28) {
          *(undefined8 *)(param_1 + 0x390) = local_28;
          local_28 = 0;
          plVar3 = *(longlong **)(param_1 + 0x398);
          if (local_20 != plVar3) {
            local_20 = (longlong *)0x0;
            *(longlong **)(param_1 + 0x398) = plVar1;
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
          }
        }
        plVar1 = local_20;
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_20 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cce494 FUN_145cce494 body=334 status=ok
// SIG undefined FUN_145cce494(void)

void FUN_145cce494(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 4);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  lVar8 = param_1 + 0x58;
  cVar6 = FUN_144729dda(lVar8);
  if (cVar6 != '\0') {
    lVar9 = FUN_14479d2ce(lVar8);
    FUN_140457ffc(lVar9 + 0x28,param_1);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_2 + 2) != 0) {
    cVar6 = FUN_144729dda(param_2);
    if (cVar6 != '\0') {
      plVar7 = (longlong *)(**(code **)(**(longlong **)(param_2 + 2) + 0x28))();
      lVar9 = *plVar7;
      plVar7 = (longlong *)plVar7[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      if (lVar9 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(lVar9 + 0x140);
      }
      FUN_14485c47a(lVar8,uVar10);
      cVar6 = FUN_144729dda(lVar8);
      if (cVar6 != '\0') {
        lVar8 = FUN_14479d2ce(lVar8);
        FUN_145cce5e4(lVar8 + 0x28,local_28,param_1);
      }
      if (plVar7 != (longlong *)0x0) {
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
  }
  lVar8 = FUN_14073fae1();
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar8 + 0x78);
  lVar8 = FUN_14073fae1();
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar8 + 0x7c);
  lVar8 = FUN_14073fae1();
  *(float *)(param_1 + 0x68) = *(float *)(lVar8 + 0x80) * *(float *)(lVar8 + 0x80);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cce5e4 FUN_145cce5e4 body=244 status=ok
// SIG undefined FUN_145cce5e4(void)

undefined8 FUN_145cce5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b3f8a40;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_145c71558;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cce6e2 FUN_145cce6e2 body=219 status=ok
// SIG undefined FUN_145cce6e2(void)

undefined8 * FUN_145cce6e2(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_14007ca06();
  FUN_145cce7be(param_1,uVar2);
  *param_1 = &PTR_FUN_14ad1b140;
  param_1[5] = 0;
  param_1[6] = 0;
  local_30 = FUN_1446f8646();
  local_28 = DAT_14cb2ac98;
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_30);
  }
  local_20 = 0xffff0000;
  local_1c = 0xffff;
  local_1a = 0;
  iVar1 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x34) == iVar1) {
    FUN_145cce84a(param_1 + 5,iVar1);
  }
  FUN_145cce7de((longlong)iVar1 * 0x18 + param_1[5],&local_30,1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cce7be FUN_145cce7be body=32 status=ok
// SIG undefined FUN_145cce7be(void)

undefined8 * FUN_145cce7be(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14acf6180;
  return param_1;
}



// FUNCTION 145cce7de FUN_145cce7de body=108 status=ok
// SIG undefined FUN_145cce7de(void)

void FUN_145cce7de(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    bVar3 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar4);
      *(longlong *)(param_1 + lVar4) = lVar1;
      if ((lVar1 != 0 & bVar3) == 1) {
        FUN_1456cec3c();
        bVar3 = DAT_14c950c29;
      }
      uVar2 = *(undefined8 *)(param_2 + lVar4 + 8);
      *(undefined8 *)(param_1 + lVar4 + 0xf) = *(undefined8 *)(param_2 + lVar4 + 0xf);
      *(undefined8 *)(param_1 + lVar4 + 8) = uVar2;
      lVar4 = lVar4 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145cce84a FUN_145cce84a body=147 status=ok
// SIG undefined FUN_145cce84a(void)

void FUN_145cce84a(longlong param_1,int param_2)

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



// FUNCTION 145cce8de FUN_145cce8de body=38 status=ok
// SIG undefined FUN_145cce8de(void)

undefined8 FUN_145cce8de(undefined8 param_1,int param_2)

{
  FUN_145cce904();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cce904 FUN_145cce904 body=311 status=ok
// SIG undefined FUN_145cce904(void)

void FUN_145cce904(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4387e0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_145ccea3c(param_1 + 0x3a);
  *(undefined4 *)(param_1 + 0x39) = 0;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_145abb8b0(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x26);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x21));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_145ccea72(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_145cceaa8(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145abb8b0(param_1 + 3);
  return;
}



// FUNCTION 145ccea3c FUN_145ccea3c body=53 status=ok
// SIG undefined FUN_145ccea3c(void)

void FUN_145ccea3c(longlong *param_1)

{
  FUN_145cceade();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ccea72 FUN_145ccea72 body=53 status=ok
// SIG undefined FUN_145ccea72(void)

void FUN_145ccea72(longlong *param_1)

{
  FUN_145cceb8e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cceaa8 FUN_145cceaa8 body=53 status=ok
// SIG undefined FUN_145cceaa8(void)

void FUN_145cceaa8(longlong *param_1)

{
  FUN_145cceb36();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cceade FUN_145cceade body=88 status=ok
// SIG undefined FUN_145cceade(void)

void FUN_145cceade(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140957390(param_1,0);
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



// FUNCTION 145cceb36 FUN_145cceb36 body=88 status=ok
// SIG undefined FUN_145cceb36(void)

void FUN_145cceb36(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 145cceb8e FUN_145cceb8e body=345 status=ok
// SIG undefined FUN_145cceb8e(void)

void FUN_145cceb8e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ccecf2 FUN_145ccecf2 body=592 status=ok
// SIG undefined FUN_145ccecf2(void)

void FUN_145ccecf2(ulonglong *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0x10;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_147ce5ffa(param_2,param_1);
    goto LAB_145ccee3a;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_1[1] << 4,(longlong)*(int *)((longlong)param_1 + 0xc) << 4
            );
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_145ccee3a;
    local_28 = (uint)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
    uVar4 = *param_1;
    uVar6 = ((longlong)uVar4 >> 0x18) + (longlong)param_1;
    if ((uVar4 & 1) == 0) {
      uVar6 = uVar4;
    }
    lVar5 = *param_2;
LAB_145ccee34:
    (**(code **)(lVar5 + 0x170))(param_2,uVar6,(longlong)(int)local_28 << 4);
  }
  else {
    if (local_24 == 0x10) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_28 < 0x8000000) {
        FUN_145ccef44(param_1);
        uVar6 = param_1[1];
        *(uint *)(param_1 + 1) = (int)uVar6 + local_28;
        if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)uVar6) < local_28) {
          FUN_147ce5ed8(param_1);
        }
        uVar6 = *param_1;
        if ((uVar6 & 1) != 0) {
          uVar6 = (longlong)param_1 + ((longlong)uVar6 >> 0x18);
        }
        lVar5 = *param_2;
        goto LAB_145ccee34;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_145ccee3a:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ccef44 FUN_145ccef44 body=42 status=ok
// SIG undefined FUN_145ccef44(void)

void FUN_145ccef44(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1458cf6a6();
    return;
  }
  return;
}



// FUNCTION 145ccef6e FUN_145ccef6e body=339 status=ok
// SIG undefined FUN_145ccef6e(void)

void FUN_145ccef6e(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ccf0c2();
  lVar3 = FUN_1414b0848(param_1);
  FUN_145ccf0c4(lVar3);
  FUN_145a12e06(lVar3);
  *(undefined8 *)(lVar3 + 0x108) = 0;
  if (((*(longlong *)(param_1 + 0x30) != 0) &&
      (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_14116599c();
    if (lVar3 != 0) {
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,3,0x10);
      puVar1 = local_38;
      local_30 = 3;
      *local_38 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_38[2] = lVar4;
      *local_38 = &PTR_FUN_14b9715e0;
      local_38[3] = 0;
      FUN_14485c47a(local_38 + 3,param_1);
      puVar1[4] = &LAB_14413ecc8;
      *(undefined4 *)(puVar1 + 5) = 0;
      FUN_141527dfc(lVar3,&local_38,param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ccf0c2 FUN_145ccf0c2 body=1 status=ok
// SIG undefined FUN_145ccf0c2(void)

void FUN_145ccf0c2(void)

{
  return;
}



// FUNCTION 145ccf0c4 FUN_145ccf0c4 body=230 status=ok
// SIG undefined FUN_145ccf0c4(void)

void FUN_145ccf0c4(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0x10;
  cVar1 = FUN_145ccf1aa(lVar3);
  if (cVar1 == '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x18);
    if (lVar2 != 0) {
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        FUN_14480f766(lVar2 + 0x1e0);
      }
      if (*(longlong *)(param_1 + 0xf0) != 0) {
        FUN_14480f766(lVar2 + 0x548);
      }
      if (*(longlong *)(param_1 + 0xf8) != 0) {
        FUN_14480f766(lVar2 + 0x1f8);
      }
    }
    lVar2 = FUN_14479d2ce(lVar3);
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      FUN_14480f766(lVar2 + 0xc0);
    }
    lVar3 = FUN_14479d2ce(lVar3);
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      FUN_14480f766(lVar3 + 0xd8);
    }
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_14480f766(&DAT_14cb717f8);
    return;
  }
  return;
}



// FUNCTION 145ccf1aa FUN_145ccf1aa body=16 status=ok
// SIG undefined FUN_145ccf1aa(void)

byte FUN_145ccf1aa(void)

{
  byte bVar1;
  
  bVar1 = FUN_144729dda();
  return bVar1 ^ 1;
}



// FUNCTION 145ccf1ba FUN_145ccf1ba body=126 status=ok
// SIG undefined FUN_145ccf1ba(void)

void FUN_145ccf1ba(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14129aff4();
  lVar2 = FUN_144a7be76(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_144a78b9e();
    lVar4 = (longlong)*(int *)(lVar3 + 0x38);
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + lVar4 * 8) == lVar3 + 0x30
       )) {
      plVar1 = *(longlong **)(lVar2 + 0x430);
      if (plVar1 != (longlong *)0x0) {
        lVar4 = 0;
        (**(code **)(*plVar1 + 0x5d0))(plVar1,5,0);
      }
      FUN_145ccf238(lVar2,CONCAT71((int7)((ulonglong)lVar4 >> 8),
                                   *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x8d)) | 2);
      return;
    }
  }
  return;
}



// FUNCTION 145ccf238 FUN_145ccf238 body=209 status=ok
// SIG undefined FUN_145ccf238(void)

void FUN_145ccf238(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x858) != 0) {
    FUN_14035b7a0();
    FUN_14035e9a8(param_1,param_2);
    uVar5 = FUN_1447210f0(param_1);
    FUN_1409e0c66(&local_30,uVar5);
    if (local_28 != (longlong *)0x0) {
      iVar4 = (int)local_28[1];
      do {
        if (iVar4 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_28[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(local_28 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar6 = local_28;
      } while (!bVar7);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar6 != (longlong *)0x0) {
        if (local_30 != 0) {
          FUN_1415280ba(local_30,param_1);
        }
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ccf30a FUN_145ccf30a body=283 status=ok
// SIG undefined FUN_145ccf30a(void)

void FUN_145ccf30a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1412bdaf0();
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_140d27a2a(lVar1);
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        FUN_14480f766(lVar1 + 0x48);
      }
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  lVar1 = FUN_145ccf426(param_1);
  if (lVar1 != 0) {
    lVar2 = FUN_14030d660();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (*(longlong *)(param_1 + 0x88) != 0)) {
      FUN_14480f766(lVar1 + 0x608);
    }
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  lVar1 = FUN_1400d7050(param_1);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_140d27aa0(lVar1);
      if (*(longlong *)(param_1 + 0x98) != 0) {
        FUN_14480f766(lVar1 + 0x18);
      }
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
  }
  return;
}



// FUNCTION 145ccf426 FUN_145ccf426 body=39 status=ok
// SIG undefined FUN_145ccf426(void)

undefined8 FUN_145ccf426(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x178);
  }
  return uVar2;
}



// FUNCTION 145ccf44e FUN_145ccf44e body=40 status=ok
// SIG undefined FUN_145ccf44e(void)

undefined8 FUN_145ccf44e(undefined8 param_1,int param_2)

{
  FUN_145ccf476();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ccf476 FUN_145ccf476 body=379 status=ok
// SIG undefined FUN_145ccf476(void)

void FUN_145ccf476(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b678570;
  param_1[0x72] = &PTR_FUN_14b678f00;
  param_1[0x73] = &PTR_FUN_14b678f80;
  param_1[0x74] = &PTR_FUN_14b678ff0;
  param_1[0x75] = &PTR_FUN_14b679018;
  param_1[0x76] = &PTR_FUN_14b679030;
  param_1[0xa4] = &PTR_FUN_14b679060;
  param_1[0xa5] = &PTR_FUN_14b6790b0;
  param_1[0xa6] = &PTR_FUN_14b6790e0;
  param_1[0xa7] = &PTR_FUN_14b679110;
  param_1[0xa8] = &PTR_FUN_14b679128;
  param_1[0x118] = &PTR_FUN_14b679140;
  param_1[0x119] = &PTR_FUN_14b679230;
  param_1[0x11a] = &PTR_FUN_14b679260;
  param_1[0x11b] = &PTR_FUN_14b679280;
  param_1[0x11c] = &PTR_FUN_14b6792a0;
  param_1[0x11d] = &PTR_FUN_14b679310;
  param_1[0x1bb] = &PTR_FUN_14b679330;
  param_1[0x1bc] = &PTR_FUN_14b679360;
  param_1[0x1bd] = &PTR_FUN_14b679390;
  param_1[0x1be] = &PTR_FUN_14b6793b0;
  param_1[0x1bf] = &PTR_FUN_14b679420;
  param_1[0x1c0] = &PTR_FUN_14b679460;
  param_1[0x20d] = &PTR_FUN_14b6794d0;
  param_1[0x20e] = &PTR_FUN_14b679590;
  FUN_1449e6b18((longlong)param_1 + 0x109c);
  FUN_140ef64b4(param_1);
  return;
}



// FUNCTION 145ccf5f2 FUN_145ccf5f2 body=437 status=ok
// SIG undefined FUN_145ccf5f2(void)

undefined8 FUN_145ccf5f2(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    uVar6 = 3;
    if (cVar5 == '\0') goto LAB_145ccf685;
  }
  if (param_3 == '\x01') {
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x10 + (longlong)param_2 * 0x50);
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x50);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    FUN_145ccf858(param_1 + 0x18);
    FUN_145ccf7a8(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar7 = 0;
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x38) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x38) <= param_2)) {
      FUN_14767cf40(param_1 + 0xa0);
      FUN_14767cf98(param_1 + 0xa0);
    }
    uVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x38) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x38) <= param_2)) {
      FUN_14767cf40(param_1 + 0xa0);
      FUN_14767cf98(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x48 + (longlong)param_2 * 0x50);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar6 = 1;
  }
LAB_145ccf685:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 145ccf7a8 FUN_145ccf7a8 body=176 status=ok
// SIG undefined FUN_145ccf7a8(void)

void FUN_145ccf7a8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  if (*(longlong *)(*param_1 + 0x38 + (longlong)param_2 * 0x50) != 0) {
    FUN_1400020a8();
  }
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 145ccf858 FUN_145ccf858 body=156 status=ok
// SIG undefined FUN_145ccf858(void)

void FUN_145ccf858(longlong *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_141314d5a(param_2);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x24);
        if ((((*piVar1 == *param_2) &&
             (*(int *)(*param_1 + 4 + (longlong)iVar2 * 0x24) == param_2[1])) &&
            (piVar1[4] == param_2[4])) &&
           ((*(longlong *)(piVar1 + 2) == *(longlong *)(param_2 + 2) &&
            ((char)piVar1[5] == (char)param_2[5])))) {
          FUN_145ccf8f4(param_1);
          return;
        }
        iVar2 = piVar1[7];
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 145ccf8f4 FUN_145ccf8f4 body=85 status=ok
// SIG undefined FUN_145ccf8f4(void)

void FUN_145ccf8f4(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x24;
  lVar5 = (longlong)*(int *)(lVar1 + 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x24 + 0x1c);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x1c);
  FUN_145ccf94a();
  return;
}



// FUNCTION 145ccf94a FUN_145ccf94a body=112 status=ok
// SIG undefined FUN_145ccf94a(void)

void FUN_145ccf94a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x24) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x24);
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



// FUNCTION 145ccf9ba FUN_145ccf9ba body=66 status=ok
// SIG undefined FUN_145ccf9ba(void)

longlong FUN_145ccf9ba(void)

{
  longlong lVar1;
  
  if (DAT_14c9512e8 == 0) {
    FUN_141528330();
    lVar1 = FUN_14001206a();
    FUN_140aa7318(lVar1,1);
    FUN_140010366(lVar1,0);
    DAT_14c9512e8 = lVar1;
  }
  return DAT_14c9512e8;
}



// FUNCTION 145ccf9fc FUN_145ccf9fc body=156 status=ok
// SIG undefined FUN_145ccf9fc(void)

longlong * FUN_145ccf9fc(void)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  undefined **local_a8 [18];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14c948f90 == 0) {
    DAT_14c948f90 = FUN_145e26bee();
  }
  plVar1 = (longlong *)FUN_140010bca();
  FUN_140aa7318(plVar1,1);
  FUN_144869430(local_a8);
  local_a8[0] = &PTR_FUN_149e69f40;
  (**(code **)(*plVar1 + 0x2b8))(plVar1,local_a8,0);
  FUN_144a7fc42(local_a8);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ccfa9a FUN_145ccfa9a body=122 status=ok
// SIG undefined FUN_145ccfa9a(void)

void FUN_145ccfa9a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_141528353();
  if (cVar1 != '\0') {
    lVar2 = FUN_1415ac8a0();
    if (*(longlong *)(lVar2 + 0x110) != 0) {
      lVar2 = FUN_1415ac8a0();
      if (*(longlong *)(lVar2 + 0x110) == 0) {
        FUN_140aa6c08(lVar2);
      }
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_14480f766(*(longlong *)(lVar2 + 0x110) + 0xd8);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145fcabba(param_1);
  return;
}



// FUNCTION 145ccfb14 FUN_145ccfb14 body=81 status=ok
// SIG undefined FUN_145ccfb14(void)

void FUN_145ccfb14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149fcd880;
  FUN_145ccfb65(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1);
  return;
}



// FUNCTION 145ccfb65 FUN_145ccfb65 body=48 status=ok
// SIG undefined FUN_145ccfb65(void)

void FUN_145ccfb65(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ccfb9e FUN_145ccfb9e body=121 status=ok
// SIG undefined FUN_145ccfb9e(void)

undefined8 * FUN_145ccfb9e(undefined8 *param_1)

{
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14a1d9a30;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3ef) = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 2;
  FUN_140cbebe8(param_1 + 6,1);
  return param_1;
}



// FUNCTION 145ccfc22 FUN_145ccfc22 body=118 status=ok
// SIG undefined FUN_145ccfc22(void)

undefined8 * FUN_145ccfc22(undefined8 *param_1)

{
  FUN_14582bf9a();
  *param_1 = &PTR_FUN_14a4a7650;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 2;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 2;
  param_1[0xb] = &PTR_FUN_14a4a74c0;
  FUN_14582bf7a(param_1 + 0x15);
  return param_1;
}



// FUNCTION 145ccfc98 FUN_145ccfc98 body=40 status=ok
// SIG undefined FUN_145ccfc98(void)

undefined8 FUN_145ccfc98(undefined8 param_1,int param_2)

{
  FUN_145ccfcc0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ccfcc0 FUN_145ccfcc0 body=89 status=ok
// SIG undefined FUN_145ccfcc0(void)

void FUN_145ccfcc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa30ec0;
  param_1[5] = &PTR_FUN_14aa31360;
  param_1[6] = &PTR_LAB_14aa313a0;
  FUN_1449db362(param_1 + 0x58);
  FUN_1449db362(param_1 + 0x56);
  FUN_1449db362(param_1 + 0x54);
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145ccfd1a FUN_145ccfd1a body=40 status=ok
// SIG undefined FUN_145ccfd1a(void)

undefined8 FUN_145ccfd1a(undefined8 param_1,int param_2)

{
  FUN_145ccfd42();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ccfd42 FUN_145ccfd42 body=89 status=ok
// SIG undefined FUN_145ccfd42(void)

void FUN_145ccfd42(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aaa56b0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14aa9f670;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ccfd9c FUN_145ccfd9c body=40 status=ok
// SIG undefined FUN_145ccfd9c(void)

undefined8 FUN_145ccfd9c(undefined8 param_1,int param_2)

{
  FUN_145ccfdc4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ccfdc4 FUN_145ccfdc4 body=89 status=ok
// SIG undefined FUN_145ccfdc4(void)

void FUN_145ccfdc4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae2c210;
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
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ccfe22 FUN_145ccfe22 body=124 status=ok
// SIG undefined FUN_145ccfe22(void)

void FUN_145ccfe22(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14aed70c0;
  puVar1[5] = &PTR_FUN_14aed7400;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x8c) = 0;
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  return;
}



// FUNCTION 145ccfe9e FUN_145ccfe9e body=85 status=ok
// SIG undefined FUN_145ccfe9e(void)

void FUN_145ccfe9e(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == param_2) {
          FUN_145ccfef4(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 145ccfef4 FUN_145ccfef4 body=94 status=ok
// SIG undefined FUN_145ccfef4(void)

void FUN_145ccfef4(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x60 + 0x58);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_145ccff52();
  return;
}



// FUNCTION 145ccff52 FUN_145ccff52 body=84 status=ok
// SIG undefined FUN_145ccff52(void)

void FUN_145ccff52(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(lVar1 + lVar2 + 8);
  FUN_145ccffa6(param_1,param_2);
  return;
}



// FUNCTION 145ccffa6 FUN_145ccffa6 body=124 status=ok
// SIG undefined FUN_145ccffa6(void)

void FUN_145ccffa6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 145cd002e FUN_145cd002e body=246 status=ok
// SIG undefined FUN_145cd002e(void)

undefined8 * FUN_145cd002e(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eca8ca();
  *param_1 = &PTR_FUN_14b85b800;
  local_50 = DAT_14cbe5340;
  local_58 = DAT_14cbe5338;
  FUN_1448075d0(&local_48);
  FUN_1404e49fa(param_1 + 5,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1447715ec(param_1 + 10,&DAT_14cbe5350);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,"ui_screen_data",0);
  FUN_1447325ac(&local_48,&local_58,1);
  param_1[0x10] = local_58;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cd0126 FUN_145cd0126 body=52 status=ok
// SIG undefined FUN_145cd0126(void)

void FUN_145cd0126(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x398);
  memset(_Dst,0,0x398);
  FUN_145cd015a(_Dst);
  return;
}



// FUNCTION 145cd015a FUN_145cd015a body=206 status=ok
// SIG undefined FUN_145cd015a(void)

undefined8 * FUN_145cd015a(undefined8 *param_1)

{
  FUN_140e8cfb8();
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *param_1 = &PTR_FUN_14b9d1220;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ef) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined8 *)((longlong)param_1 + 0x311) = 0;
  *(undefined8 *)((longlong)param_1 + 0x319) = 0;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  return param_1;
}



// FUNCTION 145cd0228 FUN_145cd0228 body=40 status=ok
// SIG undefined FUN_145cd0228(void)

undefined8 FUN_145cd0228(undefined8 param_1,int param_2)

{
  FUN_145cd0250();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cd0250 FUN_145cd0250 body=89 status=ok
// SIG undefined FUN_145cd0250(void)

void FUN_145cd0250(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba69ec0;
  FUN_1449db362(param_1 + 0x2f);
  FUN_144760e21(param_1[0x2a],*(undefined4 *)(param_1 + 0x2b));
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_14124efea(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



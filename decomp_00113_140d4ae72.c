// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140d4ae72 FUN_140d4ae72 body=63 status=ok
// SIG undefined FUN_140d4ae72(void)

void FUN_140d4ae72(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140d4aeb2();
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000140d4aead. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d4aeb2 FUN_140d4aeb2 body=97 status=ok
// SIG undefined FUN_140d4aeb2(void)

void FUN_140d4aeb2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    FUN_144b3f230();
    *param_1 = 0;
  }
  param_1[1] = 0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    param_1[2] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140d4af0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d4af13 FUN_140d4af13 body=143 status=ok
// SIG undefined FUN_140d4af13(void)

void FUN_140d4af13(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + lVar5 * 8);
      if (lVar3 != 0) {
        plVar4 = *(longlong **)(lVar3 + 0x40);
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
        if (*(longlong *)(lVar3 + 0x20) != 0) {
          FUN_1400020a8();
        }
        FUN_140d4afa2(*(undefined8 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0x18));
        if (*(longlong *)(lVar3 + 0x10) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar3);
      }
      lVar5 = lVar5 + 1;
    } while (param_2 != (int)lVar5);
  }
  return;
}



// FUNCTION 140d4afa2 FUN_140d4afa2 body=60 status=ok
// SIG undefined FUN_140d4afa2(void)

void FUN_140d4afa2(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x40;
    do {
      FUN_140d4b080(param_1);
      FUN_140d4b0c0(param_1 + -0x18);
      FUN_140d4afde(param_1 + -0x30);
      param_1 = param_1 + 0x60;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d4afde FUN_140d4afde body=63 status=ok
// SIG undefined FUN_140d4afde(void)

void FUN_140d4afde(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140d4b01e();
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000140d4b019. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d4b01e FUN_140d4b01e body=97 status=ok
// SIG undefined FUN_140d4b01e(void)

void FUN_140d4b01e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    FUN_144b3f230();
    *param_1 = 0;
  }
  param_1[1] = 0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    param_1[2] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140d4b07b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d4b080 FUN_140d4b080 body=63 status=ok
// SIG undefined FUN_140d4b080(void)

void FUN_140d4b080(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140d4b100();
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000140d4b0bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d4b0c0 FUN_140d4b0c0 body=63 status=ok
// SIG undefined FUN_140d4b0c0(void)

void FUN_140d4b0c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140d4b162();
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000140d4b0fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d4b100 FUN_140d4b100 body=97 status=ok
// SIG undefined FUN_140d4b100(void)

void FUN_140d4b100(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    FUN_144b3f230();
    *param_1 = 0;
  }
  param_1[1] = 0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    param_1[2] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140d4b15d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d4b162 FUN_140d4b162 body=97 status=ok
// SIG undefined FUN_140d4b162(void)

void FUN_140d4b162(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    FUN_144b3f230();
    *param_1 = 0;
  }
  param_1[1] = 0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    param_1[2] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140d4b1bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d4b1c4 FUN_140d4b1c4 body=167 status=ok
// SIG undefined FUN_140d4b1c4(void)

void FUN_140d4b1c4(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  lVar2 = DAT_14cb1cce8;
  if ((longlong)DAT_14cb1ccf0 != 0) {
    lVar5 = (longlong)DAT_14cb1ccf0 * 0x10;
    lVar3 = 0;
    iVar4 = 0;
    do {
      iVar4 = (iVar4 + 1) - (uint)(*(longlong *)(DAT_14cb1cce8 + lVar3) == 0);
      lVar3 = lVar3 + 0x10;
    } while (lVar5 != lVar3);
    if (iVar4 != 0) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(lVar2 + lVar3);
        if ((lVar1 != 0) && (*(char *)(lVar1 + 0x1c) == '\x01')) {
          FUN_14009fd82(DAT_14c82b500,lVar1 + 0x20,0xff);
        }
        lVar3 = lVar3 + 0x10;
      } while (lVar5 != lVar3);
      FUN_140d4abe5(DAT_14cb1cce8,DAT_14cb1ccf0);
      DAT_14cb1ccf0 = 0;
      if (DAT_14cb1ccf4 != 0) {
        FUN_147e450da(&DAT_14cb1cce8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d4b26b FUN_140d4b26b body=47 status=ok
// SIG undefined FUN_140d4b26b(void)

void FUN_140d4b26b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d4b29a FUN_140d4b29a body=58 status=ok
// SIG undefined FUN_140d4b29a(void)

void FUN_140d4b29a(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1406a922a(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140d4b2d4 FUN_140d4b2d4 body=9 status=ok
// SIG undefined FUN_140d4b2d4(void)

void FUN_140d4b2d4(longlong param_1)

{
  FUN_1403835d2(param_1 + 0x10);
  return;
}



// FUNCTION 140d4b2dd FUN_140d4b2dd body=40 status=ok
// SIG undefined FUN_140d4b2dd(void)

void FUN_140d4b2dd(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1401f8392(param_1);
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 140d4b306 FUN_140d4b306 body=476 status=ok
// SIG undefined FUN_140d4b306(void)

void FUN_140d4b306(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
  }
  plVar7 = local_60;
  iVar16 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar10 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x20);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar10 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_140d4b449;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_140d4b449:
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4b4e4 FUN_140d4b4e4 body=23 status=ok
// SIG undefined FUN_140d4b4e4(void)

void FUN_140d4b4e4(longlong param_1)

{
  *(undefined ***)(param_1 + 0x200) = &PTR_FUN_14ab67d10;
  *(undefined ***)(param_1 + 0x50) = &PTR_FUN_14ab67d10;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 140d4b50a FUN_140d4b50a body=64 status=ok
// SIG undefined FUN_140d4b50a(void)

undefined8 * FUN_140d4b50a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2d4780;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 140d4b558 FUN_140d4b558 body=70 status=ok
// SIG undefined FUN_140d4b558(void)

undefined8 * FUN_140d4b558(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b08b900;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d4b59e FUN_140d4b59e body=1833 status=ok
// SIG undefined FUN_140d4b59e(void)

ulonglong * FUN_140d4b59e(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte bVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong *puVar23;
  bool bVar24;
  undefined1 auStack_a8 [32];
  ulonglong *local_88;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = param_1 + 0xaf;
  if ((int)param_1[0xb0] != *(int *)((longlong)param_1 + 0x5ac)) {
    uVar8 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    plVar13 = param_1 + 0xb6;
    if ((longlong *)param_1[0xb7] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[0xb7];
    }
    iVar17 = *(int *)((longlong)plVar13 +
                     (ulonglong)((int)param_1[0xb8] - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar17 != -1) {
      do {
        puVar20 = (ulonglong *)(*plVar3 + (longlong)iVar17 * 0x28);
        if (*puVar20 == param_3) {
          if (puVar20 != (ulonglong *)0x0) {
            if (((((*(int *)((longlong)puVar20 + 0x1c) != 0) &&
                  (uVar8 = (uint)puVar20[3], -1 < (int)uVar8)) && ((int)uVar8 < DAT_14c9647dc)) &&
                ((lVar22 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8),
                 lVar22 != 0 && (*(int *)(lVar22 + 0x10) == *(int *)((longlong)puVar20 + 0x1c)))))
               && ((*(uint *)(lVar22 + 8) & 0x10200000) == 0)) {
              puVar20 = puVar20 + 1;
              puVar23 = param_2;
              goto LAB_140d4b927;
            }
            FUN_1457a0228(plVar3,param_3);
          }
          break;
        }
        iVar17 = (int)puVar20[4];
      } while (iVar17 != -1);
    }
  }
  local_88 = param_2;
  FUN_140b97432(param_1,&local_58,*(undefined8 *)(param_3 + 0x10));
  plVar13 = local_50;
  uVar14 = local_58;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  uVar9 = (**(code **)(*param_1 + 0x4a8))(param_1);
  FUN_140d4bccc(uVar14,&local_58,param_3,uVar9);
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  local_60 = plVar13;
  if (param_3 == 0) {
    uVar8 = 0;
    uVar14 = 0;
  }
  else {
    uVar8 = *(uint *)(param_3 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar22 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar22 = 0;
    }
    uVar14 = (ulonglong)*(uint *)(lVar22 + 0x10);
    if (*(uint *)(lVar22 + 0x10) == 0) {
      LOCK();
      iVar17 = DAT_14c964868 + 1;
      UNLOCK();
      uVar21 = DAT_14c964868 + 1;
      bVar24 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar17;
      if (bVar24) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      uVar12 = *(uint *)(lVar22 + 0x10);
      bVar24 = uVar12 == 0;
      if (bVar24) {
        *(uint *)(lVar22 + 0x10) = uVar21;
        uVar12 = 0;
      }
      UNLOCK();
      if (bVar24) {
        uVar12 = uVar21;
      }
      uVar14 = (ulonglong)uVar12;
    }
  }
  uVar15 = (ulonglong)uVar8;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_50 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if (*(int *)((longlong)param_1 + 0x5ac) == 0) {
    iVar17 = (int)param_1[0xb0];
    *(int *)(param_1 + 0xb0) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0x584) == iVar17) {
      FUN_140549c28(plVar3,iVar17);
    }
    uVar8 = *(uint *)(param_1 + 0xb4);
    uVar19 = (ulonglong)uVar8;
    if (uVar8 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = uVar8 + 0x1e;
      if (-1 < (int)(uVar8 - 1)) {
        iVar11 = uVar8 - 1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar13 = param_1 + 0xb1;
    iVar10 = uVar8 + 1;
    uVar21 = uVar8 + 0x1f;
    if (-1 < (int)uVar8) {
      uVar21 = uVar8;
    }
    if ((int)uVar21 >> 5 == iVar11) {
      *(int *)(param_1 + 0xb4) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x5a4) <= (int)uVar8) {
        local_70 = local_58;
        local_80 = uVar19;
        local_78 = plVar13;
        local_68 = uVar15;
        if (uVar8 + 0x20 < 0xa0) {
          iVar11 = 0x80;
        }
        else {
          uVar8 = uVar8 + 0x20 >> 5;
          if (*(int *)((longlong)param_1 + 0x5a4) + 0x1fU < 0xa0) {
            uVar12 = 4;
            if (4 < uVar8) {
              uVar12 = uVar8;
            }
          }
          else {
            uVar12 = (uVar8 * 3 >> 3) + uVar8 + 0x10;
          }
          uVar15 = FUN_144a3809e(uVar12 << 2,0);
          iVar10 = (int)(uVar15 >> 2);
          iVar11 = -0x20;
          if ((int)uVar8 <= iVar10) {
            iVar11 = iVar10 << 5;
          }
          uVar19 = (ulonglong)*(uint *)(param_1 + 0xb4);
        }
        plVar13 = local_78;
        *(int *)((longlong)param_1 + 0x5a4) = iVar11;
        FUN_1446efbd8(local_78,uVar19);
        iVar10 = (int)param_1[0xb4] + 1;
        uVar19 = local_80;
        local_58 = local_70;
        uVar15 = local_68;
      }
      iVar11 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar11 = iVar10;
      }
      *(int *)(param_1 + 0xb4) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar18 = (longlong *)param_1[0xb3];
        if ((longlong *)param_1[0xb3] == (longlong *)0x0) {
          plVar18 = plVar13;
        }
        bVar16 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar18 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar11 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar22 = (longlong)iVar17;
    if ((longlong *)param_1[0xb3] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[0xb3];
    }
    bVar16 = (byte)uVar19 & 0x1f;
    puVar4 = (uint *)((longlong)plVar13 + (longlong)((int)uVar21 >> 5) * 4);
    *puVar4 = *puVar4 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar17 = (int)param_1[0xb5];
    lVar22 = (longlong)iVar17;
    iVar11 = *(int *)(param_1[0xaf] + 4 + lVar22 * 0x28);
    *(int *)(param_1 + 0xb5) = iVar11;
    iVar10 = *(int *)((longlong)param_1 + 0x5ac) + -1;
    *(int *)((longlong)param_1 + 0x5ac) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(param_1[0xaf] + (longlong)iVar11 * 0x28) = 0xffffffff;
    }
  }
  plVar13 = param_1 + 0xb1;
  if ((longlong *)param_1[0xb3] != (longlong *)0x0) {
    plVar13 = (longlong *)param_1[0xb3];
  }
  iVar11 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar11 = iVar17;
  }
  puVar4 = (uint *)((longlong)plVar13 + (longlong)(iVar11 >> 5) * 4);
  *puVar4 = *puVar4 | 1 << ((byte)iVar17 & 0x1f);
  iVar11 = 1;
  puVar20 = (ulonglong *)(param_1[0xaf] + lVar22 * 0x28);
  *puVar20 = param_3;
  puVar20[1] = local_58;
  puVar20[2] = (ulonglong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
    param_3 = *puVar20;
  }
  puVar20[3] = uVar14 << 0x20 | uVar15;
  *(undefined4 *)(puVar20 + 4) = 0xffffffff;
  uVar8 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  uVar21 = (int)param_1[0xb0] - *(int *)((longlong)param_1 + 0x5ac);
  if (uVar21 != 1) {
    if ((int)param_1[0xb0] != *(int *)((longlong)param_1 + 0x5ac)) {
      plVar13 = param_1 + 0xb6;
      if ((longlong *)param_1[0xb7] != (longlong *)0x0) {
        plVar13 = (longlong *)param_1[0xb7];
      }
      iVar10 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[0xb8] - 1U & uVar8) * 4);
      if (iVar10 != -1) {
        do {
          puVar23 = (ulonglong *)(*plVar3 + (longlong)iVar10 * 0x28);
          if (*puVar23 == param_3) {
            plVar13 = (longlong *)puVar23[2];
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              plVar18 = plVar13 + 1;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)*plVar18 == 0) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                }
              }
            }
            uVar14 = *puVar20;
            uVar9 = *(undefined4 *)((longlong)puVar20 + 4);
            uVar15 = puVar20[1];
            uVar5 = *(undefined4 *)((longlong)puVar20 + 0xc);
            uVar6 = *(undefined4 *)((longlong)puVar20 + 0x14);
            uVar19 = puVar20[3];
            uVar7 = *(undefined4 *)((longlong)puVar20 + 0x1c);
            *(int *)(puVar23 + 2) = (int)puVar20[2];
            *(undefined4 *)((longlong)puVar23 + 0x14) = uVar6;
            *(int *)(puVar23 + 3) = (int)uVar19;
            *(undefined4 *)((longlong)puVar23 + 0x1c) = uVar7;
            *(int *)puVar23 = (int)uVar14;
            *(undefined4 *)((longlong)puVar23 + 4) = uVar9;
            *(int *)(puVar23 + 1) = (int)uVar15;
            *(undefined4 *)((longlong)puVar23 + 0xc) = uVar5;
            FUN_14048ca64(plVar3,iVar17);
            iVar17 = iVar10;
            goto LAB_140d4b8e7;
          }
          iVar10 = (int)puVar23[4];
        } while (iVar10 != -1);
      }
    }
    if (3 < uVar21) {
      uVar14 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
      lVar22 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar22 & 0x1f);
    }
  }
  if (((int)uVar21 < 1) || (iVar11 <= (int)param_1[0xb8])) {
    uVar8 = (int)param_1[0xb8] - 1U & uVar8;
    *(uint *)((longlong)puVar20 + 0x24) = uVar8;
    plVar13 = (longlong *)param_1[0xb7];
    if ((longlong *)param_1[0xb7] == (longlong *)0x0) {
      plVar13 = param_1 + 0xb6;
    }
    *(undefined4 *)(puVar20 + 4) =
         *(undefined4 *)
          ((longlong)plVar13 + ((longlong)(int)param_1[0xb8] - 1U & (longlong)(int)uVar8) * 4);
    plVar13 = (longlong *)param_1[0xb7];
    if ((longlong *)param_1[0xb7] == (longlong *)0x0) {
      plVar13 = param_1 + 0xb6;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[0xb8] - 1U & (longlong)(int)uVar8) * 4) =
         iVar17;
  }
  else {
    *(int *)(param_1 + 0xb8) = iVar11;
    FUN_140d4be48(plVar3);
  }
LAB_140d4b8e7:
  lVar22 = *plVar3;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar1 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar3 = local_60;
  puVar20 = (ulonglong *)(lVar22 + (longlong)iVar17 * 0x28 + 8);
  puVar23 = local_88;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_60 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      puVar23 = local_88;
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        puVar23 = local_88;
      }
    }
  }
LAB_140d4b927:
  *puVar23 = *puVar20;
  uVar14 = puVar20[1];
  puVar23[1] = uVar14;
  if (uVar14 != 0) {
    LOCK();
    *(int *)(uVar14 + 8) = *(int *)(uVar14 + 8) + 1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar23;
}



// FUNCTION 140d4bccc FUN_140d4bccc body=377 status=ok
// SIG undefined FUN_140d4bccc(void)

undefined8 * FUN_140d4bccc(longlong param_1,undefined8 *param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((param_4 & 1) == 0) && (lVar8 = *(longlong *)(param_1 + 0x58), lVar8 != 0)) &&
     (*(short *)(lVar8 + 0x20) != 0)) {
    puVar7 = (undefined4 *)FUN_14001cc68(0x18,0x10);
    uVar3 = *(undefined2 *)(lVar8 + 0x20);
    *puVar7 = 0;
    *(undefined8 *)(puVar7 + 2) = 0;
    *(undefined8 *)(puVar7 + 4) = 0;
    FUN_140fb5e58(puVar7 + 2,uVar3,1);
  }
  else {
    puVar7 = (undefined4 *)0x0;
  }
  lVar8 = FUN_144938c96(param_3);
  if (lVar8 == 0) {
    lVar8 = param_3;
  }
  puVar9 = (undefined8 *)FUN_14001cc68(0x888);
  local_40 = *(longlong **)(param_1 + 0x18);
  if (local_40 == (longlong *)0x0) {
    local_40 = (longlong *)0x0;
    local_48 = 0;
  }
  else {
    iVar6 = (int)local_40[1];
    local_48 = 0;
    do {
      if (iVar6 == 0) {
        local_40 = (longlong *)0x0;
        goto LAB_140d4bd8c;
      }
      LOCK();
      iVar5 = (int)local_40[1];
      bVar11 = iVar6 == iVar5;
      if (bVar11) {
        *(int *)(local_40 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar11);
    local_48 = *(undefined8 *)(param_1 + 0x10);
  }
LAB_140d4bd8c:
  *puVar9 = 0;
  local_58 = puVar7;
  FUN_140a1a4bc(puVar9 + 1,&local_48,lVar8,param_3);
  *param_2 = puVar9;
  puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  plVar4 = local_40;
  puVar10[1] = &DAT_100000001;
  *puVar10 = &PTR_FUN_14aa6e9c0;
  puVar10[2] = puVar9;
  param_2[1] = puVar10;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140d4be48 FUN_140d4be48 body=591 status=ok
// SIG undefined FUN_140d4be48(void)

void FUN_140d4be48(longlong *param_1)

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
        uVar13 = *(ulonglong *)(lVar11 + lVar10 * 0x28);
        uVar3 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
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
            if (iVar2 - lVar11 == lVar10) goto LAB_140d4c04e;
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
LAB_140d4c04e:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4c098 FUN_140d4c098 body=2080 status=ok
// SIG undefined FUN_140d4c098(void)

void FUN_140d4c098(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint *puVar10;
  undefined8 ****ppppuVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_248 [32];
  uint *local_228;
  int local_21c;
  undefined8 *local_218;
  undefined8 *local_210;
  longlong *local_208;
  longlong local_200;
  longlong *local_1f8;
  undefined8 ***local_1f0;
  undefined1 local_1e8;
  undefined4 local_1e4;
  ushort local_1d8;
  byte local_1d0;
  undefined8 local_1c8 [24];
  undefined8 *local_108;
  undefined8 local_100;
  uint local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (param_2 != 0 && (param_3 & 2) != 0) {
    uVar6 = FUN_140840456();
    plVar7 = (longlong *)FUN_144718840(param_2,uVar6);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_200);
      if (local_200 != 0) {
        local_108 = (undefined8 *)0x0;
        local_100 = 0x1800000000;
        uVar8 = 0;
        FUN_14024dbd6(param_2,local_1c8,0);
        lVar3 = local_200;
        uVar6 = FUN_1407cacae();
        lVar9 = *(longlong *)(lVar3 + 0x200);
        if (lVar9 != 0) {
          uVar8 = FUN_1403f69f4(lVar9,uVar6,0);
        }
        FUN_140d4c8ba(lVar3,&local_1f0,uVar8);
        if (local_1d0 == 3) {
          uVar14 = (uint)local_1f0;
          bVar4 = 3;
        }
        else {
          puVar10 = &local_f8;
          FUN_1400b56fe(puVar10,&local_1f0,3);
          uVar14 = 0;
          if ((byte)uStack_d8 != 0) {
            uVar14 = local_f8;
          }
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)uStack_d8 * 0x120))
          ;
          if (pcVar2 != (code *)0x0) {
            if (0x18 < (ushort)local_e0) {
              puVar10 = (uint *)CONCAT44(uStack_f4,local_f8);
            }
            (*pcVar2)(puVar10);
          }
          bVar4 = local_1d0;
          if (0x18 < (ushort)local_e0) {
            FUN_1400020a8(CONCAT44(uStack_f4,local_f8));
            bVar4 = local_1d0;
          }
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
        if (pcVar2 != (code *)0x0) {
          ppppuVar11 = &local_1f0;
          if (0x18 < local_1d8) {
            ppppuVar11 = (undefined8 ****)local_1f0;
          }
          (*pcVar2)(ppppuVar11);
        }
        if (0x18 < local_1d8) {
          FUN_1400020a8(local_1f0);
        }
        lVar3 = local_200;
        uVar6 = FUN_1407cacae();
        lVar9 = *(longlong *)(lVar3 + 0x200);
        if (lVar9 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_1403f69f4(lVar9,uVar6,1);
        }
        FUN_140d4c8ba(lVar3,&local_1f0,uVar6);
        if (local_1d0 == 3) {
          uVar15 = (uint)local_1f0;
          bVar4 = 3;
        }
        else {
          puVar10 = &local_f8;
          FUN_1400b56fe(puVar10,&local_1f0,3);
          uVar15 = 0;
          if ((byte)uStack_d8 != 0) {
            uVar15 = local_f8;
          }
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)uStack_d8 * 0x120))
          ;
          if (pcVar2 != (code *)0x0) {
            if (0x18 < (ushort)local_e0) {
              puVar10 = (uint *)CONCAT44(uStack_f4,local_f8);
            }
            (*pcVar2)(puVar10);
          }
          bVar4 = local_1d0;
          if (0x18 < (ushort)local_e0) {
            FUN_1400020a8(CONCAT44(uStack_f4,local_f8));
            bVar4 = local_1d0;
          }
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar4 * 0x120));
        if (pcVar2 != (code *)0x0) {
          ppppuVar11 = &local_1f0;
          if (0x18 < local_1d8) {
            ppppuVar11 = (undefined8 ****)local_1f0;
          }
          (*pcVar2)(ppppuVar11);
        }
        if (0x18 < local_1d8) {
          FUN_1400020a8(local_1f0);
        }
        lVar3 = local_200;
        uVar6 = FUN_1407cacae();
        lVar9 = *(longlong *)(lVar3 + 0x200);
        if (lVar9 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_1403f69f4(lVar9,uVar6,2);
        }
        FUN_140d4c8ba(lVar3,&local_1f0,uVar6);
        if (local_1d0 == 3) {
          uVar17 = 3;
          uVar16 = (uint)local_1f0;
        }
        else {
          puVar10 = &local_f8;
          FUN_1400b56fe(puVar10,&local_1f0,3);
          uVar16 = 0;
          if ((byte)uStack_d8 != 0) {
            uVar16 = local_f8;
          }
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)uStack_d8 * 0x120))
          ;
          if (pcVar2 != (code *)0x0) {
            if (0x18 < (ushort)local_e0) {
              puVar10 = (uint *)CONCAT44(uStack_f4,local_f8);
            }
            (*pcVar2)(puVar10);
          }
          if (0x18 < (ushort)local_e0) {
            FUN_1400020a8(CONCAT44(uStack_f4,local_f8));
          }
          uVar17 = (uint)local_1d0;
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar17 * 0x120));
        if (pcVar2 != (code *)0x0) {
          ppppuVar11 = &local_1f0;
          if (0x18 < local_1d8) {
            ppppuVar11 = (undefined8 ****)local_1f0;
          }
          (*pcVar2)(ppppuVar11);
        }
        if (0x18 < local_1d8) {
          FUN_1400020a8(local_1f0);
        }
        uVar6 = FUN_1407cacae();
        if (*(longlong *)(local_200 + 0x200) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_1403f69f4(*(longlong *)(local_200 + 0x200),uVar6,3);
        }
        FUN_140d4c8ba(local_200,&local_1f0,uVar6);
        if (local_1d0 == 3) {
          uVar5 = 3;
          uVar17 = (uint)local_1f0;
        }
        else {
          puVar10 = &local_f8;
          FUN_1400b56fe(puVar10,&local_1f0,3);
          uVar17 = 0;
          if ((byte)uStack_d8 != 0) {
            uVar17 = local_f8;
          }
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)uStack_d8 * 0x120))
          ;
          if (pcVar2 != (code *)0x0) {
            if (0x18 < (ushort)local_e0) {
              puVar10 = (uint *)CONCAT44(uStack_f4,local_f8);
            }
            (*pcVar2)(puVar10);
          }
          if (0x18 < (ushort)local_e0) {
            FUN_1400020a8(CONCAT44(uStack_f4,local_f8));
          }
          uVar5 = (uint)local_1d0;
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
        if (pcVar2 != (code *)0x0) {
          ppppuVar11 = &local_1f0;
          if (0x18 < local_1d8) {
            ppppuVar11 = (undefined8 ****)local_1f0;
          }
          (*pcVar2)(ppppuVar11);
        }
        if (0x18 < local_1d8) {
          FUN_1400020a8(local_1f0);
        }
        puVar13 = local_1c8;
        if (local_108 != (undefined8 *)0x0) {
          puVar13 = local_108;
        }
        if ((longlong)(int)local_100 != 0) {
          local_218 = puVar13 + (int)local_100;
          do {
            local_208 = (longlong *)*puVar13;
            local_210 = puVar13;
            local_21c = (**(code **)(*local_208 + 0x7b0))();
            if (0 < local_21c) {
              iVar12 = 0;
              do {
                lVar9 = (**(code **)(*local_208 + 0x678))(local_208,iVar12,0,0);
                if (lVar9 != 0) {
                  local_1f0 = DAT_14cbe7610;
                  local_1e8 = 2;
                  local_1e4 = 0xffffffff;
                  local_f8 = local_f8 & 0xffffff00;
                  local_b0 = 0;
                  uStack_a8 = 0;
                  local_c0 = 0;
                  uStack_b8 = 0;
                  local_d0 = 0;
                  uStack_c8 = 0;
                  local_e0 = 0;
                  uStack_d8 = 0;
                  local_f0 = 0;
                  uStack_e8 = 0;
                  local_228 = &local_f8;
                  FUN_140042bb4(lVar9,&local_1f0,uVar14);
                  local_1f0 = DAT_14cbe7618;
                  local_1e8 = 2;
                  local_1e4 = 0xffffffff;
                  local_f8 = local_f8 & 0xffffff00;
                  local_b0 = 0;
                  uStack_a8 = 0;
                  local_c0 = 0;
                  uStack_b8 = 0;
                  local_d0 = 0;
                  uStack_c8 = 0;
                  local_e0 = 0;
                  uStack_d8 = 0;
                  local_f0 = 0;
                  uStack_e8 = 0;
                  local_228 = &local_f8;
                  FUN_140042bb4(lVar9,&local_1f0,uVar15);
                  local_1f0 = DAT_14cbe7620;
                  local_1e8 = 2;
                  local_1e4 = 0xffffffff;
                  local_f8 = local_f8 & 0xffffff00;
                  local_b0 = 0;
                  uStack_a8 = 0;
                  local_c0 = 0;
                  uStack_b8 = 0;
                  local_d0 = 0;
                  uStack_c8 = 0;
                  local_e0 = 0;
                  uStack_d8 = 0;
                  local_f0 = 0;
                  uStack_e8 = 0;
                  local_228 = &local_f8;
                  FUN_140042bb4(lVar9,&local_1f0,uVar16);
                  local_1f0 = DAT_14cbe7628;
                  local_1e8 = 2;
                  local_1e4 = 0xffffffff;
                  local_f8 = local_f8 & 0xffffff00;
                  local_b0 = 0;
                  uStack_a8 = 0;
                  local_c0 = 0;
                  uStack_b8 = 0;
                  local_d0 = 0;
                  uStack_c8 = 0;
                  local_e0 = 0;
                  uStack_d8 = 0;
                  local_f0 = 0;
                  uStack_e8 = 0;
                  local_228 = &local_f8;
                  FUN_140042bb4(lVar9,&local_1f0,uVar17);
                }
                iVar12 = iVar12 + 1;
              } while (local_21c != iVar12);
            }
            puVar13 = local_210 + 1;
          } while (puVar13 != local_218);
        }
        if (local_108 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_1f8 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_1f8 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_1f8)(local_1f8);
          LOCK();
          piVar1 = (int *)((longlong)local_1f8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_1f8 + 0x10))(local_1f8);
          }
        }
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d4c8ba FUN_140d4c8ba body=138 status=ok
// SIG undefined FUN_140d4c8ba(void)

void FUN_140d4c8ba(longlong param_1,float *param_2,longlong param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x108);
    lVar4 = (longlong)*(int *)(param_1 + 0x110) * 0x18;
    do {
      if (*plVar3 == param_3) {
        if (plVar3 != (longlong *)0x0) {
          fVar5 = *(float *)((longlong)plVar3 + 0xc);
          auVar6 = ZEXT416((uint)fVar5);
          cVar1 = *(char *)((longlong)plVar3 + 0x14);
          if (cVar1 == '\x03') {
            auVar6 = roundps(auVar6,ZEXT416((uint)fVar5),2);
            fVar5 = auVar6._0_4_;
          }
          else {
            if (cVar1 != '\x02') {
              if (cVar1 != '\x01') goto LAB_140d4c90e;
              auVar6 = ZEXT416((uint)(fVar5 + 0.5));
            }
            auVar6 = roundps(auVar6,ZEXT416(auVar6._0_4_),1);
            fVar5 = auVar6._0_4_;
          }
LAB_140d4c90e:
          *(undefined2 *)(param_2 + 6) = 4;
          *param_2 = fVar5;
          uVar2 = 3;
          goto LAB_140d4c91a;
        }
        break;
      }
      plVar3 = plVar3 + 3;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
  }
  *(undefined2 *)(param_2 + 6) = 0;
  uVar2 = 0;
LAB_140d4c91a:
  *(undefined1 *)(param_2 + 8) = uVar2;
  return;
}



// FUNCTION 140d4c954 FUN_140d4c954 body=44 status=ok
// SIG undefined FUN_140d4c954(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d4c954(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb6fe24 = _DAT_14cb6fe24 + -1;
  *param_1 = DAT_14cb6fe18;
  DAT_14cb6fe18 = param_1;
  return;
}



// FUNCTION 140d4c980 FUN_140d4c980 body=23 status=ok
// SIG undefined FUN_140d4c980(void)

undefined8 FUN_140d4c980(undefined8 param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined2 *)0x0) {
    uVar1 = FUN_140d4c998(param_1,*param_2,param_2 + 4);
    return uVar1;
  }
  return 0;
}



// FUNCTION 140d4c998 FUN_140d4c998 body=498 status=ok
// SIG undefined FUN_140d4c998(void)

bool FUN_140d4c998(longlong param_1,short param_2,longlong param_3)

{
  char cVar1;
  size_t sVar2;
  ulonglong uVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ushort uVar11;
  char *_Str;
  char *pcVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_58 [38];
  ushort local_32;
  char *local_30;
  int local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 < 1) && (bVar14 = true, *(longlong *)(param_3 + 0x10) == 0)) goto LAB_140d4caf2;
  local_32 = 0;
  cVar1 = FUN_140bddb30(param_1,&local_32,0);
  uVar11 = local_32;
  if (param_2 < 1) {
    if (*(longlong *)(param_3 + 0x10) != 0) {
      if (cVar1 != '\0') {
        FUN_14136d53e();
        bVar14 = false;
        uVar11 = uVar11 - DAT_14cb8a718;
        if (((short)uVar11 < 0) || (DAT_14cb8a728 <= (short)uVar11)) goto LAB_140d4caf2;
        param_1 = *(longlong *)(DAT_14cb8a720 + (ulonglong)uVar11 * 8);
        if (param_1 == 0) goto LAB_140d4caf0;
      }
      iVar6 = FUN_1470ab644(param_1 + 8,param_3);
      bVar14 = iVar6 == 0;
      goto LAB_140d4caf2;
    }
  }
  else {
    if (cVar1 != '\0') {
      bVar14 = (uint)local_32 == (int)param_2;
      goto LAB_140d4caf2;
    }
    _Str = (char *)(param_1 + 8);
    if (0xf < *(ulonglong *)(param_1 + 0x20)) {
      _Str = *(char **)_Str;
    }
    if (_Str == (char *)0x0) {
LAB_140d4cb11:
      uVar3 = 0;
      uVar8 = 0;
    }
    else {
      sVar2 = strlen(_Str);
      iVar6 = (int)sVar2;
      if (iVar6 == 0) goto LAB_140d4cb11;
      lVar7 = (longlong)iVar6;
      pcVar12 = _Str + lVar7 + -1;
      uVar5 = 0;
      if (pcVar12 < _Str) {
        lVar10 = 0;
      }
      else {
        do {
          if (9 < (byte)(*pcVar12 - 0x30U)) break;
          uVar5 = uVar5 + 1;
          pcVar12 = pcVar12 + -1;
        } while (_Str <= pcVar12);
        lVar10 = 0;
        if ((((uVar5 != 0) && ((int)uVar5 < iVar6)) && (lVar10 = 0, uVar5 < 0xb)) &&
           (lVar13 = -(ulonglong)uVar5, _Str[lVar13 + lVar7 + -1] == '_')) {
          if ((uVar5 == 1) || (_Str[lVar13 + lVar7] != '0')) {
            lVar9 = 0;
            do {
              lVar10 = (longlong)_Str[lVar13 + lVar7] + lVar9 * 10;
              lVar9 = lVar10 + -0x30;
              lVar13 = lVar13 + 1;
            } while (lVar13 != 0);
            if (lVar9 < 0x7fffffff) {
              iVar6 = ~uVar5 + iVar6;
              lVar10 = lVar10 + -0x2f;
              goto LAB_140d4cab0;
            }
          }
          lVar10 = 0;
        }
LAB_140d4cab0:
        if (iVar6 == 0) goto LAB_140d4cb11;
      }
      local_24 = 0;
      local_30 = _Str;
      local_28 = iVar6;
      uVar5 = FUN_14001a6c0(&local_30,1);
      uVar8 = lVar10 << 0x20;
      uVar3 = (ulonglong)uVar5;
    }
    local_30 = (char *)(uVar3 | uVar8);
    psVar4 = (short *)FUN_14136d482();
    if (psVar4 != (short *)0x0) {
      bVar14 = *psVar4 == param_2;
      goto LAB_140d4caf2;
    }
  }
LAB_140d4caf0:
  bVar14 = false;
LAB_140d4caf2:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4cb8c FUN_140d4cb8c body=55 status=ok
// SIG undefined FUN_140d4cb8c(void)

void FUN_140d4cb8c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 2;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 5) = 2;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x58) != 0)) {
    *param_2 = *(longlong *)(lVar1 + 0x58);
    param_2[1] = lVar1;
    param_2[4] = *(longlong *)(lVar1 + 0x48);
  }
  return;
}



// FUNCTION 140d4cbc4 FUN_140d4cbc4 body=95 status=ok
// SIG undefined FUN_140d4cbc4(void)

longlong * FUN_140d4cbc4(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 2;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 2;
  if (param_2 != 0) {
    FUN_140d4cc24(param_2,1);
    *param_1 = param_2;
    lVar1 = *(longlong *)(param_2 + 0x68);
    param_1[1] = lVar1;
    param_1[3] = 0;
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0x48);
    }
    param_1[4] = lVar1;
    *(undefined1 *)(param_1 + 2) = 2;
  }
  return param_1;
}



// FUNCTION 140d4cc24 FUN_140d4cc24 body=181 status=ok
// SIG undefined FUN_140d4cc24(void)

ulonglong FUN_140d4cc24(longlong param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  if (*(char *)(param_1 + 0x109) == '\x01') {
    if (*(longlong *)(param_1 + 0x68) == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = FUN_1408c4746(*(longlong *)(param_1 + 0x68),0);
      if (*(longlong *)(param_1 + 0x68) != 0) {
        bVar1 = FUN_14066b0be();
        uVar2 = CONCAT31((int3)(uVar2 >> 8),(byte)uVar2 | bVar1);
      }
      uVar4 = (ulonglong)uVar2;
      if ((param_2 & (byte)uVar2) == 1) {
        *(undefined1 *)(param_1 + 0x108) = 0;
        *(undefined4 *)(param_1 + 0xe0) = 0;
        if (0x80 < *(uint *)(param_1 + 0xe4)) {
          *(undefined4 *)(param_1 + 0xe4) = 0x80;
          FUN_1446efbd8(param_1 + 200,0);
        }
        puVar3 = (undefined8 *)(param_1 + 0xe8);
        if (0xf < *(ulonglong *)(param_1 + 0x100)) {
          puVar3 = (undefined8 *)*puVar3;
        }
        *(undefined8 *)(param_1 + 0xf8) = 0;
        *(undefined1 *)puVar3 = 0;
        uVar4 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
      }
    }
    *(undefined1 *)(param_1 + 0x109) = 0;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 140d4ccda FUN_140d4ccda body=165 status=ok
// SIG undefined FUN_140d4ccda(void)

undefined8 FUN_140d4ccda(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(*param_2 + 0x40);
  dStack_60 = (double)*(float *)(lVar1 + 0x4c);
  local_68 = (double)*(float *)(lVar1 + 0x48);
  dStack_70 = (double)*(float *)(lVar1 + 0x44);
  local_78 = (double)*(float *)(lVar1 + 0x40);
  local_58 = *(undefined8 *)(lVar1 + 0x20);
  uStack_50 = *(undefined8 *)(lVar1 + 0x28);
  local_48 = *(undefined8 *)(lVar1 + 0x30);
  uStack_40 = 0;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0x3ff0000000000000;
  local_28 = 0x3ff0000000000000;
  uStack_20 = 0;
  FUN_140d4cd80();
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4cd80 FUN_140d4cd80 body=219 status=ok
// SIG undefined FUN_140d4cd80(void)

undefined8 * FUN_140d4cd80(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8 [12];
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = *(longlong **)(*(longlong *)(*param_2 + 0x40) + 0x50);
  if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)plVar1 + 0x1a) == '\x01')) {
    (**(code **)(*plVar1 + 0x80))(plVar1,local_58);
    puVar3 = local_b8;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_1400c6592(local_58,&local_e8);
    param_1[2] = local_d8;
    *param_1 = local_e8;
    param_1[1] = uStack_e0;
    *(undefined4 *)(param_1 + 3) = local_d0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_cc;
    *(undefined4 *)(param_1 + 4) = uStack_c8;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_c4;
    param_1[5] = local_c0;
    *(undefined1 *)(param_1 + 6) = 1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_108);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140d4ce5c FUN_140d4ce5c body=83 status=ok
// SIG undefined FUN_140d4ce5c(void)

bool FUN_140d4ce5c(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x30))();
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  iVar3 = (**(code **)(*param_1 + 0x30))(param_1);
  if (iVar3 != iVar1) {
    FUN_1406753a0(param_1,1,iVar1);
  }
  return iVar2 != iVar1;
}



// FUNCTION 140d4cece FUN_140d4cece body=827 status=ok
// SIG undefined FUN_140d4cece(void)

undefined8 FUN_140d4cece(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *param_2 = *param_3;
    param_2[1] = uVar4;
    param_2[2] = uVar5;
    param_2[3] = uVar6;
    if (param_2 == param_3) {
      *(undefined1 *)(param_2 + 0x249) = *(undefined1 *)(param_3 + 0x249);
      param_2[0x248] = param_3[0x248];
      FUN_140311eb6(param_2 + 0x24a,param_3 + 0x24a);
    }
    else {
      puVar1 = param_2 + 4;
      puVar8 = *(undefined4 **)(param_2 + 0x244);
      if (*(undefined4 **)(param_2 + 0x244) == (undefined4 *)0x0) {
        puVar8 = puVar1;
      }
      FUN_140cfa737(puVar8,param_2[0x246]);
      iVar2 = param_3[0x246];
      puVar8 = *(undefined4 **)(param_3 + 0x244);
      param_2[0x246] = iVar2;
      if (iVar2 == 0 && param_2[0x247] == 0) {
        param_2[0x247] = 0x20;
      }
      else {
        puVar10 = param_3 + 4;
        if (puVar8 != (undefined4 *)0x0) {
          puVar10 = puVar8;
        }
        FUN_140d4d240(puVar1,iVar2);
        puVar8 = *(undefined4 **)(param_2 + 0x244);
        if (*(undefined4 **)(param_2 + 0x244) == (undefined4 *)0x0) {
          puVar8 = puVar1;
        }
        FUN_140d4d20a(puVar8,puVar10,iVar2);
      }
      *(undefined1 *)(param_2 + 0x249) = *(undefined1 *)(param_3 + 0x249);
      param_2[0x248] = param_3[0x248];
      FUN_140311eb6(param_2 + 0x24a,param_3 + 0x24a);
      local_78 = 0;
      uStack_70 = 0;
      iVar2 = param_3[0x250];
      if ((longlong)iVar2 != 0) {
        local_90 = *(longlong *)(param_3 + 0x24e);
        lVar12 = 0;
        do {
          if ((*(int *)(local_90 + 8 + lVar12) != 0) &&
             (*(longlong **)(local_90 + lVar12) != (longlong *)0x0)) {
            local_88 = 0;
            local_80 = 0;
            (**(code **)(**(longlong **)(local_90 + lVar12) + 0x40))();
            lVar11 = (longlong)(int)uStack_70;
            uVar7 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
            if (uStack_70._4_4_ < uVar7) {
              FUN_1447a71f6(&local_78);
            }
            lVar11 = lVar11 * 0x10;
            *(undefined8 *)(local_78 + lVar11) = 0;
            *(undefined4 *)(local_78 + 8 + lVar11) = 0;
            *(undefined8 *)(local_78 + lVar11) = local_88;
            local_88 = 0;
            *(undefined4 *)(local_78 + 8 + lVar11) = local_80;
            local_80 = 0;
            FUN_1449db362(&local_88);
          }
          lVar12 = lVar12 + 0x10;
        } while ((longlong)iVar2 * 0x10 != lVar12);
      }
      FUN_1448a8284(param_2 + 0x24e);
      if (&local_78 == (longlong *)(param_2 + 0x24e)) {
        uVar9 = uStack_70 & 0xffffffff;
      }
      else {
        FUN_144760e21(*(undefined8 *)(param_2 + 0x24e),param_2[0x250]);
        if (*(longlong *)(param_2 + 0x24e) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_2 + 0x24e) = local_78;
        local_78 = 0;
        param_2[0x250] = (int)uStack_70;
        param_2[0x251] = uStack_70._4_4_;
        uStack_70 = 0;
        uVar9 = 0;
      }
      FUN_144760e21(local_78,uVar9);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (param_2 != param_3) {
        FUN_140754d76(*(undefined8 *)(param_2 + 0x254),param_2[0x256]);
        iVar2 = param_3[0x256];
        uVar3 = *(undefined8 *)(param_3 + 0x254);
        param_2[0x256] = iVar2;
        if (iVar2 == 0 && param_2[599] == 0) {
          param_2[599] = 0;
        }
        else {
          FUN_1470c7562(param_2 + 0x254,iVar2);
          FUN_1470c75c4(*(undefined8 *)(param_2 + 0x254),uVar3,iVar2);
        }
      }
    }
    param_3 = param_3 + 600;
    param_2 = param_2 + 600;
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4d20a FUN_140d4d20a body=54 status=ok
// SIG undefined FUN_140d4d20a(void)

void FUN_140d4d20a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1470c74cc(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 140d4d240 FUN_140d4d240 body=121 status=ok
// SIG undefined FUN_140d4d240(void)

void FUN_140d4d240(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 != 0) && (iVar3 = 0x20, 0x20 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x48,0);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if ((int)param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_14576ef82(param_1,0,iVar3,0x48);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x90c) = param_3;
  return;
}



// FUNCTION 140d4d2ba FUN_140d4d2ba body=163 status=ok
// SIG undefined FUN_140d4d2ba(void)

undefined2 * FUN_140d4d2ba(undefined2 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_58 [44];
  undefined2 local_2c;
  char local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(param_4 + 8) != 0) {
    iVar2 = FUN_140d4d35e(param_4,uVar1,*(undefined8 *)(param_3 + 8));
    if (iVar2 != -1) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = (short)iVar2;
      *(undefined1 *)(param_1 + 2) = 1;
      goto LAB_140d4d302;
    }
  }
  if (*(char *)(param_3 + 0x10) == '\x01') {
    FUN_140d4d48c(&local_2c,uVar1,param_3);
    if (local_2a == '\x01') {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = local_2c;
      *(undefined1 *)(param_1 + 2) = 1;
      goto LAB_140d4d302;
    }
  }
  *(undefined1 *)(param_1 + 2) = 0;
LAB_140d4d302:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4d35e FUN_140d4d35e body=301 status=ok
// SIG undefined FUN_140d4d35e(void)

ulonglong FUN_140d4d35e(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c927740 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_146856450;
    local_50 = FUN_1427b121c;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000021;
    local_70 = 8;
    local_78 = 0x28;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
  }
  uVar1 = 0xffffffff;
  if (DAT_14c927740 != param_2) {
    do {
      if (0 < (int)*(uint *)(param_1 + 1)) {
        plVar2 = (longlong *)(*param_1 + 8);
        uVar3 = 0;
        do {
          if ((plVar2[-1] == param_2) && (*plVar2 == param_3)) {
            uVar1 = uVar3 & 0xffffffff;
            goto LAB_140d4d3d3;
          }
          uVar3 = uVar3 + 1;
          plVar2 = (longlong *)((longlong)plVar2 + (longlong)*(int *)((longlong)param_1 + 0xc));
        } while (*(uint *)(param_1 + 1) != uVar3);
      }
      param_2 = *(longlong *)(param_2 + 0x40);
    } while (param_2 != DAT_14c927740);
  }
LAB_140d4d3d3:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 140d4d48c FUN_140d4d48c body=1207 status=ok
// SIG undefined FUN_140d4d48c(void)

undefined2 * FUN_140d4d48c(undefined2 *param_1,longlong param_2,ulonglong *param_3)

{
  ushort uVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ushort *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined *puVar11;
  bool bVar12;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  code *local_190;
  longlong *local_188;
  longlong local_180;
  undefined4 *local_178;
  int local_170;
  undefined4 *local_168;
  undefined4 local_160;
  undefined4 *local_158;
  undefined4 *local_150;
  ulonglong *local_148;
  char local_140;
  undefined4 local_138;
  undefined2 local_134;
  undefined4 local_132 [30];
  ulonglong local_b8 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uVar7 = param_3[1];
  if (*param_3 == uVar7) {
    for (plVar9 = *(longlong **)(param_2 + 0x70); plVar9 != (longlong *)0x0;
        plVar9 = (longlong *)plVar9[9]) {
      if (plVar9[4] == uVar7) {
        local_180 = *(longlong *)(param_2 + 0x110);
        if (local_180 == 0) {
          FUN_140aa6c08(param_2);
          local_180 = *(longlong *)(param_2 + 0x110);
        }
        local_180 = *(int *)((longlong)plVar9 + 0x44) + local_180;
        local_188 = plVar9;
        goto LAB_140d4d5b5;
      }
    }
  }
  else {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    puVar8 = (ushort *)
             ((ulonglong)(((uint)uVar7 & 0xffff) * 2) + (&DAT_14c87eb10)[uVar7 >> 0x10 & 0xffff]);
    if (puVar8 != (ushort *)0x0) {
      uVar1 = *puVar8;
      local_150 = &local_138;
      local_158 = local_150;
      if ((uVar1 & 1) == 0) {
        local_140 = '\0';
        local_148 = local_b8;
        uVar10 = (ulonglong)(uVar1 >> 6);
        uVar7 = uVar10;
        if (0x1fff < uVar1) {
          FUN_145753a78(&local_158,uVar10);
          uVar7 = (ulonglong)(*puVar8 >> 6);
        }
        iVar6 = (int)local_150;
        local_150 = (undefined4 *)(uVar10 + (longlong)local_150);
        memcpy((void *)((longlong)(iVar6 - (int)local_158) + (longlong)local_158),puVar8 + 1,uVar7);
        local_170 = (int)local_150 - (int)local_158;
        local_178 = local_158;
        lVar4 = *(longlong *)(param_2 + 0x110);
        if (lVar4 == 0) {
          FUN_140aa6c08(param_2);
          lVar4 = *(longlong *)(param_2 + 0x110);
        }
        FUN_140d4d944(&local_188,param_2,lVar4,&local_178);
      }
      else {
        local_140 = '\0';
        local_148 = &local_38;
        FUN_144aa11d8(puVar8,&local_158);
        local_168 = local_158;
        local_160 = (undefined4)((ulonglong)((longlong)local_150 - (longlong)local_158) >> 1);
        lVar4 = *(longlong *)(param_2 + 0x110);
        if (lVar4 == 0) {
          FUN_140aa6c08(param_2);
          lVar4 = *(longlong *)(param_2 + 0x110);
        }
        FUN_147547f20(&local_188,param_2,lVar4,&local_168);
      }
      if (local_140 == '\x01') {
        FUN_1400020a8(local_158);
      }
      if (local_188 != (longlong *)0x0) {
LAB_140d4d5b5:
        plVar9 = local_188;
        cVar2 = (**(code **)(*local_188 + 0x80))(local_188);
        if (cVar2 == '\0') {
          puVar11 = (undefined *)plVar9[1];
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
            local_198 = FUN_1446ddbd2();
            local_190 = FUN_1468d96f0;
            local_1a0 = 0;
            local_1a8 = 0x4008001;
            FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
            atexit(FUN_14281144d);
            _Init_thread_footer(&DAT_14c951cc8);
          }
          if (DAT_14c951c80 == 0) {
            bVar12 = puVar11 != (undefined *)0x0;
            if (puVar11 != &DAT_14c951c78 && bVar12) {
              do {
                puVar11 = *(undefined **)(puVar11 + 0x30);
                bVar12 = puVar11 != (undefined *)0x0;
                if (puVar11 == &DAT_14c951c78) break;
              } while (puVar11 != (undefined *)0x0);
            }
            if (!bVar12) goto LAB_140d4d60c;
          }
          else if ((*(ulonglong *)(puVar11 + 0x18) & DAT_14c951c80) == 0) {
LAB_140d4d60c:
            local_158 = &local_138;
            local_140 = '\0';
            local_148 = &local_38;
            local_138 = 0x650053;
            local_134 = 0x74;
            local_150 = local_132;
            FUN_14005eb5c(param_3,&local_158);
            *(undefined2 *)local_150 = 0;
            FUN_1446f470e(&local_168,local_158,0);
            if ((local_168 == (undefined4 *)0x0) ||
               (lVar4 = FUN_1400796d0(param_2,local_168,1), lVar4 == 0)) {
              lVar4 = plVar9[1];
              lVar5 = FUN_144a5ab96();
              if (*(ulonglong *)(lVar5 + 8) == 0) {
                bVar12 = lVar4 != 0;
                if (lVar4 != lVar5 && bVar12) {
                  do {
                    lVar4 = *(longlong *)(lVar4 + 0x30);
                    bVar12 = lVar4 != 0;
                    if (lVar4 == lVar5) break;
                  } while (lVar4 != 0);
                }
                if (bVar12) goto LAB_140d4d72b;
              }
              else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) {
LAB_140d4d72b:
                local_180 = local_180 + (ulonglong)*(byte *)((longlong)plVar9 + 0x71);
              }
              lVar4 = *(longlong *)(param_2 + 0x110);
              if (lVar4 == 0) {
                FUN_140aa6c08(param_2);
                lVar4 = *(longlong *)(param_2 + 0x110);
              }
              if (0xfffe < (uint)(local_180 - lVar4)) goto LAB_140d4d68f;
              *param_1 = (short)(local_180 - lVar4);
              uVar3 = 1;
            }
            else {
LAB_140d4d68f:
              uVar3 = 0;
            }
            *(undefined1 *)(param_1 + 1) = uVar3;
            if (local_140 == '\x01') {
              FUN_1400020a8(local_158);
            }
            goto LAB_140d4d6a2;
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
LAB_140d4d6a2:
  if ((local_38 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140d4d944 FUN_140d4d944 body=545 status=ok
// SIG undefined FUN_140d4d944(void)

longlong * FUN_140d4d944(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar8 = *param_4;
  uVar3 = *(uint *)(param_4 + 1);
  uVar4 = (ulonglong)(int)uVar3;
  uVar5 = 1;
  if (0 < (longlong)uVar4) {
    lVar7 = 0;
    do {
      if (*(char *)(lVar8 + lVar7) == '.') {
        uVar6 = (uint)lVar7;
        if (uVar6 != 0xffffffff) {
          if ((int)uVar6 < (int)uVar3) {
            uVar3 = uVar6;
          }
          uVar5 = 0;
          uVar4 = (ulonglong)uVar3;
          if ((int)uVar3 < 1) {
            uVar4 = uVar5;
          }
          uVar6 = ~uVar6;
          goto LAB_140d4d99e;
        }
        break;
      }
      lVar1 = lVar8 + lVar7;
      lVar7 = lVar7 + 1;
    } while (lVar1 + 1U < uVar4 + lVar8);
  }
  uVar6 = 0;
LAB_140d4d99e:
  FUN_140d4db66(&local_48,uVar4,lVar8,0);
  if (local_48 != 0) {
    for (lVar8 = *(longlong *)(param_2 + 0x70); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x48)) {
      if (*(longlong *)(lVar8 + 0x20) == local_48) {
        param_3 = param_3 + *(int *)(lVar8 + 0x44);
        if ((char)uVar5 != '\0') {
          *param_1 = lVar8;
          param_1[1] = param_3;
          goto LAB_140d4db3d;
        }
        puVar9 = *(undefined **)(lVar8 + 8);
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c952a58) {
          FUN_144b3d300();
          if (DAT_14c952a58 == -1) {
            local_68 = FUN_1446ddbd2();
            local_60 = FUN_1403a682c;
            local_70 = 0;
            local_78 = 0x108001;
            FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
            atexit(FUN_142818c9e);
            _Init_thread_footer();
          }
        }
        if (DAT_14c952a10 == 0) {
          bVar10 = puVar9 != (undefined *)0x0;
          if (puVar9 != &DAT_14c952a08 && bVar10) goto LAB_140d4db1b;
          goto LAB_140d4db2f;
        }
        if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c952a10) != 0) goto LAB_140d4da43;
        break;
      }
    }
  }
  goto LAB_140d4db37;
  while (puVar9 != (undefined *)0x0) {
LAB_140d4db1b:
    puVar9 = *(undefined **)(puVar9 + 0x30);
    bVar10 = puVar9 != (undefined *)0x0;
    if (puVar9 == &DAT_14c952a08) break;
  }
LAB_140d4db2f:
  if (bVar10) {
LAB_140d4da43:
    if (*(longlong *)(lVar8 + 0x70) != 0) {
      uVar3 = *(uint *)(param_4 + 1);
      uVar2 = uVar6 + uVar3;
      if ((int)uVar3 <= (int)(uVar6 + uVar3)) {
        uVar2 = uVar3;
      }
      uVar4 = 0;
      if (0 < (int)uVar2) {
        uVar4 = (ulonglong)uVar2;
      }
      local_58 = ((longlong)(int)uVar3 + *param_4) - uVar4;
      local_50 = (undefined4)uVar4;
      FUN_140d4d944(param_1,*(longlong *)(lVar8 + 0x70),param_3);
      goto LAB_140d4db3d;
    }
  }
LAB_140d4db37:
  *param_1 = 0;
  param_1[1] = 0;
LAB_140d4db3d:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4db66 FUN_140d4db66 body=266 status=ok
// SIG undefined FUN_140d4db66(void)

ulonglong * FUN_140d4db66(ulonglong *param_1,int param_2,char *param_3,undefined4 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 auStack_48 [32];
  char *local_28;
  int local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == 0) {
LAB_140d4dc10:
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    lVar3 = (longlong)param_2;
    pcVar7 = param_3 + lVar3 + -1;
    uVar2 = 0;
    if (pcVar7 < param_3) {
      lVar6 = 0;
    }
    else {
      do {
        if (9 < (byte)(*pcVar7 - 0x30U)) break;
        uVar2 = (ulonglong)((int)uVar2 + 1);
        pcVar7 = pcVar7 + -1;
      } while (param_3 <= pcVar7);
      uVar1 = (uint)uVar2;
      if (uVar1 == 0 || param_2 <= (int)uVar1) {
LAB_140d4dbc6:
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        if ((uVar1 < 0xb) && (lVar8 = -uVar2, param_3[lVar8 + lVar3 + -1] == '_')) {
          if ((uVar1 == 1) || (param_3[lVar8 + lVar3] != '0')) {
            lVar5 = 0;
            do {
              lVar6 = (longlong)param_3[lVar8 + lVar3] + lVar5 * 10;
              lVar5 = lVar6 + -0x30;
              lVar8 = lVar8 + 1;
            } while (lVar8 != 0);
            if (lVar5 < 0x7fffffff) {
              param_2 = ~uVar1 + param_2;
              lVar6 = lVar6 + -0x2f;
              goto LAB_140d4dbc8;
            }
          }
          goto LAB_140d4dbc6;
        }
      }
LAB_140d4dbc8:
      if (param_2 == 0) goto LAB_140d4dc10;
    }
    local_1c = 0;
    local_28 = param_3;
    local_20 = param_2;
    uVar1 = FUN_14001a6c0(&local_28,param_4);
    uVar4 = lVar6 << 0x20;
    uVar2 = (ulonglong)uVar1;
  }
  *param_1 = uVar2 | uVar4;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140d4dc72 FUN_140d4dc72 body=370 status=ok
// SIG undefined FUN_140d4dc72(void)

undefined8 * FUN_140d4dc72(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 140d4ddf2 FUN_140d4ddf2 body=258 status=ok
// SIG undefined FUN_140d4ddf2(void)

undefined8 FUN_140d4ddf2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      lVar2 = *(longlong *)(param_3 + -0x20);
      if (DAT_14c950c29 == 1) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + -0x20);
        }
      }
      bVar1 = DAT_14c950c29;
      *(longlong *)(param_2 + -0x20) = lVar2;
      lVar2 = *(longlong *)(param_3 + -0x18);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + -0x18);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + -0x18) = lVar2;
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      lVar2 = *(longlong *)(param_3 + -8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + -8);
        }
      }
      *(longlong *)(param_2 + -8) = lVar2;
      FUN_140d4def4(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      lVar2 = *(longlong *)(param_3 + 0x18);
      if (DAT_14c950c29 == 1) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 0x18);
        }
      }
      *(longlong *)(param_2 + 0x18) = lVar2;
      FUN_140d4def4(param_2 + 0x20,param_3 + 0x20);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140d4def4 FUN_140d4def4 body=93 status=ok
// SIG undefined FUN_140d4def4(void)

undefined8 * FUN_140d4def4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d4df51(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140d4df7e(param_1,iVar1);
      FUN_140d4e0ce(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140d4df51 FUN_140d4df51 body=45 status=ok
// SIG undefined FUN_140d4df51(void)

void FUN_140d4df51(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_14051f4c4(param_1);
      param_1 = param_1 + 0xb8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d4df7e FUN_140d4df7e body=336 status=ok
// SIG undefined FUN_140d4df7e(void)

void FUN_140d4df7e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0xb8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d4dfef;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140d4dfef:
    iVar5 = (int)(uVar4 / 0xb8);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0xb8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140d4e0ce FUN_140d4e0ce body=360 status=ok
// SIG undefined FUN_140d4e0ce(void)

void FUN_140d4e0ce(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x80);
    do {
      puVar6[-0x10] = *param_2;
      puVar6[-0xf] = &PTR_FUN_14b00bdf8;
      puVar6[-9] = 0;
      *(undefined4 *)(puVar6 + -8) = 0;
      puVar6[-0xd] = 0;
      puVar6[-0xc] = 0;
      *(undefined8 *)((longlong)puVar6 + -0x3c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar6 + -0x34) = 0;
      puVar6[-5] = 0;
      *(undefined4 *)(puVar6 + -4) = 0;
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      puVar6[-0xe] = &PTR_FUN_14a176fc0;
      *(undefined4 *)(puVar6 + -1) = *(undefined4 *)(param_2 + 0xf);
      *(undefined2 *)((longlong)puVar6 + -4) = *(undefined2 *)((longlong)param_2 + 0x7c);
      puVar6[-0xe] = &DAT_14a176f00;
      *puVar6 = 0;
      iVar1 = *(int *)(param_2 + 0x11);
      pvVar2 = (void *)param_2[0x10];
      *(int *)(puVar6 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      }
      else {
        FUN_140501c24(puVar6,iVar1,0);
        memcpy((void *)*puVar6,pvVar2,(longlong)iVar1 * 0x1c);
      }
      puVar6[2] = param_2[0x12];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x9c);
      uVar4 = *(undefined4 *)(param_2 + 0x14);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0xa4);
      *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(param_2 + 0x13);
      *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar3;
      *(undefined4 *)(puVar6 + 4) = uVar4;
      *(undefined4 *)((longlong)puVar6 + 0x24) = uVar5;
      puVar6[5] = 0;
      iVar1 = *(int *)(param_2 + 0x16);
      pvVar2 = (void *)param_2[0x15];
      *(int *)(puVar6 + 6) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
      }
      else {
        FUN_1446dd670(puVar6 + 5,iVar1,0);
        memcpy((void *)puVar6[5],pvVar2,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 0x17;
      puVar6 = puVar6 + 0x17;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140d4e236 FUN_140d4e236 body=87 status=ok
// SIG undefined FUN_140d4e236(void)

undefined8 FUN_140d4e236(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x18) < 1) {
    uVar2 = 0;
  }
  else {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + lVar3 * 8);
      uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
      if ((char)uVar2 != '\0') {
        return uVar2;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x18));
  }
  return uVar2;
}



// FUNCTION 140d4e292 FUN_140d4e292 body=270 status=ok
// SIG undefined FUN_140d4e292(void)

undefined8 FUN_140d4e292(longlong param_1)

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
    if (iVar1 == 2) goto LAB_140d4e39a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140d4e39a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140d4e39a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140d4e348;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_140d4e348;
    }
  }
  uVar6 = 0;
LAB_140d4e348:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4e3ba FUN_140d4e3ba body=41 status=ok
// SIG undefined FUN_140d4e3ba(void)

void FUN_140d4e3ba(longlong param_1,undefined8 param_2)

{
  FUN_140d4e3e4();
  FUN_140aa1618(param_1 + 0x2c0,param_2);
  return;
}



// FUNCTION 140d4e3e4 FUN_140d4e3e4 body=102 status=ok
// SIG undefined FUN_140d4e3e4(void)

void FUN_140d4e3e4(longlong param_1,undefined8 param_2)

{
  FUN_140aa1618(param_1 + 0x40);
  FUN_140aa1618(param_1 + 0x60,param_2);
  FUN_140aa1618(param_1 + 0x80,param_2);
  FUN_140aa1618(param_1 + 0x118,param_2);
  FUN_140aa1618(param_1 + 0x138,param_2);
  FUN_140d4e44a(param_1 + 0x158,param_2);
  return;
}



// FUNCTION 140d4e44a FUN_140d4e44a body=61 status=ok
// SIG undefined FUN_140d4e44a(void)

void FUN_140d4e44a(int *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = 8;
  if (*param_1 != 0) {
    FUN_140aa1618(param_1 + 0x1a,param_2);
    lVar1 = 0x100;
  }
  FUN_140aa1618((longlong)param_1 + lVar1,param_2);
  return;
}



// FUNCTION 140d4e488 FUN_140d4e488 body=154 status=ok
// SIG undefined FUN_140d4e488(void)

undefined8 * FUN_140d4e488(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar3 = &PTR_LAB_14b9dd5f0;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(param_1 + 8);
  puVar3[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(int *)(puVar3 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
  }
  else {
    FUN_140d4e57a(puVar3 + 2,iVar1,0);
    FUN_140d4e522(puVar3[2],uVar2,iVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar3[4] = *(undefined8 *)(param_1 + 0x20);
  puVar3[5] = uVar2;
  *puVar3 = &PTR_FUN_14b9dd4b0;
  *param_2 = puVar3;
  return param_2;
}



// FUNCTION 140d4e522 FUN_140d4e522 body=88 status=ok
// SIG undefined FUN_140d4e522(void)

void FUN_140d4e522(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140d4e662(param_1,param_2);
    *param_1 = &PTR_FUN_14b8fbe80;
    *(undefined2 *)(param_1 + 0x15) = *(undefined2 *)(param_2 + 0xa8);
    param_1 = param_1 + 0x16;
    param_2 = param_2 + 0xb0;
  }
  return;
}



// FUNCTION 140d4e57a FUN_140d4e57a body=232 status=ok
// SIG undefined FUN_140d4e57a(void)

void FUN_140d4e57a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0xb0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    iVar2 = (int)(uVar1 / 0xb0);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar4 = iVar2;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xb0,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140d4e662 FUN_140d4e662 body=658 status=ok
// SIG undefined FUN_140d4e662(void)

undefined8 * FUN_140d4e662(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = &PTR_FUN_14aa2b2b0;
  uVar2 = *(undefined8 *)(param_2 + 0xe);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0xe) = uVar2;
  *param_1 = &PTR_FUN_14b517f90;
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 0x20);
  uVar6 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  pvVar3 = *(void **)(param_2 + 0x30);
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar3,(longlong)iVar1 << 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 0x48);
  pvVar3 = *(void **)(param_2 + 0x40);
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar3,(longlong)iVar1 << 2);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0x58);
  pvVar3 = *(void **)(param_2 + 0x50);
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar3,(longlong)iVar1 << 2);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0x68);
  pvVar3 = *(void **)(param_2 + 0x60);
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar3,(longlong)iVar1 << 2);
  }
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0x78);
  pvVar3 = *(void **)(param_2 + 0x70);
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],pvVar3,(longlong)iVar1 << 2);
  }
  param_1[0x10] = 0;
  iVar1 = *(int *)(param_2 + 0x88);
  pvVar3 = *(void **)(param_2 + 0x80);
  *(int *)(param_1 + 0x11) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x10,iVar1,0);
    memcpy((void *)param_1[0x10],pvVar3,(longlong)iVar1 << 2);
  }
  param_1[0x12] = 0;
  iVar1 = *(int *)(param_2 + 0x98);
  pvVar3 = *(void **)(param_2 + 0x90);
  *(int *)(param_1 + 0x13) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x12,iVar1,0);
    memcpy((void *)param_1[0x12],pvVar3,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 140d4e8f4 FUN_140d4e8f4 body=40 status=ok
// SIG undefined FUN_140d4e8f4(void)

undefined8 FUN_140d4e8f4(undefined8 param_1,int param_2)

{
  FUN_140d4e91c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d4e91c FUN_140d4e91c body=156 status=ok
// SIG undefined FUN_140d4e91c(void)

void FUN_140d4e91c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b53da10;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b53d730;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140d4e9b8(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140d4e9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 140d4e9b8 FUN_140d4e9b8 body=111 status=ok
// SIG undefined FUN_140d4e9b8(void)

void FUN_140d4e9b8(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x20);
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
      plVar3 = (longlong *)plVar4[-3];
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
      plVar4 = plVar4 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d4ea28 FUN_140d4ea28 body=128 status=ok
// SIG undefined FUN_140d4ea28(void)

undefined4 FUN_140d4ea28(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1405df8b8(param_1,&local_30,*(undefined4 *)(param_2 + 0xc));
  uVar3 = (**(code **)(*local_30 + 8))(local_30,param_2);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4eaaa FUN_140d4eaaa body=370 status=ok
// SIG undefined FUN_140d4eaaa(void)

ulonglong FUN_140d4eaaa(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  int iVar10;
  longlong *plVar11;
  
  lVar2 = *(longlong *)(param_2 + 0x20);
  plVar3 = *(longlong **)(param_2 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar4 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar7 = (uint)lVar2 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar10 = *(int *)(lVar5 + (ulonglong)
                              (*(int *)(param_1 + 0xa0) - 1U &
                              (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar7) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar10 * 0x28);
        if (*plVar6 == lVar2) break;
        iVar10 = (int)plVar6[4];
        plVar6 = (longlong *)0x0;
      } while (iVar10 != -1);
      goto LAB_140d4eb2f;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_140d4eb2f:
  plVar11 = plVar6 + 3;
  if (plVar6 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
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
  uVar9 = (undefined7)((ulonglong)plVar3 >> 8);
  uVar8 = CONCAT71(uVar9,7);
  if (plVar11 == (longlong *)0x0) {
    if (*(char *)(param_1 + 0x18) == '\x01') {
      lVar2 = *(longlong *)(param_2 + 0x20);
      plVar3 = *(longlong **)(param_2 + 0x30);
      lVar5 = DAT_14c964d70;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        lVar5 = DAT_14c964d70;
        UNLOCK();
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
      if (lVar2 == lVar5) {
        uVar8 = 7;
        if ((*(ushort *)(param_2 + 8) & 0xfc) == 0) {
          uVar8 = (ulonglong)((*(ushort *)(param_2 + 8) & 3) == 0 ^ 5);
        }
      }
    }
  }
  else if (*(char *)(param_1 + 0x19) == '\x01') {
    uVar8 = CONCAT71(uVar9,(char)*plVar11);
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 140d4ec1c FUN_140d4ec1c body=40 status=ok
// SIG undefined FUN_140d4ec1c(void)

undefined8 FUN_140d4ec1c(undefined8 param_1,int param_2)

{
  FUN_140d4ec44();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d4ec44 FUN_140d4ec44 body=269 status=ok
// SIG undefined FUN_140d4ec44(void)

void FUN_140d4ec44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b014f70;
  param_1[5] = &PTR_FUN_14b0153f0;
  param_1[6] = &PTR_LAB_14b015430;
  param_1[0x22] = &PTR_FUN_14b015480;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_140d4ed52(param_1 + 0x44);
  if ((param_1[0x42] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x42] + 0x50));
  }
  if ((param_1[0x3c] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x3c] + 0x50));
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0xffffffffffffffff;
  param_1[0x2f] = 0;
  param_1[0x30] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_140d4ed8a(param_1 + 0x23);
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 140d4ed52 FUN_140d4ed52 body=55 status=ok
// SIG undefined FUN_140d4ed52(void)

void FUN_140d4ed52(longlong *param_1)

{
  FUN_140d4edc2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d4ed8a FUN_140d4ed8a body=55 status=ok
// SIG undefined FUN_140d4ed8a(void)

void FUN_140d4ed8a(longlong *param_1)

{
  FUN_140d4ee3e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d4edc2 FUN_140d4edc2 body=123 status=ok
// SIG undefined FUN_140d4edc2(void)

void FUN_140d4edc2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405b3ec2(param_1,param_2);
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



// FUNCTION 140d4ee3e FUN_140d4ee3e body=513 status=ok
// SIG undefined FUN_140d4ee3e(void)

void FUN_140d4ee3e(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar4 = 0;
    uVar8 = 1;
    iVar5 = 0;
    iVar12 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar10 = *puVar9;
    if (uVar10 == 0) {
      iVar5 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar5 = iVar3 + -1;
      }
      uVar4 = 0;
      uVar11 = iVar5 >> 5;
      if (iVar5 >> 5 < 1) {
        uVar11 = 0;
      }
      iVar5 = 0;
      do {
        if (uVar11 == uVar4) goto LAB_140d4ee6e;
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar9[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar8 = (ulonglong)(-uVar10 & uVar10);
    uVar2 = uVar8 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar12 = (iVar5 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar12) {
      iVar12 = iVar3;
    }
  }
  if (iVar12 < iVar3) {
    uVar10 = 0xffffffff;
    do {
      lVar14 = *param_1;
      *(undefined8 *)(lVar14 + 0x18 + (longlong)iVar12 * 0x38) = 0;
      *(undefined8 *)(lVar14 + 0x20 + (longlong)iVar12 * 0x38) = 0xffffffffffffffff;
      uVar10 = ~(uint)uVar8 & uVar10;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar12 = (int)uVar4;
      lVar14 = (longlong)iVar12;
      uVar11 = puVar9[lVar14] & uVar10;
      if (uVar11 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar12) {
          iVar7 = iVar12;
        }
        if (iVar6 <= iVar12) break;
        lVar13 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar11 = puVar9[lVar14 + lVar13 + 1];
          if (uVar11 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar7 - lVar14 == lVar13) goto LAB_140d4ee6e;
        }
        uVar4 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar10 = 0xffffffff;
      }
      uVar8 = (ulonglong)(-uVar11 & uVar11);
      uVar2 = uVar8 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar12 = (iVar5 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar3);
  }
LAB_140d4ee6e:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar10 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar10 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar11 = 0x80;
  if (0x80 < (int)uVar10) {
    uVar11 = uVar10;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar11;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140d4f03f FUN_140d4f03f body=152 status=ok
// SIG undefined FUN_140d4f03f(void)

undefined8 FUN_140d4f03f(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_140d4f0da(param_2,param_4);
  if (cVar1 != '\0') {
    local_38 = *(undefined8 *)(param_4 + 0x18);
    local_48 = *(undefined4 *)(param_4 + 8);
    uStack_44 = *(undefined4 *)(param_4 + 0xc);
    uStack_40 = *(undefined4 *)(param_4 + 0x10);
    uStack_3c = *(undefined4 *)(param_4 + 0x14);
    FUN_1412140b0(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  FUN_14030a482(param_3,param_1,param_2,0);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4f0da FUN_140d4f0da body=82 status=ok
// SIG undefined FUN_140d4f0da(void)

undefined8 FUN_140d4f0da(longlong *param_1,char *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  longlong lVar6;
  
  if (*param_2 != '\x01') {
    return 0;
  }
  lVar6 = 0;
  if (param_1 != (longlong *)0x0) {
    lVar2 = FUN_144a7cbb2();
    lVar6 = param_1[2];
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
       (lVar6 = *(longlong *)(lVar6 + 0x30),
       *(longlong *)(lVar6 + (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
      uVar3 = (**(code **)(*param_1 + 0x798))(param_1);
      bVar5 = (byte)uVar3;
      uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
      bVar1 = 1;
      goto LAB_140d4f124;
    }
  }
  bVar5 = (byte)lVar6;
  bVar1 = 0;
  uVar4 = 0;
LAB_140d4f124:
  return CONCAT71(uVar4,bVar1 & bVar5);
}



// FUNCTION 140d4f134 FUN_140d4f134 body=302 status=ok
// SIG undefined FUN_140d4f134(void)

undefined8 * FUN_140d4f134(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140d4f264();
  *param_1 = &PTR_FUN_14b693f70;
  param_1[0x9d] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0xf00000d0;
  param_1[0x9f] = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0x3dcccccd;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = L"/Script/OakGame.InventoryAugment_AttributeModifier";
  local_30 = 0x32;
  FUN_14475bf92(&local_58);
  _Src = local_48;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  ppvVar1 = (void **)(param_1 + 4);
  if (ppvVar1 != &local_48) {
    iVar2 = (int)uStack_40;
    lVar3 = (longlong)(int)uStack_40;
    *(int *)(param_1 + 5) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_40 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4f264 FUN_140d4f264 body=1027 status=ok
// SIG undefined FUN_140d4f264(void)

undefined8 * FUN_140d4f264(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  ulonglong uStack_60;
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14b687a50;
  ppvVar1 = (void **)(param_1 + 4);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  *(undefined2 *)((longlong)param_1 + 0x31) = 1;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf9) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x119) = 0;
  *(undefined8 *)((longlong)param_1 + 0x121) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0x3f800000;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0xf00000d0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0xf00000d0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0xf00000d0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x46) = 0x3f800000;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0xf00000d0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x374) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined2 *)(param_1 + 0x7b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3da) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  param_1[0x7e] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0x3f800000;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0xf00000d0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined1 *)(param_1 + 0x91) = 1;
  param_1[0x92] = &DAT_4030000000000000;
  param_1[0x93] = 0x4022000000000000;
  *(undefined4 *)(param_1 + 0x94) = 0x42c80000;
  *(undefined2 *)((longlong)param_1 + 0x4a4) = 0x104;
  *(undefined1 *)((longlong)param_1 + 0x4a6) = 1;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0x1010000;
  uVar3 = FUN_140691b73();
  *(undefined1 *)((longlong)param_1 + 0x4b4) = uVar3;
  uVar3 = FUN_140691bc1();
  *(undefined1 *)((longlong)param_1 + 0x4b5) = uVar3;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_50 = L"/Script/OakGame.InventoryAugment";
  local_48 = 0x20;
  FUN_14475bf92(&local_78);
  _Src = local_68;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_78;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_78._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_70._4_4_;
  if (ppvVar1 != &local_68) {
    iVar2 = (int)uStack_60;
    lVar4 = (longlong)(int)uStack_60;
    *(int *)(param_1 + 5) = (int)uStack_60;
    if ((int)uStack_60 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_60 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar4 * 2);
      }
    }
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4f668 FUN_140d4f668 body=40 status=ok
// SIG undefined FUN_140d4f668(void)

undefined8 FUN_140d4f668(undefined8 param_1,int param_2)

{
  FUN_140d4f690();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d4f690 FUN_140d4f690 body=247 status=ok
// SIG undefined FUN_140d4f690(void)

void FUN_140d4f690(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab8efa0;
  param_1[5] = &PTR_FUN_14ab8f9d0;
  param_1[6] = &PTR_LAB_14ab8fa10;
  param_1[0x55] = &PTR_FUN_14ab8fa60;
  param_1[0x56] = &PTR_FUN_14ab8fae0;
  param_1[0x57] = &PTR_FUN_14ab8faf0;
  FUN_140b00d5e(param_1 + 0xda,1);
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  FUN_140937fd9(param_1[0xce],*(undefined4 *)(param_1 + 0xcf));
  if (param_1[0xce] != 0) {
    FUN_1400020a8();
  }
  FUN_140298e51(param_1[0xcc],*(undefined4 *)(param_1 + 0xcd));
  if (param_1[0xcc] != 0) {
    FUN_1400020a8();
  }
  FUN_140938008(param_1[0xca],*(undefined4 *)(param_1 + 0xcb));
  if (param_1[0xca] != 0) {
    FUN_1400020a8();
  }
  if (param_1[199] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 140d4f790 FUN_140d4f790 body=165 status=ok
// SIG undefined FUN_140d4f790(void)

void FUN_140d4f790(longlong param_1)

{
  FUN_140d4f864(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140d4f835(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d4f835 FUN_140d4f835 body=47 status=ok
// SIG undefined FUN_140d4f835(void)

void FUN_140d4f835(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
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



// FUNCTION 140d4f864 FUN_140d4f864 body=143 status=ok
// SIG undefined FUN_140d4f864(void)

void FUN_140d4f864(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x88);
    do {
      FUN_140d4f835(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_1447a1747(*(undefined8 *)(puVar1 + -6),puVar1[-4]);
      if (*(longlong *)(puVar1 + -6) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -10) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -0x10) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -0x14) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d4f8f4 FUN_140d4f8f4 body=88 status=ok
// SIG undefined FUN_140d4f8f4(void)

void FUN_140d4f8f4(longlong param_1)

{
  FUN_140d4f94c();
  FUN_140d4f9a8(param_1);
  *(byte *)(param_1 + 0x968) = *(byte *)(param_1 + 0x968) & 0xdf;
  FUN_140b3b830(param_1,0);
  FUN_140c2f38e(param_1 + 0x980,0);
  *(undefined1 *)(param_1 + 0x5f9) = 1;
  FUN_14067171c(param_1 + 0x5c0);
  *(undefined8 *)(param_1 + 0x5c0) = 0;
  return;
}



// FUNCTION 140d4f94c FUN_140d4f94c body=92 status=ok
// SIG undefined FUN_140d4f94c(void)

void FUN_140d4f94c(longlong param_1,undefined4 param_2)

{
  if (*(longlong **)(param_1 + 0x3d8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x18))();
  }
  if ((*(longlong *)(param_1 + 0x500) != 0) && (*(longlong *)(param_1 + 0x508) != 0)) {
    FUN_14480f766(*(longlong *)(param_1 + 0x508) + 0xf8);
    *(undefined8 *)(param_1 + 0x500) = 0;
  }
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 140d4f9a8 FUN_140d4f9a8 body=444 status=ok
// SIG undefined FUN_140d4f9a8(void)

void FUN_140d4f9a8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  undefined1 local_38 [24];
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x978) == '\0') {
    *(undefined1 *)(param_1 + 0x978) = 1;
    lVar2 = *(longlong *)(param_1 + 0x3f0);
    if (lVar2 != 0) {
      lVar5 = lVar2 + 0x2d8;
      if ((*(byte *)(param_1 + 0x974) & 0x20) != 0) {
        lVar5 = lVar2 + 0x308;
      }
      if (((((*(int *)(param_1 + 0x970) != 0) &&
            (uVar1 = *(uint *)(param_1 + 0x96c), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
          && ((plVar4 = (longlong *)
                        ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
              plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x970))))) &&
         (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
          (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)))) {
        if (DAT_14caf64b8 == 0) {
          local_50 = &local_20;
          local_20 = FUN_141030f22;
          local_40 = FUN_14081d0ea;
          local_48 = FUN_142b4754c;
          local_58 = &LAB_147c45ce0;
          local_60 = &LAB_1463f1ff4;
          local_68 = &DAT_149e063b2;
          local_70 = 0x4000000000;
          local_78 = 0x10000004;
          local_80 = 8;
          local_88 = CONCAT44(local_88._4_4_,0x428);
          FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
        }
        if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
            DAT_14caf64b8 + 0x30)) {
          cVar3 = (**(code **)(*plVar4 + 0x700))(plVar4);
          if (cVar3 != '\0') {
            local_88 = 0;
            FUN_140b32deb(local_38,plVar4,lVar5,0);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4fb66 FUN_140d4fb66 body=601 status=ok
// SIG undefined FUN_140d4fb66(void)

void FUN_140d4fb66(longlong param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  double *pdVar8;
  longlong lVar9;
  longlong *plVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(int *)(param_1 + 0x1c) == 0) || (uVar3 = *(uint *)(param_1 + 0x18), (int)uVar3 < 0)) ||
     (DAT_14c9647dc <= (int)uVar3)) goto LAB_140d4fc7a;
  plVar10 = (longlong *)
            ((ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
  if (((plVar10 == (longlong *)0x0) || ((int)plVar10[2] != *(int *)(param_1 + 0x1c))) ||
     ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) goto LAB_140d4fc7a;
  if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
    lVar9 = *plVar10;
  }
  else {
    lVar9 = 0;
  }
  lVar9 = *(longlong *)(lVar9 + 0x1c8);
  if (lVar9 == 0) {
    pdVar8 = (double *)&DAT_14c8464e0;
    uVar12 = (undefined4)DAT_14c8464f0;
    uVar13 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar12 = (undefined4)*(undefined8 *)(lVar9 + 0x270);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x270) >> 0x20);
    pdVar8 = (double *)(lVar9 + 0x260);
  }
  dVar4 = *pdVar8;
  dVar5 = pdVar8[1];
  if (((dVar4 != *(double *)(param_1 + 0x20)) || (NAN(dVar4) || NAN(*(double *)(param_1 + 0x20))))
     || ((dVar5 != *(double *)(param_1 + 0x28) ||
         (((NAN(dVar5) || NAN(*(double *)(param_1 + 0x28)) ||
           ((double)CONCAT44(uVar13,uVar12) != *(double *)(param_1 + 0x30))) ||
          (NAN((double)CONCAT44(uVar13,uVar12)) || NAN(*(double *)(param_1 + 0x30)))))))) {
    *(double *)(param_1 + 0x20) = dVar4;
    *(double *)(param_1 + 0x28) = dVar5;
    *(ulonglong *)(param_1 + 0x30) = CONCAT44(uVar13,uVar12);
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  fVar2 = *(float *)(param_1 + 0x48);
  if (*(float *)(param_1 + 0x44) <= fVar2 && fVar2 != *(float *)(param_1 + 0x44)) {
    fVar11 = param_2 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x38);
    fVar2 = 1.0;
    if (fVar11 <= 1.0) {
      fVar2 = fVar11;
    }
    if (ABS(fVar2 - *(float *)(param_1 + 0x38)) <= 1e-08) goto LAB_140d4fc71;
    *(float *)(param_1 + 0x38) = fVar2;
    bVar7 = true;
  }
  else {
    *(float *)(param_1 + 0x48) = fVar2 + param_2;
LAB_140d4fc71:
    if (!bVar6) goto LAB_140d4fc7a;
    bVar7 = false;
  }
  FUN_1449027d0(param_1 + -0x38,&local_70);
  lVar9 = *(longlong *)(local_70 + 0x50);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0x200));
  *(int *)(lVar9 + 0x1f8) = *(int *)(lVar9 + 0x1f8) + 1;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_68 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  *(int *)(lVar9 + 0x1f0) = *(int *)(lVar9 + 0x1f0) + 1;
  if (bVar6) {
    *(double *)(lVar9 + 0x150) = dVar4;
    *(double *)(lVar9 + 0x158) = dVar5;
    *(ulonglong *)(lVar9 + 0x160) = CONCAT44(uVar13,uVar12);
  }
  if (bVar7) {
    *(undefined4 *)(lVar9 + 0x1e8) = *(undefined4 *)(param_1 + 0x38);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0x200));
LAB_140d4fc7a:
  FUN_140d4fdc0(param_1 + -0x38);
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4fdc0 FUN_140d4fdc0 body=101 status=ok
// SIG undefined FUN_140d4fdc0(void)

void FUN_140d4fdc0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar1 = *(uint *)(param_1 + 0x50);
    bVar7 = false;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140d4fe07;
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x54))) {
      bVar7 = (*(uint *)(lVar5 + 8) & 0x10200000) == 0;
      goto LAB_140d4fe07;
    }
  }
  bVar7 = false;
LAB_140d4fe07:
  if ((bool)*(char *)(param_1 + 0x74) == bVar7) {
    return;
  }
  *(bool *)(param_1 + 0x74) = bVar7;
  plVar6 = (longlong *)(param_1 + 0x38);
  if (bVar7 == false) {
    FUN_1449db8d8();
    return;
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0bab8) {
    FUN_144b3d300(&DAT_14cb0bab8);
    if (DAT_14cb0bab8 == -1) {
      FUN_146408b70(&DAT_14cb0ba00);
      atexit((_func_5014 *)&LAB_14373e0ae);
      _Init_thread_footer(&DAT_14cb0bab8);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba38);
  FUN_140548616(&DAT_14cb0ba60);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba38);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba00);
  if ((longlong)(int)DAT_14cb0ba30 != 0) {
    lVar5 = 0;
    do {
      if (*(longlong **)(DAT_14cb0ba28 + lVar5) == plVar6) goto LAB_144958e23;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)(int)DAT_14cb0ba30 * 0x10 != lVar5);
  }
  if (DAT_14c963ff1 == '\x01') {
    FUN_14032851c(&DAT_14cb0ba00,plVar6);
  }
  else {
    uVar3 = (**(code **)(*plVar6 + 8))(plVar6);
    uVar4 = (**(code **)(*plVar6 + 0x28))(plVar6);
    uVar1 = DAT_14cb0ba30;
    lVar5 = (longlong)(int)DAT_14cb0ba30;
    DAT_14cb0ba30 = DAT_14cb0ba30 + 1;
    if (DAT_14cb0ba34 < DAT_14cb0ba30) {
      FUN_14084398e(&DAT_14cb0ba28,uVar1);
    }
    lVar2 = DAT_14cb0ba28;
    lVar5 = lVar5 * 0x10;
    *(longlong **)(DAT_14cb0ba28 + lVar5) = plVar6;
    *(undefined1 *)(lVar2 + 8 + lVar5) = uVar3;
    *(undefined4 *)(lVar2 + 0xc + lVar5) = uVar4;
  }
LAB_144958e23:
                    /* WARNING: Could not recover jumptable at 0x000144958e33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba00);
  return;
}



// FUNCTION 140d4fe2c FUN_140d4fe2c body=221 status=ok
// SIG undefined FUN_140d4fe2c(void)

longlong FUN_140d4fe2c(void)

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
  if (DAT_14cac24f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14787fc45;
    local_40 = &LAB_14637e452;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000011;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/Engine",L"MaterialExpression",&DAT_14cac24f0,&DAT_14787fc44);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac24f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d4ff0a FUN_140d4ff0a body=23 status=ok
// SIG undefined FUN_140d4ff0a(void)

void FUN_140d4ff0a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 == 0) {
    return;
  }
  if ((longlong)*(int *)(lVar1 + 0x228) != 0) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x220) + lVar3) == param_1) {
        lVar4 = *(longlong *)(lVar1 + 0x220) - lVar4;
        if (lVar4 == 0) {
          return;
        }
        cVar2 = FUN_140a3f096(lVar4 + 0x18,param_2);
        if (cVar2 == '\0') {
          return;
        }
        if (*(char *)(lVar1 + 0x178) != '\x03') {
          return;
        }
        FUN_140a3f01c();
        return;
      }
      lVar4 = lVar4 + -0x28;
      lVar3 = lVar3 + 0x28;
    } while (-lVar4 != (longlong)*(int *)(lVar1 + 0x228) * 0x28);
  }
  return;
}



// FUNCTION 140d4ff22 FUN_140d4ff22 body=121 status=ok
// SIG undefined FUN_140d4ff22(void)

void FUN_140d4ff22(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x228) != 0) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x220) + lVar2) == param_2) {
        lVar3 = *(longlong *)(param_1 + 0x220) - lVar3;
        if (lVar3 == 0) {
          return;
        }
        cVar1 = FUN_140a3f096(lVar3 + 0x18,param_3);
        if (cVar1 == '\0') {
          return;
        }
        if (*(char *)(param_1 + 0x178) != '\x03') {
          return;
        }
        FUN_140a3f01c();
        return;
      }
      lVar3 = lVar3 + -0x28;
      lVar2 = lVar2 + 0x28;
    } while (-lVar3 != (longlong)*(int *)(param_1 + 0x228) * 0x28);
  }
  return;
}



// FUNCTION 140d4ff9c FUN_140d4ff9c body=1258 status=ok
// SIG undefined FUN_140d4ff9c(void)

ushort * FUN_140d4ff9c(longlong *param_1,ushort *param_2,ulonglong *param_3,int param_4,
                      undefined8 param_5,uint param_6,undefined8 param_7)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong *_Dst;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  ushort *puVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  longlong *local_90;
  ulonglong *local_88;
  ulonglong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong *local_68;
  int local_60;
  undefined4 local_5c;
  byte local_58;
  ushort *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_90 = param_1;
  local_80 = param_3;
  if (param_4 == 1) {
    cVar5 = (**(code **)(*param_1 + 0x80))(param_1);
    param_1 = local_90;
    if (cVar5 == '\0') {
      param_3 = (ulonglong *)((longlong)*(int *)((longlong)local_90 + 0x44) + (longlong)local_80);
      local_88 = (ulonglong *)0x0;
    }
    else {
      param_3 = (ulonglong *)FUN_1468c8356(local_90);
      local_88 = param_3;
    }
  }
  else {
    local_88 = (ulonglong *)0x0;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  uVar6 = (**(code **)(*(longlong *)param_1[0xf] + 0x178))();
  plVar4 = (longlong *)param_1[0xf];
  iVar3 = *(int *)((longlong)plVar4 + 0x34);
  uVar2 = *param_2;
  local_70 = plVar4;
  local_68 = param_3;
  local_60 = iVar3;
  local_5c = uVar6;
  local_58 = bVar1;
  if (((ulonglong)uVar2 < 0x2d) && ((0x120000000001U >> ((ulonglong)uVar2 & 0x3f) & 1) != 0)) {
    iVar9 = (int)param_3[1];
    if (iVar9 != 0) {
      if ((0 < iVar9) && ((plVar4[7] & 0x1040000000U) == 0)) {
        if ((bVar1 & 1) == 0) {
          uVar8 = *param_3;
        }
        else {
          uVar8 = *param_3;
          if ((uVar8 & 1) != 0) {
            uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)param_3;
          }
        }
        do {
          if ((plVar4[7] & 0x1000000000U) == 0) {
            local_78 = uVar8;
            (**(code **)(*plVar4 + 0x148))(plVar4,uVar8);
            uVar8 = local_78;
          }
          uVar8 = uVar8 + (longlong)iVar3;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      *(undefined4 *)(param_3 + 1) = 0;
      if ((bVar1 & 1) == 0) {
        if (*(int *)((longlong)param_3 + 0xc) != 0) {
          FUN_14474d398(param_3,0,iVar3,uVar6);
        }
      }
      else if (*(int *)((longlong)param_3 + 0xc) != 0) {
        FUN_1468c0360(param_3,0,iVar3,uVar6);
      }
    }
  }
  else {
    local_50 = param_2 + 1;
    if (uVar2 == 0x28) {
      iVar9 = (int)param_3[1];
      if (iVar9 != 0) {
        if ((0 < iVar9) && ((plVar4[7] & 0x1040000000U) == 0)) {
          if ((bVar1 & 1) == 0) {
            uVar8 = *param_3;
          }
          else {
            uVar8 = *param_3;
            if ((uVar8 & 1) != 0) {
              uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)param_3;
            }
          }
          do {
            if ((plVar4[7] & 0x1000000000U) == 0) {
              (**(code **)(*plVar4 + 0x148))(plVar4,uVar8);
            }
            uVar8 = uVar8 + (longlong)iVar3;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        *(undefined4 *)(param_3 + 1) = 0;
        if ((bVar1 & 1) == 0) {
          if (*(int *)((longlong)param_3 + 0xc) != 0) {
            FUN_14474d398(param_3,0,iVar3,uVar6);
          }
        }
        else if (*(int *)((longlong)param_3 + 0xc) != 0) {
          FUN_1468c0360(param_3,0,iVar3,uVar6);
        }
      }
      FUN_140d50566(&local_70,0);
      FUN_1408dea53(&local_50);
      param_2 = local_50;
      if (*local_50 == 0x29) {
        FUN_14474d2ba(&local_70,0);
        param_2 = param_2 + 1;
      }
      else {
        param_2 = (ushort *)0x0;
        uVar8 = 0;
        do {
          FUN_1408dea53(&local_50);
          puVar11 = local_50;
          if (*local_50 != 0x2c) {
            if ((int)local_68[1] == 0) {
              lVar10 = 0;
            }
            else {
              if ((local_58 & 1) == 0) {
                uVar7 = *local_68;
              }
              else {
                uVar7 = *local_68;
                if ((uVar7 & 1) != 0) {
                  uVar7 = (longlong)local_68 + ((longlong)uVar7 >> 0x18);
                }
              }
              lVar10 = (longlong)local_60 * uVar8 + uVar7;
            }
            cVar5 = FUN_140d50488(plVar4,param_6 | 1,param_7);
            if ((puVar11 == (ushort *)0x0) || (cVar5 == '\0')) goto LAB_140d5018c;
            local_98 = param_7;
            local_a8 = param_5;
            local_a0 = param_6 | 0x8000001;
            local_50 = (ushort *)(**(code **)(*plVar4 + 0xf8))(plVar4,puVar11,lVar10,0);
            if (local_50 == (ushort *)0x0) goto LAB_140d5018c;
            FUN_1408dea53(&local_50);
            puVar11 = local_50;
            if (*local_50 != 0x2c) {
              param_2 = (ushort *)0x0;
              if (*local_50 == 0x29) {
                param_2 = local_50 + 1;
              }
              goto LAB_140d5018c;
            }
          }
          local_50 = puVar11 + 1;
          uVar8 = uVar8 + 1;
          FUN_140d50566(&local_70,uVar8 & 0xffffffff);
        } while (puVar11[1] != 0x29);
        param_2 = puVar11 + 2;
      }
    }
    else {
      param_2 = (ushort *)0x0;
    }
  }
LAB_140d5018c:
  if (local_88 != (ulonglong *)0x0) {
    cVar5 = (**(code **)(*local_90 + 0x80))();
    if (cVar5 == '\0') {
      _Dst = (ulonglong *)((longlong)local_80 + (longlong)*(int *)((longlong)local_90 + 0x44));
      if (_Dst != local_88) {
        if ((*(byte *)((longlong)local_90 + 0x3b) & 0x40) == 0) {
          (**(code **)(*local_90 + 0x100))(local_90,_Dst,local_88,(int)local_90[6]);
        }
        else {
          memcpy(_Dst,local_88,
                 (longlong)(int)local_90[6] * (longlong)*(int *)((longlong)local_90 + 0x34));
        }
      }
    }
    else {
      (**(code **)(*local_90 + 0x98))(local_90,local_80,local_88);
    }
    if ((*(byte *)((longlong)local_90 + 0x3c) & 0x10) == 0) {
      (**(code **)(*local_90 + 0x148))(local_90,local_88);
    }
    FUN_1400020a8(local_88);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140d50488 FUN_140d50488 body=221 status=ok
// SIG undefined FUN_140d50488(void)

undefined8 FUN_140d50488(longlong param_1,ulonglong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = CONCAT71((int7)(local_10 >> 8),1);
  if (((param_2 & 0x10) != 0) && ((*(byte *)(param_1 + 0x39) & 0x40) != 0)) {
    if (param_1 == 0) {
      FUN_140056680(&local_30,&DAT_149e01fe8);
    }
    else {
      FUN_1400021e4(param_1 + 0x20,&local_30);
    }
    puVar2 = local_30;
    if (local_28 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_20,
                  L"Import failed for \'%s\': property is config (Check to see if the property is listed in the DefaultProperties.  It should only be listed in the specific .ini file)"
                  ,puVar2);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (param_3 != 0) {
      puVar2 = local_20;
      if (local_18 == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      FUN_140047918(param_3,&DAT_149e0625e,puVar2);
    }
    if (local_20 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar1 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 140d50566 FUN_140d50566 body=291 status=ok
// SIG undefined FUN_140d50566(void)

bool FUN_140d50566(longlong *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  void *_Dst;
  
  lVar4 = param_1[1];
  iVar2 = *(int *)(lVar4 + 8);
  if (iVar2 <= param_2) {
    iVar8 = param_2 + 1;
    bVar1 = *(byte *)(param_1 + 3);
    lVar7 = param_1[2];
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
    *(int *)(lVar4 + 8) = iVar8;
    if ((bVar1 & 1) == 0) {
      if (*(int *)(lVar4 + 0xc) < iVar8) {
        FUN_14097bbd2();
      }
    }
    else if (*(int *)(lVar4 + 0xc) < iVar8) {
      FUN_1468c03c2(lVar4,iVar2,(int)lVar7,uVar3);
    }
    if (-1 < param_2 - iVar2) {
      puVar5 = (ulonglong *)param_1[1];
      if ((int)puVar5[1] == 0) {
        _Dst = (void *)0x0;
      }
      else {
        if ((*(byte *)(param_1 + 3) & 1) == 0) {
          uVar9 = *puVar5;
        }
        else {
          uVar9 = *puVar5;
          if ((uVar9 & 1) != 0) {
            uVar9 = (longlong)puVar5 + ((longlong)uVar9 >> 0x18);
          }
        }
        _Dst = (void *)((longlong)(int)param_1[2] * (longlong)iVar2 + uVar9);
      }
      if ((*(byte *)(*param_1 + 0x39) & 2) == 0) {
        iVar8 = (param_2 - iVar2) + 1;
        do {
          plVar6 = (longlong *)*param_1;
          if ((*(byte *)((longlong)plVar6 + 0x39) & 2) == 0) {
            (**(code **)(*plVar6 + 0x160))();
          }
          else {
            memset(_Dst,0,(longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
          }
          _Dst = (void *)((longlong)_Dst + (longlong)(int)param_1[2]);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      else {
        memset(_Dst,0,(longlong)(int)param_1[2] * (ulonglong)((param_2 - iVar2) + 1));
      }
    }
  }
  return iVar2 <= param_2;
}



// FUNCTION 140d50689 FUN_140d50689 body=269 status=ok
// SIG undefined FUN_140d50689(void)

ulonglong FUN_140d50689(longlong param_1,longlong *param_2,uint param_3,float *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined8 unaff_RBP;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((int)param_3 < *(int *)(param_1 + 0x28)) {
    *param_4 = 0.0;
    uVar7 = 0xffffffff;
    if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x28))) {
      uVar7 = *(uint *)(*(longlong *)(param_1 + 0x20) + 8 + (ulonglong)param_3 * 0xc);
    }
    cVar5 = FUN_140d50796(param_1,uVar7);
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    while (((cVar5 == '\0' && (-1 < (int)param_3)) && ((int)param_3 < (int)param_2[1]))) {
      pdVar1 = (double *)(*param_2 + 0x20 + (ulonglong)param_3 * 0x60);
      dVar3 = *pdVar1;
      dVar4 = pdVar1[1];
      dVar2 = *(double *)(*param_2 + 0x30 + (ulonglong)param_3 * 0x60);
      *param_4 = (float)((double)*param_4 + SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4));
      if (uVar7 == 0xffffffff) goto LAB_140d50785;
      uVar8 = 0xffffffff;
      if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 0x28))) {
        uVar8 = *(uint *)(*(longlong *)(param_1 + 0x20) + 8 + (ulonglong)uVar7 * 0xc);
      }
      cVar5 = FUN_140d50796(param_1,uVar8);
      param_3 = uVar7;
      uVar7 = uVar8;
    }
  }
  else {
LAB_140d50785:
    uVar6 = 0;
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 140d50796 FUN_140d50796 body=293 status=ok
// SIG undefined FUN_140d50796(void)

ulonglong FUN_140d50796(longlong param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28 [2];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x28))) {
    local_18 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)param_2 * 0xc);
    if (local_18 == DAT_14caddd90) {
      uVar4 = 1;
    }
    else {
      FUN_1400021e4(&local_18,local_28);
      iVar5 = DAT_14caddda0 + -1;
      puVar3 = DAT_14caddd98;
      if (DAT_14caddda0 == 0) {
        puVar3 = &DAT_149dfb77a;
        iVar5 = 0;
      }
      cVar1 = FUN_144a38768(local_28,puVar3,iVar5,1);
      if (cVar1 == '\0') {
        FUN_1400021e4(&local_18,local_38);
        iVar5 = DAT_14cadddb0 + -1;
        puVar3 = DAT_14caddda8;
        if (DAT_14cadddb0 == 0) {
          puVar3 = &DAT_149dfb77a;
          iVar5 = 0;
        }
        uVar2 = FUN_144a38768(local_38,puVar3,iVar5,1);
        uVar4 = (ulonglong)uVar2;
        if (local_38[0] != 0) {
          FUN_1400020a8();
        }
      }
      else {
        uVar4 = CONCAT71((int7)((ulonglong)local_28 >> 8),1);
      }
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d508bc FUN_140d508bc body=245 status=ok
// SIG undefined FUN_140d508bc(void)

void FUN_140d508bc(char *param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  char *local_78;
  undefined1 *local_70;
  uint *local_68;
  char *local_60;
  code *local_58;
  undefined8 *local_50;
  char local_41;
  uint local_40 [2];
  longlong local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = param_2;
  local_29 = param_4;
  if (param_2 != 0) {
    cVar1 = FUN_140d509b2(param_2);
    if (cVar1 != '\0') {
      FUN_1401f7bd6(local_40,param_2);
      if ((local_40[0] >> 0xd & 1) == 0) {
        local_41 = '\0';
      }
      else {
        local_41 = *param_1;
        if (local_41 == '\x01') {
          local_40[0] = local_40[0] & 0xfffff0ff | 0x100;
        }
      }
      local_50 = &local_88;
      local_80 = &local_38;
      local_78 = &local_41;
      local_70 = &local_29;
      local_58 = FUN_143802ab2;
      local_88 = param_3;
      local_68 = local_40;
      local_60 = param_1;
      FUN_1448e6002(param_2 + 0x138);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d509b2 FUN_140d509b2 body=255 status=ok
// SIG undefined FUN_140d509b2(void)

ulonglong FUN_140d509b2(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong unaff_RDI;
  ulonglong uVar7;
  
  if (((*(int *)(param_1 + 0x144) != 0) && (uVar2 = *(uint *)(param_1 + 0x140), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    puVar6 = (ulonglong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((puVar6 != (ulonglong *)0x0) && ((int)puVar6[2] == *(int *)(param_1 + 0x144))) &&
       (((puVar6[1] & 0x10200000) == 0 && (unaff_RDI = *puVar6, unaff_RDI != 0)))) {
      lVar4 = FUN_140d50ab2();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(unaff_RDI + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
        uVar7 = CONCAT71((int7)(unaff_RDI >> 8),1);
        goto LAB_140d50a84;
      }
    }
  }
  lVar4 = DAT_14cb1cd10;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar5 = 0;
  }
  else if (iVar1 == 1) {
    uVar2 = FUN_140ad26c0();
    unaff_RDI = (ulonglong)uVar2;
    DVar3 = GetCurrentThreadId();
    uVar5 = (ulonglong)(uVar2 != DVar3);
  }
  else {
    uVar5 = 1;
  }
  uVar7 = CONCAT71((int7)(unaff_RDI >> 8),1);
  if (*(char *)(lVar4 + uVar5) == '\0') {
    lVar4 = FUN_140aa2aee(param_1);
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x31) == '\x03')) {
      uVar7 = 0;
    }
  }
LAB_140d50a84:
  return uVar7 & 0xffffffff;
}



// FUNCTION 140d50ab2 FUN_140d50ab2 body=228 status=ok
// SIG undefined FUN_140d50ab2(void)

longlong FUN_140d50ab2(void)

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
  if (DAT_14cad1950 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1463b90d8;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_1479e6e7d;
    local_40 = &LAB_145ad2775;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x660;
    FUN_14081cfa3(L"/Script/Engine",L"ModelComponent",&DAT_14cad1950,&DAT_1479e6e7c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad1950;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d50b9e FUN_140d50b9e body=57 status=ok
// SIG undefined FUN_140d50b9e(void)

void FUN_140d50b9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7470 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7470 = FUN_140002ddd(FUN_1465cbcc4,uVar1,L"OakBodyNodeState_Radio");
  }
  return;
}



// FUNCTION 140d50be6 FUN_140d50be6 body=40 status=ok
// SIG undefined FUN_140d50be6(void)

undefined8 FUN_140d50be6(undefined8 param_1,int param_2)

{
  FUN_1403d767a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d50c0e FUN_140d50c0e body=58 status=ok
// SIG undefined FUN_140d50c0e(void)

undefined8 * FUN_140d50c0e(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x188,0x10);
  FUN_140d50c48(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b9e0af0;
  return puVar1;
}



// FUNCTION 140d50c48 FUN_140d50c48 body=75 status=ok
// SIG undefined FUN_140d50c48(void)

undefined8 * FUN_140d50c48(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1408e1156();
    uVar1 = FUN_144718840(param_2,uVar1);
  }
  FUN_140d50c94(param_1,uVar1);
  *param_1 = &PTR_FUN_14b4ab3c0;
  param_1[0x30] = param_2;
  return param_1;
}



// FUNCTION 140d50c94 FUN_140d50c94 body=535 status=ok
// SIG undefined FUN_140d50c94(void)

undefined8 * FUN_140d50c94(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
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
  *param_1 = &PTR_FUN_14b411468;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 4) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  param_1[6] = DAT_14c8464f0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[7] = param_2;
  lVar4 = (**(code **)(*param_2 + 8))(param_2);
  if (lVar4 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_140d50dd5;
  }
  lVar4 = 0;
LAB_140d50dd5:
  param_1[8] = lVar4;
  *(undefined1 *)(param_1 + 0xf) = 0x48;
  *(byte *)((longlong)param_1 + 0x79) = *(byte *)((longlong)param_1 + 0x79) & 0xf0;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d50eac FUN_140d50eac body=31 status=ok
// SIG undefined FUN_140d50eac(void)

undefined1
FUN_140d50eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_140d50ecc(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 140d50ecc FUN_140d50ecc body=111 status=ok
// SIG undefined FUN_140d50ecc(void)

bool FUN_140d50ecc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  bVar5 = uVar2 == *(uint *)(param_2 + 0x28);
  if ((0 < (int)uVar2) && (uVar2 == *(uint *)(param_2 + 0x28))) {
    uVar3 = 0;
    do {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + uVar3 * 0xc);
      lVar4 = 0;
      while (*plVar1 != *(longlong *)(*(longlong *)(param_2 + 0x20) + lVar4)) {
        lVar4 = lVar4 + 0xc;
        if ((ulonglong)uVar2 * 0xc == lVar4) {
          return false;
        }
      }
      bVar5 = (char)plVar1[1] == *(char *)(*(longlong *)(param_2 + 0x20) + 8 + lVar4);
      uVar3 = uVar3 + 1;
    } while (bVar5 && uVar3 != uVar2);
  }
  return bVar5;
}



// FUNCTION 140d50f4a FUN_140d50f4a body=40 status=ok
// SIG undefined FUN_140d50f4a(void)

undefined8 FUN_140d50f4a(undefined8 param_1,int param_2)

{
  FUN_140d50f72();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d50f72 FUN_140d50f72 body=457 status=ok
// SIG undefined FUN_140d50f72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d50f72(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b366840;
  param_1[0x16] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (*(int *)((longlong)param_1 + 0xcc) != 0) {
    FUN_140115c12(param_1 + 0x18,0);
  }
  param_1[0x17] = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d9938(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d9938(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d9938(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b351e60;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1406e9484(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000140d51105. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140d5113c FUN_140d5113c body=1362 status=ok
// SIG undefined FUN_140d5113c(void)

void FUN_140d5113c(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined8 *local_e0;
  code *local_d8;
  code *local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined4 local_41;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_140d519d2();
  pcVar2 = *(code **)(*param_1 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    if (param_1[0x76] != 0) goto LAB_140d5121d;
    pcVar2 = *(code **)(*param_1 + 0x5f8);
    if (pcVar2 == FUN_144784df4) {
      if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
        if ((((*(int *)((longlong)param_1 + 0x75b4) != 0) &&
             (uVar1 = *(uint *)(param_1 + 0xeb6), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
           && (((plVar6 = (longlong *)
                          ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                plVar6 != (longlong *)0x0 &&
                ((int)plVar6[2] == *(int *)((longlong)param_1 + 0x75b4))) &&
               ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
            lVar3 = *plVar6;
          }
          else {
            lVar3 = 0;
          }
          lVar3 = lVar3 + 0x110;
          goto LAB_140d514c5;
        }
      }
      else {
        lVar3 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
LAB_140d514c5:
        if (lVar3 != 0) {
          lVar3 = *(longlong *)(lVar3 + 0x20);
          goto LAB_140d514d2;
        }
      }
    }
    else {
      lVar3 = (*pcVar2)(param_1);
LAB_140d514d2:
      if (lVar3 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x3b0);
        goto LAB_140d514e2;
      }
    }
  }
  else {
    lVar3 = (*pcVar2)(param_1);
LAB_140d514e2:
    if (lVar3 != 0) goto LAB_140d5121d;
  }
  if (param_3 == (longlong *)0x0) {
    uVar5 = 0;
    local_c0 = (code *)((ulonglong)local_c0._4_4_ << 0x20);
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0xffffffff;
    local_44 = 0;
    local_42 = 1;
    local_41 = 0;
    lVar3 = FUN_140316ff8();
    lVar3 = lVar3 + 0x90;
    lVar4 = FUN_1447210f0(param_1);
    if (lVar4 != 0) {
      uVar5 = FUN_140115352(lVar4);
    }
    param_3 = param_1;
    param_1 = (longlong *)0x0;
  }
  else {
    if (param_4 != 0) goto LAB_140d5121d;
    uVar5 = 0;
    local_c0 = (code *)((ulonglong)local_c0._4_4_ << 0x20);
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0xffffffff;
    local_44 = 0;
    local_42 = 1;
    local_41 = 0;
    lVar3 = FUN_140316ff8();
    lVar4 = FUN_1447210f0(param_1);
    if (lVar4 != 0) {
      uVar5 = FUN_140115352(lVar4);
    }
    local_118 = &local_c0;
    FUN_140d5168f(uVar5,lVar3 + 0x78,param_1,param_3);
    if (DAT_14caf64b8 == 0) {
      local_c0 = FUN_141030f22;
      local_d0 = FUN_14081d0ea;
      local_d8 = FUN_142b4754c;
      local_e8 = &LAB_147c45ce0;
      local_f0 = &LAB_1463f1ff4;
      local_f8 = &DAT_149e063b2;
      local_100 = 0x4000000000;
      local_108 = 0x10000004;
      local_110 = 8;
      local_118 = (undefined8 *)CONCAT44(local_118._4_4_,0x428);
      local_e0 = &local_c0;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(param_3[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) !=
        DAT_14caf64b8 + 0x30)) goto LAB_140d5121d;
    pcVar2 = *(code **)(*param_3 + 0x5e8);
    if (pcVar2 == FUN_140972dde) {
      if (param_3[0x76] == 0) {
        pcVar2 = *(code **)(*param_3 + 0x5f8);
        if (pcVar2 == FUN_144784df4) {
          if (*(code **)(param_3[0x784] + 0x18) == (code *)&LAB_144904684) {
            if (((((*(int *)((longlong)param_3 + 0x75b4) == 0) ||
                  (uVar1 = *(uint *)(param_3 + 0xeb6), (int)uVar1 < 0)) ||
                 (DAT_14c9647dc <= (int)uVar1)) ||
                ((plVar6 = (longlong *)
                           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 plVar6 == (longlong *)0x0 ||
                 ((int)plVar6[2] != *(int *)((longlong)param_3 + 0x75b4))))) ||
               ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) goto LAB_140d5121d;
            if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
              lVar3 = *plVar6;
            }
            else {
              lVar3 = 0;
            }
            lVar3 = lVar3 + 0x110;
          }
          else {
            lVar3 = (**(code **)(param_3[0x784] + 0x18))(param_3 + 0x784);
          }
          if (lVar3 == 0) goto LAB_140d5121d;
          lVar3 = *(longlong *)(lVar3 + 0x20);
        }
        else {
          lVar3 = (*pcVar2)(param_3);
        }
        if (lVar3 == 0) goto LAB_140d5121d;
        lVar3 = *(longlong *)(lVar3 + 0x3b0);
        goto LAB_140d51403;
      }
    }
    else {
      lVar3 = (*pcVar2)(param_3);
LAB_140d51403:
      if (lVar3 == 0) goto LAB_140d5121d;
    }
    uVar5 = 0;
    local_c0 = (code *)((ulonglong)local_c0 & 0xffffffff00000000);
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0xffffffff;
    local_44 = 0;
    local_42 = 1;
    local_41 = 0;
    lVar3 = FUN_140316ff8();
    lVar3 = lVar3 + 0xa8;
    lVar4 = FUN_1447210f0(param_1);
    if (lVar4 != 0) {
      uVar5 = FUN_140115352(lVar4);
    }
  }
  local_118 = &local_c0;
  FUN_140d5168f(uVar5,lVar3,param_3,param_1);
LAB_140d5121d:
  if ((local_38 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d5168f FUN_140d5168f body=833 status=ok
// SIG undefined FUN_140d5168f(void)

undefined4
FUN_140d5168f(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_3a8 [32];
  undefined8 local_388;
  undefined4 local_380;
  undefined4 local_378;
  undefined8 local_370;
  wchar_t *local_368;
  code *local_360;
  undefined1 *local_358;
  uint *local_350;
  code *local_348;
  code *local_340;
  longlong local_338;
  longlong local_330;
  uint local_328;
  uint uStack_324;
  int iStack_320;
  undefined8 local_31c;
  undefined1 local_310 [704];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  uVar6 = 0;
  local_338 = param_3;
  local_330 = param_4;
  uVar4 = 0;
  if ((param_1 == 0) || (cVar3 = FUN_1407ae416(), cVar3 != '\0')) goto LAB_140d51833;
  lVar8 = param_2[1];
  if (lVar8 == 0) {
    uVar5 = FUN_1407ad36c();
    lVar8 = FUN_14477b664(uVar5);
    param_2[1] = lVar8;
  }
  if (param_2[2] == 0) {
    uVar4 = uVar6;
    if ((lVar8 == 0) || (*param_2 == 0)) goto LAB_140d51833;
    plVar1 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      param_2[2] = 0;
      goto LAB_140d51833;
    }
    uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar8 = FUN_144aff482(uVar5,param_2);
    param_2[2] = lVar8;
    if (lVar8 == 0) goto LAB_140d51833;
  }
  lVar8 = *(longlong *)(param_1 + 0x20);
  uVar9 = 0;
  if (lVar8 == 0) {
LAB_140d51995:
    iStack_320 = 0;
  }
  else {
    if (DAT_14cb10130 == 0) {
      local_350 = &local_328;
      local_328 = 0x40754f84;
      uStack_324 = 1;
      local_340 = FUN_14081d0ea;
      local_348 = FUN_14081d0ea;
      local_358 = &LAB_147da9a76;
      local_360 = FUN_1409f3105;
      local_368 = L"Engine";
      local_370 = 0;
      local_378 = 0x10000000;
      local_380 = 8;
      local_388 = CONCAT44(local_388._4_4_,0x990);
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if (*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38))
    goto LAB_140d51995;
    uVar9 = 0;
    iStack_320 = 0;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30) {
      uVar9 = *(uint *)(lVar8 + 0xc);
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iStack_320 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iStack_320 = *(int *)(lVar8 + 0x10);
        bVar10 = iStack_320 == 0;
        if (bVar10) {
          *(int *)(lVar8 + 0x10) = iVar7;
          iStack_320 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iStack_320 = iVar7;
        }
      }
    }
  }
  local_328 = local_328 & 0xffffff00;
  local_31c = 0;
  local_50 = 0;
  local_48 = 0x800000000;
  uStack_324 = uVar9;
  if (param_3 != 0) {
    lVar8 = FUN_140316ff8();
    FUN_1407aea1c(&local_328,lVar8 + 0x1b0,&local_338);
  }
  if (param_4 != 0) {
    lVar8 = FUN_140316ff8();
    FUN_1407aea1c(&local_328,lVar8 + 0x198,&local_330);
  }
  local_388 = 0;
  uVar4 = FUN_1407af00a(param_1,param_2,&local_328,param_5);
  FUN_1407acd04(local_310);
LAB_140d51833:
  if ((local_40 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140d519d2 FUN_140d519d2 body=2691 status=ok
// SIG undefined FUN_140d519d2(void)

void FUN_140d519d2(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  byte bVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined8 *puVar26;
  int iVar27;
  bool bVar28;
  undefined1 auStack_138 [32];
  undefined2 *local_118;
  ulonglong local_108;
  longlong local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  undefined8 *local_b8;
  undefined4 local_b0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_b8 = param_3;
  FUN_1447cd2ec(param_1 + 0x110);
  lVar11 = FUN_1447210f0(param_1);
  if (lVar11 == 0) goto LAB_140d51ad2;
  pcVar5 = *(code **)(*param_1 + 0x5e8);
  if (pcVar5 == FUN_140972dde) {
    if (param_1[0x76] == 0) {
      pcVar5 = *(code **)(*param_1 + 0x5f8);
      if (pcVar5 == FUN_144784df4) {
        if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
          if ((((*(int *)((longlong)param_1 + 0x75b4) == 0) ||
               (uVar25 = *(uint *)(param_1 + 0xeb6), (int)uVar25 < 0)) ||
              (DAT_14c9647dc <= (int)uVar25)) ||
             (((plVar19 = (longlong *)
                          ((ulonglong)((uVar25 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8)),
               plVar19 == (longlong *)0x0 ||
               ((int)plVar19[2] != *(int *)((longlong)param_1 + 0x75b4))) ||
              ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)))) goto LAB_140d51ad2;
          if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
            lVar12 = *plVar19;
          }
          else {
            lVar12 = 0;
          }
          lVar12 = lVar12 + 0x110;
        }
        else {
          lVar12 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
        }
        if (lVar12 == 0) goto LAB_140d51ad2;
        lVar12 = *(longlong *)(lVar12 + 0x20);
      }
      else {
        lVar12 = (*pcVar5)(param_1);
      }
      if (lVar12 == 0) goto LAB_140d51ad2;
      lVar12 = *(longlong *)(lVar12 + 0x3b0);
      goto LAB_140d51b34;
    }
  }
  else {
    lVar12 = (*pcVar5)(param_1);
LAB_140d51b34:
    if (lVar12 == 0) goto LAB_140d51ad2;
  }
  if (*(longlong *)(lVar11 + 0x1f0) == 0) {
    plVar19 = (longlong *)(lVar11 + 0x458);
  }
  else {
    plVar19 = (longlong *)(*(longlong *)(lVar11 + 0x1f0) + 0xf0);
  }
  lVar11 = *plVar19;
  if (param_4 != 0) {
    plVar19 = (longlong *)FUN_140d525d4();
    local_100 = plVar19[0x22];
    if (local_100 == 0) {
      (**(code **)(*plVar19 + 1000))(plVar19);
      local_100 = plVar19[0x22];
    }
    if (param_1 == (longlong *)0x0) {
      local_108 = 0;
      local_e0 = 0;
    }
    else {
      uVar25 = *(uint *)((longlong)param_1 + 0xc);
      local_108 = (ulonglong)uVar25;
      if ((int)uVar25 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      local_e0 = (ulonglong)*(uint *)(lVar12 + 0x10);
      if (*(uint *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar27 = DAT_14c964868 + 1;
        UNLOCK();
        uVar25 = DAT_14c964868 + 1;
        bVar28 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar27;
        if (bVar28) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar25);
        }
        LOCK();
        uVar10 = *(uint *)(lVar12 + 0x10);
        bVar28 = uVar10 == 0;
        if (bVar28) {
          *(uint *)(lVar12 + 0x10) = uVar25;
          uVar10 = 0;
        }
        UNLOCK();
        if (bVar28) {
          uVar10 = uVar25;
        }
        local_e0 = (ulonglong)uVar10;
      }
    }
    uVar25 = *(uint *)(param_4 + 0xc);
    if ((int)uVar25 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    uVar10 = *(uint *)(lVar12 + 0x10);
    local_e8 = param_4;
    if (*(uint *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar27 = DAT_14c964868 + 1;
      UNLOCK();
      uVar22 = DAT_14c964868 + 1;
      bVar28 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar27;
      if (bVar28) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar22);
      }
      LOCK();
      uVar10 = *(uint *)(lVar12 + 0x10);
      bVar28 = uVar10 == 0;
      if (bVar28) {
        *(uint *)(lVar12 + 0x10) = uVar22;
        uVar10 = 0;
      }
      UNLOCK();
      if (bVar28) {
        uVar10 = uVar22;
      }
    }
    plVar19 = param_1 + 0x50c;
    puVar26 = (undefined8 *)CONCAT44(uVar10,uVar25);
    uVar25 = uVar25 ^ uVar10;
    iVar27 = (int)param_1[0x50d];
    local_d8 = lVar11;
    if (iVar27 != *(int *)((longlong)param_1 + 0x2894)) {
      plVar13 = param_1 + 0x513;
      if ((longlong *)param_1[0x514] != (longlong *)0x0) {
        plVar13 = (longlong *)param_1[0x514];
      }
      iVar27 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[0x515] - 1U & uVar25) * 4);
      if (iVar27 != -1) {
        lVar12 = *plVar19;
        do {
          lVar11 = (longlong)iVar27;
          local_b8 = *(undefined8 **)(lVar12 + lVar11 * 0x18);
          local_d0 = puVar26;
          cVar8 = FUN_14486088a(&local_b8,&local_d0);
          lVar12 = *plVar19;
          if (cVar8 != '\0') {
            if (lVar12 + lVar11 * 0x18 != 0) {
              lVar12 = lVar12 + lVar11 * 0x18;
              goto LAB_140d51e0f;
            }
            break;
          }
          iVar27 = *(int *)(lVar12 + 0x10 + lVar11 * 0x18);
        } while (iVar27 != -1);
      }
      iVar27 = *(int *)((longlong)param_1 + 0x2894);
    }
    if (iVar27 == 0) {
      iVar23 = (int)param_1[0x50d];
      *(int *)(param_1 + 0x50d) = iVar23 + 1;
      if (*(int *)((longlong)param_1 + 0x286c) == iVar23) {
        FUN_14482b872(plVar19,iVar23);
      }
      iVar27 = (int)param_1[0x511];
      if (iVar27 == 0) {
        iVar9 = -1;
      }
      else {
        iVar9 = iVar27 + 0x1e;
        if (-1 < iVar27 + -1) {
          iVar9 = iVar27 + -1;
        }
        iVar9 = iVar9 >> 5;
      }
      plVar13 = param_1 + 0x50e;
      iVar15 = iVar27 + 1;
      iVar21 = iVar27 + 0x1f;
      if (-1 < iVar27) {
        iVar21 = iVar27;
      }
      if (iVar21 >> 5 == iVar9) {
        *(int *)(param_1 + 0x511) = iVar15;
      }
      else {
        if (*(int *)((longlong)param_1 + 0x288c) <= iVar27) {
          local_f8 = plVar13;
          local_f0 = plVar19;
          if (iVar27 + 0x20U < 0xa0) {
            iVar15 = 0x80;
            iVar9 = iVar27;
          }
          else {
            uVar10 = iVar27 + 0x20U >> 5;
            if (*(int *)((longlong)param_1 + 0x288c) + 0x1fU < 0xa0) {
              uVar22 = 4;
              if (4 < uVar10) {
                uVar22 = uVar10;
              }
            }
            else {
              uVar22 = (uVar10 * 3 >> 3) + uVar10 + 0x10;
            }
            uVar16 = FUN_144a3809e(uVar22 << 2,0);
            iVar9 = (int)(uVar16 >> 2);
            iVar15 = -0x20;
            if ((int)uVar10 <= iVar9) {
              iVar15 = iVar9 << 5;
            }
            iVar9 = (int)param_1[0x511];
          }
          plVar13 = local_f8;
          *(int *)((longlong)param_1 + 0x288c) = iVar15;
          FUN_1446efbd8(local_f8,iVar9);
          iVar15 = (int)param_1[0x511] + 1;
          plVar19 = local_f0;
        }
        iVar9 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar9 = iVar15;
        }
        *(int *)(param_1 + 0x511) = iVar15;
        if (iVar15 % 0x20 != 0) {
          plVar20 = (longlong *)param_1[0x510];
          if ((longlong *)param_1[0x510] == (longlong *)0x0) {
            plVar20 = plVar13;
          }
          bVar14 = -(char)(iVar15 % 0x20);
          *(uint *)((longlong)plVar20 + (longlong)(iVar9 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar20 + (longlong)(iVar9 >> 5) * 4) << (bVar14 & 0x1f))
               >> (bVar14 & 0x1f);
        }
      }
      lVar11 = (longlong)iVar23;
      if ((longlong *)param_1[0x510] != (longlong *)0x0) {
        plVar13 = (longlong *)param_1[0x510];
      }
      bVar14 = (byte)iVar27 & 0x1f;
      puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar21 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
    }
    else {
      iVar23 = (int)param_1[0x512];
      lVar11 = (longlong)iVar23;
      iVar9 = *(int *)(param_1[0x50c] + 4 + lVar11 * 0x18);
      *(int *)(param_1 + 0x512) = iVar9;
      *(int *)((longlong)param_1 + 0x2894) = iVar27 + -1;
      if (iVar27 + -1 != 0) {
        *(undefined4 *)(param_1[0x50c] + (longlong)iVar9 * 0x18) = 0xffffffff;
      }
    }
    plVar13 = param_1 + 0x50e;
    if ((longlong *)param_1[0x510] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[0x510];
    }
    iVar27 = iVar23 + 0x1f;
    if (-1 < iVar23) {
      iVar27 = iVar23;
    }
    puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar27 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar23 & 0x1f);
    iVar27 = 1;
    puVar2 = (undefined8 *)(param_1[0x50c] + lVar11 * 0x18);
    *puVar2 = puVar26;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0xffffffff;
    if ((int)param_1[0x50d] - *(int *)((longlong)param_1 + 0x2894) == 1) {
      uVar10 = 1;
LAB_140d51d98:
      if (((int)uVar10 < 1) || (iVar27 <= (int)param_1[0x515])) {
        uVar25 = (int)param_1[0x515] - 1U & uVar25;
        *(uint *)((longlong)puVar2 + 0x14) = uVar25;
        plVar13 = (longlong *)param_1[0x514];
        if ((longlong *)param_1[0x514] == (longlong *)0x0) {
          plVar13 = param_1 + 0x513;
        }
        *(undefined4 *)(puVar2 + 2) =
             *(undefined4 *)
              ((longlong)plVar13 + ((longlong)(int)param_1[0x515] - 1U & (longlong)(int)uVar25) * 4)
        ;
        plVar13 = (longlong *)param_1[0x514];
        if ((longlong *)param_1[0x514] == (longlong *)0x0) {
          plVar13 = param_1 + 0x513;
        }
        *(int *)((longlong)plVar13 +
                ((longlong)(int)param_1[0x515] - 1U & (longlong)(int)uVar25) * 4) = iVar23;
      }
      else {
        *(int *)(param_1 + 0x515) = iVar27;
        FUN_140d52ece(plVar19);
      }
    }
    else {
      local_b8 = puVar26;
      iVar9 = FUN_140d52456(plVar19,uVar25);
      if (iVar9 == -1) {
        uVar10 = (int)param_1[0x50d] - *(int *)((longlong)param_1 + 0x2894);
        if (3 < uVar10) {
          uVar16 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
          lVar11 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar27 = 1 << ((byte)lVar11 & 0x1f);
        }
        goto LAB_140d51d98;
      }
      uVar4 = *(undefined4 *)((longlong)puVar2 + 4);
      uVar6 = *(undefined4 *)(puVar2 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar2 + 0xc);
      puVar3 = (undefined4 *)(*plVar19 + (longlong)iVar9 * 0x18);
      *puVar3 = *(undefined4 *)puVar2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      FUN_140d52562(plVar19,iVar23);
    }
    lVar12 = *plVar19 + (longlong)iVar23 * 0x18;
LAB_140d51e0f:
    uVar4 = *(undefined4 *)(local_100 + 0x38);
    uVar16 = local_108 & 0xffffffff;
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    puVar2 = local_d0;
    local_c8 = 3;
    *local_d0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar17 == 0) {
      LOCK();
      UNLOCK();
      lVar17 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    uVar24 = local_e0 << 0x20;
    local_d0[2] = lVar17;
    *local_d0 = &PTR_FUN_14b3e7960;
    local_d0[3] = 0;
    uVar25 = *(uint *)(local_e8 + 0xc);
    *(uint *)(local_d0 + 3) = uVar25;
    if ((int)uVar25 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar27 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar27 = DAT_14c964868 + 1;
      UNLOCK();
      iVar23 = DAT_14c964868 + 1;
      bVar28 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar27;
      if (bVar28) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar23);
      }
      LOCK();
      iVar27 = *(int *)(lVar11 + 0x10);
      bVar28 = iVar27 == 0;
      if (bVar28) {
        *(int *)(lVar11 + 0x10) = iVar23;
        iVar27 = 0;
      }
      UNLOCK();
      if (bVar28) {
        iVar27 = iVar23;
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar27;
    puVar2[4] = puVar26;
    puVar2[5] = uVar24 | uVar16;
    local_b8 = (undefined8 *)0x0;
    local_b0 = 0;
    FUN_14487d8d8(&local_b8,&local_d0);
    lVar11 = local_d8;
    local_78 = 1;
    local_118 = local_c0;
    local_c0[0] = 0;
    local_bc = 0xbf800000;
    FUN_1406f4044(local_d8,lVar12 + 8,&local_b8,uVar4);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
    if (local_c8 != 0) {
      if (local_d0 == (undefined8 *)0x0) goto LAB_140d51f65;
      (**(code **)*local_d0)(local_d0,0);
      FUN_1446efa72(&local_d0,0,0,0x10);
      local_c8 = 0;
    }
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140d51f65:
  if (param_3 != (undefined8 *)0x0) {
    uVar25 = *(uint *)((longlong)param_3 + 0xc);
    if ((int)uVar25 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    param_1 = param_1 + 0x50c;
    uVar10 = *(uint *)(lVar12 + 0x10);
    if (*(uint *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar27 = DAT_14c964868 + 1;
      UNLOCK();
      uVar22 = DAT_14c964868 + 1;
      bVar28 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar27;
      if (bVar28) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar22);
      }
      LOCK();
      uVar10 = *(uint *)(lVar12 + 0x10);
      bVar28 = uVar10 == 0;
      if (bVar28) {
        *(uint *)(lVar12 + 0x10) = uVar22;
        uVar10 = 0;
      }
      UNLOCK();
      if (bVar28) {
        uVar10 = uVar22;
      }
    }
    local_b8 = (undefined8 *)CONCAT44(uVar10,uVar25);
    iVar27 = FUN_140d52456(param_1,uVar25 ^ uVar10);
    if (iVar27 != -1) {
      lVar12 = *(longlong *)(*param_1 + 8 + (longlong)iVar27 * 0x18);
      FUN_140d5250c(param_1,iVar27);
      if (lVar12 != 0) {
        uVar25 = (uint)lVar12;
        if ((int)(uVar25 & 0xffffff) < *(int *)(lVar11 + 0x10)) {
          lVar17 = lVar11 + 0x18;
          if (*(longlong *)(lVar11 + 0x28) != 0) {
            lVar17 = *(longlong *)(lVar11 + 0x28);
          }
          if ((*(uint *)(lVar17 + (ulonglong)((uVar25 & 0xffffff) >> 5) * 4) >> (uVar25 & 0x1f) & 1)
              != 0) {
            lVar17 = *(longlong *)(lVar11 + 8);
            lVar18 = (ulonglong)(uVar25 & 0xffffff) * 0x70;
            if (((lVar17 + lVar18 != 0) && (*(longlong *)(lVar17 + 0x60 + lVar18) == lVar12)) &&
               (*(char *)(lVar17 + 1 + lVar18) != '\x04')) {
              FUN_1405a424c(lVar11,lVar12);
            }
          }
        }
      }
    }
    FUN_140d526ba(param_3,1);
  }
LAB_140d51ad2:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d52456 FUN_140d52456 body=180 status=ok
// SIG undefined FUN_140d52456(void)

int FUN_140d52456(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        cVar1 = FUN_14472d054(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_140d524e4;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_140d524e4:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d5250c FUN_140d5250c body=85 status=ok
// SIG undefined FUN_140d5250c(void)

void FUN_140d5250c(longlong *param_1,int param_2)

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
  FUN_140d52562();
  return;
}



// FUNCTION 140d52562 FUN_140d52562 body=114 status=ok
// SIG undefined FUN_140d52562(void)

void FUN_140d52562(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 140d525d4 FUN_140d525d4 body=228 status=ok
// SIG undefined FUN_140d525d4(void)

longlong FUN_140d525d4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb59ff0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_14866296b;
    local_40 = FUN_1464c7aa6;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000002;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxAnimSettings",&DAT_14cb59ff0,&DAT_14866296a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb59ff0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d526ba FUN_140d526ba body=1925 status=ok
// SIG undefined FUN_140d526ba(void)

void FUN_140d526ba(wchar_t *param_1,ulonglong param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 local_a1;
  wchar_t *local_a0;
  undefined8 local_98;
  code *local_90;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar4 = local_78;
  if (param_1 == (wchar_t *)0x0) goto LAB_140d52dd2;
  param_2 = param_2 & 0xffffffff;
  pwVar9 = param_1;
  if (DAT_14cb63950 == 0) {
    local_c0 = &local_90;
    local_90 = FUN_144a7958c;
    local_b0 = FUN_14081d0ea;
    local_b8 = (code *)&LAB_1464ec72a;
    local_c8 = &LAB_1486f5f75;
    local_d0 = &LAB_140945686;
    local_d8 = L"Engine";
    local_e0 = 0;
    local_e8 = 0x10000004;
    local_f0 = 0x10;
    local_f8 = 0x19d0;
    pwVar9 = L"/Script/GbxGame";
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
  }
  lVar3 = DAT_14cb63950;
  if ((DAT_14cb63950 == 0) || (DAT_14c950c29 == 0)) {
    if (DAT_14cb63950 != 0) goto LAB_140d52719;
    local_98 = CONCAT71((int7)((ulonglong)pwVar9 >> 8),1);
    if (DAT_14cad00c8 == 0) goto LAB_140d52bde;
LAB_140d52c75:
    lVar14 = 0;
LAB_140d52757:
    bVar10 = lVar3 != 0 & DAT_14c950c29;
    if (lVar14 == DAT_14cad00c8) {
      if (bVar10 != 0) {
        FUN_1456cec3c(lVar3);
      }
      pcVar1 = (code *)(param_1 + 0x120);
      pwVar9 = param_1 + 0x128;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = pwVar9;
      if (*(int *)(param_1 + 0x134) == 0) {
        iVar13 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar13 = *(int *)(param_1 + 0x134);
      }
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar4 = local_78;
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_90 = pcVar1;
      if ((local_78._4_4_ != iVar13) || (uStack_60 != pwVar9)) {
        iVar5 = local_78._4_4_;
        local_78 = uVar4;
        do {
          lVar3 = *(longlong *)(*(longlong *)local_90 + (longlong)iVar5 * 0x10);
          if (lVar3 != 0) {
            FUN_140d52e40(lVar3,&DAT_14cb712b0,param_2,1);
          }
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar5 = local_78._4_4_;
          uVar4 = local_78;
        } while (local_90 != pcVar1 ||
                 ((wchar_t *)CONCAT44(uStack_7c,uStack_80) != pwVar9 || local_78._4_4_ != iVar13));
      }
      goto LAB_140d52dd2;
    }
joined_r0x000140d52c99:
    if (bVar10 != 0) {
      FUN_1456cec3c(lVar3);
    }
  }
  else {
    FUN_1456cec3c(DAT_14cb63950);
LAB_140d52719:
    if (DAT_14cad00c8 == 0) {
      local_c0 = &local_90;
      local_90 = FUN_144a7958c;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_14081d0ea;
      local_c8 = &LAB_1479b7a0c;
      local_d0 = &LAB_1463b464e;
      local_d8 = L"Engine";
      local_e0 = 0;
      local_e8 = 0x10000005;
      local_f0 = 8;
      local_f8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) {
        local_98 = 0;
LAB_140d52bde:
        local_c0 = &local_90;
        local_90 = FUN_144a7958c;
        local_b0 = FUN_14081d0ea;
        local_b8 = FUN_14081d0ea;
        local_c8 = &LAB_1479b7a0c;
        local_d0 = &LAB_1463b464e;
        local_d8 = L"Engine";
        local_e0 = 0;
        local_e8 = 0x10000005;
        local_f0 = 8;
        local_f8 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        goto LAB_140d52c75;
      }
    }
    if (*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar3 + 0x38)) {
      local_98 = 0;
      lVar14 = 0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
          == DAT_14cad00c8 + 0x30) {
        lVar14 = lVar3;
      }
      goto LAB_140d52757;
    }
    local_98 = 0;
    bVar10 = DAT_14c950c29;
    if (lVar3 != 0) goto joined_r0x000140d52c99;
  }
  pwVar9 = param_1 + 0x128;
  iVar13 = *(int *)(param_1 + 0x134);
  uVar4 = local_78;
  if (iVar13 == 0) {
    uVar17 = 1;
    uVar19 = 0;
    iVar5 = 0;
    iVar12 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)(param_1 + 0x130);
    if (*(wchar_t **)(param_1 + 0x130) == (wchar_t *)0x0) {
      pwVar6 = pwVar9;
    }
    uVar18 = *(uint *)pwVar6;
    if (uVar18 == 0) {
      iVar5 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar5 = iVar13 + -1;
      }
      uVar19 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar19;
      }
      iVar12 = 0;
      do {
        if (uVar17 == uVar19) goto LAB_140d52dd2;
        iVar12 = iVar12 + 0x20;
        uVar18 = *(uint *)(pwVar6 + (uVar19 + 1) * 2);
        uVar19 = uVar19 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar19 = 0;
      iVar12 = 0;
    }
    uVar17 = (ulonglong)(-uVar18 & uVar18);
    uVar15 = uVar17 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar5 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar13 <= iVar5) {
      iVar5 = iVar13;
    }
  }
  if (iVar5 != iVar13) {
    uVar18 = 0xffffffff;
    local_a0 = pwVar9;
    do {
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar5 * 0x10);
      if (lVar14 != 0) {
        if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
          local_a1 = (undefined1)param_2;
          FUN_1456cec3c(lVar3);
          param_2 = CONCAT71((int7)(param_2 >> 8),local_a1);
          pwVar9 = local_a0;
        }
        if ((char)local_98 == '\0') {
          if (DAT_14cad00c8 == 0) {
            local_c0 = &local_90;
            local_90 = FUN_144a7958c;
            local_b0 = FUN_14081d0ea;
            local_b8 = FUN_14081d0ea;
            local_c8 = &LAB_1479b7a0c;
            local_d0 = &LAB_1463b464e;
            local_d8 = L"Engine";
            local_e0 = 0;
            local_e8 = 0x10000005;
            local_f0 = 8;
            local_f8 = 0x110;
            local_a1 = (undefined1)param_2;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            param_2 = CONCAT71((int7)(param_2 >> 8),local_a1);
            pwVar9 = local_a0;
            if (DAT_14cad00c8 == 0) goto LAB_140d52ac2;
          }
          if (*(int *)(lVar3 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_140d52ac2;
          lVar16 = 0;
          if (*(longlong *)
               (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
              DAT_14cad00c8 + 0x30) {
            lVar16 = lVar3;
          }
        }
        else {
LAB_140d52ac2:
          lVar16 = 0;
        }
        if ((*(int *)(lVar16 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar16 + 0x38) * 8) == lVar16 + 0x30)) {
          uVar15 = param_2 & 0xffffffff;
          param_2 = param_2 & 0xffffffff;
          FUN_140d52e40(lVar14,&DAT_14cb712b0,uVar15,1);
          pwVar9 = local_a0;
        }
      }
      uVar18 = uVar18 & ~(uint)uVar17;
      pwVar6 = *(wchar_t **)(param_1 + 0x130);
      if (*(wchar_t **)(param_1 + 0x130) == (wchar_t *)0x0) {
        pwVar6 = pwVar9;
      }
      iVar2 = *(int *)(param_1 + 0x134);
      iVar5 = (int)uVar19;
      lVar14 = (longlong)iVar5;
      uVar11 = *(uint *)(pwVar6 + lVar14 * 2) & uVar18;
      if (uVar11 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        pwVar9 = local_a0;
        if (iVar5 < iVar7) {
          lVar16 = 0;
          do {
            uVar11 = *(uint *)(pwVar6 + (lVar14 + lVar16 + 1) * 2);
            if (uVar11 != 0) {
              uVar19 = (ulonglong)(iVar5 + (int)lVar16 + 1);
              uVar18 = 0xffffffff;
              goto LAB_140d528fa;
            }
            iVar12 = iVar12 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar8 - lVar14 != lVar16);
          uVar18 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar19 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar2;
      }
      else {
LAB_140d528fa:
        uVar17 = (ulonglong)(-uVar11 & uVar11);
        uVar15 = uVar17 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar5 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar5) {
          iVar5 = iVar2;
        }
      }
      uVar4 = local_78;
    } while (iVar5 != iVar13);
  }
LAB_140d52dd2:
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d52e40 FUN_140d52e40 body=141 status=ok
// SIG undefined FUN_140d52e40(void)

void FUN_140d52e40(longlong *param_1,undefined8 param_2,char param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  plVar1 = param_1 + 0x23c;
  lVar2 = param_1[0x23c];
  if (param_3 == '\0') {
    FUN_1400bc8c2(plVar1);
    cVar3 = (char)*plVar1;
    if (param_4 != '\0') {
      FUN_1400bc8c2(param_1 + 0x241,param_2);
    }
  }
  else {
    FUN_1400bc96c();
    cVar3 = (char)*plVar1;
    if (param_4 != '\0') {
      FUN_1400bc96c(param_1 + 0x241,param_2);
    }
  }
  if (((char)lVar2 == '\0') && (cVar3 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000140d52ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xcf0))(param_1);
    return;
  }
  return;
}



// FUNCTION 140d52ece FUN_140d52ece body=562 status=ok
// SIG undefined FUN_140d52ece(void)

void FUN_140d52ece(longlong *param_1)

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
            if (iVar3 - lVar12 == lVar11) goto LAB_140d5309e;
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
LAB_140d5309e:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d53110 FUN_140d53110 body=31 status=ok
// SIG undefined FUN_140d53110(void)

undefined8 FUN_140d53110(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d5313e FUN_140d5313e body=31 status=ok
// SIG undefined FUN_140d5313e(void)

undefined8 FUN_140d5313e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d5315e FUN_140d5315e body=1588 status=ok
// SIG undefined FUN_140d5315e(void)

void FUN_140d5315e(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5,longlong param_6)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined **ppuVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar12 = param_3[1];
  local_98 = param_1;
  local_90 = param_2;
  if (lVar12 == 0) {
    uVar6 = FUN_14043db3a();
    lVar12 = FUN_14477b664(uVar6);
    param_3[1] = lVar12;
  }
  if (param_3[2] == 0) {
    if ((lVar12 == 0) || (*param_3 == 0)) goto LAB_140d534eb;
    plVar10 = *(longlong **)(lVar12 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar2 == '\0')) {
      param_3[2] = 0;
      goto LAB_140d534eb;
    }
    uVar6 = (**(code **)(*plVar10 + 0x110))(plVar10);
    lVar12 = FUN_144aff482(uVar6,param_3);
    param_3[2] = lVar12;
    if (lVar12 == 0) goto LAB_140d534eb;
  }
  lVar12 = param_4[1];
  if (lVar12 == 0) {
    uVar6 = FUN_140490c9a();
    lVar12 = FUN_14477b664(uVar6);
    param_4[1] = lVar12;
  }
  if (param_4[2] == 0) {
    if ((lVar12 == 0) || (*param_4 == 0)) goto LAB_140d534eb;
    plVar10 = *(longlong **)(lVar12 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar2 == '\0')) {
      param_4[2] = 0;
      goto LAB_140d534eb;
    }
    uVar6 = (**(code **)(*plVar10 + 0x110))(plVar10);
    lVar12 = FUN_144aff482(uVar6,param_4);
    param_4[2] = lVar12;
    if (lVar12 == 0) goto LAB_140d534eb;
  }
  lVar5 = FUN_140d53794();
  lVar12 = *(longlong *)(lVar5 + 0x110);
  if (lVar12 == 0) {
    FUN_140aa6c08(lVar5);
    lVar12 = *(longlong *)(lVar5 + 0x110);
  }
  FUN_140316e34(lVar12,1);
  FUN_140d53d1a(lVar12,param_3,0);
  FUN_140d53872(lVar12);
  *(undefined4 *)(lVar12 + 0x18c) = 3;
  lVar5 = param_4[1];
  if (lVar5 == 0) {
    uVar6 = FUN_140490c9a();
    lVar5 = FUN_14477b664(uVar6);
    param_4[1] = lVar5;
  }
  local_b0 = *param_4;
  local_c0 = param_4;
  local_b8 = lVar12;
  if (param_4[2] == 0) {
    if (lVar5 != 0 && local_b0 != 0) {
      plVar10 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar10 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar2 == '\0')) {
        local_c0[2] = 0;
        lVar12 = local_b8;
      }
      else {
        uVar6 = (**(code **)(*plVar10 + 0x110))(plVar10);
        plVar10 = local_c0;
        lVar5 = FUN_144aff482(uVar6,local_c0);
        plVar10[2] = lVar5;
        lVar12 = local_b8;
        if (lVar5 != 0) {
          local_b0 = *local_c0;
          lVar5 = local_c0[1];
          goto LAB_140d53244;
        }
      }
    }
  }
  else {
LAB_140d53244:
    lVar12 = param_6 + 0x18;
    uVar6 = FUN_14477b664(lVar5);
    local_80 = FUN_14477b664(uVar6);
    lVar5 = *(longlong *)(param_6 + 0x2d8);
    if (*(longlong *)(param_6 + 0x2d8) == 0) {
      lVar5 = lVar12;
    }
    local_a0 = lVar12;
    if ((longlong)*(int *)(param_6 + 0x2e0) != 0) {
      local_88 = (longlong)*(int *)(param_6 + 0x2e0) * -0x58;
      lVar12 = 8;
      lVar13 = 0;
      local_a8 = lVar5;
      do {
        lVar5 = local_a8;
        if (*(longlong *)(local_a8 + lVar12) == 0) {
          uVar6 = FUN_140490c9a();
          uVar6 = FUN_14477b664(uVar6);
          *(undefined8 *)(lVar5 + lVar12) = uVar6;
        }
        lVar7 = local_80;
        if (local_80 == 0) {
          lVar7 = FUN_140490c9a(0);
        }
        lVar7 = FUN_14477b664(lVar7);
        iVar3 = 0;
        if ((lVar7 != 0) && (plVar10 = *(longlong **)(lVar7 + 0xb8), plVar10 != (longlong *)0x0)) {
          lVar8 = *plVar10;
          pcVar1 = *(code **)(lVar8 + 0x108);
          if (pcVar1 != (code *)&LAB_14478342e && pcVar1 != (code *)&LAB_144783422) {
            cVar2 = (*pcVar1)(plVar10);
            iVar3 = 0;
            if (cVar2 == '\0') goto LAB_140d53324;
            lVar8 = *plVar10;
          }
          pcVar1 = *(code **)(lVar8 + 0x110);
          ppuVar11 = &PTR_PTR_14c763408;
          if ((pcVar1 != (code *)&LAB_144783426) &&
             (ppuVar11 = &PTR_PTR_14c75f798, pcVar1 != (code *)&LAB_144783432)) {
            ppuVar11 = (undefined **)(*pcVar1)(plVar10);
          }
          iVar3 = FUN_144aff48c(ppuVar11);
        }
LAB_140d53324:
        lVar8 = *(longlong *)(lVar5 + -8 + lVar12);
        lVar5 = *(longlong *)(lVar5 + lVar12);
        iVar4 = 0;
        if ((lVar5 != 0) &&
           (plVar10 = *(longlong **)(lVar5 + 0xb8), iVar4 = 0, plVar10 != (longlong *)0x0)) {
          lVar9 = *plVar10;
          pcVar1 = *(code **)(lVar9 + 0x108);
          if (pcVar1 != (code *)&LAB_14478342e && pcVar1 != (code *)&LAB_144783422) {
            cVar2 = (*pcVar1)(plVar10);
            if (cVar2 == '\0') goto LAB_140d5338f;
            lVar9 = *plVar10;
          }
          pcVar1 = *(code **)(lVar9 + 0x110);
          ppuVar11 = &PTR_PTR_14c763408;
          if ((pcVar1 != (code *)&LAB_144783426) &&
             (ppuVar11 = &PTR_PTR_14c75f798, pcVar1 != (code *)&LAB_144783432)) {
            ppuVar11 = (undefined **)(*pcVar1)(plVar10);
          }
          iVar4 = FUN_144aff48c(ppuVar11);
        }
LAB_140d5338f:
        if ((iVar4 == iVar3) && (lVar8 == local_b0)) {
          if (lVar5 == lVar7) {
LAB_140d53436:
            if (local_a8 - lVar13 != 0) {
              plVar10 = (longlong *)((local_a8 - lVar13) + 0x18);
              goto LAB_140d53448;
            }
            break;
          }
          if ((lVar7 != 0) && (lVar5 != 0)) {
            iVar3 = *(int *)(lVar7 + 0x38);
            iVar4 = *(int *)(lVar5 + 0x38);
            if (((iVar3 <= iVar4) &&
                (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar3 * 8) == lVar7 + 0x30))
               || ((iVar4 <= iVar3 &&
                   (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar4 * 8) == lVar5 + 0x30
                   )))) goto LAB_140d53436;
          }
        }
        lVar13 = lVar13 + -0x58;
        lVar12 = lVar12 + 0x58;
      } while (local_88 != lVar13);
    }
    plVar10 = (longlong *)FUN_14042880c(local_a0,local_c0);
LAB_140d53448:
    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*(byte *)(plVar10 + 7)])(plVar10);
    lVar12 = local_b8;
    *plVar10 = local_b8;
    if ((local_b8 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_b8);
    }
    *(undefined1 *)(plVar10 + 7) = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_d8 = param_6;
  local_d0 = lVar12;
  FUN_140d549c8(local_98,local_90,&local_78,param_5);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_140316e34(lVar12,1);
  FUN_140d53d1a(lVar12,&local_78,0);
  FUN_140d53872(lVar12);
  *(undefined4 *)(lVar12 + 0x18c) = 0;
LAB_140d534eb:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d53794 FUN_140d53794 body=221 status=ok
// SIG undefined FUN_140d53794(void)

longlong FUN_140d53794(void)

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
  if (DAT_14cb5cd30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14868fde8;
    local_40 = FUN_143c50b80;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x228;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogProvider",&DAT_14cb5cd30,FUN_1464d8b0a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5cd30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d53872 FUN_140d53872 body=313 status=ok
// SIG undefined FUN_140d53872(void)

void FUN_140d53872(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x150);
  if (lVar5 == 0) {
    uVar4 = FUN_14043db3a();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x150) = lVar5;
  }
  if (*(longlong *)(param_1 + 0x158) == 0) {
    if (lVar5 == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x148) == 0) {
      return;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x158) = 0;
      return;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x148));
    *(longlong *)(param_1 + 0x158) = lVar5;
    if (lVar5 == 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x188) == '\0') {
    FUN_140d539ac(param_1);
    if ((((((*(longlong **)(param_1 + 0x180) != (longlong *)0x0) && (*(int *)(param_1 + 0x17c) != 0)
           ) && (uVar1 = *(uint *)(param_1 + 0x178), -1 < (int)uVar1)) &&
         (((int)uVar1 < DAT_14c9647dc &&
          (lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 != 0)))) &&
        ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x17c) &&
         (((*(uint *)(lVar5 + 8) & 0x10200000) == 0 &&
          (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x18))(), lVar5 != 0)))))) &&
       (*(char *)(lVar5 + 0x178) == '\x03')) {
      *(undefined1 *)(param_1 + 0x189) = *(undefined1 *)(param_1 + 0x188);
    }
  }
  return;
}



// FUNCTION 140d539ac FUN_140d539ac body=224 status=ok
// SIG undefined FUN_140d539ac(void)

void FUN_140d539ac(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(longlong *)(param_1 + 0x180) != 0) && (*(int *)(param_1 + 0x17c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x178);
    lVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140d53a1a;
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x17c))) {
      lVar4 = 0;
      if ((*(uint *)(lVar5 + 8) & 0x10200000) == 0) {
        lVar4 = *(longlong *)(param_1 + 0x180);
      }
      goto LAB_140d53a1a;
    }
  }
  lVar4 = 0;
LAB_140d53a1a:
  lVar4 = FUN_140d53a8c(lVar4);
  if ((lVar4 != 0) && (*(char *)(param_1 + 0x188) == '\0')) {
    FUN_140e5b680(*(undefined8 *)(lVar4 + 0x40),(uint *)(param_1 + 0x178));
    FUN_140d53ac0(param_1,lVar4,1);
    *(undefined1 *)(param_1 + 0x188) = 1;
    iVar2 = *(int *)(param_1 + 0x220);
    if ((longlong)iVar2 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x218);
      lVar5 = 0;
      do {
        plVar3 = *(longlong **)(lVar4 + lVar5);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)iVar2 * 0x10 != lVar5);
    }
  }
  return;
}



// FUNCTION 140d53a8c FUN_140d53a8c body=52 status=ok
// SIG undefined FUN_140d53a8c(void)

undefined8 FUN_140d53a8c(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x18))();
    if (lVar1 != 0) {
      lVar1 = FUN_1447210f0(lVar1);
      if (lVar1 != 0) {
        uVar2 = FUN_140115352(lVar1);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 140d53ac0 FUN_140d53ac0 body=244 status=ok
// SIG undefined FUN_140d53ac0(void)

void FUN_140d53ac0(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x150);
  if (lVar4 == 0) {
    uVar3 = FUN_14043db3a();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x150) = lVar4;
  }
  lVar5 = *(longlong *)(param_1 + 0x158);
  if (lVar5 == 0) {
    if (lVar4 == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x148) == 0) {
      return;
    }
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(param_1 + 0x158) = 0;
      return;
    }
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x148));
    *(longlong *)(param_1 + 0x158) = lVar5;
    if (lVar5 == 0) {
      return;
    }
  }
  if ((longlong)*(int *)(lVar5 + 0x70) != 0) {
    lVar4 = *(longlong *)(lVar5 + 0x68);
    lVar5 = (longlong)*(int *)(lVar5 + 0x70) * 0x18;
    do {
      if (param_3 == '\0') {
        FUN_140d53bb4(param_2,lVar4);
      }
      else {
        FUN_140d54314();
      }
      lVar4 = lVar4 + 0x18;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 140d53bb4 FUN_140d53bb4 body=357 status=ok
// SIG undefined FUN_140d53bb4(void)

void FUN_140d53bb4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    uVar4 = FUN_140c04244();
    lVar5 = FUN_14477b664(uVar4);
    param_2[1] = lVar5;
  }
  lVar6 = *param_2;
  if (param_2[2] == 0) {
    if (lVar5 == 0 || lVar6 == 0) {
      return;
    }
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      param_2[2] = 0;
      return;
    }
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar4,param_2);
    param_2[2] = lVar5;
    if (lVar5 == 0) {
      return;
    }
    lVar6 = *param_2;
  }
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar2 = (uint)((ulonglong)lVar6 >> 0x10);
    uVar7 = (uint)lVar6 & 0xffff;
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar7) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar8 * 0x14);
        if (*plVar1 == lVar6) {
          plVar9 = plVar1 + 1;
          if (plVar9 == (longlong *)0x0 || plVar1 == (longlong *)0x0) {
            return;
          }
          lVar5 = *plVar9;
          *(int *)plVar9 = (int)lVar5 + -1;
          if (1 < (int)lVar5) {
            return;
          }
          FUN_140f3d266(param_1 + 0xa8,param_2);
          FUN_140c03b68(*(undefined8 *)(param_1 + 0x40),param_2);
          *(int *)plVar9 = 0;
          return;
        }
        iVar8 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar8 != -1);
    }
  }
  return;
}



// FUNCTION 140d53d1a FUN_140d53d1a body=1528 status=ok
// SIG undefined FUN_140d53d1a(void)

void FUN_140d53d1a(longlong param_1,ulonglong *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  uint *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 == 0) {
    if (*(longlong *)(param_1 + 0x150) == 0) {
      uVar13 = FUN_14043db3a();
      uVar13 = FUN_14477b664(uVar13);
      *(undefined8 *)(param_1 + 0x150) = uVar13;
    }
    uVar7 = param_2[1];
    if (uVar7 == 0) {
      uVar7 = FUN_14043db3a();
    }
    local_80 = *param_2;
    lVar8 = FUN_14477b664(uVar7);
    iVar4 = 0;
    if ((lVar8 != 0) && (plVar18 = *(longlong **)(lVar8 + 0xb8), plVar18 != (longlong *)0x0)) {
      lVar14 = *plVar18;
      pcVar1 = *(code **)(lVar14 + 0x108);
      if (pcVar1 != (code *)&LAB_14478342e && pcVar1 != (code *)&LAB_144783422) {
        cVar3 = (*pcVar1)(plVar18);
        iVar4 = 0;
        if (cVar3 == '\0') goto LAB_140d53de9;
        lVar14 = *plVar18;
      }
      pcVar1 = *(code **)(lVar14 + 0x110);
      if (pcVar1 == (code *)&LAB_144783426) {
        ppuVar15 = &PTR_PTR_14c763408;
      }
      else if (pcVar1 == (code *)&LAB_144783432) {
        ppuVar15 = &PTR_PTR_14c75f798;
      }
      else {
        ppuVar15 = (undefined **)(*pcVar1)(plVar18);
      }
      iVar4 = FUN_144aff48c(ppuVar15);
    }
LAB_140d53de9:
    uVar7 = *(ulonglong *)(param_1 + 0x148);
    lVar14 = *(longlong *)(param_1 + 0x150);
    iVar5 = 0;
    if ((lVar14 != 0) && (plVar18 = *(longlong **)(lVar14 + 0xb8), plVar18 != (longlong *)0x0)) {
      lVar9 = *plVar18;
      pcVar1 = *(code **)(lVar9 + 0x108);
      if (pcVar1 != (code *)&LAB_14478342e && pcVar1 != (code *)&LAB_144783422) {
        cVar3 = (*pcVar1)(plVar18);
        iVar5 = 0;
        if (cVar3 == '\0') goto LAB_140d53e5b;
        lVar9 = *plVar18;
      }
      pcVar1 = *(code **)(lVar9 + 0x110);
      if (pcVar1 == (code *)&LAB_144783426) {
        ppuVar15 = &PTR_PTR_14c763408;
      }
      else if (pcVar1 == (code *)&LAB_144783432) {
        ppuVar15 = &PTR_PTR_14c75f798;
      }
      else {
        ppuVar15 = (undefined **)(*pcVar1)(plVar18);
      }
      iVar5 = FUN_144aff48c(ppuVar15);
    }
LAB_140d53e5b:
    if ((iVar5 == iVar4) && (uVar7 == local_80)) {
      if (lVar14 == lVar8) goto LAB_140d53f56;
      if ((lVar8 != 0) && (lVar14 != 0)) {
        iVar4 = *(int *)(lVar8 + 0x38);
        iVar5 = *(int *)(lVar14 + 0x38);
        if (((iVar4 <= iVar5) &&
            (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar4 * 8) == lVar8 + 0x30)) ||
           ((iVar5 <= iVar4 &&
            (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar5 * 8) == lVar14 + 0x30))))
        goto LAB_140d53f56;
      }
    }
  }
  uVar13 = *(undefined8 *)(param_1 + 0x148);
  uVar10 = FUN_14477b664(*(undefined8 *)(param_1 + 0x150));
  uVar11 = FUN_14477b664(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 0x158);
  uVar7 = *param_2;
  if (*(ulonglong *)(param_1 + 0x148) != uVar7) {
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  *(ulonglong *)(param_1 + 0x148) = uVar7;
  if (*(ulonglong *)(param_1 + 0x150) != param_2[1]) {
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  FUN_14477b664();
  uVar12 = FUN_14477b664();
  *(undefined8 *)(param_1 + 0x150) = uVar12;
  *(ulonglong *)(param_1 + 0x158) = param_2[2];
  uVar7 = *(ulonglong *)(param_1 + 0x28);
  if (uVar7 < 0xffffffff00000000) {
    plVar18 = (longlong *)0x0;
    if (DAT_14c9980d8 != 0) {
      plVar18 = DAT_14c9980d0;
    }
    (**(code **)(*plVar18 + 0x58))(plVar18,param_1,uVar7,0);
  }
  else {
    uVar6 = (uint)uVar7;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar16 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar16 = DAT_14c998080;
      }
      if ((*(uint *)(puVar16 + ((uint)(uVar7 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar8 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar17 = *(uint **)(lVar8 + 0x18);
        if (*(uint **)(lVar8 + 0x18) == (uint *)0x0) {
          puVar17 = (uint *)(lVar8 + 8);
        }
        *puVar17 = *puVar17 | 1;
        *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
      }
    }
  }
  uVar11 = FUN_14477b664(uVar11);
  uVar11 = FUN_14477b664(uVar11);
  uVar11 = FUN_14477b664(uVar11);
  uVar11 = FUN_14477b664(uVar11);
  iVar4 = *(int *)(param_1 + 0x44);
  *(int *)(param_1 + 0x44) = iVar4 + 1;
  uVar7 = (ulonglong)*(int *)(param_1 + 0x38);
  if ((longlong)uVar7 < 1) {
    *(int *)(param_1 + 0x44) = iVar4;
  }
  else {
    lVar8 = 0;
    do {
      local_80 = CONCAT44(local_80._4_4_,(int)lVar8);
      lVar14 = uVar7 * 0x10 + -8;
      uVar19 = uVar7;
      while ((lVar9 = *(longlong *)(param_1 + 0x30), *(int *)(lVar9 + lVar14) != 0 &&
             (plVar18 = *(longlong **)(lVar9 + -8 + lVar14), plVar18 != (longlong *)0x0))) {
        local_70 = 0;
        uStack_68 = 0;
        local_78 = uVar13;
        uVar12 = FUN_14477b664(uVar11);
        local_70 = FUN_14477b664(uVar12);
        lVar8 = param_1;
        uStack_68 = uVar10;
        cVar3 = (**(code **)(*plVar18 + 0x60))(plVar18,param_1,&local_78);
        if (cVar3 == '\0') break;
        lVar14 = lVar14 + -0x10;
        bVar2 = uVar19 < 2;
        uVar19 = uVar19 - 1;
        if (bVar2) {
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
          if ((local_80 & 1) != 0) goto LAB_140d542f7;
          goto LAB_140d53f4a;
        }
      }
      uVar7 = uVar19 - 1;
      lVar8 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
    } while (1 < uVar19);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
LAB_140d542f7:
    FUN_14474d06a((longlong *)(param_1 + 0x30),0);
  }
LAB_140d53f4a:
  if ((((((*(longlong **)(param_1 + 0x180) == (longlong *)0x0) || (*(int *)(param_1 + 0x17c) == 0))
        || (uVar6 = *(uint *)(param_1 + 0x178), (int)uVar6 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar6 ||
        (lVar8 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar8 == 0)))) ||
      ((*(int *)(lVar8 + 0x10) != *(int *)(param_1 + 0x17c) ||
       (((*(uint *)(lVar8 + 8) & 0x10200000) != 0 ||
        (lVar8 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x18))(), lVar8 == 0)))))) ||
     (*(char *)(lVar8 + 0x178) != '\x03')) goto LAB_140d53f56;
  lVar8 = *(longlong *)(param_1 + 0x150);
  if (lVar8 == 0) {
    uVar13 = FUN_14043db3a();
    lVar8 = FUN_14477b664(uVar13);
    *(longlong *)(param_1 + 0x150) = lVar8;
  }
  lVar14 = *(longlong *)(param_1 + 0x158);
  if (lVar14 == 0) {
    iVar4 = 0;
    if ((*(longlong *)(param_1 + 0x148) != 0) && (lVar8 != 0)) {
      plVar18 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar18 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x158) = 0;
      }
      else {
        uVar13 = (**(code **)(*plVar18 + 0x110))(plVar18);
        lVar14 = FUN_144aff482(uVar13,(longlong *)(param_1 + 0x148));
        *(longlong *)(param_1 + 0x158) = lVar14;
        if (lVar14 != 0) goto LAB_140d54008;
      }
    }
  }
  else {
LAB_140d54008:
    uVar6 = rand();
    iVar4 = *(int *)(lVar14 + 0x1c);
    if (*(int *)(lVar14 + 0x20) < iVar4) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + (int)((float)(*(int *)(lVar14 + 0x20) - iVar4) *
                           ((float)(uVar6 & 0x7fff) / 32767.0));
    }
  }
  *(int *)(param_1 + 0x198) = iVar4;
LAB_140d53f56:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d54314 FUN_140d54314 body=1714 status=ok
// SIG undefined FUN_140d54314(void)

void FUN_140d54314(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar19 = param_2[1];
  if (lVar19 == 0) {
    uVar8 = FUN_140c04244();
    lVar19 = FUN_14477b664(uVar8);
    param_2[1] = lVar19;
  }
  lVar12 = *param_2;
  if (param_2[2] == 0) {
    if ((lVar19 == 0) || (lVar12 == 0)) goto LAB_140d54528;
    plVar1 = *(longlong **)(lVar19 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar6 == '\0')) {
      param_2[2] = 0;
      goto LAB_140d54528;
    }
    uVar8 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar19 = FUN_144aff482(uVar8,param_2);
    param_2[2] = lVar19;
    if (lVar19 == 0) goto LAB_140d54528;
    lVar12 = *param_2;
  }
  plVar1 = (longlong *)(param_1 + 0x58);
  iVar21 = *(int *)(param_1 + 0x60);
  iVar15 = *(int *)(param_1 + 0x8c);
  uVar20 = (uint)lVar12;
  iVar22 = (int)((ulonglong)lVar12 >> 0x20);
  uVar18 = (uint)((ulonglong)lVar12 >> 0x10);
  if (iVar21 != iVar15) {
    lVar19 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar19 = *(longlong *)(param_1 + 0x98);
    }
    iVar7 = *(int *)(lVar19 + (ulonglong)
                              (*(int *)(param_1 + 0xa0) - 1U &
                              iVar22 + (uVar20 << 0x10 | uVar20 & 0xffff) +
                              (uVar18 << 0x13 | uVar18 & 0xffff) + ((uVar20 & 0xffff) >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar2 = (longlong *)(*plVar1 + (longlong)iVar7 * 0x14);
        if (*plVar2 == lVar12) {
          if (plVar2 != (longlong *)0x0) goto LAB_140d543f3;
          break;
        }
        iVar7 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar7 != -1);
    }
  }
  if (iVar15 == 0) {
    *(int *)(param_1 + 0x60) = iVar21 + 1;
    if (*(int *)(param_1 + 100) == iVar21) {
      FUN_140171ad2(plVar1,iVar21);
    }
    iVar15 = *(int *)(param_1 + 0x80);
    if (iVar15 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar7 = iVar15 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    lVar13 = param_1 + 0x68;
    iVar10 = iVar15 + 1;
    iVar17 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar17 = iVar15;
    }
    if (iVar17 >> 5 == iVar7) {
      *(int *)(param_1 + 0x80) = iVar10;
    }
    else {
      if (*(int *)(param_1 + 0x84) <= iVar15) {
        if (iVar15 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar7 = iVar15;
        }
        else {
          uVar16 = iVar15 + 0x20U >> 5;
          local_60 = (ulonglong)uVar16;
          if (*(int *)(param_1 + 0x84) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar16) {
              uVar11 = uVar16;
            }
          }
          else {
            uVar11 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar11 << 2,0);
          iVar7 = (int)(uVar14 >> 2);
          iVar10 = -0x20;
          if ((int)local_60 <= iVar7) {
            iVar10 = iVar7 << 5;
          }
          iVar7 = *(int *)(param_1 + 0x80);
        }
        *(int *)(param_1 + 0x84) = iVar10;
        FUN_1446efbd8(lVar13,iVar7);
        iVar10 = *(int *)(param_1 + 0x80) + 1;
      }
      iVar7 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar7 = iVar10;
      }
      *(int *)(param_1 + 0x80) = iVar10;
      if (iVar10 % 0x20 != 0) {
        lVar19 = *(longlong *)(param_1 + 0x78);
        if (*(longlong *)(param_1 + 0x78) == 0) {
          lVar19 = lVar13;
        }
        bVar9 = -(char)(iVar10 % 0x20);
        *(uint *)(lVar19 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar19 + (longlong)(iVar7 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar19 = (longlong)iVar21;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x78);
    }
    bVar9 = (byte)iVar15 & 0x1f;
    puVar3 = (uint *)(lVar13 + (longlong)(iVar17 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar21 = *(int *)(param_1 + 0x88);
    lVar19 = (longlong)iVar21;
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + 4 + lVar19 * 0x14);
    *(int *)(param_1 + 0x88) = iVar7;
    *(int *)(param_1 + 0x8c) = iVar15 + -1;
    if (iVar15 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14) = 0xffffffff;
    }
  }
  iVar15 = 1;
  lVar13 = param_1 + 0x68;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x78);
  }
  iVar7 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar7 = iVar21;
  }
  puVar3 = (uint *)(lVar13 + (longlong)(iVar7 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar21 & 0x1f);
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x58) + lVar19 * 0x14);
  *plVar2 = lVar12;
  plVar2[1] = -0x100000000;
  uVar18 = (uVar20 << 0x10 | uVar20 & 0xffff) + iVar22 + (uVar18 << 0x13 | uVar18 & 0xffff) +
           ((uVar20 & 0xffff) >> 4);
  uVar20 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x8c);
  if ((uVar20 != 0) && (uVar20 != 1)) {
    lVar19 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar19 = *(longlong *)(param_1 + 0x98);
    }
    iVar22 = *(int *)(lVar19 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & uVar18) * 4);
    if (iVar22 != -1) {
      do {
        plVar4 = (longlong *)(*plVar1 + (longlong)iVar22 * 0x14);
        if (*plVar4 == lVar12) {
          lVar19 = *plVar2;
          *(int *)(plVar4 + 1) = (int)plVar2[1];
          *plVar4 = lVar19;
          FUN_14887e56e(plVar1,iVar21);
          goto LAB_140d547bf;
        }
        iVar22 = *(int *)((longlong)plVar4 + 0xc);
      } while (iVar22 != -1);
    }
  }
  if (3 < uVar20) {
    uVar14 = (ulonglong)(uVar20 & 0xfffffffe) + 0xf;
    lVar19 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar15 = 1 << ((byte)lVar19 & 0x1f);
  }
  iVar22 = iVar21;
  if (((int)uVar20 < 1) || (iVar15 <= *(int *)(param_1 + 0xa0))) {
    uVar18 = *(int *)(param_1 + 0xa0) - 1U & uVar18;
    *(uint *)(plVar2 + 2) = uVar18;
    lVar19 = *(longlong *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x98) == 0) {
      lVar19 = param_1 + 0x90;
    }
    *(undefined4 *)((longlong)plVar2 + 0xc) =
         *(undefined4 *)
          (lVar19 + ((longlong)*(int *)(param_1 + 0xa0) - 1U & (longlong)(int)uVar18) * 4);
    lVar19 = *(longlong *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x98) == 0) {
      lVar19 = param_1 + 0x90;
    }
    *(int *)(lVar19 + ((longlong)*(int *)(param_1 + 0xa0) - 1U & (longlong)(int)uVar18) * 4) =
         iVar21;
  }
  else {
    *(int *)(param_1 + 0xa0) = iVar15;
    FUN_140d581ba(plVar1);
  }
LAB_140d547bf:
  plVar2 = (longlong *)(*plVar1 + (longlong)iVar22 * 0x14);
LAB_140d543f3:
  iVar21 = (int)plVar2[1];
  *(int *)(plVar2 + 1) = iVar21 + 1;
  if (iVar21 == 0) {
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,4,0x10);
    puVar5 = local_58;
    local_50 = 4;
    *local_58 = &PTR_LAB_14b406e80;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[1] = *param_2;
    uVar8 = FUN_14477b664(param_2[1]);
    uVar8 = FUN_14477b664(uVar8);
    puVar5[2] = uVar8;
    puVar5[3] = param_2[2];
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar19 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar19 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar19;
    puVar5[4] = lVar12;
    *puVar5 = &PTR_FUN_14b406e10;
    puVar5[5] = 0;
    iVar21 = 0;
    if (param_1 != 0) {
      uVar18 = *(uint *)(param_1 + 0xc);
      *(uint *)(puVar5 + 5) = uVar18;
      if ((int)uVar18 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      iVar21 = *(int *)(lVar19 + 0x10);
      if (*(int *)(lVar19 + 0x10) == 0) {
        LOCK();
        iVar21 = DAT_14c964868 + 1;
        UNLOCK();
        iVar15 = DAT_14c964868 + 1;
        bVar23 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar21;
        if (bVar23) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar15);
        }
        LOCK();
        iVar21 = *(int *)(lVar19 + 0x10);
        bVar23 = iVar21 == 0;
        if (bVar23) {
          *(int *)(lVar19 + 0x10) = iVar15;
          iVar21 = 0;
        }
        UNLOCK();
        if (bVar23) {
          iVar21 = iVar15;
        }
      }
    }
    *(int *)((longlong)puVar5 + 0x2c) = iVar21;
    puVar5[6] = FUN_140fbad8a;
    *(undefined4 *)(puVar5 + 7) = 0;
    FUN_140d5549a(param_1 + 0xa8,param_2,&local_58);
    if (local_50 != 0) {
      if (local_58 == (undefined8 *)0x0) goto LAB_140d54528;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140d54528:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d549c8 FUN_140d549c8 body=2768 status=ok
// SIG undefined FUN_140d549c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d549c8(undefined4 param_1,longlong param_2,uint *param_3,longlong *param_4,
                  undefined8 param_5,longlong param_6)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined1 uVar15;
  undefined **ppuVar16;
  longlong lVar17;
  undefined4 *puVar18;
  byte bVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  bool bVar25;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 *local_100;
  longlong local_f0;
  undefined8 *local_e8;
  uint *local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  ulonglong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar10 = param_6;
  if ((((((*(longlong **)(param_3 + 2) != (longlong *)0x0) && (param_3[1] != 0)) &&
        (uVar3 = *param_3, -1 < (int)uVar3)) &&
       (((int)uVar3 < DAT_14c9647dc &&
        (lVar20 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar20 != 0)))) &&
      (*(uint *)(lVar20 + 0x10) == param_3[1])) && ((*(uint *)(lVar20 + 8) & 0x10200000) == 0)) {
    lVar10 = (**(code **)(**(longlong **)(param_3 + 2) + 0x10))();
    param_1 = extraout_XMM0_Da;
  }
  if (lVar10 == 0) goto LAB_140d55381;
  local_f0 = lVar10;
  if ((((*(longlong **)(param_3 + 2) != (longlong *)0x0) && (param_3[1] != 0)) &&
      ((uVar3 = *param_3, -1 < (int)uVar3 &&
       ((((int)uVar3 < DAT_14c9647dc &&
         (lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar10 != 0)) &&
        (*(uint *)(lVar10 + 0x10) == param_3[1])))))) &&
     (((*(uint *)(lVar10 + 8) & 0x10200000) == 0 &&
      (plVar11 = (longlong *)(**(code **)(**(longlong **)(param_3 + 2) + 0x18))(),
      param_1 = extraout_XMM0_Da_01, plVar11 != (longlong *)0x0)))) {
    FUN_14148362a();
    plVar11 = (longlong *)(**(code **)(*plVar11 + 0x288))(plVar11);
    param_1 = extraout_XMM0_Da_02;
    if (plVar11 != (longlong *)0x0) {
      uVar13 = FUN_14148362a();
      plVar12 = (longlong *)FUN_144718840(plVar11,uVar13);
      param_1 = extraout_XMM0_Da_03;
      if (plVar12 != (longlong *)0x0 && plVar11 != plVar12) {
        param_1 = (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  cVar7 = '\x01';
  if (*(int *)(local_f0 + 0x18c) != 3) {
    cVar7 = *(char *)(local_f0 + 400);
  }
  lVar10 = param_4[1];
  if ((longlong)(int)lVar10 != 0) {
    lVar20 = *param_4;
    lVar17 = 0;
    do {
      if ((*(char *)(lVar20 + 0x41 + lVar17) == '\x01') &&
         (*(char *)(lVar20 + 0x40 + lVar17) == '\0')) {
        *(undefined1 *)(lVar20 + 0x41 + lVar17) = 0;
      }
      lVar17 = lVar17 + 0x48;
    } while ((longlong)(int)lVar10 * 0x48 != lVar17);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb7eec0) && (param_1 = FUN_144b3d300(), DAT_14cb7eec0 == -1)) {
    DAT_14cb7eeb0 = (undefined8 *)0x0;
    _DAT_14cb7eeb8 = 0;
    atexit((_func_5014 *)&LAB_143d68300);
    param_1 = _Init_thread_footer();
  }
  bVar25 = (longlong)_DAT_14cb7eeb8 < 0;
  _DAT_14cb7eeb8 = _DAT_14cb7eeb8 & 0xffffffff00000000;
  if (bVar25) {
    param_1 = FUN_148884658();
  }
  iVar8 = DAT_14cb7eedc;
  local_b8 = CONCAT44(local_b8._4_4_,DAT_14cb7eedc);
  if ((*(longlong *)(param_2 + 8) == 0) &&
     ((((*(longlong *)(param_2 + 0x18) == 0 || (*(int *)(param_2 + 0x14) == 0)) ||
       (uVar3 = *(uint *)(param_2 + 0x10), (int)uVar3 < 0)) ||
      (((DAT_14c9647dc <= (int)uVar3 ||
        (lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar10 == 0)) ||
       ((*(int *)(lVar10 + 0x10) != *(int *)(param_2 + 0x14) ||
        ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)))))))) {
    lVar10 = *(longlong *)(param_2 + 0x68);
    if (lVar10 == 0) {
      FUN_14043db3a();
      lVar10 = FUN_14477b664();
      *(longlong *)(param_2 + 0x68) = lVar10;
      param_1 = extraout_XMM0_Da_00;
    }
    plVar11 = (longlong *)(param_2 + 0x60);
    lVar20 = *(longlong *)(param_2 + 0x70);
    if (lVar20 == 0) {
      uVar15 = 0;
      if ((lVar10 != 0) && (*plVar11 != 0)) {
        plVar12 = *(longlong **)(lVar10 + 0xb8);
        if ((plVar12 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar12 + 0x108))(), cVar6 == '\0')) {
          *(undefined8 *)(param_2 + 0x70) = 0;
        }
        else {
          uVar13 = (**(code **)(*plVar12 + 0x110))(plVar12);
          lVar20 = FUN_144aff482(uVar13,plVar11);
          *(longlong *)(param_2 + 0x70) = lVar20;
          if (lVar20 != 0) {
            lVar10 = *(longlong *)(param_2 + 0x68);
            param_1 = extraout_XMM0_Da_04;
            goto LAB_140d54c76;
          }
        }
        uVar15 = 0;
      }
      goto LAB_140d54b76;
    }
LAB_140d54c76:
    if (lVar10 == 0) {
      uVar13 = FUN_14043db3a(param_1,lVar20);
      lVar10 = FUN_14477b664(uVar13);
      *(longlong *)(param_2 + 0x68) = lVar10;
      if (((*(longlong *)(param_2 + 0x70) == 0) && (lVar10 != 0)) && (*plVar11 != 0)) {
        plVar12 = *(longlong **)(lVar10 + 0xb8);
        if ((plVar12 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar6 == '\0')) {
          uVar13 = 0;
        }
        else {
          uVar13 = (**(code **)(*plVar12 + 0x110))(plVar12);
          uVar13 = FUN_144aff482(uVar13,plVar11);
        }
        *(undefined8 *)(param_2 + 0x70) = uVar13;
      }
    }
    cVar6 = FUN_14043da5a(local_f0);
    iVar9 = -1;
    uVar15 = 1;
    if (cVar6 != '\0') goto LAB_140d54b76;
  }
  else {
    uVar15 = 0;
LAB_140d54b76:
    lVar10 = local_f0;
    *(undefined1 *)(param_2 + 0x82) = uVar15;
    if (*(char *)(param_2 + 0x80) == '\x01') {
      iVar9 = iVar8;
      if ((longlong)(int)param_4[5] != 0) {
        lVar20 = param_4[4];
        lVar17 = (longlong)(int)param_4[5] * 0x18;
        do {
          FUN_143d67eec(lVar20,lVar10,param_2,&local_b8);
          lVar20 = lVar20 + 0x18;
          lVar17 = lVar17 + -0x18;
        } while (lVar17 != 0);
        iVar9 = (int)local_b8;
      }
    }
    else if ((int)param_4[3] < 1) {
      iVar9 = -1;
    }
    else {
      local_100 = &local_b8;
      local_108 = param_5;
      FUN_143d66ca0(param_4,0,local_f0,param_2);
      iVar9 = (int)local_b8;
    }
  }
  lVar10 = local_f0;
  if (DAT_14cb7eeb8 != 0) {
    if ((DAT_14cb7eedc < iVar9) || (DAT_14cb7eee0 == '\x01' && cVar7 == '\0')) {
      DAT_14cb7eed0 = 0;
      if ((int)DAT_14cb7eed4 < 0) {
        FUN_148883ab2(&DAT_14cb7eec8);
      }
      DAT_14cb7eed8 = 0.0;
      DAT_14cb7eedc = iVar9;
      DAT_14cb7eee0 = cVar7;
    }
    if (cVar7 != '\0') {
      if ((DAT_14cb7eed0 != 0) && (DAT_14cb7eee0 == '\0')) goto LAB_140d55381;
      DAT_14cb7eee0 = '\x01';
    }
    if ((longlong)DAT_14cb7eeb8 != 0) {
      puVar24 = DAT_14cb7eeb0 + (longlong)DAT_14cb7eeb8 * 6;
      puVar23 = DAT_14cb7eeb0;
      local_e8 = puVar24;
      local_e0 = param_3;
      do {
        lVar20 = FUN_14494f566(puVar23);
        if (lVar20 != 0) {
          bVar25 = *(int *)(lVar10 + 0x18c) == 3;
          bVar2 = *(byte *)(lVar10 + 400);
          lVar20 = FUN_14494f566(puVar23);
          puVar18 = &DAT_14c763940;
          if (DAT_14cb7f870 != 0) {
            puVar18 = &DAT_14c763940;
            if ((int)(uint)*(byte *)(lVar20 + 0x2c) < *(int *)(DAT_14cb7f870 + 0x3a8)) {
              puVar18 = (undefined4 *)
                        ((ulonglong)*(byte *)(lVar20 + 0x2c) * 0x10 +
                        *(longlong *)(DAT_14cb7f870 + 0x3a0));
            }
          }
          bVar19 = bVar25 | bVar2;
          if (*(char *)((longlong)puVar18 + 0xd) == '\x02') {
LAB_140d54ecb:
            if ((bVar19 & 1) == 0) goto LAB_140d5535e;
          }
          else if (*(char *)((longlong)puVar18 + 0xd) == '\x01') {
            if (bVar25 || (bVar2 & 1) != 0) goto LAB_140d5535e;
          }
          else {
            lVar20 = FUN_14494f566(puVar23);
            local_b8 = 0;
            uStack_b0 = 0;
            lVar20 = FUN_140206ee8(lVar20 + 0x30,&local_b8);
            if (lVar20 == 0) {
              cVar7 = '\0';
            }
            else {
              cVar7 = *(char *)(lVar20 + 0x43);
            }
            if (cVar7 == '\0') {
              bVar19 = bVar19 ^ 1;
              goto LAB_140d54ecb;
            }
          }
          local_b8 = *(undefined8 *)param_3;
          uStack_b0 = *(longlong *)(param_3 + 2);
          if (param_6 == 0) {
            local_a8 = 0;
            lStack_a0 = 0;
            local_98 = 0;
          }
          else {
            local_a8 = *(longlong *)(param_6 + 0x148);
            uVar13 = FUN_14477b664(*(undefined8 *)(param_6 + 0x150));
            lStack_a0 = FUN_14477b664(uVar13);
            local_98 = *(undefined8 *)(param_6 + 0x158);
          }
          local_90 = *puVar23;
          uVar13 = FUN_14477b664(puVar23[1]);
          local_88 = FUN_14477b664(uVar13);
          local_80 = puVar23[2];
          local_78 = *(undefined4 *)(puVar23 + 3);
          uStack_74 = *(undefined4 *)((longlong)puVar23 + 0x1c);
          uStack_70 = *(undefined4 *)(puVar23 + 4);
          uStack_6c = *(undefined4 *)((longlong)puVar23 + 0x24);
          local_d0 = puVar23;
          lVar20 = FUN_14494f566(puVar23);
          lVar10 = DAT_14cb7eec8;
          puVar18 = &DAT_14c763940;
          if (DAT_14cb7f870 != 0) {
            puVar18 = &DAT_14c763940;
            if ((int)(uint)*(byte *)(lVar20 + 0x2c) < *(int *)(DAT_14cb7f870 + 0x3a8)) {
              puVar18 = (undefined4 *)
                        ((ulonglong)*(byte *)(lVar20 + 0x2c) * 0x10 +
                        *(longlong *)(DAT_14cb7f870 + 0x3a0));
            }
          }
          local_68 = (float)puVar18[2];
          if ((longlong)(int)DAT_14cb7eed0 != 0) {
            local_d8 = DAT_14cb7eec8 + 0x28;
            uVar22 = (longlong)(int)DAT_14cb7eed0 * 0x58;
            uVar21 = 0;
            local_c8 = uVar22;
            do {
              if (*(longlong *)(lVar10 + 8 + uVar21) == uStack_b0) {
                if (*(longlong *)(lVar10 + 0x18 + uVar21) == 0) {
                  uVar13 = FUN_14043db3a();
                  uVar13 = FUN_14477b664(uVar13);
                  *(undefined8 *)(lVar10 + 0x18 + uVar21) = uVar13;
                }
                lVar20 = lStack_a0;
                if (lStack_a0 == 0) {
                  lVar20 = FUN_14043db3a();
                }
                local_c0 = local_a8;
                lVar20 = FUN_14477b664(lVar20);
                iVar8 = 0;
                if ((lVar20 != 0) &&
                   (plVar11 = *(longlong **)(lVar20 + 0xb8), plVar11 != (longlong *)0x0)) {
                  lVar17 = *plVar11;
                  pcVar4 = *(code **)(lVar17 + 0x108);
                  if (pcVar4 != (code *)&LAB_14478342e && pcVar4 != (code *)&LAB_144783422) {
                    cVar7 = (*pcVar4)(plVar11);
                    iVar8 = 0;
                    if (cVar7 == '\0') goto LAB_140d55096;
                    lVar17 = *plVar11;
                  }
                  pcVar4 = *(code **)(lVar17 + 0x110);
                  ppuVar16 = &PTR_PTR_14c763408;
                  if ((pcVar4 != (code *)&LAB_144783426) &&
                     (ppuVar16 = &PTR_PTR_14c75f798, pcVar4 != (code *)&LAB_144783432)) {
                    ppuVar16 = (undefined **)(*pcVar4)(plVar11);
                  }
                  iVar8 = FUN_144aff48c(ppuVar16);
                }
LAB_140d55096:
                lVar17 = *(longlong *)(lVar10 + 0x10 + uVar21);
                lVar5 = *(longlong *)(lVar10 + 0x18 + uVar21);
                iVar9 = 0;
                if ((lVar5 != 0) &&
                   (plVar11 = *(longlong **)(lVar5 + 0xb8), plVar11 != (longlong *)0x0)) {
                  lVar14 = *plVar11;
                  pcVar4 = *(code **)(lVar14 + 0x108);
                  if (pcVar4 != (code *)&LAB_14478342e && pcVar4 != (code *)&LAB_144783422) {
                    cVar7 = (*pcVar4)(plVar11);
                    iVar9 = 0;
                    if (cVar7 == '\0') goto LAB_140d55100;
                    lVar14 = *plVar11;
                  }
                  pcVar4 = *(code **)(lVar14 + 0x110);
                  ppuVar16 = &PTR_PTR_14c763408;
                  if ((pcVar4 != (code *)&LAB_144783426) &&
                     (ppuVar16 = &PTR_PTR_14c75f798, pcVar4 != (code *)&LAB_144783432)) {
                    ppuVar16 = (undefined **)(*pcVar4)(plVar11);
                  }
                  iVar9 = FUN_144aff48c(ppuVar16);
                }
LAB_140d55100:
                uVar22 = local_c8;
                if ((iVar9 == iVar8) && (lVar17 == local_c0)) {
                  if (lVar5 == lVar20) {
LAB_140d551b4:
                    cVar7 = FUN_141889902(local_d8 + uVar21,&local_90);
                    if (cVar7 != '\0') {
                      fVar1 = *(float *)(lVar10 + 0x50 + uVar21);
                      if ((fVar1 == local_68) && (!NAN(fVar1) && !NAN(local_68))) {
                        if ((int)(uVar21 >> 3) * -0x45d1745d != -1) goto LAB_140d55317;
                        break;
                      }
                    }
                  }
                  else if ((lVar20 != 0) && (lVar5 != 0)) {
                    iVar8 = *(int *)(lVar20 + 0x38);
                    iVar9 = *(int *)(lVar5 + 0x38);
                    if (((iVar8 <= iVar9) &&
                        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar8 * 8) ==
                         lVar20 + 0x30)) ||
                       ((iVar9 <= iVar8 &&
                        (*(longlong *)(*(longlong *)(lVar20 + 0x30) + (longlong)iVar9 * 8) ==
                         lVar5 + 0x30)))) goto LAB_140d551b4;
                  }
                }
              }
              uVar21 = uVar21 + 0x58;
            } while (uVar22 != uVar21);
          }
          uVar3 = DAT_14cb7eed0;
          lVar10 = (longlong)(int)DAT_14cb7eed0;
          DAT_14cb7eed0 = DAT_14cb7eed0 + 1;
          if (DAT_14cb7eed4 < DAT_14cb7eed0) {
            FUN_14188f9ee(&DAT_14cb7eec8,uVar3);
          }
          lVar20 = DAT_14cb7eec8;
          lVar10 = lVar10 * 0x58;
          puVar18 = (undefined4 *)(DAT_14cb7eec8 + lVar10);
          *puVar18 = (int)local_b8;
          puVar18[1] = local_b8._4_4_;
          puVar18[2] = (undefined4)uStack_b0;
          puVar18[3] = uStack_b0._4_4_;
          puVar23 = (undefined8 *)(lVar20 + 0x18 + lVar10);
          *puVar23 = 0;
          puVar23[1] = 0;
          *(longlong *)(lVar20 + 0x10 + lVar10) = local_a8;
          uVar13 = FUN_14477b664(lStack_a0);
          uVar13 = FUN_14477b664(uVar13);
          *(undefined8 *)(lVar20 + 0x18 + lVar10) = uVar13;
          *(undefined8 *)(lVar20 + 0x20 + lVar10) = local_98;
          puVar23 = (undefined8 *)(lVar20 + 0x30 + lVar10);
          *puVar23 = 0;
          puVar23[1] = 0;
          *(undefined8 *)(lVar20 + 0x28 + lVar10) = local_90;
          uVar13 = FUN_14477b664(local_88);
          uVar13 = FUN_14477b664(uVar13);
          *(undefined8 *)(lVar20 + 0x30 + lVar10) = uVar13;
          *(undefined8 *)(lVar20 + 0x38 + lVar10) = local_80;
          puVar23 = (undefined8 *)(lVar20 + 0x40 + lVar10);
          *puVar23 = CONCAT44(uStack_74,local_78);
          puVar23[1] = CONCAT44(uStack_6c,uStack_70);
          *(float *)(lVar20 + 0x50 + lVar10) = local_68;
LAB_140d55317:
          DAT_14cb7eed8 =
               *(float *)(DAT_14cb7eec8 + 0x50 + (longlong)(int)(DAT_14cb7eed0 - 1) * 0x58) +
               DAT_14cb7eed8;
          lVar10 = local_f0;
          param_3 = local_e0;
          puVar23 = local_d0;
          puVar24 = local_e8;
        }
LAB_140d5535e:
        puVar23 = puVar23 + 6;
      } while (puVar23 != puVar24);
    }
  }
LAB_140d55381:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d5549a FUN_140d5549a body=5110 status=ok
// SIG undefined FUN_140d5549a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d5549a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 **ppuVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 uVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  uint *puVar23;
  uint *puVar24;
  longlong lVar25;
  byte bVar26;
  uint uVar27;
  int iVar28;
  int *piVar29;
  longlong *plVar30;
  uint uVar31;
  int iVar32;
  ulonglong uVar33;
  int iVar34;
  int iVar35;
  longlong *plVar36;
  longlong lVar37;
  uint uVar38;
  ulonglong uVar39;
  int *piVar40;
  longlong lVar41;
  longlong *plVar42;
  longlong *plVar43;
  bool bVar44;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  ulonglong local_128;
  undefined8 *local_120;
  uint *local_118;
  longlong *local_110;
  longlong local_108;
  undefined8 uStack_100;
  int iStack_f8;
  int iStack_f4;
  void *local_f0;
  int local_e8;
  undefined4 local_e4;
  longlong local_d8 [3];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined8 *local_a0;
  longlong *local_98 [2];
  longlong local_88;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar19 = param_2[1];
  local_110 = param_3;
  if (lVar19 == 0) {
    uVar20 = FUN_140c04244();
    lVar19 = FUN_14477b664(uVar20);
    param_2[1] = lVar19;
  }
  if (param_2[2] == 0) {
    if ((lVar19 == 0) || (*param_2 == 0)) goto LAB_140d5587c;
    plVar36 = *(longlong **)(lVar19 + 0xb8);
    if ((plVar36 == (longlong *)0x0) ||
       (cVar15 = (**(code **)(*plVar36 + 0x108))(plVar36), cVar15 == '\0')) {
      param_2[2] = 0;
      goto LAB_140d5587c;
    }
    uVar20 = (**(code **)(*plVar36 + 0x110))(plVar36);
    lVar19 = FUN_144aff482(uVar20,param_2);
    param_2[2] = lVar19;
    if (lVar19 == 0) goto LAB_140d5587c;
    lVar19 = param_2[1];
  }
  if (lVar19 == 0) {
    lVar19 = FUN_140c04244();
  }
  lVar41 = *param_2;
  uVar18 = FUN_14477b664(lVar19);
  uVar16 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
  uVar27 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
  uVar27 = uVar27 >> 0x10 ^ uVar27;
  uVar16 = (uint)((ulonglong)lVar41 >> 0x10);
  uVar31 = (uint)lVar41 & 0xffff;
  uVar16 = uVar27 >> 0xd ^
           (((uint)lVar41 << 0x10 | uVar31) + (int)((ulonglong)lVar41 >> 0x20) +
            (uVar16 << 0x13 | uVar16 & 0xffff) + (uVar31 >> 4)) - uVar27;
  uVar31 = uVar16 << 8 ^ (-0x61c88647 - uVar27) - uVar16;
  uVar38 = uVar31 >> 0xd ^ (uVar27 - uVar16) - uVar31;
  uVar16 = uVar38 >> 0xc ^ (uVar16 - uVar31) - uVar38;
  uVar27 = uVar16 << 0x10 ^ (uVar31 - uVar38) - uVar16;
  uVar31 = uVar27 >> 5 ^ (uVar38 - uVar16) - uVar27;
  uVar38 = uVar31 >> 3 ^ (uVar16 - uVar27) - uVar31;
  uVar16 = uVar38 << 10 ^ (uVar27 - uVar31) - uVar38;
  uVar16 = uVar16 >> 0xf ^ uVar31 - (uVar38 + uVar16);
  iVar17 = FUN_140d57548(param_1,uVar16,param_2);
  if (iVar17 == -1) {
LAB_140d555da:
    if (*(int *)((longlong)param_1 + 0x34) == 0) {
      iVar17 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar17 + 1;
      if (*(int *)((longlong)param_1 + 0xc) == iVar17) {
        FUN_140044672(param_1,iVar17);
      }
      iVar34 = (int)param_1[5];
      if (iVar34 == 0) {
        iVar32 = -1;
      }
      else {
        iVar32 = iVar34 + 0x1e;
        if (-1 < iVar34 + -1) {
          iVar32 = iVar34 + -1;
        }
        iVar32 = iVar32 >> 5;
      }
      plVar36 = param_1 + 2;
      iVar28 = iVar34 + 1;
      iVar35 = iVar34 + 0x1f;
      if (-1 < iVar34) {
        iVar35 = iVar34;
      }
      if (iVar35 >> 5 == iVar32) {
        *(int *)(param_1 + 5) = iVar28;
      }
      else {
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar34) {
          if (iVar34 + 0x20U < 0xa0) {
            iVar28 = 0x80;
            iVar32 = iVar34;
          }
          else {
            uVar27 = iVar34 + 0x20U >> 5;
            if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
              uVar31 = 4;
              if (4 < uVar27) {
                uVar31 = uVar27;
              }
            }
            else {
              uVar31 = (uVar27 * 3 >> 3) + uVar27 + 0x10;
            }
            uVar18 = FUN_144a3809e(uVar31 << 2,0);
            iVar32 = (int)(uVar18 >> 2);
            iVar28 = -0x20;
            if ((int)uVar27 <= iVar32) {
              iVar28 = iVar32 << 5;
            }
            iVar32 = (int)param_1[5];
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar28;
          FUN_1446efbd8(plVar36,iVar32);
          iVar28 = (int)param_1[5] + 1;
        }
        iVar32 = iVar28 + 0x1f;
        if (-1 < iVar28) {
          iVar32 = iVar28;
        }
        *(int *)(param_1 + 5) = iVar28;
        if (iVar28 % 0x20 != 0) {
          plVar21 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar21 = plVar36;
          }
          bVar26 = -(char)(iVar28 % 0x20);
          *(uint *)((longlong)plVar21 + (longlong)(iVar32 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar21 + (longlong)(iVar32 >> 5) * 4) << (bVar26 & 0x1f))
               >> (bVar26 & 0x1f);
        }
      }
      lVar19 = (longlong)iVar17;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        plVar36 = (longlong *)param_1[4];
      }
      bVar26 = (byte)iVar34 & 0x1f;
      puVar24 = (uint *)((longlong)plVar36 + (longlong)(iVar35 >> 5) * 4);
      *puVar24 = *puVar24 & (-2 << bVar26 | 0xfffffffeU >> 0x20 - bVar26);
    }
    else {
      iVar17 = (int)param_1[6];
      lVar19 = (longlong)iVar17;
      iVar34 = *(int *)(*param_1 + 4 + lVar19 * 0x30);
      *(int *)(param_1 + 6) = iVar34;
      iVar32 = *(int *)((longlong)param_1 + 0x34) + -1;
      *(int *)((longlong)param_1 + 0x34) = iVar32;
      if (iVar32 != 0) {
        *(undefined4 *)(*param_1 + (longlong)iVar34 * 0x30) = 0xffffffff;
      }
    }
    plVar36 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar36 = (longlong *)param_1[4];
    }
    iVar34 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar34 = iVar17;
    }
    puVar24 = (uint *)((longlong)plVar36 + (longlong)(iVar34 >> 5) * 4);
    *puVar24 = *puVar24 | 1 << ((byte)iVar17 & 0x1f);
    iVar34 = 1;
    lVar41 = *param_1;
    lVar19 = lVar19 * 0x30;
    puVar2 = (undefined4 *)(lVar41 + lVar19);
    *(undefined8 *)(lVar41 + lVar19) = 0;
    ((undefined8 *)(lVar41 + lVar19))[1] = 0;
    *(undefined8 *)(lVar41 + 0x10 + lVar19) = 0;
    *(longlong *)(lVar41 + lVar19) = *param_2;
    uVar20 = FUN_14477b664(param_2[1]);
    uVar20 = FUN_14477b664(uVar20);
    *(undefined8 *)(lVar41 + 8 + lVar19) = uVar20;
    *(longlong *)(lVar41 + 0x10 + lVar19) = param_2[2];
    puVar22 = (undefined8 *)(lVar41 + 0x18 + lVar19);
    *puVar22 = 0;
    puVar22[1] = 0;
    *(undefined4 *)(lVar41 + 0x28 + lVar19) = 0xffffffff;
    if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == 1) {
      uVar27 = 1;
LAB_140d556e4:
      if (((int)uVar27 < 1) || (iVar34 <= (int)param_1[9])) {
        uVar16 = (int)param_1[9] - 1U & uVar16;
        puVar2[0xb] = uVar16;
        plVar36 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar36 = param_1 + 7;
        }
        puVar2[10] = *(undefined4 *)
                      ((longlong)plVar36 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
        plVar36 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar36 = param_1 + 7;
        }
        *(int *)((longlong)plVar36 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
             iVar17;
      }
      else {
        *(int *)(param_1 + 9) = iVar34;
        FUN_140d5840e(param_1);
      }
    }
    else {
      iVar32 = FUN_140d57548(param_1,uVar16,puVar2);
      if (iVar32 == -1) {
        uVar27 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
        if (3 < uVar27) {
          uVar18 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
          lVar19 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar34 = 1 << ((byte)lVar19 & 0x1f);
        }
        goto LAB_140d556e4;
      }
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar32 * 0x30);
      plVar36 = *(longlong **)(*param_1 + 0x20 + (longlong)iVar32 * 0x30);
      if (plVar36 != (longlong *)0x0) {
        LOCK();
        plVar21 = plVar36 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar36)(plVar36);
          LOCK();
          piVar40 = (int *)((longlong)plVar36 + 0xc);
          *piVar40 = *piVar40 + -1;
          UNLOCK();
          if (*piVar40 == 0) {
            (**(code **)(*plVar36 + 0x10))(plVar36);
          }
        }
      }
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      uVar11 = puVar2[4];
      uVar12 = puVar2[5];
      uVar13 = puVar2[6];
      uVar14 = puVar2[7];
      *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar2 + 8);
      puVar3[4] = uVar11;
      puVar3[5] = uVar12;
      puVar3[6] = uVar13;
      puVar3[7] = uVar14;
      *puVar3 = uVar7;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      FUN_140f3d73a(param_1,iVar17);
    }
    lVar19 = *param_1 + (longlong)iVar17 * 0x30;
  }
  else {
    if (*param_1 + (longlong)iVar17 * 0x30 == 0) goto LAB_140d555da;
    lVar19 = *param_1 + (longlong)iVar17 * 0x30;
  }
  plVar36 = (longlong *)(lVar19 + 0x18);
  puVar22 = (undefined8 *)*plVar36;
  if (puVar22 == (undefined8 *)0x0) {
    plVar21 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar21[1] = (longlong)&DAT_100000001;
    *plVar21 = (longlong)&PTR_FUN_14b40ab40;
    plVar21[4] = 0;
    plVar21[5] = 0;
    plVar21[6] = 0;
    plVar21[7] = 0;
    plVar21[8] = 0;
    plVar21[9] = 0;
    plVar42 = plVar21 + 2;
    *plVar42 = 0;
    plVar21[3] = 0;
    plVar21[10] = 0;
    plVar21[0xb] = 2;
    if (plVar42 == (longlong *)0x0) {
      if (plVar21 == (longlong *)0x0) goto LAB_140d55e9b;
LAB_140d557ea:
      LOCK();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      UNLOCK();
      *plVar36 = (longlong)plVar42;
      plVar42 = *(longlong **)(lVar19 + 0x20);
      if (plVar21 == plVar42) {
        LOCK();
        plVar42 = plVar21 + 1;
        *(int *)plVar42 = (int)*plVar42 + -1;
        UNLOCK();
        if ((int)*plVar42 == 0) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar40 = (int *)((longlong)plVar21 + 0xc);
          *piVar40 = *piVar40 + -1;
          UNLOCK();
          if (*piVar40 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
      else {
        *(longlong **)(lVar19 + 0x20) = plVar21;
        if (plVar42 != (longlong *)0x0) {
          bVar44 = false;
          goto LAB_140d55f00;
        }
      }
LAB_140d5580b:
      LOCK();
      plVar42 = plVar21 + 1;
      *(int *)plVar42 = (int)*plVar42 + -1;
      UNLOCK();
      if ((int)*plVar42 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar40 = (int *)((longlong)plVar21 + 0xc);
        *piVar40 = *piVar40 + -1;
        UNLOCK();
        if (*piVar40 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
    else {
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
        plVar21[2] = (longlong)plVar42;
        if ((longlong *)plVar21[3] != plVar21) {
          LOCK();
          *(int *)((longlong)plVar21 + 0xc) = *(int *)((longlong)plVar21 + 0xc) + 1;
          UNLOCK();
          if ((longlong *)plVar21[3] != (longlong *)0x0) {
            plVar43 = plVar21 + 3;
            plVar30 = (longlong *)plVar21[3];
            goto LAB_140d55e83;
          }
          plVar21[3] = (longlong)plVar21;
        }
LAB_140d557e0:
        LOCK();
        plVar43 = plVar21 + 1;
        *(int *)plVar43 = (int)*plVar43 + -1;
        UNLOCK();
        if ((int)*plVar43 == 0) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar40 = (int *)((longlong)plVar21 + 0xc);
          *piVar40 = *piVar40 + -1;
          UNLOCK();
          if (*piVar40 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
        goto LAB_140d557ea;
      }
      _DAT_00000010 = 0x10;
      plVar43 = (longlong *)&DAT_00000018;
      plVar30 = _DAT_00000018;
      if (_DAT_00000018 != (longlong *)0x0) {
LAB_140d55e83:
        LOCK();
        piVar40 = (int *)((longlong)plVar30 + 0xc);
        *piVar40 = *piVar40 + -1;
        UNLOCK();
        if (*piVar40 == 0) {
          (**(code **)(*plVar30 + 0x10))();
        }
        *plVar43 = (longlong)plVar21;
        if (plVar21 != (longlong *)0x0) goto LAB_140d557e0;
      }
LAB_140d55e9b:
      *plVar36 = (longlong)plVar42;
      plVar42 = *(longlong **)(lVar19 + 0x20);
      if (plVar42 != (longlong *)0x0) {
        *(longlong **)(lVar19 + 0x20) = plVar21;
        bVar44 = true;
LAB_140d55f00:
        LOCK();
        plVar43 = plVar42 + 1;
        *(int *)plVar43 = (int)*plVar43 + -1;
        UNLOCK();
        if ((int)*plVar43 == 0) {
          (**(code **)*plVar42)(plVar42);
          LOCK();
          piVar40 = (int *)((longlong)plVar42 + 0xc);
          *piVar40 = *piVar40 + -1;
          UNLOCK();
          if (*piVar40 == 0) {
            (**(code **)(*plVar42 + 0x10))(plVar42);
          }
        }
        if (!bVar44) goto LAB_140d5580b;
      }
    }
    puVar22 = (undefined8 *)*plVar36;
  }
  lVar19 = param_2[1];
  if (lVar19 == 0) {
    uVar20 = FUN_140c04244();
    lVar19 = FUN_14477b664(uVar20);
    param_2[1] = lVar19;
  }
  lVar41 = param_2[2];
  if (((lVar41 == 0) && (lVar41 = 0, lVar19 != 0)) && (*param_2 != 0)) {
    plVar36 = *(longlong **)(lVar19 + 0xb8);
    if ((plVar36 == (longlong *)0x0) ||
       (cVar15 = (**(code **)(*plVar36 + 0x108))(plVar36), cVar15 == '\0')) {
      lVar41 = 0;
    }
    else {
      uVar20 = (**(code **)(*plVar36 + 0x110))(plVar36);
      lVar41 = FUN_144aff482(uVar20,param_2);
    }
    param_2[2] = lVar41;
  }
  puVar22[2] = lVar41;
  lVar19 = puVar22[3];
  if (lVar19 == 0) {
    ppuVar1 = (undefined8 **)(puVar22 + 3);
    uVar20 = FUN_14050fd64();
    local_138 = 0;
    FUN_14088df30(uVar20,&local_a0,puVar22[2],10000);
    plVar36 = local_98[0];
    if (ppuVar1 != &local_a0) {
      puVar22[3] = local_a0;
      local_a0 = (undefined8 *)0x0;
      plVar21 = (longlong *)puVar22[4];
      if (local_98[0] != plVar21) {
        local_98[0] = (longlong *)0x0;
        puVar22[4] = plVar36;
        if (plVar21 != (longlong *)0x0) {
          LOCK();
          plVar36 = plVar21 + 1;
          *(int *)plVar36 = (int)*plVar36 + -1;
          UNLOCK();
          if ((int)*plVar36 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar40 = (int *)((longlong)plVar21 + 0xc);
            *piVar40 = *piVar40 + -1;
            UNLOCK();
            if (*piVar40 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
      }
    }
    plVar36 = local_98[0];
    if (local_98[0] != (longlong *)0x0) {
      LOCK();
      plVar21 = local_98[0] + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*local_98[0])(local_98[0]);
        LOCK();
        piVar40 = (int *)((longlong)plVar36 + 0xc);
        *piVar40 = *piVar40 + -1;
        UNLOCK();
        if (*piVar40 == 0) {
          (**(code **)(*plVar36 + 0x10))(plVar36);
        }
      }
    }
    plVar36 = DAT_14cb7f870;
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    piVar40 = &DAT_14c9485f0;
    if (*(int **)(puVar22[2] + 8) != (int *)0x0) {
      piVar40 = *(int **)(puVar22[2] + 8);
    }
    local_120 = puVar22;
    if (DAT_14cb7f870 != (longlong *)0x0) {
      cVar15 = (**(code **)(*DAT_14cb7f870 + 0x300))(DAT_14cb7f870);
      if (cVar15 == '\0') {
        lVar19 = FUN_1400e3c00(plVar36,piVar40,1);
        if (lVar19 != 0) {
          uVar16 = *(uint *)(lVar19 + 0x98);
          local_128 = (ulonglong)uVar16;
          if (uVar16 != 0) {
            local_118 = (uint *)(lVar19 + 0x80);
            puVar24 = *(uint **)(lVar19 + 0x90);
            if (*(uint **)(lVar19 + 0x90) == (uint *)0x0) {
              puVar24 = local_118;
            }
            uVar27 = *puVar24;
            if (uVar27 == 0) {
              uVar18 = 0;
              iVar17 = 0;
              do {
                iVar34 = uVar16 - 1;
                if ((int)(uVar16 - 1) < 0) {
                  iVar34 = uVar16 + 0x1e;
                }
                uVar27 = iVar34 >> 5;
                if (iVar34 >> 5 < 1) {
                  uVar27 = 0;
                }
                if (uVar18 == uVar27) goto LAB_140d56238;
                iVar17 = iVar17 + 0x20;
                uVar27 = puVar24[uVar18 + 1];
                uVar18 = uVar18 + 1;
              } while (uVar27 == 0);
            }
            else {
              uVar18 = 0;
              iVar17 = 0;
            }
            uVar39 = (ulonglong)(-uVar27 & uVar27);
            uVar33 = uVar39 * 2 + 1;
            lVar41 = 0x3f;
            if (uVar33 != 0) {
              for (; uVar33 >> lVar41 == 0; lVar41 = lVar41 + -1) {
              }
            }
            iVar34 = (iVar17 - ((uint)lVar41 ^ 0x3f)) + 0x3e;
            if (iVar34 < (int)uVar16) {
              uVar16 = 0xffffffff;
              do {
                lVar41 = *(longlong *)
                          (*(longlong *)(lVar19 + 0x70) + 0x10 + (longlong)iVar34 * 0x20);
                if (((lVar41 != 0) && (*(char *)(lVar41 + 0x2a) == '\0')) &&
                   (plVar36 = *(longlong **)(lVar41 + 0x30), plVar36 != (longlong *)0x0)) {
                  lVar41 = (**(code **)(*plVar36 + 8))(plVar36);
                  lVar37 = FUN_14012344a();
                  uVar33 = uStack_70;
                  if (((lVar37 != 0) && (*(int *)(lVar37 + 0x38) <= *(int *)(lVar41 + 0x38))) &&
                     (*(longlong *)
                       (*(longlong *)(lVar41 + 0x30) + (longlong)*(int *)(lVar37 + 0x38) * 8) ==
                      lVar37 + 0x30)) {
                    lVar41 = (longlong)(int)uStack_70;
                    uVar27 = (int)uStack_70 + 1;
                    uStack_70 = CONCAT44(uStack_70._4_4_,uVar27);
                    if (uStack_70._4_4_ < uVar27) {
                      FUN_140d57f9e(&local_78,uVar33 & 0xffffffff);
                    }
                    local_78[lVar41] = (longlong)plVar36;
                  }
                }
                uVar16 = uVar16 & ~(uint)uVar39;
                puVar24 = *(uint **)(lVar19 + 0x90);
                if (*(uint **)(lVar19 + 0x90) == (uint *)0x0) {
                  puVar24 = local_118;
                }
                iVar32 = *(int *)(lVar19 + 0x98);
                iVar34 = (int)uVar18;
                lVar41 = (longlong)iVar34;
                uVar27 = puVar24[lVar41] & uVar16;
                if (uVar27 == 0) {
                  iVar28 = iVar32 + 0x1e;
                  if (-1 < iVar32 + -1) {
                    iVar28 = iVar32 + -1;
                  }
                  iVar28 = iVar28 >> 5;
                  iVar17 = iVar17 + 0x20;
                  iVar35 = iVar28;
                  if (iVar28 < iVar34) {
                    iVar35 = iVar34;
                  }
                  if (iVar34 < iVar28) {
                    lVar37 = 0;
                    do {
                      uVar27 = puVar24[lVar41 + lVar37 + 1];
                      if (uVar27 != 0) {
                        uVar18 = (ulonglong)(iVar34 + (int)lVar37 + 1);
                        uVar16 = 0xffffffff;
                        goto LAB_140d5617e;
                      }
                      iVar17 = iVar17 + 0x20;
                      lVar37 = lVar37 + 1;
                    } while (iVar35 - lVar41 != lVar37);
                    uVar16 = 0xffffffff;
                    iVar34 = iVar35;
                  }
                  uVar18 = (ulonglong)(iVar34 + 1);
                  iVar34 = iVar32;
                }
                else {
LAB_140d5617e:
                  uVar39 = (ulonglong)(-uVar27 & uVar27);
                  uVar33 = uVar39 * 2 + 1;
                  lVar41 = 0x3f;
                  if (uVar33 != 0) {
                    for (; uVar33 >> lVar41 == 0; lVar41 = lVar41 + -1) {
                    }
                  }
                  iVar34 = (iVar17 - ((uint)lVar41 ^ 0x3f)) + 0x3e;
                  if (iVar32 <= iVar34) {
                    iVar34 = iVar32;
                  }
                }
              } while (iVar34 != (int)local_128);
            }
          }
        }
      }
      else {
        puVar22 = DAT_14c948618;
        uVar16 = DAT_14c948620;
        if (((*piVar40 != 0) && (iVar17 = piVar40[1], iVar17 != 0)) &&
           ((*piVar40 != DAT_14c948000 && (0 < iVar17)))) {
          piVar29 = piVar40 + 2;
          if (0 < piVar40[9]) {
            piVar29 = *(int **)(piVar40 + 6);
          }
          if (iVar17 != 1) {
            piVar29 = *(int **)(piVar40 + 6);
          }
          puVar22 = *(undefined8 **)piVar29;
          uVar16 = piVar29[2];
        }
        local_98[0] = (longlong *)CONCAT44(local_98[0]._4_4_,uVar16);
        plVar36 = plVar36 + 0x3f;
        local_a0._0_4_ = (uint)puVar22;
        if (uVar16 != 0) {
          uVar27 = uVar16 >> 0xd ^ (uint)local_a0 - uVar16;
          uVar31 = uVar27 << 8 ^ (-0x61c88647 - uVar16) - uVar27;
          uVar38 = uVar31 >> 0xd ^ (uVar16 - uVar27) - uVar31;
          uVar27 = uVar38 >> 0xc ^ (uVar27 - uVar31) - uVar38;
          uVar16 = uVar27 << 0x10 ^ (uVar31 - uVar38) - uVar27;
          uVar31 = uVar16 >> 5 ^ (uVar38 - uVar27) - uVar16;
          uVar27 = uVar31 >> 3 ^ (uVar27 - uVar16) - uVar31;
          uVar16 = uVar27 << 10 ^ (uVar16 - uVar31) - uVar27;
          local_a0._0_4_ = uVar16 >> 0xf ^ uVar31 - (uVar27 + uVar16);
        }
        uVar16 = (uint)local_a0;
        local_a0 = puVar22;
        iVar17 = FUN_1448467de(plVar36,uVar16,&local_a0);
        if (iVar17 != -1) {
          lVar19 = *plVar36;
          lVar41 = lVar19 + (longlong)iVar17 * 0x70;
          if ((lVar41 != 0) && ((longlong)iVar17 * 0x70 + lVar19 != -0x10)) {
            puVar24 = (uint *)(lVar41 + 0x28);
            uVar16 = *(uint *)(lVar41 + 0x40);
            uVar18 = (ulonglong)uVar16;
            if (uVar16 == 0) {
              uVar33 = 1;
              uVar39 = 0;
              uVar27 = 0;
              iVar17 = 0;
            }
            else {
              puVar23 = *(uint **)(lVar41 + 0x38);
              if (*(uint **)(lVar41 + 0x38) == (uint *)0x0) {
                puVar23 = puVar24;
              }
              uVar27 = *puVar23;
              if (uVar27 == 0) {
                iVar17 = uVar16 + 0x1e;
                if (-1 < (int)(uVar16 - 1)) {
                  iVar17 = uVar16 - 1;
                }
                uVar39 = 0;
                uVar33 = (ulonglong)(uint)(iVar17 >> 5);
                if (iVar17 >> 5 < 1) {
                  uVar33 = uVar39;
                }
                iVar17 = 0;
                do {
                  if (uVar33 == uVar39) goto LAB_140d56238;
                  iVar17 = iVar17 + 0x20;
                  uVar27 = puVar23[uVar39 + 1];
                  uVar39 = uVar39 + 1;
                } while (uVar27 == 0);
              }
              else {
                uVar39 = 0;
                iVar17 = 0;
              }
              uVar33 = (ulonglong)(-uVar27 & uVar27);
              uVar4 = uVar33 * 2 + 1;
              lVar19 = 0x3f;
              if (uVar4 != 0) {
                for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              uVar27 = (iVar17 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
              if ((int)uVar16 <= (int)uVar27) {
                uVar27 = uVar16;
              }
            }
            if (uVar27 != uVar16) {
              uVar16 = 0xffffffff;
              local_128 = uVar18;
              local_118 = puVar24;
              do {
                uVar4 = uStack_70;
                lVar19 = *(longlong *)
                          (*(longlong *)(lVar41 + 0x18) + 0x10 + (longlong)(int)uVar27 * 0x20);
                lVar37 = (longlong)(int)uStack_70;
                uVar27 = (int)uStack_70 + 1;
                uStack_70 = CONCAT44(uStack_70._4_4_,uVar27);
                if (uStack_70._4_4_ < uVar27) {
                  FUN_140d57f9e(&local_78,uVar4 & 0xffffffff);
                  uVar18 = local_128;
                  puVar24 = local_118;
                }
                local_78[lVar37] = lVar19;
                uVar16 = uVar16 & ~(uint)uVar33;
                puVar23 = *(uint **)(lVar41 + 0x38);
                if (*(uint **)(lVar41 + 0x38) == (uint *)0x0) {
                  puVar23 = puVar24;
                }
                uVar31 = *(uint *)(lVar41 + 0x40);
                iVar34 = (int)uVar39;
                lVar19 = (longlong)iVar34;
                uVar27 = puVar23[lVar19] & uVar16;
                if (uVar27 == 0) {
                  iVar32 = uVar31 + 0x1e;
                  if (-1 < (int)(uVar31 - 1)) {
                    iVar32 = uVar31 - 1;
                  }
                  iVar32 = iVar32 >> 5;
                  iVar17 = iVar17 + 0x20;
                  iVar28 = iVar32;
                  if (iVar32 < iVar34) {
                    iVar28 = iVar34;
                  }
                  uVar18 = local_128;
                  if (iVar34 < iVar32) {
                    lVar37 = 0;
                    do {
                      uVar27 = puVar23[lVar19 + lVar37 + 1];
                      if (uVar27 != 0) {
                        uVar39 = (ulonglong)(iVar34 + (int)lVar37 + 1);
                        uVar16 = 0xffffffff;
                        goto LAB_140d55ba9;
                      }
                      iVar17 = iVar17 + 0x20;
                      lVar37 = lVar37 + 1;
                    } while (iVar28 - lVar19 != lVar37);
                    uVar16 = 0xffffffff;
                    iVar34 = iVar28;
                  }
                  uVar39 = (ulonglong)(iVar34 + 1);
                  uVar27 = uVar31;
                }
                else {
LAB_140d55ba9:
                  uVar33 = (ulonglong)(-uVar27 & uVar27);
                  uVar4 = uVar33 * 2 + 1;
                  lVar19 = 0x3f;
                  if (uVar4 != 0) {
                    for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                    }
                  }
                  uVar27 = (iVar17 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
                  if ((int)uVar31 <= (int)uVar27) {
                    uVar27 = uVar31;
                  }
                }
              } while (uVar27 != (uint)uVar18);
            }
          }
        }
      }
    }
LAB_140d56238:
    if ((longlong)(int)uStack_70 != 0) {
      plVar36 = local_78 + (int)uStack_70;
      plVar21 = local_78;
      do {
        lVar19 = (longlong)*(int *)(*plVar21 + 0x20);
        if (lVar19 != 0) {
          lVar41 = *(longlong *)(*plVar21 + 0x18);
          lVar37 = 0;
          do {
            lVar25 = FUN_140100ecc(*(undefined2 *)(lVar41 + 0x28 + lVar37));
            if (*(longlong *)(lVar25 + 0x10) != 0) {
              plVar42 = *ppuVar1;
              lVar25 = FUN_140100ecc(*(undefined2 *)(lVar41 + 0x28 + lVar37));
              (**(code **)(*plVar42 + 8))(plVar42,lVar25 + 0x10,0);
            }
            lVar37 = lVar37 + 0x60;
          } while (lVar19 * 0x60 != lVar37);
        }
        plVar21 = plVar21 + 1;
      } while (plVar21 != plVar36);
    }
    puVar22 = local_120;
    lVar19 = local_120[2];
    if (*(longlong *)(lVar19 + 0x110) != 0) {
      local_108 = 0;
      uStack_100 = 0;
      local_d8[2] = *(undefined8 *)(lVar19 + 0x108);
      local_c0 = *(undefined4 *)(lVar19 + 0x110);
      uStack_bc = *(undefined4 *)(lVar19 + 0x114);
      uStack_b8 = *(undefined4 *)(lVar19 + 0x118);
      uStack_b4 = *(undefined4 *)(lVar19 + 0x11c);
      local_b0 = (void *)0x0;
      local_a8 = *(int *)(lVar19 + 0x128);
      lVar41 = (longlong)local_a8;
      pvVar5 = *(void **)(lVar19 + 0x120);
      if (lVar41 == 0) {
        local_a4 = 0;
      }
      else {
        FUN_1446dd670(&local_b0,local_a8,0);
        memcpy(local_b0,pvVar5,lVar41 * 2);
      }
      FUN_140d56af4(&local_a0,local_d8 + 2,&local_108);
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      lVar19 = FUN_140d56892(&local_a0);
      if ((lVar19 == 0) && (local_98[0] != (longlong *)0x0)) {
        (**(code **)(**ppuVar1 + 8))(*ppuVar1,local_98,0);
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      lVar19 = puVar22[2];
    }
    iVar17 = *(int *)(lVar19 + 0x138);
    if ((longlong)iVar17 != 0) {
      lVar19 = *(longlong *)(lVar19 + 0x130);
      lVar41 = 0;
      do {
        if (*(longlong *)(lVar19 + 8 + lVar41) != 0) {
          piVar40 = (int *)(lVar19 + 0x20 + lVar41);
          local_d8[0] = 0;
          local_d8[1] = 0;
          local_108 = *(longlong *)(piVar40 + -8);
          uStack_100 = *(undefined8 *)(piVar40 + -6);
          iStack_f8 = piVar40[-4];
          iStack_f4 = piVar40[-3];
          local_f0 = (void *)0x0;
          local_e8 = *piVar40;
          lVar37 = (longlong)local_e8;
          pvVar5 = *(void **)(piVar40 + -2);
          if (lVar37 == 0) {
            local_e4 = 0;
          }
          else {
            FUN_1446dd670(&local_f0,local_e8,0);
            memcpy(local_f0,pvVar5,lVar37 * 2);
          }
          FUN_140d56af4(&local_a0,&local_108);
          if (local_d8[0] != 0) {
            FUN_1400020a8();
          }
          lVar37 = FUN_140d56892(&local_a0);
          if ((lVar37 == 0) && (local_98[0] != (longlong *)0x0)) {
            (**(code **)(**ppuVar1 + 8))(*ppuVar1,local_98);
          }
          if (local_88 != 0) {
            FUN_1400020a8();
          }
        }
        lVar41 = lVar41 + 0x28;
      } while ((longlong)iVar17 * 0x28 != lVar41);
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    puVar22 = local_120;
    puVar6 = *ppuVar1;
    if ((puVar6 != (undefined8 *)0x0) &&
       (((*(char *)(puVar6 + 6) != '\0' || (*(char *)((longlong)puVar6 + 0x31) != '\0')) ||
        (*(int *)((longlong)puVar6 + 0x6c) != 2)))) {
      local_a0 = (undefined8 *)0x0;
      local_98[0] = (longlong *)((ulonglong)local_98[0] & 0xffffffff00000000);
      FUN_1446efa72(&local_a0,0,3,0x10);
      local_98[0] = (longlong *)CONCAT44(local_98[0]._4_4_,3);
      plVar36 = (longlong *)puVar22[1];
      if (plVar36 == (longlong *)0x0) {
LAB_140d56773:
        *local_a0 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar41 = DAT_14c758608 + 1;
        lVar19 = DAT_14c758608 + 1;
        if (lVar41 == 0) {
          LOCK();
          UNLOCK();
          lVar41 = DAT_14c758608 + 2;
          lVar19 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar19;
        local_a0[2] = lVar41;
        *local_a0 = &PTR_FUN_14b40aad0;
        local_a0[3] = 0;
        local_a0[4] = 0;
        local_a0[5] = FUN_140da153a;
        puVar22 = local_120;
      }
      else {
        iVar17 = (int)plVar36[1];
        do {
          if (iVar17 == 0) goto LAB_140d56773;
          LOCK();
          iVar34 = (int)plVar36[1];
          bVar44 = iVar17 == iVar34;
          if (bVar44) {
            *(int *)(plVar36 + 1) = iVar17 + 1;
            iVar34 = iVar17;
          }
          iVar17 = iVar34;
          UNLOCK();
        } while (!bVar44);
        uVar20 = *puVar22;
        LOCK();
        *(int *)(plVar36 + 1) = (int)plVar36[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar36 + 1) = (int)plVar36[1] + 1;
        UNLOCK();
        *local_a0 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar41 = DAT_14c758608 + 1;
        lVar19 = DAT_14c758608 + 1;
        if (lVar41 == 0) {
          LOCK();
          UNLOCK();
          lVar41 = DAT_14c758608 + 2;
          lVar19 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar19;
        local_a0[2] = lVar41;
        *local_a0 = &PTR_FUN_14b40aad0;
        local_a0[3] = uVar20;
        local_a0[4] = plVar36;
        LOCK();
        *(int *)((longlong)plVar36 + 0xc) = *(int *)((longlong)plVar36 + 0xc) + 1;
        UNLOCK();
        local_a0[5] = FUN_140da153a;
        LOCK();
        plVar21 = plVar36 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar36)(plVar36);
          LOCK();
          piVar40 = (int *)((longlong)plVar36 + 0xc);
          *piVar40 = *piVar40 + -1;
          UNLOCK();
          if (*piVar40 == 0) {
            (**(code **)(*plVar36 + 0x10))(plVar36);
          }
        }
        LOCK();
        plVar21 = plVar36 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar36)(plVar36);
          LOCK();
          piVar40 = (int *)((longlong)plVar36 + 0xc);
          *piVar40 = *piVar40 + -1;
          UNLOCK();
          if (*piVar40 == 0) {
            (**(code **)(*plVar36 + 0x10))(plVar36);
          }
        }
        LOCK();
        plVar21 = plVar36 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar36)(plVar36);
          LOCK();
          piVar40 = (int *)((longlong)plVar36 + 0xc);
          *piVar40 = *piVar40 + -1;
          UNLOCK();
          if (*piVar40 == 0) {
            (**(code **)(*plVar36 + 0x10))(plVar36);
          }
        }
      }
      FUN_140844560(puVar6,&local_78,&local_a0);
      iVar17 = *(int *)(puVar22 + 6);
      *(uint *)(puVar22 + 6) = iVar17 + 1U;
      if (*(uint *)((longlong)puVar22 + 0x34) < iVar17 + 1U) {
        FUN_14107bfdc(puVar22 + 5,iVar17);
      }
      *(longlong **)(puVar22[5] + (longlong)iVar17 * 8) = local_78;
      goto LAB_140d5660f;
    }
    FUN_140da153a(local_120);
  }
  else if (((*(char *)(lVar19 + 0x30) != '\0') || (*(char *)(lVar19 + 0x31) != '\0')) ||
          (*(int *)(lVar19 + 0x6c) != 2)) {
LAB_140d5660f:
    if (((longlong *)*local_110 != (longlong *)0x0 && (int)local_110[1] != 0) &&
       (cVar15 = (**(code **)(*(longlong *)*local_110 + 0x30))(), cVar15 != '\0')) {
      uVar20 = puVar22[3];
      local_78 = (longlong *)0x0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      FUN_14009d848(&local_78,local_110);
      FUN_140844560(uVar20,local_d8,&local_78);
      iVar17 = *(int *)(puVar22 + 6);
      *(uint *)(puVar22 + 6) = iVar17 + 1U;
      if (*(uint *)((longlong)puVar22 + 0x34) < iVar17 + 1U) {
        FUN_14107bfdc(puVar22 + 5,iVar17);
      }
      *(longlong *)(puVar22[5] + (longlong)iVar17 * 8) = local_d8[0];
    }
    goto LAB_140d5587c;
  }
  if ((longlong *)*local_110 != (longlong *)0x0 && (int)local_110[1] != 0) {
    (**(code **)(*(longlong *)*local_110 + 0x60))();
  }
LAB_140d5587c:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d56892 FUN_140d56892 body=380 status=ok
// SIG undefined FUN_140d56892(void)

longlong FUN_140d56892(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_140d56a0e();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 140d56a0e FUN_140d56a0e body=228 status=ok
// SIG undefined FUN_140d56a0e(void)

longlong FUN_140d56a0e(void)

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
  if (DAT_14cb266a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147f85573;
    local_40 = FUN_14181b230;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/FaceFX",L"FaceFXAnimSet",&DAT_14cb266a0,&DAT_147f85572);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb266a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d56af4 FUN_140d56af4 body=851 status=ok
// SIG undefined FUN_140d56af4(void)

undefined8 * FUN_140d56af4(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68 [2];
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar1 = param_2 + 1;
  if (param_2[1] == 0) {
LAB_140d56c12:
    *param_1 = *param_2;
    uVar3 = param_2[2];
    param_1[1] = *puVar1;
    param_1[2] = uVar3;
    param_1[3] = param_2[3];
    param_2[3] = 0;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    param_2[4] = 0;
    goto LAB_140d56bc7;
  }
  lVar5 = FUN_140d56edc();
  lVar6 = *(longlong *)(lVar5 + 0x110);
  if (lVar6 == 0) {
    FUN_140aa6c08(lVar5);
    lVar6 = *(longlong *)(lVar5 + 0x110);
    if (lVar6 == 0) goto LAB_140d56c12;
  }
  if (DAT_14cb259f8 == 0) {
    local_58[0] = 0;
    local_58[1] = 0;
  }
  else {
    FUN_140d56fc2(DAT_14cb259f8,local_58);
  }
  lVar5 = FUN_140d56e48(lVar6,local_58);
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0x38) < 2)) {
    *param_1 = *param_2;
    uVar3 = param_2[2];
    param_1[1] = *puVar1;
    param_1[2] = uVar3;
    param_1[3] = param_2[3];
    param_2[3] = 0;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    param_2[4] = 0;
  }
  else {
    FUN_140056680(local_68,&DAT_149dfb77a);
    if (1 < *(int *)(param_3 + 8)) {
      lVar6 = FUN_140d56e48(lVar6,param_3);
      if (lVar6 != 0) {
        FUN_144a787a6(local_68,lVar6 + 0x30);
      }
    }
    local_88 = *(undefined4 *)puVar1;
    uStack_84 = *(undefined4 *)((longlong)param_2 + 0xc);
    uStack_80 = *(undefined4 *)(param_2 + 2);
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0x14);
    local_78 = (void *)0x0;
    local_70 = *(int *)(param_2 + 4);
    lVar6 = (longlong)local_70;
    pvVar2 = (void *)param_2[3];
    if (lVar6 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,pvVar2,lVar6 * 2);
    }
    FUN_1485fc0e8(&local_88,local_68,lVar5 + 0x30);
    if (DAT_14c9485b8 == (longlong *)0x0) {
LAB_140d56dc5:
      *param_1 = *param_2;
      uVar3 = param_2[2];
      param_1[1] = *puVar1;
      param_1[2] = uVar3;
      param_1[3] = param_2[3];
      param_2[3] = 0;
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
      param_2[4] = 0;
    }
    else {
      cVar4 = (**(code **)(*DAT_14c9485b8 + 0x150))(DAT_14c9485b8,CONCAT44(uStack_84,local_88),0,0);
      pvVar2 = local_78;
      if (cVar4 == '\0') goto LAB_140d56dc5;
      local_a8 = local_88;
      uStack_a4 = uStack_84;
      uStack_a0 = uStack_80;
      uStack_9c = uStack_7c;
      local_98 = (void *)0x0;
      lVar6 = (longlong)local_70;
      local_90 = local_70;
      if (lVar6 == 0) {
        local_8c = 0;
        *param_1 = 0;
        param_1[1] = CONCAT44(uStack_84,local_88);
        param_1[2] = CONCAT44(uStack_7c,uStack_80);
        param_1[3] = 0;
        *(undefined4 *)(param_1 + 4) = 0;
LAB_140d56e32:
        *(undefined4 *)((longlong)param_1 + 0x24) = 0;
      }
      else {
        FUN_1446dd670(&local_98,local_70,0);
        memcpy(local_98,pvVar2,lVar6 * 2);
        pvVar2 = local_98;
        lVar6 = (longlong)local_90;
        *param_1 = 0;
        *(undefined4 *)(param_1 + 1) = local_a8;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_a4;
        *(undefined4 *)(param_1 + 2) = uStack_a0;
        *(undefined4 *)((longlong)param_1 + 0x14) = uStack_9c;
        param_1[3] = 0;
        *(int *)(param_1 + 4) = local_90;
        if (lVar6 == 0) goto LAB_140d56e32;
        FUN_1446dd670(param_1 + 3,local_90,0);
        memcpy((void *)param_1[3],pvVar2,lVar6 * 2);
      }
      if (local_98 != (void *)0x0) {
        FUN_1400020a8(local_98);
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
LAB_140d56bc7:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d56e48 FUN_140d56e48 body=148 status=ok
// SIG undefined FUN_140d56e48(void)

longlong FUN_140d56e48(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar2 = (int)param_2[1];
  if ((iVar2 < 2) || ((longlong)*(int *)(param_1 + 0x40) == 0)) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x40) * 0x48;
LAB_140d56e72:
  if (*(int *)(lVar3 + 0x28) == iVar2) {
    lVar8 = 0;
    do {
      uVar6 = *(ushort *)(*(longlong *)(lVar3 + 0x20) + lVar8);
      uVar7 = (ulonglong)uVar6;
      uVar4 = *(ushort *)(*param_2 + lVar8);
      if (uVar6 == uVar4) {
        if (uVar6 == 0) {
          return lVar3;
        }
      }
      else {
        if (0x7f < (uVar4 | uVar6)) goto LAB_140d56eb5;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar5 = (ulonglong)uVar4;
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar5]) goto LAB_140d56eb5;
      }
      lVar8 = lVar8 + 2;
    } while( true );
  }
  if (*(int *)(lVar3 + 0x28) + iVar2 == 1) {
    return lVar3;
  }
  goto LAB_140d56ecf;
LAB_140d56eb5:
  if (uVar6 == uVar4) {
    return lVar3;
  }
LAB_140d56ecf:
  lVar3 = lVar3 + 0x48;
  if (lVar3 == lVar1) {
    return 0;
  }
  goto LAB_140d56e72;
}



// FUNCTION 140d56edc FUN_140d56edc body=228 status=ok
// SIG undefined FUN_140d56edc(void)

longlong FUN_140d56edc(void)

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
  if (DAT_14cb53a70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_1485fc0e5;
    local_40 = FUN_1464ab12c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/GbxFaceFX",L"GbxFaceFXConfig",&DAT_14cb53a70,&DAT_1485fc0e4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb53a70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d56fc2 FUN_140d56fc2 body=277 status=ok
// SIG undefined FUN_140d56fc2(void)

undefined8 FUN_140d56fc2(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined4 local_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = FUN_140d5712e();
  local_38 = &DAT_14acb7de8;
  local_30 = 5;
  uStack_2c = uStack_2c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_38,1);
  local_48 = (void *)(ulonglong)uVar4;
  FUN_140d570d8(uVar5,&local_38,&local_48);
  local_48 = (void *)0x0;
  local_40 = *(int *)(local_38 + 0x18);
  lVar6 = (longlong)local_40;
  _Src = *(void **)(local_38 + 0x14);
  if (lVar6 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar6 * 2);
  }
  FUN_140d571a6(param_2,&local_48);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)CONCAT44(uStack_2c,local_30);
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d570d8 FUN_140d570d8 body=85 status=ok
// SIG undefined FUN_140d570d8(void)

void FUN_140d570d8(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar2) == *param_3) {
        *param_2 = *(undefined8 *)(lVar1 + 8 + lVar2);
        lVar1 = *(longlong *)(lVar1 + 0x10 + lVar2);
        goto LAB_140d57109;
      }
      lVar2 = lVar2 + 0x18;
    } while ((longlong)*(int *)(param_1 + 0x50) * 0x18 != lVar2);
  }
  *param_2 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = *(longlong *)(param_1 + 0x30);
LAB_140d57109:
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140d5712e FUN_140d5712e body=120 status=ok
// SIG undefined FUN_140d5712e(void)

undefined * FUN_140d5712e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844be8) {
    FUN_144b3d300(&DAT_14c844be8);
    if (DAT_14c844be8 == -1) {
      FUN_1456bade4(&DAT_14c844b48);
      DAT_14c844be0 = &DAT_14c844b48;
      atexit(FUN_142761918);
      _Init_thread_footer(&DAT_14c844be8);
    }
  }
  return DAT_14c844be0;
}



// FUNCTION 140d571a6 FUN_140d571a6 body=179 status=ok
// SIG undefined FUN_140d571a6(void)

undefined8 * FUN_140d571a6(undefined8 *param_1)

{
  void *_Src;
  char cVar1;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140d5725a(&local_30);
  cVar1 = FUN_140d577ec(&local_30);
  _Src = local_30;
  if (cVar1 == '\0') {
    FUN_140056680(param_1,L"English(US)");
  }
  else {
    *param_1 = 0;
    *(int *)(param_1 + 1) = local_28;
    if ((longlong)local_28 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,local_28,0);
      memcpy((void *)*param_1,_Src,(longlong)local_28 * 2);
    }
  }
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d5725a FUN_140d5725a body=743 status=ok
// SIG undefined FUN_140d5725a(void)

undefined8 * FUN_140d5725a(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  uint uVar7;
  void *_Src;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  code *pcVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14cb253f8 == 0) {
    local_70 = &local_50;
    local_50 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_14081d0ea;
    local_78 = &LAB_147f6f09d;
    local_80 = &LAB_146201c25;
    local_88 = &DAT_149e063b2;
    local_90 = 0;
    local_98 = 0x10000006;
    local_a0 = 8;
    local_a8 = 0x480;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
  }
  lVar8 = DAT_14cb253f8;
  lVar12 = *(longlong *)(DAT_14cb253f8 + 0x110);
  if (lVar12 == 0) {
    FUN_140aa6c08(DAT_14cb253f8);
    lVar12 = *(longlong *)(lVar8 + 0x110);
    if (lVar12 == 0) {
      FUN_140056680(param_1,L"English(US)");
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8);
    }
  }
  plVar1 = (longlong *)(lVar12 + 0xb0);
  iVar2 = *(int *)(param_2 + 1);
  uVar10 = 0;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    if (iVar2 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    lVar8 = 0;
    uVar10 = 0;
    do {
      uVar7 = ((uint)(0x19 < (ushort)puVar6[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar6[lVar8]) -
              0x20;
      uVar9 = (uint)(uVar10 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar10 ^ uVar7) & 0xff) * 4);
      uVar10 = (ulonglong)
               (uVar9 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar7 >> 8 & 0xff) * 4));
      lVar8 = lVar8 + 1;
    } while (iVar4 != (int)lVar8);
  }
  iVar2 = FUN_1457511aa(plVar1,uVar10,param_2);
  if ((iVar2 == -1) || (uVar10 = (longlong)iVar2 * 0x28 + *plVar1, uVar10 == 0)) {
    iVar2 = *(int *)(param_2 + 1);
    puVar6 = &DAT_149dfb77a;
    if (iVar2 != 0) {
      puVar6 = (undefined2 *)*param_2;
    }
    uVar10 = 0;
    uVar7 = iVar2 - 1;
    if (iVar2 == 0) {
      uVar7 = 0;
    }
    uVar9 = 2;
    if ((int)uVar7 < 2) {
      uVar9 = uVar7;
    }
    uVar5 = (ulonglong)uVar9;
    if ((int)uVar9 < 1) {
      uVar5 = uVar10;
    }
    FUN_14006620a(&local_50,puVar6,uVar5);
    pcVar11 = (code *)&DAT_149dfb77a;
    if (local_48 != 0) {
      pcVar11 = local_50;
    }
    uVar5 = (ulonglong)(local_48 - 1);
    if (local_48 == 0) {
      uVar5 = uVar10;
    }
    uVar3 = FUN_144a49b4a(uVar5,pcVar11);
    iVar2 = FUN_1457511aa(plVar1,uVar3,&local_50);
    if (iVar2 != -1) {
      uVar10 = (longlong)iVar2 * 0x28 + *plVar1;
    }
    if (local_50 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (uVar10 == 0) {
      *param_1 = 0;
      iVar2 = *(int *)(lVar12 + 0x168);
      _Src = *(void **)(lVar12 + 0x160);
      goto LAB_140d57362;
    }
  }
  *param_1 = 0;
  iVar2 = *(int *)(uVar10 + 0x18);
  _Src = *(void **)(uVar10 + 0x10);
LAB_140d57362:
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar2,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d57548 FUN_140d57548 body=676 status=ok
// SIG undefined FUN_140d57548(void)

int FUN_140d57548(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  int iVar14;
  longlong lVar15;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      lVar9 = *param_1;
      do {
        lVar15 = (longlong)iVar14 * 0x30;
        plVar8 = (longlong *)(lVar9 + lVar15);
        if (*(longlong *)(lVar9 + 8 + lVar15) == 0) {
          uVar12 = FUN_140c04244();
          lVar9 = FUN_14477b664(uVar12);
          plVar8[1] = lVar9;
        }
        lVar9 = param_3[1];
        if (lVar9 == 0) {
          lVar9 = FUN_140c04244();
        }
        lVar1 = *param_3;
        lVar9 = FUN_14477b664(lVar9);
        iVar6 = 0;
        if ((lVar9 != 0) && (plVar2 = *(longlong **)(lVar9 + 0xb8), plVar2 != (longlong *)0x0)) {
          lVar10 = *plVar2;
          pcVar3 = *(code **)(lVar10 + 0x108);
          if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
            cVar5 = (*pcVar3)(plVar2);
            iVar6 = 0;
            if (cVar5 == '\0') goto LAB_140d57641;
            lVar10 = *plVar2;
          }
          pcVar3 = *(code **)(lVar10 + 0x110);
          ppuVar13 = &PTR_PTR_14c763408;
          if ((pcVar3 != (code *)&LAB_144783426) &&
             (ppuVar13 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
            ppuVar13 = (undefined **)(*pcVar3)(plVar2);
          }
          iVar6 = FUN_144aff48c(ppuVar13);
        }
LAB_140d57641:
        lVar10 = *plVar8;
        lVar4 = plVar8[1];
        iVar7 = 0;
        if ((lVar4 != 0) &&
           (plVar8 = *(longlong **)(lVar4 + 0xb8), iVar7 = 0, plVar8 != (longlong *)0x0)) {
          lVar11 = *plVar8;
          pcVar3 = *(code **)(lVar11 + 0x108);
          if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
            cVar5 = (*pcVar3)(plVar8);
            if (cVar5 == '\0') goto LAB_140d576a9;
            lVar11 = *plVar8;
          }
          pcVar3 = *(code **)(lVar11 + 0x110);
          ppuVar13 = &PTR_PTR_14c763408;
          if ((pcVar3 != (code *)&LAB_144783426) &&
             (ppuVar13 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
            ppuVar13 = (undefined **)(*pcVar3)(plVar8);
          }
          iVar7 = FUN_144aff48c(ppuVar13);
        }
LAB_140d576a9:
        if ((iVar7 == iVar6) && (lVar10 == lVar1)) {
          if (lVar4 == lVar9) {
            return iVar14;
          }
          if ((lVar9 != 0) && (lVar4 != 0)) {
            iVar6 = *(int *)(lVar9 + 0x38);
            iVar7 = *(int *)(lVar4 + 0x38);
            if ((iVar6 <= iVar7) &&
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar6 * 8) == lVar9 + 0x30)) {
              return iVar14;
            }
            if ((iVar7 <= iVar6) &&
               (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar7 * 8) == lVar4 + 0x30)) {
              return iVar14;
            }
          }
        }
        lVar9 = *param_1;
        iVar14 = *(int *)(lVar9 + 0x28 + lVar15);
      } while (iVar14 != -1);
    }
  }
  return -1;
}



// FUNCTION 140d577ec FUN_140d577ec body=900 status=ok
// SIG undefined FUN_140d577ec(void)

undefined8 FUN_140d577ec(longlong *param_1)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint *puVar11;
  int7 iVar13;
  undefined8 uVar12;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  longlong *local_60;
  uint *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14cb253f8 == 0) {
    local_80 = &local_50;
    local_50 = FUN_1449e2820;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_14081d0ea;
    local_88 = &LAB_147f6f09d;
    local_90 = &LAB_146201c25;
    local_98 = &DAT_149e063b2;
    local_a0 = 0;
    local_a8 = 0x10000006;
    local_b0 = 8;
    local_b8 = 0x480;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings");
  }
  lVar10 = DAT_14cb253f8;
  lVar14 = *(longlong *)(DAT_14cb253f8 + 0x110);
  if (lVar14 == 0) {
    FUN_140aa6c08(DAT_14cb253f8);
    lVar14 = *(longlong *)(lVar10 + 0x110);
    if (lVar14 == 0) goto LAB_140d57b42;
  }
  lVar10 = FUN_140d57e10(lVar14,param_1);
  if (lVar10 != 0) {
    cVar6 = FUN_140d57b72(*(undefined4 *)(lVar10 + 0x10));
    uVar15 = 0;
    if (cVar6 != '\0') {
      puVar1 = (uint *)(lVar14 + 0xc0);
      uVar4 = *(uint *)(lVar14 + 0xd8);
      if (uVar4 == 0) {
        uVar18 = 1;
        uVar22 = 0;
        iVar16 = 0;
      }
      else {
        puVar11 = *(uint **)(lVar14 + 0xd0);
        if (*(uint **)(lVar14 + 0xd0) == (uint *)0x0) {
          puVar11 = puVar1;
        }
        uVar20 = *puVar11;
        if (uVar20 == 0) {
          iVar16 = uVar4 + 0x1e;
          if (-1 < (int)(uVar4 - 1)) {
            iVar16 = uVar4 - 1;
          }
          uVar15 = 0;
          uVar18 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar18 = uVar15;
          }
          iVar16 = 0;
          do {
            if (uVar18 == uVar15) goto LAB_140d57b42;
            iVar16 = iVar16 + 0x20;
            uVar20 = puVar11[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar20 == 0);
        }
        else {
          uVar15 = 0;
          iVar16 = 0;
        }
        uVar18 = (ulonglong)(-uVar20 & uVar20);
        uVar22 = uVar18 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar20 = (iVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        uVar22 = (ulonglong)uVar20;
        if ((int)uVar4 <= (int)uVar20) {
          uVar22 = (ulonglong)uVar4;
        }
      }
      if ((uint)uVar22 != uVar4) {
        iVar5 = (int)param_1[1];
        uVar20 = 0xffffffff;
LAB_140d57904:
        iVar17 = *(int *)(*(longlong *)(lVar14 + 0xb0) + 0x18 + (longlong)(int)uVar22 * 0x28);
        iVar13 = (int7)(int3)(uVar22 >> 8);
        if (iVar17 == iVar5) {
          uVar12 = CONCAT71(iVar13,1);
          if (1 < iVar5) {
            lVar10 = 0;
            do {
              uVar2 = *(ushort *)
                       (*(longlong *)
                         (*(longlong *)(lVar14 + 0xb0) + (longlong)(int)uVar22 * 0x28 + 0x10) +
                       lVar10);
              uVar3 = *(ushort *)(*param_1 + lVar10);
              local_60 = param_1;
              local_58 = puVar1;
              if (uVar2 == uVar3) {
                if (uVar2 == 0) break;
              }
              else {
                if (0x7f < (uVar3 | uVar2)) {
                  iVar17 = (uint)uVar2 - (uint)uVar3;
                  goto LAB_140d57992;
                }
                if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                goto code_r0x000140d5798f;
              }
              lVar10 = lVar10 + 2;
            } while( true );
          }
        }
        else {
          uVar12 = CONCAT71(iVar13,1);
          if (iVar17 + iVar5 != 1) goto LAB_140d579a8;
        }
        goto LAB_140d57a5a;
      }
    }
  }
LAB_140d57b42:
  uVar12 = 0;
LAB_140d57a5a:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
code_r0x000140d5798f:
  iVar17 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_140d57992:
  if (iVar17 == 0) goto LAB_140d57a5a;
LAB_140d579a8:
  uVar20 = uVar20 & ~(uint)uVar18;
  puVar11 = *(uint **)(lVar14 + 0xd0);
  if (*(uint **)(lVar14 + 0xd0) == (uint *)0x0) {
    puVar11 = puVar1;
  }
  iVar17 = (int)uVar15;
  lVar10 = (longlong)iVar17;
  uVar7 = puVar11[lVar10] & uVar20;
  if (uVar7 == 0) {
    iVar8 = uVar4 + 0x1e;
    if (-1 < (int)(uVar4 - 1)) {
      iVar8 = uVar4 - 1;
    }
    iVar8 = iVar8 >> 5;
    iVar9 = iVar8;
    if (iVar8 < iVar17) {
      iVar9 = iVar17;
    }
    if (iVar8 <= iVar17) goto LAB_140d57b42;
    lVar19 = 0;
    while( true ) {
      iVar16 = iVar16 + 0x20;
      uVar7 = puVar11[lVar10 + lVar19 + 1];
      if (uVar7 != 0) break;
      lVar19 = lVar19 + 1;
      uVar12 = 0;
      if (iVar9 - lVar10 == lVar19) goto LAB_140d57a5a;
    }
    uVar15 = (ulonglong)(iVar17 + (int)lVar19 + 1);
    uVar20 = 0xffffffff;
  }
  uVar18 = (ulonglong)(-uVar7 & uVar7);
  uVar22 = uVar18 * 2 + 1;
  lVar10 = 0x3f;
  if (uVar22 != 0) {
    for (; uVar22 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  uVar21 = (iVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
  uVar12 = 0;
  uVar7 = uVar21;
  if ((int)uVar4 <= (int)uVar21) {
    uVar7 = uVar4;
  }
  uVar22 = (ulonglong)uVar7;
  if ((int)uVar4 <= (int)uVar21) goto LAB_140d57a5a;
  goto LAB_140d57904;
}



// FUNCTION 140d57b72 FUN_140d57b72 body=57 status=ok
// SIG undefined FUN_140d57b72(void)

undefined8 FUN_140d57b72(undefined4 param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_140d57cf8();
  if (plVar2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    if ((uVar1 & 0xfffffffe) != 2) {
      return 0;
    }
  }
  uVar3 = FUN_140d57bc0(param_1);
  return uVar3;
}



// FUNCTION 140d57bc0 FUN_140d57bc0 body=193 status=ok
// SIG undefined FUN_140d57bc0(void)

ulonglong FUN_140d57bc0(int param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_140d57c82();
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (((int)plVar3[1] != 0) && ((longlong *)*plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*plVar3 + 0x30))();
    if (cVar1 != '\0') {
      puVar4 = (undefined8 *)FUN_140d57c82();
      if (*(int *)(puVar4 + 1) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)*puVar4;
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,&local_30);
      if ((longlong)local_28 == 0) {
        uVar5 = CONCAT71((int7)(int3)((uint)local_28 >> 8),1);
      }
      else {
        lVar6 = (longlong)local_28 << 4;
        plVar3 = local_30;
        do {
          if ((longlong *)*plVar3 != (longlong *)0x0) {
            iVar2 = (**(code **)(*(longlong *)*plVar3 + 0x10))();
            if (iVar2 == param_1) goto LAB_140d57c45;
          }
          plVar3 = plVar3 + 2;
          lVar6 = lVar6 + -0x10;
        } while (lVar6 != 0);
        plVar3 = (longlong *)0x0;
LAB_140d57c45:
        uVar5 = CONCAT71((int7)((ulonglong)lVar6 >> 8),plVar3 != (longlong *)0x0);
      }
      if (local_30 != (longlong *)0x0) {
        FUN_1400020a8(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d57c82 FUN_140d57c82 body=117 status=ok
// SIG undefined FUN_140d57c82(void)

undefined8 * FUN_140d57c82(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c867260) {
    FUN_144b3d300(&DAT_14c867260);
    if (DAT_14c867260 == -1) {
      DAT_14c867250 = 0;
      DAT_14c867258 = 0;
      atexit(FUN_14277ed6a);
      _Init_thread_footer(&DAT_14c867260);
    }
  }
  return &DAT_14c867250;
}



// FUNCTION 140d57cf8 FUN_140d57cf8 body=279 status=ok
// SIG undefined FUN_140d57cf8(void)

longlong FUN_140d57cf8(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14c8c2b48 == 0) || (DAT_14c8c2b50 == '\0')) {
    if (1 < DAT_14c872cf0) {
      local_28 = 0;
      uStack_20 = 0;
      local_38 = &DAT_14c872ce8;
      FUN_1449da20c(DAT_14c872ce0,L"StreamingInstall",L"DefaultProviderName",&local_28);
      if (1 < (int)uStack_20) {
        FUN_1446f470e(&local_30,local_28,1);
        uVar1 = FUN_144a52528();
        plVar2 = (longlong *)FUN_1405f3750(uVar1,local_30,0);
        if (plVar2 != (longlong *)0x0) {
          DAT_14c8c2b48 = (**(code **)(*plVar2 + 0x40))(plVar2);
          DAT_14c8c2b50 = '\x01';
          if (local_28 != 0) {
            FUN_1400020a8();
          }
          goto LAB_140d57d21;
        }
      }
      DAT_14c8c2b50 = '\x01';
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    DAT_14c8c2b48 = FUN_140d58100();
  }
LAB_140d57d21:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return DAT_14c8c2b48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d57e10 FUN_140d57e10 body=397 status=ok
// SIG undefined FUN_140d57e10(void)

longlong * FUN_140d57e10(longlong param_1,undefined8 *param_2)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  ushort uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_40;
  pvVar1 = (void *)*param_2;
  if (lVar5 == 0) {
    local_3c = 0;
    local_30 = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,pvVar1,lVar5 * 2);
    pvVar1 = local_48;
    lVar5 = (longlong)local_40;
    local_38 = (void *)0x0;
    local_30 = local_40;
    if (lVar5 != 0) {
      FUN_1446dd670(&local_38,local_40,0);
      memcpy(local_38,pvVar1,lVar5 * 2);
      goto LAB_140d57eae;
    }
  }
  local_38 = (void *)0x0;
  local_2c = 0;
LAB_140d57eae:
  if ((longlong)*(int *)(param_1 + 0x108) == 0) {
LAB_140d57f32:
    plVar3 = (longlong *)0x0;
LAB_140d57f3f:
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return plVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  plVar3 = *(longlong **)(param_1 + 0x100);
  plVar2 = plVar3 + (longlong)*(int *)(param_1 + 0x108) * 6;
LAB_140d57ed7:
  if ((int)plVar3[1] == local_30) {
    if (1 < local_30) {
      lVar5 = 0;
      do {
        uVar7 = *(ushort *)(*plVar3 + lVar5);
        uVar8 = (ulonglong)uVar7;
        uVar4 = *(ushort *)((longlong)local_38 + lVar5);
        if (uVar7 == uVar4) {
          if (uVar7 == 0) break;
        }
        else {
          if (0x7f < (uVar4 | uVar7)) goto LAB_140d57f21;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar6 = (ulonglong)uVar4;
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar6]) goto LAB_140d57f21;
        }
        lVar5 = lVar5 + 2;
      } while( true );
    }
  }
  else if ((int)plVar3[1] + local_30 != 1) goto LAB_140d57f29;
  goto LAB_140d57f3f;
LAB_140d57f21:
  if (uVar7 == uVar4) goto LAB_140d57f3f;
LAB_140d57f29:
  plVar3 = plVar3 + 6;
  if (plVar3 == plVar2) goto LAB_140d57f32;
  goto LAB_140d57ed7;
}



// FUNCTION 140d57f9e FUN_140d57f9e body=353 status=ok
// SIG undefined FUN_140d57f9e(void)

void FUN_140d57f9e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140d58025;
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
LAB_140d58025:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140d58100 FUN_140d58100 body=185 status=ok
// SIG undefined FUN_140d58100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140d58100(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83e720) {
    FUN_144b3d300(&DAT_14c83e720);
    if (DAT_14c83e720 == -1) {
      _DAT_14c83e6d0 = &PTR_FUN_149e05470;
      _DAT_14c83e6d8 = 0;
      uRam000000014c83e6e0 = 0;
      _DAT_14c83e6e8 = 2;
      _DAT_14c83e6ec = 0;
      uRam000000014c83e6f4 = 0;
      _DAT_14c83e6fc = 0x200000000;
      _DAT_14c83e704 = 0;
      uRam000000014c83e70c = 0;
      _DAT_14c83e714 = 0;
      _DAT_14c83e718 = 2;
      atexit((_func_5014 *)&LAB_14274d7af);
      _Init_thread_footer(&DAT_14c83e720);
    }
  }
  return &DAT_14c83e6d0;
}



// FUNCTION 140d581ba FUN_140d581ba body=594 status=ok
// SIG undefined FUN_140d581ba(void)

void FUN_140d581ba(longlong *param_1)

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
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x14);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x10 + lVar13 * 0x14) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0xc + lVar13 * 0x14) =
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
            if (iVar3 - lVar14 == lVar13) goto LAB_140d583c3;
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
LAB_140d583c3:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d5840e FUN_140d5840e body=824 status=ok
// SIG undefined FUN_140d5840e(void)

void FUN_140d5840e(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar15 = *(uint *)(param_1 + 9);
  if (uVar15 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar15,4);
    if (0 < (int)uVar15) {
      uVar5 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar15 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar16 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar16 = local_68 >> 0x20;
    }
    iVar18 = (int)local_68;
    uVar15 = (uint)local_58;
    iVar8 = local_58._4_4_;
    iVar17 = local_50;
    plVar9 = local_60;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_70 = plVar9;
        lVar14 = *param_1;
        lVar11 = *(longlong *)(lVar14 + 8 + (longlong)iVar8 * 0x30);
        local_74 = iVar17;
        if (lVar11 == 0) {
          lVar11 = FUN_140c04244();
        }
        puVar12 = (undefined8 *)(lVar14 + (longlong)iVar8 * 0x30);
        uVar3 = *puVar12;
        uVar6 = FUN_14477b664(lVar11);
        uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar7 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = uVar7 >> 0x10 ^ uVar7;
        uVar5 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar10 = (uint)uVar3 & 0xffff;
        uVar5 = uVar7 >> 0xd ^
                (((uint)uVar3 << 0x10 | uVar10) + (int)((ulonglong)uVar3 >> 0x20) +
                 (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar10 >> 4)) - uVar7;
        uVar10 = uVar5 << 8 ^ (-0x61c88647 - uVar7) - uVar5;
        uVar13 = uVar10 >> 0xd ^ (uVar7 - uVar5) - uVar10;
        uVar5 = uVar13 >> 0xc ^ (uVar5 - uVar10) - uVar13;
        uVar7 = uVar5 << 0x10 ^ (uVar10 - uVar13) - uVar5;
        uVar10 = uVar7 >> 5 ^ (uVar13 - uVar5) - uVar7;
        uVar13 = uVar10 >> 3 ^ (uVar5 - uVar7) - uVar10;
        uVar5 = uVar13 << 10 ^ (uVar7 - uVar10) - uVar13;
        uVar6 = (longlong)(int)(uVar5 >> 0xf ^ uVar10 - (uVar13 + uVar5)) &
                (longlong)(int)param_1[9] - 1U;
        iVar17 = (int)uVar6;
        *(int *)((longlong)puVar12 + 0x2c) = iVar17;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(puVar12 + 5) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar17 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8
        ;
        uVar15 = uVar15 & ~(uint)uVar16;
        plVar9 = (longlong *)local_70[2];
        if ((longlong *)local_70[2] == (longlong *)0x0) {
          plVar9 = local_70;
        }
        iVar2 = (int)local_70[3];
        lVar14 = (longlong)iVar18;
        uVar5 = *(uint *)((longlong)plVar9 + lVar14 * 4) & uVar15;
        iVar17 = local_74;
        if (uVar5 == 0) {
          iVar8 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar8 = iVar2 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar4 = iVar8;
          if (iVar8 < iVar18) {
            iVar4 = iVar18;
          }
          if (iVar8 <= iVar18) break;
          lVar11 = 0;
          while( true ) {
            iVar17 = iVar17 + 0x20;
            uVar5 = *(uint *)((longlong)plVar9 + lVar11 * 4 + lVar14 * 4 + 4);
            if (uVar5 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar4 - lVar14 == lVar11) goto LAB_140d58709;
          }
          iVar18 = iVar18 + (int)lVar11 + 1;
          uVar15 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar6 = uVar16 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar8 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        plVar9 = local_70;
      } while (iVar8 < iVar2);
    }
  }
LAB_140d58709:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d58768 FUN_140d58768 body=82 status=ok
// SIG undefined FUN_140d58768(void)

undefined8 FUN_140d58768(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ac8a57c);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_2,&DAT_14ac8a57c);
    if (iVar1 < 0) {
      return 0;
    }
  }
  uVar2 = FUN_1406f8a8a(param_1,param_2);
  return uVar2;
}



// FUNCTION 140d587ba FUN_140d587ba body=43 status=ok
// SIG undefined FUN_140d587ba(void)

void FUN_140d587ba(undefined8 param_1,longlong *param_2)

{
  FUN_140d587e5(*param_2,(int)param_2[1]);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d587e5 FUN_140d587e5 body=73 status=ok
// SIG undefined FUN_140d587e5(void)

void FUN_140d587e5(longlong param_1,int param_2)

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



// FUNCTION 140d58844 FUN_140d58844 body=214 status=ok
// SIG undefined FUN_140d58844(void)

void FUN_140d58844(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar2 = param_1[0x27];
  if (0 < (longlong)(int)lVar2) {
    lVar1 = param_1[0x26];
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    lVar5 = 0;
    do {
      uVar4 = (**(code **)(*param_1 + 8))(param_1,lVar1 + lVar5);
      FUN_140d5891a(param_1,uVar4);
      lVar5 = lVar5 + 0xc;
    } while ((longlong)(int)lVar2 * 0xc != lVar5);
    if (lVar1 != 0) {
      FUN_1400020a8(lVar1);
    }
  }
  lVar2 = param_1[0x29];
  if (0 < (longlong)(int)lVar2) {
    lVar1 = param_1[0x28];
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    lVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 8))(param_1,lVar1 + lVar5);
      if (lVar3 != 0) {
        FUN_1457a0648(lVar3);
      }
      lVar5 = lVar5 + 0xc;
    } while ((longlong)(int)lVar2 * 0xc != lVar5);
    if (lVar1 != 0) {
      FUN_1400020a8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140d5891a FUN_140d5891a body=612 status=ok
// SIG undefined FUN_140d5891a(void)

void FUN_140d5891a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_58 [40];
  longlong **local_30;
  undefined4 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_2;
  if (((param_2 != (longlong *)0x0) && (0 < (int)param_2[0x13])) &&
     (*(char *)((longlong)param_2 + 0x1ea) == '\x01')) {
    FUN_140d58b80(param_2);
    if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
      uVar2 = *(uint *)(param_2 + 0x12);
      uVar3 = *(uint *)(param_2 + 0x13);
      uVar8 = uVar2;
      if (uVar3 != 0) {
        uVar8 = uVar3 >> 0xd ^ uVar2 - uVar3;
        uVar9 = uVar8 << 8 ^ (-0x61c88647 - uVar3) - uVar8;
        uVar11 = uVar9 >> 0xd ^ (uVar3 - uVar8) - uVar9;
        uVar8 = uVar11 >> 0xc ^ (uVar8 - uVar9) - uVar11;
        uVar12 = uVar8 << 0x10 ^ (uVar9 - uVar11) - uVar8;
        uVar9 = uVar12 >> 5 ^ (uVar11 - uVar8) - uVar12;
        uVar11 = uVar9 >> 3 ^ (uVar8 - uVar12) - uVar9;
        uVar8 = uVar11 << 10 ^ (uVar12 - uVar9) - uVar11;
        uVar8 = uVar8 >> 0xf ^ uVar9 - (uVar11 + uVar8);
      }
      lVar6 = param_1 + 0x98;
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        lVar6 = *(longlong *)(param_1 + 0xa0);
      }
      iVar4 = *(int *)(lVar6 + ((longlong)(int)uVar8 & (longlong)*(int *)(param_1 + 0xa8) - 1U) * 4)
      ;
      if (iVar4 != -1) {
        lVar7 = *(longlong *)(param_1 + 0x60);
LAB_140d58a4d:
        lVar1 = lVar7 + (longlong)iVar4 * 0x20;
        if ((*(uint *)(lVar7 + (longlong)iVar4 * 0x20) != uVar2) || (*(uint *)(lVar1 + 8) != uVar3))
        goto LAB_140d58a5e;
        iVar5 = *(int *)(lVar6 + (longlong)*(int *)(lVar1 + 0x1c) * 4);
        if (iVar5 == iVar4) {
          piVar10 = (int *)(lVar6 + (longlong)*(int *)(lVar1 + 0x1c) * 4);
        }
        else {
          do {
            piVar10 = (int *)(lVar7 + (longlong)iVar5 * 0x20 + 0x18);
            iVar5 = *piVar10;
          } while (iVar5 != iVar4);
        }
        *piVar10 = *(int *)(lVar1 + 0x18);
        FUN_140d58bbe();
      }
    }
LAB_140d58a8f:
    local_30 = &local_20;
    FUN_140f16972(param_1 + 0x110);
    if (local_20[5] != 0) {
      local_30 = &local_20;
      FUN_140f16972(local_20[5] + 0x50);
    }
    lVar6 = FUN_140d7e454(param_1);
    if (lVar6 != 0) {
      lVar7 = (**(code **)(*local_20 + 0x70))();
      if (lVar7 == 0) {
        local_30 = (longlong **)0x0;
        local_28 = 0;
      }
      else {
        local_28 = *(undefined4 *)(lVar7 + 0x98);
        local_30 = *(longlong ***)(lVar7 + 0x90);
      }
      FUN_140d58c30(lVar6,&local_30,0);
    }
    if ((local_20 != (longlong *)0x0) &&
       ((**(code **)(*local_20 + 0x50))(), local_20 != (longlong *)0x0)) {
      (**(code **)*local_20)(local_20,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140d58a5e:
  iVar4 = *(int *)(lVar1 + 0x18);
  if (iVar4 == -1) goto LAB_140d58a8f;
  goto LAB_140d58a4d;
}



// FUNCTION 140d58b80 FUN_140d58b80 body=62 status=ok
// SIG undefined FUN_140d58b80(void)

void FUN_140d58b80(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x98)) {
    FUN_140f691f2(param_1,*(longlong *)(param_1 + 0xa0) + 0x1a8);
    FUN_140ce1a80(param_1);
    FUN_140ce1cc4(param_1);
    return;
  }
  return;
}



// FUNCTION 140d58bbe FUN_140d58bbe body=114 status=ok
// SIG undefined FUN_140d58bbe(void)

void FUN_140d58bbe(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 140d58c30 FUN_140d58c30 body=3966 status=ok
// SIG undefined FUN_140d58c30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d58c30(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  int *piVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int *piVar27;
  uint uVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  bool bVar33;
  byte bVar34;
  undefined8 *puVar35;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  ulonglong local_a8;
  undefined8 *local_a0;
  uint *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 **local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_90 = param_2;
  if ((*(int *)(param_2 + 1) < 1) ||
     (puVar9 = (undefined8 *)FUN_140bc5192(param_1,param_2), puVar9 == (undefined8 *)0x0))
  goto LAB_140d596b9;
  if (*(int *)(param_1 + 0x310) != *(int *)(param_1 + 0x33c)) {
    iVar21 = *(int *)(local_90 + 1);
    lVar17 = *(longlong *)(param_1 + 0x348);
    if (*(longlong *)(param_1 + 0x348) == 0) {
      lVar17 = param_1 + 0x340;
    }
    piVar27 = (int *)(lVar17 + ((longlong)*(int *)(param_1 + 0x350) - 1U & (longlong)iVar21) * 4);
    do {
      iVar8 = *piVar27;
      lVar17 = (longlong)iVar8;
      if (lVar17 == -1) break;
      piVar23 = (int *)(*(longlong *)(param_1 + 0x308) + lVar17 * 0xc);
      iVar22 = *piVar23;
      if (iVar22 == iVar21) {
        lVar29 = *(longlong *)(param_1 + 0x348);
        if (*(longlong *)(param_1 + 0x348) == 0) {
          lVar29 = param_1 + 0x340;
        }
        iVar26 = *(int *)(lVar29 + (longlong)piVar23[2] * 4);
        if (iVar26 == iVar8) {
          piVar13 = (int *)(lVar29 + (longlong)piVar23[2] * 4);
        }
        else {
          do {
            piVar13 = (int *)(*(longlong *)(param_1 + 0x308) + (longlong)iVar26 * 0xc + 4);
            iVar26 = *piVar13;
          } while (iVar26 != iVar8);
        }
        *piVar13 = piVar23[1];
        lVar29 = *(longlong *)(param_1 + 0x308);
        if (*(int *)(param_1 + 0x33c) != 0) {
          *(int *)(lVar29 + (longlong)*(int *)(param_1 + 0x338) * 0xc) = iVar8;
        }
        *(undefined4 *)(lVar29 + lVar17 * 0xc) = 0xffffffff;
        uVar7 = 0xffffffff;
        if (0 < *(int *)(param_1 + 0x33c)) {
          uVar7 = *(undefined4 *)(param_1 + 0x338);
        }
        *(undefined4 *)(lVar29 + lVar17 * 0xc + 4) = uVar7;
        *(int *)(param_1 + 0x338) = iVar8;
        *(int *)(param_1 + 0x33c) = *(int *)(param_1 + 0x33c) + 1;
        lVar17 = *(longlong *)(param_1 + 0x328);
        if (*(longlong *)(param_1 + 0x328) == 0) {
          lVar17 = param_1 + 0x318;
        }
        iVar26 = iVar8 + 0x1f;
        if (-1 < iVar8) {
          iVar26 = iVar8;
        }
        bVar34 = (byte)iVar8 & 0x1f;
        puVar11 = (uint *)(lVar17 + (longlong)(iVar26 >> 5) * 4);
        *puVar11 = *puVar11 & (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
      }
      else {
        piVar27 = piVar23 + 1;
      }
    } while (iVar22 != iVar21);
  }
  local_b0 = param_1;
  FUN_140293306(param_1);
  iVar21 = *(int *)((longlong)puVar9 + 0x1e4);
  *(int *)((longlong)puVar9 + 0x1e4) = iVar21 + 1;
  lVar17 = (longlong)*(int *)(puVar9 + 0x3b);
  if (lVar17 < 1) {
    *(int *)((longlong)puVar9 + 0x1e4) = iVar21;
  }
  else {
    plVar18 = puVar9 + 0x3a;
    uVar31 = lVar17 + 1;
    lVar17 = lVar17 * 0x10 + -8;
    bVar34 = 0;
    do {
      if (((*(int *)(*plVar18 + lVar17) == 0) ||
          (plVar19 = *(longlong **)(*plVar18 + -8 + lVar17), plVar19 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar19 + 0x60))(plVar19,param_3), cVar6 == '\0')) {
        bVar34 = 1;
      }
      uVar31 = uVar31 - 1;
      lVar17 = lVar17 + -0x10;
    } while (1 < uVar31);
    iVar21 = *(int *)((longlong)puVar9 + 0x1e4);
    *(int *)((longlong)puVar9 + 0x1e4) = iVar21 + -1;
    if ((bool)(bVar34 & iVar21 < 2)) {
      iVar21 = *(int *)(puVar9 + 0x3b);
      iVar8 = iVar21;
      if (0 < iVar21) {
        iVar22 = 0;
        do {
          if (((*(int *)(*plVar18 + 8 + (longlong)iVar22 * 0x10) == 0) ||
              (plVar19 = *(longlong **)(*plVar18 + (longlong)iVar22 * 0x10),
              plVar19 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar19 + 0x28))(), cVar6 != '\0')) {
            FUN_14005b288(plVar18,iVar22);
            FUN_14005b248(plVar18);
          }
          else {
            iVar22 = iVar22 + 1;
          }
          iVar8 = *(int *)(puVar9 + 0x3b);
        } while (iVar22 < iVar8);
      }
      iVar22 = 2;
      if (2 < iVar8 * 2) {
        iVar22 = iVar8 * 2;
      }
      *(int *)(puVar9 + 0x3c) = iVar22;
      if ((iVar22 < iVar21) && (*(int *)((longlong)puVar9 + 0x1dc) != iVar8)) {
        FUN_14045812c(plVar18);
      }
    }
  }
  lVar17 = local_b0;
  if (0 < *(int *)(puVar9 + 3)) {
    uStack_50 = (longlong *)CONCAT44(uStack_50._4_4_,*(undefined4 *)(puVar9 + 3));
    local_58 = (undefined8 *)puVar9[2];
    FUN_140d59fc2(local_b0 + 0x110);
  }
  local_68 = &local_58;
  local_58 = (undefined8 *)0x0;
  uStack_50 = (longlong *)0x0;
  FUN_140d59e5a(&local_68,puVar9);
  plVar18 = uStack_50;
  lVar29 = puVar9[0xc];
  if (lVar29 != 0) {
    lVar17 = (longlong)(int)uStack_50;
    uVar16 = (int)uStack_50 + 1;
    uStack_50 = (longlong *)CONCAT44(uStack_50._4_4_,uVar16);
    if (uStack_50._4_4_ < uVar16) {
      FUN_1403a1564(&local_58,(ulonglong)plVar18 & 0xffffffff);
      lVar29 = puVar9[0xc];
    }
    local_58[lVar17] = lVar29;
    lVar17 = local_b0;
  }
  plVar18 = uStack_50;
  lVar29 = puVar9[0xd];
  if (lVar29 != 0) {
    lVar17 = (longlong)(int)uStack_50;
    uVar16 = (int)uStack_50 + 1;
    uStack_50 = (longlong *)CONCAT44(uStack_50._4_4_,uVar16);
    if (uStack_50._4_4_ < uVar16) {
      FUN_1403a1564(&local_58,(ulonglong)plVar18 & 0xffffffff);
      lVar29 = puVar9[0xd];
    }
    local_58[lVar17] = lVar29;
    lVar17 = local_b0;
  }
  plVar18 = uStack_50;
  lVar29 = puVar9[0xe];
  if (lVar29 != 0) {
    lVar17 = (longlong)(int)uStack_50;
    uVar16 = (int)uStack_50 + 1;
    uStack_50 = (longlong *)CONCAT44(uStack_50._4_4_,uVar16);
    if (uStack_50._4_4_ < uVar16) {
      FUN_1403a1564(&local_58,(ulonglong)plVar18 & 0xffffffff);
      lVar29 = puVar9[0xe];
    }
    local_58[lVar17] = lVar29;
    lVar17 = local_b0;
  }
  iVar21 = *(int *)(puVar9 + 0x10);
  if ((longlong)iVar21 != 0) {
    lVar29 = puVar9[0xf];
    lVar32 = 0;
    do {
      lVar4 = *(longlong *)(lVar29 + lVar32);
      FUN_140d59e5a(&local_68,lVar4);
      plVar18 = uStack_50;
      lVar14 = *(longlong *)(lVar4 + 0x60);
      if (lVar14 != 0) {
        lVar17 = (longlong)(int)uStack_50;
        uVar16 = (int)uStack_50 + 1;
        uStack_50 = (longlong *)CONCAT44(uStack_50._4_4_,uVar16);
        if (uStack_50._4_4_ < uVar16) {
          FUN_1403a1564(&local_58,(ulonglong)plVar18 & 0xffffffff);
          lVar14 = *(longlong *)(lVar4 + 0x60);
        }
        local_58[lVar17] = lVar14;
        lVar17 = local_b0;
      }
      plVar18 = uStack_50;
      lVar14 = *(longlong *)(lVar4 + 0x68);
      if (lVar14 != 0) {
        lVar17 = (longlong)(int)uStack_50;
        uVar16 = (int)uStack_50 + 1;
        uStack_50 = (longlong *)CONCAT44(uStack_50._4_4_,uVar16);
        if (uStack_50._4_4_ < uVar16) {
          FUN_1403a1564(&local_58,(ulonglong)plVar18 & 0xffffffff);
          lVar14 = *(longlong *)(lVar4 + 0x68);
        }
        local_58[lVar17] = lVar14;
        lVar17 = local_b0;
      }
      plVar18 = uStack_50;
      lVar14 = *(longlong *)(lVar4 + 0x70);
      if (lVar14 != 0) {
        lVar17 = (longlong)(int)uStack_50;
        uVar16 = (int)uStack_50 + 1;
        uStack_50 = (longlong *)CONCAT44(uStack_50._4_4_,uVar16);
        if (uStack_50._4_4_ < uVar16) {
          FUN_1403a1564(&local_58,(ulonglong)plVar18 & 0xffffffff);
          lVar14 = *(longlong *)(lVar4 + 0x70);
        }
        local_58[lVar17] = lVar14;
        lVar17 = local_b0;
      }
      lVar32 = lVar32 + 8;
    } while ((longlong)iVar21 * 8 != lVar32);
  }
  if ((*(char *)(lVar17 + 0x151) == '\x01') && (cVar6 = FUN_140bde87c(lVar17), cVar6 != '\0')) {
    if (*(int *)(lVar17 + 0x144) == 0) {
LAB_140d597f6:
      uVar12 = 0;
    }
    else {
      uVar16 = *(uint *)(lVar17 + 0x140);
      uVar12 = 0;
      if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
        plVar18 = (longlong *)
                  ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
        if (((plVar18 == (longlong *)0x0) ||
            ((((int)plVar18[2] != *(int *)(lVar17 + 0x144) ||
              ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)) || (*plVar18 == 0)))) ||
           (lVar29 = *(longlong *)(*plVar18 + 0x30), lVar29 == 0)) goto LAB_140d597f6;
        uVar12 = *(undefined8 *)(lVar29 + 0x360);
      }
    }
    puVar10 = (undefined8 *)FUN_140bde9ac(uVar12);
    if ((puVar10 != (undefined8 *)0x0) && ((longlong)*(int *)(puVar10 + 1) != 0)) {
      puVar11 = (uint *)*puVar10;
      local_98 = puVar11 + (longlong)*(int *)(puVar10 + 1) * 2;
      do {
        if (((puVar11[1] != 0) && (uVar16 = *puVar11, -1 < (int)uVar16)) &&
           (((int)uVar16 < DAT_14c9647dc &&
            (((plVar18 = (longlong *)
                         ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
              plVar18 != (longlong *)0x0 && (*(uint *)(plVar18 + 2) == puVar11[1])) &&
             ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)))))) {
          if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
            lVar29 = *plVar18;
          }
          else {
            lVar29 = 0;
          }
          if ((longlong)(int)uStack_50 != 0) {
            local_a0 = local_58 + (int)uStack_50;
            local_a8 = lVar29 + 0xa8;
            puVar10 = local_58;
            do {
              if (((int *)*puVar10 != (int *)0x0) &&
                 (*(int *)(lVar29 + 0xa0) != *(int *)(lVar29 + 0xcc))) {
                iVar21 = *(int *)*puVar10;
                lVar32 = *(longlong *)(lVar29 + 0xd8);
                if (*(longlong *)(lVar29 + 0xd8) == 0) {
                  lVar32 = lVar29 + 0xd0;
                }
                piVar27 = (int *)(lVar32 + ((longlong)*(int *)(lVar29 + 0xe0) - 1U &
                                           (longlong)iVar21) * 4);
                do {
                  iVar8 = *piVar27;
                  lVar32 = (longlong)iVar8;
                  if (lVar32 == -1) break;
                  piVar23 = (int *)(lVar32 * 0xc + *(longlong *)(lVar29 + 0x98));
                  iVar22 = *piVar23;
                  if (iVar22 == iVar21) {
                    lVar17 = *(longlong *)(lVar29 + 0xd8);
                    if (*(longlong *)(lVar29 + 0xd8) == 0) {
                      lVar17 = lVar29 + 0xd0;
                    }
                    iVar26 = *(int *)(lVar17 + (longlong)piVar23[2] * 4);
                    if (iVar26 == iVar8) {
                      piVar13 = (int *)(lVar17 + (longlong)piVar23[2] * 4);
                    }
                    else {
                      do {
                        piVar13 = (int *)((longlong)iVar26 * 0xc + 4 + *(longlong *)(lVar29 + 0x98))
                        ;
                        iVar26 = *piVar13;
                      } while (iVar26 != iVar8);
                    }
                    *piVar13 = piVar23[1];
                    lVar17 = *(longlong *)(lVar29 + 0x98);
                    if (*(int *)(lVar29 + 0xcc) != 0) {
                      *(int *)(lVar17 + (longlong)*(int *)(lVar29 + 200) * 0xc) = iVar8;
                    }
                    *(undefined4 *)(lVar17 + lVar32 * 0xc) = 0xffffffff;
                    if (*(int *)(lVar29 + 0xcc) < 1) {
                      uVar7 = 0xffffffff;
                    }
                    else {
                      uVar7 = *(undefined4 *)(lVar29 + 200);
                    }
                    *(undefined4 *)(lVar17 + lVar32 * 0xc + 4) = uVar7;
                    *(int *)(lVar29 + 200) = iVar8;
                    *(int *)(lVar29 + 0xcc) = *(int *)(lVar29 + 0xcc) + 1;
                    uVar31 = *(ulonglong *)(lVar29 + 0xb8);
                    if (*(ulonglong *)(lVar29 + 0xb8) == 0) {
                      uVar31 = local_a8;
                    }
                    iVar26 = iVar8 + 0x1f;
                    if (-1 < iVar8) {
                      iVar26 = iVar8;
                    }
                    bVar34 = (byte)iVar8 & 0x1f;
                    puVar2 = (uint *)(uVar31 + (longlong)(iVar26 >> 5) * 4);
                    *puVar2 = *puVar2 & (-2 << bVar34 | 0xfffffffeU >> 0x20 - bVar34);
                  }
                  else {
                    piVar27 = piVar23 + 1;
                  }
                  lVar17 = local_b0;
                } while (iVar22 != iVar21);
              }
              puVar10 = puVar10 + 1;
            } while (puVar10 != local_a0);
          }
        }
        puVar11 = puVar11 + 2;
      } while (puVar11 != local_98);
    }
  }
  if (*(int *)(lVar17 + 0x1d8) != *(int *)(lVar17 + 0x204)) {
    uVar16 = *(uint *)(puVar9 + 2);
    uVar3 = *(uint *)(puVar9 + 3);
    uVar15 = uVar16;
    if (uVar3 != 0) {
      uVar15 = uVar3 >> 0xd ^ uVar16 - uVar3;
      uVar20 = uVar15 << 8 ^ (-0x61c88647 - uVar3) - uVar15;
      uVar28 = uVar20 >> 0xd ^ (uVar3 - uVar15) - uVar20;
      uVar15 = uVar28 >> 0xc ^ (uVar15 - uVar20) - uVar28;
      uVar30 = uVar15 << 0x10 ^ (uVar20 - uVar28) - uVar15;
      uVar20 = uVar30 >> 5 ^ (uVar28 - uVar15) - uVar30;
      uVar28 = uVar20 >> 3 ^ (uVar15 - uVar30) - uVar20;
      uVar15 = uVar28 << 10 ^ (uVar30 - uVar20) - uVar28;
      uVar15 = uVar15 >> 0xf ^ uVar20 - (uVar28 + uVar15);
    }
    lVar29 = lVar17 + 0x208;
    if (*(longlong *)(lVar17 + 0x210) != 0) {
      lVar29 = *(longlong *)(lVar17 + 0x210);
    }
    iVar21 = *(int *)(lVar29 + ((longlong)(int)uVar15 & (longlong)*(int *)(lVar17 + 0x218) - 1U) * 4
                     );
    if (iVar21 != -1) {
      lVar17 = *(longlong *)(lVar17 + 0x1d0);
LAB_140d59290:
      lVar32 = lVar17 + (longlong)iVar21 * 0x20;
      if ((*(uint *)(lVar17 + (longlong)iVar21 * 0x20) != uVar16) ||
         (*(uint *)(lVar32 + 8) != uVar3)) goto LAB_140d592a1;
      iVar8 = *(int *)(lVar29 + (longlong)*(int *)(lVar32 + 0x1c) * 4);
      if (iVar8 == iVar21) {
        piVar27 = (int *)(lVar29 + (longlong)*(int *)(lVar32 + 0x1c) * 4);
      }
      else {
        do {
          piVar27 = (int *)(lVar17 + (longlong)iVar8 * 0x20 + 0x18);
          iVar8 = *piVar27;
        } while (iVar8 != iVar21);
      }
      *piVar27 = *(int *)(lVar32 + 0x18);
      FUN_140d59cc8();
    }
  }
LAB_140d592d2:
  puVar10 = (undefined8 *)puVar9[0xb];
  iVar21 = *(int *)(puVar10 + 0xd);
  lVar17 = (longlong)iVar21;
  if (lVar17 != 0) {
    plVar18 = (longlong *)puVar10[0xc];
    iVar22 = 0;
    bVar33 = (undefined8 *)*plVar18 == puVar9;
    iVar8 = 0;
    local_a0 = puVar10;
    do {
      lVar32 = (longlong)iVar8;
      iVar24 = iVar8;
      lVar29 = lVar32;
      iVar26 = iVar8 + 1;
      if (iVar8 + 1 < iVar21) {
        iVar26 = iVar21;
      }
      do {
        lVar29 = lVar29 + 1;
        iVar25 = iVar26;
        if (lVar17 <= lVar29) break;
        iVar24 = iVar24 + 1;
        iVar25 = iVar24;
      } while (bVar33 == ((undefined8 *)plVar18[lVar29] == puVar9));
      if (bVar33 == false) {
        if (iVar22 != iVar8) {
          memmove(plVar18 + iVar22,plVar18 + lVar32,(longlong)(iVar25 - iVar8) << 3);
        }
        iVar22 = iVar22 + (iVar25 - iVar8);
      }
      bVar33 = (bool)(bVar33 ^ 1);
      iVar8 = iVar25;
    } while (lVar29 < lVar17);
    *(int *)(local_a0 + 0xd) = iVar22;
  }
  lVar17 = local_b0;
  local_60 = *(undefined4 *)(puVar9 + 3);
  local_68 = (undefined8 **)puVar9[2];
  FUN_140bdf04e(local_b0,&local_68,0);
  local_70 = *(undefined4 *)(puVar9 + 3);
  local_78 = puVar9[2];
  FUN_140bdf15a(lVar17,&local_78,0);
  local_80 = *(undefined4 *)(puVar9 + 3);
  local_88 = puVar9[2];
  FUN_140bdf266(lVar17,&local_88,0);
  if ((longlong)(int)uStack_50 != 0) {
    puVar10 = local_58 + (int)uStack_50;
    plVar18 = (longlong *)(local_b0 + 0x170);
    lVar17 = local_b0 + 0x1a8;
    lVar29 = local_b0;
    puVar35 = local_58;
    do {
      piVar27 = (int *)*puVar35;
      if (*(int *)(lVar29 + 0x178) != *(int *)(lVar29 + 0x1a4)) {
        lVar32 = *(longlong *)(lVar29 + 0x1b0);
        if (*(longlong *)(lVar29 + 0x1b0) == 0) {
          lVar32 = lVar17;
        }
        iVar21 = *(int *)(lVar32 + ((longlong)*(int *)(lVar29 + 0x1b8) - 1U & (longlong)*piVar27) *
                                   4);
        if (iVar21 != -1) {
          lVar4 = *plVar18;
LAB_140d59439:
          piVar23 = (int *)(lVar4 + (longlong)iVar21 * 0x18);
          if (*piVar23 != *piVar27) goto LAB_140d5980c;
          iVar8 = *(int *)(lVar32 + (longlong)piVar23[5] * 4);
          if (iVar8 == iVar21) {
            piVar13 = (int *)(lVar32 + (longlong)piVar23[5] * 4);
          }
          else {
            do {
              piVar13 = (int *)(lVar4 + (longlong)iVar8 * 0x18 + 0x10);
              iVar8 = *piVar13;
            } while (iVar8 != iVar21);
          }
          *piVar13 = piVar23[4];
          FUN_140d59c56(plVar18);
        }
      }
LAB_140d59470:
      if (*(int *)(lVar29 + 0x228) != *(int *)(lVar29 + 0x254)) {
        uVar16 = ((uint)((ulonglong)piVar27 >> 0x14) & 0xffff ^ (uint)((ulonglong)piVar27 >> 4)) *
                 -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        lVar32 = lVar29 + 600;
        if (*(longlong *)(lVar29 + 0x260) != 0) {
          lVar32 = *(longlong *)(lVar29 + 0x260);
        }
        iVar21 = *(int *)(lVar32 + ((longlong)(int)(uVar16 >> 0x10 ^ uVar16) &
                                   (longlong)*(int *)(lVar29 + 0x268) - 1U) * 4);
        if (iVar21 != -1) {
          lVar32 = lVar29 + 0x220;
          plVar19 = (longlong *)(lVar29 + 0x220);
          do {
            if (*(int **)(*plVar19 + (longlong)iVar21 * 0x18) == piVar27) {
              FUN_14884ce02(lVar32);
              lVar29 = local_b0;
              break;
            }
            iVar21 = *(int *)(*plVar19 + (longlong)iVar21 * 0x18 + 0x10);
            lVar29 = local_b0;
          } while (iVar21 != -1);
        }
      }
      puVar5 = local_58;
      puVar35 = puVar35 + 1;
    } while (puVar35 != puVar10);
    lVar17 = (longlong)(int)uStack_50;
    if (lVar17 != 0) {
      lVar29 = 0;
      do {
        FUN_140d59baf(*(undefined8 *)((longlong)puVar5 + lVar29));
        lVar29 = lVar29 + 8;
      } while (lVar17 * 8 != lVar29);
    }
  }
  lVar17 = local_b0;
  if ((longlong)*(int *)(puVar9 + 0x10) != 0) {
    puVar35 = (undefined8 *)puVar9[0xf];
    puVar10 = puVar35 + *(int *)(puVar9 + 0x10);
    do {
      plVar18 = (longlong *)*puVar35;
      iVar21 = *(int *)(lVar17 + 0x2a8);
      lVar29 = (longlong)iVar21;
      if (lVar29 != 0) {
        plVar19 = *(longlong **)(lVar17 + 0x2a0);
        local_a0 = (undefined8 *)CONCAT71(local_a0._1_7_,(longlong *)*plVar19 == plVar18);
        local_a8 = local_a8 & 0xffffffff00000000;
        iVar8 = 0;
        do {
          puVar5 = local_a0;
          bVar34 = (byte)local_a0;
          local_a0 = (undefined8 *)((ulonglong)local_a0 ^ 1);
          iVar22 = iVar8 + 1;
          if (iVar8 + 1 < iVar21) {
            iVar22 = iVar21;
          }
          iVar26 = iVar8;
          lVar17 = (longlong)iVar8;
          do {
            lVar17 = lVar17 + 1;
            iVar24 = iVar22;
            if (lVar29 <= lVar17) break;
            iVar26 = iVar26 + 1;
            iVar24 = iVar26;
          } while ((bool)(bVar34 & 1) == ((longlong *)plVar19[lVar17] == plVar18));
          if (((ulonglong)puVar5 & 1) == 0) {
            local_98 = (uint *)CONCAT44(local_98._4_4_,iVar24 - iVar8);
            if ((int)local_a8 != iVar8) {
              memmove(plVar19 + (int)local_a8,plVar19 + iVar8,(longlong)(iVar24 - iVar8) << 3);
            }
            local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + (int)local_98);
          }
          iVar8 = iVar24;
        } while (lVar17 < lVar29);
        *(int *)(local_b0 + 0x2a8) = (int)local_a8;
        lVar17 = local_b0;
      }
      if (plVar18 != (longlong *)0x0) {
        if ((undefined1 *)plVar18[0xf] != (undefined1 *)0x0) {
          *(undefined1 *)plVar18[0xf] = 0;
        }
        (**(code **)*plVar18)(plVar18,0);
        _DAT_14cb7c9dc = _DAT_14cb7c9dc + -1;
        *plVar18 = (longlong)DAT_14cb7c9d0;
        DAT_14cb7c9d0 = plVar18;
      }
      puVar35 = puVar35 + 1;
    } while (puVar35 != puVar10);
  }
  if ((undefined1 *)puVar9[0x13] != (undefined1 *)0x0) {
    *(undefined1 *)puVar9[0x13] = 0;
  }
  (**(code **)*puVar9)(puVar9,0);
  _DAT_14cb7c9cc = _DAT_14cb7c9cc + -1;
  *puVar9 = DAT_14cb7c9c0;
  DAT_14cb7c9c0 = puVar9;
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((*(char *)(lVar17 + 0x151) != '\x01') || (cVar6 = FUN_140bde87c(lVar17), cVar6 == '\0'))
  goto LAB_140d596b9;
  uVar12 = FUN_140d59f88();
  uVar7 = FUN_1403d4194(uVar12);
  FUN_140d2f368(&local_58,uVar7);
  plVar18 = uStack_50;
  puVar9 = local_58;
  if (uStack_50 == (longlong *)0x0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_140d596b9;
    *(undefined4 *)(local_58 + 3) = *(undefined4 *)(local_90 + 1);
    local_58[2] = *local_90;
    uStack_50 = (longlong *)0x0;
LAB_140d595fd:
    if (*(int *)(lVar17 + 0x144) == 0) {
LAB_140d597fd:
      uVar12 = 0;
    }
    else {
      uVar16 = *(uint *)(lVar17 + 0x140);
      uVar12 = 0;
      if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
        plVar19 = (longlong *)
                  ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
        if ((plVar19 == (longlong *)0x0) ||
           (((((int)plVar19[2] != *(int *)(lVar17 + 0x144) ||
              ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) || (*plVar19 == 0)) ||
            (lVar17 = *(longlong *)(*plVar19 + 0x30), lVar17 == 0)))) goto LAB_140d597fd;
        uVar12 = *(undefined8 *)(lVar17 + 0x360);
      }
    }
    local_58 = puVar9;
    FUN_141000642(uVar12,&local_58);
    plVar19 = uStack_50;
    if (uStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*uStack_50)(uStack_50);
        LOCK();
        piVar27 = (int *)((longlong)plVar19 + 0xc);
        *piVar27 = *piVar27 + -1;
        UNLOCK();
        if (*piVar27 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
    if (plVar18 == (longlong *)0x0) goto LAB_140d596b9;
  }
  else {
    LOCK();
    *(int *)(uStack_50 + 1) = (int)uStack_50[1] + 1;
    UNLOCK();
    if (uStack_50 != (longlong *)0x0) {
      LOCK();
      plVar19 = uStack_50 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
        (**(code **)*uStack_50)(uStack_50);
        LOCK();
        piVar27 = (int *)((longlong)plVar18 + 0xc);
        *piVar27 = *piVar27 + -1;
        UNLOCK();
        if (*piVar27 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(local_90 + 1);
      puVar9[2] = *local_90;
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      uStack_50 = plVar18;
      goto LAB_140d595fd;
    }
  }
  LOCK();
  plVar19 = plVar18 + 1;
  *(int *)plVar19 = (int)*plVar19 + -1;
  UNLOCK();
  if ((int)*plVar19 == 0) {
    (**(code **)*plVar18)(plVar18);
    LOCK();
    piVar27 = (int *)((longlong)plVar18 + 0xc);
    *piVar27 = *piVar27 + -1;
    UNLOCK();
    if (*piVar27 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
LAB_140d596b9:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140d592a1:
  iVar21 = *(int *)(lVar32 + 0x18);
  if (iVar21 == -1) goto LAB_140d592d2;
  goto LAB_140d59290;
LAB_140d5980c:
  iVar21 = piVar23[4];
  if (iVar21 == -1) goto LAB_140d59470;
  goto LAB_140d59439;
}



// FUNCTION 140d59baf FUN_140d59baf body=70 status=ok
// SIG undefined FUN_140d59baf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d59baf(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_140d59bf5(param_1[9],*(undefined4 *)(param_1 + 10));
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    _DAT_14cb7c9ec = _DAT_14cb7c9ec + -1;
    *param_1 = DAT_14cb7c9e0;
    DAT_14cb7c9e0 = param_1;
  }
  return;
}



// FUNCTION 140d59bf5 FUN_140d59bf5 body=96 status=ok
// SIG undefined FUN_140d59bf5(void)

void FUN_140d59bf5(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  do {
    if (param_2 == 0) {
      return;
    }
    if ((int)param_1[1] == 0) {
LAB_140d59c11:
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar1 = (undefined8 *)*param_1;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72(param_1,0,0,0x10);
        *(undefined4 *)(param_1 + 1) = 0;
        goto LAB_140d59c11;
      }
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + -1;
  } while( true );
}



// FUNCTION 140d59c56 FUN_140d59c56 body=114 status=ok
// SIG undefined FUN_140d59c56(void)

void FUN_140d59c56(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 140d59cc8 FUN_140d59cc8 body=114 status=ok
// SIG undefined FUN_140d59cc8(void)

void FUN_140d59cc8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 140d59d3a FUN_140d59d3a body=133 status=ok
// SIG undefined FUN_140d59d3a(void)

undefined8 * FUN_140d59d3a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3fe330;
  FUN_140d59e0d(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x10];
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
  FUN_140d59dc2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d59dc0 FUN_140d59dc0 body=1 status=ok
// SIG undefined FUN_140d59dc0(void)

void FUN_140d59dc0(void)

{
  return;
}



// FUNCTION 140d59dc2 FUN_140d59dc2 body=75 status=ok
// SIG undefined FUN_140d59dc2(void)

void FUN_140d59dc2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b400250;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d59e0d FUN_140d59e0d body=77 status=ok
// SIG undefined FUN_140d59e0d(void)

void FUN_140d59e0d(longlong param_1,int param_2)

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



// FUNCTION 140d59e5a FUN_140d59e5a body=301 status=ok
// SIG undefined FUN_140d59e5a(void)

void FUN_140d59e5a(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_2 + 0x20) != 0) {
    plVar3 = (longlong *)*param_1;
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_1403a1564(plVar3,iVar1);
    }
    *(undefined8 *)(*plVar3 + (longlong)iVar1 * 8) = *(undefined8 *)(param_2 + 0x20);
  }
  plVar3 = (longlong *)*param_1;
  uVar2 = *(uint *)(param_2 + 0x30);
  if ((longlong)(int)uVar2 != 0) {
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + uVar2;
    if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar1) < uVar2) {
      FUN_1403a1564(plVar3,iVar1);
    }
    memcpy((void *)((longlong)iVar1 * 8 + *plVar3),*(void **)(param_2 + 0x28),
           (longlong)(int)uVar2 << 3);
    plVar3 = (longlong *)*param_1;
  }
  uVar2 = *(uint *)(param_2 + 0x40);
  if ((longlong)(int)uVar2 != 0) {
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + uVar2;
    if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar1) < uVar2) {
      FUN_1403a1564(plVar3,iVar1);
    }
    memcpy((void *)((longlong)iVar1 * 8 + *plVar3),*(void **)(param_2 + 0x38),
           (longlong)(int)uVar2 << 3);
    plVar3 = (longlong *)*param_1;
  }
  uVar2 = *(uint *)(param_2 + 0x50);
  if ((longlong)(int)uVar2 != 0) {
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + uVar2;
    if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar1) < uVar2) {
      FUN_1403a1564(plVar3,iVar1);
    }
    memcpy((void *)((longlong)iVar1 * 8 + *plVar3),*(void **)(param_2 + 0x48),
           (longlong)(int)uVar2 << 3);
    return;
  }
  return;
}



// FUNCTION 140d59f88 FUN_140d59f88 body=57 status=ok
// SIG undefined FUN_140d59f88(void)

void FUN_140d59f88(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f058 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f058 = FUN_140002ddd(FUN_14653f120,uVar1,L"ReplicatedGeneratedMissionDestruction");
  }
  return;
}



// FUNCTION 140d59fc2 FUN_140d59fc2 body=222 status=ok
// SIG undefined FUN_140d59fc2(void)

void FUN_140d59fc2(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    bVar6 = false;
    do {
      lVar7 = uVar5 * 0x10 + -8;
      uVar8 = uVar5;
      while ((*(int *)(*param_1 + lVar7) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0))) {
        local_40 = *(undefined4 *)(param_2 + 1);
        local_48 = *param_2;
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_48);
        if (cVar4 == '\0') break;
        lVar7 = lVar7 + -0x10;
        bVar3 = uVar8 < 2;
        uVar8 = uVar8 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (!bVar6) goto LAB_140d5a058;
          goto LAB_140d5a095;
        }
      }
      uVar5 = uVar8 - 1;
      bVar6 = true;
    } while (1 < uVar8);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140d5a095:
    FUN_14474d06a(param_1,0);
  }
LAB_140d5a058:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d5a0a2 FUN_140d5a0a2 body=637 status=ok
// SIG undefined FUN_140d5a0a2(void)

undefined8 * FUN_140d5a0a2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3fe360;
  FUN_144760e21(param_1[0x3a],*(undefined4 *)(param_1 + 0x3b));
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_140d5a359(param_1[0x31],*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)((longlong)param_1 + 0x144) != 0) {
    FUN_1403af08a(param_1 + 0x27,0);
  }
  param_1[0x2d] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x164)) {
    *(undefined4 *)((longlong)param_1 + 0x164) = 0x80;
    FUN_1446efbd8(param_1 + 0x29,0);
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14029e8dd(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_140d5a322(param_1 + 0x16);
  plVar3 = (longlong *)param_1[0x14];
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
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140d59dc2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d5a320 FUN_140d5a320 body=1 status=ok
// SIG undefined FUN_140d5a320(void)

void FUN_140d5a320(void)

{
  return;
}



// FUNCTION 140d5a322 FUN_140d5a322 body=55 status=ok
// SIG undefined FUN_140d5a322(void)

void FUN_140d5a322(longlong *param_1)

{
  FUN_140d5a396(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140d5a359 FUN_140d5a359 body=60 status=ok
// SIG undefined FUN_140d5a359(void)

void FUN_140d5a359(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      FUN_140de863f(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d5a396 FUN_140d5a396 body=123 status=ok
// SIG undefined FUN_140d5a396(void)

void FUN_140d5a396(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 140d5a412 FUN_140d5a412 body=142 status=ok
// SIG undefined FUN_140d5a412(void)

longlong * FUN_140d5a412(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  if (param_2 != 0) {
    lVar4 = FUN_140d5a4a0();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
      plVar5 = (longlong *)FUN_14001cc68(8,0x10);
      lVar4 = *(longlong *)(param_2 + 0x78);
      *plVar5 = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0x60) = *(int *)(lVar4 + 0x60) + 1;
        UNLOCK();
      }
      plVar2 = (longlong *)*param_1;
      *param_1 = (longlong)plVar5;
      if (plVar2 != (longlong *)0x0) {
        puVar3 = (undefined8 *)*plVar2;
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
        FUN_1400020a8(plVar2);
      }
    }
  }
  return param_1;
}



// FUNCTION 140d5a4a0 FUN_140d5a4a0 body=228 status=ok
// SIG undefined FUN_140d5a4a0(void)

longlong FUN_140d5a4a0(void)

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
  if (DAT_14cac8f08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14639a42e;
    local_38 = &LAB_1478add8d;
    local_40 = &LAB_145841095;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb8;
    FUN_14081cfa3(L"/Script/Engine",L"VectorFieldStatic",&DAT_14cac8f08,&DAT_1478add8c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac8f08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d5a586 FUN_140d5a586 body=5171 status=ok
// SIG undefined FUN_140d5a586(void)

void FUN_140d5a586(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  code *local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_50 = 0;
  local_48 = 0x7012;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_c8 = (undefined *)FUN_1446ddbd2();
      local_c0 = FUN_14170fd90;
      local_d0 = 0x8000000000000000;
      local_d8 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
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
          cVar7 = (*pcVar3)(plVar1);
          if (cVar7 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_50);
            goto LAB_140d5a694;
          }
        }
        puVar8 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar8 != &local_50) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_50,puVar8,(int)plVar1[6]);
          }
          else {
            memcpy(&local_50,puVar8,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_d0 = CONCAT44(local_d0._4_4_,(int)plVar1[6]);
        local_d8 = local_d8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_50,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_50,lVar2);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
LAB_140d5a694:
  local_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_c0 = FUN_1405ebbb2;
      local_c8 = &DAT_14c9520b8;
      local_d0 = 0;
      local_d8 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
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
          cVar7 = (*pcVar3)(plVar1);
          if (cVar7 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_54);
            goto LAB_140d5a769;
          }
        }
        puVar9 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar9 != &local_54) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_54,puVar9,(int)plVar1[6]);
          }
          else {
            memcpy(&local_54,puVar9,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_d0 = CONCAT44(local_d0._4_4_,(int)plVar1[6]);
        local_d8 = local_d8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_54,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_54,lVar2);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
LAB_140d5a769:
  local_58 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_c8 = (undefined *)FUN_1446ddbd2();
      local_c0 = FUN_14067a048;
      local_d0 = 0;
      local_d8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
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
          cVar7 = (*pcVar3)(plVar1);
          if (cVar7 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_58);
            goto LAB_140d5a83e;
          }
        }
        piVar10 = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (piVar10 != &local_58) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_58,piVar10,(int)plVar1[6]);
          }
          else {
            memcpy(&local_58,piVar10,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_d0 = CONCAT44(local_d0._4_4_,(int)plVar1[6]);
        local_d8 = local_d8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_58,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_58,lVar2);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
LAB_140d5a83e:
  iVar6 = local_58;
  local_5c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_c8 = (undefined *)FUN_1446ddbd2();
      local_c0 = FUN_14067a048;
      local_d0 = 0;
      local_d8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
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
          cVar7 = (*pcVar3)(plVar1);
          if (cVar7 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_5c);
            goto LAB_140d5a91a;
          }
        }
        piVar10 = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (piVar10 != &local_5c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_5c,piVar10,(int)plVar1[6]);
          }
          else {
            memcpy(&local_5c,piVar10,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_d0 = CONCAT44(local_d0._4_4_,(int)plVar1[6]);
        local_d8 = local_d8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_5c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_5c,lVar2);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
LAB_140d5a91a:
  iVar5 = local_5c;
  local_60 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_c0 = FUN_1408a629c;
      local_c8 = &DAT_14c9520b8;
      local_d0 = 0;
      local_d8 = 0x1008101;
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
          cVar7 = (*pcVar3)(plVar1);
          if (cVar7 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_60);
            goto LAB_140d5a9f7;
          }
        }
        puVar9 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar9 != &local_60) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_60,puVar9,(int)plVar1[6]);
          }
          else {
            memcpy(&local_60,puVar9,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_d0 = CONCAT44(local_d0._4_4_,(int)plVar1[6]);
        local_d8 = local_d8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_60,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_60,lVar2);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
LAB_140d5a9f7:
  local_68 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_c8 = (undefined *)FUN_1446ddbd2();
      local_c0 = FUN_1468d96f0;
      local_d0 = 0;
      local_d8 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
          cVar7 = (*pcVar3)(plVar1);
          if (cVar7 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_68);
            goto LAB_140d5aacd;
          }
        }
        puVar8 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar8 != &local_68) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_68,puVar8,(int)plVar1[6]);
          }
          else {
            memcpy(&local_68,puVar8,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_d0 = CONCAT44(local_d0._4_4_,(int)plVar1[6]);
        local_d8 = local_d8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_68,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_68,lVar2);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
LAB_140d5aacd:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_c8 = (undefined *)FUN_1446ddbd2();
      local_c0 = FUN_1403a682c;
      local_d0 = 0;
      local_d8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
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
          cVar7 = (*pcVar3)(plVar1);
          if (cVar7 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_80);
            goto LAB_140d5ab91;
          }
        }
        puVar8 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar8 != &local_80) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_80,puVar8,(int)plVar1[6]);
          }
          else {
            memcpy(&local_80,puVar8,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_d0 = CONCAT44(local_d0._4_4_,(int)plVar1[6]);
        local_d8 = local_d8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_80,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_80,lVar2);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
LAB_140d5ab91:
  local_84 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_c0 = FUN_1408a629c;
      local_c8 = &DAT_14c9520b8;
      local_d0 = 0;
      local_d8 = 0x1008101;
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
          cVar7 = (*pcVar3)(plVar1);
          if (cVar7 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_84);
            goto LAB_140d5ac5d;
          }
        }
        puVar9 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar9 != &local_84) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_84,puVar9,(int)plVar1[6]);
          }
          else {
            memcpy(&local_84,puVar9,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_d0 = CONCAT44(local_d0._4_4_,(int)plVar1[6]);
        local_d8 = local_d8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_84,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_84,lVar2);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
LAB_140d5ac5d:
  local_88 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_c0 = FUN_1408a629c;
      local_c8 = &DAT_14c9520b8;
      local_d0 = 0;
      local_d8 = 0x1008101;
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
          cVar7 = (*pcVar3)(plVar1);
          if (cVar7 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_88);
            goto LAB_140d5ad29;
          }
        }
        puVar9 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar9 != &local_88) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_88,puVar9,(int)plVar1[6]);
          }
          else {
            memcpy(&local_88,puVar9,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_d0 = CONCAT44(local_d0._4_4_,(int)plVar1[6]);
        local_d8 = local_d8 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_88,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_88,lVar2);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar8;
        puVar8 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
LAB_140d5ad29:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c0 = (code *)&local_a8;
  local_a8 = local_80;
  uStack_a0 = uStack_78;
  local_98 = local_70;
  local_b0 = local_88;
  local_b8 = local_84;
  local_c8 = (undefined *)local_68;
  local_d0 = CONCAT44(local_d0._4_4_,local_60);
  local_d8 = CONCAT71(local_d8._1_7_,iVar5 != 0);
  (**(code **)(*param_1 + 0xf60))(param_1,&local_50,local_54,iVar6 != 0);
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d5b9ba FUN_140d5b9ba body=255 status=ok
// SIG undefined FUN_140d5b9ba(void)

void FUN_140d5b9ba(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5,undefined4 param_6,undefined8 param_7,undefined4 *param_8,
                  undefined4 param_9,undefined4 param_10)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 *local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(byte *)(param_1 + 0x65) & 2) == 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x960) + 0xc0))(param_1 + 0x960);
    if (lVar1 != 0) {
      local_38 = *(undefined8 *)(param_8 + 4);
      local_68 = &local_48;
      local_48 = *param_8;
      uStack_44 = param_8[1];
      uStack_40 = param_8[2];
      uStack_3c = param_8[3];
      local_58 = param_10;
      local_60 = param_9;
      local_70 = param_7;
      local_78 = param_6;
      local_80 = param_5;
      local_88 = param_4;
      FUN_140d5bb62(lVar1,param_2,param_3,param_1 + 0x960);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d5baba FUN_140d5baba body=40 status=ok
// SIG undefined FUN_140d5baba(void)

longlong FUN_140d5baba(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1447210f0(param_1 + -0x960);
  lVar2 = FUN_140d5bae2(uVar1);
  if (lVar2 != 0) {
    lVar2 = lVar2 + 8;
  }
  return lVar2;
}



// FUNCTION 140d5bae2 FUN_140d5bae2 body=127 status=ok
// SIG undefined FUN_140d5bae2(void)

longlong FUN_140d5bae2(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((param_1 == 0) || (lVar2 = FUN_1400f6f32(), lVar2 == 0)) ||
     (lVar2 = *(longlong *)(lVar2 + 0x78), lVar2 == 0)) {
    return 0;
  }
  if ((((*(int *)(lVar2 + 0x74) != 0) && (uVar1 = *(uint *)(lVar2 + 0x70), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       ((lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0 &&
        (*(int *)(lVar3 + 0x10) == *(int *)(lVar2 + 0x74))))))) &&
     ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
    return lVar2;
  }
  FUN_14485c47a((uint *)(lVar2 + 0x70),param_1);
  return lVar2;
}



// FUNCTION 140d5bb62 FUN_140d5bb62 body=4867 status=ok
// SIG undefined FUN_140d5bb62(void)

void FUN_140d5bb62(longlong *param_1,longlong *param_2,uint param_3,longlong *param_4,char param_5,
                  char param_6,undefined4 param_7,longlong param_8,longlong *param_9,float param_10,
                  float param_11)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong **pplVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint *puVar13;
  uint uVar14;
  byte bVar15;
  longlong lVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  longlong *plVar20;
  bool bVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined1 auStack_1e8 [32];
  undefined4 *local_1c8;
  undefined1 local_1c0;
  uint local_1ac;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  longlong **local_108;
  longlong **local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_8c;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1ac = param_3;
  if (param_4 == (longlong *)0x0) goto LAB_140d5bd51;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x18))();
  local_108 = (longlong **)*param_2;
  FUN_1446dcdd4(&local_f8);
  if (DAT_14cb7d368 == 0) {
    if (lStack_e0 != 0) {
      FUN_1400020a8();
    }
    goto LAB_140d5bd51;
  }
  lVar8 = FUN_144815d88(DAT_14cb7d368,&local_f8);
  if (lStack_e0 != 0) {
    FUN_1400020a8();
  }
  if (lVar8 == 0) goto LAB_140d5bd51;
  plVar20 = param_1 + 1;
  local_108 = (longlong **)*param_2;
  FUN_1446dcdd4(&local_f8);
  if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
    plVar12 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[9];
    }
    iVar19 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[10] - 1U & (uint)local_f8) * 4);
    if (iVar19 != -1) {
      do {
        lVar9 = *plVar20 + (longlong)iVar19 * 0x40;
        if (*(uint *)(*plVar20 + (longlong)iVar19 * 0x40) == (uint)local_f8) {
          if (lStack_e0 != 0) {
            FUN_1400020a8();
          }
          if ((lVar9 == 0) || (*(longlong *)(lVar9 + 0x28) == 0)) goto LAB_140d5c260;
          goto LAB_140d5bcb3;
        }
        iVar19 = *(int *)(lVar9 + 0x38);
      } while (iVar19 != -1);
    }
  }
  if (lStack_e0 != 0) {
    FUN_1400020a8();
  }
LAB_140d5c260:
  uVar10 = FUN_14050fd64();
  local_1c8 = (undefined4 *)0x0;
  FUN_14088df30(uVar10,&local_70,lVar8,0);
  local_108 = (longlong **)*param_2;
  FUN_1446dcdd4(&local_f8);
  FUN_140fe936e(plVar20,&local_108);
  pplVar5 = local_100;
  *local_100 = (longlong *)0x0;
  local_100[1] = (longlong *)0x0;
  *(undefined4 *)(local_100 + 2) = 0;
  local_100[3] = (longlong *)0x0;
  local_100[4] = (longlong *)0x0;
  FUN_1404e49fa(local_100,&local_f8);
  pplVar5[5] = local_70;
  pplVar5[6] = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
  }
  *(undefined4 *)(pplVar5 + 7) = 0xffffffff;
  local_10c = local_108._0_4_;
  local_1c8 = (undefined4 *)0x0;
  local_1a8 = (longlong *)CONCAT44(local_1a8._4_4_,*(undefined4 *)pplVar5);
  cVar6 = FUN_140fe92a8(plVar20,*(undefined4 *)pplVar5,pplVar5);
  if (cVar6 == '\0') {
    uVar14 = (int)param_1[2] - *(int *)((longlong)param_1 + 0x3c);
    if (uVar14 < 4) {
      iVar19 = 1;
    }
    else {
      uVar11 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar19 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar14 < 1) || (iVar19 <= (int)param_1[10])) {
      uVar14 = (int)param_1[10] - 1U & (uint)local_1a8;
      *(uint *)((longlong)pplVar5 + 0x3c) = uVar14;
      plVar20 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar20 = param_1 + 8;
      }
      *(undefined4 *)(pplVar5 + 7) =
           *(undefined4 *)
            ((longlong)plVar20 + ((longlong)(int)param_1[10] - 1U & (longlong)(int)uVar14) * 4);
      plVar20 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar20 = param_1 + 8;
      }
      *(undefined4 *)
       ((longlong)plVar20 + ((longlong)(int)param_1[10] - 1U & (longlong)(int)uVar14) * 4) =
           local_10c;
    }
    else {
      *(int *)(param_1 + 10) = iVar19;
      FUN_140fe9554(plVar20);
    }
  }
  if (lStack_e0 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_68 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
LAB_140d5bcb3:
  if ((*(char *)(lVar8 + 0xa6) == '\0') &&
     (lVar9 = (**(code **)(*param_1 + 0x20))(param_1), lVar9 != 0)) {
    if (((*(longlong *)(lVar9 + 0x30) != 0) &&
        (((lVar16 = *(longlong *)(*(longlong *)(lVar9 + 0x30) + 0x2b0), lVar16 != 0 &&
          (*(longlong *)(lVar16 + 0x588) != 0)) &&
         (*(double *)(lVar9 + 0x708) <= *(double *)(lVar9 + 0x6d0))))) ||
       (((*(byte *)(lVar9 + 0x154) & 0x40) != 0 && (iVar19 = FUN_14490d72a(lVar9), iVar19 == 3))))
    goto LAB_140d5bd51;
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
      lVar16 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar16);
        if (*(longlong *)(lVar3 + 0x360) == lVar9) {
          if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x278) & 1) != 0)) goto LAB_140d5bd51;
          break;
        }
        lVar16 = lVar16 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar16);
    }
    cVar6 = FUN_144a80e00(lVar9);
    if ((cVar6 != '\0') && (*(char *)(lVar9 + 0x155) < '\0')) goto LAB_140d5bd51;
  }
  if (((char)param_4[1] == '\x01') && (*(char *)(lVar8 + 0x3c1) != '\x01')) goto LAB_140d5bd51;
  if ((*(char *)(lVar8 + 0xa4) == '\x01' && param_5 == '\0') && ((longlong)(int)plVar7[1] != 0)) {
    plVar20 = (longlong *)*plVar7;
    lVar9 = (longlong)(int)plVar7[1] * 0x78;
    do {
      puVar18 = *(undefined4 **)(*plVar20 + 8);
      if (puVar18 == (undefined4 *)0x0) {
        puVar18 = &DAT_14c9485f0;
      }
      local_1a8 = plVar20;
      if (DAT_14c947fe0 == 0) {
        lVar16 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar16);
        DAT_14c947fe0 = lVar16;
      }
      FUN_140045924(DAT_14c947fe0,&local_f8,puVar18,1);
      if (((local_f8 == *param_2) && ((int)param_2[1] == 0x7012)) &&
         ((longlong *)local_1a8[1] == param_4)) {
        *(undefined4 *)(local_1a8 + 2) = param_7;
        *(char *)(local_1a8 + 7) = param_6;
        if (param_6 == '\0') {
          if (*(char *)(lVar8 + 0xa5) == '\0') {
            uVar23 = *(undefined4 *)((longlong)local_1a8 + 0x6c);
          }
          else {
            *(undefined4 *)((longlong)local_1a8 + 0x6c) = 0;
            uVar23 = 0;
          }
          *(undefined4 *)(local_1a8 + 0xd) = uVar23;
        }
        if ((local_1ac & 1) != 0) {
          (**(code **)(*(longlong *)local_1a8[1] + 0x70))();
        }
        goto LAB_140d5bd51;
      }
      plVar20 = local_1a8 + 0xf;
      lVar9 = lVar9 + -0x78;
    } while (lVar9 != 0);
  }
  iVar19 = (int)plVar7[1];
  *(uint *)(plVar7 + 1) = iVar19 + 1U;
  if (*(uint *)((longlong)plVar7 + 0xc) < iVar19 + 1U) {
    FUN_14654eb3c(plVar7,iVar19);
  }
  lVar9 = *plVar7;
  lVar16 = (longlong)iVar19 * 0x78;
  plVar7 = (longlong *)(lVar9 + lVar16);
  *(longlong *)(lVar9 + lVar16) = lVar8;
  *(longlong **)(lVar9 + 8 + lVar16) = param_4;
  puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar16);
  *puVar2 = &DAT_3f8000003f800000;
  puVar2[1] = &DAT_3f8000003f800000;
  *(undefined2 *)(lVar9 + 0x38 + lVar16) = 0;
  puVar2 = (undefined8 *)(lVar9 + 0x20 + lVar16);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(lVar9 + 0x30 + lVar16) = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar24 = (undefined4)DAT_14c8464e8;
  uVar23 = DAT_14c8464e0._4_4_;
  puVar18 = (undefined4 *)(lVar9 + 0x40 + lVar16);
  *puVar18 = (undefined4)DAT_14c8464e0;
  puVar18[1] = uVar23;
  puVar18[2] = uVar24;
  puVar18[3] = uVar4;
  *(undefined8 *)(lVar9 + 0x50 + lVar16) = DAT_14c8464f0;
  puVar2 = (undefined8 *)(lVar9 + 0x58 + lVar16);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar9 + 100 + lVar16);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(char *)(lVar9 + 0x38 + lVar16) = param_6;
  *(undefined4 *)(lVar9 + 0x10 + lVar16) = param_7;
  if ((local_1ac & 2) != 0) {
    FUN_14051fb5a(lVar8,&local_f8);
    FUN_14051f43a(lVar16 + 0x20 + lVar9,&local_f8);
    *(undefined4 *)(plVar7 + 6) = (undefined4)local_e8;
    FUN_14051f497(local_f8,uStack_f0 & 0xffffffff);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  plVar20 = (longlong *)(lVar16 + 0x40 + lVar9);
  local_1a0 = param_9;
  local_1a8 = plVar7;
  if ((*(uint *)(lVar8 + 0x18) & 1) == 0) {
    if ((*(uint *)(lVar8 + 0x18) & 2) == 0 || param_5 != '\0') goto LAB_140d5bf09;
LAB_140d5c52a:
    (**(code **)(*param_4 + 0x30))(param_4,&local_f8);
    plVar7 = local_1a8;
    local_1a8[0xb] = local_f8;
    (**(code **)(*param_4 + 0x38))(param_4,&local_f8);
    plVar20[2] = local_e8;
    *plVar20 = local_f8;
    plVar20[1] = uStack_f0;
    *(undefined4 *)(plVar7 + 0xc) = 0x447a0000;
    param_11 = 1000.0;
  }
  else {
    if (param_5 == '\0') goto LAB_140d5c52a;
LAB_140d5bf09:
    puVar13 = (uint *)(lVar16 + 0x58 + lVar9);
    if (param_8 == 0) {
      *puVar13 = 0;
      iVar19 = 0;
    }
    else {
      uVar14 = *(uint *)(param_8 + 0xc);
      *puVar13 = uVar14;
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar19 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar19 = DAT_14c964868 + 1;
        UNLOCK();
        iVar17 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar19;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar17);
        }
        LOCK();
        iVar19 = *(int *)(lVar9 + 0x10);
        bVar21 = iVar19 == 0;
        if (bVar21) {
          *(int *)(lVar9 + 0x10) = iVar17;
          iVar19 = 0;
        }
        UNLOCK();
        if (bVar21) {
          iVar19 = iVar17;
        }
      }
    }
    *(int *)((longlong)local_1a8 + 0x5c) = iVar19;
    plVar20[2] = param_9[2];
    lVar9 = param_9[1];
    *plVar20 = *param_9;
    plVar20[1] = lVar9;
    plVar7 = local_1a8;
    if ((0.0 < param_10) || (0.0 < param_11)) {
      *(float *)(local_1a8 + 0xc) = param_10;
    }
    else {
      *(undefined4 *)(local_1a8 + 0xc) = *(undefined4 *)(lVar8 + 0x260);
      param_11 = *(float *)(lVar8 + 0x264);
    }
  }
  uVar14 = local_1ac;
  *(float *)((longlong)plVar7 + 100) = param_11;
  if ((*(byte *)(lVar8 + 0x18) & 0x14) != 0) {
    FUN_14051ee92(plVar7,0xbf800000);
  }
  FUN_14051f02a(plVar7);
  if ((uVar14 & 1) != 0) {
    if ((*(byte *)(lVar8 + 0x18) & 2) == 0) {
      local_1c8 = &local_168;
      local_158 = DAT_14c846508;
      local_168 = (undefined4)DAT_14c8464f8;
      uStack_164 = DAT_14c8464f8._4_4_;
      uStack_160 = (undefined4)DAT_14c846500;
      uStack_15c = DAT_14c846500._4_4_;
      local_1c0 = 0;
      (**(code **)(*param_4 + 0x60))
                (param_4,lVar8 + 0x68,
                 *(float *)(plVar7 + 2) * *(float *)((longlong)plVar7 + 0x14) *
                 *(float *)(plVar7 + 3) * *(float *)((longlong)plVar7 + 0x1c),0);
    }
    else {
      local_1c8 = &local_128;
      local_118 = DAT_14c846508;
      local_128 = (undefined4)DAT_14c8464f8;
      uStack_124 = DAT_14c8464f8._4_4_;
      uStack_120 = (undefined4)DAT_14c846500;
      uStack_11c = DAT_14c846500._4_4_;
      local_1c0 = 0;
      (**(code **)(*param_4 + 0x60))(param_4,lVar8 + 0x68,0x3f800000,0);
      local_1c8 = &local_148;
      local_138 = DAT_14c846508;
      local_148 = (undefined4)DAT_14c8464f8;
      uStack_144 = DAT_14c8464f8._4_4_;
      uStack_140 = (undefined4)DAT_14c846500;
      uStack_13c = DAT_14c846500._4_4_;
      local_1c0 = 0;
      (**(code **)(*param_4 + 0x60))(param_4,lVar8 + 0x80,0x3f800000,0);
      (**(code **)(*(longlong *)plVar7[1] + 0x70))((longlong *)plVar7[1],plVar7);
    }
  }
  *(undefined4 *)(plVar7 + 0xe) = 0;
  local_108 = *(longlong ***)(*plVar7 + 0x68);
  FUN_1446dcdd4(&local_f8);
  if (DAT_14cb7d258 == 0) {
    plVar7 = local_1a8;
    if (lStack_e0 != 0) {
      FUN_1400020a8();
      plVar7 = local_1a8;
    }
  }
  else {
    lVar9 = FUN_144837462(DAT_14cb7d258,&local_f8);
    if (lStack_e0 != 0) {
      FUN_1400020a8();
    }
    if (lVar9 != 0) {
      *(undefined4 *)(plVar7 + 0xe) = *(undefined4 *)(lVar9 + 0x1c);
    }
  }
  if ((*(byte *)(*plVar7 + 0x18) & 2) != 0) {
    local_108 = *(longlong ***)(*plVar7 + 0x80);
    FUN_1446dcdd4(&local_f8);
    if (DAT_14cb7d258 == 0) {
      plVar7 = local_1a8;
      if (lStack_e0 != 0) {
        FUN_1400020a8();
        plVar7 = local_1a8;
      }
    }
    else {
      lVar9 = FUN_144837462(DAT_14cb7d258,&local_f8);
      if (lStack_e0 != 0) {
        FUN_1400020a8();
      }
      if (lVar9 != 0) {
        fVar22 = *(float *)(lVar9 + 0x1c);
        if (*(float *)(lVar9 + 0x1c) <= *(float *)(plVar7 + 0xe)) {
          fVar22 = *(float *)(plVar7 + 0xe);
        }
        *(float *)(plVar7 + 0xe) = fVar22;
      }
    }
  }
  plVar20 = (longlong *)(**(code **)(*(longlong *)plVar7[1] + 200))();
  if (plVar20 == (longlong *)0x0) {
    fVar22 = *(float *)(plVar7 + 0xe);
  }
  else {
    plVar7 = (longlong *)(**(code **)(*plVar20 + 0x18))(plVar20);
    if ((longlong)(int)plVar7[1] < 1) {
      fVar25 = 0.0;
    }
    else {
      plVar20 = (longlong *)*plVar7;
      local_190 = plVar20 + (longlong)(int)plVar7[1] * 2;
      fVar25 = 0.0;
      do {
        plVar7 = (longlong *)*plVar20;
        plVar12 = (longlong *)plVar20[1];
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        if (plVar7 != (longlong *)0x0) {
          lVar9 = *local_1a8;
          local_198 = plVar7;
          if ((*(byte *)(lVar9 + 0x18) & 2) == 0) {
            puVar18 = *(undefined4 **)(plVar7[2] + 8);
            if (puVar18 == (undefined4 *)0x0) {
              puVar18 = &DAT_14c9485f0;
            }
            if (DAT_14c947fe0 == 0) {
              lVar16 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar16);
              DAT_14c947fe0 = lVar16;
            }
            FUN_140045924(DAT_14c947fe0,&local_f8,puVar18,1);
            if (local_f8 == *(longlong *)(lVar9 + 0x68)) {
              iVar19 = *(int *)(lVar9 + 0x70);
joined_r0x000140d5c255:
              if (iVar19 == 0x7010) goto LAB_140d5c160;
            }
          }
          else {
            puVar18 = *(undefined4 **)(plVar7[2] + 8);
            if (puVar18 == (undefined4 *)0x0) {
              puVar18 = &DAT_14c9485f0;
            }
            if (DAT_14c947fe0 == 0) {
              lVar16 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar16);
              DAT_14c947fe0 = lVar16;
            }
            FUN_140045924(DAT_14c947fe0,&local_f8,puVar18,1);
            if ((local_f8 == *(longlong *)(lVar9 + 0x68)) && (*(int *)(lVar9 + 0x70) == 0x7010)) {
LAB_140d5c160:
              fVar22 = (float)(**(code **)(*local_198 + 0x30))();
              if (fVar25 <= fVar22) {
                fVar25 = fVar22;
              }
            }
            else {
              lVar9 = *local_1a8;
              puVar18 = *(undefined4 **)(local_198[2] + 8);
              if (puVar18 == (undefined4 *)0x0) {
                puVar18 = &DAT_14c9485f0;
              }
              if (DAT_14c947fe0 == 0) {
                lVar16 = FUN_14001cc68(0x140,0x10);
                FUN_1456b2032(lVar16);
                DAT_14c947fe0 = lVar16;
              }
              FUN_140045924(DAT_14c947fe0,&local_f8,puVar18,1);
              if (local_f8 == *(longlong *)(lVar9 + 0x80)) {
                iVar19 = *(int *)(lVar9 + 0x88);
                goto joined_r0x000140d5c255;
              }
            }
          }
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar12 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        plVar20 = plVar20 + 2;
      } while (plVar20 != local_190);
    }
    plVar7 = local_1a8;
    fVar22 = *(float *)(local_1a8 + 0xe);
    if (*(float *)(local_1a8 + 0xe) <= fVar25) {
      fVar22 = fVar25;
    }
  }
  fVar25 = *(float *)(plVar7 + 6);
  if (*(float *)(plVar7 + 6) <= fVar22) {
    fVar25 = fVar22;
  }
  *(float *)(plVar7 + 0xe) = fVar25;
  local_108 = *(longlong ***)(*plVar7 + 0x268);
  FUN_1446dcdd4(&local_f8);
  uVar14 = local_1ac;
  if (DAT_14cb7d5f8 == 0) {
    plVar7 = local_1a8;
    if (lStack_e0 != 0) {
      FUN_1400020a8();
      plVar7 = local_1a8;
      uVar14 = local_1ac;
    }
  }
  else {
    lVar9 = FUN_144815d88(DAT_14cb7d5f8,&local_f8);
    if (lStack_e0 != 0) {
      FUN_1400020a8();
    }
    if (lVar9 != 0) {
      fVar22 = *(float *)(lVar9 + 0x18);
      if (*(float *)(lVar9 + 0x18) <= *(float *)(plVar7 + 0xe)) {
        fVar22 = *(float *)(plVar7 + 0xe);
      }
      *(float *)(plVar7 + 0xe) = fVar22;
    }
  }
  if (*(longlong **)(*plVar7 + 0x310) != (longlong *)0x0) {
    local_100 = &local_68;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = local_e8 & 0xffffffff00000000;
    lStack_e0 = 0;
    local_d8 = 0;
    local_108 = &local_70;
    lVar9 = 0;
    local_70 = *(longlong **)(*plVar7 + 0x310);
    FUN_14581cf4c(&local_f8,&local_108,0);
    if (DAT_14cb8d398 != 0) {
      lVar9 = FUN_144837462(DAT_14cb8d398,&local_f8);
    }
    if (lStack_e0 != 0) {
      FUN_1400020a8();
    }
    if (lVar9 != 0) {
      fVar22 = *(float *)(plVar7 + 0xe);
      fVar25 = (float)FUN_140d5ce66(lVar9);
      if (fVar25 <= fVar22) {
        fVar25 = fVar22;
      }
      *(float *)(plVar7 + 0xe) = fVar25;
    }
  }
  if ((((uVar14 & 0x10) != 0) && (*(longlong *)(lVar8 + 0x268) != 0)) &&
     (*(int *)(lVar8 + 0x270) - 1U < 0xfffffffe)) {
    if (param_8 == 0) {
LAB_140d5ca77:
      uVar23 = (undefined4)DAT_14c8464f0;
      uVar24 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      local_1a0 = &DAT_14c8464e0;
    }
    else {
      lVar9 = FUN_144a6c4d8();
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(param_8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_8 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
        param_8 = *(longlong *)(param_8 + 0x1c8);
        if (param_8 != 0) goto LAB_140d5ce35;
        goto LAB_140d5ca77;
      }
      lVar9 = FUN_144a799b0();
      if ((*(int *)(*(longlong *)(param_8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_8 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) {
        uVar23 = (undefined4)param_9[2];
        uVar24 = (undefined4)((ulonglong)param_9[2] >> 0x20);
      }
      else {
LAB_140d5ce35:
        uVar23 = (undefined4)*(undefined8 *)(param_8 + 0x270);
        uVar24 = (undefined4)((ulonglong)*(undefined8 *)(param_8 + 0x270) >> 0x20);
        local_1a0 = (longlong *)(param_8 + 0x260);
      }
    }
    plVar7 = local_1a8;
    local_188 = (undefined4)*local_1a0;
    uStack_184 = *(undefined4 *)((longlong)local_1a0 + 4);
    uStack_180 = (undefined4)local_1a0[1];
    uStack_17c = *(undefined4 *)((longlong)local_1a0 + 0xc);
    local_178 = CONCAT44(uVar24,uVar23);
    local_1c8 = (undefined4 *)CONCAT44(local_1c8._4_4_,*(undefined4 *)((longlong)local_1a8 + 100));
    (**(code **)(*param_4 + 0x78))(param_4,lVar8 + 0x268,*(undefined1 *)(lVar8 + 0x280));
    (**(code **)(*(longlong *)plVar7[1] + 0x88))((longlong *)plVar7[1],plVar7,0);
    uVar14 = local_1ac;
  }
  if ((uVar14 & 4) != 0) {
    lVar9 = FUN_1402d1dc0(lVar8 + 0x288);
    if ((lVar9 != 0) && (1e-08 < *(float *)(plVar7 + 3))) {
      bVar15 = uStack_f0._1_1_ & 0xe1;
      lStack_d0 = 0;
      local_c8 = 0;
      FUN_140691b73();
      FUN_140691bc1();
      lVar9 = FUN_1402d1dc0(lVar8 + 0x288);
      if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar9);
      }
      local_e8 = *(ulonglong *)(lVar8 + 0x2c8);
      lStack_e0 = *(longlong *)(lVar8 + 0x2d0);
      local_d8 = CONCAT35(local_d8._5_3_,*(undefined5 *)(lVar8 + 0x2d8));
      uStack_f0 = CONCAT62(uStack_f0._2_6_,
                           CONCAT11(*(char *)(lVar8 + 0x2ed) << 3 |
                                    *(char *)(lVar8 + 0x2ec) << 2 | bVar15,
                                    *(char *)(lVar8 + 0x2eb) << 7 |
                                    *(char *)(lVar8 + 0x2ea) << 6 |
                                    *(char *)(lVar8 + 0x2e9) << 5 |
                                    *(char *)(lVar8 + 0x2de) << 3 |
                                    *(char *)(lVar8 + 0x2dd) << 2 | *(byte *)(lVar8 + 0x2c0))) | 2;
      puVar18 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar8 + 8) != (undefined4 *)0x0) {
        puVar18 = *(undefined4 **)(lVar8 + 8);
      }
      local_f8 = lVar9;
      if (DAT_14c947fe0 == 0) {
        lVar9 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar9);
        DAT_14c947fe0 = lVar9;
      }
      FUN_140045924(DAT_14c947fe0,&lStack_d0,puVar18,1);
      (**(code **)(*param_4 + 0x90))(param_4,&local_f8,lVar8 + 0x2b0);
      plVar7 = local_1a8;
      uVar14 = local_1ac;
    }
  }
  if ((uVar14 & 8) != 0) {
    lVar9 = *(longlong *)(lVar8 + 0x300);
    if (lVar9 == 0) {
      uVar10 = FUN_140067708();
      lVar9 = FUN_14477b664(uVar10);
      *(longlong *)(lVar8 + 0x300) = lVar9;
    }
    plVar20 = (longlong *)(lVar8 + 0x2f8);
    if (*(longlong *)(lVar8 + 0x308) == 0) {
      if ((*plVar20 != 0) && (lVar9 != 0)) {
        plVar7 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar7 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar6 == '\0')) {
          *(undefined8 *)(lVar8 + 0x308) = 0;
          plVar7 = local_1a8;
          uVar14 = local_1ac;
        }
        else {
          uVar10 = (**(code **)(*plVar7 + 0x110))(plVar7);
          lVar9 = FUN_144aff482(uVar10,plVar20);
          *(longlong *)(lVar8 + 0x308) = lVar9;
          plVar7 = local_1a8;
          uVar14 = local_1ac;
          if (lVar9 != 0) goto LAB_140d5cc49;
        }
      }
    }
    else {
LAB_140d5cc49:
      local_d8 = plVar7[8];
      lStack_d0 = plVar7[9];
      local_c8 = plVar7[10];
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      lStack_e0 = 0x3ff0000000000000;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b4 = 0x3ff00000;
      uStack_b0 = 0;
      uStack_ac = 0x3ff00000;
      local_a8 = 0x3ff0000000000000;
      uStack_a0 = 0;
      local_98 = 0x3f800000;
      local_90 = 0;
      local_8c = 0;
      (**(code **)(*param_4 + 0xa0))(param_4,plVar20,param_5);
    }
  }
  if ((uVar14 & 0x20) != 0) {
    lVar8 = *plVar7;
    if (*(longlong *)(lVar8 + 0x310) != 0) {
      (**(code **)(*(longlong *)plVar7[1] + 0xb0))
                ((longlong *)plVar7[1],*(longlong *)(lVar8 + 0x310),lVar8 + 0x318,0);
      lVar8 = *plVar7;
    }
    if (*(longlong *)(lVar8 + 0x368) != 0) {
      (**(code **)(*(longlong *)plVar7[1] + 0xb8))();
    }
  }
LAB_140d5bd51:
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d5ce66 FUN_140d5ce66 body=683 status=ok
// SIG undefined FUN_140d5ce66(void)

float FUN_140d5ce66(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  
  fVar16 = 0.0;
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    iVar2 = *(int *)(param_1 + 200);
    if (iVar2 == 0) {
      uVar13 = 1;
      uVar15 = 0;
      iVar4 = 0;
      iVar11 = 0;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0xc0);
      if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0xb0);
      }
      uVar14 = *puVar5;
      if (uVar14 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        uVar15 = 0;
        uVar13 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar13 = uVar15;
        }
        iVar11 = 0;
        do {
          if (uVar13 == uVar15) {
            return 0.0;
          }
          iVar11 = iVar11 + 0x20;
          uVar14 = puVar5[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar15 = 0;
        iVar11 = 0;
      }
      uVar13 = (ulonglong)(-uVar14 & uVar14);
      uVar1 = uVar13 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar4 = (iVar11 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
    }
    if (iVar4 != iVar2) {
      uVar14 = 0xffffffff;
      fVar17 = 0.0;
      do {
        lVar7 = *(longlong *)(param_1 + 0xa0);
        lVar12 = lVar7 + (longlong)iVar4 * 0xc0 + 0x90;
        lVar6 = FUN_1447e736e(lVar12);
        if (lVar6 == 0) {
          lVar7 = lVar7 + (longlong)iVar4 * 0xc0 + 0x10;
        }
        else {
          lVar7 = FUN_1447e736e(lVar12);
          lVar7 = lVar7 + 0x30;
        }
        fVar16 = fVar17;
        if ((lVar7 != 0) && (1 < (longlong)*(int *)(lVar7 + 0x78))) {
          lVar6 = *(longlong *)(lVar7 + 0x70);
          lVar7 = (longlong)*(int *)(lVar7 + 0x78) * 0x1c;
          lVar12 = 0;
          do {
            if ((1e-08 < ABS(*(float *)(lVar6 + 8 + lVar12) - *(float *)(lVar6 + 8))) ||
               (*(char *)(lVar6 + lVar12) == '\x02')) {
              fVar16 = *(float *)(lVar6 + lVar7 + -0x18);
              if (fVar16 <= fVar17) {
                fVar16 = fVar17;
              }
              break;
            }
            lVar12 = lVar12 + 0x1c;
          } while (lVar7 != lVar12);
        }
        uVar14 = uVar14 & ~(uint)uVar13;
        puVar5 = *(uint **)(param_1 + 0xc0);
        if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
          puVar5 = (uint *)(param_1 + 0xb0);
        }
        iVar3 = *(int *)(param_1 + 200);
        iVar4 = (int)uVar15;
        lVar7 = (longlong)iVar4;
        uVar10 = puVar5[lVar7] & uVar14;
        if (uVar10 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar11 = iVar11 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar4) {
            iVar9 = iVar4;
          }
          if (iVar4 < iVar8) {
            lVar6 = 0;
            do {
              uVar10 = puVar5[lVar7 + lVar6 + 1];
              if (uVar10 != 0) {
                uVar15 = (ulonglong)(iVar4 + (int)lVar6 + 1);
                uVar14 = 0xffffffff;
                goto LAB_140d5d058;
              }
              iVar11 = iVar11 + 0x20;
              lVar6 = lVar6 + 1;
            } while (iVar9 - lVar7 != lVar6);
            uVar14 = 0xffffffff;
            iVar4 = iVar9;
          }
          uVar15 = (ulonglong)(iVar4 + 1);
          iVar4 = iVar3;
        }
        else {
LAB_140d5d058:
          uVar13 = (ulonglong)(-uVar10 & uVar10);
          uVar1 = uVar13 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar4 = (iVar11 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar4) {
            iVar4 = iVar3;
          }
        }
        fVar17 = fVar16;
      } while (iVar4 != iVar2);
    }
  }
  return fVar16;
}



// FUNCTION 140d5d112 FUN_140d5d112 body=65 status=ok
// SIG undefined FUN_140d5d112(void)

longlong FUN_140d5d112(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457a0662(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_140d5d153(lVar2);
  return lVar2;
}



// FUNCTION 140d5d153 FUN_140d5d153 body=21 status=ok
// SIG undefined FUN_140d5d153(void)

void FUN_140d5d153(undefined8 *param_1)

{
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f) = 0;
  return;
}



// FUNCTION 140d5d176 FUN_140d5d176 body=72 status=ok
// SIG undefined FUN_140d5d176(void)

undefined8 * FUN_140d5d176(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b08ae00;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d5d1cc FUN_140d5d1cc body=31 status=ok
// SIG undefined FUN_140d5d1cc(void)

undefined8 FUN_140d5d1cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d5d1ec FUN_140d5d1ec body=1062 status=ok
// SIG undefined FUN_140d5d1ec(void)

void FUN_140d5d1ec(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
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
  FUN_140d5d644();
  if (param_2 == '\0') {
    if ((*(byte **)(param_1 + 0x800) != (byte *)0x0) && ((**(byte **)(param_1 + 0x800) & 1) != 0)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb0c040) && (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1))
      {
        FUN_145e17f72(&DAT_14cb0bff0);
        atexit(FUN_14374ca90);
        _Init_thread_footer(&DAT_14cb0c040);
      }
      FUN_1402eb48e(*(undefined8 *)(*(longlong *)(param_1 + 0x800) + 0x28),param_1 + 0x7e0);
      **(byte **)(param_1 + 0x800) = **(byte **)(param_1 + 0x800) & 0xfe;
    }
    if ((*(byte **)(param_1 + 2000) != (byte *)0x0) && ((**(byte **)(param_1 + 2000) & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
  else {
    if (DAT_14cad09b8 == 1) {
      cVar5 = FUN_14118ad78(param_1,param_1 + 0x7b0);
      if (cVar5 != '\0') {
        *(longlong *)(param_1 + 0x7d8) = param_1;
        FUN_14082bc44(param_1 + 0x7b0,param_1,param_1 + 0x40);
      }
    }
    lVar8 = param_1;
    if ((*(byte *)(param_1 + 0x7ea) & 2) != 0) {
      for (; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x20)) {
        if ((*(uint *)(lVar8 + 8) & 0x30) != 0) goto LAB_140d5d3b0;
      }
      lVar8 = *(longlong *)(param_1 + 0xa8);
      lVar6 = lVar8;
      if (lVar8 == 0) {
        lVar8 = *(longlong *)(param_1 + 0xb0);
        if (lVar8 == 0) {
          lVar8 = FUN_1448abda6(param_1);
        }
        lVar8 = *(longlong *)(lVar8 + 0x30);
      }
      else {
        do {
          if ((*(uint *)(lVar6 + 8) & 0x30) != 0) goto LAB_140d5d3b0;
          plVar1 = (longlong *)(lVar6 + 0x20);
          lVar6 = *plVar1;
        } while (*plVar1 != 0);
        if (DAT_14cae8b20 == 0) {
          local_50 = &local_38;
          local_38 = (code *)&LAB_14355090c;
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
        lVar6 = DAT_14cae8b20;
        if (DAT_14c951858 == 0) {
          local_50 = &local_38;
          local_38 = FUN_1449e2820;
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
        lVar7 = *(longlong *)(lVar8 + 0x20);
        if (lVar7 == 0) {
          lVar8 = 0;
        }
        else {
          iVar2 = *(int *)(lVar6 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar2) ||
               (lVar8 = lVar7,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
               lVar6 + 0x30)) {
              lVar8 = 0;
            }
          } while ((lVar8 == 0) && (lVar7 = *(longlong *)(lVar7 + 0x20), lVar7 != 0));
        }
      }
      if ((*(byte *)(param_1 + 0x7ea) & 4) == 0) {
        bVar9 = *(char *)(param_1 + 0x7eb) != '\0';
      }
      else {
        bVar9 = true;
      }
      lVar6 = param_1 + 0x7e0;
      pbVar3 = *(byte **)(param_1 + 0x800);
      if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 1) == 0)) {
        *(bool *)(param_1 + 0x7eb) = bVar9;
      }
      else {
        cVar5 = *(char *)(param_1 + 0x7eb);
        if (bVar9 != (cVar5 != '\0')) {
          uVar4 = *(undefined8 *)(pbVar3 + 0x28);
          FUN_1402eb48e(uVar4,lVar6);
          *(bool *)(param_1 + 0x7eb) = bVar9;
          FUN_1402eb97e(uVar4,lVar6);
          cVar5 = *(char *)(param_1 + 0x7eb);
        }
        if (cVar5 == '\0') {
          *(undefined4 *)(*(longlong *)(param_1 + 0x800) + 0x24) = 0xbf800000;
        }
      }
      FUN_1402eb876(lVar6,lVar8);
      *(longlong *)(param_1 + 0x808) = param_1;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
LAB_140d5d3b0:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d5d644 FUN_140d5d644 body=99 status=ok
// SIG undefined FUN_140d5d644(void)

void FUN_140d5d644(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  FUN_1407a7646();
  (**(code **)(*param_1 + 0x4c0))(param_1);
  if (((((*(byte *)(param_1 + 0x2e) & 4) != 0 && param_2 == '\x01') &&
       (lVar1 = param_1[0x15], lVar1 != 0)) && ((*(byte *)((longlong)param_1 + 0x4a) & 2) != 0)) &&
     ((*(byte *)(lVar1 + 0x3a) & 2) != 0)) {
    FUN_14082bc44(lVar1 + 0x30,param_1,param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 140d5d6da FUN_140d5d6da body=52 status=ok
// SIG undefined FUN_140d5d6da(void)

void FUN_140d5d6da(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b348f40;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_140d5d70e(param_1 + 0x10);
  return;
}



// FUNCTION 140d5d70e FUN_140d5d70e body=201 status=ok
// SIG undefined FUN_140d5d70e(void)

void FUN_140d5d70e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b349000;
  FUN_140d5d7d7(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xc];
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
  plVar3 = (longlong *)param_1[10];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140d5d7d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140d5d7d7 FUN_140d5d7d7 body=75 status=ok
// SIG undefined FUN_140d5d7d7(void)

void FUN_140d5d7d7(longlong param_1,int param_2)

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



// FUNCTION 140d5d822 FUN_140d5d822 body=254 status=ok
// SIG undefined FUN_140d5d822(void)

void FUN_140d5d822(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  memset(param_2,0,0xb8);
  FUN_140d5d920(param_2);
  *param_2 = &PTR_FUN_14b84b7c0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_2[0x13] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 0x14) = DAT_14c844848;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  return;
}



// FUNCTION 140d5d920 FUN_140d5d920 body=862 status=ok
// SIG undefined FUN_140d5d920(void)

undefined8 * FUN_140d5d920(undefined8 *param_1)

{
  longlong *plVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b47ab90;
  param_1[3] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[4] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 5) = DAT_14c844848;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[6] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 7) = DAT_14c844848;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[8] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 9) = DAT_14c844848;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[10] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0xb) = DAT_14c844848;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return param_1;
}



// FUNCTION 140d5dc8a FUN_140d5dc8a body=330 status=ok
// SIG undefined FUN_140d5dc8a(void)

undefined8 FUN_140d5dc8a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  uint local_48 [6];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar3 != '\0') {
    puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x28))(param_2);
    local_50 = DAT_14cb886f0;
    local_58 = DAT_14cb886e8;
    FUN_1448075d0(local_48);
    pbVar2 = (byte *)*puVar4;
    if (pbVar2 != (byte *)0x0) {
      if ((*pbVar2 & 2) == 0) {
        plVar6 = &DAT_14c9a1288;
      }
      else {
        plVar6 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
      }
      if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
        plVar8 = plVar6 + 8;
        if ((longlong *)plVar6[9] != (longlong *)0x0) {
          plVar8 = (longlong *)plVar6[9];
        }
        iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar6[10] - 1U & local_48[0]) * 4);
        if (iVar9 != -1) {
          do {
            lVar1 = *plVar6 + (longlong)iVar9 * 0x40;
            if (*(uint *)(*plVar6 + (longlong)iVar9 * 0x40) == local_48[0]) {
              if ((((lVar1 != 0) &&
                   (puVar7 = (undefined8 *)(lVar1 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar7 != (byte *)0x0)) && ((*(byte *)*puVar7 & 0x40) == 0))
              goto LAB_140d5dd55;
              break;
            }
            iVar9 = *(int *)(lVar1 + 0x38);
          } while (iVar9 != -1);
        }
      }
    }
    puVar7 = &DAT_14c9a1308;
LAB_140d5dd55:
    if ((byte *)*puVar7 == (byte *)0x0) {
      bVar10 = false;
    }
    else {
      bVar10 = (*(byte *)*puVar7 & 3) != 0;
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (bVar10) {
      FUN_14579c39a(puVar4,param_1,0);
      uVar5 = 1;
      goto LAB_140d5dd73;
    }
  }
  uVar5 = 0;
LAB_140d5dd73:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140d5ddd6 FUN_140d5ddd6 body=58 status=ok
// SIG undefined FUN_140d5ddd6(void)

void FUN_140d5ddd6(longlong param_1)

{
  FUN_140d5de10();
  if ((*(longlong *)(param_1 + 0x488) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x488) + 0x90) == '\x01')) {
    *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_1 + 0x550);
  }
  return;
}



// FUNCTION 140d5de10 FUN_140d5de10 body=2599 status=ok
// SIG undefined FUN_140d5de10(void)

/* WARNING: Removing unreachable block (ram,0x000140d5e505) */

void FUN_140d5de10(longlong *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  longlong *local_78;
  longlong local_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (0 < (int)param_1[0x6d]) {
    cVar4 = (char)param_1[0x6b];
    if (cVar4 == '\x01') {
      fVar21 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c)))
               * *(float *)(param_1 + 0x69) *
               (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
               *(float *)((longlong)param_1 + 0x344);
      *(float *)((longlong)param_1 + 0x354) = fVar21;
      *(undefined1 *)(param_1 + 0x6b) = 0;
      cVar4 = '\0';
    }
    else {
      fVar21 = *(float *)((longlong)param_1 + 0x354);
    }
    if (fVar21 < *(float *)param_1[0x6c]) {
      if (cVar4 != '\0') {
        fVar21 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c))
                 ) * *(float *)(param_1 + 0x69) *
                 (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
                 *(float *)((longlong)param_1 + 0x344);
        *(float *)((longlong)param_1 + 0x354) = fVar21;
        *(undefined1 *)(param_1 + 0x6b) = 0;
      }
      *(float *)param_1[0x6c] = fVar21;
    }
  }
  if ((param_1[0x91] != 0) && (param_1[0x90] != 0)) {
    cVar4 = *(char *)(param_1[0x91] + 0x90);
    fVar21 = (float)(**(code **)(*param_1 + 0x140))(param_1,1);
    if (fVar21 <= 0.0001) {
      if ((0.0001 < *(float *)(param_1 + 100)) &&
         (uVar16 = (ulonglong)(int)param_1[0x6d], 0 < (longlong)uVar16)) {
        lVar7 = uVar16 * 0x88;
        do {
          lVar7 = lVar7 + -0x88;
          if ((longlong)uVar16 <= (longlong)*(int *)(param_1[0x90] + 0x40)) {
            lVar15 = *(longlong *)(param_1[0x90] + 0x38);
            cVar3 = FUN_140d03222(lVar15 + lVar7);
            if (cVar3 != '\0') {
              lVar18 = lVar15 + lVar7 + 0x18;
              lVar15 = FUN_1409d448e(lVar18);
              if (lVar15 != 0) {
                lVar15 = FUN_1409d448e(lVar18);
                lVar15 = FUN_1401f2ad8(lVar15 + 0x48);
                if (lVar15 != 0) {
                  lVar7 = FUN_1409d448e(lVar18);
                  lVar7 = lVar7 + 0x48;
                  goto LAB_140d5e096;
                }
              }
            }
          }
          bVar20 = 1 < uVar16;
          uVar16 = uVar16 - 1;
        } while (bVar20);
      }
    }
    else if (0 < (int)param_1[0x6d]) {
      lVar15 = 0x18;
      lVar18 = 0;
      do {
        if (((0.0001 < *(float *)(param_1[0x6c] + lVar18 * 4)) &&
            (lVar18 < *(int *)(param_1[0x90] + 0x40))) &&
           (lVar7 = FUN_1409d448e(*(longlong *)(param_1[0x90] + 0x38) + lVar15), lVar7 != 0)) {
          if (cVar4 == '\0') {
            lVar7 = lVar7 + 0x20;
          }
          else {
            lVar7 = lVar7 + 0x48;
          }
          lVar8 = FUN_1401f2ad8(lVar7);
          if (lVar8 != 0) goto LAB_140d5e096;
        }
        lVar18 = lVar18 + 1;
        lVar15 = lVar15 + 0x88;
      } while (lVar18 < (int)param_1[0x6d]);
    }
    goto LAB_140d5e0e7;
  }
  goto LAB_140d5e258;
LAB_140d5e096:
  lVar7 = FUN_1401f2ad8(lVar7);
  if (lVar7 == 0) {
    *(undefined4 *)(param_1 + 0x2d) = 0;
    iVar5 = 0;
  }
  else {
    uVar6 = *(uint *)(lVar7 + 0xc);
    *(uint *)(param_1 + 0x2d) = uVar6;
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar20 = iVar5 == 0;
      if (bVar20) {
        *(int *)(lVar7 + 0x10) = iVar13;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar20) {
        iVar5 = iVar13;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x16c) = iVar5;
LAB_140d5e0e7:
  if (*(int *)(param_1[0x90] + 0x40) < 1) {
    fVar21 = -1.0;
  }
  else {
    fVar21 = (float)FUN_14055830e(*(undefined8 *)(param_1[0x90] + 0x38));
  }
  if ((char)param_1[0x6b] == '\x01') {
    fVar22 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c))) *
             *(float *)(param_1 + 0x69) *
             (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
             *(float *)((longlong)param_1 + 0x344);
    *(float *)((longlong)param_1 + 0x354) = fVar22;
    *(undefined1 *)(param_1 + 0x6b) = 0;
  }
  else {
    fVar22 = *(float *)((longlong)param_1 + 0x354);
  }
  if ((fVar21 - fVar22 <= 0.0001) && (plVar9 = (longlong *)param_1[0x8f], plVar9 != (longlong *)0x0)
     ) {
    if (DAT_14cb20e58 == 0) {
      local_90 = &local_68;
      local_68 = FUN_1449e2820;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_1427b09ee;
      local_98 = &LAB_147f14d13;
      local_a0 = FUN_1464313b0;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10004001;
      local_c0 = 8;
      local_c8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12);
    }
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,DAT_14cb20e58);
    if (plVar9 != (longlong *)0x0) {
      if (DAT_14cb20e58 == 0) {
        local_90 = &local_68;
        local_68 = FUN_1449e2820;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_1427b09ee;
        local_98 = &LAB_147f14d13;
        local_a0 = FUN_1464313b0;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x10004001;
        local_c0 = 8;
        local_c8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12);
      }
      plVar10 = (longlong *)FUN_144718840(plVar9,DAT_14cb20e58);
      if ((plVar9 != plVar10) && (plVar10 != (longlong *)0x0)) {
        uVar11 = (**(code **)(*plVar10 + 0x10))(plVar10);
        cVar3 = FUN_14068bcb2(uVar11,param_1[5],3);
        *(byte *)((longlong)param_1 + 0x39c) =
             *(byte *)((longlong)param_1 + 0x39c) & 0xfb | cVar3 << 2;
      }
    }
  }
  if (cVar4 != '\0') {
    param_1[0x67] = 0;
    param_1[0x68] = 0;
    param_1[0x69] = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x354) = 0;
    *(undefined1 *)(param_1 + 0x6a) = 1;
    *(undefined1 *)(param_1 + 0x6b) = 0;
    if (0 < (int)param_1[0x6d]) {
      lVar7 = 0;
      do {
        *(undefined4 *)(param_1[0x6c] + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < (int)param_1[0x6d]);
    }
  }
LAB_140d5e258:
  local_78 = param_1 + 0x80;
  *(undefined4 *)(param_1 + 0x81) = 0;
  if (*(int *)((longlong)param_1 + 0x40c) < 0) {
    FUN_14882290a(local_78);
  }
  if ((param_1[0x90] != 0) && (lVar7 = (longlong)*(int *)(param_1[0x90] + 0x40), 0 < lVar7)) {
    lVar15 = 0;
    do {
      if ((((lVar15 < (int)param_1[0x6d]) && (0.0 < *(float *)(param_1[0x6c] + lVar15 * 4))) &&
          (lVar15 < *(int *)(param_1[0x90] + 0x40))) && (lVar18 = FUN_1409d448e(), lVar18 != 0)) {
        lVar8 = param_1[0x80];
        iVar5 = 0;
        lVar19 = lVar8;
        if ((longlong)(int)param_1[0x81] != 0) {
          lVar14 = (longlong)(int)param_1[0x81] * 0x20;
          local_70 = lVar8 + lVar14;
          do {
            lVar12 = FUN_1409d448e(lVar19);
            lVar8 = lVar19;
            if (lVar12 == lVar18) break;
            lVar19 = lVar19 + 0x20;
            lVar14 = lVar14 + -0x20;
            lVar8 = local_70;
          } while (lVar14 != 0);
          iVar5 = (int)param_1[0x81];
          lVar19 = param_1[0x80];
        }
        if (lVar8 == (longlong)iVar5 * 0x20 + lVar19) {
          puVar17 = *(undefined4 **)(lVar18 + 8);
          if (puVar17 == (undefined4 *)0x0) {
            puVar17 = &DAT_14c9485f0;
          }
          if (DAT_14c947fe0 == 0) {
            lVar18 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar18);
            DAT_14c947fe0 = lVar18;
          }
          FUN_140045924(DAT_14c947fe0,&local_68,puVar17,1);
          pcVar2 = local_68;
          iVar5 = (int)param_1[0x81];
          *(uint *)(param_1 + 0x81) = iVar5 + 1U;
          if (*(uint *)((longlong)param_1 + 0x40c) < iVar5 + 1U) {
            FUN_14654acac(local_78,iVar5);
          }
          lVar18 = param_1[0x80];
          lVar8 = (longlong)iVar5 * 0x20;
          *(code **)(lVar18 + lVar8) = pcVar2;
          *(undefined4 *)(lVar18 + 8 + lVar8) = 0x3001;
          *(undefined8 *)(lVar18 + 0x10 + lVar8) = 0;
          *(undefined4 *)(lVar18 + 0x18 + lVar8) = 0;
          lVar8 = param_1[0x80] + (longlong)(int)param_1[0x81] * 0x20 + -0x20;
        }
        *(float *)(lVar8 + 0x18) = *(float *)(param_1[0x6c] + lVar15 * 4) + *(float *)(lVar8 + 0x18)
        ;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar7);
  }
  if ((char)param_1[0x6b] == '\0') {
    fVar21 = *(float *)((longlong)param_1 + 0x354) - *(float *)((longlong)param_1 + 0x324);
  }
  else {
    fVar21 = ((*(float *)(param_1 + 0x67) + 1.0) / (1.0 - *(float *)((longlong)param_1 + 0x33c))) *
             *(float *)(param_1 + 0x69) *
             (*(float *)((longlong)param_1 + 0x34c) + *(float *)(param_1 + 0x68)) +
             *(float *)((longlong)param_1 + 0x344);
    *(float *)((longlong)param_1 + 0x354) = fVar21;
    *(undefined1 *)(param_1 + 0x6b) = 0;
    fVar21 = fVar21 - *(float *)((longlong)param_1 + 0x324);
  }
  if (fVar21 < 0.0) goto LAB_140d5e64d;
  *(float *)((longlong)param_1 + 0x394) = fVar21;
  if ((*(byte *)(param_1 + 0x3a) & 0x40) == 0) {
    plVar9 = (longlong *)param_1[0x91];
    if ((plVar9 != (longlong *)0x0) && (param_1[7] != 0)) {
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x514);
      plVar10 = (longlong *)param_1[5];
      if (plVar10 == (longlong *)0x0) {
LAB_140d5e5d0:
        lVar15 = 0;
      }
      else {
        uVar11 = FUN_1403ec9c0();
        lVar7 = (**(code **)(*plVar10 + 0x288))(plVar10,uVar11);
        if (lVar7 == 0) goto LAB_140d5e5d0;
        uVar11 = FUN_1403ec9c0();
        lVar15 = FUN_144718840(lVar7,uVar11);
        if (lVar7 == lVar15) goto LAB_140d5e5d0;
      }
      local_c8 = uVar1;
      cVar4 = (**(code **)(*plVar9 + 0x48))
                        (plVar9,*(undefined4 *)((longlong)param_1 + 0x394),lVar15,&local_68);
      *(byte *)((longlong)param_1 + 0x39c) =
           *(byte *)((longlong)param_1 + 0x39c) & 0xef | cVar4 << 4;
    }
  }
  else {
    *(byte *)((longlong)param_1 + 0x39c) = *(byte *)((longlong)param_1 + 0x39c) | 0x10;
  }
  if ((((*(byte *)((longlong)param_1 + 0x39c) & 0x10) == 0) && ((char)param_1[0x3b] == '\x01')) &&
     (uVar6 = rand(), (float)(uVar6 & 0x7fff) / 32767.0 <= *(float *)((longlong)param_1 + 0x1d4))) {
    *(byte *)((longlong)param_1 + 0x39c) = *(byte *)((longlong)param_1 + 0x39c) | 0x10;
  }
LAB_140d5e64d:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d5e84e FUN_140d5e84e body=143 status=ok
// SIG undefined FUN_140d5e84e(void)

void FUN_140d5e84e(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)((longlong)param_1 + 0x1151) & 1) == 0) {
    FUN_1446f470e(local_20,L"OnRep_Exploded",1);
    FUN_140721fbe(param_1 + 0x265,local_20);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  *(undefined1 *)((longlong)param_1 + 0x1152) = *(undefined1 *)((longlong)param_1 + 0x1181);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000140d5e898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6c0))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d5e8e6 FUN_140d5e8e6 body=293 status=ok
// SIG undefined FUN_140d5e8e6(void)

void FUN_140d5e8e6(longlong *param_1)

{
  byte bVar1;
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((param_1 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x69) & 2) == 0)) &&
     ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x1db);
    if (((bVar1 & 8) == 0) && ((*(byte *)((longlong)param_1 + 0x1152) & 1) != 0)) {
      bVar1 = bVar1 | 8;
      *(byte *)(param_1 + 0x1db) = bVar1;
    }
    if (((bVar1 & 2) == 0) || (param_1[0x233] != DAT_14c872be0)) {
      param_1[0x233] = DAT_14c872be0;
      FUN_1447cd2ec(param_1 + 0x1ad,0);
      *(byte *)(param_1 + 0x1db) = *(byte *)(param_1 + 0x1db) | 2;
      if ((char)param_1[0x2f] == '\x03') {
        (**(code **)(*param_1 + 0x578))(param_1);
        *(ushort *)(param_1 + 0x230) =
             *(byte *)(param_1 + 0x230) + 1 | (ushort)*(byte *)((longlong)param_1 + 0x1152) << 8;
      }
      local_18 = param_1;
      FUN_1447cd2ec(param_1 + 0x1af);
      if ((*(byte *)(param_1 + 0x1dc) & 4) == 0) {
        FUN_140d5ea1a(param_1);
      }
    }
    if ((*(byte *)(param_1 + 0x1dc) & 4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d5ea1a FUN_140d5ea1a body=57 status=ok
// SIG undefined FUN_140d5ea1a(void)

void FUN_140d5ea1a(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = 0x6b8;
  if (((*(byte *)(param_1 + 0x1dc) & 1) == 0) &&
     ((((*(byte *)(param_1 + 0x1dc) & 2) == 0 || (param_1[0x1e2] == 0)) ||
      (lVar1 = 0x6c8, 0xfffffffd < (int)param_1[0x1e3] - 1U)))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d5ea2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar1))();
  return;
}



// FUNCTION 140d5ea54 FUN_140d5ea54 body=59 status=ok
// SIG undefined FUN_140d5ea54(void)

void FUN_140d5ea54(longlong *param_1)

{
  if (((param_1 != (longlong *)0x0) && ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) &&
     (((*(byte *)(param_1 + 0x1db) & 8) != 0 ||
      (((*(byte *)(param_1 + 0x1dc) & 0x10) != 0 && (-1 < (char)param_1[0x1fb])))))) {
                    /* WARNING: Could not recover jumptable at 0x000140d5ea77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x5c8))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140d5ea90 FUN_140d5ea90 body=982 status=ok
// SIG undefined FUN_140d5ea90(void)

void FUN_140d5ea90(longlong param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  longlong local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((((*(char *)(param_1 + 0x178) == '\x03') && (*(int *)(param_1 + 0x11f4) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x11f0), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar8 != 0)))) &&
     ((*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x11f4) &&
      ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
    plVar5 = (longlong *)FUN_14479d2ce();
    (**(code **)(*plVar5 + 0x5c8))(plVar5,0);
  }
  iVar2 = FUN_14487fd02(param_1);
  local_a8 = param_1;
  if (param_2 != '\0') goto LAB_140d5ebaa;
  if (*(longlong *)(param_1 + 0x1198) == DAT_14c872be0) {
LAB_140d5eb34:
    if (iVar2 != 3) {
LAB_140d5ebb1:
      if ((*(byte *)(param_1 + 0x348) & 2) == 0) {
        *(byte *)(param_1 + 0x348) = *(byte *)(param_1 + 0x348) | 2;
        lVar8 = FUN_1447210f0(param_1);
        FUN_140d5ee80(&local_a8,lVar8);
        if (*(longlong *)(lVar8 + 0x1f0) == 0) {
          puVar4 = (undefined8 *)(lVar8 + 0x458);
        }
        else {
          puVar4 = (undefined8 *)(*(longlong *)(lVar8 + 0x1f0) + 0xf0);
        }
        uVar3 = *puVar4;
        local_a0 = (undefined8 *)0x0;
        local_98 = 0;
        FUN_1446efa72(&local_a0,0,3,0x10);
        puVar4 = local_a0;
        local_98 = 3;
        *local_a0 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        local_a0[2] = lVar6;
        *local_a0 = &PTR_FUN_14b4225a0;
        local_a0[3] = 0;
        iVar2 = 0;
        if (param_1 != 0) {
          uVar1 = *(uint *)(param_1 + 0xc);
          *(uint *)(local_a0 + 3) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          iVar2 = *(int *)(lVar8 + 0x10);
          if (*(int *)(lVar8 + 0x10) == 0) {
            LOCK();
            iVar2 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar9 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar2;
            if (bVar9) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar2 = *(int *)(lVar8 + 0x10);
            bVar9 = iVar2 == 0;
            if (bVar9) {
              *(int *)(lVar8 + 0x10) = iVar7;
              iVar2 = 0;
            }
            UNLOCK();
            if (bVar9) {
              iVar2 = iVar7;
            }
          }
        }
        *(int *)((longlong)puVar4 + 0x1c) = iVar2;
        puVar4[4] = &LAB_140b87188;
        *(undefined4 *)(puVar4 + 5) = 0;
        local_88 = 0;
        local_80 = 0;
        FUN_14487d8d8(&local_88,&local_a0);
        local_48 = 1;
        local_b8 = local_90;
        local_90[0] = 0;
        local_8c = 0xbf800000;
        FUN_1406f4044(uVar3,param_1 + 0x11b0,&local_88,0x3e4ccccd);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
        if (local_98 != 0) {
          if (local_a0 == (undefined8 *)0x0) goto LAB_140d5ed36;
          (**(code **)*local_a0)(local_a0,0);
          FUN_1446efa72(&local_a0,0,0,0x10);
          local_98 = 0;
        }
        if (local_a0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_140d5ed36:
      if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x61) & 1) == 0) goto LAB_140d5ebaa;
      goto LAB_140d5eb34;
    }
    if ((iVar2 != 3) && ((ulonglong)(DAT_14c872be0 - *(longlong *)(param_1 + 0x11a0)) < 2))
    goto LAB_140d5ebb1;
LAB_140d5ebaa:
    if (iVar2 != 3) goto LAB_140d5eb57;
  }
  if (*(char *)(param_1 + 0x1182) == '\x01') {
    uVar3 = FUN_1447210f0(param_1);
    FUN_140d5ee80(&local_a8,uVar3);
  }
LAB_140d5eb57:
  if (*(longlong *)(param_1 + 0x11b0) != 0) {
    uVar3 = FUN_1401b4c98(param_1);
    lVar8 = FUN_144a61814(uVar3,(undefined8 *)(param_1 + 0x11b0));
    if (lVar8 != 0) {
      FUN_1405a424c(uVar3,*(undefined8 *)(param_1 + 0x11b0));
    }
    *(undefined8 *)(param_1 + 0x11b0) = 0;
    *(byte *)(param_1 + 0x348) = *(byte *)(param_1 + 0x348) & 0xfd;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_d8);
}



// FUNCTION 140d5ee80 FUN_140d5ee80 body=422 status=ok
// SIG undefined FUN_140d5ee80(void)

void FUN_140d5ee80(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  *(undefined1 *)(lVar2 + 0x1182) = 1;
  if (param_2 != 0) {
    if (*(longlong *)(param_2 + 0x1f0) == 0) {
      lVar5 = param_2 + 0x460;
    }
    else {
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x1f0) + 0xf8);
    }
    if (lVar2 == 0) {
      FUN_1406338de(lVar5,0);
    }
    else {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar3 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar3 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar6;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar3 = iVar6;
        }
      }
      FUN_1406338de(lVar5,CONCAT44(iVar3,uVar1));
      if (*(longlong *)(param_2 + 0x1f0) == 0) {
        puVar4 = (undefined8 *)(param_2 + 0x458);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x1f0) + 0xf0);
      }
      FUN_1410d4dde(*puVar4,lVar2);
    }
  }
  FUN_140ce5524(lVar2 + 0x11d0,0);
  lVar5 = *(longlong *)(lVar2 + 0x1c8);
  if (lVar5 != 0) {
    local_40 = lVar5;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
    }
    FUN_143e128e8(&local_40);
    FUN_14045627c(*(undefined8 *)(lVar2 + 0x1c8),0,2);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1405e47c6(lVar2,0);
  return;
}



// FUNCTION 140d5f028 FUN_140d5f028 body=1101 status=ok
// SIG undefined FUN_140d5f028(void)

void FUN_140d5f028(longlong param_1,char param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined8 **local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  undefined8 local_60;
  wchar_t *local_58;
  undefined8 *local_50;
  int local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_d8);
  }
  if (((*(byte *)(param_1 + 0x348) & 2) != 0) ||
     (((*(char *)(param_1 + 0x178) != '\x03' && ((*(byte *)(param_1 + 0x61) & 1) == 0)) &&
      ((*(byte *)(param_1 + 0x60) & 1) == 0)))) goto LAB_140d5f251;
  *(byte *)(param_1 + 0x348) = *(byte *)(param_1 + 0x348) | 2;
  local_60 = 0;
  local_58 = L"GbxDestroyActor";
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar2 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_50[2] = lVar4;
  *local_50 = &PTR_FUN_14a78db60;
  local_50[3] = 0;
  iVar3 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar3 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar3 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar3 = iVar7;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar3;
  puVar2[4] = &LAB_140b87188;
  if ((((*(uint *)(param_1 + 8) & 0x10) == 0) && (lVar8 = *(longlong *)(param_1 + 0x20), lVar8 != 0)
      ) && (-1 < (short)*(undefined4 *)(lVar8 + 8))) {
    uVar1 = *(uint *)(lVar8 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    if ((*(uint *)(lVar8 + 8) >> 0x1c & 1) != 0) goto LAB_140d5f2e3;
    if (DAT_14cae8b20 == 0) {
      local_80 = &local_40;
      local_40 = (code *)&LAB_14355090c;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_14081d0ea;
      local_88 = &LAB_147b8e16d;
      local_90 = (code *)&LAB_140810a38;
      local_98 = L"Engine";
      local_a0 = 0x800000000;
      local_a8 = 0x10000000;
      local_b0 = 8;
      local_b8 = (undefined8 **)CONCAT44(local_b8._4_4_,0x3f0);
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar8 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_80 = &local_40;
      local_40 = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_14081d0ea;
      local_88 = &LAB_1468c5283;
      local_90 = FUN_142809da0;
      local_98 = L"Engine";
      local_a0 = 0x400000000;
      local_a8 = 0x10000000;
      local_b0 = 8;
      local_b8 = (undefined8 **)CONCAT44(local_b8._4_4_,0x50);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (lVar4 == 0) goto LAB_140d5f2e3;
    iVar3 = *(int *)(lVar8 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar3) ||
         (lVar6 = lVar4,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
         lVar8 + 0x30)) {
        lVar6 = 0;
      }
    } while ((lVar6 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
    if (lVar6 == 0) goto LAB_140d5f2e3;
    uVar5 = *(undefined8 *)(lVar6 + 0xc0);
  }
  else {
LAB_140d5f2e3:
    uVar5 = 0;
  }
  local_b8 = &local_50;
  FUN_140d5f492(uVar5,4,1,&local_60);
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_140d5f251;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140d5f251:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d5f492 FUN_140d5f492 body=493 status=ok
// SIG undefined FUN_140d5f492(void)

undefined8
FUN_140d5f492(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
             undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined ***pppuVar6;
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  code *local_88;
  undefined4 local_80;
  undefined ***local_78;
  undefined **local_68;
  undefined8 local_60;
  undefined4 local_58;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((DAT_14cadbea0 != 0) && (DAT_14cadbe98 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*DAT_14cadbe98 + 0x30))(), cVar2 != '\0')) {
    plVar5 = DAT_14cadbe98;
    if (DAT_14cadbea0 == 0) {
      plVar5 = (longlong *)0x0;
    }
    local_b0 = param_5;
    local_b8 = (code **)param_4;
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_d8);
  }
  if (param_1 == 0) {
    uVar4 = FUN_1401cb356();
    local_a8 = 0;
    local_a0 = 0;
    FUN_14487d8d8(&local_a8,param_5);
    local_88 = (code *)0x0;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14a90a3b0;
    local_60 = 0;
    local_58 = 0;
    FUN_14487d8d8(&local_60,&local_a8);
    local_88 = FUN_1435090de;
    local_b8 = &local_88;
    FUN_1401cbba4(uVar4,local_98,*(undefined8 *)(param_4 + 8),0);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    if (local_88 != (code *)0x0) {
      pppuVar6 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar6 = &local_68;
      }
      (*(code *)(*pppuVar6)[2])();
    }
    FUN_1449db362(&local_a8);
  }
  else {
    if (*(longlong *)(param_1 + 0x1f0) == 0) {
      puVar3 = (undefined8 *)(param_1 + 0x458);
    }
    else {
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0xf0);
    }
    uVar4 = *puVar3;
    local_88 = (code *)0x0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,param_5);
    local_48 = 1;
    FUN_14016fdb0(uVar4,&local_a8,&local_88);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140d5f690 FUN_140d5f690 body=31 status=ok
// SIG undefined FUN_140d5f690(void)

undefined8 FUN_140d5f690(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d5f6b0 FUN_140d5f6b0 body=403 status=ok
// SIG undefined FUN_140d5f6b0(void)

undefined8 * FUN_140d5f6b0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  void *_Src;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  void *local_b8;
  int local_b0;
  longlong local_58;
  undefined8 local_50;
  int iStack_4c;
  void *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_48 = (void *)0x0;
  if (*(int *)((longlong)param_3 + 0xc) == -1) {
    local_40 = 0xffffffff00000000;
  }
  else {
    uVar1 = *(uint *)(param_3 + 1);
    _Src = (void *)*param_3;
    local_40 = CONCAT44(local_40._4_4_,uVar1);
    if ((longlong)(int)uVar1 == 0) {
      local_40 = (ulonglong)uVar1;
    }
    else {
      FUN_1446dd670(&local_48,uVar1,0);
      memcpy(local_48,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  local_58 = 0;
  local_50 = 0xffffffff00000000;
  FUN_140d5f844(local_c8,param_2,&local_58,&local_48);
  *param_1 = 0;
  *(int *)(param_1 + 1) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,local_b0,0);
    memcpy((void *)*param_1,local_b8,(longlong)local_b0 * 2);
  }
  FUN_140d5fbf2(local_c8);
  if ((iStack_4c != -1) && (local_58 != 0)) {
    FUN_1400020a8();
  }
  if ((local_40._4_4_ != -1) && (local_48 != (void *)0x0)) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d5f844 FUN_140d5f844 body=935 status=ok
// SIG undefined FUN_140d5f844(void)

undefined8 *
FUN_140d5f844(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
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
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_2 + 8) < 2) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_138);
  }
  FUN_1400b22c2(&local_108,"sip:.([^.]+).([^.]+)(?:.([a-zA-Z0-9-]+))?.@([a-zA-Z0-9.]+)");
  plVar4 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149e18f40;
  plVar2 = plVar4 + 2;
  FUN_140e202a6(DAT_14c8445d0,plVar2,&local_108,0);
  local_70 = plVar2;
  local_68 = plVar4;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_140d5ff90(local_90,&local_70,param_2);
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
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
  cVar3 = FUN_140d5fc7a(local_90);
  if (cVar3 == '\0') {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_140d5fd3a(local_90,&local_118,1);
    local_e8 = CONCAT44(uStack_114,local_118);
    uStack_e0 = CONCAT44(uStack_10c,uStack_110);
    FUN_140d5fd3a(local_90,&local_118,2);
    local_f8 = CONCAT44(uStack_114,local_118);
    uStack_f0 = CONCAT44(uStack_10c,uStack_110);
    if (*(int *)((longlong)param_4 + 0xc) != -1) {
      FUN_140d5fd3a(local_90,&local_118,2);
      iVar5 = 0;
      if (*(int *)(param_4 + 1) == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*param_4;
        iVar5 = *(int *)(param_4 + 1) + -1;
      }
      cVar3 = FUN_140b127b8(&local_118,puVar6,iVar5,1);
      if (CONCAT44(uStack_114,local_118) != 0) {
        FUN_1400020a8();
      }
      if (cVar3 != '\0') {
        iVar5 = 0;
        if (*(int *)(param_4 + 1) == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        else {
          puVar6 = (undefined2 *)*param_4;
          iVar5 = *(int *)(param_4 + 1) + -1;
        }
        FUN_140b127b8(&local_f8,puVar6,iVar5,1);
      }
    }
    FUN_140d5fd3a(local_90,&local_118,4);
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    local_108 = CONCAT44(uStack_114,local_118);
    uStack_100 = CONCAT44(uStack_10c,uStack_110);
    if (*(int *)(param_3 + 0xc) != -1) {
      FUN_144a787a6(&local_d8,param_3);
    }
    if (*(int *)((longlong)param_4 + 0xc) != -1) {
      FUN_144a787a6(&local_c8,param_4);
    }
    FUN_140d60302(&local_108);
    FUN_140d600ee(param_1,&local_108);
  }
  FUN_140d5fbf2(&local_108);
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_78 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_88 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
  plVar2 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_68 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140d5fbf2 FUN_140d5fbf2 body=136 status=ok
// SIG undefined FUN_140d5fbf2(void)

void FUN_140d5fbf2(longlong *param_1)

{
  FUN_1447a1747(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140d5fc7a FUN_140d5fc7a body=104 status=ok
// SIG undefined FUN_140d5fc7a(void)

ulonglong FUN_140d5fc7a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  bool bVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  plVar4 = *(longlong **)(lVar3 + 0x48);
  if (plVar4 == (longlong *)0x0) {
LAB_140d5fcc1:
    uVar8 = 0;
  }
  else {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_140d5fcc1;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    if (*(longlong *)(lVar3 + 0x40) == 0) {
      uVar8 = 0;
    }
    else {
      cVar6 = FUN_140d5fcf0();
      uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),cVar6 != '\0');
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
  return uVar8 & 0xffffffff;
}



// FUNCTION 140d5fcf0 FUN_140d5fcf0 body=66 status=ok
// SIG undefined FUN_140d5fcf0(void)

void FUN_140d5fcf0(longlong param_1)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x13c) < 1) {
    local_14 = 0;
    FUN_1424ab380(param_1,&local_14);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 140d5fd3a FUN_140d5fd3a body=332 status=ok
// SIG undefined FUN_140d5fd3a(void)

undefined8 FUN_140d5fd3a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x10);
  plVar10 = *(longlong **)(lVar3 + 0x48);
  bVar4 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_140d5fe5d:
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar10[1];
    do {
      if (iVar6 == 0) goto LAB_140d5fe5d;
      LOCK();
      iVar5 = (int)plVar10[1];
      bVar14 = iVar6 == iVar5;
      if (bVar14) {
        *(int *)(plVar10 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar14);
    lVar3 = *(longlong *)(lVar3 + 0x40);
    if (lVar3 != 0) {
      local_4c = 0;
      uVar7 = FUN_140d5ff10(lVar3,param_3,&local_4c);
      uVar8 = FUN_140d5fe90(lVar3,param_3,&local_4c);
      bVar4 = false;
      goto LAB_140d5fdc8;
    }
    bVar4 = false;
  }
  uVar7 = 0;
  uVar8 = 0;
LAB_140d5fdc8:
  if ((int)uVar7 < 1) {
    uVar7 = 0;
  }
  if ((int)uVar8 <= (int)uVar7) {
    uVar8 = uVar7;
  }
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x58);
  uVar11 = iVar6 - 1;
  if (iVar6 == 0) {
    uVar11 = 0;
  }
  if ((int)uVar11 <= (int)uVar7) {
    uVar7 = uVar11;
  }
  if ((int)uVar7 < 1) {
    uVar7 = 0;
  }
  uVar13 = (ulonglong)uVar7;
  uVar12 = (longlong)(int)uVar11;
  if ((longlong)(ulonglong)uVar8 < (longlong)(int)uVar11) {
    uVar12 = (ulonglong)uVar8;
  }
  if ((longlong)uVar12 < (longlong)uVar13) {
    uVar12 = uVar13;
  }
  if (iVar6 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = *(undefined2 **)(*(longlong *)(param_1 + 0x10) + 0x50);
  }
  FUN_14006620a(param_2,puVar9 + uVar13,(int)uVar12 - uVar7);
  if (!bVar4) {
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140d5fe90 FUN_140d5fe90 body=118 status=ok
// SIG undefined FUN_140d5fe90(void)

undefined4 FUN_140d5fe90(longlong param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar2 = 0xffffffff;
  if (0 < *param_3) {
    return uVar2;
  }
  if (*(char *)(param_1 + 0x82) != '\0') {
    if (-1 < param_2) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x88);
      iVar1 = *(int *)(lVar3 + 8);
      if (param_2 <= iVar1) {
        if (param_2 != 0) {
          if (iVar1 < 1) {
            lVar3 = 1;
          }
          else {
            lVar3 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x18) + (ulonglong)(param_2 - 1) * 4) +
                    1;
          }
          return *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + lVar3 * 8 + 0x10);
        }
        return *(undefined4 *)(param_1 + 0x90);
      }
    }
    *param_3 = 8;
    return uVar2;
  }
  *param_3 = 0x10302;
  return uVar2;
}



// FUNCTION 140d5ff10 FUN_140d5ff10 body=128 status=ok
// SIG undefined FUN_140d5ff10(void)

undefined4 FUN_140d5ff10(longlong param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar2 = 0xffffffff;
  if (0 < *param_3) {
    return uVar2;
  }
  if (0 < *(int *)(param_1 + 0x13c)) {
    *param_3 = *(int *)(param_1 + 0x13c);
    return uVar2;
  }
  if (*(char *)(param_1 + 0x82) == '\0') {
    *param_3 = 0x10302;
    return uVar2;
  }
  if (-1 < param_2) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x88);
    iVar1 = *(int *)(lVar3 + 8);
    if (param_2 <= iVar1) {
      if (param_2 != 0) {
        if (iVar1 < 1) {
          lVar3 = 0;
        }
        else {
          lVar3 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x18) + (ulonglong)(param_2 - 1) * 4);
        }
        return *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + lVar3 * 8 + 0x10);
      }
      return *(undefined4 *)(param_1 + 0x88);
    }
  }
  *param_3 = 8;
  return uVar2;
}



// FUNCTION 140d5ff90 FUN_140d5ff90 body=126 status=ok
// SIG undefined FUN_140d5ff90(void)

undefined8 * FUN_140d5ff90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  *param_1 = uVar3;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    uVar3 = *param_1;
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149e18f60;
  FUN_140d6000e(puVar2 + 2,uVar3,param_3);
  param_1[2] = puVar2 + 2;
  param_1[3] = puVar2;
  return param_1;
}



// FUNCTION 140d6000e FUN_140d6000e body=223 status=ok
// SIG undefined FUN_140d6000e(void)

undefined8 * FUN_140d6000e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 1) = 2;
  FUN_140e20829(param_3,param_1,1);
  uVar3 = DAT_14c8445d0;
  plVar6 = (longlong *)param_2[1];
  if (plVar6 == (longlong *)0x0) {
LAB_140d600c7:
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar6[1];
    do {
      if (iVar5 == 0) goto LAB_140d600c7;
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
  }
  uVar7 = 0;
  if (plVar6 != (longlong *)0x0) {
    uVar7 = *param_2;
  }
  FUN_140d60634(uVar3,param_1 + 8,uVar7,param_1);
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
  param_1[10] = 0;
  iVar5 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 0xb) = iVar5;
  if ((longlong)iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar5,0);
    memcpy((void *)param_1[10],_Src,(longlong)iVar5 * 2);
  }
  return param_1;
}



// FUNCTION 140d600ee FUN_140d600ee body=532 status=ok
// SIG undefined FUN_140d600ee(void)

undefined8 * FUN_140d600ee(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  pvVar2 = (void *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  uVar3 = param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 0xc,iVar1,0);
    FUN_140b8566a(param_1[0xc],uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 140d60302 FUN_140d60302 body=816 status=ok
// SIG undefined FUN_140d60302(void)

ulonglong FUN_140d60302(longlong param_1)

{
  wchar_t wVar1;
  bool bVar2;
  wchar_t *pwVar3;
  int iVar4;
  char cVar5;
  size_t sVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  wchar_t *_Str;
  longlong *plVar11;
  wchar_t *pwVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  uint local_e4;
  longlong local_e0;
  int local_d8;
  longlong *local_60;
  longlong *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(param_1 + 0x38) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)(param_1 + 0x30);
    local_60 = (longlong *)0x0;
    if (_Str == (wchar_t *)0x0) {
      bVar2 = false;
      goto LAB_140d6049b;
    }
  }
  local_60 = (longlong *)0x0;
  sVar6 = wcslen(_Str);
  local_e4 = 0;
  local_f0 = (longlong *)CONCAT44(local_f0._4_4_,0x7fffffff);
  uVar8 = sVar6 & 0xffffffff;
  pwVar12 = _Str;
  do {
    iVar9 = (int)uVar8;
    if (iVar9 < 1) {
LAB_140d60407:
      local_50 = local_e4;
      uVar7 = local_e4 + 1;
      if (uVar7 < 0x81) goto LAB_140d60424;
      FUN_1446efa72(&local_60,0,uVar7,1);
      local_f0 = local_60;
      goto LAB_140d60426;
    }
    wVar1 = *pwVar12;
    uVar7 = (uint)(ushort)wVar1;
    pwVar3 = pwVar12 + 1;
    uVar10 = iVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        cVar5 = FUN_140024707(uVar7,&local_e4,&local_f0);
        if (cVar5 != '\0') goto LAB_140d60407;
        break;
      }
      if (((ushort)*pwVar3 & 0xfc00) == 0xdc00) {
        uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar3 + 0xfca02400;
        uVar10 = iVar9 - 2;
        pwVar3 = pwVar12 + 2;
      }
    }
    pwVar12 = pwVar3;
    cVar5 = FUN_140024707(uVar7,&local_e4,&local_f0);
    uVar8 = (ulonglong)uVar10;
  } while (cVar5 != '\0');
  local_50 = 0xffffffff;
  uVar7 = 0;
LAB_140d60424:
  local_f0 = (longlong *)0x0;
LAB_140d60426:
  if (local_f0 == (longlong *)0x0) {
    local_f0 = &local_e0;
  }
  iVar9 = (int)sVar6 + 1;
  local_e4 = uVar7;
  local_58 = local_f0;
  do {
    if (iVar9 < 1) break;
    wVar1 = *_Str;
    uVar7 = (uint)(ushort)wVar1;
    pwVar12 = _Str + 1;
    iVar4 = iVar9 + -1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (iVar9 == 1) {
        FUN_1400247af(uVar7,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar12 & 0xfc00) == 0xdc00) {
        uVar7 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar12 + 0xfca02400;
        pwVar12 = _Str + 2;
        iVar4 = iVar9 + -2;
      }
    }
    iVar9 = iVar4;
    _Str = pwVar12;
    cVar5 = FUN_1400247af(uVar7,&local_f0,&local_e4);
  } while (cVar5 != '\0');
  bVar2 = 0x3f < (int)local_50;
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140d6049b:
  uVar8 = 0;
  if ((1 < *(int *)(param_1 + 0x28)) && (1 < *(int *)(param_1 + 8))) {
    iVar9 = *(int *)(param_1 + 0x18) + -1;
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar9 = 0;
    }
    if (!bVar2 && *(int *)(param_1 + 0x28) + iVar9 + -1 < 0x7d) {
      plVar11 = &local_e0;
      FUN_1400b22c2(plVar11,
                    "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890=+-_.!~()%");
      uVar7 = *(int *)(param_1 + 0x18) - 1;
      if (*(int *)(param_1 + 0x18) == 0) {
        uVar7 = 0;
      }
      uVar8 = 0;
      if (0 < (int)uVar7) {
        uVar8 = (ulonglong)uVar7;
      }
      uVar14 = 0;
      while (uVar13 = uVar8, uVar14 != uVar8) {
        if (local_d8 == 0) {
          uVar13 = 0;
          break;
        }
        plVar11 = (longlong *)0x0;
        while (uVar13 = uVar14,
              *(short *)(local_e0 + (longlong)plVar11) !=
              *(short *)(*(longlong *)(param_1 + 0x10) + uVar14 * 2)) {
          plVar11 = (longlong *)((longlong)plVar11 + 2);
          if ((longlong *)((longlong)local_d8 * 2) == plVar11) goto LAB_140d60550;
        }
        plVar11 = (longlong *)~(ulonglong)plVar11;
        uVar14 = uVar14 + 1;
        if (((ulonglong)plVar11 & 0x1fffffffe) == 0) break;
      }
LAB_140d60550:
      uVar8 = CONCAT71((int7)((ulonglong)plVar11 >> 8),(longlong)(int)uVar7 <= (longlong)uVar13);
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 140d60634 FUN_140d60634 body=1172 status=ok
// SIG undefined FUN_140d60634(void)

ulonglong * FUN_140d60634(longlong param_1,ulonglong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  undefined1 auStack_98 [32];
  longlong *local_78;
  int local_6c;
  longlong *local_68;
  ulonglong *local_60;
  ulonglong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_3 == 0) || (param_4 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
  }
  local_58 = local_58 & 0xffffffff00000000;
  uVar13 = FUN_140d60ad0(param_3,param_4);
  plVar14 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar14[1] = (longlong)&DAT_100000001;
  *plVar14 = (longlong)&PTR_FUN_149e18f20;
  plVar14[2] = uVar13;
  if (uVar13 == 0) goto LAB_140d6084d;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  plVar19 = (longlong *)(param_1 + 0xa0);
  local_60 = param_2;
  if (*(int *)(param_1 + 0xd4) == 0) {
    iVar20 = *(int *)(param_1 + 0xa8);
    *(int *)(param_1 + 0xa8) = iVar20 + 1;
    if (*(int *)(param_1 + 0xac) == iVar20) {
      FUN_14482b872(plVar19,iVar20);
    }
    lVar18 = (longlong)iVar20;
    iVar17 = FUN_144a54ea4(param_1 + 0xb0,1);
    lVar15 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar15 = param_1 + 0xb0;
    }
    iVar10 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar10 = iVar17;
    }
    bVar7 = (byte)iVar17 & 0x1f;
    puVar3 = (uint *)(lVar15 + (longlong)(iVar10 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar20 = *(int *)(param_1 + 0xd0);
    lVar18 = (longlong)iVar20;
    iVar17 = *(int *)(*(longlong *)(param_1 + 0xa0) + 4 + lVar18 * 0x18);
    *(int *)(param_1 + 0xd0) = iVar17;
    iVar10 = *(int *)(param_1 + 0xd4) + -1;
    *(int *)(param_1 + 0xd4) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar17 * 0x18) = 0xffffffff;
    }
  }
  lVar15 = param_1 + 0xb0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar15 = *(longlong *)(param_1 + 0xc0);
  }
  iVar17 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar17 = iVar20;
  }
  puVar3 = (uint *)(lVar15 + (longlong)(iVar17 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar20 & 0x1f);
  puVar4 = (ulonglong *)(*(longlong *)(param_1 + 0xa0) + lVar18 * 0x18);
  *puVar4 = uVar13;
  puVar4[1] = (ulonglong)plVar14;
  if (plVar14 == (longlong *)0x0) {
    *(undefined4 *)(puVar4 + 2) = 0xffffffff;
    uVar16 = uVar13;
  }
  else {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    uVar16 = *puVar4;
    plVar6 = (longlong *)puVar4[1];
    *(undefined4 *)(puVar4 + 2) = 0xffffffff;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        local_78 = plVar19;
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar19 = local_78;
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          plVar19 = local_78;
        }
      }
    }
  }
  uVar11 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  iVar17 = 1;
  if (*(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xd4) == 1) {
    uVar12 = 1;
    iVar17 = 1;
LAB_140d607d8:
    if (((int)uVar12 < 1) || (iVar17 <= *(int *)(param_1 + 0xe8))) {
      uVar11 = *(int *)(param_1 + 0xe8) - 1U & uVar11;
      *(uint *)((longlong)puVar4 + 0x14) = uVar11;
      lVar15 = *(longlong *)(param_1 + 0xe0);
      if (*(longlong *)(param_1 + 0xe0) == 0) {
        lVar15 = param_1 + 0xd8;
      }
      *(undefined4 *)(puVar4 + 2) =
           *(undefined4 *)
            (lVar15 + ((longlong)*(int *)(param_1 + 0xe8) - 1U & (longlong)(int)uVar11) * 4);
      lVar15 = *(longlong *)(param_1 + 0xe0);
      if (*(longlong *)(param_1 + 0xe0) == 0) {
        lVar15 = param_1 + 0xd8;
      }
      *(int *)(lVar15 + ((longlong)*(int *)(param_1 + 0xe8) - 1U & (longlong)(int)uVar11) * 4) =
           iVar20;
    }
    else {
      *(int *)(param_1 + 0xe8) = iVar17;
      FUN_1457a06f6(plVar19);
    }
  }
  else {
    local_58 = *puVar4;
    local_50 = (longlong *)puVar4[1];
    local_78 = plVar19;
    if (local_50 == (longlong *)0x0) {
      local_6c = FUN_1467d77da(plVar19,uVar11,&local_58);
    }
    else {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      local_68 = local_50;
      local_6c = FUN_1467d77da(plVar19,uVar11);
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar19 = local_68 + 1;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)*plVar19 == 0) {
          (**(code **)*local_68)();
          LOCK();
          piVar2 = (int *)((longlong)local_68 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
        }
      }
    }
    if (local_6c == -1) {
      uVar12 = *(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xd4);
      plVar19 = local_78;
      if (3 < uVar12) {
        uVar16 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
        lVar15 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar17 = 1 << ((byte)lVar15 & 0x1f);
      }
      goto LAB_140d607d8;
    }
    puVar5 = (undefined4 *)(*local_78 + (longlong)local_6c * 0x18);
    plVar19 = *(longlong **)(puVar5 + 2);
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar19 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar2 = (int *)((longlong)plVar19 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
    uVar8 = *(undefined4 *)((longlong)puVar4 + 4);
    uVar16 = puVar4[1];
    uVar9 = *(undefined4 *)((longlong)puVar4 + 0xc);
    *puVar5 = (int)*puVar4;
    puVar5[1] = uVar8;
    puVar5[2] = (int)uVar16;
    puVar5[3] = uVar9;
    FUN_140d22d04(local_78,iVar20);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  param_2 = local_60;
LAB_140d6084d:
  *param_2 = uVar13;
  param_2[1] = (ulonglong)plVar14;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar19 = plVar14 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140d60ad0 FUN_140d60ad0 body=125 status=ok
// SIG undefined FUN_140d60ad0(void)

longlong FUN_140d60ad0(longlong param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_3 < 1) {
    iVar1 = *(int *)(param_1 + 0x78);
    if (iVar1 < 1) {
      lVar2 = thunk_FUN_1424da030(0x148);
      if (lVar2 != 0) {
        FUN_1424aa100(lVar2,param_1);
        *(int *)(lVar2 + 0x13c) = *param_3;
        FUN_1424b4780(lVar2,param_2);
        return lVar2;
      }
      iVar1 = 7;
    }
    *param_3 = iVar1;
  }
  return 0;
}



// FUNCTION 140d60b50 Unwind@140d60b50 body=36 status=ok
// SIG undefined Unwind@140d60b50(void)

void Unwind_140d60b50(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 140d60b7c FUN_140d60b7c body=127 status=ok
// SIG undefined FUN_140d60b7c(void)

undefined8 * FUN_140d60b7c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144805d84(param_1,uVar1);
  *param_1 = &PTR_FUN_14b11b770;
  param_1[5] = &PTR_LAB_14b11bbf0;
  param_1[6] = &PTR_LAB_14b11bc30;
  param_1[0x22] = &PTR_LAB_14b11bc80;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(byte *)((longlong)param_1 + 0x9c) = *(byte *)((longlong)param_1 + 0x9c) | 0x40;
  FUN_140b967fa(param_1,1);
  return param_1;
}



// FUNCTION 140d60c0a FUN_140d60c0a body=40 status=ok
// SIG undefined FUN_140d60c0a(void)

undefined8 FUN_140d60c0a(undefined8 param_1,int param_2)

{
  FUN_140d60c32();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140d60c32 FUN_140d60c32 body=267 status=ok
// SIG undefined FUN_140d60c32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d60c32(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b84cd00;
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_140d60d3d(param_1[0x2a],*(undefined4 *)(param_1 + 0x2b));
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000140d60cfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140d60d3d FUN_140d60d3d body=49 status=ok
// SIG undefined FUN_140d60d3d(void)

void FUN_140d60d3d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140d60d6e FUN_140d60d6e body=173 status=ok
// SIG undefined FUN_140d60d6e(void)

void FUN_140d60d6e(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140d60e1c();
  FUN_1408256d2(param_1 + 0x790);
  if (*(longlong *)(param_1 + 0x778) != 0) {
    FUN_14033a7c0();
    FUN_140b3e76a(param_1 + 0x778);
  }
  *(undefined8 *)(param_1 + 0x768) = 0;
  plVar3 = *(longlong **)(param_1 + 0x770);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x770) = 0;
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
  *(undefined1 *)(param_1 + 0x735) = 0;
  *(undefined8 *)(param_1 + 0x738) = 0;
  *(undefined4 *)(param_1 + 0x744) = 0;
  FUN_1448c4a0e(param_1,param_2);
  return;
}



// FUNCTION 140d60e1c FUN_140d60e1c body=135 status=ok
// SIG undefined FUN_140d60e1c(void)

void FUN_140d60e1c(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(char *)((longlong)param_1 + 0x734) == '\x01') && (param_1[0xed] != 0)) {
    lVar1 = param_1[0x16];
    if (lVar1 == 0) {
      lVar1 = FUN_1448abda6(param_1);
    }
    plVar2 = (longlong *)FUN_140a3d526(lVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x2c8))(plVar2,param_1);
    }
    if ((int)param_1[0xe7] != 0) {
      (**(code **)(*param_1 + 0xa18))(param_1);
    }
    if (*(int *)((longlong)param_1 + 0x73c) != 0) {
      (**(code **)(*param_1 + 0xa08))(param_1);
    }
    *(undefined1 *)((longlong)param_1 + 0x734) = 0;
  }
  return;
}



// FUNCTION 140d60ea4 FUN_140d60ea4 body=459 status=ok
// SIG undefined FUN_140d60ea4(void)

void FUN_140d60ea4(longlong param_1,longlong param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_98 [42];
  byte local_6e;
  byte local_6d;
  int local_6c;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    local_4c = 0;
    local_50 = *(uint *)(param_2 + 0xc);
    if ((int)local_50 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((local_50 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_50 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar4 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar4 = *(int *)(lVar10 + 0x10);
      bVar13 = iVar4 == 0;
      if (bVar13) {
        *(int *)(lVar10 + 0x10) = iVar11;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar4 = iVar11;
      }
    }
    iVar11 = *(int *)(param_1 + 0x68);
    lVar10 = (longlong)iVar11;
    local_4c = iVar4;
    if (lVar10 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x60);
      local_60 = param_1;
      bVar2 = FUN_140d61070(lVar6,&local_50);
      local_58 = lVar6 + 8;
      iVar4 = 0;
      iVar7 = 0;
      local_68 = lVar6;
      do {
        local_6e = bVar2;
        local_6d = local_6e ^ 1;
        lVar6 = (longlong)iVar7;
        iVar1 = iVar7 + 1;
        if (iVar7 + 1 < iVar11) {
          iVar1 = iVar11;
        }
        lVar12 = local_58 + lVar6 * 8;
        bVar2 = local_6e & 1;
        iVar8 = iVar7;
        lVar5 = lVar6;
        local_6c = iVar4;
        do {
          lVar5 = lVar5 + 1;
          iVar9 = iVar1;
          if (lVar10 <= lVar5) break;
          bVar3 = FUN_140d61070(lVar12,&local_50);
          iVar8 = iVar8 + 1;
          lVar12 = lVar12 + 8;
          iVar9 = iVar8;
        } while (bVar2 == bVar3);
        iVar4 = local_6c;
        if ((local_6e & 1) == 0) {
          if (local_6c != iVar7) {
            memmove((void *)(local_68 + (longlong)local_6c * 8),(void *)(local_68 + lVar6 * 8),
                    (longlong)(iVar9 - iVar7) << 3);
          }
          iVar4 = iVar4 + (iVar9 - iVar7);
        }
        iVar7 = iVar9;
        bVar2 = local_6d;
      } while (lVar5 < lVar10);
      *(int *)(local_60 + 0x68) = iVar4;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d61070 FUN_140d61070 body=104 status=ok
// SIG undefined FUN_140d61070(void)

ulonglong FUN_140d61070(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 == *param_2) && (uVar2 == param_2[1])) {
    uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
  }
  else {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)))) &&
       ((*(uint *)(lVar4 + 0x10) == uVar2 && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar3 = FUN_144729dda(param_2);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// FUNCTION 140d610d8 FUN_140d610d8 body=192 status=ok
// SIG undefined FUN_140d610d8(void)

void FUN_140d610d8(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140d61428();
  *(undefined8 *)(param_1 + 0x28e8) = 0;
  FUN_1401cb356();
  local_28 = *(undefined8 *)(param_1 + 0x27e0);
  local_20 = *(longlong *)(param_1 + 0x27e8);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_28);
  FUN_140d614ce(param_1 + 0x2858);
  FUN_140db05e8(param_1 + 0x2838,0);
  if ((*(longlong *)(param_1 + 0x2918) != 0) && (*(longlong *)(param_1 + 0x2908) != 0)) {
    FUN_14480f766(*(longlong *)(param_1 + 0x2908) + 0x88);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140d6119a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d6119a FUN_140d6119a body=440 status=ok
// SIG undefined FUN_140d6119a(void)

void FUN_140d6119a(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  FUN_140c2cbec(param_1 + 0x203,param_1);
  puVar6 = *(undefined4 **)(param_1 + 0x1e20);
  if (puVar6 != (undefined4 *)0x0) {
    do {
      FUN_145cfd944(param_1 + 0x1dc0,*puVar6);
      puVar6 = *(undefined4 **)(param_1 + 0x1e20);
    } while (puVar6 != (undefined4 *)0x0);
  }
  plVar3 = *(longlong **)(param_1 + 0x1da8);
  plVar4 = *(longlong **)(param_1 + 0x1db0);
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
  if (plVar3 != (longlong *)0x0) {
    lVar5 = FUN_1447210f0(param_1);
    bVar7 = false;
    if ((param_2 == 3) && (lVar5 != 0)) {
      bVar7 = (*(byte *)(lVar5 + 0x155) & 0x20) == 0;
    }
    (**(code **)(*plVar3 + 0x18))(plVar3,bVar7);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  lVar5 = *(longlong *)(param_1 + 0x2370);
  if (lVar5 != 0) {
    if (*(char *)(lVar5 + 0x18) == '\x01') {
      *(undefined1 *)(lVar5 + 0x18) = 0;
      FUN_140cd522c(lVar5 + 8);
    }
    *(undefined1 *)(lVar5 + 0x590) = 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x1da0);
  if (((lVar5 != 0) && (*(char *)(lVar5 + 0x3a8) == '\x01')) && (*(char *)(lVar5 + 0x31a) == '\x01')
     ) {
    *(undefined8 *)(param_1 + 0x1eb8) = 0;
    FUN_1406398aa(param_1 + 0x1ed0,0);
  }
  if ((*(char *)(param_1 + 0x178) == '\x03') && (*(longlong *)(param_1 + 0x2590) != 0)) {
    FUN_14480f766(param_1 + 0x1a60);
    *(undefined8 *)(param_1 + 0x2590) = 0;
  }
  FUN_140c2cc50(param_1 + 0x1d40);
  *(undefined8 *)(param_1 + 0x2500) = 0;
  FUN_140283eaa(param_1 + 0x2568,0);
  FUN_1414948cc(param_1,param_2);
  return;
}



// FUNCTION 140d61352 FUN_140d61352 body=214 status=ok
// SIG undefined FUN_140d61352(void)

void FUN_140d61352(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  DWORD DVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    lVar4 = *param_1;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140d613cc;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar10 = iVar6 == iVar5;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar10);
    if (lVar4 != 0) {
      uVar9 = *(ulonglong *)(lVar4 + 0x58);
      do {
        LOCK();
        uVar8 = *(ulonglong *)(lVar4 + 0x58);
        bVar10 = uVar9 == uVar8;
        if (bVar10) {
          *(ulonglong *)(lVar4 + 0x58) = uVar9 | 1;
          uVar8 = uVar9;
        }
        UNLOCK();
        uVar9 = uVar8;
      } while (!bVar10);
      while ((uVar8 >> 0x20 != 0 && (DVar7 = GetCurrentThreadId(), DVar7 != (DWORD)(uVar8 >> 0x20)))
            ) {
        uVar8 = *(ulonglong *)(lVar4 + 0x58);
      }
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
LAB_140d613cc:
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    plVar3 = (longlong *)param_1[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140d613ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 140d61428 FUN_140d61428 body=165 status=ok
// SIG undefined FUN_140d61428(void)

void FUN_140d61428(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x2750) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x2748);
    if (cVar1 != '\0') {
      if (*(longlong *)(param_1 + 0x2750) == 0) {
        return;
      }
      cVar1 = FUN_144729dda(param_1 + 0x2748);
      if (cVar1 == '\0') {
        return;
      }
      plVar3 = *(longlong **)(param_1 + 0x2750);
      goto LAB_140d614b8;
    }
  }
  if (*(char *)(param_1 + 0x27dc) == '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x2770);
    if (lVar2 == 0) {
      return;
    }
    plVar3 = (longlong *)(lVar2 + 0x3b48);
  }
  else {
    lVar2 = (**(code **)(*(longlong *)(param_1 + 0x2600) + 0x20))(param_1 + 0x2600);
    if (*(longlong *)(lVar2 + 0x18) == 0) {
      return;
    }
    plVar3 = *(longlong **)(lVar2 + 0x20);
  }
LAB_140d614b8:
  if (plVar3 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d614c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x58))(plVar3);
  return;
}



// FUNCTION 140d614ce FUN_140d614ce body=493 status=ok
// SIG undefined FUN_140d614ce(void)

void FUN_140d614ce(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  undefined1 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((((*(int *)(param_1 + 0x24) == 0) || (uVar1 = *(uint *)(param_1 + 0x20), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((puVar4 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       puVar4 == (undefined8 *)0x0 || (*(int *)(puVar4 + 2) != *(int *)(param_1 + 0x24))))) ||
     ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)) goto LAB_140d61656;
  if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
    uVar3 = *puVar4;
  }
  else {
    uVar3 = 0;
  }
  lVar2 = FUN_1447210f0(uVar3);
  if (lVar2 == 0) goto LAB_140d61656;
  if (*(int *)(param_1 + 0x24) == 0) {
LAB_140d6167d:
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x20);
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(int *)(puVar4 + 2) != *(int *)(param_1 + 0x24) ||
          ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)))) goto LAB_140d6167d;
      uVar3 = *puVar4;
    }
  }
  FUN_1447210f0(uVar3);
  local_38 = (undefined1 *)0x0;
  local_30 = 0x1800000000;
  if (*(int *)(param_1 + 0x24) == 0) {
LAB_140d61684:
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x20);
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(int *)(puVar4 + 2) != *(int *)(param_1 + 0x24) ||
          ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)))) goto LAB_140d61684;
      uVar3 = *puVar4;
    }
  }
  FUN_140696bce(uVar3,local_f8,0);
  puVar5 = local_38;
  if (local_38 == (undefined1 *)0x0) {
    puVar5 = local_f8;
  }
  lVar2 = (longlong)(int)local_30;
  if (lVar2 != 0) {
    lVar6 = 0;
    do {
      FUN_1488c7db8(param_1,*(undefined8 *)(puVar5 + lVar6));
      lVar6 = lVar6 + 8;
    } while (lVar2 * 8 != lVar6);
  }
  if (local_38 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_140d61656:
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d616bc FUN_140d616bc body=53 status=ok
// SIG undefined FUN_140d616bc(void)

void FUN_140d616bc(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_14072b1fe();
  if (param_3 == 1) {
    FUN_140d616f2(param_2,param_1);
    return;
  }
  return;
}



// FUNCTION 140d616f2 FUN_140d616f2 body=1258 status=ok
// SIG undefined FUN_140d616f2(void)

void FUN_140d616f2(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  byte bVar18;
  byte extraout_AL;
  int iVar19;
  undefined7 uVar22;
  ulonglong uVar20;
  undefined7 extraout_var;
  undefined8 *puVar21;
  uint uVar23;
  uint uVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_a0;
  undefined1 local_98 [24];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar30 = param_1[0xcc];
  if ((lVar30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar30);
  }
  lVar26 = *(longlong *)(param_2 + 0x1d0);
  if ((lVar26 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar26);
  }
  if (lVar30 != lVar26) goto LAB_140d61a16;
  iVar28 = *(int *)(param_2 + 0x1f0);
  if ((*(char *)((longlong)param_1 + 0x1fb) == '\0') ||
     (((((lVar30 = param_1[0x16], lVar30 == 0 && (lVar30 = FUN_1448abda6(param_1), lVar30 == 0)) ||
        (*(longlong *)(lVar30 + 0x30) == 0)) ||
       ((lVar30 = *(longlong *)(*(longlong *)(lVar30 + 0x30) + 0x2b0), lVar30 == 0 ||
        ((*(byte *)(lVar30 + 0x39e) & 0x10) == 0)))) &&
      (*(char *)((longlong)param_1 + 0x2cf) == '\x01')))) {
    pcVar4 = *(code **)(*param_1 + 0x808);
    plVar25 = (longlong *)0x1401a1200;
    bVar18 = 1;
    uVar22 = 0x1448ac7;
    if (pcVar4 != (code *)&LAB_1401a122a && pcVar4 != (code *)&LAB_1448ac798) {
      plVar25 = param_1;
      (*pcVar4)(param_1);
      bVar18 = extraout_AL;
      uVar22 = extraout_var;
    }
    bVar18 = bVar18 ^ 1 | iVar28 < 2;
    if (bVar18 == 0) {
      auVar10._8_8_ =
           -(ulonglong)
            (0.0010000000474974513 < ABS(*(double *)(param_2 + 0x188) - (double)param_1[0x4d]));
      auVar10._0_8_ =
           -(ulonglong)
            (0.0010000000474974513 < ABS(*(double *)(param_2 + 0x180) - (double)param_1[0x4c]));
      iVar19 = movmskpd((int)CONCAT71(uVar22,bVar18),auVar10);
      auVar8._8_8_ = -(ulonglong)
                      (0.0010000000474974513 <
                      ABS(*(double *)(param_2 + 0x198) - (double)param_1[0x4f]));
      auVar8._0_8_ = -(ulonglong)
                      (0.0010000000474974513 <
                      ABS(*(double *)(param_2 + 400) - (double)param_1[0x4e]));
      uVar23 = movmskpd((int)CONCAT71((int7)((ulonglong)plVar25 >> 8),iVar28 < 2),auVar8);
      if ((uVar23 & 0x3fffffff) == 0 && iVar19 == 0) {
        lVar30 = -(ulonglong)
                  (0.0010000000474974513 < ABS(*(double *)(param_2 + 0x168) - (double)param_1[0x49])
                  );
        auVar13._8_4_ = (int)lVar30;
        auVar13._0_8_ =
             -(ulonglong)
              (0.0010000000474974513 < ABS(*(double *)(param_2 + 0x160) - (double)param_1[0x48]));
        auVar13._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
        uVar23 = movmskpd(iVar19,auVar13);
        lVar30 = -(ulonglong)
                  (0.0010000000474974513 < ABS(*(double *)(param_2 + 0x178) - (double)param_1[0x4b])
                  );
        auVar12._8_4_ = (int)lVar30;
        auVar12._0_8_ =
             -(ulonglong)
              (0.0010000000474974513 < ABS(*(double *)(param_2 + 0x170) - (double)param_1[0x4a]));
        auVar12._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
        iVar19 = movmskpd(0,auVar12);
        uVar24 = iVar19 << 2 | uVar23;
        if (uVar24 != 0) {
          auVar11._8_8_ =
               -(ulonglong)
                (0.0010000000474974513 < ABS(*(double *)(param_2 + 0x168) + (double)param_1[0x49]));
          auVar11._0_8_ =
               -(ulonglong)
                (0.0010000000474974513 < ABS(*(double *)(param_2 + 0x160) + (double)param_1[0x48]));
          uVar23 = movmskpd(uVar23,auVar11);
          auVar9._8_8_ = -(ulonglong)
                          (0.0010000000474974513 <
                          ABS(*(double *)(param_2 + 0x178) + (double)param_1[0x4b]));
          auVar9._0_8_ = -(ulonglong)
                          (0.0010000000474974513 <
                          ABS(*(double *)(param_2 + 0x170) + (double)param_1[0x4a]));
          uVar24 = movmskpd(uVar24,auVar9);
          if ((uVar24 & 0x3fffffff) != 0 || uVar23 != 0) goto LAB_140d6199a;
        }
        auVar7._8_8_ = -(ulonglong)
                        (0.0010000000474974513 <
                        ABS(*(double *)(param_2 + 0x1a8) - (double)param_1[0x51]));
        auVar7._0_8_ = -(ulonglong)
                        (0.0010000000474974513 <
                        ABS(*(double *)(param_2 + 0x1a0) - (double)param_1[0x50]));
        iVar19 = movmskpd(uVar23,auVar7);
        lVar30 = -(ulonglong)
                  (0.0010000000474974513 < ABS(*(double *)(param_2 + 0x1b8) - (double)param_1[0x53])
                  );
        auVar6._8_4_ = (int)lVar30;
        auVar6._0_8_ = -(ulonglong)
                        (0.0010000000474974513 <
                        ABS(*(double *)(param_2 + 0x1b0) - (double)param_1[0x52]));
        auVar6._12_4_ = (int)((ulonglong)lVar30 >> 0x20);
        uVar23 = movmskpd(0,auVar6);
        if ((uVar23 & 0x3fffffff) == 0 && iVar19 == 0) {
          uVar20 = (ulonglong)(uint)(iVar28 / 2);
          FUN_143719d02(param_1,uVar20,iVar28 / 2);
          lVar30 = 0;
          lVar26 = 0;
          do {
            lVar27 = param_1[0xd5];
            puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x1e8) + lVar30);
            uVar17 = puVar21[1];
            *(undefined8 *)(lVar27 + lVar26) = *puVar21;
            ((undefined8 *)(lVar27 + lVar26))[1] = uVar17;
            puVar1 = (undefined4 *)(*(longlong *)(param_2 + 0x1e8) + 0x10 + lVar30);
            uVar14 = puVar1[1];
            uVar15 = puVar1[2];
            uVar16 = puVar1[3];
            puVar2 = (undefined4 *)(param_1[0xd5] + 0x10 + lVar26);
            *puVar2 = *puVar1;
            puVar2[1] = uVar14;
            puVar2[2] = uVar15;
            puVar2[3] = uVar16;
            lVar26 = lVar26 + 0xa0;
            lVar30 = lVar30 + 0x20;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
      }
    }
  }
LAB_140d6199a:
  if (((*(byte *)((longlong)param_1 + 0x674) & 4) != 0) &&
     ((*(byte *)((longlong)param_1 + 0x676) & 2) != 0)) {
    FUN_140719760(local_98,param_1,0);
    if (param_1 != (longlong *)0x0) {
      FUN_143719d02(param_1,*(undefined4 *)(param_2 + 0x1e0),(int)param_1[0xd6]);
      iVar28 = (int)param_1[0xd6];
      if (0 < iVar28) {
        lVar30 = 8;
        lVar26 = 1;
        lVar27 = 0;
        lVar29 = 0;
        do {
          if (lVar26 < *(int *)(param_2 + 0x1f0)) {
            lVar5 = param_1[0xd5];
            puVar21 = (undefined8 *)(*(longlong *)(param_2 + 0x1e8) + lVar27);
            uVar17 = puVar21[1];
            puVar3 = (undefined8 *)(lVar5 + -0x10 + lVar30 * 2);
            *puVar3 = *puVar21;
            puVar3[1] = uVar17;
            puVar2 = (undefined4 *)(*(longlong *)(param_2 + 0x1e8) + 0x10 + lVar27);
            uVar14 = puVar2[1];
            uVar15 = puVar2[2];
            uVar16 = puVar2[3];
            puVar1 = (undefined4 *)(lVar5 + lVar30 * 2);
            *puVar1 = *puVar2;
            puVar1[1] = uVar14;
            puVar1[2] = uVar15;
            puVar1[3] = uVar16;
            iVar28 = (int)param_1[0xd6];
          }
          lVar29 = lVar29 + 1;
          lVar30 = lVar30 + 0x50;
          lVar27 = lVar27 + 0x20;
          lVar26 = lVar26 + 2;
        } while (lVar29 < iVar28);
      }
      if (0 < *(int *)(param_2 + 0x1e0)) {
        lVar30 = 0;
        lVar26 = 0;
        do {
          lVar27 = *(longlong *)(param_2 + 0x1d8);
          iVar28 = *(int *)(lVar27 + 0x20 + lVar30);
          if ((-1 < (longlong)iVar28) && (iVar28 < (int)param_1[0xd6])) {
            local_a0 = param_1[0xd5];
            lVar29 = (longlong)iVar28 * 0xa0;
            FUN_147a2f73c(param_1);
            if ((*(longlong *)(local_a0 + 0x40 + lVar29) == 0) &&
               (0 < *(int *)(lVar27 + 0x18 + lVar30))) {
              lVar29 = local_a0 + lVar29;
              FUN_147a2f6e4(lVar29 + 0x30,lVar27 + lVar30);
              puVar21 = (undefined8 *)FUN_14001cc68(0x40,0x10);
              *(undefined4 *)(puVar21 + 1) = 0xffffffff;
              *(undefined2 *)((longlong)puVar21 + 0xc) = 0x105;
              *(undefined1 *)((longlong)puVar21 + 0xe) = 0;
              puVar21[2] = 0;
              *puVar21 = &PTR_FUN_14aa61a50;
              puVar21[3] = 0;
              puVar21[4] = 0;
              puVar21[5] = 0;
              puVar21[6] = 0;
              *(undefined1 *)(puVar21 + 7) = 1;
              *(undefined8 **)(lVar29 + 0x40) = puVar21;
              local_a8 = 1;
              FUN_147cc774a(puVar21,*(undefined8 *)(lVar27 + 0x10 + lVar30),
                            *(undefined4 *)(lVar27 + 0x18 + lVar30),4);
              FUN_140308182(*(undefined8 *)(lVar29 + 0x40),0);
            }
          }
          lVar26 = lVar26 + 1;
          lVar30 = lVar30 + 0x28;
        } while (lVar26 < *(int *)(param_2 + 0x1e0));
      }
    }
    FUN_14071963e(local_98);
  }
  FUN_14349ead6(param_1 + 0xd7,param_2 + 0x1f8);
LAB_140d61a16:
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d61bde FUN_140d61bde body=70 status=ok
// SIG undefined FUN_140d61bde(void)

void FUN_140d61bde(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_4 - param_3 != 0 && param_3 <= param_4) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    lVar3 = 0;
    do {
      FUN_140d61c24(uVar2,*(undefined4 *)((longlong)param_3 * 4 + lVar1 + lVar3));
      lVar3 = lVar3 + 4;
    } while ((ulonglong)(uint)(param_4 - param_3) << 2 != lVar3);
  }
  return;
}



// FUNCTION 140d61c24 FUN_140d61c24 body=4608 status=ok
// SIG undefined FUN_140d61c24(void)

void FUN_140d61c24(longlong param_1,int param_2)

{
  float fVar1;
  undefined8 uVar2;
  char cVar3;
  float *pfVar4;
  longlong *plVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  char *pcVar15;
  longlong lVar16;
  double *pdVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  float fVar41;
  float fVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined4 uVar46;
  float fVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  float fVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auStack_1a8 [36];
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar20 = *(longlong *)(param_1 + 0x58);
  lVar16 = (longlong)param_2;
  lVar13 = lVar16 * 0x50;
  *(undefined8 *)(lVar20 + 0x10 + lVar13) = 0;
  *(undefined8 *)(lVar20 + lVar13) = 0;
  ((undefined8 *)(lVar20 + lVar13))[1] = 0;
  *(undefined8 *)(lVar20 + 0x48 + lVar13) = 0;
  lVar20 = *(longlong *)(param_1 + 0xa0);
  lVar12 = lVar16 * 0x60;
  lVar13 = *(longlong *)(param_1 + 0xb0);
  *(undefined8 *)(lVar20 + 0x18 + lVar12) = 0;
  *(undefined8 *)(lVar20 + 0x30 + lVar12) = 0;
  *(longlong *)(lVar20 + 0x50 + lVar12) = lVar16 * 0x10c + lVar13;
  *(undefined8 *)(lVar20 + 0x58 + lVar12) = 0x100000000;
  *(undefined8 *)(lVar20 + 0x10 + lVar12) = 0x3f800000;
  pfVar4 = *(float **)(*(longlong *)(param_1 + 0x78) + lVar16 * 8);
  if ((pfVar4[0x4d] <= 1.1754944e-38) ||
     (pcVar15 = (char *)(lVar16 * 0x88 + *(longlong *)(param_1 + 0x48)), *pcVar15 != '\x01'))
  goto LAB_140d629ec;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x28) + lVar16 * 8);
  uVar22 = 0;
  uVar25 = 0x3ff00000;
  uVar46 = 0;
  uVar48 = 0;
  uVar26 = 0;
  uVar28 = 0;
  uVar29 = 0;
  uVar31 = 0;
  dVar34 = 0.0;
  dVar38 = 0.0;
  dVar43 = 0.0;
  uVar30 = 0;
  uVar32 = 0;
  pdVar17 = (double *)(lVar16 * 0x18 + *(longlong *)(param_1 + 0x38));
  bVar21 = *(byte *)((longlong)plVar5 + 0xc) < 2;
  uVar49 = uVar22;
  uVar51 = uVar25;
  if (!bVar21 && plVar5 != (longlong *)0x0) {
    lVar13 = *plVar5;
    lVar19 = (longlong)(int)plVar5[1];
    cVar3 = *(char *)(*(longlong *)(lVar13 + 0x2c0) + 0xb + lVar19 * 0x10);
    if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
      lVar6 = *(longlong *)(lVar13 + 0x3f8);
      lVar18 = lVar19 * 0x20;
      uVar26 = (undefined4)*(undefined8 *)(lVar6 + lVar18);
      uVar28 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + lVar18) >> 0x20);
      uVar2 = *(undefined8 *)(lVar6 + 8 + lVar18);
      uVar29 = (undefined4)uVar2;
      uVar31 = (undefined4)((ulonglong)uVar2 >> 0x20);
      dVar34 = *(double *)(lVar6 + 0x10 + lVar18);
      uVar2 = *(undefined8 *)(lVar6 + 0x18 + lVar18);
      uVar49 = (undefined4)uVar2;
      uVar51 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      uVar49 = 0;
      uVar51 = 0x3ff00000;
    }
    if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
      lVar13 = *(longlong *)(lVar13 + 0x3e0);
      dVar38 = *(double *)(lVar13 + lVar19 * 0x18);
      dVar43 = *(double *)(lVar13 + 8 + lVar19 * 0x18);
      uVar2 = *(undefined8 *)(lVar13 + 0x10 + lVar19 * 0x18);
      uVar30 = (undefined4)uVar2;
      uVar32 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
  }
  dVar10 = pdVar17[2] - (double)CONCAT44(uVar32,uVar30);
  dVar38 = *pdVar17 - dVar38;
  dVar43 = pdVar17[1] - dVar43;
  dVar9 = (double)CONCAT44(uVar31,uVar29) * dVar38 - (double)CONCAT44(uVar28,uVar26) * dVar43;
  dVar39 = (double)CONCAT44(uVar28,uVar26) * dVar10 - dVar34 * dVar38;
  dVar11 = dVar34 * dVar43 - (double)CONCAT44(uVar31,uVar29) * dVar10;
  dVar9 = dVar9 + dVar9;
  dVar39 = dVar39 + dVar39;
  dVar11 = dVar11 + dVar11;
  if (bVar21 || plVar5 == (longlong *)0x0) {
    uVar30 = 0;
    uVar32 = 0;
    dVar35 = 0.0;
  }
  else {
    cVar3 = *(char *)(*(longlong *)(*plVar5 + 0x2c0) + 0xb + (longlong)(int)plVar5[1] * 0x10);
    if (cVar3 != '\x04') {
      uVar30 = 0;
      uVar32 = 0;
      dVar35 = 0.0;
      if (cVar3 != '\x01') goto LAB_140d61f3e;
    }
    lVar13 = *(longlong *)(*plVar5 + 0x3f8);
    lVar19 = (longlong)(int)plVar5[1] * 0x20;
    uVar46 = (undefined4)*(undefined8 *)(lVar13 + lVar19);
    uVar48 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + lVar19) >> 0x20);
    uVar2 = *(undefined8 *)(lVar13 + 8 + lVar19);
    uVar30 = (undefined4)uVar2;
    uVar32 = (undefined4)((ulonglong)uVar2 >> 0x20);
    dVar35 = *(double *)(lVar13 + 0x10 + lVar19);
    uVar2 = *(undefined8 *)(lVar13 + 0x18 + lVar19);
    uVar22 = (undefined4)uVar2;
    uVar25 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
LAB_140d61f3e:
  puVar14 = (undefined8 *)(lVar20 + lVar12);
  dVar8 = ((double)CONCAT44(uVar31,uVar29) * dVar11 - (double)CONCAT44(uVar28,uVar26) * dVar39) +
          (double)CONCAT44(uVar51,uVar49) * dVar9 + dVar10;
  dVar7 = (double)CONCAT44(uVar51,uVar49) * dVar39 + dVar43 +
          ((double)CONCAT44(uVar28,uVar26) * dVar9 - dVar11 * dVar34);
  dVar10 = (double)CONCAT44(uVar51,uVar49) * dVar11 + dVar38 +
           (dVar39 * dVar34 - dVar9 * (double)CONCAT44(uVar31,uVar29));
  dVar34 = *(double *)(pcVar15 + 0x40);
  dVar38 = *(double *)(pcVar15 + 0x48);
  dVar43 = *(double *)(pcVar15 + 0x50);
  dVar9 = (double)CONCAT44(uVar32,uVar30) * dVar34 - (double)CONCAT44(uVar48,uVar46) * dVar38;
  dVar11 = (double)CONCAT44(uVar48,uVar46) * dVar43 - dVar35 * dVar34;
  dVar39 = dVar35 * dVar38 - (double)CONCAT44(uVar32,uVar30) * dVar43;
  dVar9 = dVar9 + dVar9;
  dVar11 = dVar11 + dVar11;
  dVar39 = dVar39 + dVar39;
  dVar43 = ((double)CONCAT44(uVar32,uVar30) * dVar39 - (double)CONCAT44(uVar48,uVar46) * dVar11) +
           (double)CONCAT44(uVar25,uVar22) * dVar9 + dVar43;
  dVar38 = ((double)CONCAT44(uVar48,uVar46) * dVar9 - dVar39 * dVar35) +
           (double)CONCAT44(uVar25,uVar22) * dVar11 + dVar38;
  dVar34 = (dVar11 * dVar35 - dVar9 * (double)CONCAT44(uVar32,uVar30)) +
           (double)CONCAT44(uVar25,uVar22) * dVar39 + dVar34;
  fVar23 = pfVar4[4];
  fVar27 = pfVar4[5];
  fVar33 = pfVar4[6];
  lVar20 = lVar16 * 0x160 + *(longlong *)(param_1 + 0xc0);
  if ((((fVar23 != 0.0) || (NAN(fVar23))) || (fVar27 != 0.0)) ||
     (((NAN(fVar27) || (fVar33 != 0.0)) || (NAN(fVar33))))) {
    local_e8 = (double)fVar33;
    local_f0 = (double)fVar27;
    local_f8 = (double)fVar23;
    FUN_14013720c(&local_118,pfVar4 + 0x30,&local_f8,0x3ff0000000000000);
  }
  else {
    local_118 = *(double *)(pfVar4 + 0x30);
    dStack_110 = *(double *)(pfVar4 + 0x32);
    local_108 = *(double *)(pfVar4 + 0x34);
    dStack_100 = *(double *)(pfVar4 + 0x36);
  }
  dVar9 = local_118 * dVar7 - dVar10 * dStack_110;
  dVar11 = local_108 * dVar10 - dVar8 * local_118;
  dVar39 = dStack_110 * dVar8 - dVar7 * local_108;
  dVar9 = dVar9 + dVar9;
  dVar11 = dVar11 + dVar11;
  dVar39 = dVar39 + dVar39;
  dVar35 = (local_118 * dVar11 - dVar39 * dStack_110) + dStack_100 * dVar9 + dVar8;
  dVar44 = (local_108 * dVar39 - dVar9 * local_118) + dStack_100 * dVar11 + dVar7;
  dVar40 = (dStack_110 * dVar9 - dVar11 * local_108) + dVar39 * dStack_100 + dVar10;
  dVar10 = local_118 * dVar38 - dVar34 * dStack_110;
  dVar9 = local_108 * dVar34 - dVar43 * local_118;
  dVar39 = dStack_110 * dVar43 - dVar38 * local_108;
  dVar10 = dVar10 + dVar10;
  dVar9 = dVar9 + dVar9;
  dVar39 = dVar39 + dVar39;
  dVar11 = (local_118 * dVar9 - dVar39 * dStack_110) + dStack_100 * dVar10 + dVar43;
  dVar7 = (local_108 * dVar39 - dVar10 * local_118) + dStack_100 * dVar9 + dVar38;
  dVar9 = (dStack_110 * dVar10 - dVar9 * local_108) + dVar39 * dStack_100 + dVar34;
  dVar10 = (((double)pfVar4[2] + *(double *)(pfVar4 + 0x48) + dVar35) - *(double *)(pcVar15 + 0x68))
           * dVar11 +
           (((double)*pfVar4 + *(double *)(pfVar4 + 0x44) + dVar40) - *(double *)(pcVar15 + 0x58)) *
           dVar9 + (((double)pfVar4[1] + *(double *)(pfVar4 + 0x46) + dVar44) -
                   *(double *)(pcVar15 + 0x60)) * dVar7;
  dVar45 = *(double *)(pcVar15 + 0x30) - dVar10;
  dVar34 = *(double *)(pcVar15 + 0x78);
  dVar38 = *(double *)(pcVar15 + 0x70);
  dVar43 = *(double *)(pcVar15 + 0x80);
  dVar39 = dVar10 * dVar11 + *(double *)(pcVar15 + 0x68);
  dVar8 = dVar7 * dVar10 + *(double *)(pcVar15 + 0x60);
  dVar10 = dVar9 * dVar10 + *(double *)(pcVar15 + 0x58);
  *(double *)(lVar20 + 0x110) = dVar10;
  *(double *)(lVar20 + 0x118) = dVar8;
  *(double *)(lVar20 + 0x120) = dVar39;
  *(double *)(lVar20 + 0xf8) = dVar10;
  *(double *)(lVar20 + 0x100) = dVar8;
  *(double *)(lVar20 + 0x108) = dVar39;
  puVar14[3] = pfVar4;
  puVar14[6] = lVar20;
  puVar14[4] = &DAT_3f8000003f800000;
  *(undefined4 *)(puVar14 + 5) = 0x3f800000;
  puVar14[7] = &DAT_3f8000003f800000;
  *(undefined4 *)(puVar14 + 8) = 0x3f800000;
  *puVar14 = 0;
  puVar14[1] = 0;
  if (*(int *)(puVar14 + 0xb) < *(int *)((longlong)puVar14 + 0x5c)) {
    *(int *)(puVar14 + 0xb) = *(int *)(puVar14 + 0xb) + 1;
  }
  fVar23 = (float)*(double *)(pcVar15 + 0x80);
  fVar47 = (float)*(double *)(pcVar15 + 0x78);
  fVar41 = (float)*(double *)(pcVar15 + 0x70);
  fVar33 = (float)dVar35;
  fVar27 = (float)dVar44;
  fVar36 = (float)dVar40;
  pfVar4 = (float *)puVar14[10];
  *pfVar4 = fVar36;
  pfVar4[1] = fVar27;
  pfVar4[2] = fVar33;
  pfVar4[3] = 0.0;
  pfVar4[4] = 0.0;
  pfVar4[5] = 0.0;
  pfVar4[6] = fVar41;
  pfVar4[7] = fVar47;
  pfVar4[8] = fVar23;
  pfVar4[9] = 0.0;
  pfVar4[10] = 0.0;
  pfVar4[0xb] = 0.0;
  pfVar4[0xc] = 0.0;
  pfVar4[0xd] = 0.0;
  pfVar4[0xe] = 0.0;
  pfVar4[0xf] = -(float)(dVar45 * dVar11 * dVar43 +
                        dVar9 * dVar45 * dVar38 + dVar7 * dVar45 * dVar34);
  pfVar4[0x10] = 0.0;
  pfVar4[0x11] = 0.0;
  pfVar4[0x12] = 0.0;
  pfVar4[0x13] = fVar27 * fVar23 - fVar33 * fVar47;
  pfVar4[0x14] = fVar33 * fVar41 - fVar36 * fVar23;
  pfVar4[0x15] = fVar36 * fVar47 - fVar27 * fVar41;
  fVar53 = fVar36 * 0.0 + fVar27 * -0.0;
  fVar36 = fVar33 * 0.0 + fVar36 * -0.0;
  fVar27 = fVar27 * 0.0 + fVar33 * -0.0;
  pfVar4[0x19] = fVar27;
  pfVar4[0x1a] = fVar36;
  pfVar4[0x1b] = fVar53;
  pfVar4[0x1c] = fVar27;
  pfVar4[0x1d] = fVar36;
  pfVar4[0x1e] = fVar53;
  local_168 = 0.0;
  pfVar4[0x16] = fVar23 * 0.0 + fVar47 * -0.0;
  pfVar4[0x17] = fVar41 * 0.0 + fVar23 * -0.0;
  pfVar4[0x18] = fVar47 * 0.0 + fVar41 * -0.0;
  pfVar4[0x41] = 0.0;
  pfVar4[0x1f] = 0.0;
  pfVar4[0x20] = 0.0;
  pfVar4[0x21] = 0.0;
  pfVar4[0x22] = 0.0;
  pfVar4[0x23] = 0.0;
  pfVar4[0x24] = 0.0;
  pfVar4[0x3a] = 0.0;
  pfVar4[0x3b] = 0.0;
  pfVar4[0x3c] = 0.0;
  pfVar4[0x3d] = 0.0;
  pfVar4[0x3e] = 0.0;
  pfVar4[0x3f] = 0.0;
  lVar20 = puVar14[3];
  fVar27 = *(float *)(puVar14 + 4) * *(float *)(puVar14 + 5) * *(float *)(lVar20 + 0x134);
  fVar33 = 0.0;
  fVar41 = 0.0;
  fVar36 = 0.0;
  local_134 = 0.0;
  local_15c = 0.0;
  local_164 = 0.0;
  local_158 = 0.0;
  local_160 = 0.0;
  local_138 = 0.0;
  fVar23 = 0.0;
  if (1.1754944e-38 < fVar27) {
    local_138 = *(float *)(puVar14 + 5) * *(float *)((longlong)puVar14 + 0x24);
    fVar33 = *(float *)(lVar20 + 0x68) * local_138;
    local_134 = *(float *)(lVar20 + 0x58) * local_138;
    local_158 = *(float *)(lVar20 + 0x48) * local_138;
    fVar41 = *(float *)(lVar20 + 100) * local_138;
    local_15c = *(float *)(lVar20 + 0x54) * local_138;
    local_160 = *(float *)(lVar20 + 0x44) * local_138;
    fVar36 = *(float *)(lVar20 + 0x60) * local_138;
    local_164 = *(float *)(lVar20 + 0x50) * local_138;
    local_138 = local_138 * *(float *)(lVar20 + 0x40);
    fVar23 = fVar27;
  }
  lVar20 = puVar14[6];
  fVar47 = *(float *)(puVar14 + 7) * *(float *)(puVar14 + 8) * *(float *)(lVar20 + 0x134);
  local_154 = 0.0;
  local_16c = 0.0;
  local_180 = 0.0;
  local_178 = 0.0;
  local_170 = 0.0;
  local_184 = 0.0;
  local_17c = 0.0;
  local_174 = 0.0;
  fVar27 = 0.0;
  if (1.1754944e-38 < fVar47) {
    local_168 = *(float *)(puVar14 + 8) * *(float *)((longlong)puVar14 + 0x3c);
    local_174 = *(float *)(lVar20 + 0x68) * local_168;
    local_170 = *(float *)(lVar20 + 0x58) * local_168;
    local_16c = *(float *)(lVar20 + 0x48) * local_168;
    local_17c = *(float *)(lVar20 + 100) * local_168;
    local_178 = *(float *)(lVar20 + 0x54) * local_168;
    local_154 = *(float *)(lVar20 + 0x44) * local_168;
    local_184 = *(float *)(lVar20 + 0x60) * local_168;
    local_180 = *(float *)(lVar20 + 0x50) * local_168;
    local_168 = local_168 * *(float *)(lVar20 + 0x40);
    fVar27 = fVar47;
  }
  *(float *)(puVar14 + 9) = fVar23;
  *(float *)((longlong)puVar14 + 0x4c) = fVar27;
  if (0 < *(int *)(puVar14 + 0xb)) {
    lVar20 = 1;
    lVar13 = 0xe4;
    fVar47 = fVar23;
    while( true ) {
      lVar12 = puVar14[10];
      if (fVar47 <= 1.1754944e-38) {
        fVar58 = 0.0;
        fVar47 = 0.0;
        fVar53 = 0.0;
      }
      else {
        local_144 = *(float *)(lVar12 + -0x98 + lVar13);
        local_140 = *(float *)(lVar12 + -0x94 + lVar13);
        local_148 = *(float *)(lVar12 + -0x90 + lVar13);
        fVar54 = fVar33 * local_148 + fVar36 * local_144 + fVar41 * local_140;
        fVar52 = local_134 * local_148 + local_164 * local_144 + local_15c * local_140;
        fVar53 = local_158 * local_148 + local_138 * local_144 + local_160 * local_140;
        *(float *)(lVar12 + -0x50 + lVar13) = fVar53;
        *(float *)(lVar12 + -0x4c + lVar13) = fVar52;
        *(float *)(lVar12 + -0x48 + lVar13) = fVar54;
        local_150 = *(float *)(lVar12 + -0x80 + lVar13);
        local_14c = *(float *)(lVar12 + -0x7c + lVar13);
        fVar47 = *(float *)(lVar12 + -0x78 + lVar13);
        fVar24 = fVar33 * fVar47 + fVar36 * local_150 + fVar41 * local_14c;
        fVar42 = local_134 * fVar47 + local_164 * local_150 + local_15c * local_14c;
        fVar50 = local_158 * fVar47 + local_138 * local_150 + local_160 * local_14c;
        *(float *)(lVar12 + -0x44 + lVar13) = fVar50;
        *(float *)(lVar12 + -0x40 + lVar13) = fVar42;
        *(float *)(lVar12 + -0x3c + lVar13) = fVar24;
        fVar58 = *(float *)(lVar12 + -0x74 + lVar13);
        fVar37 = *(float *)(lVar12 + -0x70 + lVar13);
        fVar1 = *(float *)(lVar12 + -0x6c + lVar13);
        fVar57 = fVar33 * fVar1 + fVar36 * fVar58 + fVar41 * fVar37;
        fVar56 = local_134 * fVar1 + local_164 * fVar58 + local_15c * fVar37;
        fVar59 = local_158 * fVar1 + local_138 * fVar58 + local_160 * fVar37;
        *(float *)(lVar12 + -0x38 + lVar13) = fVar59;
        *(float *)(lVar12 + -0x34 + lVar13) = fVar56;
        *(float *)(lVar12 + -0x30 + lVar13) = fVar57;
        fVar53 = fVar54 * local_148 + fVar53 * local_144 + fVar52 * local_140 + fVar23;
        fVar47 = fVar24 * fVar47 + fVar50 * local_150 + fVar42 * local_14c + fVar23;
        fVar58 = fVar57 * fVar1 + fVar59 * fVar58 + fVar56 * fVar37 + fVar23;
      }
      fVar37 = fVar53;
      if (1.1754944e-38 < *(float *)((longlong)puVar14 + 0x4c)) {
        local_14c = *(float *)(lVar12 + -0x8c + lVar13);
        local_144 = *(float *)(lVar12 + -0x88 + lVar13);
        local_148 = *(float *)(lVar12 + -0x84 + lVar13);
        fVar60 = local_174 * local_148 + local_184 * local_14c + local_17c * local_144;
        fVar59 = local_170 * local_148 + local_180 * local_14c + local_178 * local_144;
        fVar37 = local_16c * local_148 + local_168 * local_14c + local_154 * local_144;
        *(float *)(lVar12 + -0x2c + lVar13) = fVar37;
        *(float *)(lVar12 + -0x28 + lVar13) = fVar59;
        *(float *)(lVar12 + -0x24 + lVar13) = fVar60;
        local_150 = *(float *)(lVar12 + -0x68 + lVar13);
        local_128 = *(float *)(lVar12 + -100 + lVar13);
        local_124 = *(float *)(lVar12 + -0x60 + lVar13);
        fVar52 = local_174 * local_124 + local_184 * local_150 + local_17c * local_128;
        fVar54 = local_170 * local_124 + local_180 * local_150 + local_178 * local_128;
        fVar50 = local_16c * local_124 + local_168 * local_150 + local_154 * local_128;
        *(float *)(lVar12 + -0x20 + lVar13) = fVar50;
        *(float *)(lVar12 + -0x1c + lVar13) = fVar54;
        *(float *)(lVar12 + -0x18 + lVar13) = fVar52;
        fVar1 = *(float *)(lVar12 + -0x5c + lVar13);
        fVar24 = *(float *)(lVar12 + -0x58 + lVar13);
        fVar42 = *(float *)(lVar12 + -0x54 + lVar13);
        fVar55 = local_174 * fVar42 + local_184 * fVar1 + local_17c * fVar24;
        fVar56 = local_170 * fVar42 + local_180 * fVar1 + local_178 * fVar24;
        fVar57 = local_16c * fVar42 + local_168 * fVar1 + local_154 * fVar24;
        fVar37 = fVar53 + fVar60 * local_148 + fVar37 * local_14c + fVar59 * local_144 + fVar27;
        fVar47 = fVar47 + fVar52 * local_124 + fVar50 * local_150 + fVar54 * local_128 + fVar27;
        *(float *)(lVar12 + -0x14 + lVar13) = fVar57;
        *(float *)(lVar12 + -0x10 + lVar13) = fVar56;
        *(float *)(lVar12 + -0xc + lVar13) = fVar55;
        fVar58 = fVar58 + fVar55 * fVar42 + fVar57 * fVar1 + fVar56 * fVar24 + fVar27;
        local_140 = fVar53;
      }
      *(uint *)(lVar12 + -8 + lVar13) = -(uint)(1e-08 < fVar37) & (uint)(1.0 / fVar37);
      *(uint *)(lVar12 + -4 + lVar13) = -(uint)(1e-08 < fVar47) & (uint)(1.0 / fVar47);
      *(uint *)(lVar12 + lVar13) = -(uint)(1e-08 < fVar58) & (uint)(1.0 / fVar58);
      local_13c = fVar36;
      local_130 = fVar41;
      local_12c = fVar33;
      local_120 = fVar27;
      local_11c = fVar23;
      if (*(int *)(puVar14 + 0xb) <= lVar20) break;
      fVar47 = *(float *)(puVar14 + 9);
      lVar20 = lVar20 + 1;
      lVar13 = lVar13 + 0x10c;
    }
  }
LAB_140d629ec:
  if ((local_e0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d62e34 FUN_140d62e34 body=77 status=ok
// SIG undefined FUN_140d62e34(void)

undefined8 * FUN_140d62e34(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab90cd0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_140595c52(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 140d62e94 FUN_140d62e94 body=48 status=ok
// SIG undefined FUN_140d62e94(void)

void FUN_140d62e94(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b3e86bc);
  FUN_140b3d6e0(param_1,param_2);
  return;
}



// FUNCTION 140d62ec4 FUN_140d62ec4 body=103 status=ok
// SIG undefined FUN_140d62ec4(void)

ulonglong FUN_140d62ec4(longlong param_1)

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
LAB_140d62f0e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140d62f0e;
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



// FUNCTION 140d62f2c FUN_140d62f2c body=31 status=ok
// SIG undefined FUN_140d62f2c(void)

void FUN_140d62f2c(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140d62f4c(param_2);
  FUN_1402a7054(param_1,uVar1);
  return;
}



// FUNCTION 140d62f4c FUN_140d62f4c body=78 status=ok
// SIG undefined FUN_140d62f4c(void)

undefined1 FUN_140d62f4c(longlong *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 8))();
    lVar3 = FUN_140a1ada8();
    uVar1 = 1;
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      uVar1 = *(undefined1 *)((longlong)param_1 + 0x9e);
    }
  }
  return uVar1;
}



// FUNCTION 140d62f9a FUN_140d62f9a body=83 status=ok
// SIG undefined FUN_140d62f9a(void)

undefined8 * FUN_140d62f9a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a47b380;
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



// FUNCTION 140d62fee FUN_140d62fee body=79 status=ok
// SIG undefined FUN_140d62fee(void)

void FUN_140d62fee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(lVar1 + 0x48) = 0;
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140e95266(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 140d6303e FUN_140d6303e body=87 status=ok
// SIG undefined FUN_140d6303e(void)

void FUN_140d6303e(undefined8 *param_1,byte param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    piVar1 = (int *)*param_1;
    lVar2 = (longlong)*(int *)(param_1 + 1) * 0x50;
    do {
      if ((-1 < *piVar1) && ((*(byte *)(piVar1 + 0x12) | param_2) == 1)) {
        FUN_140d63096(param_1,piVar1);
      }
      piVar1 = piVar1 + 0x14;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  return;
}



// FUNCTION 140d63096 FUN_140d63096 body=279 status=ok
// SIG undefined FUN_140d63096(void)

void FUN_140d63096(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = (ulonglong)(*param_2 & 0xffff);
  lVar5 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(*param_2 >> 0x10) * 8);
  lVar4 = *(longlong *)(param_2 + 0xe);
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  uVar1 = param_2[0x10];
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  if ((DAT_14c75ec9c & *(uint *)(lVar5 + 8 + uVar6 * 0x18)) == 0) {
    uVar2 = *(uint *)(lVar5 + uVar6 * 0x18 + 0xc);
    uVar3 = param_2[4];
    if ((longlong)(int)uVar3 != 0) {
      lVar5 = *(longlong *)(param_2 + 2);
      lVar7 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(DAT_14c9647c8 + (ulonglong)(*(uint *)(lVar5 + lVar7) >> 0x10) * 8) + 0xc +
         (ulonglong)(*(uint *)(lVar5 + lVar7) & 0xffff) * 0x18) = 0;
        lVar7 = lVar7 + 4;
      } while ((longlong)(int)uVar3 * 4 != lVar7);
    }
    FUN_140d631ae(param_1,~uVar2);
  }
  if (uVar1 != 0) {
    lVar7 = 0;
    lVar5 = DAT_14c9647c8;
    do {
      uVar2 = *(uint *)(*(longlong *)(lVar5 + (ulonglong)(*(uint *)(lVar4 + lVar7) >> 0x10) * 8) +
                        0xc + (ulonglong)(*(uint *)(lVar4 + lVar7) & 0xffff) * 0x18);
      if (uVar2 != 0) {
        FUN_140d63096(param_1,(longlong)(int)~uVar2 * 0x50 + *param_1);
        lVar5 = DAT_14c9647c8;
      }
      lVar7 = lVar7 + 4;
    } while ((longlong)(int)uVar1 * 4 != lVar7);
  }
  if (lVar4 != 0) {
    FUN_1400020a8(lVar4);
    return;
  }
  return;
}



// FUNCTION 140d631ae FUN_140d631ae body=654 status=ok
// SIG undefined FUN_140d631ae(void)

void FUN_140d631ae(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  bool bVar16;
  
  uVar2 = *(uint *)(*param_1 + (longlong)param_2 * 0x50);
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar6 = 0;
  }
  piVar7 = (int *)(*param_1 + (longlong)param_2 * 0x50);
  *(undefined4 *)(lVar6 + 0xc) = 0;
  do {
    uVar2 = *(uint *)(lVar6 + 8);
    if ((uVar2 >> 0x18 & 1) == 0) break;
    LOCK();
    bVar16 = uVar2 == *(uint *)(lVar6 + 8);
    if (bVar16) {
      *(uint *)(lVar6 + 8) = uVar2 & 0xfeffffff;
    }
    UNLOCK();
  } while (!bVar16);
  if ((longlong)piVar7[8] != 0) {
    puVar15 = *(uint **)(piVar7 + 6);
    puVar1 = puVar15 + piVar7[8];
    do {
      uVar2 = *puVar15;
      if ((-1 < (int)uVar2) &&
         (uVar2 = *(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8) + 0xc +
                           (ulonglong)(uVar2 & 0xffff) * 0x18), (int)uVar2 < 0)) {
        lVar6 = (ulonglong)~uVar2 * 0x50;
        iVar3 = *(int *)(*param_1 + 0x40 + lVar6);
        lVar11 = (longlong)iVar3;
        if (lVar11 != 0) {
          lVar6 = *param_1 + lVar6;
          piVar4 = *(int **)(lVar6 + 0x38);
          iVar10 = 0;
          bVar16 = *piVar4 == *piVar7;
          iVar12 = 0;
          do {
            lVar8 = (longlong)iVar12;
            lVar9 = lVar8;
            iVar13 = iVar12;
            iVar5 = iVar12 + 1;
            if (iVar12 + 1 < iVar3) {
              iVar5 = iVar3;
            }
            do {
              lVar9 = lVar9 + 1;
              iVar14 = iVar5;
              if (lVar11 <= lVar9) break;
              iVar14 = iVar13 + 1;
              iVar13 = iVar14;
            } while (bVar16 == (piVar4[lVar9] == *piVar7));
            if (bVar16 == false) {
              if (iVar10 != iVar12) {
                memmove(piVar4 + iVar10,piVar4 + lVar8,(longlong)(iVar14 - iVar12) << 2);
              }
              iVar10 = iVar10 + (iVar14 - iVar12);
            }
            bVar16 = (bool)(bVar16 ^ 1);
            iVar12 = iVar14;
          } while (lVar9 < lVar11);
          *(int *)(lVar6 + 0x40) = iVar10;
        }
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar1);
  }
  *piVar7 = -1;
  if (piVar7[5] < 0) {
    piVar7[4] = 0;
    FUN_14481578e(piVar7 + 2,0);
  }
  else {
    piVar7[4] = 0;
  }
  if (piVar7[0xd] < 0) {
    piVar7[0xc] = 0;
    FUN_14481578e(piVar7 + 10,0);
  }
  else {
    piVar7[0xc] = 0;
  }
  piVar7[8] = 0;
  if (piVar7[9] < 0) {
    FUN_14481578e(piVar7 + 6,0);
  }
  if (piVar7[0x11] < 0) {
    piVar7[0x10] = 0;
    FUN_14481578e(piVar7 + 0xe,0);
  }
  else {
    piVar7[0x10] = 0;
  }
  *(undefined1 *)(piVar7 + 0x12) = 0;
  iVar3 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar3 + 1U) {
    FUN_1446f48e2(param_1 + 2,iVar3);
  }
  *(int *)(param_1[2] + (longlong)iVar3 * 4) = param_2;
  *(int *)(param_1 + 4) = (int)param_1[4] + -1;
  return;
}



// FUNCTION 140d6343c FUN_140d6343c body=1535 status=ok
// SIG undefined FUN_140d6343c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d6343c(longlong param_1,float param_2)

{
  char cVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  double *pdVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  double dVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_138 [32];
  longlong *local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  bVar5 = true;
  if (*(int *)(param_1 + 0x524) == 0) {
LAB_140d639c1:
    plVar9 = (longlong *)0x0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x520);
    plVar9 = (longlong *)0x0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         ((((int)plVar9[2] != *(int *)(param_1 + 0x524) ||
           ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) ||
          (plVar9 = (longlong *)*plVar9, plVar9 == (longlong *)0x0)))) goto LAB_140d639c1;
      if ((*(uint *)(plVar9 + 1) >> 0x1e & 1) == 0) {
        *(longlong *)(param_1 + 0x138) = plVar9[0x2e5];
        uVar12 = *(undefined4 *)((longlong)plVar9 + 0x171c);
        lVar7 = plVar9[0x2e4];
        uVar14 = *(undefined4 *)((longlong)plVar9 + 0x1724);
        *(int *)(param_1 + 0x128) = (int)plVar9[0x2e3];
        *(undefined4 *)(param_1 + 300) = uVar12;
        *(int *)(param_1 + 0x130) = (int)lVar7;
        *(undefined4 *)(param_1 + 0x134) = uVar14;
      }
      bVar5 = false;
    }
  }
  FUN_1407b3c86(param_1);
  if (((param_1 == 0) || (bVar5 || ((byte)((uint)*(undefined4 *)(param_1 + 8) >> 0x1e) & 1) != 0))
     || ((char)plVar9[0x2f] != '\x03')) goto LAB_140d63547;
  cVar1 = (char)plVar9[0x2c8];
  if (cVar1 == '\x01') {
    cVar1 = *(char *)((longlong)plVar9 + 0x1641);
  }
  fVar11 = (float)FUN_14053bc50(plVar9,cVar1);
  if (0.0 < fVar11) {
    (**(code **)(*plVar9 + 0x6f0))(plVar9,&local_a8);
    lVar7 = plVar9[0x39];
    if (lVar7 == 0) {
      pdVar6 = (double *)&DAT_14c8464e0;
      uVar12 = (undefined4)DAT_14c8464f0;
      uVar14 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar12 = (undefined4)*(undefined8 *)(lVar7 + 0x270);
      uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x270) >> 0x20);
      pdVar6 = (double *)(lVar7 + 0x260);
    }
    local_98 = local_98 - (double)CONCAT44(uVar14,uVar12);
    fVar13 = (float)(local_98 * local_98 +
                    (local_a8 - *pdVar6) * (local_a8 - *pdVar6) +
                    (dStack_a0 - pdVar6[1]) * (dStack_a0 - pdVar6[1]));
    if ((fVar13 <= fVar11 * fVar11 & (*(byte *)(plVar9 + 0x2e6) ^ 1)) == 0) {
      if (fVar13 <= fVar11 * fVar11 || (*(byte *)(plVar9 + 0x2e6) ^ 1) != 0) goto LAB_140d63663;
      lVar7 = 0x728;
    }
    else {
      lVar7 = 0x720;
    }
    (**(code **)(*plVar9 + lVar7))(plVar9);
  }
LAB_140d63663:
  pdVar6 = (double *)&DAT_14c846480;
  if (plVar9[0x39] != 0) {
    pdVar6 = (double *)(plVar9[0x39] + 0x240);
  }
  dVar24 = *pdVar6;
  dVar25 = pdVar6[1];
  dVar3 = pdVar6[2];
  dVar4 = pdVar6[3];
  dVar15 = (double)plVar9[0x318] * -1.0;
  dVar19 = (double)plVar9[0x319] * 1.0;
  dVar16 = (double)plVar9[0x316];
  dVar26 = (double)plVar9[0x316];
  dVar22 = (double)plVar9[0x317];
  dVar23 = (double)plVar9[0x317];
  local_a8 = dVar25 * dVar15 * -1.0 + ((dVar24 * dVar19 - dVar4 * dVar16 * 1.0) - dVar3 * dVar22);
  dStack_a0 = dVar24 * dVar15 * 1.0 + ((dVar25 * dVar19 - dVar3 * dVar26 * -1.0) - dVar4 * dVar23);
  local_98 = dVar4 * dVar15 * 1.0 + dVar22 * dVar24 + (dVar19 * dVar3 - dVar16 * dVar25 * 1.0);
  dStack_90 = dVar3 * dVar15 * -1.0 + dVar23 * dVar25 + (dVar19 * dVar4 - dVar26 * dVar24 * -1.0);
  fVar11 = 0.0001;
  if (0.0001 <= param_2) {
    fVar11 = param_2;
  }
  FUN_1448052ee(&local_a8,&local_c0);
  dVar16 = (double)(1.0 / fVar11);
  plVar9[0x31a] = (longlong)(dVar16 * local_c0);
  plVar9[0x31b] = (longlong)(local_b8 * dVar16);
  plVar9[0x31c] = (longlong)(local_b0 * dVar16);
  plVar9[0x316] = (longlong)dVar24;
  plVar9[0x317] = (longlong)dVar25;
  plVar9[0x318] = (longlong)dVar3;
  plVar9[0x319] = (longlong)dVar4;
  if (*(char *)(param_1 + 0x530) == '\x01') {
    if (*(float *)(param_1 + 0x534) <= param_2) {
      *(undefined8 *)(param_1 + 0x570) = DAT_14c8464f0;
      uVar8 = DAT_14c8464e8;
      *(undefined8 *)(param_1 + 0x560) = DAT_14c8464e0;
      *(undefined8 *)(param_1 + 0x568) = uVar8;
      dVar16 = DAT_14c8463e8;
      *(double *)(param_1 + 0x550) = DAT_14c8463e0;
      *(double *)(param_1 + 0x558) = dVar16;
      dVar16 = DAT_14c8463d8;
      *(double *)(param_1 + 0x540) = DAT_14c8463d0;
      *(double *)(param_1 + 0x548) = dVar16;
    }
    else {
      param_2 = param_2 / *(float *)(param_1 + 0x534);
      dVar16 = (double)(1.0 - param_2);
      *(double *)(param_1 + 0x560) = dVar16 * *(double *)(param_1 + 0x560);
      *(double *)(param_1 + 0x568) = *(double *)(param_1 + 0x568) * dVar16;
      *(double *)(param_1 + 0x570) = *(double *)(param_1 + 0x570) * dVar16;
      dVar16 = (double)param_2;
      uVar10 = -(ulonglong)
                (0.0 <= *(double *)(param_1 + 0x558) * DAT_14c8463e8 +
                        *(double *)(param_1 + 0x550) * DAT_14c8463e0 +
                        *(double *)(param_1 + 0x540) * DAT_14c8463d0 +
                        *(double *)(param_1 + 0x548) * DAT_14c8463d8);
      dVar26 = (double)(~uVar10 & (ulonglong)-(1.0 - dVar16) | (ulonglong)(1.0 - dVar16) & uVar10);
      dVar24 = *(double *)(param_1 + 0x540) * dVar26 + DAT_14c8463d0 * dVar16;
      dVar25 = *(double *)(param_1 + 0x548) * dVar26 + DAT_14c8463d8 * dVar16;
      dVar22 = dVar26 * *(double *)(param_1 + 0x550) + dVar16 * DAT_14c8463e0;
      dVar23 = dVar26 * *(double *)(param_1 + 0x558) + dVar16 * DAT_14c8463e8;
      dVar16 = dVar22 * dVar22 + dVar24 * dVar24;
      dVar26 = dVar23 * dVar23 + dVar25 * dVar25;
      auVar17._0_8_ = dVar16 + dVar26;
      auVar17._8_8_ = dVar16 + dVar26;
      uVar10 = -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_);
      auVar18 = sqrtpd(auVar17,auVar17);
      auVar20 = divpd(_DAT_149934d80,auVar18);
      auVar21._0_8_ = auVar20._0_8_ * dVar22;
      auVar21._8_8_ = auVar20._8_8_ * dVar23;
      auVar18._8_4_ = (int)uVar10;
      auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_);
      auVar18._12_4_ = (int)(uVar10 >> 0x20);
      auVar18 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar21,auVar18);
      *(ulonglong *)(param_1 + 0x540) =
           (ulonglong)(dVar24 * auVar20._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_)
      ;
      *(ulonglong *)(param_1 + 0x548) = (ulonglong)(dVar25 * auVar20._8_8_) & uVar10;
      *(undefined1 (*) [16])(param_1 + 0x550) = auVar18;
    }
  }
  local_e8 = plVar9[800];
  lStack_e0 = plVar9[0x321];
  local_d8 = plVar9[0x322];
  lStack_d0 = plVar9[0x323];
  local_108 = (undefined4)plVar9[0x31d];
  uStack_104 = *(undefined4 *)((longlong)plVar9 + 0x18ec);
  uStack_100 = (undefined4)plVar9[0x31e];
  uStack_fc = *(undefined4 *)((longlong)plVar9 + 0x18f4);
  local_f8 = plVar9[799];
  lVar7 = (**(code **)(plVar9[0x73] + 0x10))(plVar9 + 0x73);
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_140849bbe(lVar7);
  }
  local_118 = &local_e8;
  FUN_140d63a3c(param_1 + 0x530,plVar9[0x39],uVar8,&local_108);
LAB_140d63547:
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d63a3c FUN_140d63a3c body=1021 status=ok
// SIG undefined FUN_140d63a3c(void)

void FUN_140d63a3c(char *param_1,longlong param_2,longlong *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  char cVar13;
  uint uVar14;
  longlong *plVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar26;
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*param_1 != '\x01') goto LAB_140d63aa0;
  if ((param_2 == 0) || (param_3 == (longlong *)0x0)) {
LAB_140d63dff:
    *(undefined8 *)(param_1 + 0x40) = DAT_14c8464f0;
    uVar12 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x30) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x38) = uVar12;
    dVar24 = DAT_14c8463d8;
    *(double *)(param_1 + 0x10) = DAT_14c8463d0;
    *(double *)(param_1 + 0x18) = dVar24;
    uVar11 = DAT_14c8463e8._4_4_;
    uVar10 = (undefined4)DAT_14c8463e8;
    uVar16 = DAT_14c8463e0._4_4_;
    *(undefined4 *)(param_1 + 0x20) = (undefined4)DAT_14c8463e0;
    *(undefined4 *)(param_1 + 0x24) = uVar16;
    *(undefined4 *)(param_1 + 0x28) = uVar10;
    *(undefined4 *)(param_1 + 0x2c) = uVar11;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_118);
  }
  uVar16 = 0;
  plVar15 = param_3;
  cVar13 = (**(code **)(*param_3 + 0x480))();
  if (cVar13 != '\0') goto LAB_140d63dff;
  if (((ABS(*(double *)(param_1 + 0x30)) <= 0.009999999776482582) &&
      (ABS(*(double *)(param_1 + 0x38)) <= 0.009999999776482582)) &&
     (ABS(*(double *)(param_1 + 0x40)) <= 0.009999999776482582)) {
    lVar19 = -(ulonglong)(9.999999747378752e-06 < ABS(*(double *)(param_1 + 0x18) - DAT_14c8463d8));
    auVar5._8_4_ = (int)lVar19;
    auVar5._0_8_ = -(ulonglong)
                    (9.999999747378752e-06 < ABS(*(double *)(param_1 + 0x10) - DAT_14c8463d0));
    auVar5._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
    uVar14 = movmskpd((int)plVar15,auVar5);
    auVar25._8_8_ =
         -(ulonglong)
          (9.999999747378752e-06 <
          ABS(*(double *)(param_1 + 0x28) -
              (double)CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8)));
    auVar25._0_8_ =
         -(ulonglong)
          (9.999999747378752e-06 <
          ABS(*(double *)(param_1 + 0x20) -
              (double)CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0)));
    iVar17 = movmskpd(uVar16,auVar25);
    uVar18 = iVar17 << 2 | uVar14;
    if (uVar18 != 0) {
      auVar3._8_8_ = -(ulonglong)
                      (9.999999747378752e-06 < ABS(*(double *)(param_1 + 0x18) + DAT_14c8463d8));
      auVar3._0_8_ = -(ulonglong)
                      (9.999999747378752e-06 < ABS(*(double *)(param_1 + 0x10) + DAT_14c8463d0));
      iVar17 = movmskpd(uVar14,auVar3);
      auVar4._8_8_ = -(ulonglong)
                      (9.999999747378752e-06 <
                      ABS(*(double *)(param_1 + 0x28) +
                          (double)CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8)));
      auVar4._0_8_ = -(ulonglong)
                      (9.999999747378752e-06 <
                      ABS(*(double *)(param_1 + 0x20) +
                          (double)CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0)));
      uVar14 = movmskpd(uVar18,auVar4);
      if ((uVar14 & 0x3fffffff) != 0 || iVar17 != 0) goto LAB_140d63b5c;
    }
    *param_1 = '\0';
  }
LAB_140d63b5c:
  dVar1 = *(double *)(param_1 + 0x30);
  dVar2 = *(double *)(param_1 + 0x38);
  dVar22 = -*(double *)(param_2 + 0x240);
  dVar23 = -*(double *)(param_2 + 0x248);
  dVar20 = *(double *)(param_2 + 0x250) * -1.0;
  dVar21 = *(double *)(param_2 + 600) * 1.0;
  dVar24 = dVar2 * dVar22 - dVar1 * dVar23;
  dVar26 = *(double *)(param_1 + 0x40) * dVar23 - dVar2 * dVar20;
  dVar27 = dVar1 * dVar20 - dVar22 * *(double *)(param_1 + 0x40);
  dVar26 = dVar26 + dVar26;
  dVar27 = dVar27 + dVar27;
  dVar24 = dVar24 + dVar24;
  local_d0 = dVar21 * dVar24 + *(double *)(param_1 + 0x40) + (dVar27 * dVar22 - dVar26 * dVar23) +
             param_4[2];
  local_d8 = *(double *)(param_2 + 0x240) * dVar24 + dVar20 * dVar26 + dVar21 * dVar27 + dVar2 +
             param_4[1];
  local_e0 = (dVar24 * dVar23 - dVar27 * dVar20) + dVar21 * dVar26 + dVar1 + *param_4;
  dVar6 = *param_5;
  dVar7 = param_5[1];
  dVar8 = param_5[2];
  dVar9 = param_5[3];
  dVar1 = *(double *)(param_1 + 0x28);
  dVar24 = *(double *)(param_1 + 0x28);
  dVar20 = *(double *)(param_1 + 0x18);
  dVar2 = *(double *)(param_1 + 0x18);
  dVar22 = *(double *)(param_1 + 0x10);
  dVar21 = *(double *)(param_1 + 0x10);
  dVar26 = *(double *)(param_1 + 0x20);
  dVar23 = *(double *)(param_1 + 0x20);
  dVar27 = dVar6 * dVar23 * 1.0 + dVar9 * dVar2 + dVar21 * dVar8 * -1.0 + dVar24 * dVar7;
  local_b8 = dVar9 * dVar26 * 1.0 + ((dVar22 * dVar7 * 1.0 + dVar1 * dVar8) - dVar20 * dVar6);
  dStack_b0 = dVar8 * dVar23 * -1.0 + ((dVar21 * dVar6 * -1.0 + dVar24 * dVar9) - dVar2 * dVar7);
  local_c8._8_4_ = SUB84(dVar27,0);
  local_c8._0_8_ = dVar7 * dVar26 * -1.0 + dVar8 * dVar20 + dVar22 * dVar9 * 1.0 + dVar1 * dVar6;
  local_c8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  local_f0 = 0;
  local_f8 = 0;
  FUN_144927ad4(param_3,&local_e0,local_c8,0);
LAB_140d63aa0:
  if ((local_a0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d63e40 FUN_140d63e40 body=227 status=ok
// SIG undefined FUN_140d63e40(void)

void FUN_140d63e40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  if ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0) {
    *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 2;
    FUN_1406ca06e(param_1);
  }
  if (*(char *)(param_1 + 0x178) == '\x03') {
    uVar9 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(undefined1 *)(param_1 + 0x3f8)) &
            0xffffffffffffff04;
    FUN_140c7ce82(param_1,CONCAT71((int7)(uVar9 >> 8),(byte)uVar9 >> 2));
  }
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (param_1 == 0 || DAT_14c950c29 != 1) {
    if (param_1 == 0) {
      lVar10 = 0;
      goto LAB_140d63ea8;
    }
  }
  else {
    FUN_1456cec3c(param_1);
  }
  lVar10 = param_1 + 0x390;
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(param_1);
  }
LAB_140d63ea8:
  *(longlong *)(lVar1 + 0x3a0) = param_1;
  *(longlong *)(lVar1 + 0x3a8) = lVar10;
  FUN_140d63f24(*(undefined8 *)(param_1 + 0x3d0),param_1);
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  *(undefined8 *)(lVar1 + 0x2d4) = *(undefined8 *)(param_1 + 0x3c8);
  uVar2 = *(undefined4 *)(param_1 + 0x3a8);
  uVar3 = *(undefined4 *)(param_1 + 0x3ac);
  uVar4 = *(undefined4 *)(param_1 + 0x3b0);
  uVar5 = *(undefined4 *)(param_1 + 0x3b4);
  uVar6 = *(undefined4 *)(param_1 + 0x3bc);
  uVar7 = *(undefined4 *)(param_1 + 0x3c0);
  uVar8 = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)(lVar1 + 0x2c4) = *(undefined4 *)(param_1 + 0x3b8);
  *(undefined4 *)(lVar1 + 0x2c8) = uVar6;
  *(undefined4 *)(lVar1 + 0x2cc) = uVar7;
  *(undefined4 *)(lVar1 + 0x2d0) = uVar8;
  *(undefined4 *)(lVar1 + 0x2b4) = uVar2;
  *(undefined4 *)(lVar1 + 0x2b8) = uVar3;
  *(undefined4 *)(lVar1 + 700) = uVar4;
  *(undefined4 *)(lVar1 + 0x2c0) = uVar5;
  FUN_140d641a2(param_1);
  return;
}



// FUNCTION 140d63f24 FUN_140d63f24 body=63 status=ok
// SIG undefined FUN_140d63f24(void)

void FUN_140d63f24(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_140d63f64(param_2);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x3b0) = lVar1;
  }
  return;
}



// FUNCTION 140d63f64 FUN_140d63f64 body=351 status=ok
// SIG undefined FUN_140d63f64(void)

longlong FUN_140d63f64(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = (**(code **)(*param_1 + 0x180))();
  uVar4 = FUN_140d640c4();
  lVar5 = FUN_140277b32(uVar4,uVar3,L"GlobalMovieSceneSequenceTickManager",0);
  if (lVar5 == 0) {
    FUN_1446f470e(&local_30,L"GlobalMovieSceneSequenceTickManager",1);
    local_50 = 0;
    local_58 = 0;
    lVar5 = FUN_1457a09a3(uVar3,local_30,0,0);
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    puVar1 = local_48;
    local_40 = 3;
    *local_48 = &PTR_LAB_149e01f80;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_48[2] = lVar6;
    *local_48 = &PTR_FUN_14a491ad0;
    local_48[3] = 0;
    FUN_14485c47a(local_48 + 3,lVar5);
    puVar1[4] = FUN_1407b0448;
    FUN_1457a092a(uVar3,&local_38,&local_48);
    FUN_1449db362(&local_48);
    *(undefined8 *)(lVar5 + 0x70) = local_38;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d640c4 FUN_140d640c4 body=221 status=ok
// SIG undefined FUN_140d640c4(void)

longlong FUN_140d640c4(void)

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
  if (DAT_14cab3b40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1432deac6;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147578545;
    local_40 = &LAB_1459558d5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneSequenceTickManager",&DAT_14cab3b40,
                  &DAT_147578544);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3b40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140d641a2 FUN_140d641a2 body=723 status=ok
// SIG undefined FUN_140d641a2(void)

void FUN_140d641a2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
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
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x3d8) == 0) goto LAB_140d6426f;
  lVar7 = FUN_1447210f0();
  bVar6 = *(byte *)(lVar7 + 0x152);
  if ((bVar6 != 1) && ((6 < bVar6 || ((0x68U >> (bVar6 & 0x1f) & 1) == 0)))) goto LAB_140d6426f;
  lVar7 = *(longlong *)(param_1 + 0x3d0);
  if (*(longlong *)(param_1 + 0x3d8) == *(longlong *)(lVar7 + 0x298)) {
    lVar7 = (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x10))(lVar7 + 0x28);
    if (*(longlong *)(lVar7 + 8) == 0) {
      local_38 = (code *)0x0;
      plStack_30 = (longlong *)0x0;
LAB_140d642fb:
      bVar6 = 1;
    }
    else {
      FUN_140232b8e(*(longlong *)(lVar7 + 8),&local_38);
      if (local_38 == (code *)0x0) goto LAB_140d642fb;
      bVar6 = FUN_140d64476(*(undefined8 *)(param_1 + 0x3d0));
      bVar6 = bVar6 ^ 1;
    }
    plVar5 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (bVar6 == 0) goto LAB_140d6426f;
    lVar7 = *(longlong *)(param_1 + 0x3d0);
  }
  if (DAT_14cae8b20 == 0) {
    local_50 = &local_38;
    local_38 = (code *)&LAB_14355090c;
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
  lVar4 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_50 = &local_38;
    local_38 = FUN_1449e2820;
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
  lVar8 = *(longlong *)(param_1 + 0x20);
  if (lVar8 == 0) {
    lVar9 = 0;
  }
  else {
    iVar3 = *(int *)(lVar4 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar3) ||
         (lVar9 = lVar8,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
         lVar4 + 0x30)) {
        lVar9 = 0;
      }
    } while ((lVar9 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
  }
  FUN_140a22888(lVar7,*(undefined8 *)(param_1 + 0x3d8),lVar9,param_1 + 0x3e0);
LAB_140d6426f:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140d64476 FUN_140d64476 body=161 status=ok
// SIG undefined FUN_140d64476(void)

undefined4 FUN_140d64476(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x2e8) == 0) {
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    FUN_140232b8e(*(longlong *)(param_1 + 0x2e8),&local_28);
    if ((local_28 != 0) && (*(longlong *)(param_1 + 0x3b0) != 0)) {
      uVar4 = FUN_140d64518(*(longlong *)(param_1 + 0x3b0),param_1);
      goto LAB_140d644c3;
    }
  }
  uVar4 = 0;
LAB_140d644c3:
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



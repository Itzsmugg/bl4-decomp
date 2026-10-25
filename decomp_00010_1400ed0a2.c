// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1400ed0a2 FUN_1400ed0a2 body=491 status=ok
// SIG undefined FUN_1400ed0a2(void)

void FUN_1400ed0a2(longlong param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (undefined8 *)0x0;
  local_50 = 0x100000000;
  iVar1 = *(int *)(param_1 + 0x4f8);
  if ((longlong)iVar1 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x4f0);
    lVar12 = 0;
    do {
      lVar7 = *(longlong *)(lVar10 + lVar12);
      if (lVar7 != 0) {
        uVar6 = FUN_140e5bf68();
        cVar4 = FUN_1448093f4(lVar7,uVar6);
        if ((cVar4 != '\0') && (plVar2 = *(longlong **)(lVar10 + lVar12), plVar2 != (longlong *)0x0)
           ) {
          lVar7 = (**(code **)(*plVar2 + 8))(plVar2);
          lVar8 = FUN_140e5bf68();
          uVar3 = local_50;
          if ((lVar8 != 0) &&
             (((*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38) &&
               (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                lVar8 + 0x30)) && ((char)plVar2[9] == param_2)))) {
            lVar7 = (longlong)(int)local_50;
            uVar5 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar5);
            if (local_50._4_4_ < uVar5) {
              FUN_143da23c2(&local_60,uVar3 & 0xffffffff);
            }
            puVar9 = local_58;
            if (local_58 == (undefined8 *)0x0) {
              puVar9 = &local_60;
            }
            puVar9[lVar7] = plVar2;
          }
        }
      }
      lVar12 = lVar12 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar12);
    lVar10 = (longlong)(int)local_50;
    if (lVar10 != 0) {
      if (*(char *)(param_1 + 0x178) == '\x03') {
        *(byte *)(param_1 + 0x804) = *(byte *)(param_1 + 0x804) & 0xfe;
        puVar9 = &local_60;
        if ((*(longlong *)(param_1 + 0x618) == 0) || (*(longlong *)(param_1 + 0x620) == 0)) {
          if (local_58 != (undefined8 *)0x0) {
            puVar9 = local_58;
          }
          puVar11 = puVar9 + lVar10;
        }
        else {
          FUN_140e5bfbe();
          if (local_58 != (undefined8 *)0x0) {
            puVar9 = local_58;
          }
          if ((longlong)(int)local_50 == 0) goto LAB_1400ed242;
          puVar11 = puVar9 + (int)local_50;
        }
        do {
          FUN_1488c47d0(*puVar9,param_1 + 0x538);
          puVar9 = puVar9 + 1;
        } while (puVar9 != puVar11);
      }
      else {
        puVar9 = &local_60;
        if (local_58 != (undefined8 *)0x0) {
          puVar9 = local_58;
        }
        lVar12 = 0;
        do {
          FUN_143d9ee00(*(undefined8 *)((longlong)puVar9 + lVar12),param_1 + 0x830);
          lVar12 = lVar12 + 8;
        } while (lVar10 * 8 != lVar12);
      }
    }
  }
LAB_1400ed242:
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400ed28e FUN_1400ed28e body=527 status=ok
// SIG undefined FUN_1400ed28e(void)

ulonglong FUN_1400ed28e(int param_1,double *param_2,longlong *param_3)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  ulonglong uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  float fStack_70;
  undefined4 uStack_6c;
  double local_68;
  ulonglong local_60;
  ulonglong local_58;
  uint local_4c;
  ulonglong local_48;
  undefined8 uVar5;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_4c = 0;
  (**(code **)(*param_3 + 0x180))(param_3,&local_4c,0x80);
  uVar2 = local_4c;
  uVar7 = local_4c & 0x3f;
  if (uVar7 != 0) {
    local_78 = 0.0;
    local_58 = 0;
    local_60 = 0;
    (**(code **)(*param_3 + 0x178))(param_3,&local_78,uVar7);
    (**(code **)(*param_3 + 0x178))(param_3,&local_58,uVar7);
    (**(code **)(*param_3 + 0x178))(param_3,&local_60,uVar7);
    uVar6 = (ulonglong)(uVar7 - 1);
    lVar4 = 1L << ((byte)(uVar7 - 1) & 0x3f);
    dVar1 = (double)(longlong)(((ulonglong)local_78 ^ 1L << (uVar6 & 0x3f)) - lVar4);
    dVar8 = (double)(longlong)((local_58 ^ 1L << (uVar6 & 0x3f)) - lVar4);
    dVar9 = (double)(longlong)((local_60 ^ 1L << (uVar6 & 0x3f)) - lVar4);
    if (0x3f < uVar2) {
      dVar10 = 1.0 / (double)param_1;
      dVar9 = dVar9 * dVar10;
      dVar8 = dVar8 * dVar10;
      dVar1 = dVar1 * dVar10;
    }
    *param_2 = dVar1;
    param_2[1] = dVar8;
    param_2[2] = dVar9;
    uVar6 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    goto LAB_1400ed3a3;
  }
  if (local_4c < 0x40) {
    (**(code **)(*param_3 + 0x178))(param_3,&local_78,0x60);
    uVar6 = FUN_144afe7b6(&local_78);
    dVar1 = 0.0;
    dVar9 = 0.0;
    dVar8 = 0.0;
    if ((char)uVar6 == '\0') {
      dVar8 = (double)fStack_70;
      dVar9 = (double)local_78._4_4_;
      dVar1 = (double)(float)local_78;
    }
    *param_2 = dVar1;
    param_2[1] = dVar9;
    param_2[2] = dVar8;
  }
  else {
    (**(code **)(*param_3 + 0x178))(param_3,&local_78,0xc0);
    iVar3 = _finite(local_78);
    uVar5 = CONCAT44(extraout_var,iVar3);
    if (iVar3 != 0) {
      iVar3 = _finite((double)CONCAT44(uStack_6c,fStack_70));
      uVar5 = CONCAT44(extraout_var_00,iVar3);
      if (iVar3 != 0) {
        iVar3 = _finite(local_68);
        uVar5 = CONCAT44(extraout_var_01,iVar3);
        if (iVar3 != 0) {
          param_2[2] = local_68;
          *(float *)param_2 = (float)local_78;
          *(float *)((longlong)param_2 + 4) = local_78._4_4_;
          *(float *)(param_2 + 1) = fStack_70;
          *(undefined4 *)((longlong)param_2 + 0xc) = uStack_6c;
          uVar6 = 0;
          goto LAB_1400ed42b;
        }
      }
    }
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    uVar6 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  }
LAB_1400ed42b:
  uVar6 = uVar6 ^ 1;
LAB_1400ed3a3:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ed49e FUN_1400ed49e body=117 status=ok
// SIG undefined FUN_1400ed49e(void)

void FUN_1400ed49e(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x9c);
  if ((bVar1 & 1) == 0) {
    if ((bVar1 & 2) != 0) {
LAB_1400ed4fa:
                    /* WARNING: Could not recover jumptable at 0x0001400ed505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x340))(param_1);
      return;
    }
  }
  else {
    if ((bVar1 & 2) == 0) {
      if (*(longlong *)(param_1[0x16] + 0x218) == 0) {
        return;
      }
    }
    else {
      if (*(longlong *)(param_1[0x16] + 0x218) == 0) goto LAB_1400ed4fa;
      *(byte *)((longlong)param_1 + 0x9c) = bVar1 | 4;
      (**(code **)(*param_1 + 0x340))(param_1);
    }
    (**(code **)(*param_1 + 800))(param_1,0);
    *(byte *)((longlong)param_1 + 0x9c) = *(byte *)((longlong)param_1 + 0x9c) & 0xfb;
  }
  return;
}



// FUNCTION 1400ed514 FUN_1400ed514 body=162 status=ok
// SIG undefined FUN_1400ed514(void)

void FUN_1400ed514(char *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*param_1 == '\x02') {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2,param_3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if (*param_1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x0001400ed59e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 1400ed5b6 FUN_1400ed5b6 body=140 status=ok
// SIG undefined FUN_1400ed5b6(void)

void FUN_1400ed5b6(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  local_40 = param_2;
  local_31 = param_3;
  uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
  (*pcVar1)(uVar3,&local_40,uVar2,&local_31);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ed664 FUN_1400ed664 body=140 status=ok
// SIG undefined FUN_1400ed664(void)

void FUN_1400ed664(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  local_40 = param_2;
  local_31 = param_3;
  uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
  (*pcVar1)(uVar3,&local_40,uVar2,&local_31);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ed712 FUN_1400ed712 body=140 status=ok
// SIG undefined FUN_1400ed712(void)

void FUN_1400ed712(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  local_40 = param_2;
  local_31 = param_3;
  uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
  (*pcVar1)(uVar3,&local_40,uVar2,&local_31);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ed7be FUN_1400ed7be body=54 status=ok
// SIG undefined FUN_1400ed7be(void)

void FUN_1400ed7be(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1400ed7f4(param_2,param_1 + 0x138);
  FUN_1400ed7f4(param_3,param_1 + 0x148);
  return;
}



// FUNCTION 1400ed7f4 FUN_1400ed7f4 body=117 status=ok
// SIG undefined FUN_1400ed7f4(void)

void FUN_1400ed7f4(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1405c1a44(param_1,iVar2);
  }
  lVar3 = *param_1;
  lVar4 = *param_2;
  lVar5 = 0;
  do {
    *(undefined8 *)((longlong)iVar2 * 8 + lVar3 + lVar5 * 8) = *(undefined8 *)(lVar4 + lVar5 * 8);
    lVar5 = lVar5 + 1;
  } while (uVar1 != (uint)lVar5);
  return;
}



// FUNCTION 1400ed869 FUN_1400ed869 body=1157 status=ok
// SIG undefined FUN_1400ed869(void)

void FUN_1400ed869(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = *param_2;
  local_98 = param_4;
  if (lVar5 == 0) {
    FUN_14172c36e(param_1,0);
  }
  else {
    iVar3 = (int)param_1[2];
    local_a0 = param_2;
    if (*(char *)(lVar5 + 0x1c) == '\x05') {
      uVar4 = *(uint *)(lVar5 + 0x28);
      if (iVar3 < (int)uVar4) {
        *(uint *)(param_1 + 2) = uVar4;
        if ((uint)(*(int *)((longlong)param_1 + 0x14) - iVar3) < uVar4 - iVar3) {
          FUN_1402771ac(param_1);
        }
        plVar11 = (longlong *)param_1[1];
        if ((longlong *)param_1[1] == (longlong *)0x0) {
          plVar11 = param_1;
        }
        memset(plVar11 + iVar3,0,(longlong)(int)(uVar4 - iVar3) << 3);
      }
      else {
        if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((ulonglong)uVar4);
        }
        if (iVar3 - uVar4 != 0 && (int)uVar4 <= iVar3) {
          FUN_146caee30(param_1,uVar4,iVar3 - uVar4);
          FUN_146caee92(param_1);
        }
      }
      if (0 < (int)uVar4) {
        iVar14 = 0;
        uVar16 = 0;
        do {
          puVar13 = *(undefined8 **)(*(longlong *)(lVar5 + 0x20) + uVar16 * 8);
          if (puVar13 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
            UNLOCK();
          }
          if ((longlong)uVar16 < (longlong)iVar3) {
            plVar11 = (longlong *)param_1[1];
            if ((longlong *)param_1[1] == (longlong *)0x0) {
              plVar11 = param_1;
            }
            puVar12 = *(undefined8 **)(plVar11[uVar16] + 0x10);
            if (puVar13 != puVar12) {
              *(undefined8 **)(plVar11[uVar16] + 0x10) = puVar13;
              if (puVar13 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
                UNLOCK();
              }
              if (puVar12 != (undefined8 *)0x0) {
                LOCK();
                piVar1 = (int *)(puVar12 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((*piVar1 == 0) && (*(int *)((longlong)puVar12 + 0xc) == 0)) {
                  (**(code **)*puVar12)(puVar12,1);
                }
              }
              plVar11 = (longlong *)param_1[1];
              if ((longlong *)param_1[1] == (longlong *)0x0) {
                plVar11 = param_1;
              }
              *(uint *)(plVar11[uVar16] + 8) = (*(uint *)(plVar11[uVar16] + 8) & 7) + iVar14;
            }
          }
          else {
            puVar12 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
            *puVar12 = &PTR_FUN_149f5e060;
            *(int *)(puVar12 + 1) = iVar14;
            *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
            puVar12[2] = puVar13;
            if (puVar13 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
              UNLOCK();
            }
            puVar12[7] = 0;
            puVar12[8] = 0;
            puVar12[5] = 0;
            puVar12[6] = 0;
            puVar12[3] = 0;
            puVar12[4] = 0;
            *puVar12 = &PTR_FUN_149f5e040;
            puVar12[9] = 0;
            puVar12[10] = 0;
            puVar12[0xb] = 0;
            puVar12[0xc] = 0;
            puVar12[0xd] = 0;
            puVar12[0xe] = 0;
            puVar12[0xf] = 0;
            *(undefined1 *)((longlong)puVar12 + 0x79) = 3;
            puVar12[0x10] = 0;
            puVar12[0x11] = 0;
            puVar12[0x12] = 0;
            puVar12[0x13] = 0;
            puVar12[0x14] = 0;
            puVar12[0x15] = 0;
            puVar12[0x16] = 0;
            puVar12[0x17] = 0;
            plVar11 = (longlong *)param_1[1];
            if ((longlong *)param_1[1] == (longlong *)0x0) {
              plVar11 = param_1;
            }
            puVar6 = (undefined8 *)plVar11[uVar16];
            plVar11[uVar16] = (longlong)puVar12;
            if (puVar6 != (undefined8 *)0x0) {
              (**(code **)*puVar6)(puVar6,1);
            }
          }
          if (puVar13 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar13 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((*piVar1 == 0) && (*(int *)((longlong)puVar13 + 0xc) == 0)) {
              (**(code **)*puVar13)(puVar13,1);
            }
          }
          uVar16 = uVar16 + 1;
          iVar14 = iVar14 + 8;
        } while (uVar4 != uVar16);
      }
    }
    else {
      iVar14 = iVar3;
      if (*(int *)((longlong)param_1 + 0x14) < 1) {
        FUN_146caedda(param_1);
        iVar14 = (int)param_1[2];
      }
      if (iVar14 < 1) {
        *(undefined4 *)(param_1 + 2) = 1;
        if ((uint)(*(int *)((longlong)param_1 + 0x14) - iVar14) < 1U - iVar14) {
          FUN_1402771ac(param_1);
        }
        plVar11 = (longlong *)param_1[1];
        if ((longlong *)param_1[1] == (longlong *)0x0) {
          plVar11 = param_1;
        }
        memset(plVar11 + iVar14,0,(ulonglong)(1U - iVar14) << 3);
      }
      else if (iVar14 != 1) {
        FUN_146caee30(param_1,1,iVar14 + -1);
        FUN_146caee92(param_1);
      }
      if (iVar3 == 0) {
        puVar13 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
        *puVar13 = &PTR_FUN_149f5e060;
        puVar13[1] = 0;
        lVar5 = *param_2;
        puVar13[2] = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        puVar13[7] = 0;
        puVar13[8] = 0;
        puVar13[5] = 0;
        puVar13[6] = 0;
        puVar13[3] = 0;
        puVar13[4] = 0;
        *puVar13 = &PTR_FUN_149f5e040;
        puVar13[9] = 0;
        puVar13[10] = 0;
        puVar13[0xb] = 0;
        puVar13[0xc] = 0;
        puVar13[0xd] = 0;
        puVar13[0xe] = 0;
        puVar13[0xf] = 0;
        *(undefined1 *)((longlong)puVar13 + 0x79) = 3;
        puVar13[0x10] = 0;
        puVar13[0x11] = 0;
        puVar13[0x12] = 0;
        puVar13[0x13] = 0;
        puVar13[0x14] = 0;
        puVar13[0x15] = 0;
        puVar13[0x16] = 0;
        puVar13[0x17] = 0;
        plVar11 = (longlong *)param_1[1];
        if ((longlong *)param_1[1] == (longlong *)0x0) {
          plVar11 = param_1;
        }
        puVar12 = (undefined8 *)*plVar11;
        *plVar11 = (longlong)puVar13;
        if (puVar12 != (undefined8 *)0x0) {
          (**(code **)*puVar12)(puVar12,1);
        }
      }
      else {
        plVar11 = (longlong *)param_1[1];
        if ((longlong *)param_1[1] == (longlong *)0x0) {
          plVar11 = param_1;
        }
        FUN_146e221a2(plVar11,param_2);
      }
    }
    if (*(char *)(*local_a0 + 0x1a) == '\x01') {
      plVar11 = (longlong *)param_1[1];
      if ((longlong *)param_1[1] == (longlong *)0x0) {
        plVar11 = param_1;
      }
      lVar5 = param_1[2];
      if ((longlong)(int)lVar5 != 0) {
        lVar15 = 0;
        do {
          lVar7 = *(longlong *)((longlong)plVar11 + lVar15);
          plVar8 = *(longlong **)(lVar7 + 0x10);
          if ((plVar8 == (longlong *)0x0) || (*(char *)((longlong)plVar8 + 0x1a) != '\x01')) {
            uVar9 = *(undefined8 *)(param_3 + 0x20);
            uVar10 = *(undefined8 *)(param_3 + 0x28);
            uVar2 = *(undefined8 *)(param_3 + 0x30);
            *(undefined8 *)(lVar7 + 0x18) = uVar9;
            *(undefined8 *)(lVar7 + 0x20) = uVar10;
            *(undefined8 *)(lVar7 + 0x28) = uVar2;
            *(undefined8 *)(lVar7 + 0x30) = uVar9;
            *(undefined8 *)(lVar7 + 0x38) = uVar10;
            *(undefined8 *)(lVar7 + 0x40) = uVar2;
          }
          else {
            (**(code **)(*plVar8 + 0x88))(plVar8,&local_90,param_3);
            *(undefined8 *)(lVar7 + 0x28) = local_80;
            *(undefined8 *)(lVar7 + 0x18) = local_90;
            *(undefined8 *)(lVar7 + 0x20) = uStack_88;
            *(undefined8 *)(lVar7 + 0x30) = local_78;
            *(undefined8 *)(lVar7 + 0x38) = uStack_70;
            *(undefined8 *)(lVar7 + 0x40) = local_68;
          }
          lVar15 = lVar15 + 8;
        } while ((longlong)(int)lVar5 * 8 != lVar15);
      }
    }
  }
  if ((local_98 != 0) && (*(longlong *)(local_98 + 8) != 0)) {
    FUN_140259f0c(*(longlong *)(local_98 + 8) + 0x70,local_98,(int)param_1[2]);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400edcf0 FUN_1400edcf0 body=68 status=ok
// SIG undefined FUN_1400edcf0(void)

undefined8 FUN_1400edcf0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((int)param_1[1] < 1) {
    uVar1 = 0;
  }
  else {
    lVar3 = 0;
    lVar2 = 0;
    do {
      uVar1 = FUN_1400edd34(*param_1 + lVar3);
      if ((char)uVar1 != '\0') {
        return uVar1;
      }
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x13c10;
    } while (lVar2 < (int)param_1[1]);
  }
  return uVar1;
}



// FUNCTION 1400edd34 FUN_1400edd34 body=111 status=ok
// SIG undefined FUN_1400edd34(void)

bool FUN_1400edd34(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x3108);
  if ((((lVar1 == 0) || (cVar2 = FUN_1400edda3(), cVar2 == '\0')) ||
      (uVar3 = FUN_1400b0b91(*(undefined4 *)(param_1 + 0x3090),8), *(int *)(DAT_14ca696f0 + 4) != 0)
      ) || ((DAT_14c873612 & 0x20) == 0)) {
    return false;
  }
  if (1 < uVar3) {
    return false;
  }
  if ((DAT_14c873700 & 0x200000) == 0) {
    return false;
  }
  return *(int *)(lVar1 + 0x1ef0) == 0;
}



// FUNCTION 1400edda3 FUN_1400edda3 body=99 status=ok
// SIG undefined FUN_1400edda3(void)

bool FUN_1400edda3(longlong param_1)

{
  if (*(int *)(DAT_14ca6c2c8 + 4) != 0) {
    if ((int)(&DAT_14ca814b8)
             [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2) *
              0xf] < 3) {
      return false;
    }
    if (*(longlong *)(param_1 + 0x3108) == 0) {
      return false;
    }
    if (*(char *)(param_1 + 0x23eb) == '\0') {
      return *(double *)(param_1 + 0x8a8) <= 1.0 && *(double *)(param_1 + 0x8a8) != 1.0;
    }
  }
  return false;
}



// FUNCTION 1400ede06 FUN_1400ede06 body=90 status=ok
// SIG undefined FUN_1400ede06(void)

longlong FUN_1400ede06(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  *(uint *)(param_1 + 0xa8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xac) < iVar1 + 1U) {
    FUN_147af2a4e(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0x28;
  FUN_1400ede60(lVar2,1);
  return lVar2;
}



// FUNCTION 1400ede60 FUN_1400ede60 body=39 status=ok
// SIG undefined FUN_1400ede60(void)

void FUN_1400ede60(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffff;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 1400ede88 FUN_1400ede88 body=294 status=ok
// SIG undefined FUN_1400ede88(void)

void FUN_1400ede88(longlong *param_1,double *param_2,longlong *param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = FUN_1400edfb0(param_1,param_2,local_68);
  iVar5 = (int)param_1[1];
  iVar6 = (int)param_3[1] + iVar5;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar6) {
    FUN_1400ee040(param_3);
    iVar5 = (int)param_1[1];
  }
  if (iVar5 != 0) {
    lVar3 = *param_1;
    lVar7 = 0;
    do {
      pdVar1 = (double *)(lVar3 + 0x10 + lVar7);
      if ((((*param_2 < *pdVar1 || *param_2 == *pdVar1) &&
           (*(double *)(lVar3 + lVar7) < param_2[2] || *(double *)(lVar3 + lVar7) == param_2[2])) &&
          (pdVar1 = (double *)(lVar3 + 0x18 + lVar7), param_2[1] < *pdVar1 || param_2[1] == *pdVar1)
          ) && (dVar2 = *(double *)(lVar3 + 8 + lVar7), dVar2 < param_2[3] || dVar2 == param_2[3]))
      {
        iVar6 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
          FUN_141873fdc(param_3,iVar6);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar6 * 8) = *(undefined8 *)(lVar3 + 0x28 + lVar7);
      }
      lVar7 = lVar7 + 0x30;
    } while ((longlong)iVar5 * 0x30 != lVar7);
  }
  if (uVar4 != 0) {
    uVar8 = 0;
    do {
      FUN_1400ede88(local_68[uVar8],param_2,param_3);
      uVar8 = uVar8 + 1;
    } while (uVar4 != uVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400edfb0 FUN_1400edfb0 body=143 status=ok
// SIG undefined FUN_1400edfb0(void)

ulonglong FUN_1400edfb0(longlong param_1,double *param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = *(double *)(param_1 + 0x58);
    dVar4 = *(double *)(param_1 + 0x60);
    uVar7 = 0;
    dVar5 = param_2[2];
    dVar6 = param_2[3];
    if ((dVar1 <= dVar3) && (dVar2 <= dVar4)) {
      *param_3 = *(undefined8 *)(param_1 + 0x20);
      uVar7 = 1;
    }
    uVar8 = uVar7;
    if ((dVar3 <= dVar5) && (dVar2 <= dVar4)) {
      uVar8 = (ulonglong)((int)uVar7 + 1);
      param_3[uVar7] = *(undefined8 *)(param_1 + 0x28);
    }
    uVar7 = uVar8;
    if ((dVar1 <= dVar3) && (dVar4 <= dVar6)) {
      uVar7 = (ulonglong)((int)uVar8 + 1);
      param_3[uVar8] = *(undefined8 *)(param_1 + 0x10);
    }
    uVar8 = uVar7;
    if ((dVar3 <= dVar5) && (dVar4 <= dVar6)) {
      uVar8 = (ulonglong)((int)uVar7 + 1);
      param_3[uVar7] = *(undefined8 *)(param_1 + 0x18);
    }
    return uVar8;
  }
  return 0;
}



// FUNCTION 1400ee040 FUN_1400ee040 body=320 status=ok
// SIG undefined FUN_1400ee040(void)

void FUN_1400ee040(longlong param_1,uint param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1400ee0a9;
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
LAB_1400ee0a9:
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



// FUNCTION 1400ee180 FUN_1400ee180 body=90 status=ok
// SIG undefined FUN_1400ee180(void)

longlong FUN_1400ee180(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x488);
  *(uint *)(param_1 + 0x488) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x48c) < iVar1 + 1U) {
    FUN_1400ee40c(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x480);
  if (*(longlong *)(param_1 + 0x480) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0x48;
  FUN_1400ee1da(lVar2,1);
  return lVar2;
}



// FUNCTION 1400ee1da FUN_1400ee1da body=45 status=ok
// SIG undefined FUN_1400ee1da(void)

void FUN_1400ee1da(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x40);
    do {
      *(undefined8 *)(puVar1 + -4) = 0;
      *(undefined8 *)(puVar1 + -2) = 0x10000000000;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1400ee208 FUN_1400ee208 body=239 status=ok
// SIG undefined FUN_1400ee208(void)

void FUN_1400ee208(longlong param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = param_2;
  iVar5 = param_2;
  if (*(int *)(param_1 + 0x2c) < param_2) {
    uVar8 = 8;
    if (0x11f < param_2 + 0x1fU) {
      uVar7 = param_2 + 0x1fU >> 5;
      uVar3 = FUN_144a3809e(uVar7 * 4,0);
      uVar8 = 0x7fffffff;
      if ((int)uVar7 <= (int)(uVar3 >> 2)) {
        uVar8 = uVar3 >> 2 & 0xffffffff;
      }
    }
    FUN_140694960(param_1,iVar1 + 0x1fU >> 5,uVar8,4);
    *(int *)(param_1 + 0x2c) = (int)uVar8 << 5;
    iVar5 = *(int *)(param_1 + 0x28);
  }
  iVar2 = iVar5 + 0x1f;
  if (-1 < iVar5) {
    iVar2 = iVar5;
  }
  if (iVar5 % 0x20 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar6 = param_1;
    }
    bVar4 = -(char)(iVar5 % 0x20);
    *(uint *)(lVar6 + (longlong)(iVar2 >> 5) * 4) =
         (uint)(*(int *)(lVar6 + (longlong)(iVar2 >> 5) * 4) << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
  }
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_144807e00(param_1,iVar1,param_2 - iVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 1400ee2f8 FUN_1400ee2f8 body=274 status=ok
// SIG undefined FUN_1400ee2f8(void)

void FUN_1400ee2f8(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x4a0;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x4a0)) {
      uVar5 = uVar4 / 0x4a0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x4a0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1400ee40c FUN_1400ee40c body=361 status=ok
// SIG undefined FUN_1400ee40c(void)

void FUN_1400ee40c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x488);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x11) {
    iVar8 = 0x10;
  }
  else {
    lVar4 = (longlong)(int)uVar3;
    if (0x10 < *(uint *)(param_1 + 0x48c)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar5 = lVar4 * 0x48;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_1400ee4a2;
              lVar4 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar4 != 0x33);
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
LAB_1400ee4a2:
    iVar6 = (int)(uVar5 / 0x48);
    iVar8 = 0x7fffffff;
    if ((int)uVar3 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  *(int *)(param_1 + 0x48c) = iVar8;
  FUN_1400ee576(param_1,param_2);
  return;
}



// FUNCTION 1400ee576 FUN_1400ee576 body=148 status=ok
// SIG undefined FUN_1400ee576(void)

void FUN_1400ee576(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x480);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x48);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x480,0,param_3,0x48);
    memmove(*(void **)((longlong)param_1 + 0x480),param_1,(longlong)param_2 * 0x48);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x480,param_2,param_3,0x48);
  return;
}



// FUNCTION 1400ee60a FUN_1400ee60a body=80 status=ok
// SIG undefined FUN_1400ee60a(void)

void FUN_1400ee60a(longlong param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != -1) {
    iVar1 = *(int *)(param_1 + 0x148);
    *(uint *)(param_1 + 0x148) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x14c) < iVar1 + 1U) {
      FUN_1447808da((longlong *)(param_1 + 0x140),iVar1);
    }
    *(int *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar1 * 4) = *param_2;
    *param_2 = -1;
  }
  return;
}



// FUNCTION 1400ee65a FUN_1400ee65a body=306 status=ok
// SIG undefined FUN_1400ee65a(void)

void FUN_1400ee65a(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1400ee6c3;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_1400ee6c3:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,4);
  }
  return;
}



// FUNCTION 1400ee78c FUN_1400ee78c body=309 status=ok
// SIG undefined FUN_1400ee78c(void)

void FUN_1400ee78c(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  DWORD DVar3;
  char cVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  bool bVar6;
  
  if ((param_2 != 0) && (*(char *)(*param_1 + 0x10) != '\0')) {
    dwTlsIndex = DAT_14c75ec34;
    if (DAT_14c75ec34 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar5 = 0xffffffff;
      LOCK();
      bVar6 = DAT_14c75ec34 != 0xffffffff;
      DVar3 = dwTlsIndex;
      if (bVar6) {
        DVar5 = DAT_14c75ec34;
        DVar3 = DAT_14c75ec34;
      }
      DAT_14c75ec34 = DVar3;
      UNLOCK();
      if (bVar6) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar5;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
      FUN_141073f92(lpTlsValue);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    uVar1 = *(undefined4 *)((longlong)lpTlsValue + 0x50);
    *(undefined4 *)((longlong)lpTlsValue + 0x50) = 0;
    *(undefined1 *)(param_2 + 0x8a) = 1;
    iVar2 = *(int *)(param_2 + 0x20);
    *(uint *)(param_2 + 0x20) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x24) < iVar2 + 1U) {
      FUN_14013522c(param_2 + 0x18,iVar2);
    }
    *(longlong **)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 8) = param_1;
    cVar4 = (**(code **)*param_1)(param_2,param_1[1],*(undefined4 *)((longlong)param_1 + 0x34));
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + -1;
    FUN_144841eca(param_2 + 0x18);
    if (cVar4 == '\x01') {
      FUN_144841f58(param_1,param_2);
    }
    *(undefined4 *)((longlong)lpTlsValue + 0x50) = uVar1;
    return;
  }
  FUN_1400ee8c2(*(undefined8 *)(*param_1 + 8),param_2,param_1);
  return;
}



// FUNCTION 1400ee8c2 FUN_1400ee8c2 body=292 status=ok
// SIG undefined FUN_1400ee8c2(void)

void FUN_1400ee8c2(longlong *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  uVar2 = *(undefined4 *)(*(longlong *)(param_3 + 8) + 0xdc);
  if (*param_1 == param_2) {
    *(undefined1 *)(param_3 + 0x3c) = 1;
    *(undefined4 *)(param_3 + 0x30) = uVar2;
    lVar5 = FUN_1400eea42(param_1 + 3,uVar2);
    if (*(longlong *)(lVar5 + 8) == 0) {
      *(longlong *)(lVar5 + 0x10) = param_3;
      *(longlong *)(lVar5 + 8) = param_3;
    }
    else {
      lVar4 = *(longlong *)(lVar5 + 0x10);
      *(longlong *)(param_3 + 0x18) = lVar4;
      *(longlong *)(lVar4 + 0x20) = param_3;
      *(longlong *)(lVar5 + 0x10) = param_3;
    }
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    *(undefined1 *)(param_3 + 0x3c) = 2;
    *(undefined4 *)(param_3 + 0x30) = uVar2;
    lVar5 = FUN_1400eea42(param_1 + 0xb,uVar2);
    plVar7 = (longlong *)(lVar5 + 0x10);
    if (*(longlong *)(lVar5 + 8) == 0) {
      plVar6 = (longlong *)(lVar5 + 8);
    }
    else {
      lVar5 = *plVar7;
      *(longlong *)(param_3 + 0x18) = lVar5;
      plVar6 = plVar7;
      plVar7 = (longlong *)(lVar5 + 0x20);
    }
    *plVar7 = param_3;
    *plVar6 = param_3;
    if ((int)param_1[0xc] == 0) {
      lVar5 = -0x8000000000000000;
    }
    else {
      lVar5 = (longlong)
              *(int *)(*(longlong *)(param_1[0xb] + (longlong)((int)param_1[0xc] + -1) * 8) + 0x18);
    }
    LOCK();
    param_1[0xe] = lVar5;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
    if (param_1[1] != 0) {
      FUN_1400ee9e6();
    }
    pbVar3 = (byte *)param_1[2];
    if (pbVar3 != (byte *)0x0) {
      LOCK();
      bVar1 = *pbVar3;
      *pbVar3 = 1;
      UNLOCK();
      if ((bVar1 & 3) == 2) {
        FUN_1447458da(pbVar3,0xffffffff);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1400ee9e6 FUN_1400ee9e6 body=91 status=ok
// SIG undefined FUN_1400ee9e6(void)

void FUN_1400ee9e6(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  do {
    plVar1 = (longlong *)param_1[6];
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar2 = (longlong *)param_1[6];
    if (plVar1 == plVar2) {
      param_1[6] = *plVar1;
      plVar2 = plVar1;
    }
    UNLOCK();
  } while (plVar1 != plVar2);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  *(undefined1 *)(plVar2 + 1) = 1;
  (**(code **)(*(longlong *)*param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001400eea31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}



// FUNCTION 1400eea42 FUN_1400eea42 body=240 status=ok
// SIG undefined FUN_1400eea42(void)

longlong FUN_1400eea42(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = *(uint *)(param_1 + 1);
  if ((int)uVar7 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar5 = uVar7;
    do {
      uVar1 = (uVar5 >> 1) + uVar8;
      if (*(int *)(*(longlong *)(*param_1 + (ulonglong)uVar1 * 8) + 0x18) < param_2) {
        uVar8 = uVar1 + (uVar5 & 1);
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar3);
    if (((int)uVar8 < (int)uVar7) &&
       (lVar2 = *(longlong *)(*param_1 + (ulonglong)uVar8 * 8), *(int *)(lVar2 + 0x18) == param_2))
    {
      return lVar2;
    }
  }
  plVar4 = (longlong *)param_1[2];
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_14001cc68(0x20,0x10);
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = 0;
    *(int *)(plVar4 + 3) = param_2;
  }
  else {
    param_1[2] = *plVar4;
    *plVar4 = 0;
    *(int *)(plVar4 + 3) = param_2;
    uVar7 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar7 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar7 + 1) {
    FUN_1456ce736(param_1,uVar7);
  }
  uVar6 = (ulonglong)uVar8;
  memmove((void *)(*param_1 + uVar6 * 8 + 8),(void *)(*param_1 + uVar6 * 8),
          (ulonglong)(uVar7 - uVar8) << 3);
  *(longlong **)(*param_1 + uVar6 * 8) = plVar4;
  return *(longlong *)(*param_1 + uVar6 * 8);
}



// FUNCTION 1400eeb32 FUN_1400eeb32 body=140 status=ok
// SIG undefined FUN_1400eeb32(void)

void FUN_1400eeb32(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  local_40 = param_2;
  local_31 = param_3;
  uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
  (*pcVar1)(uVar3,&local_40,uVar2,&local_31);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400eebe0 FUN_1400eebe0 body=140 status=ok
// SIG undefined FUN_1400eebe0(void)

void FUN_1400eebe0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  local_40 = param_2;
  local_31 = param_3;
  uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
  (*pcVar1)(uVar3,&local_40,uVar2,&local_31);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400eec8e FUN_1400eec8e body=77 status=ok
// SIG undefined FUN_1400eec8e(void)

longlong * FUN_1400eec8e(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if (((char)param_1[1] == '\x01') && (lVar2 = *param_1, lVar2 != 0)) {
    LOCK();
    piVar1 = (int *)(lVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_144716208(lVar2);
      FUN_1400020a8(lVar2);
    }
  }
  FUN_1400eecdc(param_1,*param_2);
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}



// FUNCTION 1400eecdc FUN_1400eecdc body=88 status=ok
// SIG undefined FUN_1400eecdc(void)

longlong * FUN_1400eecdc(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = FUN_14001cc68(param_2,0);
  *puVar1 = uVar2;
  *(int *)(puVar1 + 1) = (int)param_2;
  *(char *)(puVar1 + 3) = (char)((ulonglong)param_2 >> 0x20);
  *(undefined1 *)((longlong)puVar1 + 0x19) = 1;
  *param_1 = (longlong)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)((longlong)puVar1 + 0xc) = *(int *)((longlong)puVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1400eed34 FUN_1400eed34 body=317 status=ok
// SIG undefined FUN_1400eed34(void)

void FUN_1400eed34(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,longlong param_11)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = &local_40;
  local_40 = 0;
  local_70 = param_10;
  local_80 = param_9;
  local_90 = (undefined8 *)CONCAT44(local_90._4_4_,param_7);
  local_98 = CONCAT44(local_98._4_4_,param_8);
  local_68 = 1;
  local_88 = 0x7fffffff;
  iVar1 = FUN_1400f3752(*(undefined8 *)(param_1 + 8),param_4,
                        *(undefined8 *)
                         (*(longlong *)
                           (*(longlong *)(param_1 + 0x10) + 0x158 + (ulonglong)param_2 * 8) + 0x198)
                        ,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  if (iVar1 < 0) {
    local_90 = &local_58;
    local_58 = 0;
    uStack_50 = 0;
    local_98 = 0;
    FUN_145763094(iVar1,
                  "Adapter->CreatePlacedResource(InDesc, Heap.GetLinkedObject(GPUIndex)->Get(), Allocation.Offset, InCreateState, InResourceStateMode, D3D12_RESOURCE_STATE_TBD, InClearValue, &NewResource, InName)"
                  ,".\\Runtime/D3D12RHI/Private/D3D12TransientResourceAllocator.cpp",0xcb);
  }
  FUN_1400eee72(param_11,local_40);
  *(undefined8 *)(param_11 + 0x68) = param_5;
  *(undefined1 *)(param_11 + 0x72) = 1;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(local_40 + 0x40);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400eee72 FUN_1400eee72 body=144 status=ok
// SIG undefined FUN_1400eee72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400eee72(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x70) = 7;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x40);
  *(longlong *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if ((*(int *)(param_2 + 0xcc) == 2) ||
     ((*(int *)(param_2 + 0xcc) == 4 && ((_DAT_00000004 & 0xfffffffe) == 2)))) {
    local_28 = 0;
    uStack_20 = 0;
    uVar1 = FUN_1400db056(param_2);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x40);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400eef04 FUN_1400eef04 body=60 status=ok
// SIG undefined FUN_1400eef04(void)

int FUN_1400eef04(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) == iVar1) {
    FUN_1456ce7bc(param_1,iVar1);
  }
  FUN_1400eef40((longlong)iVar1 * 0x40 + *param_1);
  return iVar1;
}



// FUNCTION 1400eef40 FUN_1400eef40 body=30 status=ok
// SIG undefined FUN_1400eef40(void)

void FUN_1400eef40(longlong param_1)

{
  FUN_1400eef5e();
  FUN_1400eef5e(param_1 + 0x20);
  return;
}



// FUNCTION 1400eef5e FUN_1400eef5e body=123 status=ok
// SIG undefined FUN_1400eef5e(void)

undefined8 * FUN_1400eef5e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR_FUN_149f6c8c8;
  puVar1[5] = 0;
  puVar1[6] = 0x8000000000;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(byte *)(puVar1 + 0xd) = *(byte *)(puVar1 + 0xd) & 0xf8;
  param_1[3] = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
  }
  return param_1;
}



// FUNCTION 1400eefda FUN_1400eefda body=38 status=ok
// SIG undefined FUN_1400eefda(void)

undefined8 FUN_1400eefda(undefined8 param_1,int param_2)

{
  FUN_1400ef000();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400ef000 FUN_1400ef000 body=95 status=ok
// SIG undefined FUN_1400ef000(void)

void FUN_1400ef000(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a161750;
  param_1[0xb] = &PTR_FUN_14a161778;
  if (*(char *)((longlong)param_1 + 0xa5) == '\x01') {
    FUN_14039d2ba(DAT_14c9a0260,param_1 + 0xb);
  }
  if ((param_1[1] != 0) && (*(char *)((longlong)param_1 + 0x55) == '\0')) {
    FUN_1400020a8();
  }
  param_1[1] = 0;
  FUN_1400e0f74(param_1);
  return;
}



// FUNCTION 1400ef05f FUN_1400ef05f body=26 status=ok
// SIG undefined FUN_1400ef05f(void)

void FUN_1400ef05f(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1400ef079 FUN_1400ef079 body=45 status=ok
// SIG undefined FUN_1400ef079(void)

void FUN_1400ef079(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1400ef0a6 FUN_1400ef0a6 body=153 status=ok
// SIG undefined FUN_1400ef0a6(void)

void FUN_1400ef0a6(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x18)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x18,8);
      uVar3 = uVar3 / 0x18;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,8);
    }
  }
  return;
}



// FUNCTION 1400ef140 FUN_1400ef140 body=362 status=ok
// SIG undefined FUN_1400ef140(void)

void FUN_1400ef140(longlong *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar4;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    uVar4 = (ulonglong)(int)uVar3;
  }
  else {
    uVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar4 + 0xf;
      if (uVar4 < 0x7ff1) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar8 = 0x32;
          if (0x32 < bVar1) {
            uVar8 = (ulonglong)bVar1;
          }
          uVar9 = 0x32 - (ulonglong)bVar1;
          do {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_1400ef1be;
            lVar5 = uVar8 + 1 + uVar9;
            uVar9 = uVar9 - 1;
          } while (lVar5 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar7 & 0xfffffffffffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
    }
  }
LAB_1400ef1be:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)uVar4) {
    uVar7 = uVar4 & 0xffffffff;
  }
  iVar6 = (int)uVar7;
  *(int *)((longlong)param_1 + 0xc) = iVar6;
  if ((*param_1 != 0) || (iVar6 != 0)) {
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1467ac60e(uVar7,1);
    }
    lVar5 = FUN_14001fdce(*param_1,uVar7,0x10);
    *param_1 = lVar5;
  }
  return;
}



// FUNCTION 1400ef2ac FUN_1400ef2ac body=370 status=ok
// SIG undefined FUN_1400ef2ac(void)

void FUN_1400ef2ac(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400ef335;
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
LAB_1400ef335:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1400ef41e FUN_1400ef41e body=105 status=ok
// SIG undefined FUN_1400ef41e(void)

void FUN_1400ef41e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  
  FUN_1400ef488();
  *(undefined4 *)(param_1 + 0x428) = 0;
  iVar1 = *(int *)(param_1 + 0x420);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x418);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        cVar4 = FUN_14023a47a(plVar3);
        if (cVar4 != '\0') {
          (**(code **)(*plVar3 + 0xa0))(plVar3);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1400ef488 FUN_1400ef488 body=154 status=ok
// SIG undefined FUN_1400ef488(void)

void FUN_1400ef488(longlong param_1)

{
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 **local_28;
  code *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400ef524(param_1 + 0x50,0);
  if (*(char *)(param_1 + 0x3e4) == '\x01') {
    *(undefined1 *)(param_1 + 0x3e4) = 0;
  }
  *(undefined1 *)(param_1 + 0x410) = 0;
  *(undefined4 *)(param_1 + 0x408) = 0;
  local_30 = &local_39;
  local_28 = &local_38;
  local_38 = &LAB_143888410;
  local_18 = &local_28;
  local_20 = FUN_1400ef576;
  FUN_14480914e(param_1);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ef524 FUN_1400ef524 body=81 status=ok
// SIG undefined FUN_1400ef524(void)

void FUN_1400ef524(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x38c)) {
    lVar1 = *(longlong *)(param_1 + 0x380);
    if (*(longlong *)(param_1 + 0x380) == 0) {
      lVar1 = param_1;
    }
    FUN_1448090f0(lVar1,*(undefined4 *)(param_1 + 0x388));
    *(undefined4 *)(param_1 + 0x388) = 0;
    return;
  }
  FUN_147f5bd86(param_1);
  return;
}



// FUNCTION 1400ef576 FUN_1400ef576 body=62 status=ok
// SIG undefined FUN_1400ef576(void)

void FUN_1400ef576(longlong *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1400ef5b4();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if (cVar1 != '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)*param_1;
                    /* WARNING: Could not recover jumptable at 0x0001400ef5a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(((undefined8 *)*param_1)[1],param_2,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}



// FUNCTION 1400ef5b4 FUN_1400ef5b4 body=57 status=ok
// SIG undefined FUN_1400ef5b4(void)

void FUN_1400ef5b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22db8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22db8 = FUN_140002ddd(FUN_14643b8ca,uVar1,L"GpsNodeState");
  }
  return;
}



// FUNCTION 1400ef5ee FUN_1400ef5ee body=748 status=ok
// SIG undefined FUN_1400ef5ee(void)

void FUN_1400ef5ee(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  float fVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  code *local_58;
  code *local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400ef488();
  lVar5 = *(longlong *)(param_1 + 0x48);
  FUN_1400ef8dc(lVar5);
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (((((*(int *)(lVar2 + 0x4c) != 0) && (uVar1 = *(uint *)(lVar2 + 0x48), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(lVar2 + 0x4c))))) &&
     (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar8 = *plVar6, lVar8 != 0)))) {
    if (DAT_14cac9ca8 == 0) {
      local_60 = &local_48;
      local_48 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1478c0a72;
      local_70 = &LAB_1417b2375;
      local_78 = L"Engine";
      local_80 = 0x1000000000;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_1400ef6bc;
  }
  lVar8 = 0;
LAB_1400ef6bc:
  *(longlong *)(param_1 + 0x418) = lVar8;
  if (*(char *)(lVar5 + 0x100) == '\x01') {
    FUN_140309ec4(lVar5 + 0x40,&local_48,lVar2 + 0x240);
    *(undefined8 *)(param_1 + 0x430) = local_38;
    *(undefined4 *)(param_1 + 0x420) = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0x424) = local_48._4_4_;
    *(undefined4 *)(param_1 + 0x428) = uStack_40;
    *(undefined4 *)(param_1 + 0x42c) = uStack_3c;
    fVar10 = (float)FUN_140309e34(lVar5 + 0xd8,lVar2 + 0x240,lVar5 + 0xf0);
    fVar10 = fVar10 * fVar10;
  }
  else {
    *(undefined8 *)(param_1 + 0x430) = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x420) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x428) = uVar3;
    fVar10 = 0.0;
  }
  *(float *)(param_1 + 0x438) = fVar10;
  local_48 = *(code **)(lVar5 + 0x198);
  lVar5 = FUN_14030a1e6(lVar5 + 0x180,lVar2 + 0x240);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x43c) = 0;
    iVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar5 + 0xc);
    *(uint *)(param_1 + 0x43c) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar4 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar4 = *(int *)(lVar5 + 0x10);
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(lVar5 + 0x10) = iVar7;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar4 = iVar7;
      }
    }
  }
  *(int *)(param_1 + 0x440) = iVar4;
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400ef8dc FUN_1400ef8dc body=554 status=ok
// SIG undefined FUN_1400ef8dc(void)

void FUN_1400ef8dc(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x1c0) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  if (*(char *)(param_1 + 0x160) == '\x01') {
    lVar5 = (longlong)*(int *)(param_1 + 0x158);
    if ((0 < lVar5) && (*(int *)(param_1 + 0x1a8) == 0)) {
      plVar1 = (longlong *)(param_1 + 0x1a0);
      if (*(int *)(param_1 + 0x1ac) < *(int *)(param_1 + 0x158)) {
        FUN_147f5bbcc(plVar1);
        lVar5 = (longlong)*(int *)(param_1 + 0x158);
        if (lVar5 == 0) goto LAB_1400ef917;
        lVar6 = *(longlong *)(param_1 + 0x150);
      }
      else {
        lVar6 = *(longlong *)(param_1 + 0x150);
      }
      lVar5 = lVar6 + lVar5 * 0x28;
      do {
        lVar3 = FUN_140007850(lVar6 + 8);
        if (lVar3 != 0) {
          lVar4 = FUN_144a797b2();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
            if (DAT_14c950c29 == '\x01') {
              FUN_14689c22e(lVar3);
            }
            iVar2 = *(int *)(param_1 + 0x1a8);
            *(uint *)(param_1 + 0x1a8) = iVar2 + 1U;
            if (*(uint *)(param_1 + 0x1ac) < iVar2 + 1U) {
              FUN_145735362(plVar1,iVar2);
            }
            *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar3;
            if (DAT_14c950c29 == '\x01') {
              FUN_14689c22e(lVar3);
            }
          }
        }
        lVar6 = lVar6 + 0x28;
      } while (lVar6 != lVar5);
    }
  }
LAB_1400ef917:
  if (*(char *)(param_1 + 0x178) == '\x01') {
    lVar5 = (longlong)*(int *)(param_1 + 0x170);
    if ((0 < lVar5) && (*(int *)(param_1 + 0x1b8) == 0)) {
      plVar1 = (longlong *)(param_1 + 0x1b0);
      if (*(int *)(param_1 + 0x1bc) < *(int *)(param_1 + 0x170)) {
        FUN_147f5bbcc(plVar1);
        lVar5 = (longlong)*(int *)(param_1 + 0x170);
        if (lVar5 == 0) {
          return;
        }
        lVar6 = *(longlong *)(param_1 + 0x168);
      }
      else {
        lVar6 = *(longlong *)(param_1 + 0x168);
      }
      lVar5 = lVar6 + lVar5 * 0x28;
      do {
        lVar3 = FUN_140007850(lVar6 + 8);
        if (lVar3 != 0) {
          lVar4 = FUN_144a797b2();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
            if (DAT_14c950c29 == '\x01') {
              FUN_14689c22e(lVar3);
            }
            iVar2 = *(int *)(param_1 + 0x1b8);
            *(uint *)(param_1 + 0x1b8) = iVar2 + 1U;
            if (*(uint *)(param_1 + 0x1bc) < iVar2 + 1U) {
              FUN_145735362(plVar1,iVar2);
            }
            *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar3;
            if (DAT_14c950c29 == '\x01') {
              FUN_14689c22e(lVar3);
            }
          }
        }
        lVar6 = lVar6 + 0x28;
      } while (lVar6 != lVar5);
    }
  }
  return;
}



// FUNCTION 1400efb06 FUN_1400efb06 body=1775 status=ok
// SIG undefined FUN_1400efb06(void)

void FUN_1400efb06(longlong param_1)

{
  void *_Dst;
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *_Dst_00;
  code *pcVar6;
  longlong *plVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  code *local_c8;
  code *local_c0;
  int local_b4;
  longlong local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1400ef488();
  local_b0 = param_1 + 0x420;
  FUN_1400ef524(local_b0,0);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x4c);
  if ((((iVar3 != 0) && (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x48), -1 < (int)uVar1))
      && ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar7 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar3)) &&
      (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
       (plVar7 = (longlong *)*plVar7, plVar7 != (longlong *)0x0)))))) {
    if (DAT_14cac9ca8 == 0) {
      local_d0 = &local_88;
      local_88 = FUN_141030f22;
      local_c0 = FUN_14081d0ea;
      local_c8 = FUN_14081d0ea;
      local_d8 = &LAB_1478c0a72;
      local_e0 = (code *)&LAB_1417b2375;
      local_e8 = L"Engine";
      local_f0 = 0x1000000000;
      local_f8 = 0x10000004;
      local_100 = 8;
      local_108 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
        DAT_14cac9ca8 + 0x30)) {
      if (DAT_14cb22240 == 0) {
        local_d0 = &local_88;
        local_88 = FUN_1449e2820;
        local_c0 = FUN_14081d0ea;
        local_c8 = (code *)&LAB_1464376fa;
        local_d8 = &LAB_147f28935;
        local_e0 = FUN_146437c39;
        local_e8 = L"Engine";
        local_f0 = 0;
        local_f8 = 0x10004001;
        local_100 = 8;
        local_108 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
      }
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,DAT_14cb22240);
      if (plVar7 != (longlong *)0x0) {
        if (DAT_14cb22240 == 0) {
          local_d0 = &local_88;
          local_88 = FUN_1449e2820;
          local_c0 = FUN_14081d0ea;
          local_c8 = (code *)&LAB_1464376fa;
          local_d8 = &LAB_147f28935;
          local_e0 = FUN_146437c39;
          local_e8 = L"Engine";
          local_f0 = 0;
          local_f8 = 0x10004001;
          local_100 = 8;
          local_108 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
        }
        plVar4 = (longlong *)FUN_144718840(plVar7,DAT_14cb22240);
        if (plVar4 != (longlong *)0x0 && plVar7 != plVar4) {
          *(undefined1 *)(param_1 + 0x418) = *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x40);
          lVar5 = (**(code **)(*plVar4 + 0x30))(plVar4);
          FUN_1408fa5a2(lVar5);
          if (0 < *(int *)(lVar5 + 0x90)) {
            lVar13 = 8;
            uVar14 = 0;
            local_a8 = plVar4;
            do {
              iVar3 = DAT_14c9647dc;
              if (*(char *)(param_1 + 0x418) == '\x01') {
                iVar2 = *(int *)(*(longlong *)(lVar5 + 0x88) + lVar13);
                if (((((iVar2 != 0) &&
                      (uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x88) + -4 + lVar13), -1 < (int)uVar1
                      )) && ((int)uVar1 < DAT_14c9647dc)) &&
                    ((plVar7 = (longlong *)
                               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                     plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar2)))) &&
                   (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar9 = *plVar7, lVar9 != 0)))) {
                  iVar2 = *(int *)(param_1 + 0x7a8);
                  *(uint *)(param_1 + 0x7a8) = iVar2 + 1U;
                  if (*(uint *)(param_1 + 0x7ac) < iVar2 + 1U) {
                    FUN_14052e0a0(local_b0,iVar2);
                    iVar3 = DAT_14c9647dc;
                  }
                  lVar10 = *(longlong *)(param_1 + 0x7a0);
                  if (*(longlong *)(param_1 + 0x7a0) == 0) {
                    lVar10 = local_b0;
                  }
                  local_70 = 8;
                  uVar1 = *(uint *)(lVar9 + 0xc);
                  local_88 = (code *)(ulonglong)uVar1;
                  if ((int)uVar1 < iVar3) {
                    lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                  }
                  else {
                    lVar9 = 0;
                  }
                  iVar3 = *(int *)(lVar9 + 0x10);
                  if (*(int *)(lVar9 + 0x10) == 0) {
                    LOCK();
                    iVar3 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar12 = DAT_14c964868 + 1;
                    bVar15 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar3;
                    if (bVar15) {
                      local_b4 = iVar12;
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar12);
                      iVar12 = local_b4;
                    }
                    LOCK();
                    iVar3 = *(int *)(lVar9 + 0x10);
                    bVar15 = iVar3 == 0;
                    if (bVar15) {
                      *(int *)(lVar9 + 0x10) = iVar12;
                      iVar3 = 0;
                    }
                    UNLOCK();
                    uVar1 = (uint)local_88;
                    if (bVar15) {
                      iVar3 = iVar12;
                    }
                  }
                  local_88._0_4_ = uVar1;
                  puVar11 = (undefined8 *)(lVar10 + (longlong)iVar2 * 0x38);
                  local_88 = (code *)CONCAT44(iVar3,(uint)local_88);
                  local_68 = 7;
                  *(ushort *)(puVar11 + 3) = local_70;
                  _Dst_00 = puVar11;
                  pcVar8 = (code *)&local_88;
                  if (0x18 < local_70) {
                    _Dst_00 = (undefined8 *)FUN_14001cc68(local_70,0);
                    *puVar11 = _Dst_00;
                    pcVar8 = local_88;
                  }
                  if (DAT_14c9a8d90 == (code *)0x0) {
                    memcpy(_Dst_00,pcVar8,(longlong)DAT_14c9a8cf0);
                  }
                  else {
                    (*DAT_14c9a8d90)();
                  }
                  *(byte *)(puVar11 + 4) = local_68;
                  puVar11[5] = 0;
                  puVar11[6] = 0;
                  pcVar8 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120)
                                     );
                  plVar4 = local_a8;
                  goto joined_r0x0001400efef1;
                }
              }
              else {
                FUN_14181770c(&local_a0,plVar4,uVar14 & 0xffffffff,1);
                iVar3 = *(int *)(param_1 + 0x7a8);
                *(uint *)(param_1 + 0x7a8) = iVar3 + 1U;
                if (*(uint *)(param_1 + 0x7ac) < iVar3 + 1U) {
                  FUN_14052e0a0(local_b0,iVar3);
                }
                lVar9 = *(longlong *)(param_1 + 0x7a0);
                if (*(longlong *)(param_1 + 0x7a0) == 0) {
                  lVar9 = local_b0;
                }
                _Dst = (void *)(lVar9 + (longlong)iVar3 * 0x38);
                local_70 = 0x18;
                local_88 = (code *)CONCAT44(uStack_9c,local_a0);
                uStack_80 = uStack_98;
                uStack_7c = uStack_94;
                local_78 = local_90;
                local_68 = 0xc;
                *(undefined2 *)(lVar9 + 0x18 + (longlong)iVar3 * 0x38) = 0x18;
                if (DAT_14c9a9330 == (code *)0x0) {
                  memcpy(_Dst,&local_88,(longlong)DAT_14c9a9290);
                }
                else {
                  (*DAT_14c9a9330)(_Dst,&local_88);
                }
                *(byte *)((longlong)_Dst + 0x20) = local_68;
                *(undefined8 *)((longlong)_Dst + 0x28) = 0;
                *(undefined8 *)((longlong)_Dst + 0x30) = 0;
                pcVar8 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
joined_r0x0001400efef1:
                if (pcVar8 != (code *)0x0) {
                  pcVar6 = (code *)&local_88;
                  if (0x18 < local_70) {
                    pcVar6 = local_88;
                  }
                  (*pcVar8)(pcVar6);
                }
                if (0x18 < local_70) {
                  FUN_1400020a8(local_88);
                }
              }
              uVar14 = uVar14 + 1;
              lVar13 = lVar13 + 0x30;
            } while ((longlong)uVar14 < (longlong)*(int *)(lVar5 + 0x90));
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f01f6 FUN_1400f01f6 body=13 status=ok
// SIG undefined FUN_1400f01f6(void)

void FUN_1400f01f6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1400f0204(param_1,0,param_2,param_3);
  return;
}



// FUNCTION 1400f0204 FUN_1400f0204 body=136 status=ok
// SIG undefined FUN_1400f0204(void)

void FUN_1400f0204(undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  char cVar1;
  undefined1 auStack_b8 [40];
  double local_90;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = 0.0;
  FUN_1400f0374(local_88,param_1,param_2,param_3);
  cVar1 = FUN_144809632(local_88,param_3,&local_90);
  if (cVar1 != '\0') {
    *param_4 = (float)local_90;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f028e FUN_1400f028e body=229 status=ok
// SIG undefined FUN_1400f028e(void)

double FUN_1400f028e(double *param_1,undefined8 param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  float fVar3;
  double dVar4;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar5 [16];
  
  if (1e-08 < ABS(*param_1)) {
    fVar3 = (float)((ulonglong)param_2 >> 0x20);
    auVar5._4_12_ = SUB1612(ZEXT816(0),4);
    auVar5._0_4_ = fVar3;
    auVar7 = roundps(auVar5,auVar5,1);
    fVar3 = (fVar3 - auVar7._0_4_) + 0.5 + -0.5;
    auVar5 = ZEXT416((uint)fVar3);
    if (0.99999994 <= fVar3) {
      auVar5 = ZEXT416(0x3f7fffff);
    }
    if (auVar5._0_4_ <= 0.0) {
      auVar2._12_4_ = 0;
      auVar2._0_12_ = auVar5._4_12_;
      auVar5 = auVar2 << 0x20;
    }
    dVar1 = param_1[3];
    dVar8 = param_1[2];
    dVar4 = (double)(float)(((double)auVar5._0_4_ +
                            (double)(((int)param_2 - *(int *)(param_1 + 5)) + (int)auVar7._0_4_)) /
                           *param_1);
    dVar6 = (dVar1 - dVar8) * dVar4 + dVar8;
    dVar8 = (dVar8 - param_1[1]) * dVar4 + param_1[1];
    dVar8 = (dVar6 - dVar8) * dVar4 + dVar8;
    return (((((param_1[4] - dVar1) * dVar4 + dVar1) - dVar6) * dVar4 + dVar6) - dVar8) * dVar4 +
           dVar8;
  }
  return param_1[4];
}



// FUNCTION 1400f0374 FUN_1400f0374 body=2241 status=ok
// SIG undefined FUN_1400f0374(void)

double * FUN_1400f0374(double *param_1,longlong param_2,undefined1 *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int *piVar5;
  float *pfVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  double dVar11;
  ulonglong uVar12;
  char cVar13;
  int iVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  bool bVar25;
  bool bVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  float fVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 *puVar33;
  double dVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  double local_110;
  double local_108;
  char local_100;
  int local_f8;
  undefined1 *local_f0;
  double local_e8;
  double local_e0;
  char local_d8;
  undefined8 local_d0;
  int local_c8;
  uint *local_c0;
  int local_b8;
  int local_b0;
  int local_ac;
  undefined1 local_a8 [8];
  double local_a0;
  uint local_98;
  float fStack_94;
  uint local_90;
  int local_8c;
  char local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar21 = *(int *)(param_2 + 0x60);
  lVar22 = (longlong)iVar21;
  if (lVar22 == 1) {
    uVar3 = **(undefined4 **)(param_2 + 0x58);
    *param_1 = (double)**(float **)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 1) = uVar3;
LAB_1400f07e7:
    *(undefined1 *)(param_1 + 10) = 1;
    dVar11 = NAN;
  }
  else {
    if (iVar21 == 0) {
      if (*(char *)(param_2 + 0x7c) == '\x01') {
        *param_1 = (double)*(float *)(param_2 + 0x78);
        *(undefined4 *)(param_1 + 1) = 0;
        goto LAB_1400f07e7;
      }
    }
    else {
      *(undefined1 *)(param_1 + 10) = 0;
      param_1[0xb] = -NAN;
      puVar4 = *(uint **)(param_2 + 0x58);
      uVar2 = *puVar4;
      uVar19 = (uint)param_4;
      fVar30 = (float)((ulonglong)param_4 >> 0x20);
      if (((int)uVar19 < (int)uVar2) || ((uVar2 == uVar19 && (fVar30 < 0.0)))) {
        cVar1 = *(char *)(param_2 + 0x50);
        if (cVar1 != '\x05') {
          dVar11 = (double)((ulonglong)uVar2 << 0x20 | 0x80000000);
          uVar17 = uVar2;
          if (cVar1 == '\x04') {
            fVar30 = **(float **)(param_2 + 0x68);
LAB_1400f070e:
            *param_1 = (double)fVar30;
            uVar15 = 1;
            lVar22 = 8;
          }
          else {
            if (cVar1 != '\x03') goto LAB_1400f0435;
            pfVar6 = *(float **)(param_2 + 0x68);
            fVar30 = *pfVar6;
            cVar1 = *(char *)(pfVar6 + 6);
            if (cVar1 == '\0') {
              dVar34 = 0.0;
              if (puVar4[1] - uVar2 != 0) {
                dVar34 = (double)(pfVar6[7] - fVar30) / (double)(int)(puVar4[1] - uVar2);
              }
            }
            else {
              if (cVar1 != '\x02') {
                if (cVar1 != '\x01') goto LAB_1400f0725;
                goto LAB_1400f070e;
              }
              dVar34 = (double)pfVar6[1];
            }
            *param_1 = dVar34;
            param_1[1] = (double)fVar30;
            uVar15 = 2;
            lVar22 = 0x10;
          }
          goto LAB_1400f071a;
        }
      }
      else {
        uVar17 = puVar4[iVar21 + -1];
        if ((((int)uVar17 < (int)uVar19) || ((uVar17 == uVar19 && (0.0 < fVar30)))) &&
           (cVar1 = *(char *)(param_2 + 0x51), cVar1 != '\x05')) {
          dVar11 = (double)((ulonglong)uVar17 | 0x7fffffff00000000);
          if (cVar1 == '\x04') {
            fVar30 = *(float *)(*(longlong *)(param_2 + 0x68) +
                               (longlong)(*(int *)(param_2 + 0x70) + -1) * 0x1c);
LAB_1400f06d1:
            *param_1 = (double)fVar30;
            uVar15 = 1;
            lVar22 = 8;
          }
          else {
            if (cVar1 != '\x03') goto LAB_1400f0435;
            lVar18 = *(longlong *)(param_2 + 0x68);
            lVar8 = (longlong)(*(int *)(param_2 + 0x70) + -1) * 0x1c;
            fVar30 = *(float *)(lVar18 + lVar8);
            cVar1 = *(char *)(lVar18 + 0x18 + lVar8);
            if (cVar1 == '\0') {
              dVar34 = 0.0;
              if (uVar17 - puVar4[lVar22 + -2] != 0) {
                dVar34 = (double)(fVar30 - *(float *)(lVar18 + lVar22 * 0x1c + -0x38)) /
                         (double)(int)(uVar17 - puVar4[lVar22 + -2]);
              }
            }
            else {
              if (cVar1 != '\x02') {
                if (cVar1 != '\x01') goto LAB_1400f0725;
                goto LAB_1400f06d1;
              }
              dVar34 = (double)*(float *)(lVar18 + lVar8 + 8);
            }
            *param_1 = dVar34;
            param_1[1] = (double)fVar30;
            uVar15 = 2;
            lVar22 = 0x10;
          }
LAB_1400f071a:
          *(uint *)((longlong)param_1 + lVar22) = uVar17;
          *(undefined1 *)(param_1 + 10) = uVar15;
          goto LAB_1400f0721;
        }
      }
LAB_1400f0435:
      uVar17 = puVar4[iVar21 + -1];
      FUN_140108ff7(&local_a0,uVar2,uVar17,param_4);
      if (((int)uVar19 < (int)uVar2) || ((uVar2 == uVar19 && (fVar30 < 0.0)))) {
        cVar1 = *(char *)(param_2 + 0x50);
LAB_1400f08f1:
        if (cVar1 == '\x02') {
          if ((local_90 & 1) != 0) {
            local_88 = '\x01';
            fVar30 = fStack_94 + 0.5 + -0.5;
            if (0.99999994 <= fVar30) {
              fVar30 = 0.99999994;
            }
            if (fVar30 <= 0.0) {
              fVar30 = 0.0;
            }
            fVar30 = 0.0 - fVar30;
            auVar32 = roundps(ZEXT416((uint)fVar30),ZEXT416((uint)fVar30),1);
            local_98 = ((uVar17 + uVar2) - local_98) + -1 + (int)auVar32._0_4_;
            fStack_94 = (fVar30 - auVar32._0_4_) + 0.5 + -0.5;
            if (0.99999994 <= fStack_94) {
              fStack_94 = 0.99999994;
            }
            if (fStack_94 <= 0.0) {
              fStack_94 = 0.0;
            }
          }
        }
        else if (cVar1 == '\x01') {
          local_a0 = (double)(int)local_90 *
                     ((double)(*(float **)(param_2 + 0x68))[lVar22 * 7 + -7] -
                     (double)**(float **)(param_2 + 0x68));
        }
      }
      else if (((int)uVar17 < (int)uVar19) || ((uVar17 == uVar19 && (0.0 < fVar30)))) {
        cVar1 = *(char *)(param_2 + 0x51);
        goto LAB_1400f08f1;
      }
      fVar30 = fStack_94;
      uVar19 = local_98;
      uVar20 = (ulonglong)local_98;
      if (((int)uVar2 <= (int)local_98) && ((int)local_98 <= (int)uVar17)) {
        local_ac = -1;
        local_b0 = -1;
        if (param_3 == (undefined1 *)0x0) {
LAB_1400f04cf:
          local_d0 = *(undefined8 *)(param_2 + 0x58);
          local_118 = local_a8;
          local_c8 = iVar21;
          FUN_1448271d1(&local_d0,CONCAT44(fVar30,uVar19),&local_ac,&local_b0);
          iVar24 = local_ac;
        }
        else {
          iVar24 = *(int *)(param_3 + 0x10);
          uVar9 = CONCAT44(fStack_94,local_98);
          if (iVar24 == -1) {
            local_118 = param_3;
            local_c0 = puVar4;
            local_b8 = iVar21;
            FUN_1448271d1(&local_c0,uVar9,param_3 + 8,param_3 + 0xc);
            iVar24 = *(int *)(param_2 + 0x60);
            *(int *)(param_3 + 0x10) = iVar24;
            *(undefined8 *)(param_3 + 0x14) = uVar9;
            iVar21 = *(int *)(param_2 + 0x60);
          }
          if ((((iVar24 != iVar21) || (*(uint *)(param_3 + 0x14) != uVar19)) ||
              (*(float *)(param_3 + 0x18) != fVar30)) ||
             (NAN(*(float *)(param_3 + 0x18)) || NAN(fVar30))) goto LAB_1400f04cf;
          iVar24 = *(int *)(param_3 + 8);
          local_b0 = *(int *)(param_3 + 0xc);
        }
        if (iVar24 == -1) {
          uVar12 = 0x7fffffff;
          if (uVar20 != 0x7fffffff) {
            uVar12 = (ulonglong)(uVar19 + 1);
          }
          lVar22 = *(longlong *)(param_2 + 0x58);
          lVar18 = *(longlong *)(param_2 + 0x68);
          iVar24 = local_b0;
LAB_1400f084b:
          dVar11 = (double)(uVar12 << 0x20 | uVar20);
          uVar3 = *(undefined4 *)(lVar22 + (longlong)iVar24 * 4);
          *param_1 = (double)*(float *)(lVar18 + (longlong)iVar24 * 0x1c) + local_a0;
          *(undefined4 *)(param_1 + 1) = uVar3;
          uVar15 = 1;
        }
        else {
          lVar22 = (longlong)local_b0;
          if (lVar22 == -1) {
            uVar12 = 0x7fffffff;
            if (uVar20 != 0x7fffffff) {
              uVar12 = (ulonglong)(uVar19 + 1);
            }
            lVar22 = *(longlong *)(param_2 + 0x58);
            lVar18 = *(longlong *)(param_2 + 0x68);
            goto LAB_1400f084b;
          }
          piVar5 = *(int **)(param_2 + 0x58);
          lVar18 = *(longlong *)(param_2 + 0x68);
          iVar23 = piVar5[lVar22];
          iVar16 = piVar5[iVar24];
          iVar14 = iVar23 - iVar16;
          lVar8 = (longlong)iVar24 * 0x1c;
          cVar1 = *(char *)(lVar18 + 0x18 + lVar8);
          lVar22 = lVar22 * 0x1c;
          dVar27 = (double)*(float *)(lVar18 + 8 + lVar8);
          dVar34 = (double)*(float *)(lVar18 + 0x10 + lVar8);
          puVar36 = (undefined1 *)((double)*(float *)(lVar18 + lVar8) + local_a0);
          bVar25 = (*(byte *)(lVar18 + 0x14 + lVar8) & 0xfe) == 2;
          dVar28 = (double)*(float *)(lVar18 + 4 + lVar22);
          puVar7 = (undefined1 *)((double)*(float *)(lVar18 + lVar22) + local_a0);
          dVar31 = (double)*(float *)(lVar18 + 0xc + lVar22);
          bVar26 = (*(byte *)(lVar18 + 0x14 + lVar22) & 0xfd) == 1;
          puVar33 = puVar7;
          puVar35 = puVar36;
          bVar10 = bVar25;
          dVar11 = dVar31;
          if (local_88 == '\x01') {
            dVar29 = -dVar28;
            dVar28 = -dVar27;
            iVar24 = piVar5[iVar21 + -1] - iVar23;
            iVar23 = (piVar5[iVar21 + -1] - iVar16) + *piVar5;
            puVar33 = puVar36;
            puVar35 = puVar7;
            iVar16 = iVar24 + *piVar5;
            bVar10 = bVar26;
            bVar26 = bVar25;
            dVar11 = dVar34;
            dVar34 = dVar31;
            dVar27 = dVar29;
          }
          dVar31 = (double)iVar14;
          iVar16 = iVar16 + local_8c * local_90;
          iVar23 = iVar23 + local_8c * local_90;
          cVar13 = '\x02';
          if (*(char *)(lVar18 + 0x18 + lVar22) != '\x02') {
            cVar13 = cVar1;
          }
          if (DAT_14c760fd8 == 0) {
            cVar13 = cVar1;
          }
          if (cVar1 != '\0') {
            cVar13 = cVar1;
          }
          if (cVar13 == '\x02') {
            if ((((((double)puVar36 == (double)puVar7) &&
                  (!NAN((double)puVar36) && !NAN((double)puVar7))) &&
                 ((dVar27 == 0.0 &&
                  ((((!NAN(dVar27) && (dVar28 == 0.0)) && (!NAN(dVar28))) &&
                   ((dVar34 == 0.0 && (!NAN(dVar34))))))))) && (dVar11 == 0.0)) && (!NAN(dVar11)))
            goto LAB_1400f0680;
            if (bVar10 == false && bVar26 == false) {
              *param_1 = dVar31;
              param_1[1] = (double)puVar35;
              param_1[2] = dVar27 * dVar31 * 0.3333333333333333 + (double)puVar35;
              param_1[3] = (double)puVar33 - dVar28 * dVar31 * 0.3333333333333333;
              param_1[4] = (double)puVar33;
              *(int *)(param_1 + 5) = iVar16;
              uVar15 = 6;
            }
            else {
              local_118 = puVar35;
              local_110 = dVar27;
              local_108 = dVar34;
              local_100 = bVar10;
              local_f8 = iVar23;
              local_f0 = puVar33;
              local_e8 = dVar28;
              local_e0 = dVar11;
              local_d8 = bVar26;
              FUN_1475268c8(param_1,*(undefined8 *)(param_2 + 0x108),iVar16,iVar16);
              uVar15 = 7;
            }
          }
          else {
            if (cVar13 == '\0') {
              dVar11 = (double)puVar33 - (double)puVar35;
              if ((dVar11 != 0.0) || (NAN(dVar11))) {
                *param_1 = dVar11 / dVar31;
                param_1[1] = (double)puVar35;
                *(int *)(param_1 + 2) = iVar16;
                uVar15 = 2;
                goto LAB_1400f07c1;
              }
            }
LAB_1400f0680:
            *param_1 = (double)puVar35;
            *(int *)(param_1 + 1) = iVar16;
            uVar15 = 1;
          }
LAB_1400f07c1:
          dVar11 = (double)CONCAT44(iVar23,iVar16);
        }
        *(undefined1 *)(param_1 + 10) = uVar15;
        goto LAB_1400f0721;
      }
    }
    *(undefined1 *)(param_1 + 10) = 0;
    dVar11 = -NAN;
  }
LAB_1400f0721:
  param_1[0xb] = dVar11;
LAB_1400f0725:
  if ((local_80 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1400f0c36 FUN_1400f0c36 body=35 status=ok
// SIG undefined FUN_1400f0c36(void)

void FUN_1400f0c36(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1400f0c5a(param_1,param_3);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(param_3 + 0x38);
  }
  return;
}



// FUNCTION 1400f0c5a FUN_1400f0c5a body=130 status=ok
// SIG undefined FUN_1400f0c5a(void)

longlong FUN_1400f0c5a(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_144837e54(param_2,0);
  lVar2 = *(longlong *)(param_2 + 0x30);
  if (lVar2 == 0) {
    uVar1 = (**(code **)(*param_1 + 0x470))(param_1);
    *(undefined8 *)(param_2 + 0x30) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x480))(param_1);
    *(undefined8 *)(param_2 + 0x38) = uVar1;
    FUN_1400f0d6e(param_1,param_2,0);
    lVar2 = *(longlong *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x40) != *(int *)(param_2 + 0x44)) {
    uVar1 = FUN_140067708();
    FUN_1446e7478(param_2 + 0x48,lVar2,uVar1,1);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x44);
  }
  return lVar2;
}



// FUNCTION 1400f0cdc FUN_1400f0cdc body=46 status=ok
// SIG undefined FUN_1400f0cdc(void)

void FUN_1400f0cdc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1438ab4be();
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined1 *)((longlong)puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  return;
}



// FUNCTION 1400f0d0a FUN_1400f0d0a body=100 status=ok
// SIG undefined FUN_1400f0d0a(void)

void FUN_1400f0d0a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14181adb8();
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[1] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  *puVar1 = &PTR_FUN_14acb7a80;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0xff7fffff7f7fffff;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0xbf800000;
  return;
}



// FUNCTION 1400f0d6e FUN_1400f0d6e body=163 status=ok
// SIG undefined FUN_1400f0d6e(void)

void FUN_1400f0d6e(undefined8 param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [36];
  undefined1 local_54 [12];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x30), lVar1 != 0)) {
    if (param_3 == '\0') {
      FUN_1400f0e12(param_2,local_54,1);
      FUN_1448075d0(local_48,local_54);
    }
    else {
      FUN_1447a97f4(local_48,param_2);
    }
    FUN_1400f0e84(lVar1 + 8,local_48,param_2);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f0e12 FUN_1400f0e12 body=113 status=ok
// SIG undefined FUN_1400f0e12(void)

void FUN_1400f0e12(int *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (((*param_1 != 0) && (iVar1 = param_1[1], iVar1 != 0)) && (*param_1 != DAT_14c948000)) {
    if ((iVar1 < 2) && (param_1[9] < 1)) {
      param_1 = param_1 + 2;
    }
    else {
      param_1 = *(int **)(param_1 + 6);
    }
    if (iVar1 == 1) {
      piVar3 = (int *)&DAT_14c948618;
      if (param_3 == 1) {
        piVar3 = param_1;
      }
      *(int *)(param_2 + 1) = piVar3[2];
      uVar2 = *(undefined8 *)piVar3;
      goto LAB_1400f0e4d;
    }
    if (1 < iVar1) {
      *(int *)(param_2 + 1) = param_1[5];
      uVar2 = *(undefined8 *)(param_1 + 3);
      goto LAB_1400f0e4d;
    }
  }
  *(undefined4 *)(param_2 + 1) = DAT_14c948620;
  uVar2 = DAT_14c948618;
LAB_1400f0e4d:
  *param_2 = uVar2;
  return;
}



// FUNCTION 1400f0e84 FUN_1400f0e84 body=280 status=ok
// SIG undefined FUN_1400f0e84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f0e84(undefined8 *param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined1 auStack_58 [40];
  int *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_3;
  if (*param_2 == *param_3) {
    if ((*(char *)(param_1 + 1) != '\0') &&
       (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
      if (plVar1[3] != 0) {
        FUN_1400020a8();
      }
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
      _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
      *plVar1 = (longlong)DAT_14c9a0ea0;
      DAT_14c9a0ea0 = plVar1;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    }
    uVar2 = 0;
  }
  else {
    if ((*(char *)(param_1 + 1) != '\0') &&
       (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
      if (plVar1[3] != 0) {
        FUN_1400020a8();
      }
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
      _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
      *plVar1 = (longlong)DAT_14c9a0ea0;
      DAT_14c9a0ea0 = plVar1;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    }
    param_3 = (int *)FUN_1400f0f9e(&DAT_14c9a0ea0,param_2,&local_30);
    uVar2 = 2;
  }
  *param_1 = param_3;
  *(undefined1 *)(param_1 + 1) = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f0f9e FUN_1400f0f9e body=90 status=ok
// SIG undefined FUN_1400f0f9e(void)

longlong FUN_1400f0f9e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  lVar2 = FUN_1400b0774(param_1);
  lVar1 = *param_3;
  FUN_1447a97f4(lVar2,param_2);
  *(undefined2 *)(lVar2 + 0x28) = *(undefined2 *)(lVar1 + 0x28);
  *(longlong *)(lVar2 + 0x30) = lVar1;
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x10));
  return lVar2;
}



// FUNCTION 1400f1004 FUN_1400f1004 body=136 status=ok
// SIG undefined FUN_1400f1004(void)

void FUN_1400f1004(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_1400f108c(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 8 + *param_1),0,(ulonglong)uVar2 << 3);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146e105c6(param_1);
    return;
  }
  return;
}



// FUNCTION 1400f108c FUN_1400f108c body=353 status=ok
// SIG undefined FUN_1400f108c(void)

void FUN_1400f108c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400f1113;
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
LAB_1400f1113:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1400f1200 FUN_1400f1200 body=423 status=ok
// SIG undefined FUN_1400f1200(void)

void FUN_1400f1200(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  byte param_5)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_70;
  
  if (((param_5 & *(byte *)(param_1 + 0x388)) == 1) && (DAT_14c760da4 != 0)) {
    uVar2 = *(uint *)(param_2 + 0x17c);
    uVar7 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    if (uVar2 == 0) {
      local_70 = 0x20;
    }
    else {
      local_70 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> local_70 & 1) == 0; local_70 = local_70 + 1) {
        }
      }
    }
    uVar6 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    do {
      uVar5 = 1 << ((byte)uVar6 & 0x1f);
      if ((uVar2 >> (uVar6 & 0x1f) & 1) == 0) {
        if ((*(uint *)(param_1 + 0x3a0) & uVar5) == 0) {
          iVar8 = *(int *)(param_1 + 0x398);
          *(uint *)(param_1 + 0x398) = iVar8 + 1U;
          if (*(uint *)(param_1 + 0x39c) < iVar8 + 1U) {
            FUN_147203348((longlong *)(param_1 + 0x390),iVar8);
          }
          lVar3 = *(longlong *)(param_1 + 0x390);
        }
        else {
          lVar3 = (ulonglong)uVar6 * 0x10;
          plVar1 = (longlong *)(param_1 + 0x3a8 + lVar3);
          iVar8 = *(int *)(param_1 + 0x3b0 + lVar3);
          if (iVar8 == 0) {
            puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
            *puVar4 = 0;
            puVar4[1] = 0;
            *(undefined8 **)(param_1 + 0x428 + (ulonglong)uVar6 * 8) = puVar4;
            iVar8 = (int)plVar1[1];
          }
          *(uint *)(plVar1 + 1) = iVar8 + 1U;
          if (*(uint *)((longlong)plVar1 + 0xc) < iVar8 + 1U) {
            FUN_147203348(plVar1,iVar8);
          }
          lVar3 = *plVar1;
        }
        plVar1 = (longlong *)(lVar3 + (longlong)iVar8 * 0x48);
        *plVar1 = param_3;
        if (param_3 != 0) {
          LOCK();
          *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
          UNLOCK();
        }
        plVar1[3] = 0;
        plVar1[4] = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
        *(int *)(plVar1 + 5) = local_70;
        *(uint *)((longlong)plVar1 + 0x2c) = uVar6;
        *(undefined2 *)(plVar1 + 6) = 0;
        plVar1[7] = 0;
        plVar1[8] = 0;
      }
      uVar7 = uVar7 & ~uVar5;
      if (uVar7 == 0) {
        uVar6 = 0x20;
      }
      else {
        uVar6 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
      }
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 1400f13a7 FUN_1400f13a7 body=196 status=ok
// SIG undefined FUN_1400f13a7(void)

undefined8 * FUN_1400f13a7(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_58 [36];
  undefined2 local_34;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  lVar2 = 0;
  do {
    local_34 = *(undefined2 *)((longlong)&DAT_149e01e5c + lVar2);
    local_32 = 0;
    FUN_1448097c4(param_1,&local_34,param_3,1);
    lVar2 = lVar2 + 2;
  } while (lVar2 != 0x38);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f146c FUN_1400f146c body=236 status=ok
// SIG undefined FUN_1400f146c(void)

void FUN_1400f146c(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    *(int *)((longlong)param_1 + 0xc) = param_2;
    if (param_2 != 0) {
      if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456bd9fc(param_2,0x10);
      }
      iVar3 = *(int *)(param_1 + 1);
      _Src = (void *)*param_1;
      iVar5 = param_2 * 0x10;
      puVar2 = TlsGetValue(DAT_14ca954e4);
      uVar4 = (ulonglong)((uint)(0xf < iVar5) * 8);
      lVar1 = uVar4 + 7;
      uVar4 = uVar4 ^ 0xfffffffffffffff8;
      _Dst = (void *)(*puVar2 + lVar1 & uVar4);
      uVar6 = (longlong)_Dst + (longlong)iVar5;
      if (puVar2[1] < uVar6) {
        FUN_140023dd8(puVar2,iVar5 + (uint)(0xf < iVar5) * 8 + 8);
        _Dst = (void *)(lVar1 + *puVar2 & uVar4);
        uVar6 = (longlong)iVar5 + (longlong)_Dst;
      }
      *puVar2 = uVar6;
      *param_1 = _Dst;
      if (iVar3 != 0 && _Src != (void *)0x0) {
        if (param_2 < iVar3) {
          iVar3 = param_2;
        }
        memcpy(_Dst,_Src,(longlong)iVar3 << 4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1400f155a FUN_1400f155a body=87 status=ok
// SIG undefined FUN_1400f155a(void)

void FUN_1400f155a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_1400f15b2();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1400f15b2 FUN_1400f15b2 body=234 status=ok
// SIG undefined FUN_1400f15b2(void)

void FUN_1400f15b2(undefined8 *param_1,int param_2,int param_3)

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
      FUN_1456bd9fc(param_3,8);
    }
    _Src = (void *)*param_1;
    iVar4 = param_3 * 8;
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
      memcpy(_Dst,_Src,(longlong)param_2 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 1400f169e FUN_1400f169e body=155 status=ok
// SIG undefined FUN_1400f169e(void)

void FUN_1400f169e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_1400f173a();
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar3 = (longlong)*(int *)(param_1 + 0x68) * 0x3a0;
    do {
      FUN_1400f1774(param_2,uVar1,lVar2,0);
      lVar2 = lVar2 + 0x3a0;
      lVar3 = lVar3 + -0x3a0;
    } while (lVar3 != 0);
  }
  uVar1 = FUN_1400f173a();
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar3 = (longlong)*(int *)(param_1 + 0x78) * 0x3a0;
    do {
      FUN_1400f1774(param_2,uVar1,lVar2,0);
      lVar2 = lVar2 + 0x3a0;
      lVar3 = lVar3 + -0x3a0;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1400f173a FUN_1400f173a body=57 status=ok
// SIG undefined FUN_1400f173a(void)

void FUN_1400f173a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56838 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56838 = FUN_140002ddd(FUN_1464b8770,uVar1,L"PipelineDamageInput");
  }
  return;
}



// FUNCTION 1400f1774 FUN_1400f1774 body=85 status=ok
// SIG undefined FUN_1400f1774(void)

void FUN_1400f1774(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x38))();
  bVar1 = (**(code **)(*param_1 + 0x48))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001400f17c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)&PTR_FUN_149eb10f0 + (ulonglong)((uVar2 & 0xff) * 0x10 + (uint)bVar1 * 8)))
            (param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1400f17ca FUN_1400f17ca body=3 status=ok
// SIG undefined FUN_1400f17ca(void)

undefined1 FUN_1400f17ca(void)

{
  return 1;
}



// FUNCTION 1400f17ce FUN_1400f17ce body=2690 status=ok
// SIG undefined FUN_1400f17ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400f17ce(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  LPCRITICAL_SECTION p_Var3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  byte bVar15;
  byte bVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  longlong *plVar25;
  uint uVar26;
  longlong lVar27;
  bool bVar28;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 *local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  longlong *local_98;
  LPCRITICAL_SECTION local_90;
  longlong *local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x268) == '\0') {
    do {
      cVar6 = (**(code **)(**(longlong **)(param_1 + 600) + 0x28))
                        (*(longlong **)(param_1 + 600),param_1 + 0x140);
    } while (cVar6 != '\0');
  }
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  local_b8 = param_1;
  (**(code **)(**(longlong **)(param_1 + 600) + 0x30))(*(longlong **)(param_1 + 600),&local_88);
  plVar10 = local_88;
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  if (plVar10 != (longlong *)0x0) {
    plVar7 = (longlong *)*plVar10;
    *plVar10 = 0;
    local_b0 = (undefined8 *)(local_b8 + 0x1a8);
    local_90 = (LPCRITICAL_SECTION)(local_b8 + 0xe8);
    puVar14 = (undefined8 *)(local_b8 + 0x2c0);
    while( true ) {
      *(undefined4 *)(plVar10 + 0x19) = 3;
      LOCK();
      *(int *)(plVar10[2] + 0x30) = *(int *)(plVar10[2] + 0x30) + -1;
      UNLOCK();
      puVar13 = (undefined8 *)plVar10[0x14];
      local_98 = plVar7;
      if (puVar13 == (undefined8 *)0x0) {
        FUN_14498bc70(local_b0,plVar10,0);
        plVar7 = plVar10 + 8;
        if ((longlong *)plVar10[0x10] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar10[0x10];
        }
        lVar2 = plVar10[0x11];
        if ((longlong)(int)lVar2 != 0) {
          lVar24 = 0;
          local_a0 = plVar7;
          do {
            puVar13 = *(undefined8 **)((longlong)plVar7 + lVar24);
            bVar15 = *(byte *)(puVar13 + 0x1d) | *(byte *)((longlong)plVar10 + 0xc5);
            *(byte *)(puVar13 + 0x1d) = bVar15;
            bVar16 = *(byte *)((longlong)puVar13 + 0xe9) | *(byte *)((longlong)plVar10 + 0xc6);
            *(byte *)((longlong)puVar13 + 0xe9) = bVar16;
            if (1 < *(int *)(puVar13 + 10)) {
              if (bVar16 == 0 && bVar15 == 0) {
                lVar12 = puVar13[0x16];
                if (lVar12 == 0) {
                  lVar12 = FUN_14001cc68(*(undefined4 *)(puVar13 + 5),0);
                  puVar13[0x16] = lVar12;
                }
                uVar18 = plVar10[3] - puVar13[3];
                uVar20 = -uVar18;
                uVar19 = (longlong)uVar18 >> 0x3f;
                uVar21 = uVar19 & uVar18;
                if ((longlong)uVar18 < 1) {
                  uVar18 = 0;
                }
                uVar8 = (ulonglong)*(uint *)(puVar13 + 5) + puVar13[3];
                uVar22 = plVar10[3] + plVar10[4];
                lVar27 = uVar22 - uVar8;
                if (uVar22 < uVar8) {
                  lVar27 = 0;
                }
                memcpy((void *)(uVar18 + lVar12),
                       (void *)((uVar19 & uVar20) + *(longlong *)(plVar10[6] + 8)),
                       (uVar21 + plVar10[4]) - lVar27);
                plVar7 = local_a0;
              }
              p_Var3 = local_90;
              piVar1 = (int *)((longlong)plVar10 + 0x3c);
              *piVar1 = *piVar1 + -1;
              if ((*piVar1 == 0) && (puVar9 = (undefined8 *)plVar10[6], puVar9 != (undefined8 *)0x0)
                 ) {
                EnterCriticalSection(local_90);
                lVar12 = local_b8;
                *puVar9 = *(undefined8 *)(local_b8 + 0x110);
                *(undefined8 **)(local_b8 + 0x110) = puVar9;
                LeaveCriticalSection(p_Var3);
                plVar7 = local_a0;
                (**(code **)(**(longlong **)(lVar12 + 600) + 0x38))();
                plVar10[6] = 0;
              }
            }
            piVar1 = (int *)(puVar13 + 6);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_144936b14(local_b0);
              puVar9 = *(undefined8 **)(local_b8 + 0x2c8);
              if (*(undefined8 **)(local_b8 + 0x2c8) == (undefined8 *)0x0) {
                puVar9 = puVar14;
              }
              *puVar9 = puVar13;
              *(undefined8 **)(local_b8 + 0x2c8) = puVar13;
              *puVar13 = 0;
            }
            lVar24 = lVar24 + 8;
          } while ((longlong)(int)lVar2 * 8 != lVar24);
        }
      }
      else {
        bVar15 = *(byte *)(puVar13 + 7) | *(byte *)((longlong)plVar10 + 0xc5);
        *(byte *)(puVar13 + 7) = bVar15;
        piVar1 = (int *)((longlong)puVar13 + 0x34);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          if (*(char *)((longlong)puVar13 + 0x39) == '\0') {
            puVar9 = (undefined8 *)*puVar13;
            *puVar13 = 0;
            if (bVar15 != 0) {
              *(undefined1 *)((longlong)puVar9 + 0xb9) = 1;
            }
            puVar9[1] = 0;
            if (*(undefined8 **)(local_b8 + 0x308) == (undefined8 *)0x0) {
              *(undefined8 **)(local_b8 + 0x300) = puVar9;
            }
            else {
              **(undefined8 **)(local_b8 + 0x308) = puVar9;
            }
            *(undefined8 **)(local_b8 + 0x308) = puVar9;
            *puVar9 = 0;
          }
          FUN_144aa7232(local_b0);
        }
      }
      if (local_98 == (longlong *)0x0) break;
      plVar7 = (longlong *)*local_98;
      *local_98 = 0;
      plVar10 = local_98;
    }
  }
  lVar24 = local_b8;
  lVar2 = local_b8 + -8;
  p_Var3 = (LPCRITICAL_SECTION)(local_b8 + 0x2d0);
  EnterCriticalSection(p_Var3);
  puVar14 = *(undefined8 **)(lVar24 + 0x2f8);
  *(undefined8 *)(lVar24 + 0x2f8) = 0;
  LeaveCriticalSection(p_Var3);
  while (puVar14 != (undefined8 *)0x0) {
    puVar13 = (undefined8 *)*puVar14;
    FUN_142b083a4(lVar2,puVar14);
    puVar14 = puVar13;
  }
  plVar10 = (longlong *)(**(longlong **)(lVar24 + 0x298) + 8);
  if (plVar10 != (longlong *)0x0 && **(longlong **)(lVar24 + 0x298) != 0) {
    while ((*plVar10 == 0 || ((*(byte *)(*plVar10 + 0xa0) & 1) != 0))) {
      lVar12 = **(longlong **)(lVar24 + 0x298);
      if (lVar12 != 0) {
        puVar14 = *(undefined8 **)(lVar12 + 8);
        *(undefined8 *)(lVar12 + 8) = 0;
        *(longlong *)(lVar24 + 0x298) = lVar12;
        if (puVar14 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar14 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
      }
      if ((**(longlong **)(lVar24 + 0x298) == 0) ||
         (plVar10 = (longlong *)(**(longlong **)(lVar24 + 0x298) + 8), plVar10 == (longlong *)0x0))
      break;
    }
  }
  if ((((DAT_14c75f5f0 != 0) &&
       ((DAT_14c9a020c < 1 &&
        (plVar10 = (longlong *)(**(longlong **)(lVar24 + 0x298) + 8),
        plVar10 != (longlong *)0x0 && **(longlong **)(lVar24 + 0x298) != 0)))) &&
      (((*(ulonglong *)(*plVar10 + 0x80) & 0x3000000000000000) != 0 ||
       (DAT_14c82ba04 <= DAT_14c82ba50)))) && (DAT_14c82ba84 <= DAT_14c82bad0)) {
    FUN_14707a60a();
    lVar12 = **(longlong **)(lVar24 + 0x298);
    if (lVar12 != 0) {
      puVar14 = *(undefined8 **)(lVar12 + 8);
      *(undefined8 *)(lVar12 + 8) = 0;
      *(longlong *)(lVar24 + 0x298) = lVar12;
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar14 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar14)(puVar14,1);
        }
      }
    }
  }
  local_b0 = (undefined8 *)(lVar24 + 0x2c0);
  if (*(longlong **)(lVar24 + 0x2c0) != (longlong *)0x0) {
    local_a0 = (longlong *)0x52857fa480;
    local_98 = (longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
    plVar10 = *(longlong **)(lVar24 + 0x2c0);
    do {
      plVar7 = (longlong *)*plVar10;
      if (*(char *)((longlong)plVar10 + 0xe9) == '\0' && (char)plVar10[0x1d] == '\0') {
        puVar14 = *(undefined8 **)(lVar24 + 0x2b8);
        if (puVar14 == (undefined8 *)0x0) {
          plVar10[0x15] = 0;
          *local_b0 = plVar10;
          goto LAB_1400f218f;
        }
        *(undefined8 *)(lVar24 + 0x2b8) = *puVar14;
        plVar10[0x15] = (longlong)puVar14;
        plVar11 = plVar10 + 0xb;
        if ((longlong *)plVar10[0x13] != (longlong *)0x0) {
          plVar11 = (longlong *)plVar10[0x13];
        }
        lVar12 = plVar10[0x14];
        if ((longlong)(int)lVar12 != 0) {
          lVar27 = 0;
          do {
            if (*(longlong *)((longlong)plVar11 + lVar27 + 0x18) != 0) {
              lVar4 = **(longlong **)((longlong)plVar11 + lVar27);
              if (*(char *)(lVar4 + 0x68) == '\0') {
                FUN_14276640c(lVar4,(*(longlong **)((longlong)plVar11 + lVar27))[5]);
              }
            }
            lVar27 = lVar27 + 0x20;
          } while ((longlong)(int)lVar12 * 0x20 != lVar27);
        }
        uVar26 = DAT_14c99ff30;
        if (((DAT_14c99ff28 != 0x400) || (DAT_14c7585d8 != 0)) &&
           ((DAT_14c99ff28 != 0x800 || (DAT_14c7585dc != 0)))) {
          uVar26 = DAT_14c99ff28 | _DAT_14c99ff2c;
        }
        if ((*(char *)(lVar24 + 0x268) != '\x01') || (DAT_14c99fe90 != 0)) {
LAB_1400f1d9a:
          FUN_142b08004(lVar2,plVar10,0);
          goto LAB_1400f1da8;
        }
        if (plVar10[2] == 0) {
          lVar12 = 0;
          do {
            if (*(int *)((longlong)plVar10 + lVar12 * 4 + 0xb8) != 0) goto LAB_1400f1d3b;
            lVar12 = lVar12 + 1;
          } while (lVar12 != 8);
          if (plVar10[0x1c] == 0) goto LAB_1400f1d9a;
        }
LAB_1400f1d3b:
        if ((((uVar26 >> 0xb & 1) != 0) || (DAT_14c82ba04 <= DAT_14c82ba50)) &&
           (DAT_14c82ba84 <= DAT_14c82bad0)) goto LAB_1400f1d9a;
        plVar11 = TlsGetValue(DAT_14c896140);
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
          *plVar11 = 0;
          plVar11[1] = 0;
          *(undefined4 *)(plVar11 + 2) = 0;
          TlsSetValue(DAT_14c896140,plVar11);
        }
        plVar25 = (longlong *)plVar11[1];
        if (plVar25 == (longlong *)0x0) {
          plVar25 = (longlong *)*plVar11;
          if (plVar25 == (longlong *)0x0) {
            do {
              local_78 = DAT_14c896180;
              uVar23 = (uint)DAT_14c896180;
              if ((DAT_14c896180 & 0x3ffffff) == 0) {
                plVar11[1] = 0;
                goto LAB_1400f1f21;
              }
              local_a8 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
              if (local_a8 >> 0x1a < DAT_14c896180 >> 0x1a) {
                FUN_14000f986(0x3a83126f);
              }
              uVar19 = (ulonglong)((uVar23 & 0x3ffffff) >> 0xe);
              local_a8 = local_a8 & 0xfffffffffc000000 |
                         (ulonglong)
                         *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar19 * 8) + 0x10 +
                                  (ulonglong)(uVar23 & 0x3fff) * 0x18);
              LOCK();
              bVar28 = local_78 != DAT_14c896180;
              uVar18 = local_a8;
              if (bVar28) {
                uVar18 = DAT_14c896180;
              }
              DAT_14c896180 = uVar18;
              UNLOCK();
            } while (bVar28);
            *(undefined4 *)
             (*(longlong *)(&DAT_14c833b00 + uVar19 * 8) + (ulonglong)(uVar23 & 0x3fff) * 0x18 +
             0x10) = 0;
            plVar25 = *(longlong **)
                       (*(longlong *)(&DAT_14c833b00 + uVar19 * 8) + 8 +
                       (ulonglong)(uVar23 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar23 & 0x3ffffff);
            plVar11[1] = (longlong)plVar25;
            lVar24 = local_b8;
            if (plVar25 == (longlong *)0x0) {
LAB_1400f1f21:
              lVar24 = local_b8;
              puVar14 = (undefined8 *)FUN_14001cc68(0x10000,0);
              plVar11[1] = (longlong)puVar14;
              iVar17 = 0xff;
              do {
                puVar13 = puVar14 + 0x20;
                *puVar14 = puVar13;
                iVar17 = iVar17 + -1;
                puVar14 = puVar13;
              } while (iVar17 != 0);
              *puVar13 = 0;
              plVar25 = (longlong *)plVar11[1];
            }
          }
          else {
            plVar11[1] = (longlong)plVar25;
            *plVar11 = 0;
          }
          *(undefined4 *)(plVar11 + 2) = 0x100;
          iVar17 = 0x100;
        }
        else {
          iVar17 = (int)plVar11[2];
        }
        plVar11[1] = *plVar25;
        *(int *)(plVar11 + 2) = iVar17 + -1;
        *plVar25 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
        plVar25[1] = (longlong)&DAT_100000002;
        plVar25[2] = 0;
        *(undefined4 *)(plVar25 + 3) = 0;
        *(undefined4 *)(plVar25 + 4) = 0xffffffff;
        plVar25[6] = 0;
        plVar25[7] = 0x100000000;
        *(undefined1 *)(plVar25 + 8) = 1;
        plVar25[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateDummy::vftable;
        plVar25[0xf] = 0;
        plVar25[0x10] = -0x17ffffffffffffe0;
        plVar25[0x12] = 0;
        plVar25[0x13] = 0x100000000;
        *(undefined2 *)(plVar25 + 0x14) = 0;
        LOCK();
        bVar28 = (char)plVar25[8] == '\x01';
        if (bVar28) {
          *(char *)(plVar25 + 8) = '\0';
        }
        UNLOCK();
        if (!bVar28) {
          FUN_14008cdb0(plVar25 + 8);
        }
        *plVar25 = (longlong)&PTR_FUN_14a161b48;
        if (*(code **)(plVar25[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(plVar25[0xe] + 0x18))(plVar25 + 0xe,plVar25 + 9);
        }
        plVar25[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        plVar25[9] = (longlong)plVar25;
        plVar25[10] = (longlong)plVar25;
        if (*local_98 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(longlong *)(*local_98 + 0x30);
        }
        uVar18 = 0x800000000000000;
        plVar25[0xf] = lVar12;
        if ((uVar26 >> 0xb & 1) != 0) {
          uVar18 = 0x1800000000000000;
        }
        plVar25[0x10] = uVar18 | (ulonglong)local_a0 | 0xc000000000000000;
        *(undefined4 *)((longlong)plVar25 + 0x1c) = 0;
        plVar25[0x15] = lVar2;
        plVar25[0x16] = (longlong)plVar10;
        *plVar25 = (longlong)&PTR_FUN_14a161b38;
        local_78 = CONCAT71(local_78._1_7_,1);
        FUN_1447439e4(plVar25);
        puVar14 = *(undefined8 **)(lVar24 + 0x2a8);
        if (puVar14 == *(undefined8 **)(lVar24 + 0x2b0)) {
          *(undefined8 **)(lVar24 + 0x2b0) = *(undefined8 **)(lVar24 + 0x298);
          puVar14 = *(undefined8 **)(lVar24 + 0x2a8);
          if (puVar14 != *(undefined8 **)(lVar24 + 0x298)) goto LAB_1400f20f9;
          puVar14 = (undefined8 *)FUN_14001cc68(0x10,8);
          *puVar14 = 0;
          puVar14[1] = 0;
        }
        else {
LAB_1400f20f9:
          *(undefined8 *)(lVar24 + 0x2a8) = *puVar14;
          *puVar14 = 0;
        }
        puVar14[1] = plVar25;
        **(undefined8 **)(lVar24 + 0x2a0) = puVar14;
        *(undefined8 **)(lVar24 + 0x2a0) = puVar14;
      }
      else {
LAB_1400f1da8:
        FUN_142b083a4(lVar2,plVar10);
      }
      plVar10 = plVar7;
    } while (plVar7 != (longlong *)0x0);
  }
  *local_b0 = 0;
  local_b0[1] = 0;
LAB_1400f218f:
  uVar5 = *(undefined8 *)(lVar24 + 0x300);
  *(undefined8 *)(lVar24 + 0x300) = 0;
  *(undefined8 *)(lVar24 + 0x308) = 0;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f2252 FUN_1400f2252 body=303 status=ok
// SIG undefined FUN_1400f2252(void)

void FUN_1400f2252(longlong param_1,longlong *param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = (code *)*param_2;
  if (pcVar2 != (code *)0x0) {
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4);
  }
  if ((longlong *)param_2[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_2[8] + 0x10))();
  }
  if (param_2[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[9] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    local_21 = 1;
    FUN_1447439e4();
    puVar3 = (undefined8 *)param_2[9];
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  if (*param_2 != 0) {
    plVar5 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  param_2[0xc] = *(longlong *)(param_1 + 0x48);
  *(longlong **)(param_1 + 0x48) = param_2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f2382 FUN_1400f2382 body=480 status=ok
// SIG undefined FUN_1400f2382(void)

ulonglong FUN_1400f2382(undefined8 param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  uint local_188;
  undefined2 local_184;
  undefined1 local_182 [258];
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uVar10 = 1;
  LOCK();
  uVar2 = *(uint *)(param_2 + 0xb4);
  if (uVar2 == 1) {
    *(uint *)(param_2 + 0xb4) = param_3;
  }
  else {
    uVar10 = (ulonglong)uVar2;
  }
  UNLOCK();
  if (uVar2 == 1) {
    lVar3 = *(longlong *)(param_2 + 0x58);
    pcVar4 = *(code **)(param_2 + 0x70);
    if (pcVar4 != (code *)0x0) {
      local_184 = 0;
      local_188 = param_3;
      memcpy(local_182,&DAT_14c845ed2,0xfe);
      plVar12 = (longlong *)(param_2 + 0x90);
      if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
        plVar12 = *(longlong **)(param_2 + 0x80);
      }
      uVar11 = (**(code **)(*plVar12 + 8))(plVar12);
      (*pcVar4)(uVar11,&local_188);
      bVar13 = local_188 == 0;
      local_188 = 1;
      local_184 = 0;
      if ((bVar13) && (local_80 != 0)) {
        LOCK();
        piVar1 = (int *)(local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          FUN_144716208(local_80);
          FUN_1400020a8(local_80);
        }
      }
      uVar10 = 0;
      local_1c8 = *(longlong *)(param_2 + 0x70);
      uStack_70 = *(undefined8 *)(param_2 + 0x78);
      local_1b8 = *(longlong **)(param_2 + 0x80);
      uStack_60 = *(undefined8 *)(param_2 + 0x88);
      local_58 = *(undefined8 *)(param_2 + 0x90);
      uStack_50 = *(undefined8 *)(param_2 + 0x98);
      local_48 = *(undefined8 *)(param_2 + 0xa0);
      uStack_40 = *(undefined8 *)(param_2 + 0xa8);
      uVar8 = local_48;
      uVar9 = uStack_40;
      uVar6 = local_58;
      uVar7 = uStack_50;
      local_68 = local_1b8;
      uVar5 = uStack_60;
      local_78 = local_1c8;
      uVar11 = uStack_70;
      *(ulonglong *)(param_2 + 0xa0) = CONCAT44(uStack_194,local_198);
      *(ulonglong *)(param_2 + 0xa8) = CONCAT44(uStack_18c,uStack_190);
      *(ulonglong *)(param_2 + 0x90) = CONCAT44(uStack_1a4,local_1a8);
      *(ulonglong *)(param_2 + 0x98) = CONCAT44(uStack_19c,uStack_1a0);
      *(undefined8 *)(param_2 + 0x80) = 0;
      *(ulonglong *)(param_2 + 0x88) = CONCAT44(uStack_1ac,uStack_1b0);
      *(longlong *)(param_2 + 0x70) = 0;
      *(ulonglong *)(param_2 + 0x78) = CONCAT44(uStack_1bc,uStack_1c0);
      uStack_1c0 = (undefined4)uStack_70;
      uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
      uStack_1bc = uStack_70._4_4_;
      uStack_1b0 = (undefined4)uStack_60;
      uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
      uStack_1ac = uStack_60._4_4_;
      local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
      uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
      local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
      uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
      local_198 = (undefined4)local_48;
      uStack_194 = local_48._4_4_;
      uStack_190 = (undefined4)uStack_40;
      uStack_18c = uStack_40._4_4_;
      local_1a8 = (undefined4)local_58;
      uStack_1a4 = local_58._4_4_;
      uStack_1a0 = (undefined4)uStack_50;
      uStack_19c = uStack_50._4_4_;
      uStack_70 = uVar11;
      uStack_60 = uVar5;
      local_58 = uVar6;
      uStack_50 = uVar7;
      local_48 = uVar8;
      uStack_40 = uVar9;
      if (local_1c8 != 0) {
        plVar12 = local_1b8;
        if (local_1b8 == (longlong *)0x0) {
          plVar12 = (longlong *)&local_1a8;
        }
        uVar10 = (**(code **)(*plVar12 + 0x10))();
      }
    }
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 0x50);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar10 = FUN_1400f2252(param_1,lVar3);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f2564 FUN_1400f2564 body=1495 status=ok
// SIG undefined FUN_1400f2564(void)

undefined8 FUN_1400f2564(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  int iVar15;
  double *pdVar16;
  double dVar17;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined1 *puStack_230;
  int local_21c;
  double *local_218;
  longlong local_210;
  double *local_208;
  undefined1 local_200 [56];
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  double local_188 [12];
  undefined4 local_128;
  uint uStack_124;
  undefined4 uStack_120;
  uint uStack_11c;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_258;
  lVar2 = *param_2;
  uVar8 = 1;
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x58) == (int)param_2[2])) {
    iVar15 = *(int *)(lVar2 + 0x88);
    local_f8._8_4_ = SUB84((double)*(float *)(lVar2 + 0x44),0);
    local_f8._0_8_ = (double)*(float *)(lVar2 + 0x40);
    local_f8._12_4_ = (int)((ulonglong)(double)*(float *)(lVar2 + 0x44) >> 0x20);
    local_e8._8_4_ = SUB84((double)*(float *)(lVar2 + 0x4c),0);
    local_e8._0_8_ = (double)*(float *)(lVar2 + 0x48);
    local_e8._12_4_ = (int)((ulonglong)(double)*(float *)(lVar2 + 0x4c) >> 0x20);
    local_d8 = *(undefined8 *)(lVar2 + 0x20);
    uStack_d0 = *(undefined8 *)(lVar2 + 0x28);
    local_c8 = *(undefined8 *)(lVar2 + 0x30);
    uStack_c0 = 0;
    local_b8 = 0x3ff0000000000000;
    uStack_b0 = 0x3ff0000000000000;
    local_a8 = 0x3ff0000000000000;
    uStack_a0 = 0;
    plVar3 = *(longlong **)(param_1 + 0x90);
    local_21c = iVar15;
    if (plVar3 == (longlong *)0x0) {
      local_100 = *(double *)(param_1 + 0x48);
      local_110 = *(double *)(param_1 + 0x38);
      dStack_108 = *(double *)(param_1 + 0x40);
      local_128 = *(undefined4 *)(param_1 + 0x38);
      uStack_120 = *(undefined4 *)(param_1 + 0x40);
      uStack_124 = *(uint *)(param_1 + 0x3c) ^ 0x80000000;
      uStack_11c = *(uint *)(param_1 + 0x44) ^ 0x80000000;
      local_118 = -*(double *)(param_1 + 0x48);
      iVar10 = iVar15;
    }
    else {
      pdVar13 = (double *)(param_1 + 0xa0);
      pdVar16 = local_188;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *pdVar16 = *pdVar13;
        pdVar13 = pdVar13 + 1;
        pdVar16 = pdVar16 + 1;
      }
      (**(code **)(*plVar3 + 0x80))(plVar3,local_1c8);
      FUN_1400c6592(local_1c8,&local_128,local_188);
      iVar10 = *(int *)(lVar2 + 0x88);
    }
    uVar8 = 1;
    if (0 < iVar10) {
      local_210 = param_1 + 0x80;
      local_218 = (double *)(param_1 + 0xa0);
      local_208 = (double *)(param_1 + 0x58);
      lVar11 = 0;
      do {
        lVar12 = *(longlong *)(lVar2 + 0x80);
        if (*(longlong *)(lVar2 + 0x80) == 0) {
          lVar12 = lVar2 + 0x78;
        }
        lVar14 = *(longlong *)(lVar12 + lVar11 * 8);
        uVar8 = *(undefined8 *)(lVar14 + 0x10);
        if (1 < iVar15) {
          if (*(longlong *)(param_1 + 0x90) == 0) {
            dVar4 = *(double *)(param_1 + 0x38);
            dVar17 = *(double *)(param_1 + 0x40);
            dVar5 = *(double *)(param_1 + 0x48);
          }
          else {
            dVar5 = (local_100 - local_118) * 0.5;
            dVar17 = (dStack_108 - (double)CONCAT44(uStack_11c,uStack_120)) * 0.5;
            dVar4 = (local_110 - (double)CONCAT44(uStack_124,local_128)) * 0.5;
          }
          local_188[0] = *(double *)(lVar14 + 0x18) - dVar4;
          local_188[1] = *(double *)(lVar14 + 0x20) - dVar17;
          local_188[2] = *(double *)(lVar14 + 0x28) - dVar5;
          local_188[3] = *(double *)(lVar14 + 0x30) + dVar4;
          local_188[4] = *(double *)(lVar14 + 0x38) + dVar17;
          local_188[5] = *(double *)(lVar14 + 0x40) + dVar5;
          if (*(longlong *)(param_1 + 0x90) == 0) {
            dVar4 = *(double *)(param_1 + 0xc0);
            dVar17 = *(double *)(param_1 + 200);
            local_1b8 = *(double *)(param_1 + 0xd0);
          }
          else {
            local_1b8 = (local_100 - local_118) * 0.5 + local_118;
            dVar17 = (dStack_108 - (double)CONCAT44(uStack_11c,uStack_120)) * 0.5 +
                     (double)CONCAT44(uStack_11c,uStack_120);
            dVar4 = (local_110 - (double)CONCAT44(uStack_124,local_128)) * 0.5 +
                    (double)CONCAT44(uStack_124,local_128);
          }
          local_1c8._8_4_ = SUB84(dVar17,0);
          local_1c8._0_8_ = dVar4;
          local_1c8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
          lVar9 = 0;
          do {
            dVar4 = *(double *)(local_1c8 + lVar9 * 8);
            if ((dVar4 < local_188[lVar9]) ||
               (local_188[lVar9 + 3] <= dVar4 && dVar4 != local_188[lVar9 + 3])) goto LAB_1400f2a4d;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 3);
        }
        cVar6 = '\x02';
        if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 4) == 0) {
LAB_1400f28fb:
          local_1b8 = (double)CONCAT44(local_1b8._4_4_,0xffffffff);
          dStack_1b0 = 0.0;
          dStack_1a8 = 0.0;
          dStack_1a0 = 0.0;
          local_198 = 0xffffffff;
          local_1c8._8_8_ = *(undefined8 *)(lVar12 + lVar11 * 8);
          local_1c8._0_8_ = lVar2;
          if (*(longlong *)(param_1 + 0x90) != 0) {
            if ((*(byte *)(param_1 + 0x51) & 2) == 0) {
              pdVar13 = local_218;
              pdVar16 = local_188;
              for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
                *pdVar16 = *pdVar13;
                pdVar13 = pdVar13 + 1;
                pdVar16 = pdVar16 + 1;
              }
              puStack_230 = (undefined1 *)0x0;
            }
            else {
              pdVar13 = local_218;
              pdVar16 = local_188;
              for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
                *pdVar16 = *pdVar13;
                pdVar13 = pdVar13 + 1;
                pdVar16 = pdVar16 + 1;
              }
              puStack_230 = local_200;
            }
            local_238 = 0;
            cVar7 = FUN_1405c9af5(uVar8,local_f8);
            iVar15 = local_21c;
            if (cVar7 != '\0') {
              dStack_1a0 = local_208[2];
              dStack_1b0 = *local_208;
              dStack_1a8 = local_208[1];
              if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 8) != 0) {
                cVar6 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                                  (*(longlong **)(param_1 + 0x98),local_210,local_1c8);
              }
              if (cVar6 != '\0') {
                if ((cVar6 == '\x02') || (*(char *)(param_1 + 0x52) == '\x01')) {
                  lVar12 = *(longlong *)(param_1 + 0x70);
LAB_1400f2a0b:
                  *(ulonglong *)(lVar12 + 0x38) = CONCAT44(uStack_194,local_198);
                  *(double *)(lVar12 + 0x28) = dStack_1a8;
                  *(double *)(lVar12 + 0x30) = dStack_1a0;
                  *(double *)(lVar12 + 0x18) = local_1b8;
                  *(double *)(lVar12 + 0x20) = dStack_1b0;
                  *(undefined4 *)(lVar12 + 8) = local_1c8._0_4_;
                  *(undefined4 *)(lVar12 + 0xc) = local_1c8._4_4_;
                  *(undefined4 *)(lVar12 + 0x10) = local_1c8._8_4_;
                  *(undefined4 *)(lVar12 + 0x14) = local_1c8._12_4_;
                  *(undefined1 *)(lVar12 + 0x44) = 1;
                }
                else {
                  lVar12 = *(longlong *)(param_1 + 0x70);
                  if (*(char *)(lVar12 + 0x45) == '\x01') goto LAB_1400f2a0b;
                  iVar15 = *(int *)(lVar12 + 0x1c50);
                  *(uint *)(lVar12 + 0x1c50) = iVar15 + 1U;
                  if (*(uint *)(lVar12 + 0x1c54) < iVar15 + 1U) {
                    FUN_140ef0e5e(lVar12 + 0x48,iVar15);
                  }
                  lVar14 = lVar12 + 0x48;
                  if (*(longlong *)(lVar12 + 0x1c48) != 0) {
                    lVar14 = *(longlong *)(lVar12 + 0x1c48);
                  }
                  lVar12 = (longlong)iVar15 * 0x38;
                  *(ulonglong *)(lVar14 + 0x30 + lVar12) = CONCAT44(uStack_194,local_198);
                  pdVar13 = (double *)(lVar14 + 0x20 + lVar12);
                  *pdVar13 = dStack_1a8;
                  pdVar13[1] = dStack_1a0;
                  pdVar13 = (double *)(lVar14 + 0x10 + lVar12);
                  *pdVar13 = local_1b8;
                  pdVar13[1] = dStack_1b0;
                  puVar1 = (undefined4 *)(lVar14 + lVar12);
                  *puVar1 = local_1c8._0_4_;
                  puVar1[1] = local_1c8._4_4_;
                  puVar1[2] = local_1c8._8_4_;
                  puVar1[3] = local_1c8._12_4_;
                  iVar15 = local_21c;
                }
                if (*(char *)(param_1 + 0x52) != '\0') {
                  uVar8 = 0;
                  goto LAB_1400f2ae8;
                }
              }
            }
          }
        }
        else {
          cVar6 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                            (*(longlong **)(param_1 + 0x98),local_210,lVar14,lVar2);
          if (cVar6 != '\0') goto LAB_1400f28fb;
        }
LAB_1400f2a4d:
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(lVar2 + 0x88));
      uVar8 = 1;
    }
  }
LAB_1400f2ae8:
  if ((local_90 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f2b3c FUN_1400f2b3c body=1363 status=ok
// SIG undefined FUN_1400f2b3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f2b3c(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_79;
  longlong local_78 [4];
  longlong *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = param_2;
  if (0 < *(int *)(param_1 + 0x38c)) {
    if (param_3 == (longlong *)0x0) {
      local_b8 = 0;
      local_c0 = 0;
      local_c4 = 0;
      local_c8 = 0;
    }
    else {
      if (param_3[2] == 0) {
        local_b8 = 0;
      }
      else {
        local_b8 = *(undefined8 *)(param_3[2] + 0x10);
      }
      if (*param_3 == 0) {
        local_c0 = 0;
      }
      else {
        local_c0 = *(undefined8 *)(*param_3 + 0x10);
      }
      local_c4 = (undefined4)param_3[4];
      local_c8 = *(undefined4 *)((longlong)param_3 + 0x24);
    }
    local_58 = (longlong *)0x0;
    local_50 = 0x400000000;
    lVar4 = *(longlong *)(param_1 + 0x370);
    if (lVar4 != 0) {
      local_50 = 0x400000001;
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
      local_78[0] = lVar4;
    }
    iVar15 = *(int *)(DAT_14ca84d28 + 4);
    iVar6 = (**(code **)(*DAT_14c82b500 + 0x20))();
    if (iVar6 < iVar15) {
      iVar15 = iVar6;
    }
    iVar6 = (*(int *)(param_1 + 0x38c) + *(int *)(DAT_14ca47528 + 4) + -1) /
            *(int *)(DAT_14ca47528 + 4);
    if (iVar6 <= iVar15) {
      iVar15 = iVar6;
    }
    if (0 < iVar15) {
      local_90 = param_1 + 0xc0;
      local_98 = param_1 + 0x58;
      local_a0 = param_1 + 0x240;
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar2 = (undefined8 *)(lVar4 + 0x308);
      local_a8 = 0x527800b400;
      local_b0 = (longlong *)(lVar4 + 0x2b8);
      iVar6 = 0;
LAB_1400f2cce:
      uVar7 = FUN_1447a7304(local_88);
      (*(code *)*param_4)(param_4[1],uVar7);
      puVar9 = (uint *)*puVar2;
      if (puVar9 != (uint *)0x0) goto LAB_1400f2d51;
      do {
        uVar10 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar10 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar10 | 1;
          __tlregdtor(&LAB_142df1041);
        }
        puVar8 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar8 = 0xffffffff;
        *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
        puVar8[0x12] = 0;
        *puVar2 = puVar8;
        FUN_140217a48(puVar2);
        puVar9 = (uint *)*puVar2;
LAB_1400f2d51:
        uVar13 = *(longlong *)(puVar9 + 0x10) + 7;
        uVar10 = puVar9[0x12];
        while( true ) {
          puVar14 = (undefined8 *)(uVar13 & 0xfffffffffffffff8);
          if (puVar14 + 0x1e <= puVar9 + 0x4000) {
            *(undefined8 **)(puVar9 + 0x10) = puVar14 + 0x1e;
            puVar9[0x12] = uVar10 + 1;
            FUN_1447247dc(puVar14,local_78);
            *puVar14 = &PTR_FUN_14a2908b0;
            uVar3 = *(undefined4 *)(param_1 + 0x48);
            puVar14[0x15] = uVar7;
            puVar14[0x16] = local_a0;
            puVar14[0x17] = local_98;
            puVar14[0x18] = local_90;
            puVar14[0x19] = local_b8;
            puVar14[0x1a] = local_c0;
            *(undefined4 *)(puVar14 + 0x1b) = local_c4;
            *(undefined4 *)((longlong)puVar14 + 0xdc) = local_c8;
            *(undefined4 *)(puVar14 + 0x1c) = uVar3;
            *(int *)((longlong)puVar14 + 0xe4) = iVar6;
            *(int *)(puVar14 + 0x1d) = iVar15;
            uVar10 = DAT_14ca84d80;
            if (((DAT_14ca84d78 != 0x400) || (DAT_14c7585d8 != 0)) &&
               ((DAT_14ca84d78 != 0x800 || (DAT_14c7585dc != 0)))) {
              uVar10 = DAT_14ca84d78 | _DAT_14ca84d7c;
            }
            uVar11 = uVar10 >> 10 & 3;
            if ((uVar10 >> 9 & 1) == 0 || uVar11 < 2) {
              uVar13 = (ulonglong)(byte)(&DAT_149e38edc)[uVar11];
            }
            else {
              uVar13 = 2;
            }
            if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
            }
            puVar14[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar14[9] = puVar14;
            puVar14[10] = puVar14;
            lVar5 = *local_b0;
            if (lVar5 == 0) {
              if ((char)uVar13 == '\x06') {
                uVar13 = 1;
              }
              uVar7 = 0;
            }
            else {
              if ((char)uVar13 == '\x06') {
                uVar13 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
              }
              uVar7 = *(undefined8 *)(lVar5 + 0x30);
            }
            puVar14[0xf] = uVar7;
            puVar14[0x10] = (uVar13 << 0x3b) + local_a8 | 0xc000000000000000;
            *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
            if (puVar14 == (undefined8 *)0x0) {
              local_79 = 1;
              FUN_1447439e4(0,&local_79);
            }
            else {
              LOCK();
              *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
              UNLOCK();
              local_79 = 1;
              FUN_1447439e4(puVar14,&local_79);
              LOCK();
              piVar1 = (int *)(puVar14 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar14)(puVar14,1);
              }
            }
            iVar6 = iVar6 + 1;
            if (iVar6 != iVar15) goto LAB_1400f2cce;
            goto LAB_1400f301e;
          }
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
          LOCK();
          uVar11 = *puVar9;
          *puVar9 = *puVar9 + uVar10 + 1;
          UNLOCK();
          if ((uVar11 ^ uVar10) != 0xffffffff) break;
          puVar9 = (uint *)*puVar2;
          *puVar9 = 0xffffffff;
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          uVar13 = (longlong)puVar9 + 0x5f;
          uVar10 = 0;
        }
      } while( true );
    }
LAB_1400f301e:
    plVar12 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar12 = local_78;
    }
    FUN_144717c65(plVar12,local_50 & 0xffffffff);
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f3090 FUN_1400f3090 body=1728 status=ok
// SIG undefined FUN_1400f3090(void)

void FUN_1400f3090(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int iVar20;
  longlong *plVar21;
  undefined1 auStack_108 [40];
  longlong local_e0;
  undefined8 *local_d8;
  ulonglong local_d0;
  PSRWLOCK local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined1 *local_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (**(longlong **)(param_1 + 0x38) == 0) goto LAB_1400f36ae;
  local_c8 = (PSRWLOCK)(param_1 + 0x28);
  local_e0 = param_1;
  AcquireSRWLockShared(local_c8);
  plVar15 = (longlong *)(local_e0 + 0x40);
  local_98 = (undefined1 *)0x0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  if (&local_b8 != plVar15) {
    iVar20 = *(int *)(local_e0 + 0x88);
    if ((ulonglong)(longlong)iVar20 < 2) {
      if (iVar20 != 0) goto LAB_1400f315a;
    }
    else {
      FUN_1446efa72(&local_78,0,iVar20,4);
LAB_1400f315a:
      puVar10 = local_80;
      if (local_78 != (undefined1 *)0x0) {
        puVar10 = local_78;
      }
      pvVar7 = (void *)(local_e0 + 0x78);
      if (*(void **)(local_e0 + 0x80) != (void *)0x0) {
        pvVar7 = *(void **)(local_e0 + 0x80);
      }
      memcpy(puVar10,pvVar7,(longlong)iVar20 << 2);
    }
    lVar12 = local_e0;
    uVar6 = *(uint *)(local_e0 + 0x48);
    uVar17 = (ulonglong)uVar6;
    local_70 = iVar20;
    FUN_1447564ae(&local_b8,uVar17);
    iVar20 = (int)uStack_b0;
    uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0 + uVar6);
    local_d0 = uVar17;
    if ((uint)(uStack_b0._4_4_ - iVar20) < uVar6) {
      FUN_1447711aa(&local_b8);
    }
    local_8c = CONCAT44(*(undefined4 *)(lVar12 + 0x70),(int)local_8c);
    local_84 = *(int *)(lVar12 + 0x74);
    iVar20 = *(int *)(lVar12 + 0x68);
    uVar6 = iVar20 + 0x1fU & 0xffffffe0;
    local_90 = 0;
    if (((int)local_8c < (int)uVar6) || (0x80 < (int)local_8c)) {
      uVar11 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar11 = uVar6;
      }
      local_8c = CONCAT44(*(undefined4 *)(lVar12 + 0x70),uVar11);
      FUN_1446efbd8(local_a8,0);
      iVar20 = *(int *)(local_e0 + 0x68);
      lVar12 = local_e0;
    }
    lVar16 = lVar12;
    local_90 = iVar20;
    if (iVar20 != 0) {
      pvVar7 = *(void **)(lVar12 + 0x60);
      if (*(void **)(lVar12 + 0x60) == (void *)0x0) {
        pvVar7 = (void *)(lVar12 + 0x50);
      }
      puVar10 = local_a8;
      if (local_98 != (undefined1 *)0x0) {
        puVar10 = local_98;
      }
      memcpy(puVar10,pvVar7,(ulonglong)(iVar20 + 0x1fU >> 3 & 0xfffffffc));
      lVar16 = local_e0;
    }
    lVar5 = local_b8;
    if (0 < (int)local_d0) {
      lVar3 = *plVar15;
      lVar1 = local_b8 + 8;
      lVar13 = 0;
      uVar17 = 0;
      do {
        pvVar7 = *(void **)(lVar16 + 0x60);
        if (*(void **)(lVar16 + 0x60) == (void *)0x0) {
          pvVar7 = (void *)(lVar12 + 0x50);
        }
        if ((*(uint *)((longlong)pvVar7 + (uVar17 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar17 & 0x1f) &
            1) == 0) {
          *(undefined4 *)(lVar5 + lVar13) = *(undefined4 *)(lVar3 + lVar13);
          *(undefined4 *)(lVar5 + 4 + lVar13) = *(undefined4 *)(lVar3 + 4 + lVar13);
        }
        else {
          *(undefined8 *)(lVar5 + lVar13) = *(undefined8 *)(lVar3 + lVar13);
          *(undefined8 *)(lVar5 + 8 + lVar13) = 0;
          iVar20 = *(int *)(lVar3 + 0x10 + lVar13);
          uVar4 = *(undefined8 *)(lVar3 + 8 + lVar13);
          *(int *)(lVar5 + 0x10 + lVar13) = iVar20;
          if (iVar20 == 0) {
            *(undefined4 *)(lVar5 + 0x14 + lVar13) = 0;
          }
          else {
            FUN_14496e312(lVar1 + lVar13,iVar20);
            FUN_14496e3e7(*(undefined8 *)(lVar5 + 8 + lVar13),uVar4,iVar20);
            lVar16 = local_e0;
          }
          *(undefined8 *)(lVar5 + 0x18 + lVar13) = *(undefined8 *)(lVar3 + 0x18 + lVar13);
        }
        uVar17 = uVar17 + 1;
        lVar13 = lVar13 + 0x20;
      } while (local_d0 != uVar17);
    }
  }
  puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  lVar12 = **(longlong **)(local_e0 + 0x38);
  plVar15 = (longlong *)0x0;
  local_d8 = puVar8;
  while (lVar12 != 0) {
    uVar4 = *(undefined8 *)(lVar12 + 8);
    plVar14 = *(longlong **)(lVar12 + 0x10);
    *(undefined8 *)(lVar12 + 8) = 0;
    plVar19 = plVar15;
    if ((plVar14 != plVar15) &&
       (*(undefined8 *)(lVar12 + 0x10) = 0, plVar19 = plVar14, plVar15 != (longlong *)0x0)) {
      LOCK();
      plVar14 = plVar15 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    lVar16 = *(longlong *)(local_e0 + 0x38);
    *(longlong *)(local_e0 + 0x38) = lVar12;
    *(undefined8 *)(lVar12 + 8) = 0;
    plVar15 = *(longlong **)(lVar12 + 0x10);
    if (plVar15 != (longlong *)0x0) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      LOCK();
      plVar14 = plVar15 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    if (lVar16 != 0) {
      plVar15 = *(longlong **)(lVar16 + 0x10);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar15 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
      FUN_1400020a8(lVar16);
    }
    puVar9 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar9 = 0;
    puVar9[1] = uVar4;
    puVar9[2] = plVar19;
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
      UNLOCK();
    }
    if (puVar9 != (undefined8 *)0x0) {
      *local_d8 = puVar9;
      local_d8 = puVar9;
    }
    plVar15 = plVar19;
    lVar12 = **(longlong **)(local_e0 + 0x38);
  }
  ReleaseSRWLockShared(local_c8);
  if ((undefined8 *)*puVar8 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)*puVar8;
    puVar18 = puVar8;
    plVar14 = plVar15;
    do {
      puVar8 = puVar9;
      plVar19 = (longlong *)puVar8[1];
      plVar21 = (longlong *)puVar8[2];
      puVar8[1] = 0;
      if (plVar21 == plVar14) {
LAB_1400f34a1:
        puVar8[1] = 0;
        plVar15 = plVar14;
        if (plVar21 != (longlong *)0x0) {
          puVar8[2] = 0;
          LOCK();
          plVar14 = plVar21 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar2 = (int *)((longlong)plVar21 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
      }
      else {
        puVar8[2] = 0;
        plVar15 = plVar21;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar14 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
          plVar14 = plVar21;
          plVar21 = (longlong *)puVar8[2];
          goto LAB_1400f34a1;
        }
      }
      if (puVar18 != (undefined8 *)0x0) {
        plVar14 = (longlong *)puVar18[2];
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar21 = plVar14 + 1;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)*plVar21 == 0) {
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
        FUN_1400020a8(puVar18);
      }
      (**(code **)(*plVar19 + 8))(plVar19,&local_c0);
      if ((int)uStack_b0 != local_84) {
        uVar6 = (uint)((ulonglong)local_c0 >> 0x10);
        uVar11 = (uint)local_c0 & 0xffff;
        puVar10 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar10 = local_80;
        }
        iVar20 = *(int *)(puVar10 +
                         (ulonglong)
                         (local_70 - 1U &
                         (int)((ulonglong)local_c0 >> 0x20) + ((uint)local_c0 << 0x10 | uVar11) +
                         (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar11 >> 4)) * 4);
        while (iVar20 != -1) {
          lVar12 = local_b8 + (longlong)iVar20 * 0x20;
          if (*(longlong *)(local_b8 + (longlong)iVar20 * 0x20) == local_c0) {
            if (((lVar12 + 8U & 0xfffffffffffffff7) != 0) &&
               (iVar20 = *(int *)(lVar12 + 0x10), (longlong)iVar20 != 0)) {
              lVar12 = *(longlong *)(lVar12 + 8);
              lVar16 = 0;
              do {
                if ((*(int *)(lVar12 + 8 + lVar16) != 0) &&
                   (plVar14 = *(longlong **)(lVar12 + lVar16), plVar14 != (longlong *)0x0)) {
                  (**(code **)(*plVar14 + 0x60))(plVar14,plVar19);
                }
                lVar16 = lVar16 + 0x10;
              } while ((longlong)iVar20 * 0x10 != lVar16);
            }
            break;
          }
          iVar20 = *(int *)(lVar12 + 0x18);
        }
      }
      puVar9 = (undefined8 *)*puVar8;
      puVar18 = puVar8;
      plVar14 = plVar15;
    } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
  }
  while (puVar8 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)*puVar8;
    plVar14 = (longlong *)puVar8[2];
    if (plVar14 != (longlong *)0x0) {
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
    FUN_1400020a8(puVar8);
    puVar8 = puVar9;
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140061fce(&local_b8);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar15 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
LAB_1400f36ae:
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f3752 FUN_1400f3752 body=890 status=ok
// SIG undefined FUN_1400f3752(void)

int FUN_1400f3752(longlong param_1,longlong ****param_2,undefined *param_3,longlong param_4,
                 uint param_5,undefined4 param_6,undefined4 param_7,undefined8 *param_8,
                 longlong *param_9,undefined8 param_10,char param_11)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  undefined8 *local_100;
  undefined *local_f8;
  longlong ***local_f0;
  undefined *local_e8;
  longlong ***local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong **local_b8;
  longlong **pplStack_b0;
  longlong **local_a8;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  undefined8 uStack_94;
  int iStack_8c;
  int local_88;
  undefined8 uStack_84;
  int iStack_7c;
  longlong **local_70;
  longlong ***local_68;
  undefined8 local_60;
  longlong ***ppplStack_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_9 == (longlong *)0x0) {
    iVar3 = -0x7fffbffd;
  }
  else {
    plVar1 = *(longlong **)(param_3 + 0x20);
    local_70 = (longlong **)0x0;
    local_d0 = param_4;
    if ((((*(byte *)((longlong)param_2 + 0x3a) & 1) == 0) || (DAT_14ca84df4 != 0x8086)) ||
       (DAT_14ca778e8 != '\x01')) {
      if (*(char *)((longlong)param_2 + 0x39) == '\0') {
        local_f0 = &local_70;
        local_f8 = &DAT_14a350238;
        local_100 = param_8;
        local_108 = CONCAT44(local_108._4_4_,param_5);
        iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))
                          (*(longlong **)(param_1 + 8),plVar1,param_4,param_2);
      }
      else {
        local_b8 = (longlong **)CONCAT44(local_b8._4_4_,*(int *)param_2);
        pplStack_b0 = (longlong **)param_2[1];
        local_a8 = (longlong **)param_2[2];
        iStack_a0 = *(int *)(param_2 + 3);
        iStack_9c = *(int *)((longlong)param_2 + 0x1c);
        local_98 = *(int *)(param_2 + 4);
        uStack_94 = *(undefined8 *)((longlong)param_2 + 0x24);
        iStack_8c = *(int *)((longlong)param_2 + 0x2c);
        local_88 = *(int *)(param_2 + 6);
        uStack_84 = 0;
        iStack_7c = 0;
        FUN_1431706b0(param_2,&local_68);
        local_f0 = ppplStack_58;
        if ((longlong ****)ppplStack_58 == (longlong ****)0x0) {
          local_f0 = (longlong ***)&local_68;
        }
        local_e0 = &local_70;
        local_e8 = &DAT_14a350238;
        local_f8 = (undefined *)CONCAT44(local_f8._4_4_,local_50);
        local_100 = param_8;
        local_108 = local_108 & 0xffffffff00000000;
        local_d8 = param_1;
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x268))
                          (*(longlong **)(param_1 + 0x58),plVar1,param_4,&local_b8);
        if ((longlong ****)ppplStack_58 != (longlong ****)0x0) {
          FUN_1400020a8();
        }
        param_5 = param_5 & iVar3 >> 0x1f;
        param_1 = local_d8;
      }
    }
    else {
      local_b8 = (longlong **)*param_2;
      pplStack_b0 = (longlong **)param_2[1];
      local_a8 = (longlong **)param_2[2];
      iStack_a0 = *(int *)(param_2 + 3);
      iStack_9c = *(int *)((longlong)param_2 + 0x1c);
      local_98 = *(int *)(param_2 + 4);
      uStack_94 = *(undefined8 *)((longlong)param_2 + 0x24);
      iStack_8c = *(int *)((longlong)param_2 + 0x2c);
      local_88 = *(int *)(param_2 + 6);
      uStack_84 = *(undefined8 *)((longlong)param_2 + 0x34);
      iStack_7c = *(int *)((longlong)param_2 + 0x3c);
      local_68 = &local_b8;
      local_60 = 0;
      ppplStack_58 = (longlong ***)&DAT_00000001;
      local_f0 = &local_70;
      local_f8 = &DAT_14a350238;
      local_100 = param_8;
      local_108 = CONCAT44(local_108._4_4_,param_5);
      iVar3 = FUN_144bcdeb0(*(undefined8 *)(DAT_14ca77418 + 0x1d8),plVar1,param_4);
    }
    if (iVar3 < 0) {
      if (param_11 != '\0') {
        local_100 = &local_c8;
        local_c8 = 0;
        uStack_c0 = 0;
        local_108 = *(ulonglong *)(param_1 + 8);
        FUN_145763094(iVar3,&DAT_14a3502ae,".\\Runtime/D3D12RHI/Private/D3D12Resources.cpp",0x418);
      }
    }
    else {
      lVar2 = *(longlong *)(param_3 + 0x10);
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_b8);
      lVar4 = FUN_14001cc68(0xe8,0x10);
      local_e0 = (longlong ***)CONCAT44(local_e0._4_4_,pplStack_b0._0_4_);
      local_f8 = (undefined *)CONCAT44(local_f8._4_4_,param_7);
      local_100 = (undefined8 *)CONCAT44(local_100._4_4_,param_6);
      local_108 = CONCAT44(local_108._4_4_,param_5);
      local_f0 = (longlong ***)param_2;
      local_e8 = param_3;
      FUN_1447f3b12(lVar4,lVar2,*(undefined4 *)(lVar2 + 4),local_70);
      *param_9 = lVar4;
      if (((*(char *)(param_1 + 0x6a8) == '\x01') && (*(int *)(param_3 + 0x40) == 1)) &&
         (*(int *)param_2 != 1)) {
        *(longlong *)(lVar4 + 0x40) = local_d0 + *(longlong *)(param_3 + 0x68);
      }
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if ((longlong ***)local_70 != (longlong ***)0x0) {
      (*(code *)(*local_70)[2])();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 1400f3ad8 FUN_1400f3ad8 body=178 status=ok
// SIG undefined FUN_1400f3ad8(void)

longlong FUN_1400f3ad8(uint *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  wchar_t *pwStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  code **ppcStack_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  ulonglong uStack_30;
  
  if (param_1[1] == 0) {
    return 0;
  }
  uVar1 = *param_1;
  lVar6 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar10 = (longlong *)
              ((ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (plVar10 == (longlong *)0x0) {
      return 0;
    }
    if (*(uint *)(plVar10 + 2) != param_1[1]) {
      return 0;
    }
    if ((*(uint *)(plVar10 + 1) & 0x10200000) != 0) {
      return 0;
    }
    lVar6 = *plVar10;
    if (lVar6 == 0) {
      return 0;
    }
    if ((((param_1[3] != 0) && (uVar1 = param_1[2], -1 < (int)uVar1)) &&
        ((int)uVar1 < DAT_14c9647dc)) &&
       (((plVar10 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar10 != (longlong *)0x0 && (*(uint *)(plVar10 + 2) == param_1[3])) &&
        (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (lVar3 = *plVar10, lVar3 != 0)))))) {
      uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
      if (lVar3 == 0) {
        lVar9 = *(longlong *)(lVar6 + 0x30);
      }
      else {
        iVar5 = *(int *)(lVar3 + 0x238);
        if (iVar5 < 1) {
          lVar9 = 0;
        }
        else {
          lVar11 = 0;
          do {
            iVar2 = *(int *)(*(longlong *)(lVar3 + 0x230) + 4 + lVar11 * 8);
            if ((((iVar2 != 0) &&
                 (uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x230) + lVar11 * 8), -1 < (int)uVar1)) &&
                (((int)uVar1 < DAT_14c9647dc &&
                 (((plVar10 = (longlong *)
                              ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                   plVar10 != (longlong *)0x0 && ((int)plVar10[2] == iVar2)) &&
                  ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)))))) &&
               (lVar9 = *plVar10, lVar9 != 0)) {
              lVar7 = *(longlong *)(lVar9 + 0x430);
              if (lVar7 == 0) {
LAB_140334c80:
                lVar8 = 0;
              }
              else {
                if (DAT_14cae9568 == 0) {
                  ppcStack_50 = &pcStack_38;
                  pcStack_38 = FUN_1417de738;
                  puStack_40 = &LAB_145893408;
                  puStack_48 = &LAB_1458cbbd2;
                  puStack_58 = &LAB_147ba21f1;
                  puStack_60 = &LAB_1463e9233;
                  pwStack_68 = L"Engine";
                  uStack_70 = 0;
                  uStack_78 = 0x1000000c;
                  uStack_80 = 8;
                  uStack_88 = 0x2b8;
                  FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
                  lVar7 = *(longlong *)(lVar9 + 0x430);
                  if (lVar7 == 0) goto LAB_140334c80;
                }
                if (DAT_14cae9568 == 0) goto LAB_140334c80;
                lVar4 = *(longlong *)(lVar7 + 0x10);
                lVar8 = 0;
                if (lVar4 != 0) {
                  if (*(int *)(lVar4 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) goto LAB_140334c80;
                  lVar8 = lVar7;
                  if (*(longlong *)
                       (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
                      != DAT_14cae9568 + 0x30) {
                    lVar8 = 0;
                  }
                }
              }
              if (lVar8 == lVar6) break;
              iVar5 = *(int *)(lVar3 + 0x238);
            }
            lVar11 = lVar11 + 1;
            lVar9 = 0;
          } while ((int)lVar11 < iVar5);
        }
      }
      if ((uStack_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
        return lVar9;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    lVar6 = *(longlong *)(lVar6 + 0x30);
  }
  return lVar6;
}



// FUNCTION 1400f3b8a FUN_1400f3b8a body=113 status=ok
// SIG undefined FUN_1400f3b8a(void)

void FUN_1400f3b8a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400f3bfc(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a634220;
  puVar1[5] = &PTR_FUN_14a634e10;
  puVar1[6] = &PTR_FUN_14a634e50;
  puVar1[0x55] = &PTR_FUN_14a634ea0;
  puVar1[0x56] = &PTR_FUN_14a634f20;
  puVar1[0x57] = &PTR_FUN_14a634f30;
  puVar1[0xe3] = &PTR_FUN_14a634f60;
  return;
}



// FUNCTION 1400f3bfc FUN_1400f3bfc body=455 status=ok
// SIG undefined FUN_1400f3bfc(void)

undefined8 * FUN_1400f3bfc(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  FUN_1400ea704();
  *param_1 = &PTR_FUN_14a9260f0;
  param_1[5] = &PTR_FUN_14a926ce0;
  param_1[6] = &PTR_FUN_14a926d20;
  param_1[0x55] = &PTR_FUN_14a926d70;
  param_1[0x56] = &PTR_FUN_14a926df0;
  param_1[0x57] = &PTR_FUN_14a926e00;
  param_1[0xe3] = &PTR_FUN_14a926e30;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  *(undefined4 *)(param_1 + 0xea) = 0;
  *(undefined4 *)((longlong)param_1 + 0x754) = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x75c) = 0x3ff00000;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x784) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xf1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78c) = 0x3ff00000;
  param_1[0xf2] = 0x3ff0000000000000;
  param_1[0xf3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7bc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c4) = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x7d4) = *(byte *)((longlong)param_1 + 0x7d4) | 0x10;
  *(undefined1 *)(param_1 + 0x104) = 0;
  param_1[0x111] = 0;
  *(undefined4 *)(param_1 + 0x112) = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  *(undefined8 *)((longlong)param_1 + 0x894) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x89c) = 0;
  param_1[0x115] = 0;
  *(undefined4 *)(param_1 + 0x116) = 0;
  FUN_1435357c8(param_1 + 0x118,param_1);
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  lVar2 = 0xa54;
  do {
    *(undefined1 *)((longlong)param_1 + lVar2 + -4) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x2c);
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0xb14);
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 2;
  *(byte *)(param_1 + 0x83) = *(byte *)(param_1 + 0x83) & 0xfe;
  *(byte *)((longlong)param_1 + 0x674) = *(byte *)((longlong)param_1 + 0x674) & 0xfb;
  *(byte *)((longlong)param_1 + 0x676) = *(byte *)((longlong)param_1 + 0x676) & 0xf9;
  *(byte *)((longlong)param_1 + 0x2d3) = *(byte *)((longlong)param_1 + 0x2d3) | 0x10;
  *(byte *)((longlong)param_1 + 0x7d4) = (*(byte *)((longlong)param_1 + 0x7d4) & 0x7c) + 1;
  return param_1;
}



// FUNCTION 1400f3dc4 FUN_1400f3dc4 body=373 status=ok
// SIG undefined FUN_1400f3dc4(void)

void FUN_1400f3dc4(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400f3e4f;
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
LAB_1400f3e4f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1400f3f3a FUN_1400f3f3a body=469 status=ok
// SIG undefined FUN_1400f3f3a(void)

void FUN_1400f3f3a(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1400f406a:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1400f40a7:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1400f3fa4;
LAB_1400f3f99:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1400f3fa4:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x0001400f3fd1;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1400f4027:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1400f40a7;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400f406a;
code_r0x0001400f3fd1:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1400f4027;
    }
  }
  goto LAB_1400f3f99;
}



// FUNCTION 1400f4110 FUN_1400f4110 body=563 status=ok
// SIG undefined FUN_1400f4110(void)

void FUN_1400f4110(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
  if (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c)) {
    lVar6 = *(longlong *)(param_1 + 0x128);
    if (*(longlong *)(param_1 + 0x128) == 0) {
      lVar6 = param_1 + 0x120;
    }
    uVar7 = *(uint *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x130) - 1U & param_2) * 4);
    if (uVar7 != 0xffffffff) {
      plVar2 = (longlong *)(param_1 + 0xe8);
      do {
        puVar3 = (uint *)(*plVar2 + (longlong)(int)uVar7 * 0x18);
        if (*puVar3 == param_2) {
          if (puVar3 + 2 != (uint *)0x0 && puVar3 != (uint *)0x0) {
            plVar4 = *(longlong **)(puVar3 + 2);
            uVar7 = *(uint *)((longlong)plVar4 + 0x14);
            *(uint *)((longlong)plVar4 + 0x14) = uVar7 & 0x80000000 | uVar7 - 1 & 0x7fffffff;
            if ((uVar7 & 0x7fffffff) == 1) {
              if (-1 < (int)uVar7) {
                if ((DAT_14c844ed8 != (undefined8 *)0x0) && (plVar4[1] != 0)) {
                  FUN_1402e42a2(*DAT_14c844ed8);
                }
                local_50 = 0;
                FUN_1447ef144(plVar4 + 1,&local_50);
                FUN_1447ef07c(&local_50);
                puVar5 = (undefined8 *)*plVar4;
                if (puVar5 != (undefined8 *)0x0) {
                  *plVar4 = 0;
                  LOCK();
                  piVar1 = (int *)(puVar5 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)*puVar5)(puVar5,1);
                  }
                }
              }
              if (plVar4 != (longlong *)0x0) {
                FUN_1447ef07c(plVar4 + 1);
                puVar5 = (undefined8 *)*plVar4;
                if (puVar5 != (undefined8 *)0x0) {
                  LOCK();
                  piVar1 = (int *)(puVar5 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)*puVar5)(puVar5,1);
                  }
                }
                FUN_1400020a8(plVar4);
              }
              if (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c)) {
                lVar6 = param_1 + 0x120;
                if (*(longlong *)(param_1 + 0x128) != 0) {
                  lVar6 = *(longlong *)(param_1 + 0x128);
                }
                uVar7 = *(uint *)(lVar6 + ((longlong)(int)param_2 &
                                          (longlong)*(int *)(param_1 + 0x130) - 1U) * 4);
                if (uVar7 != 0xffffffff) {
                  goto LAB_1400f42ba;
                }
              }
            }
          }
          break;
        }
        uVar7 = puVar3[4];
      } while (uVar7 != 0xffffffff);
    }
  }
  goto LAB_1400f42fa;
  while (uVar7 = puVar3[4], uVar7 != 0xffffffff) {
LAB_1400f42ba:
    puVar3 = (uint *)(*plVar2 + (longlong)(int)uVar7 * 0x18);
    if (*puVar3 == param_2) {
      uVar8 = *(uint *)(lVar6 + (longlong)(int)puVar3[5] * 4);
      if (uVar8 == uVar7) {
        puVar9 = (uint *)((longlong)(int)puVar3[5] * 4 + lVar6);
      }
      else {
        do {
          puVar9 = (uint *)(*plVar2 + (longlong)(int)uVar8 * 0x18 + 0x10);
          uVar8 = *puVar9;
        } while (uVar8 != uVar7);
      }
      *puVar9 = puVar3[4];
      FUN_14322d6ca(plVar2);
      break;
    }
  }
LAB_1400f42fa:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001400f431e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
  return;
}



// FUNCTION 1400f4352 FUN_1400f4352 body=36 status=ok
// SIG undefined FUN_1400f4352(void)

undefined8 FUN_1400f4352(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1400f4376 thunk_FUN_1400f437c body=5 status=ok
// SIG undefined thunk_FUN_1400f437c(void)

undefined8 * thunk_FUN_1400f437c(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  FUN_1400f4556(param_1 + 3,param_2 + 3);
  FUN_1400f45aa(param_1 + 5,param_2 + 5);
  uVar4 = param_2[8];
  uVar17 = param_2[9];
  uVar18 = param_2[10];
  uVar6 = *(undefined4 *)(param_2 + 0xb);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar8 = *(undefined4 *)(param_2 + 0xc);
  uVar9 = *(undefined4 *)((longlong)param_2 + 100);
  param_1[7] = param_2[7];
  param_1[8] = uVar4;
  param_1[9] = uVar17;
  param_1[10] = uVar18;
  *(undefined4 *)(param_1 + 0xb) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar7;
  *(undefined4 *)(param_1 + 0xc) = uVar8;
  *(undefined4 *)((longlong)param_1 + 100) = uVar9;
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar7 = *(undefined4 *)(param_2 + 0xe);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar9 = *(undefined4 *)(param_2 + 0xf);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x7c);
  uVar11 = *(undefined4 *)(param_2 + 0x10);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0x84);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar6;
  *(undefined4 *)(param_1 + 0xe) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar8;
  *(undefined4 *)(param_1 + 0xf) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar10;
  *(undefined4 *)(param_1 + 0x10) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar12;
  if (param_1 != param_2) {
    iVar3 = *(int *)(param_2 + 0x12);
    _Src = (void *)param_2[0x11];
    *(int *)(param_1 + 0x12) = iVar3;
    if (iVar3 == 0 && *(int *)((longlong)param_1 + 0x94) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x94) = 0;
    }
    else {
      FUN_1447ce8be(param_1 + 0x11,iVar3);
      if (iVar3 != 0) {
        memcpy((void *)param_1[0x11],_Src,(longlong)iVar3 * 0xc);
      }
    }
  }
  memcpy(param_1 + 0x13,param_2 + 0x13,0x88);
  lVar19 = param_2[0x24];
  if (DAT_14c950c29 == '\x01') {
    if (lVar19 == 0) {
      lVar19 = 0;
    }
    else {
      FUN_14689c22e();
      lVar19 = param_2[0x24];
    }
  }
  param_1[0x24] = lVar19;
  uVar6 = *(undefined4 *)((longlong)param_2 + 300);
  uVar7 = *(undefined4 *)(param_2 + 0x26);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x134);
  uVar9 = *(undefined4 *)(param_2 + 0x27);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x13c);
  uVar11 = *(undefined4 *)(param_2 + 0x28);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0x144);
  uVar13 = *(undefined4 *)(param_2 + 0x29);
  uVar14 = *(undefined4 *)((longlong)param_2 + 0x14c);
  uVar15 = *(undefined4 *)(param_2 + 0x2a);
  uVar16 = *(undefined4 *)((longlong)param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 300) = uVar6;
  *(undefined4 *)(param_1 + 0x26) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar8;
  *(undefined4 *)(param_1 + 0x27) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x13c) = uVar10;
  *(undefined4 *)(param_1 + 0x28) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar12;
  *(undefined4 *)(param_1 + 0x29) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar14;
  *(undefined4 *)(param_1 + 0x2a) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x154) = uVar16;
  FUN_1400f4608(param_1 + 0x2b,param_2 + 0x2b);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x164);
  uVar7 = *(undefined4 *)(param_2 + 0x2d);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x16c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x164) = uVar6;
  *(undefined4 *)(param_1 + 0x2d) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x16c) = uVar8;
  uVar4 = param_2[0x2e];
  lVar19 = param_2[0x2f];
  if (lVar19 != 0) {
    LOCK();
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[0x2f];
  param_1[0x2e] = uVar4;
  param_1[0x2f] = lVar19;
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
  param_1[0x30] = param_2[0x30];
  return param_1;
}



// FUNCTION 1400f437c FUN_1400f437c body=474 status=ok
// SIG undefined FUN_1400f437c(void)

undefined8 * FUN_1400f437c(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  FUN_1400f4556(param_1 + 3,param_2 + 3);
  FUN_1400f45aa(param_1 + 5,param_2 + 5);
  uVar4 = param_2[8];
  uVar17 = param_2[9];
  uVar18 = param_2[10];
  uVar6 = *(undefined4 *)(param_2 + 0xb);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar8 = *(undefined4 *)(param_2 + 0xc);
  uVar9 = *(undefined4 *)((longlong)param_2 + 100);
  param_1[7] = param_2[7];
  param_1[8] = uVar4;
  param_1[9] = uVar17;
  param_1[10] = uVar18;
  *(undefined4 *)(param_1 + 0xb) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar7;
  *(undefined4 *)(param_1 + 0xc) = uVar8;
  *(undefined4 *)((longlong)param_1 + 100) = uVar9;
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar7 = *(undefined4 *)(param_2 + 0xe);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar9 = *(undefined4 *)(param_2 + 0xf);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x7c);
  uVar11 = *(undefined4 *)(param_2 + 0x10);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0x84);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar6;
  *(undefined4 *)(param_1 + 0xe) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar8;
  *(undefined4 *)(param_1 + 0xf) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar10;
  *(undefined4 *)(param_1 + 0x10) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar12;
  if (param_1 != param_2) {
    iVar3 = *(int *)(param_2 + 0x12);
    _Src = (void *)param_2[0x11];
    *(int *)(param_1 + 0x12) = iVar3;
    if (iVar3 == 0 && *(int *)((longlong)param_1 + 0x94) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x94) = 0;
    }
    else {
      FUN_1447ce8be(param_1 + 0x11,iVar3);
      if (iVar3 != 0) {
        memcpy((void *)param_1[0x11],_Src,(longlong)iVar3 * 0xc);
      }
    }
  }
  memcpy(param_1 + 0x13,param_2 + 0x13,0x88);
  lVar19 = param_2[0x24];
  if (DAT_14c950c29 == '\x01') {
    if (lVar19 == 0) {
      lVar19 = 0;
    }
    else {
      FUN_14689c22e();
      lVar19 = param_2[0x24];
    }
  }
  param_1[0x24] = lVar19;
  uVar6 = *(undefined4 *)((longlong)param_2 + 300);
  uVar7 = *(undefined4 *)(param_2 + 0x26);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x134);
  uVar9 = *(undefined4 *)(param_2 + 0x27);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x13c);
  uVar11 = *(undefined4 *)(param_2 + 0x28);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0x144);
  uVar13 = *(undefined4 *)(param_2 + 0x29);
  uVar14 = *(undefined4 *)((longlong)param_2 + 0x14c);
  uVar15 = *(undefined4 *)(param_2 + 0x2a);
  uVar16 = *(undefined4 *)((longlong)param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 300) = uVar6;
  *(undefined4 *)(param_1 + 0x26) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar8;
  *(undefined4 *)(param_1 + 0x27) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x13c) = uVar10;
  *(undefined4 *)(param_1 + 0x28) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar12;
  *(undefined4 *)(param_1 + 0x29) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar14;
  *(undefined4 *)(param_1 + 0x2a) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x154) = uVar16;
  FUN_1400f4608(param_1 + 0x2b,param_2 + 0x2b);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x164);
  uVar7 = *(undefined4 *)(param_2 + 0x2d);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x16c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x164) = uVar6;
  *(undefined4 *)(param_1 + 0x2d) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x16c) = uVar8;
  uVar4 = param_2[0x2e];
  lVar19 = param_2[0x2f];
  if (lVar19 != 0) {
    LOCK();
    *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[0x2f];
  param_1[0x2e] = uVar4;
  param_1[0x2f] = lVar19;
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
  param_1[0x30] = param_2[0x30];
  return param_1;
}



// FUNCTION 1400f4556 FUN_1400f4556 body=84 status=ok
// SIG undefined FUN_1400f4556(void)

undefined8 * FUN_1400f4556(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147876494(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1400f45aa FUN_1400f45aa body=93 status=ok
// SIG undefined FUN_1400f45aa(void)

undefined8 * FUN_1400f45aa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_144760df0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1478764ee(param_1,iVar1);
      FUN_14787655d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1400f4608 FUN_1400f4608 body=195 status=ok
// SIG undefined FUN_1400f4608(void)

undefined8 * FUN_1400f4608(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)*param_1;
  if (puVar2 == (undefined8 *)0x0) {
    if (puVar1 == (undefined8 *)0x0) {
      return param_1;
    }
    *param_1 = 0;
    FUN_1456bf944(puVar1);
    thunk_FUN_1400020a8(puVar1,0x28);
    return param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 2;
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
      FUN_1478765ec(0,puVar2);
      goto LAB_1400f4676;
    }
    *param_1 = puVar1;
    puVar2 = (undefined8 *)*param_2;
  }
  FUN_1478765ec(puVar1,puVar2);
  if (puVar2 == puVar1) {
    return param_1;
  }
LAB_1400f4676:
  FUN_147876670(puVar1 + 2,puVar2 + 2);
  return param_1;
}



// FUNCTION 1400f46cc FUN_1400f46cc body=55 status=ok
// SIG undefined FUN_1400f46cc(void)

void FUN_1400f46cc(longlong *param_1)

{
  FUN_1400f4704(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400f4704 FUN_1400f4704 body=129 status=ok
// SIG undefined FUN_1400f4704(void)

void FUN_1400f4704(longlong param_1,int param_2)

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
  if ((int)uVar2 <= *(int *)(param_1 + 0x2c) && *(int *)(param_1 + 0x2c) < 0x81) {
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



// FUNCTION 1400f4786 FUN_1400f4786 body=309 status=ok
// SIG undefined FUN_1400f4786(void)

longlong FUN_1400f4786(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  int iVar2;
  
  FUN_1400f4948();
  FUN_1400f4d04(param_1,param_2 + 2);
  if (0x135 < *(int *)(param_1 + 0x40)) {
    FUN_1400f48bc(param_1,param_2 + 8);
  }
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    iVar2 = (int)param_2[1];
    pvVar1 = (void *)*param_2;
    if ((0 < iVar2 && *(int *)(param_1 + 0x40) < 0x138) && (*(int *)((longlong)pvVar1 + 8) != -1)) {
      *(undefined4 *)((longlong)pvVar1 + 8) = 0xffffffff;
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        return param_1;
      }
      iVar2 = (int)param_2[1];
      pvVar1 = (void *)*param_2;
    }
    *(int *)(param_2 + 5) = iVar2;
    if (*(int *)((longlong)param_2 + 0x2c) == 0 && iVar2 == 0) {
      *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
    }
    else {
      FUN_140816eac(param_2 + 4,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)param_2[4],pvVar1,(longlong)iVar2 * 0xc);
      }
    }
    iVar2 = (int)param_2[3];
    pvVar1 = (void *)param_2[2];
    *(int *)(param_2 + 7) = iVar2;
    if (iVar2 == 0 && *(int *)((longlong)param_2 + 0x3c) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
    }
    else {
      FUN_144756262(param_2 + 6,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)param_2[6],pvVar1,(longlong)iVar2 * 0x60);
      }
    }
    FUN_140816cc4(param_2 + 0x12,param_2 + 8);
  }
  return param_1;
}



// FUNCTION 1400f48bc FUN_1400f48bc body=140 status=ok
// SIG undefined FUN_1400f48bc(void)

longlong FUN_1400f48bc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1400f5296();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_14487ddf8(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1400f4948 FUN_1400f4948 body=426 status=ok
// SIG undefined FUN_1400f4948(void)

longlong * FUN_1400f4948(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1400f4bb8(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      FUN_1400f4b02(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0xc;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_1400f4bb8(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_140832e02(param_2,iVar2);
        }
        lVar4 = (longlong)iVar2 * 0xc + *param_2;
        FUN_1400f4af3(lVar4);
        FUN_1400f4b02(param_1,lVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1400f4af3 FUN_1400f4af3 body=15 status=ok
// SIG undefined FUN_1400f4af3(void)

void FUN_1400f4af3(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return;
}



// FUNCTION 1400f4b02 FUN_1400f4b02 body=180 status=ok
// SIG undefined FUN_1400f4b02(void)

longlong * FUN_1400f4b02(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x160))();
  puVar3 = (undefined4 *)(param_2 + 8);
  puVar1 = *(undefined4 **)plVar2[1];
  if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,puVar3,4);
    }
    else {
      FUN_14572512c(plVar2,puVar3);
    }
  }
  else {
    *puVar3 = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
  }
  if (((*(byte *)(param_1 + 5) & 1) != 0) && ((int)param_1[8] < 0x136)) {
    local_1c = 0xffffffff;
    FUN_1400751dc(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f4bb8 FUN_1400f4bb8 body=332 status=ok
// SIG undefined FUN_1400f4bb8(void)

void FUN_1400f4bb8(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0xc;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1400f4c26;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_1400f4c26:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0xc)) {
      uVar5 = uVar3 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0xc,4);
  }
  return;
}



// FUNCTION 1400f4d04 FUN_1400f4d04 body=499 status=ok
// SIG undefined FUN_1400f4d04(void)

longlong * FUN_1400f4d04(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x60,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x60);
  local_44 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_44 = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_44);
    }
  }
  else {
    local_44 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_44 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1401a2688(param_2,0);
    }
  }
  else if ((((int)local_44 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x2aaaa < local_44 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_44;
    lVar4 = 0;
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      FUN_1400f4f7e(param_1,lVar3 + lVar4);
      FUN_14480c34d(param_1,lVar3 + lVar4 + 0x20);
      FUN_14480c34d(param_1,lVar3 + lVar4 + 0x40);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        *(undefined8 *)(lVar3 + 0x38 + lVar4) = 0;
        *(undefined8 *)(lVar3 + 0x58 + lVar4) = 0;
      }
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x60;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_44) ||
       (FUN_1401a2688(param_2), 0 < (int)local_44)) {
      iVar5 = 0;
      do {
        lVar4 = FUN_1400f4ef8(param_2);
        FUN_1400f4f7e(param_1,lVar4);
        FUN_14480c34d(param_1,lVar4 + 0x20);
        FUN_14480c34d(param_1,lVar4 + 0x40);
        if ((*(byte *)(param_1 + 5) & 1) != 0) {
          *(undefined8 *)(lVar4 + 0x38) = 0;
          *(undefined8 *)(lVar4 + 0x58) = 0;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_44);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1400f4ef8 FUN_1400f4ef8 body=70 status=ok
// SIG undefined FUN_1400f4ef8(void)

longlong FUN_1400f4ef8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_144a2c682(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x60 + *param_1;
  FUN_1400f4f3e(lVar2,1);
  return lVar2;
}



// FUNCTION 1400f4f3e FUN_1400f4f3e body=64 status=ok
// SIG undefined FUN_1400f4f3e(void)

void FUN_1400f4f3e(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3ff00000;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0x3ff0000000000000;
    param_1[9] = 0x3ff0000000000000;
    param_1[10] = 0x3ff0000000000000;
    param_1[0xb] = 0;
    param_1 = param_1 + 0xc;
  }
  return;
}



// FUNCTION 1400f4f7e FUN_1400f4f7e body=791 status=ok
// SIG undefined FUN_1400f4f7e(void)

longlong * FUN_1400f4f7e(longlong *param_1,double *param_2)

{
  float *pfVar1;
  double *pdVar2;
  ulonglong *puVar3;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)((longlong)param_1 + 0x44) < 0x3ec) {
    puVar3 = (ulonglong *)param_1[1];
    pfVar1 = (float *)*puVar3 + 1;
    if ((float *)puVar3[1] < pfVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_1c);
      }
    }
    else {
      local_1c = *(float *)*puVar3;
      *puVar3 = (ulonglong)pfVar1;
    }
    puVar3 = (ulonglong *)param_1[1];
    pfVar1 = (float *)*puVar3 + 1;
    if ((float *)puVar3[1] < pfVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_20,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_20);
      }
    }
    else {
      local_20 = *(float *)*puVar3;
      *puVar3 = (ulonglong)pfVar1;
    }
    puVar3 = (ulonglong *)param_1[1];
    pfVar1 = (float *)*puVar3 + 1;
    if ((float *)puVar3[1] < pfVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_24);
      }
    }
    else {
      local_24 = *(float *)*puVar3;
      *puVar3 = (ulonglong)pfVar1;
    }
    puVar3 = (ulonglong *)param_1[1];
    pfVar1 = (float *)*puVar3 + 1;
    if ((float *)puVar3[1] < pfVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_28,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_28);
      }
    }
    else {
      local_28 = *(float *)*puVar3;
      *puVar3 = (ulonglong)pfVar1;
    }
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      *param_2 = (double)local_1c;
      param_2[1] = (double)local_20;
      param_2[2] = (double)local_24;
      param_2[3] = (double)local_28;
    }
  }
  else {
    pdVar2 = *(double **)param_1[1];
    if ((double *)((longlong *)param_1[1])[1] < pdVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
      }
      else {
        thunk_FUN_146821949(param_1,param_2);
      }
    }
    else {
      *param_2 = *pdVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    pdVar2 = *(double **)param_1[1];
    if ((double *)((longlong *)param_1[1])[1] < pdVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[1] = *pdVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    pdVar2 = *(double **)param_1[1];
    if ((double *)((longlong *)param_1[1])[1] < pdVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,8);
      }
      else {
        thunk_FUN_146821949(param_1);
      }
    }
    else {
      param_2[2] = *pdVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
    param_2 = param_2 + 3;
    pdVar2 = *(double **)param_1[1];
    if ((double *)((longlong *)param_1[1])[1] < pdVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
      }
      else {
        thunk_FUN_146821949(param_1,param_2);
      }
    }
    else {
      *param_2 = *pdVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f5296 FUN_1400f5296 body=773 status=ok
// SIG undefined FUN_1400f5296(void)

longlong * FUN_1400f5296(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x14,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x14);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar3 = (ulonglong *)param_1[1];
    piVar2 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar2;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_70 = local_48;
    local_6c = local_44;
    local_78 = local_50;
    uVar7 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar9 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar5 = *local_90;
        (**(code **)(*param_1 + 0x160))(param_1,lVar5 + (longlong)iVar9 * 0x14);
        puVar8 = (undefined4 *)(lVar5 + (longlong)iVar9 * 0x14 + 8);
        puVar4 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar8,4);
          }
          else {
            FUN_14572512c(param_1);
          }
        }
        else {
          *puVar8 = *puVar4;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar9 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar3 = (ulonglong *)param_1[1];
    puVar4 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar4) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar4;
    }
    FUN_1401ad1b4(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar9 = 0;
      do {
        FUN_14487db2c(param_2,&local_90);
        *local_88 = 0;
        local_88[1] = 0xffffffff00000000;
        puVar1 = local_88 + 1;
        (**(code **)(*param_1 + 0x160))(param_1);
        puVar4 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar1,4);
          }
          else {
            FUN_14572512c(param_1,puVar1);
          }
        }
        else {
          *(undefined4 *)puVar1 = *puVar4;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        iVar9 = iVar9 + 1;
        uVar7 = local_78;
      } while (iVar9 < (int)local_60);
    }
  }
  local_78 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1400f559c FUN_1400f559c body=93 status=ok
// SIG undefined FUN_1400f559c(void)

undefined8 * FUN_1400f559c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_144750709(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1400f55fa(param_1,iVar1);
      FUN_14480c599(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1400f55fa FUN_1400f55fa body=228 status=ok
// SIG undefined FUN_1400f55fa(void)

void FUN_1400f55fa(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1400f56de FUN_1400f56de body=636 status=ok
// SIG undefined FUN_1400f56de(void)

void FUN_1400f56de(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  int *_Memory;
  uint *puVar8;
  ulonglong _Size;
  int *piVar9;
  void *_Dst;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
LAB_1400f5873:
    if (_Src == (void *)0x0) goto LAB_1400f58df;
  }
  else {
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_1400f57bb;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_14274a1dc);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar4 = *(undefined4 **)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x310) = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar4 = 0xffffffff;
      *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      FUN_140217a48(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_1400f57bb:
      _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)((longlong)_Dst + _Size);
      uVar7 = puVar5[0x12];
      if (puVar8 <= puVar5 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
        LOCK();
        uVar2 = *puVar5;
        *puVar5 = *puVar5 + uVar7 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar7) != 0xffffffff) break;
        puVar5 = (uint *)*puVar1;
        *puVar5 = 0xffffffff;
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)((longlong)_Dst + _Size);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_1400f5835;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_1400f5835:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
    if (uVar6 == 0 || _Src == (void *)0x0) goto LAB_1400f5873;
    if (uVar6 < _Size) {
      _Size = uVar6;
    }
    memcpy(_Dst,_Src,_Size);
  }
  piVar9 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar9 = *piVar9 + -1;
  UNLOCK();
  if (*piVar9 == 0) {
    _Memory = piVar9;
    if (*(longlong *)(piVar9 + 0x10) - (longlong)piVar9 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_14274a1dc);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar3 + 0x310);
      *(int **)(lVar3 + 0x310) = piVar9;
      if (_Memory == (int *)0x0) goto LAB_1400f58df;
    }
    _aligned_free(_Memory);
  }
LAB_1400f58df:
  *param_1 = _Dst;
  return;
}



// FUNCTION 1400f595c FUN_1400f595c body=57 status=ok
// SIG undefined FUN_1400f595c(void)

void FUN_1400f595c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62ee8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62ee8 = FUN_140002ddd(FUN_1464fb6fc,uVar1,L"GbxRotationTargetModifierSettings_Distract")
    ;
  }
  return;
}



// FUNCTION 1400f5996 FUN_1400f5996 body=99 status=ok
// SIG undefined FUN_1400f5996(void)

void FUN_1400f5996(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1400f59fa FUN_1400f59fa body=270 status=ok
// SIG undefined FUN_1400f59fa(void)

/* WARNING: Removing unreachable block (ram,0x0001400f5ae2) */

void FUN_1400f59fa(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x408);
  if (*(longlong *)(param_1 + 0x408) == 0) {
    lVar4 = param_1 + 8;
  }
  iVar1 = *(int *)(param_1 + 0x410);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar3);
      if (*(int *)(lVar2 + 0x3a0) != -1) {
        FUN_1400f5c42(*(undefined8 *)(param_1 + 0x418),*(int *)(lVar2 + 0x3a0),
                      *(undefined4 *)(lVar2 + 0x3a4));
      }
      if (*(int *)(lVar2 + 0x3a8) != -1) {
        FUN_1400f5b46(*(undefined8 *)(param_1 + 0x418),*(int *)(lVar2 + 0x3a8),
                      *(undefined4 *)(lVar2 + 0x3ac));
      }
      if (lVar2 != 0) {
        if (*(longlong *)(lVar2 + 0x390) != 0) {
          FUN_1400020a8();
        }
        FUN_1400f5b08(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x410) = 0;
  if (*(int *)(param_1 + 0x414) != 0) {
    if (*(int *)(param_1 + 0x414) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x414) = 0;
    FUN_1400f5bba(param_1 + 8,*(undefined4 *)(param_1 + 0x410));
    return;
  }
  return;
}



// FUNCTION 1400f5b08 FUN_1400f5b08 body=61 status=ok
// SIG undefined FUN_1400f5b08(void)

void FUN_1400f5b08(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x380);
  if (*(longlong *)(param_1 + 0x380) == 0) {
    lVar1 = param_1;
  }
  FUN_14480c75f(lVar1,*(undefined4 *)(param_1 + 0x388));
  if (*(longlong *)(param_1 + 0x380) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400f5b46 FUN_1400f5b46 body=116 status=ok
// SIG undefined FUN_1400f5b46(void)

void FUN_1400f5b46(longlong param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x37c) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x108);
    *(uint *)(param_1 + 0x108) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
      FUN_14017bd48(param_1 + 0xb0,iVar1);
    }
    lVar2 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x100);
    }
    *(ulonglong *)(lVar2 + (longlong)iVar1 * 8) = CONCAT44(param_3,param_2);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - param_3;
  }
  return;
}



// FUNCTION 1400f5bba FUN_1400f5bba body=136 status=ok
// SIG undefined FUN_1400f5bba(void)

void FUN_1400f5bba(void *param_1,int param_2,uint param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if (param_3 < 0x81) {
    if (_Src != (void *)0x0) {
      memmove(param_1,_Src,(longlong)param_2 << 3);
      FUN_142c549ae((longlong)param_1 + 0x400,0);
      return;
    }
  }
  else {
    FUN_142c549ae((longlong)param_1 + 0x400,param_3);
    if (_Src == (void *)0x0) {
      memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 1400f5c42 FUN_1400f5c42 body=239 status=ok
// SIG undefined FUN_1400f5c42(void)

void FUN_1400f5c42(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(char *)(param_1 + 0x37c) == '\x01') {
    iVar3 = *(int *)(param_1 + 0x2f8);
    *(uint *)(param_1 + 0x2f8) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x2fc) < iVar3 + 1U) {
      FUN_14017bd48(param_1 + 0x2a0,iVar3);
    }
    lVar7 = param_1 + 0x2a0;
    if (*(longlong *)(param_1 + 0x2f0) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x2f0);
    }
    *(ulonglong *)(lVar7 + (longlong)iVar3 * 8) = CONCAT44(param_3,param_2);
    *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) - param_3;
    plVar1 = (longlong *)(param_1 + 0x350);
    iVar3 = *(int *)(param_1 + 0x358);
    lVar7 = (longlong)iVar3;
    if (lVar7 != 0) {
      lVar5 = *plVar1;
      lVar6 = (longlong)(iVar3 + -1);
      iVar4 = *(int *)(lVar5 + 8 + lVar6 * 0xc);
      if ((*(int *)(lVar5 + 4 + lVar6 * 0xc) + iVar4 == param_2) &&
         (piVar2 = (int *)(lVar5 + lVar6 * 0xc), *piVar2 == -1)) {
        piVar2[2] = iVar4 + param_3;
        return;
      }
    }
    *(uint *)(param_1 + 0x358) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x35c) < iVar3 + 1U) {
      FUN_1401cfe8a(plVar1,iVar3);
    }
    lVar5 = *plVar1;
    *(undefined4 *)(lVar5 + lVar7 * 0xc) = 0xffffffff;
    *(int *)(lVar5 + 4 + lVar7 * 0xc) = param_2;
    *(int *)(lVar5 + 8 + lVar7 * 0xc) = param_3;
  }
  return;
}



// FUNCTION 1400f5d32 FUN_1400f5d32 body=1931 status=ok
// SIG undefined FUN_1400f5d32(void)

void FUN_1400f5d32(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  DWORD DVar3;
  uint uVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  LPVOID pvVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  void *pvVar12;
  int iVar13;
  void *pvVar14;
  void *pvVar15;
  longlong *plVar16;
  ulonglong *puVar17;
  undefined8 **ppuVar18;
  ulonglong *puVar19;
  longlong *plVar20;
  ulonglong _Size;
  undefined8 *puVar21;
  bool bVar22;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  code *local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  ulonglong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  longlong local_68;
  byte local_60;
  undefined8 local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((((longlong)(int)param_2[0xf] != 0) && ((*(byte *)(param_1 + 0x20) & 0x10) == 0)) &&
     (*(int *)(param_1 + 0x30) != 0)) {
    local_88 = param_2 + 0xe;
    local_a8 = *param_2;
    puVar17 = (ulonglong *)param_2[0xe];
    puVar19 = puVar17 + (int)param_2[0xf];
    local_90 = param_2 + 0x10;
    local_80 = param_2 + 0x17;
    local_b8 = param_1;
    local_b0 = param_2;
    local_a0 = param_3;
    local_98 = puVar19;
    do {
      plVar2 = (longlong *)*puVar17;
      if (((int)(uint)*(ushort *)(plVar2 + 8) < *(int *)(param_1 + 0x30)) &&
         (plVar7 = (longlong *)FUN_1400796d0(param_3[2],plVar2[0xd],1), plVar7 != (longlong *)0x0))
      {
        plVar16 = (longlong *)
                  ((ulonglong)((uint)*(ushort *)(plVar2 + 8) * 0x30) + *(longlong *)(param_1 + 0x28)
                  );
        cVar1 = *(char *)((longlong)plVar7 + 0xb4);
        if (cVar1 == '\x02') {
          DVar6 = DAT_14c7585d0;
          if (DAT_14c7585d0 == 0xffffffff) {
            DVar6 = TlsAlloc();
            DVar5 = 0xffffffff;
            LOCK();
            bVar22 = DAT_14c7585d0 != 0xffffffff;
            DVar3 = DVar6;
            if (bVar22) {
              DVar5 = DAT_14c7585d0;
              DVar3 = DAT_14c7585d0;
            }
            DAT_14c7585d0 = DVar3;
            UNLOCK();
            if (bVar22) {
              TlsFree(DVar6);
              DVar6 = DVar5;
            }
          }
          pvVar8 = TlsGetValue(DVar6);
          if (pvVar8 == (LPVOID)0x0) {
            pvVar8 = (LPVOID)FUN_140036a08(&local_78);
            FUN_140fddf04(pvVar8);
            TlsSetValue(DVar6,pvVar8);
          }
          local_78 = (undefined8 *)((longlong)pvVar8 + 0x10);
          local_70 = *(undefined8 *)((longlong)pvVar8 + 0x10);
          local_68 = *(longlong *)((longlong)pvVar8 + 0x20);
          local_60 = 0;
          local_58 = *(undefined8 *)((longlong)pvVar8 + 0x28);
          *(undefined8 ***)((longlong)pvVar8 + 0x28) = &local_78;
          *(int *)((longlong)pvVar8 + 0x30) = *(int *)((longlong)pvVar8 + 0x30) + 1;
          _Size = (ulonglong)*(ushort *)((longlong)plVar7 + 0xb6);
          DVar6 = DAT_14c7585d0;
          if (DAT_14c7585d0 == 0xffffffff) {
            DVar6 = TlsAlloc();
            DVar5 = 0xffffffff;
            LOCK();
            bVar22 = DAT_14c7585d0 != 0xffffffff;
            DVar3 = DVar6;
            if (bVar22) {
              DVar5 = DAT_14c7585d0;
              DVar3 = DAT_14c7585d0;
            }
            DAT_14c7585d0 = DVar3;
            UNLOCK();
            if (bVar22) {
              TlsFree(DVar6);
              DVar6 = DVar5;
            }
          }
          pvVar8 = TlsGetValue(DVar6);
          if (pvVar8 == (LPVOID)0x0) {
            pvVar8 = (LPVOID)FUN_140036a08(&local_49);
            FUN_140fddf04(pvVar8);
            TlsSetValue(DVar6,pvVar8);
          }
          puVar19 = (ulonglong *)((longlong)pvVar8 + 0x10);
          pvVar12 = (void *)(*(longlong *)((longlong)pvVar8 + 0x10) + 0xfU & 0xfffffffffffffff0);
          uVar9 = (longlong)pvVar12 + _Size;
          if (*(ulonglong *)((longlong)pvVar8 + 0x18) < uVar9) {
            FUN_140023dd8(puVar19);
            pvVar12 = (void *)(*puVar19 + 0xf & 0xfffffffffffffff0);
            uVar9 = (longlong)pvVar12 + _Size;
          }
          *puVar19 = uVar9;
          memset(pvVar12,0,_Size);
          param_1 = local_b8;
          plVar10 = plVar7;
          do {
            for (plVar20 = (longlong *)plVar10[10]; plVar20 != (longlong *)0x0;
                plVar20 = (longlong *)plVar20[3]) {
              if ((~*(uint *)(plVar20[1] + 0x18) & 0x8001) == 0) goto LAB_1400f5fd9;
            }
            plVar10 = (longlong *)(**(code **)(*plVar10 + 0x2b0))(plVar10);
          } while (plVar10 != (longlong *)0x0);
          plVar10 = (longlong *)0x0;
          plVar20 = (longlong *)0x0;
LAB_1400f5fd9:
          pvVar15 = (void *)((int)plVar16[3] + local_a8);
          pvVar14 = (void *)((longlong)*(int *)((longlong)plVar20 + 0x44) + (longlong)pvVar12);
          if (pvVar14 != pvVar15) {
            if ((*(byte *)((longlong)plVar20 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar20 + 0x100))(plVar20,pvVar14,pvVar15,(int)plVar20[6]);
            }
            else {
              memcpy(pvVar14,pvVar15,
                     (longlong)(int)plVar20[6] * (longlong)*(int *)((longlong)plVar20 + 0x34));
            }
          }
          plVar16 = (longlong *)plVar20[3];
          param_2 = local_b0;
          if (plVar10 != (longlong *)0x0) {
            while( true ) {
              for (; plVar16 != (longlong *)0x0; plVar16 = (longlong *)plVar16[3]) {
                if ((~*(uint *)(plVar16[1] + 0x18) & 0x8001) == 0) goto LAB_1400f617c;
              }
              plVar10 = (longlong *)(**(code **)(*plVar10 + 0x2b0))();
              param_1 = local_b8;
              param_2 = local_b0;
              if (plVar10 == (longlong *)0x0) break;
              plVar16 = (longlong *)plVar10[10];
            }
            plVar16 = (longlong *)0x0;
          }
LAB_1400f617c:
          param_3 = local_a0;
          if ((int)param_2[0x11] != *(int *)((longlong)param_2 + 0xb4)) {
            uVar4 = ((uint)((ulonglong)plVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar2 >> 4)) *
                    -0x7a143595;
            uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
            plVar10 = (longlong *)param_2[0x18];
            if ((longlong *)param_2[0x18] == (longlong *)0x0) {
              plVar10 = local_80;
            }
            iVar13 = *(int *)((longlong)plVar10 +
                             (ulonglong)((int)param_2[0x19] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
            if (iVar13 != -1) {
              do {
                lVar11 = *local_90 + (longlong)iVar13 * 0x20;
                if (*(longlong **)(*local_90 + (longlong)iVar13 * 0x20) == plVar2)
                goto LAB_1400f6202;
                iVar13 = *(int *)(lVar11 + 0x18);
              } while (iVar13 != -1);
            }
          }
          lVar11 = 0;
LAB_1400f6202:
          pvVar15 = (void *)(lVar11 + 8);
          if (lVar11 == 0) {
            pvVar15 = (void *)0x0;
          }
          pvVar14 = (void *)((longlong)*(int *)((longlong)plVar16 + 0x44) + (longlong)pvVar12);
          if (pvVar14 != pvVar15) {
            if ((*(byte *)((longlong)plVar16 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar16 + 0x100))(plVar16,pvVar14,pvVar15,(int)plVar16[6]);
            }
            else {
              memcpy(pvVar14,pvVar15,
                     (longlong)(int)plVar16[6] * (longlong)*(int *)((longlong)plVar16 + 0x34));
            }
          }
          (**(code **)(*param_3 + 0x248))(param_3,plVar7,pvVar12);
          puVar19 = local_98;
          if (local_60 == 0) {
            local_60 = 1;
            *(int *)(local_78 + 4) = *(int *)(local_78 + 4) + -1;
            if (local_68 != local_78[2]) {
              FUN_14004673c();
            }
            *local_78 = local_70;
            local_78[3] = local_58;
            local_70 = 0;
          }
          if ((local_60 & 1) == 0) {
            local_60 = 1;
            *(int *)(local_78 + 4) = *(int *)(local_78 + 4) + -1;
            if (local_68 != local_78[2]) {
              FUN_14004673c();
            }
            *local_78 = local_70;
            local_78[3] = local_58;
          }
        }
        else {
          if (cVar1 == '\x01') {
            ppuVar18 = (undefined8 **)((int)plVar16[3] + local_a8);
            if ((*(byte *)((longlong)plVar16 + 0x2c) & 8) != 0) {
              (**(code **)(*param_3 + 0x248))(param_3,plVar7,ppuVar18);
              puVar19 = local_98;
              goto LAB_1400f631c;
            }
            lVar11 = *plVar16;
            if (lVar11 == 0) {
LAB_1400f60fc:
              lVar11 = *param_3;
            }
            else {
              puVar21 = *(undefined8 **)(lVar11 + 8);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c951d20) &&
                 (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
                local_c8 = FUN_1446ddbd2();
                local_c0 = FUN_14067a048;
                local_d0 = 0;
                local_d8 = 0x28001;
                FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
                atexit(FUN_142811fe5);
                _Init_thread_footer(&DAT_14c951d20);
              }
              if (DAT_14c951cd8 == 0) {
                bVar22 = puVar21 != (undefined8 *)0x0;
                if (puVar21 != &DAT_14c951cd0 && bVar22) {
                  do {
                    puVar21 = (undefined8 *)puVar21[6];
                    bVar22 = puVar21 != (undefined8 *)0x0;
                    if (puVar21 == &DAT_14c951cd0) break;
                  } while (puVar21 != (undefined8 *)0x0);
                }
                bVar22 = !bVar22;
              }
              else {
                bVar22 = (puVar21[3] & DAT_14c951cd8) == 0;
              }
              param_3 = local_a0;
              if ((bVar22) || (*(byte *)(lVar11 + 0x73) == 0xff)) goto LAB_1400f60fc;
              local_78 = (undefined8 *)
                         CONCAT71(local_78._1_7_,
                                  (*(byte *)((longlong)ppuVar18 +
                                            (ulonglong)*(byte *)(lVar11 + 0x71)) &
                                  *(byte *)(lVar11 + 0x73)) != 0);
              lVar11 = *local_a0;
              ppuVar18 = &local_78;
            }
            (**(code **)(lVar11 + 0x248))(param_3,plVar7,ppuVar18);
            param_1 = local_b8;
            puVar19 = local_98;
            if ((*(byte *)((longlong)plVar16 + 0x2c) & 0x10) != 0) goto LAB_1400f631c;
          }
          else if ((cVar1 != '\0') ||
                  ((**(code **)(*param_3 + 0x248))(param_3,plVar7,0),
                  (*(uint *)((longlong)plVar16 + 0x2c) & 0x480) != 0x400)) goto LAB_1400f631c;
          pvVar12 = (void *)((longlong)*(int *)((longlong)plVar16 + 0x14) + (longlong)param_3);
          pvVar15 = (void *)((int)plVar16[3] + local_a8);
          if (pvVar15 != pvVar12) {
            if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar2 + 0x100))(plVar2,pvVar15,pvVar12);
            }
            else {
              memcpy(pvVar15,pvVar12,
                     (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
            }
          }
        }
      }
LAB_1400f631c:
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar19);
    *(undefined4 *)(param_2 + 0xf) = 0;
    if (*(int *)((longlong)param_2 + 0x7c) != 0) {
      FUN_140005516(local_88,0);
    }
    FUN_140242818(local_90,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400f64be FUN_1400f64be body=99 status=ok
// SIG undefined FUN_1400f64be(void)

void FUN_1400f64be(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1400f6522 FUN_1400f6522 body=521 status=ok
// SIG undefined FUN_1400f6522(void)

void FUN_1400f6522(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  uint local_80;
  undefined8 *local_78;
  longlong *local_70;
  byte *local_68;
  undefined8 *local_60;
  byte local_51;
  undefined8 local_50;
  code *local_48;
  longlong **local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[4] == 0) {
    if ((int)param_1[6] != 0) {
      local_50 = *(undefined8 *)(*param_1 + 0x218);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c8442bc) {
        FUN_144b3d300(&DAT_14c8442bc);
        if (DAT_14c8442bc == -1) {
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
          _Init_thread_footer(&DAT_14c8442bc);
        }
      }
      if ((DAT_14c872bf0 == '\x01') && (DAT_14c872bf1 != '\x01')) {
        local_51 = 0;
      }
      else {
        local_51 = DAT_14c8442b8 ^ 1;
      }
      bVar5 = FUN_1447e0190();
      local_40 = &local_70;
      local_60 = &local_50;
      local_78 = &local_38;
      local_38 = 0;
      local_30 = 0;
      local_48 = FUN_143472e90;
      local_80 = (uint)(bVar5 ^ 1);
      local_70 = param_1;
      local_68 = &local_51;
      FUN_1427ae281(L"ParallelFor Task",(int)param_1[6],1);
      *(undefined4 *)(param_1 + 6) = 0;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        FUN_1463b679e(param_1 + 5);
      }
    }
    lVar3 = param_1[8];
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = param_1[7];
      lVar6 = 0;
      do {
        plVar2 = *(longlong **)(lVar1 + lVar6);
        if ((plVar2 != (longlong *)0x0) && ((*(uint *)(plVar2 + 1) >> 0x1e & 1) == 0)) {
          (**(code **)(*plVar2 + 0x330))();
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar6);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)((longlong)param_1 + 0x44) != 0) {
      FUN_1463b679e(param_1 + 7);
    }
  }
  else {
    cVar4 = FUN_1404e786a(param_1[4] + 8);
    if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f6740 FUN_1400f6740 body=182 status=ok
// SIG undefined FUN_1400f6740(void)

void FUN_1400f6740(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14a2d33e0;
    if (param_1[0x1b2d] != 0) {
      FUN_1400020a8();
    }
    FUN_1400f67f6(param_1 + 0x2b);
    *param_1 = &PTR_LAB_14a2912b0;
    if (param_1[0x1c] != 0) {
      FUN_1400020a8();
    }
    if ((0x50 < *(ushort *)((longlong)param_1 + 0x82)) && (param_1[6] != 0)) {
      FUN_1400020a8();
    }
    *(undefined2 *)((longlong)param_1 + 0x82) = 0;
    param_1[6] = 0;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x1b2f;
  }
  return;
}



// FUNCTION 1400f67f6 FUN_1400f67f6 body=61 status=ok
// SIG undefined FUN_1400f67f6(void)

void FUN_1400f67f6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xd800);
  if (*(longlong *)(param_1 + 0xd800) == 0) {
    lVar1 = param_1;
  }
  FUN_14020b505(lVar1,*(undefined4 *)(param_1 + 0xd808));
  if (*(longlong *)(param_1 + 0xd800) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400f6834 FUN_1400f6834 body=213 status=ok
// SIG undefined FUN_1400f6834(void)

void FUN_1400f6834(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(int *)(param_1 + 0xd4) == 4) {
    FUN_1400f690a(param_1 + 0x410);
    FUN_1400f690a(param_1 + 0x6b8);
    plVar4 = *(longlong **)(param_1 + 0x728);
    if ((plVar4 != (longlong *)0x0) && ((longlong)(int)plVar4[1] != 0)) {
      lVar3 = (longlong)(int)plVar4[1] * 0x2a8;
      lVar2 = *plVar4 + 0x270;
      do {
        FUN_1400f690a(lVar2);
        lVar2 = lVar2 + 0x2a8;
        lVar3 = lVar3 + -0x2a8;
      } while (lVar3 != 0);
    }
  }
  else {
    FUN_14480c7c4(param_1 + 0x1a0,*(undefined8 *)(param_1 + 8));
    FUN_14480c7c4(param_1 + 0x448,*(undefined8 *)(param_1 + 8));
    puVar1 = *(undefined8 **)(param_1 + 0x728);
    if ((puVar1 != (undefined8 *)0x0) && ((longlong)*(int *)(puVar1 + 1) != 0)) {
      plVar4 = (longlong *)*puVar1;
      lVar2 = (longlong)*(int *)(puVar1 + 1) * 0x2a8;
      do {
        (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined8 *)(param_1 + 8));
        plVar4 = plVar4 + 0x55;
        lVar2 = lVar2 + -0x2a8;
      } while (lVar2 != 0);
    }
  }
  return;
}



// FUNCTION 1400f690a FUN_1400f690a body=71 status=ok
// SIG undefined FUN_1400f690a(void)

void FUN_1400f690a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14481578e(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_14481578e(param_1 + 0x10,0);
  return;
}



// FUNCTION 1400f6952 FUN_1400f6952 body=58 status=ok
// SIG undefined FUN_1400f6952(void)

undefined8 * FUN_1400f6952(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  bVar1 = FUN_14480c900(0,param_3);
  *(uint *)(param_2 + 2) = (uint)bVar1 * 4 + 0x82;
  *(undefined2 *)((longlong)param_2 + 4) = 0x242;
  return param_2;
}



// FUNCTION 1400f698c FUN_1400f698c body=88 status=ok
// SIG undefined FUN_1400f698c(void)

undefined8 * FUN_1400f698c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1400f69e4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1400f69e4 FUN_1400f69e4 body=314 status=ok
// SIG undefined FUN_1400f69e4(void)

void FUN_1400f69e4(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400f6a52;
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
LAB_1400f6a52:
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



// FUNCTION 1400f6b1e FUN_1400f6b1e body=750 status=ok
// SIG undefined FUN_1400f6b1e(void)

void FUN_1400f6b1e(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  if (param_4 == '\0') {
LAB_1400f6b40:
    lVar6 = 0;
    if (*(char *)(param_2 + 0x13870) != '\0') {
      lVar6 = param_2 + 0x13870;
    }
    *param_3 = lVar6;
    param_3[1] = *(longlong *)(param_2 + 0x13818);
    param_3[0xc] = param_1 + 0x38b0;
    param_3[0xf] = param_2;
    *(undefined8 *)((longlong)param_3 + 0x14) = *(undefined8 *)(param_2 + 0x30f8);
    *(undefined8 *)((longlong)param_3 + 0x1c) = *(undefined8 *)(param_2 + 0x3100);
    if (*(longlong *)(param_2 + 0x3108) == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = *(undefined4 *)(*(longlong *)(param_2 + 0x3108) + 0x20);
    }
    *(undefined4 *)(param_3 + 2) = uVar5;
    param_3[0x13] = 0;
    param_3[0x14] = 0;
    param_3[0x10] = param_1;
    param_3[0xb] = *(longlong *)(param_1 + 0x38c0);
    return;
  }
  iVar9 = *(int *)(param_1 + 0x38b8);
  if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  plVar1 = param_3 + 0xd;
  *(undefined4 *)(param_3 + 0xe) = 0;
  if (*(int *)((longlong)param_3 + 0x74) != iVar9) {
    FUN_14717ca82(plVar1,iVar9);
  }
  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
    iVar2 = (int)param_3[0xe];
    *(uint *)(param_3 + 0xe) = iVar2 + 1U;
    if (*(uint *)((longlong)param_3 + 0x74) < iVar2 + 1U) {
      FUN_14717cada(plVar1,iVar2);
    }
    *(undefined1 *)(*plVar1 + (longlong)iVar2) = 0;
  }
  iVar9 = *(int *)(param_2 + 0x3d38);
  if (-1 < iVar9) {
    if (*(int *)((longlong)param_3 + 0x34) < iVar9) {
      FUN_14717cb58();
      iVar9 = *(int *)(param_2 + 0x3d38);
    }
    if (iVar9 != 0) {
      lVar6 = *(longlong *)(param_2 + 0x3d30);
      lVar8 = 0;
      do {
        lVar3 = *(longlong *)(lVar6 + lVar8);
        if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0xb0))) {
          lVar7 = *(longlong *)(lVar3 + 0xa8);
          if (*(longlong *)(lVar3 + 0xa8) == 0) {
            lVar7 = lVar3;
          }
          plVar4 = *(longlong **)(lVar7 + 0x40);
          if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) {
            iVar2 = (int)param_3[6];
            *(uint *)(param_3 + 6) = iVar2 + 1U;
            if (*(uint *)((longlong)param_3 + 0x34) < iVar2 + 1U) {
              FUN_14717cbb8(param_3 + 5,(longlong)iVar2);
            }
            lVar3 = *plVar4;
            *(longlong *)(param_3[5] + (longlong)iVar2 * 8) = lVar3;
            *(undefined1 *)(*plVar1 + (longlong)*(int *)(lVar3 + 0x10)) = 1;
          }
        }
        lVar8 = lVar8 + 0x18;
      } while ((longlong)iVar9 * 0x18 != lVar8);
    }
    iVar9 = *(int *)(param_2 + 0x3d48);
    if (-1 < iVar9) {
      if (*(int *)((longlong)param_3 + 0x44) < iVar9) {
        FUN_14717cb58();
        iVar9 = *(int *)(param_2 + 0x3d48);
      }
      if (iVar9 != 0) {
        lVar6 = *(longlong *)(param_2 + 0x3d40);
        lVar8 = 0;
        do {
          lVar3 = *(longlong *)(lVar6 + lVar8);
          if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0xb0))) {
            lVar7 = *(longlong *)(lVar3 + 0xa8);
            if (*(longlong *)(lVar3 + 0xa8) == 0) {
              lVar7 = lVar3;
            }
            plVar4 = *(longlong **)(lVar7 + 0x40);
            if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) {
              iVar2 = (int)param_3[8];
              *(uint *)(param_3 + 8) = iVar2 + 1U;
              if (*(uint *)((longlong)param_3 + 0x44) < iVar2 + 1U) {
                FUN_14717cbb8(param_3 + 7,(longlong)iVar2);
              }
              lVar3 = *plVar4;
              *(longlong *)(param_3[7] + (longlong)iVar2 * 8) = lVar3;
              *(undefined1 *)(*plVar1 + (longlong)*(int *)(lVar3 + 0x10)) = 3;
            }
          }
          lVar8 = lVar8 + 0x18;
        } while ((longlong)iVar9 * 0x18 != lVar8);
      }
      goto LAB_1400f6b40;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar9);
}



// FUNCTION 1400f6e0c FUN_1400f6e0c body=63 status=ok
// SIG undefined FUN_1400f6e0c(void)

longlong FUN_1400f6e0c(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400f6f32();
  if (lVar1 != 0) {
    lVar2 = FUN_1400f6e4c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1400f6e4c FUN_1400f6e4c body=228 status=ok
// SIG undefined FUN_1400f6e4c(void)

longlong FUN_1400f6e4c(void)

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
  if (DAT_14cbae8e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459984c6;
    local_38 = &LAB_148c403b9;
    local_40 = &LAB_1458ea4cf;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakSingletons",&DAT_14cbae8e8,&DAT_148c403b8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbae8e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f6f32 FUN_1400f6f32 body=310 status=ok
// SIG undefined FUN_1400f6f32(void)

undefined8 FUN_1400f6f32(longlong param_1)

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
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
    param_1 = DAT_14cb10918;
  }
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x1f0), lVar1 != 0)) {
    if (DAT_14cb5e538 == 0) {
      local_30 = &local_18;
      local_18 = &LAB_1417c5d06;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1417ad04a;
      local_38 = &LAB_1486a7af7;
      local_40 = &LAB_1464e1631;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x1000000c;
      local_60 = 8;
      local_68 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
    }
    if ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) == DAT_14cb5e538 + 0x30)) {
      uVar2 = *(undefined8 *)(lVar1 + 0x1e0);
      goto LAB_1400f6fa4;
    }
  }
  uVar2 = 0;
LAB_1400f6fa4:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f7082 FUN_1400f7082 body=132 status=ok
// SIG undefined FUN_1400f7082(void)

bool FUN_1400f7082(double param_1,double param_2)

{
  short sVar1;
  bool bVar2;
  undefined1 auStack_58 [32];
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_1;
  sVar1 = _dtest();
  if (sVar1 == 2) {
    local_38 = param_2;
    sVar1 = _dtest();
    bVar2 = sVar1 == 2;
  }
  else {
    bVar2 = (bool)(-(param_1 == param_2) & 1);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f7108 FUN_1400f7108 body=1041 status=ok
// SIG undefined FUN_1400f7108(void)

ulonglong FUN_1400f7108(longlong *param_1,byte param_2)

{
  int *piVar1;
  LARGE_INTEGER LVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  DWORD DVar7;
  DWORD dwTlsIndex;
  DWORD DVar8;
  LPVOID lpTlsValue;
  LARGE_INTEGER LVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_108 [38];
  byte local_e2;
  byte local_e1;
  longlong local_e0;
  longlong *local_d8;
  int local_cc;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dwTlsIndex = DAT_14c7585d0;
  local_e2 = param_2;
  local_d8 = param_1;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar8 = 0xffffffff;
    LOCK();
    bVar15 = DAT_14c7585d0 != 0xffffffff;
    DVar7 = dwTlsIndex;
    if (bVar15) {
      DVar8 = DAT_14c7585d0;
      DVar7 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar7;
    UNLOCK();
    if (bVar15) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar8;
    }
  }
  plVar6 = local_d8;
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_b0);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_b0 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a8 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a0 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_98 = '\0';
  local_90 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_b0;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_c8 = -0x8000000000000000;
  LVar9.QuadPart = *plVar6;
  if (local_e2 == 0) {
    LVar2.QuadPart = *plVar6;
    uVar12 = (ulonglong)*(uint *)(LVar2.QuadPart + 0x34);
    LVar9.QuadPart = LVar2.QuadPart;
    if (*(int *)(LVar2.QuadPart + 0x20) + 2 <= (int)*(uint *)(LVar2.QuadPart + 0x34)) {
      LOCK();
      piVar1 = (int *)(LVar2.QuadPart + 0x28);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      LVar9.QuadPart = *plVar6;
      if ((iVar10 != -1) && (iVar10 < *(int *)(LVar2.QuadPart + 0x60))) {
        if ((undefined8 *)LVar9.QuadPart != (undefined8 *)0x0) {
          LOCK();
          *(int *)(LVar9.QuadPart + 8) = *(int *)(LVar9.QuadPart + 8) + 1;
          UNLOCK();
        }
        local_88.QuadPart = LVar9.QuadPart;
        FUN_14491b968(&local_88,iVar10,1);
        if ((undefined8 *)local_88.QuadPart != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_88.QuadPart + 8);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)**(undefined8 **)local_88)(local_88.QuadPart,1);
          }
        }
        LVar9.QuadPart = *plVar6;
      }
    }
    if ('\x02' < *(char *)(LVar9.QuadPart + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar18._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar18._8_8_ = 0;
      auVar18 = roundpd(auVar18,auVar18,1);
      local_c8 = (longlong)auVar18._0_8_;
      iVar10 = 0;
      if (0 < DAT_14c7585cc) {
        iVar10 = DAT_14c7585cc;
      }
      auVar16._0_8_ = (double)iVar10 * 10000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar18 = roundpd(auVar16,auVar16,1);
      local_e0 = (longlong)auVar18._0_8_;
      LVar9.QuadPart = *plVar6;
      bVar15 = true;
      goto LAB_1400f72da;
    }
  }
  else {
    uVar12 = (ulonglong)*(uint *)(LVar9.QuadPart + 0x34);
  }
  bVar15 = false;
  local_e0 = 0;
LAB_1400f72da:
  iVar10 = *(int *)(LVar9.QuadPart + 0x2c);
  local_b8 = (ulonglong)*(uint *)(LVar9.QuadPart + 0x30);
  puVar3 = *(undefined8 **)(LVar9.QuadPart + 0x40);
  local_cc = (int)uVar12 + -1;
  local_e1 = local_e2 ^ 1;
  local_c0 = uVar12;
  do {
    LOCK();
    piVar1 = (int *)(LVar9.QuadPart + 0x20);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)local_c0 < iVar10) {
      bVar4 = local_cc <= iVar11;
      if (local_cc <= iVar11) {
        iVar11 = local_cc;
      }
      if ((local_e1 & bVar4) != 0) goto LAB_1400f741e;
    }
    iVar11 = iVar11 * (int)local_b8;
    iVar14 = iVar11 + (int)local_b8;
    iVar5 = iVar10;
    if (iVar14 < iVar10) {
      iVar5 = iVar14;
    }
    iVar13 = iVar11;
    if (iVar11 < iVar5) {
      do {
        local_88.QuadPart._0_4_ = iVar13;
        (*(code *)*puVar3)(puVar3[1],&local_88);
        iVar13 = iVar13 + 1;
      } while (iVar5 != iVar13);
    }
    plVar6 = local_d8;
    if (iVar11 < iVar10) {
      LOCK();
      piVar1 = (int *)(*local_d8 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar12 = CONCAT71((int7)((ulonglong)&local_88 >> 8),1);
        if (local_e2 == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*local_d8 + 0x48) + 0x10))();
        }
        goto LAB_1400f7420;
      }
    }
    if (iVar14 < iVar10 && bVar15) {
      QueryPerformanceCounter(&local_88);
      auVar17._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar18 = roundpd(auVar17,auVar17,1);
      if (local_e0 < (longlong)auVar18._0_8_ - local_c8) {
        *(undefined1 *)((longlong)plVar6 + 0xc) = 1;
LAB_1400f741e:
        uVar12 = 0;
LAB_1400f7420:
        if (local_98 == '\0') {
          local_98 = '\x01';
          *(int *)(local_b0 + 4) = *(int *)(local_b0 + 4) + -1;
          if (local_a0 != local_b0[2]) {
            FUN_14004673c();
          }
          *local_b0 = local_a8;
          local_b0[3] = local_90;
        }
        if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar12 & 0xffffffff;
      }
    }
    else if (iVar10 <= iVar14) goto LAB_1400f741e;
    LVar9.QuadPart = *plVar6;
  } while( true );
}



// FUNCTION 1400f751a FUN_1400f751a body=158 status=ok
// SIG undefined FUN_1400f751a(void)

void FUN_1400f751a(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  uStack_10 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_144b3d940();
  FUN_144b3d920(0);
  FUN_144b3d960();
  if (DAT_14cb9e630 != 0) {
    FUN_144d6e130(1,0);
    FUN_1461e29ae(DAT_14cb9e628,DAT_14cb9e630);
    DAT_14cb9e630 = 0;
    if (DAT_14cb9e634 != 0x100) {
      FUN_147461ee0(&DAT_14cb9e628,0x100);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f75ba FUN_1400f75ba body=450 status=ok
// SIG undefined FUN_1400f75ba(void)

void FUN_1400f75ba(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x20);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1400f76d5:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1400f7712:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x20;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1400f7610;
LAB_1400f7605:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1400f7610:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x7fe) goto code_r0x0001400f763c;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 8 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1400f7692:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1400f7712;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400f76d5;
code_r0x0001400f763c:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1400f7692;
    }
  }
  goto LAB_1400f7605;
}



// FUNCTION 1400f777c FUN_1400f777c body=532 status=ok
// SIG undefined FUN_1400f777c(void)

undefined8 * FUN_1400f777c(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  uVar10 = 0x10000;
  if (0x10000 < param_3) {
    uVar10 = param_3;
  }
  pcVar1 = (char *)(param_1 + 0x10);
  LOCK();
  bVar12 = *(char *)(param_1 + 0x10) == '\0';
  if (bVar12) {
    *(char *)(param_1 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar12) {
    FUN_1447d2058();
  }
  iVar5 = *(int *)(param_1 + 0x30);
  if (0 < (longlong)iVar5) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    uVar8 = (longlong)iVar5 + 1;
    iVar9 = 0;
    do {
      puVar6 = *(undefined8 **)(lVar4 + -0x10 + uVar8 * 8);
      if ((uVar10 <= *(uint *)(puVar6 + 4)) && (*(int *)(puVar6 + 5) == param_4)) {
        if (iVar9 != 0) {
          memmove((void *)(lVar4 + uVar8 * 8 + -0x10),(void *)(lVar4 + uVar8 * 8 + -8),
                  (longlong)iVar9 << 3);
          iVar5 = *(int *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x30) = iVar5 + -1;
        if (puVar6 != (undefined8 *)0x0) {
          LOCK();
          cVar2 = *pcVar1;
          if (cVar2 == '\x01') {
            *pcVar1 = '\0';
          }
          UNLOCK();
          if (cVar2 != '\x01') {
            FUN_14008cdb0(pcVar1);
          }
          goto LAB_1400f78b0;
        }
        break;
      }
      iVar9 = iVar9 + 1;
      uVar8 = uVar8 - 1;
    } while (1 < uVar8);
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *(undefined4 *)(puVar6 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar6 + 0xc) = 0x105;
  *(undefined1 *)((longlong)puVar6 + 0xe) = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = &PTR_FUN_14a388060;
  uVar11 = uVar10 + 0xffff & 0xffff0000;
  uVar10 = 0x10000;
  if (0x10000 < uVar11) {
    uVar10 = uVar11;
  }
  *(uint *)(puVar6 + 4) = uVar10;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
  *(int *)(puVar6 + 5) = param_4;
  puVar6[6] = 0;
  iVar5 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar5 + 1U) {
    FUN_1400f7990((longlong *)(param_1 + 0x18),iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 8) = puVar6;
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\x01') {
    *pcVar1 = '\0';
  }
  UNLOCK();
  if (cVar2 != '\x01') {
    FUN_14008cdb0(pcVar1);
  }
  FUN_14006bf18(puVar6,param_2);
  LOCK();
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(puVar6 + 4);
  UNLOCK();
LAB_1400f78b0:
  uVar3 = *(undefined4 *)(puVar6 + 4);
  uVar7 = puVar6[2];
  cVar2 = *(char *)(param_2 + 0x69);
  if (cVar2 == '\0') {
    FUN_14002049c(param_2,1);
  }
  uVar7 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar7,0,uVar3,1);
  if (cVar2 == '\0') {
    FUN_14002049c(param_2,0);
  }
  puVar6[3] = uVar7;
  puVar6[6] = DAT_14c867d10;
  return puVar6;
}



// FUNCTION 1400f7990 FUN_1400f7990 body=353 status=ok
// SIG undefined FUN_1400f7990(void)

void FUN_1400f7990(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400f7a15;
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
LAB_1400f7a15:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1400f7af2 FUN_1400f7af2 body=47 status=ok
// SIG undefined FUN_1400f7af2(void)

void FUN_1400f7af2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x240,0x10);
  FUN_1400f7b22(uVar1,param_2,param_3);
  return;
}



// FUNCTION 1400f7b22 FUN_1400f7b22 body=351 status=ok
// SIG undefined FUN_1400f7b22(void)

undefined8 * FUN_1400f7b22(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1400f7c82();
  param_1[0xd] = param_3;
  param_1[0xc] = &PTR_LAB_14a349320;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xe),4000);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_3;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((longlong)param_1 + 0x119) = 0xff;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x16] = param_1 + 0xc;
  *(undefined4 *)(param_1 + 0x24) = 1;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *param_1 = &PTR_FUN_14a3502e0;
  param_1[0xc] = &PTR_FUN_14a350320;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 1;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  return param_1;
}



// FUNCTION 1400f7c82 FUN_1400f7c82 body=290 status=ok
// SIG undefined FUN_1400f7c82(void)

undefined8 * FUN_1400f7c82(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x14;
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 3;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *param_1 = &PTR_FUN_14a37f860;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(int *)((longlong)param_1 + 0x3c) = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  param_1[8] = 0x100000000;
  param_1[9] = 0x1000100000001;
  *(undefined4 *)(param_1 + 10) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0xff00;
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x32);
  param_1[4] = *param_2;
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x33);
  *(undefined1 *)((longlong)param_1 + 0x54) = *(undefined1 *)((longlong)param_2 + 0x34);
  *(undefined8 *)((longlong)param_1 + 0x44) = *(undefined8 *)((longlong)param_2 + 0x24);
  *(undefined2 *)((longlong)param_1 + 0x4c) = *(undefined2 *)((longlong)param_2 + 0x2c);
  *(undefined2 *)((longlong)param_1 + 0x4e) = *(undefined2 *)((longlong)param_2 + 0x2e);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x31);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x35);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_1[0xb] = 0xc7efffffe0000000;
  FUN_1446f470e(&local_20,param_2[8],1);
  param_1[2] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f7da6 FUN_1400f7da6 body=160 status=ok
// SIG undefined FUN_1400f7da6(void)

void FUN_1400f7da6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)DAT_14cae4f40 != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(DAT_14cae4f38 + 8 + lVar1) != 0) && (*(longlong *)(DAT_14cae4f38 + lVar1) != 0))
      {
        local_20 = local_2c;
        local_2c[0] = 4;
        local_28 = *(int *)(param_1 + 0x728) + -1;
        local_24 = 0xffffffff;
        local_18 = 1;
        FUN_147b4e6d4(param_1);
        break;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)DAT_14cae4f40 * 0x10 != lVar1);
  }
  FUN_1400f7e48(param_1);
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400f7e48 FUN_1400f7e48 body=137 status=ok
// SIG undefined FUN_1400f7e48(void)

void FUN_1400f7e48(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x674) & 2) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x660);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      lVar1 = *(longlong *)(param_1 + 0x660);
    }
    else if (lVar1 == 0) goto LAB_1400f7e5a;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    FUN_147d5ec1c(lVar1,param_1);
    *(byte *)(param_1 + 0x674) = *(byte *)(param_1 + 0x674) & 0xfd;
  }
LAB_1400f7e5a:
  FUN_1400f7ed2(param_1);
  FUN_1400f807c(param_1);
  return;
}



// FUNCTION 1400f7ed2 FUN_1400f7ed2 body=92 status=ok
// SIG undefined FUN_1400f7ed2(void)

void FUN_1400f7ed2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0x628)) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x620);
      plVar1 = *(longlong **)(lVar2 + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1);
        lVar2 = *(longlong *)(param_1 + 0x620);
      }
      *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x628));
  }
  FUN_1400f7f2e(param_1);
  return;
}



// FUNCTION 1400f7f2e FUN_1400f7f2e body=106 status=ok
// SIG undefined FUN_1400f7f2e(void)

void FUN_1400f7f2e(longlong param_1)

{
  longlong *plVar1;
  
  if (((*(byte *)(param_1 + 0x2d2) & 0x30) != 0) || ((*(byte *)(param_1 + 0x2d3) & 1) != 0)) {
    plVar1 = (longlong *)FUN_140083894();
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  FUN_1400f7f98(param_1);
  FUN_1400fb146(param_1 + 0x5b0,0);
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400fb146(*(longlong *)(param_1 + 0xa8) + 0x2b0,0);
    return;
  }
  return;
}



// FUNCTION 1400f7f98 FUN_1400f7f98 body=107 status=ok
// SIG undefined FUN_1400f7f98(void)

void FUN_1400f7f98(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1400f8004(param_1 + 0x1fd,&local_18);
  if (*(char *)(param_1 + 0x1fd) == '\x01') {
    FUN_1400fca8a(param_1,local_18);
    *(undefined1 *)(param_1 + 0x1fd) = 0;
  }
  FUN_1400f80f0(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f8004 FUN_1400f8004 body=120 status=ok
// SIG undefined FUN_1400f8004(void)

undefined8 * FUN_1400f8004(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1fa4) {
    FUN_144b3d300(&DAT_14cad1fa4);
    if (DAT_14cad1fa4 == -1) {
      FUN_1446ddc76(&DAT_14cad1f9c,"PhysicsVolumeChangedDelegate",1);
      _Init_thread_footer(&DAT_14cad1fa4);
    }
  }
  *param_2 = DAT_14cad1f9c;
  return param_2;
}



// FUNCTION 1400f807c FUN_1400f807c body=116 status=ok
// SIG undefined FUN_1400f807c(void)

void FUN_1400f807c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x6b0)) {
    lVar4 = 0x58;
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x6a8);
      lVar1 = *(longlong *)(lVar2 + -0x18 + lVar4);
      if (lVar1 != 0) {
        FUN_140414380(lVar1,0);
        lVar2 = *(longlong *)(param_1 + 0x6a8);
      }
      FUN_140414380(lVar2 + lVar4,0);
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0xa0;
    } while (lVar3 < *(int *)(param_1 + 0x6b0));
  }
  FUN_1400fb146(param_1 + 0x5b0,0);
  return;
}



// FUNCTION 1400f80f0 FUN_1400f80f0 body=342 status=ok
// SIG undefined FUN_1400f80f0(void)

void FUN_1400f80f0(longlong *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  
  bVar2 = *(byte *)((longlong)param_1 + 0x9f);
  if ((bVar2 & 0x20) != 0) {
    (**(code **)(*param_1 + 0x390))(param_1,0);
    bVar2 = *(byte *)((longlong)param_1 + 0x9f);
  }
  if ((bVar2 & 8) != 0) {
    (**(code **)(*param_1 + 0x398))(param_1);
    bVar2 = *(byte *)((longlong)param_1 + 0x9f);
  }
  *(byte *)((longlong)param_1 + 0x9f) = bVar2 & 0xef;
  FUN_1400f88ca(param_1);
  if ((*(byte *)((longlong)param_1 + 0x9f) & 4) != 0) {
    (**(code **)(*param_1 + 0x430))(param_1,DAT_14c872a72);
  }
  param_1[0x16] = 0;
  if (param_1[0x15] != 0) {
    FUN_1400f829a(param_1[0x15],param_1);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cad01a8);
  if (DAT_14cad0160 != DAT_14cad018c) {
    uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar4 = &DAT_14cad0190;
    if (DAT_14cad0198 != (undefined *)0x0) {
      puVar4 = DAT_14cad0198;
    }
    for (iVar1 = *(int *)(puVar4 + ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) &
                                   (longlong)DAT_14cad01a0 - 1U) * 4); iVar1 != -1;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + DAT_14cad0158 + 0x18)) {
      if (*(longlong **)(DAT_14cad0158 + (longlong)iVar1 * 0x20) == param_1) {
        FUN_1400fbee6(&DAT_14cad0158);
        break;
      }
    }
  }
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) & 0x7f;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14cad01a8);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 1400f8246 FUN_1400f8246 body=83 status=ok
// SIG undefined FUN_1400f8246(void)

void FUN_1400f8246(longlong *param_1,undefined4 param_2)

{
  if ((*(byte *)((longlong)param_1 + 0x2d3) & 8) != 0) {
    *(byte *)((longlong)param_1 + 0x2d3) = *(byte *)((longlong)param_1 + 0x2d3) & 0xf7;
    (**(code **)(*param_1 + 0x958))(param_1);
  }
  if (0 < (int)param_1[0x81]) {
    FUN_1400fc1c8(param_1,1,0);
  }
  FUN_1400f96ca(param_1,param_2);
  return;
}



// FUNCTION 1400f829a FUN_1400f829a body=231 status=ok
// SIG undefined FUN_1400f829a(void)

void FUN_1400f829a(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = FUN_14480d072(param_1 + 0x240,&local_28);
  if (0 < iVar1) {
    FUN_1400f8404(param_1 + 0x230,&local_20,1);
    FUN_1400f8382(param_1,local_20);
    if ((byte)(*(char *)(local_20 + 0xb9) - 1U) < 2) {
      param_1 = param_1 + 0x2a0;
    }
    else {
      if (*(char *)(local_20 + 0xb9) != '\x03') goto LAB_1400f8347;
      param_1 = param_1 + 0x290;
    }
    local_30 = local_20;
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14480d1b0(param_1,&local_30,1);
  }
LAB_1400f8347:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f8382 FUN_1400f8382 body=129 status=ok
// SIG undefined FUN_1400f8382(void)

void FUN_1400f8382(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if ((longlong)*(int *)(param_1 + 0x228) != 0) {
    uVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x220) + uVar1) == param_2) {
        if ((int)(uVar1 >> 3) * -0x33333333 == -1) {
          return;
        }
        FUN_1400fc026(param_1 + 0x220);
        FUN_1400fc128(param_1 + 0x220);
        if (*(char *)(param_1 + 0x178) != '\x03') {
          return;
        }
        FUN_14092d9da(param_2);
        return;
      }
      uVar1 = uVar1 + 0x28;
    } while ((longlong)*(int *)(param_1 + 0x228) * 0x28 != uVar1);
  }
  return;
}



// FUNCTION 1400f8404 FUN_1400f8404 body=179 status=ok
// SIG undefined FUN_1400f8404(void)

undefined8 FUN_1400f8404(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    iVar4 = 1;
    lVar6 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        if (param_3 != '\x01') {
          return 1;
        }
        FUN_1400fc098(param_1);
        return 1;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return 0;
}



// FUNCTION 1400f84b8 FUN_1400f84b8 body=807 status=ok
// SIG undefined FUN_1400f84b8(void)

void FUN_1400f84b8(longlong param_1,undefined2 *param_2,int param_3,char param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined2 *local_b0;
  undefined2 *local_a8;
  undefined2 *local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar2 = *(int *)(param_1 + 0xc);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  iVar5 = iVar2 + 0xffff;
  if (-1 < iVar2) {
    iVar5 = iVar2;
  }
  iVar10 = -1;
  if ((iVar5 >> 0x10 < DAT_14c964390) &&
     (lVar4 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar5 >> 0x10) * 0x10), lVar4 != 0)) {
    lVar6 = (longlong)(iVar2 % 0x10000) * 0x10;
    puVar7 = *(undefined2 **)(lVar4 + lVar6);
    iVar10 = *(int *)(lVar4 + 8 + lVar6);
  }
  else {
    puVar7 = (undefined2 *)0x0;
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  if ((puVar7 != param_2) || (iVar10 != param_3)) {
    if (param_4 == '\x01' && puVar7 != (undefined2 *)0x0) {
      lVar4 = *(longlong *)(puVar7 + 0xc);
      *(undefined8 *)(lVar4 + 0x40 + (longlong)iVar10 * 0x68) = 0;
      pbVar1 = (byte *)(lVar4 + 0x4d + (longlong)iVar10 * 0x68);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    local_58 = param_2;
    local_50 = param_3;
    if (puVar7 == param_2) {
      FUN_146908272(&DAT_14c964380,*(undefined4 *)(param_1 + 0xc));
    }
    else {
      if ((param_2 != (undefined2 *)0x0) && (puVar7 != (undefined2 *)0x0)) {
        uVar3 = *(undefined4 *)(param_1 + 0xc);
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9643a8);
        FUN_1469081b8(&DAT_14c964380,uVar3);
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9643a8);
      }
      FUN_146908272(&DAT_14c964380,*(undefined4 *)(param_1 + 0xc));
      if (((param_4 != '\0') && (param_2 != (undefined2 *)0x0)) && (puVar7 != (undefined2 *)0x0)) {
        if (*(longlong *)(param_2 + 0x50) == 0) {
          FUN_140056680(&local_58,&DAT_149e01fe8);
        }
        else {
          local_68 = *(undefined2 **)(*(longlong *)(param_2 + 0x50) + 0x18);
          FUN_1400021e4(&local_68,&local_58);
        }
        puVar8 = &DAT_149dfb77a;
        if (local_50 != 0) {
          puVar8 = local_58;
        }
        FUN_1400021e4(param_2 + 0x18c,&local_68);
        puVar11 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar11 = local_68;
        }
        if (*(longlong *)(puVar7 + 0x50) == 0) {
          FUN_140056680(&local_78,&DAT_149e01fe8);
        }
        else {
          local_88 = *(undefined2 **)(*(longlong *)(puVar7 + 0x50) + 0x18);
          FUN_1400021e4(&local_88,&local_78);
        }
        puVar9 = &DAT_149dfb77a;
        if (local_70 != 0) {
          puVar9 = local_78;
        }
        FUN_1400021e4(puVar7 + 0x18c,&local_88);
        local_b8 = &DAT_149dfb77a;
        if (local_80 != 0) {
          local_b8 = local_88;
        }
        FUN_144750a86(param_1,&local_98,0,0);
        puVar7 = &DAT_149dfb77a;
        if (local_90 != 0) {
          puVar7 = local_98;
        }
        local_b0 = puVar9;
        local_a8 = puVar11;
        local_a0 = puVar8;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectLinker.cpp",0xa5,
                      L"It is only legal to change linkers in the editor. Trying to change linker on %s from %s (Existing->LinkerRoot=%s) to %s (LinkerLoad->LinkerRoot=%s)"
                      ,puVar7);
        if (local_98 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f87e0 FUN_1400f87e0 body=95 status=ok
// SIG undefined FUN_1400f87e0(void)

void FUN_1400f87e0(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_1400f8840(param_1,param_2,1);
  return;
}



// FUNCTION 1400f8840 FUN_1400f8840 body=138 status=ok
// SIG undefined FUN_1400f8840(void)

void FUN_1400f8840(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1400f88ca FUN_1400f88ca body=391 status=ok
// SIG undefined FUN_1400f88ca(void)

void FUN_1400f88ca(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  FUN_140acf690();
  bVar4 = *(byte *)((longlong)param_1 + 0x9c);
  if ((bVar4 & 2) != 0) {
    (**(code **)(*param_1 + 0x340))(param_1);
    bVar4 = *(byte *)((longlong)param_1 + 0x9c);
  }
  if ((bVar4 & 1) != 0) {
    (**(code **)(*param_1 + 0x308))(param_1);
    iVar6 = *(int *)((longlong)param_1 + 0xd4);
    *(int *)((longlong)param_1 + 0xd4) = iVar6 + 1;
    uVar7 = (ulonglong)(int)param_1[0x19];
    if ((longlong)uVar7 < 1) {
      *(int *)((longlong)param_1 + 0xd4) = iVar6;
    }
    else {
      plVar1 = param_1 + 0x18;
      bVar9 = false;
      do {
        lVar11 = uVar7 * 0x10 + -8;
        uVar12 = uVar7;
        while (((*(int *)(*plVar1 + lVar11) != 0 &&
                (plVar2 = *(longlong **)(*plVar1 + -8 + lVar11), plVar2 != (longlong *)0x0)) &&
               (cVar5 = (**(code **)(*plVar2 + 0x60))(plVar2,param_1), cVar5 != '\0'))) {
          lVar11 = lVar11 + -0x10;
          bVar3 = uVar12 < 2;
          uVar12 = uVar12 - 1;
          if (bVar3) {
            iVar6 = *(int *)((longlong)param_1 + 0xd4) + -1;
            *(int *)((longlong)param_1 + 0xd4) = iVar6;
            if (!bVar9) {
              return;
            }
            goto LAB_1400f89b4;
          }
        }
        uVar7 = uVar12 - 1;
        bVar9 = true;
      } while (1 < uVar12);
      iVar6 = *(int *)((longlong)param_1 + 0xd4) + -1;
      *(int *)((longlong)param_1 + 0xd4) = iVar6;
LAB_1400f89b4:
      if (iVar6 < 1) {
        iVar6 = (int)param_1[0x19];
        iVar8 = iVar6;
        if (0 < iVar6) {
          iVar10 = 0;
          do {
            if (((*(int *)(*plVar1 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar1 + (longlong)iVar10 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar2 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar1,iVar10);
              FUN_14005b248(plVar1);
            }
            else {
              iVar10 = iVar10 + 1;
            }
            iVar8 = (int)param_1[0x19];
          } while (iVar10 < iVar8);
        }
        iVar10 = 2;
        if (2 < iVar8 * 2) {
          iVar10 = iVar8 * 2;
        }
        *(int *)(param_1 + 0x1a) = iVar10;
        if ((iVar10 < iVar6) && (*(int *)((longlong)param_1 + 0xcc) != iVar8)) {
          FUN_14045812c(plVar1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1400f8a51 FUN_1400f8a51 body=2829 status=ok
// SIG undefined FUN_1400f8a51(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1400f8a51(undefined2 ****param_1)

{
  int iVar1;
  undefined2 ***pppuVar2;
  longlong lVar3;
  bool bVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined *puVar13;
  uint uVar14;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  wchar_t *local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  undefined2 *****local_a0;
  code *local_98;
  code *local_90;
  longlong local_88;
  uint local_7c;
  code ****local_78;
  code ****local_70;
  undefined2 ****local_68;
  uint local_60 [2];
  undefined2 ****local_58;
  undefined2 ***local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  pppuVar2 = param_1[3];
  if (pppuVar2 == (undefined2 ***)0x0) goto LAB_1400f9164;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c964670) && (FUN_144b3d300(&DAT_14c964670), DAT_14c964670 == -1)) {
    FUN_145794a58(&DAT_14c964408);
    atexit((_func_5014 *)&LAB_142840318);
    _Init_thread_footer(&DAT_14c964670);
  }
  if ((DAT_14c949800 & 1) == 0) {
LAB_1400f8aef:
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_14c964408;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964408);
    bVar4 = false;
  }
  else {
    bVar4 = true;
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar1 != 2)) {
      if (iVar1 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 == DVar6) goto LAB_1400f92ee;
      }
      goto LAB_1400f8aef;
    }
LAB_1400f92ee:
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  uVar14 = (uint)((ulonglong)pppuVar2 >> 0x10);
  uVar12 = (uint)pppuVar2 & 0xffff;
  uVar14 = ((uint)pppuVar2 << 0x10 | uVar12) + (uVar12 >> 4) + (uVar14 << 0x13 | uVar14 & 0xffff) +
           (int)((ulonglong)pppuVar2 >> 0x20);
  local_7c = uVar14;
  local_60[0] = uVar14;
  plVar7 = (longlong *)FUN_144a8ccde(&DAT_14c964430,uVar14);
  lVar11 = *plVar7;
  lVar3 = plVar7[1];
  local_78 = (code ****)param_1;
  if (lVar11 == 0 && lVar3 != 0) {
    FUN_144aa2282(lVar3,&local_50,&local_78,0);
  }
  else if (lVar11 == 0 || lVar3 == 0) {
    if (lVar11 == 0) {
      *plVar7 = (longlong)param_1;
    }
    else {
      plVar7[1] = (longlong)param_1;
    }
  }
  else {
    puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar8[4] = 0;
    *(undefined4 *)(puVar8 + 5) = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    *(undefined8 *)((longlong)puVar8 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar8 + 0x34) = 0;
    puVar8[8] = 0;
    *(undefined4 *)(puVar8 + 9) = 0;
    local_50 = (undefined2 ***)*plVar7;
    FUN_1402972e2(puVar8,&local_58,&local_50,0);
    local_50 = (undefined2 ***)plVar7[1];
    FUN_1402972e2(puVar8,&local_58,&local_50,0);
    FUN_144aa2282(puVar8,&local_50,&local_78,0);
    *plVar7 = 0;
    plVar7[1] = (longlong)puVar8;
  }
  if (param_1[4] != (undefined2 ***)0x0) {
    local_7c = uVar14 + (int)((ulonglong)param_1[4] >> 6);
    local_78 = (code ****)&local_7c;
    local_70 = (code ****)&local_58;
    local_58 = (undefined2 ****)CONCAT44(local_58._4_4_,*(undefined4 *)((longlong)param_1 + 0xc));
    FUN_144a88aa2(&DAT_14c964480,&local_50,&local_78,0);
    local_50 = param_1[4];
    uVar14 = ((uint)((ulonglong)local_50 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_50 >> 4)) *
             -0x7a143595;
    uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
    if (DAT_14c9644d8 != DAT_14c964504) {
      puVar13 = &DAT_14c964508;
      if (DAT_14c964510 != (undefined *)0x0) {
        puVar13 = DAT_14c964510;
      }
      iVar1 = *(int *)(puVar13 + (ulonglong)(DAT_14c964518 - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4);
      while (iVar1 != -1) {
        lVar11 = DAT_14c9644d0 + (longlong)iVar1 * 0x20;
        if (*(undefined2 ****)(DAT_14c9644d0 + (longlong)iVar1 * 0x20) == local_50) {
          if (lVar11 != 0) goto LAB_1400f8d79;
          break;
        }
        iVar1 = *(int *)(lVar11 + 0x18);
      }
    }
    local_d8 = (wchar_t *)0x0;
    local_78 = (code ****)&local_50;
    FUN_14017aee4(&DAT_14c9644d0,&local_58);
    lVar11 = DAT_14c9644d0 + (longlong)(int)local_58 * 0x20;
LAB_1400f8d79:
    plVar7 = (longlong *)(lVar11 + 8);
    pppuVar2 = (undefined2 ***)*plVar7;
    lVar3 = *(longlong *)(lVar11 + 0x10);
    if (pppuVar2 == (undefined2 ***)0x0 && lVar3 != 0) {
      local_78 = (code ****)param_1;
      FUN_144aa2282(lVar3,&local_50,&local_78,0);
    }
    else if (pppuVar2 == (undefined2 ***)0x0 || lVar3 == 0) {
      if (pppuVar2 == (undefined2 ***)0x0) {
        *plVar7 = (longlong)param_1;
      }
      else {
        *(undefined2 *****)(lVar11 + 0x10) = param_1;
      }
    }
    else {
      local_78 = (code ****)param_1;
      puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
      puVar8[4] = 0;
      *(undefined4 *)(puVar8 + 5) = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined8 *)((longlong)puVar8 + 0x2c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar8 + 0x34) = 0;
      puVar8[8] = 0;
      *(undefined4 *)(puVar8 + 9) = 0;
      local_50 = pppuVar2;
      FUN_1402972e2(puVar8,&local_58,&local_50,0);
      local_50 = *(undefined2 ****)(lVar11 + 0x10);
      FUN_1402972e2(puVar8,&local_58,&local_50,0);
      FUN_144aa2282(puVar8,&local_50,&local_78,0);
      *plVar7 = 0;
      *(undefined8 **)(lVar11 + 0x10) = puVar8;
    }
  }
  local_58 = (undefined2 ****)param_1[2];
  uVar14 = ((uint)((ulonglong)local_58 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_58 >> 4)) *
           -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  if (DAT_14c964528 != DAT_14c964554) {
    puVar13 = &DAT_14c964558;
    if (DAT_14c964560 != (undefined *)0x0) {
      puVar13 = DAT_14c964560;
    }
    iVar1 = *(int *)(puVar13 + (ulonglong)(DAT_14c964568 - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4);
    while (iVar1 != -1) {
      lVar11 = DAT_14c964520 + (longlong)iVar1 * 0x20;
      if (*(undefined2 *****)(DAT_14c964520 + (longlong)iVar1 * 0x20) == local_58) {
        if (lVar11 != 0) goto LAB_1400f8f60;
        break;
      }
      iVar1 = *(int *)(lVar11 + 0x18);
    }
  }
  local_78 = (code ****)&local_58;
  local_d8 = (wchar_t *)0x0;
  FUN_140852980(&DAT_14c964520,&local_50);
  lVar11 = DAT_14c964520 + (longlong)(int)local_50 * 0x20;
LAB_1400f8f60:
  plVar7 = (longlong *)(lVar11 + 8);
  pppuVar2 = (undefined2 ***)*plVar7;
  lVar3 = *(longlong *)(lVar11 + 0x10);
  if (pppuVar2 == (undefined2 ***)0x0 && lVar3 != 0) {
    local_78 = (code ****)param_1;
    FUN_144aa2282(lVar3,&local_50,&local_78,0);
  }
  else if (pppuVar2 == (undefined2 ***)0x0 || lVar3 == 0) {
    if (pppuVar2 == (undefined2 ***)0x0) {
      *plVar7 = (longlong)param_1;
      local_78 = (code ****)param_1;
    }
    else {
      *(undefined2 *****)(lVar11 + 0x10) = param_1;
      local_78 = (code ****)param_1;
    }
  }
  else {
    local_78 = (code ****)param_1;
    puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar8[4] = 0;
    *(undefined4 *)(puVar8 + 5) = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    *(undefined8 *)((longlong)puVar8 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar8 + 0x34) = 0;
    puVar8[8] = 0;
    *(undefined4 *)(puVar8 + 9) = 0;
    local_50 = pppuVar2;
    FUN_1402972e2(puVar8,local_60,&local_50,0);
    local_50 = *(undefined2 ****)(lVar11 + 0x10);
    FUN_1402972e2(puVar8,local_60,&local_50,0);
    FUN_144aa2282(puVar8,&local_50,&local_78,0);
    *plVar7 = 0;
    *(undefined8 **)(lVar11 + 0x10) = puVar8;
  }
  if (DAT_14c949118 == 0) {
    local_68 = (undefined2 ****)FUN_140631fbe;
    if (DAT_14c963f04 == '\0') {
      uVar9 = FUN_140011aa6();
      lVar11 = FUN_140011c0e(uVar9,0x250,8);
    }
    else {
      lVar11 = FUN_14001cc68(0x250,8);
    }
    DAT_14c949118 = lVar11;
    FUN_1446f470e(local_60,L"Class",1);
    local_a0 = &local_68;
    local_a8 = &LAB_146891e90;
    local_b0 = (code *)&LAB_146273097;
    local_c0 = L"Engine";
    local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
    local_c8 = 0x20;
    local_d0 = 0x10000000;
    local_d8._0_4_ = 8;
    FUN_14574b4b2(lVar11);
    DAT_14c949118 = lVar11;
    if (DAT_14c951858 == 0) {
      local_a0 = (undefined2 *****)&local_78;
      local_78 = (code ****)FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1468c5283;
      local_b0 = FUN_142809da0;
      local_b8 = L"Engine";
      local_c0 = (wchar_t *)0x400000000;
      local_c8 = CONCAT44(local_c8._4_4_,0x10000000);
      local_d0 = 8;
      local_d8._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar3 = DAT_14c951858;
    lVar11 = DAT_14c949118;
    if (DAT_14c948f88 == 0) {
      local_58 = (undefined2 ****)&DAT_1427db2a2;
      if (DAT_14c963f04 == '\0') {
        uVar9 = FUN_140011aa6();
        lVar10 = FUN_140011c0e(uVar9,0x250,8);
      }
      else {
        lVar10 = FUN_14001cc68(0x250,8);
      }
      DAT_14c948f88 = lVar10;
      local_88 = lVar10;
      FUN_1446f470e(&local_50,L"Struct",1);
      local_a0 = &local_58;
      local_a8 = &LAB_146891313;
      local_b0 = FUN_146272f63;
      local_c0 = L"Engine";
      local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
      local_c8 = 8;
      local_d0 = 0x10000020;
      local_d8._0_4_ = 8;
      FUN_14574b4b2(lVar10);
      DAT_14c948f88 = lVar10;
      if (DAT_14c927740 == 0) {
        local_a0 = (undefined2 *****)&local_78;
        local_78 = (code ****)FUN_1449e2820;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_14081d0ea;
        local_a8 = &LAB_146856450;
        local_b0 = FUN_1427b121c;
        local_b8 = L"Engine";
        local_c0 = (wchar_t *)0x0;
        local_c8 = CONCAT44(local_c8._4_4_,0x10000021);
        local_d0 = 8;
        local_d8._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        local_88 = DAT_14c948f88;
      }
      lVar10 = DAT_14c927740;
      uVar9 = FUN_1400163b0();
      local_d8 = L"Struct";
      FUN_14574b446(uVar9,local_88,lVar10,L"/Script/CoreUObject");
    }
    local_d8 = L"Class";
    FUN_14574b446(DAT_14c948f88,lVar11,lVar3,L"/Script/CoreUObject");
  }
  if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(param_1[2] + 7)) &&
     (param_1[2][6][*(int *)(DAT_14c949118 + 0x38)] == (undefined2 *)(DAT_14c949118 + 0x30))) {
    local_50 = param_1[8];
    local_78 = (code ****)param_1;
    if (local_50 != (undefined2 ***)0x0) {
      uVar14 = ((uint)((ulonglong)local_50 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_50 >> 4)) *
               -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      uVar9 = FUN_140a11762(&DAT_14c964570,uVar14 >> 0x10 ^ uVar14,&local_50);
      local_60[0] = local_60[0] & 0xffffff00;
      FUN_1407a79c0(uVar9,&local_58,&local_78);
    }
    LOCK();
    DAT_14c9645c0 = DAT_14c9645c0 + 1;
    UNLOCK();
    uVar14 = *(uint *)((longlong)local_78 + 0xc);
    if ((int)uVar14 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    if ((*(uint *)(lVar11 + 8) >> 0x19 & 1) != 0) {
      LOCK();
      DAT_14c9645c8 = DAT_14c9645c8 + 1;
      UNLOCK();
    }
  }
  if (!bVar4) {
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_1400f9164:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f9560 FUN_1400f9560 body=362 status=ok
// SIG undefined FUN_1400f9560(void)

void FUN_1400f9560(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && ((uVar3 == 0 || (0x40 < (int)(iVar6 - uVar3))))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400f9625;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_1400f9625:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
    }
  }
  return;
}



// FUNCTION 1400f96ca FUN_1400f96ca body=1228 status=ok
// SIG undefined FUN_1400f96ca(void)

void FUN_1400f96ca(longlong *param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) & 0xfb;
  if (*(int *)((longlong)param_1 + 0x224) < 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    FUN_147a143a8(param_1 + 0x43);
  }
  else {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if ((DAT_14c872a72 != '\0') || (*(char *)((longlong)param_1 + 0x1f9) < '\0')) goto LAB_1400f9b67;
  lVar3 = param_1[0x15];
  plVar2 = param_1 + 0x27;
  uVar7 = *(uint *)(param_1 + 0x28);
  uVar10 = (ulonglong)uVar7;
  if (param_2 == '\0') {
    if (0 < (int)uVar7) {
      do {
        plVar4 = *(longlong **)(*plVar2 + -8 + uVar10 * 8);
        if (plVar4 == (longlong *)0x0) {
LAB_1400f9a1a:
          uVar7 = (int)uVar10 - 1;
          *(uint *)(param_1 + 0x28) = uVar7;
        }
        else {
          if (((longlong *)plVar4[0x24] == (longlong *)0x0) || ((longlong *)plVar4[0x24] != param_1)
             ) {
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(plVar4);
              uVar10 = (ulonglong)*(uint *)(param_1 + 0x28);
            }
            goto LAB_1400f9a1a;
          }
          uVar7 = *(uint *)((longlong)plVar4 + 0xc);
          if ((int)uVar7 < DAT_14c9647dc) {
            lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
          }
          else {
            lVar12 = 0;
          }
          plVar9 = param_1;
          if ((*(uint *)(lVar12 + 8) & 0x10200000) == 0) {
            do {
              plVar9 = (longlong *)plVar9[0x24];
              if (plVar9 == (longlong *)0x0) goto LAB_1400f9a38;
              uVar7 = *(uint *)((longlong)plVar9 + 0xc);
              if ((int)uVar7 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
            } while ((*(uint *)(lVar12 + 8) & 0x10200000) != 0);
            cVar6 = (**(code **)(*plVar4 + 0x490))(plVar4,plVar9,&DAT_14cadad90);
            if (cVar6 == '\0') goto LAB_1400f9a38;
          }
          else {
LAB_1400f9a38:
            (**(code **)(*plVar4 + 0x4a0))(plVar4,&DAT_14cadad9c);
          }
          uVar7 = *(uint *)(param_1 + 0x28);
        }
        uVar10 = (ulonglong)uVar7;
      } while (0 < (int)uVar7);
      goto LAB_1400f9b3b;
    }
    if (param_1[0x24] == 0) goto LAB_1400f9b67;
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar10);
    }
    if (uVar7 != 0) {
      FUN_1417c1774(&local_58);
      iVar8 = (int)param_1[0x28];
      local_60 = 0;
      lVar12 = 0;
      do {
        lVar11 = *plVar2;
        iVar1 = iVar8 + -1;
        plVar4 = *(longlong **)(lVar11 + (longlong)iVar1 * 8);
        if ((plVar4 == (longlong *)0x0) || (plVar4[0x15] == lVar3)) {
          if ((DAT_14c950c29 == '\x01') && (*(longlong *)(lVar11 + -8 + (longlong)iVar8 * 8) != 0))
          {
            FUN_1456cec3c();
            iVar1 = (int)param_1[0x28] + -1;
          }
          iVar8 = iVar1;
          *(int *)(param_1 + 0x28) = iVar8;
          if (plVar4 != (longlong *)0x0) {
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(plVar4);
            }
            uVar10 = uStack_50;
            lVar11 = (longlong)(int)uStack_50;
            uVar7 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
            if (uStack_50._4_4_ < uVar7) {
              FUN_140f41d82(&local_58,uVar10 & 0xffffffff);
            }
            *(longlong **)(local_58 + lVar11 * 8) = plVar4;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(plVar4);
            }
LAB_1400f983e:
            iVar8 = (int)param_1[0x28];
          }
        }
        else {
          plVar9 = (longlong *)plVar4[0x24];
          if (plVar9 == (longlong *)0x0) {
            if ((param_1 != (longlong *)0x0) &&
               (plVar9 = (longlong *)(ulonglong)*(uint *)(param_1 + 1),
               (*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) {
              plVar9 = (longlong *)(ulonglong)*(uint *)(plVar4 + 1);
            }
          }
          else if (plVar9 == param_1) {
            uVar7 = *(uint *)((longlong)plVar4 + 0xc);
            if ((int)uVar7 < DAT_14c9647dc) {
              lVar11 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
            }
            else {
              lVar11 = 0;
            }
            if ((*(uint *)(lVar11 + 8) & 0x10200000) == 0) {
              if ((local_60 & 1) == 0) {
                local_60 = CONCAT71((uint7)(uint3)(*(uint *)(lVar11 + 8) >> 8),1);
                for (lVar12 = param_1[0x24]; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x120)) {
                  uVar7 = *(uint *)(lVar12 + 0xc);
                  if ((int)uVar7 < DAT_14c9647dc) {
                    lVar11 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
                  }
                  else {
                    lVar11 = 0;
                  }
                  if (((*(uint *)(lVar11 + 8) & 0x10200000) == 0) &&
                     (*(longlong *)(lVar12 + 0xa8) != lVar3)) goto LAB_1400f98aa;
                }
              }
              else {
                if (lVar12 != 0) {
LAB_1400f98aa:
                  plVar9 = plVar4;
                  cVar6 = (**(code **)(*plVar4 + 0x490))(plVar4,lVar12,&DAT_14cadad90,0);
                  local_60 = CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
                  if (cVar6 != '\0') goto LAB_1400f983e;
                  goto LAB_1400f9984;
                }
                local_60 = CONCAT71((uint7)(uint3)((uint)DAT_14c9647dc >> 8),1);
              }
              lVar12 = 0;
            }
LAB_1400f9984:
            (**(code **)(*plVar4 + 0x4a0))(plVar4,&DAT_14cadad9c);
            goto LAB_1400f983e;
          }
          if ((DAT_14c950c29 == '\x01') &&
             (lVar5 = *(longlong *)(lVar11 + -8 + (longlong)iVar8 * 8), lVar5 != 0)) {
            FUN_1456cec3c(lVar5,lVar11,plVar9);
            iVar1 = (int)param_1[0x28] + -1;
          }
          iVar8 = iVar1;
          *(int *)(param_1 + 0x28) = iVar8;
        }
      } while (0 < iVar8);
    }
    if (plVar2 == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x27] != 0) {
        FUN_1400020a8();
      }
      param_1[0x27] = local_58;
      local_58 = 0;
      *(int *)(param_1 + 0x28) = (int)uStack_50;
      *(uint *)((longlong)param_1 + 0x144) = uStack_50._4_4_;
    }
LAB_1400f9b3b:
    if ((param_1[0x24] == 0) ||
       ((param_2 != '\0' && (*(longlong *)(param_1[0x24] + 0xa8) == lVar3)))) goto LAB_1400f9b67;
  }
  (**(code **)(*param_1 + 0x4a0))(param_1,&DAT_14cadad9c);
LAB_1400f9b67:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400f9b98 FUN_1400f9b98 body=5549 status=ok
// SIG undefined FUN_1400f9b98(void)

void FUN_1400f9b98(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  LPCRITICAL_SECTION p_Var11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  longlong lVar22;
  uint uVar23;
  undefined8 unaff_R12;
  ulonglong uVar24;
  uint uVar25;
  longlong *plVar26;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  wchar_t *local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  LPCRITICAL_SECTION local_88;
  uint *local_80;
  int local_78;
  int local_74;
  code *local_70;
  undefined1 local_68 [8];
  code *local_60;
  ulonglong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar7 = param_1[3];
  if (lVar7 == 0) goto LAB_1400fac6d;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c964670) && (FUN_144b3d300(&DAT_14c964670), DAT_14c964670 == -1)) {
    FUN_145794a58(&DAT_14c964408);
    atexit((_func_5014 *)&LAB_142840318);
    _Init_thread_footer(&DAT_14c964670);
  }
  if ((DAT_14c949800 & 1) == 0) {
LAB_1400f9c36:
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_14c964408;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964408);
    uVar17 = 0;
  }
  else {
    uVar17 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar13 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         ), iVar13 != 2)) {
      if (iVar13 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        if (DVar3 == DVar4) goto LAB_1400fae5d;
      }
      goto LAB_1400f9c36;
    }
LAB_1400fae5d:
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  uVar25 = (uint)((ulonglong)lVar7 >> 0x10);
  uVar12 = (uint)lVar7 & 0xffff;
  uVar25 = ((uint)lVar7 << 0x10 | uVar12) + (uVar12 >> 4) + (uVar25 << 0x13 | uVar25 & 0xffff) +
           (int)((ulonglong)lVar7 >> 0x20);
  if (DAT_14c964438 != DAT_14c964464) {
    puVar5 = DAT_14c964470;
    if (DAT_14c964470 == (undefined *)0x0) {
      puVar5 = &DAT_14c964468;
    }
    iVar13 = *(int *)(puVar5 + (ulonglong)(DAT_14c964478 - 1U & uVar25) * 4);
    while (iVar13 != -1) {
      lVar7 = DAT_14c964430 + (longlong)iVar13 * 0x20;
      if (*(uint *)(DAT_14c964430 + (longlong)iVar13 * 0x20) == uVar25) {
        plVar9 = (longlong *)(lVar7 + 8);
        if (plVar9 != (longlong *)0x0 && lVar7 != 0) {
          plVar26 = *(longlong **)(lVar7 + 0x10);
          if ((plVar26 == (longlong *)0x0) || (*plVar9 != 0)) {
            if (plVar26 == param_1) {
              *(undefined8 *)(lVar7 + 0x10) = 0;
              plVar26 = *(longlong **)(lVar7 + 8);
            }
            else {
              plVar9 = (longlong *)*plVar9;
              iVar13 = 0;
              if (plVar9 != param_1) goto LAB_1400f9ef2;
              *(longlong **)(lVar7 + 8) = plVar26;
              *(undefined8 *)(lVar7 + 0x10) = 0;
            }
            iVar18 = 0;
            iVar13 = 1;
            plVar9 = plVar26;
            goto LAB_1400f9f0b;
          }
          iVar13 = FUN_144b00eaa(plVar26);
          if (2 < (int)plVar26[1] - *(int *)((longlong)plVar26 + 0x34)) goto LAB_1400f9eea;
          puVar8 = (uint *)(plVar26 + 2);
          iVar18 = (int)plVar26[5];
          uVar12 = 1;
          if (iVar18 == 0) {
            iVar16 = 0;
            iVar18 = 0;
            iVar19 = 0;
            goto LAB_1400f9e31;
          }
          uVar17 = uVar17 & 0xffffffff;
          puVar21 = (uint *)plVar26[4];
          if ((uint *)plVar26[4] == (uint *)0x0) {
            puVar21 = puVar8;
          }
          uVar23 = *puVar21;
          if (uVar23 != 0) {
            iVar20 = 0;
            iVar16 = 0;
            goto LAB_1400f9dde;
          }
          iVar16 = iVar18 + 0x1e;
          if (-1 < iVar18 + -1) {
            iVar16 = iVar18 + -1;
          }
          uVar24 = 0;
          uVar6 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar6 = uVar24;
          }
          iVar16 = (int)uVar6 + 1;
          iVar20 = 0;
          goto LAB_1400f9dbc;
        }
        break;
      }
      iVar13 = *(int *)(lVar7 + 0x18);
    }
  }
LAB_1400f9f1f:
  FUN_14283fad7(param_1);
  goto LAB_1400f9f27;
code_r0x0001400fa599:
  iVar13 = *(int *)(lVar7 + 0x18);
  if (iVar13 == -1) goto LAB_1400fa5f9;
  goto LAB_1400fa588;
code_r0x0001400fa96e:
  iVar13 = *(int *)(lVar7 + 0x18);
  if (iVar13 == -1) goto LAB_1400fa9ce;
  goto LAB_1400fa95d;
code_r0x0001400faabd:
  iVar13 = *(int *)(lVar22 + 8);
  if (iVar13 == -1) goto LAB_1400faac6;
  goto LAB_1400faaac;
code_r0x0001400faba8:
  iVar13 = *(int *)(lVar7 + 0x58);
  if (iVar13 == -1) goto LAB_1400fac1f;
  goto LAB_1400fab93;
  while( true ) {
    iVar20 = iVar20 + 0x20;
    uVar23 = puVar21[uVar24 + 1];
    uVar24 = uVar24 + 1;
    if (uVar23 != 0) break;
LAB_1400f9dbc:
    local_88 = lpCriticalSection;
    local_80 = puVar8;
    local_74 = iVar16;
    iVar19 = (int)uVar6 * 0x20 + 0x20;
    if (uVar6 == uVar24) goto LAB_1400f9e31;
  }
  iVar16 = (int)uVar24;
LAB_1400f9dde:
  uVar12 = -uVar23 & uVar23;
  uVar6 = (ulonglong)uVar12 * 2 + 1;
  lVar22 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar22 == 0; lVar22 = lVar22 + -1) {
    }
  }
  iVar15 = (iVar20 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
  local_88 = lpCriticalSection;
  iVar19 = iVar20;
  if (iVar15 < iVar18) {
    iVar18 = iVar15;
  }
LAB_1400f9e31:
  *plVar9 = *(longlong *)(*plVar26 + (longlong)iVar18 * 0x10);
  if ((uint *)plVar26[4] != (uint *)0x0) {
    puVar8 = (uint *)plVar26[4];
  }
  iVar18 = (int)plVar26[5];
  lVar22 = (longlong)iVar16;
  uVar12 = ~uVar12 & puVar8[lVar22];
  if (uVar12 == 0) {
    iVar20 = iVar18 + 0x1e;
    if (-1 < iVar18 + -1) {
      iVar20 = iVar18 + -1;
    }
    iVar15 = iVar20 >> 5;
    if (iVar20 >> 5 < iVar16) {
      iVar15 = iVar16;
    }
    do {
      if (iVar15 == lVar22) goto LAB_1400f9eab;
      iVar19 = iVar19 + 0x20;
      uVar12 = puVar8[lVar22 + 1];
      lVar22 = lVar22 + 1;
    } while (uVar12 == 0);
  }
  uVar6 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
  lVar22 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> lVar22 == 0; lVar22 = lVar22 + -1) {
    }
  }
  iVar16 = (iVar19 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
  if (iVar16 < iVar18) {
    iVar18 = iVar16;
  }
LAB_1400f9eab:
  *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(*plVar26 + (longlong)iVar18 * 0x10);
  *(undefined4 *)(plVar26 + 9) = 0;
  local_78 = iVar13;
  if (plVar26[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1400dcd30(plVar26);
  FUN_1400020a8(plVar26);
  iVar13 = local_78;
LAB_1400f9eea:
  plVar9 = *(longlong **)(lVar7 + 8);
  plVar26 = *(longlong **)(lVar7 + 0x10);
LAB_1400f9ef2:
  if (plVar26 == (longlong *)0x0) {
    iVar18 = 0;
LAB_1400f9f0b:
    iVar18 = (iVar18 + 1) - (uint)(plVar9 == (longlong *)0x0);
  }
  else {
    iVar18 = 1;
    if (plVar9 != (longlong *)0x0) goto LAB_1400f9f0b;
    iVar18 = (int)plVar26[1] - *(int *)((longlong)plVar26 + 0x34);
  }
  if ((iVar18 == 0) && (DAT_14c964438 != DAT_14c964464)) {
    puVar5 = DAT_14c964470;
    if (DAT_14c964470 == (undefined *)0x0) {
      puVar5 = &DAT_14c964468;
    }
    p_Var11 = (LPCRITICAL_SECTION)
              (puVar5 + ((longlong)(int)uVar25 & (longlong)DAT_14c964478 - 1U) * 4);
    do {
      iVar18 = *(int *)&p_Var11->DebugInfo;
      if ((longlong)iVar18 == -1) break;
      lVar22 = (longlong)iVar18 * 0x20;
      lVar7 = DAT_14c964430 + lVar22;
      uVar12 = *(uint *)(DAT_14c964430 + lVar22);
      if (uVar12 == uVar25) {
        local_80 = (uint *)CONCAT44(local_80._4_4_,uVar12);
        puVar5 = DAT_14c964470;
        if (DAT_14c964470 == (undefined *)0x0) {
          puVar5 = &DAT_14c964468;
        }
        iVar16 = *(int *)(puVar5 + (longlong)*(int *)(lVar7 + 0x1c) * 4);
        if (iVar16 == iVar18) {
          piVar14 = (int *)(puVar5 + (longlong)*(int *)(lVar7 + 0x1c) * 4);
        }
        else {
          do {
            piVar14 = (int *)(DAT_14c964430 + (longlong)iVar16 * 0x20 + 0x18);
            iVar16 = *piVar14;
          } while (iVar16 != iVar18);
        }
        *piVar14 = *(int *)(lVar7 + 0x18);
        lVar7 = *(longlong *)(DAT_14c964430 + 0x10 + lVar22);
        local_88 = p_Var11;
        if ((lVar7 != 0) && (*(longlong *)(DAT_14c964430 + lVar22 + 8) == 0)) {
          *(undefined4 *)(lVar7 + 0x48) = 0;
          local_78 = iVar13;
          if (*(longlong *)(lVar7 + 0x40) != 0) {
            FUN_1400020a8();
          }
          FUN_1400dcd30(lVar7);
          FUN_1400020a8(lVar7);
          iVar13 = local_78;
        }
        lVar7 = DAT_14c964430;
        if (DAT_14c964464 != 0) {
          *(int *)(DAT_14c964430 + (longlong)DAT_14c964460 * 0x20) = iVar18;
        }
        *(undefined4 *)(lVar7 + lVar22) = 0xffffffff;
        iVar16 = -1;
        if (0 < DAT_14c964464) {
          iVar16 = DAT_14c964460;
        }
        *(int *)(lVar7 + 4 + lVar22) = iVar16;
        DAT_14c964464 = DAT_14c964464 + 1;
        puVar5 = DAT_14c964450;
        if (DAT_14c964450 == (undefined *)0x0) {
          puVar5 = &DAT_14c964440;
        }
        iVar16 = iVar18 + 0x1f;
        if (-1 < iVar18) {
          iVar16 = iVar18;
        }
        bVar1 = (byte)iVar18 & 0x1f;
        DAT_14c964460 = iVar18;
        *(uint *)(puVar5 + (longlong)(iVar16 >> 5) * 4) =
             *(uint *)(puVar5 + (longlong)(iVar16 >> 5) * 4) &
             (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
        p_Var11 = local_88;
        uVar12 = (uint)local_80;
      }
      else {
        p_Var11 = (LPCRITICAL_SECTION)(lVar7 + 0x18);
      }
    } while (uVar12 != uVar25);
  }
  if (iVar13 != 1) goto LAB_1400f9f1f;
LAB_1400f9f27:
  if (param_1[4] != 0) {
    if (DAT_14c9644c8 == 0) {
LAB_1400fae3b:
      FUN_14283fad7(param_1);
    }
    else {
      uVar25 = uVar25 + (int)((ulonglong)param_1[4] >> 6);
      puVar5 = &DAT_14c9644b8;
      if (DAT_14c9644c0 != (undefined *)0x0) {
        puVar5 = DAT_14c9644c0;
      }
      iVar13 = *(int *)(puVar5 + (longlong)(int)(DAT_14c9644c8 - 1U & uVar25) * 4);
      do {
        iVar18 = iVar13;
        if (iVar18 == -1) goto LAB_1400fae3b;
        lVar7 = (longlong)iVar18;
        lVar22 = lVar7 * 0x10;
        iVar13 = *(int *)(DAT_14c964480 + 8 + lVar22);
      } while (*(uint *)(DAT_14c964480 + lVar22) != uVar25);
      while (*(int *)(DAT_14c964480 + 4 + lVar22) != *(int *)((longlong)param_1 + 0xc)) {
        do {
          iVar18 = iVar13;
          if (iVar18 == -1) goto LAB_1400fae3b;
          lVar7 = (longlong)iVar18;
          lVar22 = lVar7 * 0x10;
          iVar13 = *(int *)(DAT_14c964480 + 8 + lVar22);
        } while (*(uint *)(DAT_14c964480 + lVar22) != uVar25);
      }
      lVar7 = lVar7 * 0x10;
      lVar22 = (longlong)*(int *)(DAT_14c964480 + 0xc + lVar7);
      iVar13 = *(int *)(puVar5 + lVar22 * 4);
      if (iVar13 == iVar18) {
        piVar14 = (int *)(puVar5 + lVar22 * 4);
      }
      else {
        do {
          piVar14 = (int *)((longlong)iVar13 * 0x10 + DAT_14c964480 + 8);
          iVar13 = *piVar14;
        } while (iVar13 != iVar18);
      }
      *piVar14 = *(int *)(DAT_14c964480 + lVar7 + 8);
      lVar22 = DAT_14c964480;
      if (DAT_14c9644b4 != 0) {
        *(int *)(DAT_14c964480 + (longlong)DAT_14c9644b0 * 0x10) = iVar18;
      }
      *(undefined4 *)(lVar22 + lVar7) = 0xffffffff;
      iVar13 = -1;
      if (0 < DAT_14c9644b4) {
        iVar13 = DAT_14c9644b0;
      }
      *(int *)(lVar22 + 4 + lVar7) = iVar13;
      DAT_14c9644b4 = DAT_14c9644b4 + 1;
      puVar5 = &DAT_14c964490;
      if (DAT_14c9644a0 != (undefined *)0x0) {
        puVar5 = DAT_14c9644a0;
      }
      iVar13 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar13 = iVar18;
      }
      bVar1 = (byte)iVar18 & 0x1f;
      DAT_14c9644b0 = iVar18;
      *(uint *)(puVar5 + (longlong)(iVar13 >> 5) * 4) =
           *(uint *)(puVar5 + (longlong)(iVar13 >> 5) * 4) &
           (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    }
    local_58 = param_1[4];
    uVar25 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
    uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
    if (DAT_14c9644d8 != DAT_14c964504) {
      puVar5 = &DAT_14c964508;
      if (DAT_14c964510 != (undefined *)0x0) {
        puVar5 = DAT_14c964510;
      }
      iVar13 = *(int *)(puVar5 + (ulonglong)(DAT_14c964518 - 1U & (uVar25 >> 0x10 ^ uVar25)) * 4);
      while (iVar13 != -1) {
        lVar7 = DAT_14c9644d0 + (longlong)iVar13 * 0x20;
        if (*(ulonglong *)(DAT_14c9644d0 + (longlong)iVar13 * 0x20) == local_58) {
          if (lVar7 != 0) goto LAB_1400fa306;
          break;
        }
        iVar13 = *(int *)(lVar7 + 0x18);
      }
    }
    local_50 = (code *)&local_58;
    local_d8 = (wchar_t *)0x0;
    FUN_14017aee4(&DAT_14c9644d0,&local_60);
    lVar7 = DAT_14c9644d0 + (longlong)(int)local_60 * 0x20;
LAB_1400fa306:
    plVar26 = (longlong *)(lVar7 + 8);
    plVar9 = *(longlong **)(lVar7 + 0x10);
    if ((longlong *)*plVar26 == (longlong *)0x0 && plVar9 != (longlong *)0x0) {
      iVar13 = FUN_144b00eaa(plVar9);
      if ((int)plVar9[1] - *(int *)((longlong)plVar9 + 0x34) < 3) {
        iVar18 = (int)plVar9[5];
        uVar25 = 1;
        if (iVar18 == 0) {
          iVar19 = 0;
          iVar18 = 0;
          uVar25 = 1;
          iVar16 = 0;
        }
        else {
          puVar8 = (uint *)plVar9[4];
          if ((uint *)plVar9[4] == (uint *)0x0) {
            puVar8 = (uint *)(plVar9 + 2);
          }
          uVar12 = *puVar8;
          if (uVar12 == 0) {
            local_80 = (uint *)CONCAT44(local_80._4_4_,(int)uVar17);
            iVar16 = iVar18 + 0x1e;
            if (-1 < iVar18 + -1) {
              iVar16 = iVar18 + -1;
            }
            uVar24 = 0;
            uVar6 = (ulonglong)(uint)(iVar16 >> 5);
            if (iVar16 >> 5 < 1) {
              uVar6 = uVar24;
            }
            iVar19 = (int)uVar6 + 1;
            iVar16 = 0;
            do {
              if (uVar6 == uVar24) {
                uVar17 = uVar17 & 0xffffffff;
                local_88 = lpCriticalSection;
                iVar16 = (int)uVar6 * 0x20 + 0x20;
                goto LAB_1400fa41a;
              }
              iVar16 = iVar16 + 0x20;
              uVar12 = puVar8[uVar24 + 1];
              uVar24 = uVar24 + 1;
            } while (uVar12 == 0);
            iVar19 = (int)uVar24;
            uVar17 = uVar17 & 0xffffffff;
          }
          else {
            iVar19 = 0;
            iVar16 = 0;
          }
          uVar25 = -uVar12 & uVar12;
          uVar6 = (ulonglong)uVar25 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar20 = (iVar16 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          local_88 = lpCriticalSection;
          if (iVar20 < iVar18) {
            iVar18 = iVar20;
          }
        }
LAB_1400fa41a:
        *plVar26 = *(longlong *)(*plVar9 + (longlong)iVar18 * 0x10);
        puVar8 = (uint *)(plVar9 + 2);
        if ((uint *)plVar9[4] != (uint *)0x0) {
          puVar8 = (uint *)plVar9[4];
        }
        iVar18 = (int)plVar9[5];
        lVar22 = (longlong)iVar19;
        uVar25 = ~uVar25 & puVar8[lVar22];
        if (uVar25 == 0) {
          iVar20 = iVar18 + 0x1e;
          if (-1 < iVar18 + -1) {
            iVar20 = iVar18 + -1;
          }
          iVar15 = iVar20 >> 5;
          if (iVar20 >> 5 < iVar19) {
            iVar15 = iVar19;
          }
          do {
            if (iVar15 == lVar22) goto LAB_1400fa496;
            iVar16 = iVar16 + 0x20;
            uVar25 = puVar8[lVar22 + 1];
            lVar22 = lVar22 + 1;
          } while (uVar25 == 0);
        }
        uVar6 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
        lVar22 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iVar16 = (iVar16 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        if (iVar16 < iVar18) {
          iVar18 = iVar16;
        }
LAB_1400fa496:
        *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(*plVar9 + (longlong)iVar18 * 0x10);
        *(undefined4 *)(plVar9 + 9) = 0;
        if (plVar9[8] != 0) {
          FUN_1400020a8();
        }
        FUN_1400dcd30(plVar9);
        FUN_1400020a8(plVar9);
      }
      if (iVar13 != 1) {
LAB_1400fa4d2:
        FUN_14283fad7(param_1);
      }
    }
    else {
      if (plVar9 != param_1) {
        if ((longlong *)*plVar26 != param_1) goto LAB_1400fa4d2;
        *plVar26 = (longlong)plVar9;
      }
      *(undefined8 *)(lVar7 + 0x10) = 0;
    }
    lVar7 = *(longlong *)(lVar7 + 0x10);
    if (*plVar26 == 0 && lVar7 != 0) {
      iVar13 = *(int *)(lVar7 + 8) - *(int *)(lVar7 + 0x34);
    }
    else {
      iVar13 = ((*plVar26 != 0) + 1) - (uint)(lVar7 == 0);
    }
    if ((iVar13 == 0) && (DAT_14c9644d8 != DAT_14c964504)) {
      uVar6 = param_1[4];
      uVar25 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
      uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
      puVar5 = &DAT_14c964508;
      if (DAT_14c964510 != (undefined *)0x0) {
        puVar5 = DAT_14c964510;
      }
      iVar13 = *(int *)(puVar5 + ((longlong)(int)(uVar25 >> 0x10 ^ uVar25) &
                                 (longlong)DAT_14c964518 - 1U) * 4);
      if (iVar13 != -1) {
LAB_1400fa588:
        lVar22 = (longlong)iVar13 * 0x20;
        lVar7 = DAT_14c9644d0 + lVar22;
        if (*(ulonglong *)(DAT_14c9644d0 + lVar22) != uVar6) goto code_r0x0001400fa599;
        iVar18 = *(int *)(puVar5 + (longlong)*(int *)(lVar7 + 0x1c) * 4);
        if (iVar18 == iVar13) {
          piVar14 = (int *)(puVar5 + (longlong)*(int *)(lVar7 + 0x1c) * 4);
        }
        else {
          do {
            piVar14 = (int *)(DAT_14c9644d0 + (longlong)iVar18 * 0x20 + 0x18);
            iVar18 = *piVar14;
          } while (iVar18 != iVar13);
        }
        *piVar14 = *(int *)(lVar7 + 0x18);
        lVar7 = *(longlong *)(DAT_14c9644d0 + 0x10 + lVar22);
        if ((lVar7 != 0) && (*(longlong *)(DAT_14c9644d0 + lVar22 + 8) == 0)) {
          *(undefined4 *)(lVar7 + 0x48) = 0;
          if (*(longlong *)(lVar7 + 0x40) != 0) {
            FUN_1400020a8();
          }
          FUN_1400dcd30(lVar7);
          FUN_1400020a8(lVar7);
        }
        FUN_14284031e(&DAT_14c9644d0,iVar13,1);
      }
    }
  }
LAB_1400fa5f9:
  local_58 = param_1[2];
  uVar25 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
  uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
  if (DAT_14c964528 != DAT_14c964554) {
    puVar5 = &DAT_14c964558;
    if (DAT_14c964560 != (undefined *)0x0) {
      puVar5 = DAT_14c964560;
    }
    iVar13 = *(int *)(puVar5 + (ulonglong)(DAT_14c964568 - 1U & (uVar25 >> 0x10 ^ uVar25)) * 4);
    while (iVar13 != -1) {
      lVar7 = DAT_14c964520 + (longlong)iVar13 * 0x20;
      if (*(ulonglong *)(DAT_14c964520 + (longlong)iVar13 * 0x20) == local_58) {
        if (lVar7 != 0) goto LAB_1400fa6db;
        break;
      }
      iVar13 = *(int *)(lVar7 + 0x18);
    }
  }
  local_50 = (code *)&local_58;
  local_d8 = (wchar_t *)0x0;
  FUN_140852980(&DAT_14c964520,&local_60);
  lVar7 = DAT_14c964520 + (longlong)(int)local_60 * 0x20;
LAB_1400fa6db:
  plVar26 = (longlong *)(lVar7 + 8);
  plVar9 = *(longlong **)(lVar7 + 0x10);
  if ((longlong *)*plVar26 == (longlong *)0x0 && plVar9 != (longlong *)0x0) {
    iVar13 = FUN_144b00eaa(plVar9);
    if ((int)plVar9[1] - *(int *)((longlong)plVar9 + 0x34) < 3) {
      iVar18 = (int)plVar9[5];
      uVar25 = 0xfffffffe;
      if (iVar18 == 0) {
        iVar19 = 0;
        iVar18 = 0;
        iVar16 = 0;
      }
      else {
        puVar8 = (uint *)plVar9[4];
        if ((uint *)plVar9[4] == (uint *)0x0) {
          puVar8 = (uint *)(plVar9 + 2);
        }
        uVar12 = *puVar8;
        if (uVar12 == 0) {
          local_80 = (uint *)CONCAT44(local_80._4_4_,(int)uVar17);
          iVar16 = iVar18 + 0x1e;
          if (-1 < iVar18 + -1) {
            iVar16 = iVar18 + -1;
          }
          uVar24 = 0;
          uVar6 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar6 = uVar24;
          }
          iVar19 = (int)uVar6 + 1;
          iVar16 = (int)uVar6 * 0x20 + 0x20;
          iVar20 = 0;
          do {
            if (uVar6 == uVar24) {
              uVar17 = uVar17 & 0xffffffff;
              local_88 = lpCriticalSection;
              goto LAB_1400fa7f1;
            }
            iVar20 = iVar20 + 0x20;
            uVar12 = puVar8[uVar24 + 1];
            uVar24 = uVar24 + 1;
          } while (uVar12 == 0);
          iVar19 = (int)uVar24;
          uVar17 = uVar17 & 0xffffffff;
        }
        else {
          iVar19 = 0;
          iVar20 = 0;
        }
        uVar6 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar22 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iVar16 = (iVar20 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        if (iVar16 < iVar18) {
          iVar18 = iVar16;
        }
        uVar25 = ~(-uVar12 & uVar12);
        local_88 = lpCriticalSection;
        iVar16 = iVar20;
      }
LAB_1400fa7f1:
      *plVar26 = *(longlong *)(*plVar9 + (longlong)iVar18 * 0x10);
      puVar8 = (uint *)(plVar9 + 2);
      if ((uint *)plVar9[4] != (uint *)0x0) {
        puVar8 = (uint *)plVar9[4];
      }
      iVar18 = (int)plVar9[5];
      lVar22 = (longlong)iVar19;
      uVar25 = uVar25 & puVar8[lVar22];
      if (uVar25 == 0) {
        iVar20 = iVar18 + 0x1e;
        if (-1 < iVar18 + -1) {
          iVar20 = iVar18 + -1;
        }
        iVar15 = iVar20 >> 5;
        if (iVar20 >> 5 < iVar19) {
          iVar15 = iVar19;
        }
        do {
          if (iVar15 == lVar22) goto LAB_1400fa86b;
          iVar16 = iVar16 + 0x20;
          uVar25 = puVar8[lVar22 + 1];
          lVar22 = lVar22 + 1;
        } while (uVar25 == 0);
      }
      uVar6 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
      lVar22 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar16 = (iVar16 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
      if (iVar16 < iVar18) {
        iVar18 = iVar16;
      }
LAB_1400fa86b:
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(*plVar9 + (longlong)iVar18 * 0x10);
      *(undefined4 *)(plVar9 + 9) = 0;
      if (plVar9[8] != 0) {
        FUN_1400020a8();
      }
      FUN_1400dcd30(plVar9);
      FUN_1400020a8(plVar9);
    }
    if (iVar13 != 1) {
LAB_1400fa8a7:
      FUN_14283fad7(param_1);
    }
  }
  else {
    if (plVar9 != param_1) {
      if ((longlong *)*plVar26 != param_1) goto LAB_1400fa8a7;
      *plVar26 = (longlong)plVar9;
    }
    *(undefined8 *)(lVar7 + 0x10) = 0;
  }
  lVar7 = *(longlong *)(lVar7 + 0x10);
  if (*plVar26 == 0 && lVar7 != 0) {
    iVar13 = *(int *)(lVar7 + 8) - *(int *)(lVar7 + 0x34);
  }
  else {
    iVar13 = ((*plVar26 != 0) + 1) - (uint)(lVar7 == 0);
  }
  if ((iVar13 == 0) && (DAT_14c964528 != DAT_14c964554)) {
    uVar6 = param_1[2];
    uVar25 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
    puVar5 = &DAT_14c964558;
    if (DAT_14c964560 != (undefined *)0x0) {
      puVar5 = DAT_14c964560;
    }
    iVar13 = *(int *)(puVar5 + ((longlong)(int)(uVar25 >> 0x10 ^ uVar25) &
                               (longlong)DAT_14c964568 - 1U) * 4);
    if (iVar13 != -1) {
LAB_1400fa95d:
      lVar22 = (longlong)iVar13 * 0x20;
      lVar7 = DAT_14c964520 + lVar22;
      if (*(ulonglong *)(DAT_14c964520 + lVar22) != uVar6) goto code_r0x0001400fa96e;
      iVar18 = *(int *)(puVar5 + (longlong)*(int *)(lVar7 + 0x1c) * 4);
      if (iVar18 == iVar13) {
        piVar14 = (int *)(puVar5 + (longlong)*(int *)(lVar7 + 0x1c) * 4);
      }
      else {
        do {
          piVar14 = (int *)(DAT_14c964520 + (longlong)iVar18 * 0x20 + 0x18);
          iVar18 = *piVar14;
        } while (iVar18 != iVar13);
      }
      *piVar14 = *(int *)(lVar7 + 0x18);
      lVar7 = *(longlong *)(DAT_14c964520 + 0x10 + lVar22);
      if ((lVar7 != 0) && (*(longlong *)(DAT_14c964520 + lVar22 + 8) == 0)) {
        *(undefined4 *)(lVar7 + 0x48) = 0;
        if (*(longlong *)(lVar7 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400dcd30(lVar7);
        FUN_1400020a8(lVar7);
      }
      FUN_1428403a6(&DAT_14c964520,iVar13,1);
    }
  }
LAB_1400fa9ce:
  if (DAT_14c949118 == 0) {
    local_70 = FUN_140631fbe;
    if (DAT_14c963f04 == '\0') {
      uVar10 = FUN_140011aa6();
      lVar7 = FUN_140011c0e(uVar10,0x250,8);
    }
    else {
      lVar7 = FUN_14001cc68(0x250,8);
    }
    DAT_14c949118 = lVar7;
    FUN_1446f470e(local_68,L"Class",1);
    local_a0 = &local_70;
    local_a8 = &LAB_146891e90;
    local_b0 = (code *)&LAB_146273097;
    local_c0 = L"Engine";
    local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
    local_c8 = 0x20;
    local_d0 = 0x10000000;
    local_d8._0_4_ = 8;
    FUN_14574b4b2(lVar7);
    DAT_14c949118 = lVar7;
    if (DAT_14c951858 == 0) {
      local_a0 = &local_50;
      local_50 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1468c5283;
      local_b0 = FUN_142809da0;
      local_b8 = L"Engine";
      local_c0 = (wchar_t *)0x400000000;
      local_c8 = CONCAT44(local_c8._4_4_,0x10000000);
      local_d0 = 8;
      local_d8._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar22 = DAT_14c951858;
    lVar7 = DAT_14c949118;
    if (DAT_14c948f88 == (LPCRITICAL_SECTION)0x0) {
      local_60 = (code *)&DAT_1427db2a2;
      if (DAT_14c963f04 == '\0') {
        uVar10 = FUN_140011aa6();
        p_Var11 = (LPCRITICAL_SECTION)FUN_140011c0e(uVar10,0x250,8);
      }
      else {
        p_Var11 = (LPCRITICAL_SECTION)FUN_14001cc68(0x250,8);
      }
      DAT_14c948f88 = p_Var11;
      local_88 = p_Var11;
      FUN_1446f470e(&local_58,L"Struct",1);
      local_a0 = &local_60;
      local_a8 = &LAB_146891313;
      local_b0 = FUN_146272f63;
      local_c0 = L"Engine";
      local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
      local_c8 = 8;
      local_d0 = 0x10000020;
      local_d8._0_4_ = 8;
      FUN_14574b4b2(p_Var11);
      DAT_14c948f88 = p_Var11;
      if (DAT_14c927740 == 0) {
        local_a0 = &local_50;
        local_50 = FUN_1449e2820;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_14081d0ea;
        local_a8 = &LAB_146856450;
        local_b0 = FUN_1427b121c;
        local_b8 = L"Engine";
        local_c0 = (wchar_t *)0x0;
        local_c8 = CONCAT44(local_c8._4_4_,0x10000021);
        local_d0 = 8;
        local_d8._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        local_88 = DAT_14c948f88;
      }
      lVar2 = DAT_14c927740;
      uVar10 = FUN_1400163b0();
      local_d8 = L"Struct";
      FUN_14574b446(uVar10,local_88,lVar2,L"/Script/CoreUObject");
    }
    local_d8 = L"Class";
    FUN_14574b446(DAT_14c948f88,lVar7,lVar22,L"/Script/CoreUObject");
  }
  if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8)
      == DAT_14c949118 + 0x30)) {
    local_50 = (code *)param_1[8];
    if (local_50 != (code *)0x0) {
      uVar25 = ((uint)((ulonglong)local_50 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_50 >> 4)) *
               -0x7a143595;
      uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
      plVar9 = (longlong *)FUN_140a11762(&DAT_14c964570,uVar25 >> 0x10 ^ uVar25,&local_50);
      if ((int)plVar9[1] != *(int *)((longlong)plVar9 + 0x34)) {
        uVar25 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                 -0x7a143595;
        uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
        plVar26 = plVar9 + 7;
        if ((longlong *)plVar9[8] != (longlong *)0x0) {
          plVar26 = (longlong *)plVar9[8];
        }
        iVar13 = *(int *)((longlong)plVar26 +
                         ((longlong)(int)(uVar25 >> 0x10 ^ uVar25) & (longlong)(int)plVar9[9] - 1U)
                         * 4);
        if (iVar13 != -1) {
          lVar7 = *plVar9;
LAB_1400faaac:
          lVar22 = lVar7 + (longlong)iVar13 * 0x10;
          if (*(longlong **)(lVar7 + (longlong)iVar13 * 0x10) != param_1) goto code_r0x0001400faabd;
          iVar18 = *(int *)((longlong)plVar26 + (longlong)*(int *)(lVar22 + 0xc) * 4);
          if (iVar18 == iVar13) {
            piVar14 = (int *)((longlong)plVar26 + (longlong)*(int *)(lVar22 + 0xc) * 4);
          }
          else {
            do {
              piVar14 = (int *)((longlong)iVar18 * 0x10 + lVar7 + 8);
              iVar18 = *piVar14;
            } while (iVar18 != iVar13);
          }
          *piVar14 = *(int *)(lVar22 + 8);
          FUN_1428404a8(plVar9,iVar13,1);
          goto LAB_1400fab0d;
        }
      }
LAB_1400faac6:
      FUN_14283fad7();
LAB_1400fab0d:
      if (((int)plVar9[1] == *(int *)((longlong)plVar9 + 0x34)) && (DAT_14c964578 != DAT_14c9645a4))
      {
        uVar25 = ((uint)((ulonglong)local_50 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_50 >> 4)) *
                 -0x7a143595;
        uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
        puVar5 = &DAT_14c9645a8;
        if (DAT_14c9645b0 != (undefined *)0x0) {
          puVar5 = DAT_14c9645b0;
        }
        iVar13 = *(int *)(puVar5 + ((longlong)(int)(uVar25 >> 0x10 ^ uVar25) &
                                   (longlong)DAT_14c9645b8 - 1U) * 4);
        if (iVar13 != -1) {
LAB_1400fab93:
          lVar22 = (longlong)iVar13 * 0x60;
          lVar7 = DAT_14c964570 + lVar22;
          if (*(code **)(DAT_14c964570 + lVar22) != local_50) goto code_r0x0001400faba8;
          iVar18 = *(int *)(puVar5 + (longlong)*(int *)(lVar7 + 0x5c) * 4);
          if (iVar18 == iVar13) {
            piVar14 = (int *)(puVar5 + (longlong)*(int *)(lVar7 + 0x5c) * 4);
          }
          else {
            do {
              piVar14 = (int *)(DAT_14c964570 + (longlong)iVar18 * 0x60 + 0x58);
              iVar18 = *piVar14;
            } while (iVar18 != iVar13);
          }
          *piVar14 = *(int *)(lVar7 + 0x58);
          lVar2 = DAT_14c964570;
          lVar7 = DAT_14c964570 + lVar22;
          *(undefined4 *)(DAT_14c964570 + 0x50 + lVar22) = 0;
          if (*(longlong *)(lVar2 + 0x48 + lVar22) != 0) {
            FUN_1400020a8();
          }
          FUN_140a119f4(lVar7 + 8);
          FUN_14284042e(&DAT_14c964570,iVar13);
        }
      }
    }
LAB_1400fac1f:
    LOCK();
    DAT_14c9645c0 = DAT_14c9645c0 + 1;
    UNLOCK();
    uVar25 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)uVar25 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) >> 0x19 & 1) != 0) {
      LOCK();
      DAT_14c9645c8 = DAT_14c9645c8 + 1;
      UNLOCK();
    }
  }
  if ((char)uVar17 == '\0') {
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_1400fac6d:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400fb146 FUN_1400fb146 body=3453 status=ok
// SIG undefined FUN_1400fb146(void)

void FUN_1400fb146(longlong *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined ***pppuVar16;
  undefined7 uVar18;
  uint *puVar17;
  longlong *plVar19;
  ulonglong uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_108 [32];
  undefined1 **local_e8;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 *local_c8;
  int *local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined8 *local_a8;
  longlong local_a0;
  undefined8 *local_98;
  int local_90;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined8 *local_60;
  int local_58;
  ulonglong local_48;
  
  lVar5 = DAT_14ca965d0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (DAT_14ca9a438 != '\x01') goto LAB_1400fbb0b;
  if ((param_2 == 0) && (DAT_14ca965d8 != '\0')) {
    lVar4 = *param_1;
    if (lVar4 != DAT_14ca965d0) {
      *param_1 = DAT_14ca965d0;
      if (lVar5 != 0) {
        LOCK();
        piVar1 = (int *)(lVar5 + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        LOCK();
        piVar1 = (int *)(lVar4 + 8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
        }
      }
    }
    goto LAB_1400fbb0b;
  }
  puVar10 = (undefined8 *)FUN_1448fe162();
  *puVar10 = UE::Tasks::Private::FTaskBase::vftable;
  puVar10[1] = &DAT_100000001;
  puVar10[2] = 0;
  *(undefined4 *)(puVar10 + 3) = 0;
  *(undefined4 *)(puVar10 + 4) = 0xffffffff;
  puVar10[6] = 0;
  puVar10[7] = 0x100000000;
  *(undefined1 *)(puVar10 + 8) = 1;
  puVar10[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
  puVar10[0xf] = 0;
  puVar10[0x10] = 0xe800000000000020;
  puVar10[0x12] = 0;
  puVar10[0x13] = 0x100000000;
  *(undefined2 *)(puVar10 + 0x14) = 0;
  LOCK();
  bVar23 = *(char *)(puVar10 + 8) == '\x01';
  if (bVar23) {
    *(char *)(puVar10 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar23) {
    FUN_14008cdb0(puVar10 + 8);
  }
  *puVar10 = &PTR_FUN_149e1e2e0;
  local_d8 = param_1;
  if (*(code **)(puVar10[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar10[0xe] + 0x18))(puVar10 + 0xe,puVar10 + 9);
  }
  puVar10[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar10[9] = puVar10;
  puVar10[10] = puVar10;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar4 = *(longlong *)(lVar5 + 0x2b8);
  if (lVar4 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar4 + 0x30);
  }
  puVar10[0xf] = uVar11;
  puVar10[0x10] = 0xc80000528e323900;
  *(undefined4 *)((longlong)puVar10 + 0x1c) = 2;
  if (DAT_14ca965d8 == '\x01') {
    FUN_14302e1ba(puVar10,&DAT_14ca965d0);
    FUN_143221e80();
  }
  local_d0 = (longlong *)(lVar5 + 0x2b8);
  if ((DAT_14ca9a43c == 2) && ((longlong)DAT_14ca966e0 != 0)) {
    plVar21 = DAT_14ca966d8 + DAT_14ca966e0;
    local_a8 = puVar10 + 5;
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar2 = (undefined8 *)(lVar5 + 0x308);
    local_c8 = (undefined8 *)(lVar5 + 0x310);
    local_a0 = 0x527800b400;
    local_c0 = (int *)(lVar5 + 0xc60);
    plVar19 = DAT_14ca966d8;
    do {
      if ((*(char *)(*plVar19 + 0x4e) == '\x01') && (*(int *)(*plVar19 + 0x48) != 0)) {
        puVar12 = (undefined8 *)FUN_1448fe162(0xa8);
        *puVar12 = UE::Tasks::Private::FTaskBase::vftable;
        puVar12[1] = &DAT_100000001;
        puVar12[2] = 0;
        *(undefined4 *)(puVar12 + 3) = 0;
        *(undefined4 *)(puVar12 + 4) = 0xffffffff;
        puVar12[6] = 0;
        puVar12[7] = 0x100000000;
        *(undefined1 *)(puVar12 + 8) = 1;
        puVar12[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateDummy::vftable;
        puVar12[0xf] = 0;
        puVar12[0x10] = 0xe800000000000020;
        puVar12[0x12] = 0;
        puVar12[0x13] = 0x100000000;
        *(undefined2 *)(puVar12 + 0x14) = 0;
        LOCK();
        bVar23 = *(char *)(puVar12 + 8) == '\x01';
        if (bVar23) {
          *(char *)(puVar12 + 8) = '\0';
        }
        UNLOCK();
        if (!bVar23) {
          FUN_14008cdb0(puVar12 + 8);
        }
        *puVar12 = &PTR_FUN_149e1e2e0;
        if (*(code **)(puVar12[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar12[0xe] + 0x18))(puVar12 + 0xe,puVar12 + 9);
        }
        puVar12[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar12[9] = puVar12;
        puVar12[10] = puVar12;
        if (*local_d0 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(*local_d0 + 0x30);
        }
        puVar12[0xf] = uVar11;
        puVar12[0x10] = 0xc80000528e325480;
        *(undefined4 *)((longlong)puVar12 + 0x1c) = 2;
        if (puVar12 != (undefined8 *)0x0) {
          LOCK();
          *(int *)((longlong)puVar10 + 0xc) = *(int *)((longlong)puVar10 + 0xc) + 1;
          UNLOCK();
          cVar6 = FUN_1456bb142(puVar12 + 0x11,puVar10);
          if (cVar6 == '\0') {
            LOCK();
            *(int *)((longlong)puVar10 + 0xc) = *(int *)((longlong)puVar10 + 0xc) + -1;
            UNLOCK();
          }
          else {
            LOCK();
            *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
            UNLOCK();
            FUN_1456bb1d4(local_a8,puVar12);
          }
        }
        iVar7 = *local_c0;
        local_98 = puVar12;
        if (DAT_14c86a9fc == 0) {
          if (iVar7 != 2) {
            if (iVar7 != 1) goto LAB_1400fb506;
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            if (DVar8 == DVar9) goto LAB_1400fb50b;
            goto LAB_1400fb56b;
          }
LAB_1400fb50b:
          FUN_1400daade(&local_98);
        }
        else {
LAB_1400fb506:
          if (iVar7 == 0x10) goto LAB_1400fb50b;
LAB_1400fb56b:
          if (DAT_14ca9a438 == '\0') {
            if ((DAT_14c86a9f8 != '\x01') || (*local_c0 == 2)) goto LAB_1400fb50b;
            if (*local_c0 == 1) {
              DVar8 = FUN_140ad26c0();
              DVar9 = GetCurrentThreadId();
              if (DVar8 == DVar9) goto LAB_1400fb50b;
            }
          }
          if (DAT_14ca9a43c == 0) {
            puVar13 = (uint *)*puVar2;
            if (puVar13 != (uint *)0x0) goto LAB_1400fb6c1;
            do {
              uVar15 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar15 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar15 | 1;
                __tlregdtor(&LAB_14322aa43);
              }
              puVar14 = (undefined4 *)*local_c8;
              *local_c8 = 0;
              if (puVar14 == (undefined4 *)0x0) {
                puVar14 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar14 = 0xffffffff;
              *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
              puVar14[0x12] = 0;
              *puVar2 = puVar14;
              FUN_140217a48(puVar2);
              puVar13 = (uint *)*puVar2;
LAB_1400fb6c1:
              uVar22 = *(longlong *)(puVar13 + 0x10) + 7;
              uVar15 = puVar13[0x12];
              while( true ) {
                puVar12 = (undefined8 *)(uVar22 & 0xfffffffffffffff8);
                if (puVar12 + 0x16 <= puVar13 + 0x4000) {
                  *(undefined8 **)(puVar13 + 0x10) = puVar12 + 0x16;
                  puVar13[0x12] = uVar15 + 1;
                  uVar11 = 0;
                  FUN_1447247dc(puVar12,0);
                  *puVar12 = &PTR_FUN_14a392998;
                  puVar12[0x15] = local_98;
                  local_98 = (undefined8 *)0x0;
                  uVar18 = (undefined7)((ulonglong)uVar11 >> 8);
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar15 = DAT_14c7585c8 >> 10 & 3;
                    uVar20 = 0;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
                      uVar22 = CONCAT71(uVar18,(&DAT_149e38edc)[uVar15]);
                    }
                    else {
                      uVar22 = CONCAT71(uVar18,2);
                    }
                  }
                  else {
                    uVar20 = (ulonglong)
                             ((DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                             *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4));
                    uVar22 = CONCAT71(uVar18,5);
                  }
                  if (*(code **)(puVar12[0xe] + 0x18) != FUN_144713626) {
                    local_b8 = uVar22;
                    local_b0 = uVar20;
                    (**(code **)(puVar12[0xe] + 0x18))(puVar12 + 0xe,puVar12 + 9);
                    uVar22 = local_b8;
                    uVar20 = local_b0;
                  }
                  puVar12[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar12[9] = puVar12;
                  puVar12[10] = puVar12;
                  lVar5 = *local_d0;
                  cVar6 = (char)uVar22;
                  if (lVar5 == 0) {
                    uVar22 = uVar22 & 0xff;
                    if (cVar6 == '\x06') {
                      uVar22 = 1;
                    }
                    uVar11 = 0;
                  }
                  else {
                    if (cVar6 == '\x06') {
                      uVar22 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
                    }
                    uVar11 = *(undefined8 *)(lVar5 + 0x30);
                  }
                  puVar12[0xf] = uVar11;
                  puVar12[0x10] = (uVar22 << 0x3b) + local_a0 | 0xc000000000000000;
                  *(int *)((longlong)puVar12 + 0x1c) = (int)uVar20;
                  if (puVar12 == (undefined8 *)0x0) {
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(0,local_88);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
                    UNLOCK();
                    local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(puVar12,local_88);
                    LOCK();
                    piVar1 = (int *)(puVar12 + 1);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)*puVar12)(puVar12,1);
                    }
                  }
                  goto LAB_1400fb625;
                }
                *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
                LOCK();
                uVar3 = *puVar13;
                *puVar13 = *puVar13 + uVar15 + 1;
                UNLOCK();
                if ((uVar3 ^ uVar15) != 0xffffffff) break;
                puVar13 = (uint *)*puVar2;
                *puVar13 = 0xffffffff;
                *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
                puVar13[0x12] = 0;
                *puVar2 = puVar13;
                uVar22 = (longlong)puVar13 + 0x5f;
                uVar15 = 0;
              }
            } while( true );
          }
          local_78 = (undefined ***)0x0;
          local_68 = &PTR_LAB_14a392960;
          local_60 = local_98;
          local_98 = (undefined8 *)0x0;
          local_88[0] = &LAB_14322e086;
          local_e8 = local_88;
          FUN_14005a792(&DAT_14ca9a440,L"BeginFence",&DAT_14ca99fb4);
          if (local_88[0] != (undefined1 *)0x0) {
            pppuVar16 = local_78;
            if (local_78 == (undefined ***)0x0) {
              pppuVar16 = &local_68;
            }
            (*(code *)(*pppuVar16)[2])();
          }
        }
LAB_1400fb625:
        if (local_98 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_98 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_98)(local_98,1);
          }
        }
      }
      plVar19 = plVar19 + 1;
    } while (plVar19 != plVar21);
  }
  if (puVar10 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
    UNLOCK();
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  local_98 = puVar10;
  local_90 = param_2;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_1400fb9f0;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1400fb9f5;
      goto LAB_1400fba26;
    }
LAB_1400fb9f5:
    FUN_14322e268(&local_98,&DAT_14ca85100);
    plVar19 = local_d8;
  }
  else {
LAB_1400fb9f0:
    if (iVar7 == 0x10) goto LAB_1400fb9f5;
LAB_1400fba26:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
      goto LAB_1400fb9f5;
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_1400fb9f5;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar13 = (uint *)*puVar2;
      if (puVar13 != (uint *)0x0) goto LAB_1400fbbd9;
      while( true ) {
        uVar15 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar15 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar15 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar14 = *(undefined4 **)(lVar5 + 0x310);
        *(undefined8 *)(lVar5 + 0x310) = 0;
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar14 = 0xffffffff;
        *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
        puVar14[0x12] = 0;
        *puVar2 = puVar14;
        FUN_140217a48(puVar2);
        puVar13 = (uint *)*puVar2;
LAB_1400fbbd9:
        puVar12 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar17 = (uint *)(puVar12 + 0x17);
        uVar15 = puVar13[0x12];
        if (puVar17 <= puVar13 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar3 = *puVar13;
          *puVar13 = *puVar13 + uVar15 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar15) != 0xffffffff) break;
          puVar13 = (uint *)*puVar2;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          puVar12 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar12 + 0x17);
          uVar15 = 0;
          if (puVar17 <= puVar13 + 0x4000) {
            uVar15 = 1;
            goto LAB_1400fbc59;
          }
        }
      }
      uVar15 = uVar15 + 1;
LAB_1400fbc59:
      *(uint **)(puVar13 + 0x10) = puVar17;
      puVar13[0x12] = uVar15;
      iVar7 = 0;
      FUN_1447247dc(puVar12,0);
      *puVar12 = &PTR_FUN_14a3929d0;
      puVar12[0x15] = local_98;
      local_98 = (undefined8 *)0x0;
      *(int *)(puVar12 + 0x16) = local_90;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar15 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
          uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
          iVar7 = 0;
        }
        else {
          uVar22 = 2;
        }
      }
      else {
        iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar22 = 5;
      }
      if (*(code **)(puVar12[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar12[0xe] + 0x18))(puVar12 + 0xe,puVar12 + 9);
      }
      plVar19 = local_d8;
      puVar12[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar12[9] = puVar12;
      puVar12[10] = puVar12;
      lVar5 = *local_d0;
      if (lVar5 == 0) {
        uVar20 = 1;
        if ((char)uVar22 != '\x06') {
          uVar20 = uVar22;
        }
        uVar22 = uVar20;
        uVar11 = 0;
      }
      else {
        if ((char)uVar22 == '\x06') {
          uVar22 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar5 + 0x30);
      }
      puVar12[0xf] = uVar11;
      puVar12[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar12 + 0x1c) = iVar7;
      if (puVar12 == (undefined8 *)0x0) {
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
        plVar19 = local_d8;
      }
      else {
        LOCK();
        *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
        UNLOCK();
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(puVar12);
        LOCK();
        piVar1 = (int *)(puVar12 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar12)(puVar12,1);
        }
      }
    }
    else {
      local_e8 = local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14a3929b0;
      local_60 = local_98;
      local_98 = (undefined8 *)0x0;
      local_58 = local_90;
      local_88[0] = &LAB_14322e46a;
      FUN_14005a792(&DAT_14ca9a440,L"BeginFence",&DAT_14ca99fb8);
      plVar19 = local_d8;
      if (local_88[0] != (undefined1 *)0x0) {
        pppuVar16 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar16 = &local_68;
        }
        (*(code *)(*pppuVar16)[2])();
        plVar19 = local_d8;
      }
    }
  }
  if (local_98 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_98 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_98)(local_98,1);
    }
  }
  puVar2 = (undefined8 *)*plVar19;
  *plVar19 = (longlong)puVar10;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
LAB_1400fbb0b:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400fbee6 FUN_1400fbee6 body=95 status=ok
// SIG undefined FUN_1400fbee6(void)

void FUN_1400fbee6(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1400fbf46(param_1,param_2,1);
  return;
}



// FUNCTION 1400fbf46 FUN_1400fbf46 body=87 status=ok
// SIG undefined FUN_1400fbf46(void)

void FUN_1400fbf46(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)((longlong)param_2 * 0x20 + *param_1 + 8);
    iVar1 = param_3;
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_1400fbf9e(param_1,param_2,param_3);
  return;
}



// FUNCTION 1400fbf9e FUN_1400fbf9e body=136 status=ok
// SIG undefined FUN_1400fbf9e(void)

void FUN_1400fbf9e(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1400fc026 FUN_1400fc026 body=113 status=ok
// SIG undefined FUN_1400fc026(void)

void FUN_1400fc026(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x18 + (longlong)(int)param_2 * 0x28) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(lVar1 + (longlong)(int)param_2 * 0x28),
            (void *)(lVar1 + (longlong)(iVar2 - iVar4) * 0x28),(longlong)iVar4 * 0x28);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1400fc098 FUN_1400fc098 body=143 status=ok
// SIG undefined FUN_1400fc098(void)

void FUN_1400fc098(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 1400fc128 FUN_1400fc128 body=159 status=ok
// SIG undefined FUN_1400fc128(void)

void FUN_1400fc128(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x28)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x28,8);
      uVar3 = uVar3 / 0x28;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x28,8);
    }
  }
  return;
}



// FUNCTION 1400fc1c8 FUN_1400fc1c8 body=221 status=ok
// SIG undefined FUN_1400fc1c8(void)

void FUN_1400fc1c8(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_378 [32];
  undefined1 local_358 [792];
  undefined1 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (0 < *(int *)(param_1 + 0x408)) {
    local_40 = (undefined1 *)0x0;
    FUN_1400fc2a6(local_358,*(undefined8 *)(param_1 + 0x400),*(int *)(param_1 + 0x408),0);
    puVar1 = local_40;
    if (local_40 == (undefined1 *)0x0) {
      puVar1 = local_358;
    }
    if ((longlong)local_38 != 0) {
      lVar2 = (longlong)local_38 * 0x108;
      do {
        FUN_1400fc306(param_1,puVar1,param_2,param_3);
        puVar1 = puVar1 + 0x108;
        lVar2 = lVar2 + -0x108;
      } while (lVar2 != 0);
    }
    if (local_40 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400fc2a6 FUN_1400fc2a6 body=95 status=ok
// SIG undefined FUN_1400fc2a6(void)

void FUN_1400fc2a6(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 800) = param_3;
  if (param_4 != 0 || param_3 != 0) {
    FUN_1400fc930(param_1,param_3,param_4);
    lVar1 = *(longlong *)(param_1 + 0x318);
    if (*(longlong *)(param_1 + 0x318) == 0) {
      lVar1 = param_1;
    }
    FUN_14011d00d(lVar1,param_2,param_3);
    return;
  }
  *(undefined4 *)(param_1 + 0x324) = 3;
  return;
}



// FUNCTION 1400fc306 FUN_1400fc306 body=1577 status=ok
// SIG undefined FUN_1400fc306(void)

void FUN_1400fc306(longlong param_1,longlong param_2,undefined4 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  longlong local_158;
  longlong *local_150;
  longlong local_148;
  undefined4 local_140;
  int local_a8;
  int local_78;
  int local_74;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caddfd8) && (FUN_144b3d300(&DAT_14caddfd8), DAT_14caddfd8 == -1)) {
    FUN_1456bdea2(&DAT_14caddf88);
    atexit((_func_5014 *)&LAB_14350c396);
    _Init_thread_footer(&DAT_14caddfd8);
  }
  local_168 = CONCAT31(local_168._1_3_,param_4);
  cVar7 = FUN_14350c6aa(&DAT_14caddf88,param_1,param_2,param_3);
  if ((((((cVar7 == '\0') && (*(int *)(param_2 + 0xe4) != 0)) &&
        (uVar11 = *(uint *)(param_2 + 0xe0), -1 < (int)uVar11)) &&
       (((int)uVar11 < DAT_14c9647dc &&
        (plVar13 = (longlong *)
                   ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
        plVar13 != (longlong *)0x0)))) && ((int)plVar13[2] == *(int *)(param_2 + 0xe4))) &&
     (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 && (lVar5 = *plVar13, lVar5 != 0)))) {
    FUN_14017efda(&local_158,param_1,0xffffffff);
    iVar8 = *(int *)(lVar5 + 0x408);
    if ((longlong)iVar8 != 0) {
      lVar9 = *(longlong *)(lVar5 + 0x400);
      lVar14 = 0;
      do {
        if (((local_78 == *(int *)(lVar9 + 0xe0 + lVar14)) &&
            (local_74 == *(int *)(lVar9 + 0xe4 + lVar14))) &&
           (local_a8 == *(int *)(lVar9 + 0xb0 + lVar14))) {
          uVar11 = (int)(lVar14 >> 3) * 0x3e0f83e1;
          if (uVar11 != 0xffffffff) {
            iVar12 = ~uVar11 + iVar8;
            if (iVar12 != 0) {
              iVar15 = 1;
              if (iVar12 < 1) {
                iVar15 = iVar12;
              }
              memmove((void *)((longlong)(int)uVar11 * 0x108 + lVar9),
                      (void *)((longlong)(iVar8 - iVar15) * 0x108 + lVar9),(longlong)iVar15 * 0x108)
              ;
              iVar8 = *(int *)(lVar5 + 0x408);
            }
            *(int *)(lVar5 + 0x408) = iVar8 + -1;
          }
          break;
        }
        lVar14 = lVar14 + 0x108;
      } while ((longlong)iVar8 * 0x108 != lVar14);
    }
    iVar8 = *(int *)(param_1 + 0x408);
    if ((longlong)iVar8 != 0) {
      lVar9 = *(longlong *)(param_1 + 0x400);
      lVar14 = 0;
      do {
        if (((*(int *)(param_2 + 0xe0) == *(int *)(lVar9 + 0xe0 + lVar14)) &&
            (*(int *)(param_2 + 0xe4) == *(int *)(lVar9 + 0xe4 + lVar14))) &&
           (*(int *)(param_2 + 0xb0) == *(int *)(lVar9 + 0xb0 + lVar14))) {
          uVar11 = (int)(lVar14 >> 3) * 0x3e0f83e1;
          if (uVar11 == 0xffffffff) break;
          DAT_14cad1f98 = DAT_14cad1f98 + 1;
          iVar12 = ~uVar11 + iVar8;
          if (iVar12 != 0) {
            iVar15 = 1;
            if (iVar12 < 1) {
              iVar15 = iVar12;
            }
            memmove((void *)((longlong)(int)uVar11 * 0x108 + lVar9),
                    (void *)((longlong)(iVar8 - iVar15) * 0x108 + lVar9),(longlong)iVar15 * 0x108);
            iVar8 = *(int *)(param_1 + 0x408);
          }
          *(int *)(param_1 + 0x408) = iVar8 + -1;
          plVar13 = *(longlong **)(param_1 + 0xa8);
          lVar9 = *(longlong *)(param_1 + 0xb0);
          if (lVar9 == 0) {
            lVar9 = FUN_1448abda6(param_1);
          }
          if (((char)param_3 == '\x01' && plVar13 != (longlong *)0x0) &&
             ((*(byte *)((longlong)plVar13 + 0x62) & 0x40) != 0)) {
            bVar10 = (*(byte *)((longlong)plVar13 + 100) & 4) >> 2;
          }
          else {
            bVar10 = 0;
          }
          if ((char)param_3 == '\0') break;
          if (lVar9 == 0) {
            if (bVar10 == 0) break;
          }
          else {
            if (((*(byte *)(lVar9 + 0x155) & 1) == 0) || (*(longlong *)(lVar9 + 0x30) == 0)) {
              bVar16 = false;
            }
            else {
              bVar16 = *(int *)(*(longlong *)(lVar9 + 0x30) + 0xa8) != 0;
            }
            if (bVar10 == 0 && !bVar16) break;
          }
          plVar6 = *(longlong **)(lVar5 + 0xa8);
          if (plVar6 != (longlong *)0x0) {
            if ((param_1 == 0 || param_4 != '\0') || ((*(uint *)(param_1 + 8) >> 0x1e & 1) != 0))
            goto LAB_1400fc728;
            uVar4 = *(undefined4 *)(param_2 + 0xb0);
            FUN_1408527fe(param_1 + 0x59a,&local_50);
            if (local_50 != 0) {
              local_158 = param_1;
              local_150 = plVar6;
              local_148 = lVar5;
              local_140 = uVar4;
              FUN_1447cd2ec();
            }
            plVar1 = local_48;
            if (local_48 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_48 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_48)(local_48);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
            if ((longlong)*(int *)(param_1 + 0x610) == 0) goto LAB_1400fc728;
            lVar9 = 0;
            goto LAB_1400fc70c;
          }
          break;
        }
        lVar14 = lVar14 + 0x108;
      } while ((longlong)iVar8 * 0x108 != lVar14);
    }
  }
  goto LAB_1400fc4bf;
  while (lVar9 = lVar9 + 0x10, (longlong)*(int *)(param_1 + 0x610) * 0x10 != lVar9) {
LAB_1400fc70c:
    if ((*(int *)(*(longlong *)(param_1 + 0x608) + 8 + lVar9) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x608) + lVar9) != 0)) {
      local_168 = *(undefined4 *)(param_2 + 0xb0);
      FUN_1479fe152(param_1 + 0x608,param_1,plVar6,lVar5);
      break;
    }
  }
LAB_1400fc728:
  if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) {
    FUN_1408527fe(lVar5 + 0x59a,&local_50);
    if (local_50 != 0) {
      local_140 = 0xffffffff;
      local_158 = lVar5;
      local_150 = plVar13;
      local_148 = param_1;
      FUN_1447cd2ec();
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
    if ((longlong)*(int *)(lVar5 + 0x610) != 0) {
      lVar9 = 0;
      do {
        if ((*(int *)(*(longlong *)(lVar5 + 0x608) + 8 + lVar9) != 0) &&
           (*(longlong *)(*(longlong *)(lVar5 + 0x608) + lVar9) != 0)) {
          local_168 = 0xffffffff;
          FUN_1479fe152(lVar5 + 0x608,lVar5,plVar13,param_1);
          break;
        }
        lVar9 = lVar9 + 0x10;
      } while ((longlong)*(int *)(lVar5 + 0x610) * 0x10 != lVar9);
    }
  }
  if (((plVar13 != (longlong *)0x0) && (plVar13 != plVar6)) &&
     (cVar7 = FUN_14064aec2(plVar13,plVar6), cVar7 == '\0')) {
    if ((((*(uint *)(plVar13 + 1) >> 0x1e & 1) == 0) && (-1 < *(int *)(plVar13[2] + 0xd4))) &&
       ((*(byte *)(plVar13 + 0x69) & 2) == 0)) {
      (**(code **)(*plVar13 + 0x378))(plVar13,plVar6);
      FUN_140e36ac2((longlong)plVar13 + 0x204,plVar13,plVar6);
    }
    if ((((*(uint *)(plVar6 + 1) >> 0x1e & 1) == 0) && (-1 < *(int *)(plVar6[2] + 0xd4))) &&
       ((*(byte *)(plVar6 + 0x69) & 2) == 0)) {
      (**(code **)(*plVar6 + 0x378))(plVar6,plVar13);
      FUN_140e36ac2((longlong)plVar6 + 0x204,plVar6,plVar13);
    }
  }
LAB_1400fc4bf:
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400fc930 FUN_1400fc930 body=346 status=ok
// SIG undefined FUN_1400fc930(void)

void FUN_1400fc930(longlong param_1,uint param_2,int param_3)

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
    iVar7 = 3;
    if (3 < param_2) {
      uVar4 = (longlong)(int)param_2 * 0x108;
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
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400fc9d8;
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
          uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
        }
      }
LAB_1400fc9d8:
      iVar5 = (int)(uVar4 / 0x108);
      iVar7 = 0x7fffffff;
      if ((int)param_2 <= iVar5) {
        iVar7 = iVar5;
      }
    }
  }
  if (param_3 < iVar7) {
    FUN_14011d28a(param_1,0,iVar7,0x108);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0x324) = param_3;
  return;
}



// FUNCTION 1400fca8a FUN_1400fca8a body=649 status=ok
// SIG undefined FUN_1400fca8a(void)

void FUN_1400fca8a(ulonglong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_68 [40];
  undefined **local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
  if (DAT_14c963d90 != DAT_14c963dbc) {
    uVar6 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    uVar6 = uVar6 >> 0x10 ^ uVar6;
    puVar8 = DAT_14c963dc8;
    if (DAT_14c963dc8 == (undefined *)0x0) {
      puVar8 = &DAT_14c963dc0;
    }
    iVar7 = *(int *)(puVar8 + (ulonglong)(DAT_14c963dd0 - 1U & uVar6) * 4);
    while (iVar7 != -1) {
      lVar1 = DAT_14c963d88 + (longlong)iVar7 * 0x60;
      if (*(ulonglong *)(DAT_14c963d88 + (longlong)iVar7 * 0x60) == param_1) {
        if ((lVar1 != 0) && (plVar9 = (longlong *)(lVar1 + 8), plVar9 != (longlong *)0x0)) {
          iVar7 = *(int *)(lVar1 + 0x10);
          iVar10 = *(int *)(lVar1 + 0x3c);
          if (iVar7 == iVar10) goto LAB_1400fcc64;
          uVar2 = (uint)((ulonglong)param_2 >> 0x10);
          uVar4 = (uint)param_2 & 0xffff;
          lVar3 = lVar1 + 0x40;
          if (*(longlong *)(lVar1 + 0x48) != 0) {
            lVar3 = *(longlong *)(lVar1 + 0x48);
          }
          iVar5 = *(int *)(lVar3 + (ulonglong)
                                   (*(int *)(lVar1 + 0x50) - 1U &
                                   (int)((ulonglong)param_2 >> 0x20) +
                                   ((uint)param_2 << 0x10 | uVar4) +
                                   (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
          if (iVar5 == -1) goto LAB_1400fcc22;
          goto LAB_1400fcbcd;
        }
        break;
      }
      iVar7 = *(int *)(lVar1 + 0x58);
    }
  }
  goto LAB_1400fcc27;
  while (iVar5 = *(int *)(lVar3 + 0x18), iVar5 != -1) {
LAB_1400fcbcd:
    lVar3 = *plVar9 + (longlong)iVar5 * 0x20;
    if (*(longlong *)(*plVar9 + (longlong)iVar5 * 0x20) == param_2) {
      if ((lVar3 != 0) && ((longlong *)(lVar3 + 8) != (longlong *)0x0)) {
        lVar3 = *(longlong *)(lVar3 + 8);
        if ((lVar3 != 0) && (*(undefined4 *)(lVar3 + 8) = 0, *(int *)(lVar3 + 0xc) != 0)) {
          FUN_1407d9874(lVar3,0);
        }
        FUN_140819aae(plVar9,param_2);
        iVar7 = *(int *)(lVar1 + 0x10);
        iVar10 = *(int *)(lVar1 + 0x3c);
      }
      break;
    }
  }
LAB_1400fcc22:
  if (iVar7 == iVar10) {
LAB_1400fcc64:
    if (DAT_14c963d90 != DAT_14c963dbc) {
      puVar8 = &DAT_14c963dc0;
      if (DAT_14c963dc8 != (undefined *)0x0) {
        puVar8 = DAT_14c963dc8;
      }
      for (iVar7 = *(int *)(puVar8 + ((longlong)(int)uVar6 & (longlong)DAT_14c963dd0 - 1U) * 4);
          iVar7 != -1; iVar7 = *(int *)((longlong)iVar7 * 0x60 + DAT_14c963d88 + 0x58)) {
        if (*(ulonglong *)(DAT_14c963d88 + (longlong)iVar7 * 0x60) == param_1) {
          FUN_14007eed8(&DAT_14c963d88);
          break;
        }
      }
      if (DAT_14c963d90 != DAT_14c963dbc) goto LAB_1400fcc27;
    }
    local_40 = &PTR_PTR_14c75ecc8;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964840);
    FUN_140f933a4(&DAT_14c964830,&local_40,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c964840);
  }
LAB_1400fcc27:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400fcd14 FUN_1400fcd14 body=265 status=ok
// SIG undefined FUN_1400fcd14(void)

undefined1 * FUN_1400fcd14(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  if ((*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) ||
     (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  param_1[0x20] = param_2[0x20];
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (*(longlong *)(param_1 + 0x30) != lVar1) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  *(longlong *)(param_1 + 0x30) = lVar1;
  if (*(longlong *)(param_1 + 0x38) != *(longlong *)(param_2 + 0x38)) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  uVar2 = FUN_14477b664();
  uVar2 = FUN_14477b664(uVar2);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  if ((*(longlong *)(param_1 + 0x58) != *(longlong *)(param_2 + 0x58)) ||
     (*(int *)(param_1 + 0x60) != *(int *)(param_2 + 0x60))) {
    *(longlong *)(param_1 + 0x58) = *(longlong *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  FUN_1400fce1e(param_1 + 0x78,param_2 + 0x78);
  FUN_1400fce78(param_1 + 0x88,param_2 + 0x88);
  param_1[0x98] = param_2[0x98];
  return param_1;
}



// FUNCTION 1400fce1e FUN_1400fce1e body=89 status=ok
// SIG undefined FUN_1400fce1e(void)

undefined8 * FUN_1400fce1e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14007bfde(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 1400fce78 FUN_1400fce78 body=93 status=ok
// SIG undefined FUN_1400fce78(void)

undefined8 * FUN_1400fce78(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1447cd778(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14055313c(param_1,iVar1);
      FUN_140553097(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1400fced6 FUN_1400fced6 body=236 status=ok
// SIG undefined FUN_1400fced6(void)

undefined4 * FUN_1400fced6(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14c760d84 == 0) || ((DAT_14ca84f5a & 1) == 0)) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 2) = 0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca81308) {
      FUN_144b3d300(&DAT_14ca81308);
      if (DAT_14ca81308 == -1) {
        DAT_14ca81304 = FUN_1447e0190();
        _Init_thread_footer(&DAT_14ca81308);
      }
    }
    local_38[0] = 0;
    local_38[1] = 0;
    local_48 = DAT_14ca81304;
    FUN_1431e535a(param_1,param_2,param_3,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400fcfc4 FUN_1400fcfc4 body=130 status=ok
// SIG undefined FUN_1400fcfc4(void)

longlong FUN_1400fcfc4(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  uVar1 = *param_2;
  if (uVar1 < 2) {
    return 0;
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)((int)param_1[9] - 1U & (int)uVar1 + (int)(uVar1 >> 0x20) * 0x17) * 4
                    );
    if (iVar4 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar4 * 0x40;
        if (*(ulonglong *)(*param_1 + (longlong)iVar4 * 0x40) == uVar1) break;
        iVar4 = *(int *)(lVar3 + 0x38);
        lVar3 = 0;
      } while (iVar4 != -1);
      goto LAB_1400fd02e;
    }
  }
  lVar3 = 0;
LAB_1400fd02e:
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1400fd046 FUN_1400fd046 body=222 status=ok
// SIG undefined FUN_1400fd046(void)

double * FUN_1400fd046(double *param_1,double *param_2,undefined8 param_3)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_30;
  double dStack_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = param_1 + 3;
  bVar3 = *param_1 == 1.79769313486232e+308 || param_1[3] == 1.79769313486232e+308;
  if (DAT_14c992590 == '\x01') {
    if (bVar3) {
LAB_1400fd0b5:
      param_2[2] = param_1[2];
      dVar2 = param_1[1];
      *param_2 = *param_1;
      param_2[1] = dVar2;
      dVar2 = param_1[4];
      param_2[3] = *pdVar1;
      param_2[4] = dVar2;
      param_2[5] = param_1[5];
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
    local_38 = &local_30;
    FUN_141917b30(param_3,param_1,pdVar1,param_2);
  }
  else {
    if (bVar3) goto LAB_1400fd0b5;
    local_38 = &local_30;
    FUN_141917a80(param_3,param_1,pdVar1,param_2);
  }
  param_2[5] = local_20;
  param_2[3] = local_30;
  param_2[4] = dStack_28;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400fd128 FUN_1400fd128 body=188 status=ok
// SIG undefined FUN_1400fd128(void)

void FUN_1400fd128(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x3c08);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x3c08) = param_2;
    uVar4 = param_2 - iVar1;
    if ((uint)(*(int *)(param_1 + 0x3c0c) - iVar1) < uVar4) {
      FUN_1412de590(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x3c00);
    if (*(longlong *)(param_1 + 0x3c00) == 0) {
      lVar2 = param_1;
    }
    if (uVar4 != 0) {
      puVar3 = (undefined2 *)((longlong)iVar1 * 0x78 + lVar2 + 0x38);
      do {
        *(undefined4 *)(puVar3 + -0x14) = 0xffffffff;
        *(undefined8 *)(puVar3 + -0x10) = 0;
        *(undefined8 *)(puVar3 + -0xc) = 0;
        *(undefined8 *)(puVar3 + -8) = 0;
        *(undefined4 *)(puVar3 + -4) = 0xffffffff;
        *puVar3 = 0;
        puVar3 = puVar3 + 0x3c;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x3c08) = param_2, param_3 == '\x01')) {
      FUN_1400fd1e6(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1400fd1e6 FUN_1400fd1e6 body=74 status=ok
// SIG undefined FUN_1400fd1e6(void)

void FUN_1400fd1e6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1400fd230(param_1,*(undefined4 *)(param_1 + 0x3c08),*(undefined4 *)(param_1 + 0x3c0c))
  ;
  if (iVar1 == *(int *)(param_1 + 0x3c0c)) {
    return;
  }
  *(int *)(param_1 + 0x3c0c) = iVar1;
  FUN_1412de702(param_1,*(undefined4 *)(param_1 + 0x3c08),iVar1,0x78);
  return;
}



// FUNCTION 1400fd230 FUN_1400fd230 body=121 status=ok
// SIG undefined FUN_1400fd230(void)

ulonglong FUN_1400fd230(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x80;
  if (0x80 < param_2) {
    iVar2 = param_3 - param_2;
    if ((ulonglong)((longlong)iVar2 * 0x78) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x78,0);
      uVar1 = uVar1 / 0x78;
    }
  }
  return uVar1;
}



// FUNCTION 1400fd2aa FUN_1400fd2aa body=133 status=ok
// SIG undefined FUN_1400fd2aa(void)

void FUN_1400fd2aa(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_1400fd330(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_1400fd330(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1400fd330(param_1 + 8);
  return;
}



// FUNCTION 1400fd330 FUN_1400fd330 body=55 status=ok
// SIG undefined FUN_1400fd330(void)

void FUN_1400fd330(longlong *param_1)

{
  FUN_1400fd368(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400fd368 FUN_1400fd368 body=121 status=ok
// SIG undefined FUN_1400fd368(void)

void FUN_1400fd368(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 1400fd3f0 FUN_1400fd3f0 body=131 status=ok
// SIG undefined FUN_1400fd3f0(void)

undefined8 * FUN_1400fd3f0(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b346310;
  lVar1 = param_1[0x11];
  if (lVar1 != 0) {
    FUN_144a2da94(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b345010;
  FUN_1400fd473(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400fd473 FUN_1400fd473 body=75 status=ok
// SIG undefined FUN_1400fd473(void)

void FUN_1400fd473(longlong param_1,int param_2)

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



// FUNCTION 1400fd4be FUN_1400fd4be body=7294 status=ok
// SIG undefined FUN_1400fd4be(void)

void FUN_1400fd4be(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong *param_5,LARGE_INTEGER *param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  LARGE_INTEGER LVar4;
  LARGE_INTEGER LVar5;
  LARGE_INTEGER LVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  int iVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  longlong lVar24;
  longlong lVar25;
  bool bVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  double dVar30;
  LARGE_INTEGER LVar31;
  LARGE_INTEGER LVar32;
  undefined1 auStack_4e8 [32];
  longlong local_4c8;
  LARGE_INTEGER *local_4c0;
  longlong local_4b8;
  undefined4 local_4b0;
  int local_4a8;
  undefined1 local_4a0;
  ulonglong local_498;
  uint local_48c;
  longlong local_488;
  longlong *local_480;
  longlong local_478;
  longlong local_470;
  longlong local_468;
  longlong local_460;
  ulonglong local_458;
  undefined8 local_450;
  int local_444;
  longlong local_440;
  longlong local_438;
  ulonglong local_430;
  longlong local_428 [5];
  undefined4 local_400;
  undefined4 uStack_3fc;
  longlong local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  longlong local_3d8;
  longlong local_3c8;
  ulonglong uStack_3c0;
  longlong local_3b8;
  longlong lStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined4 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  LARGE_INTEGER local_368;
  undefined4 local_360;
  longlong local_358;
  longlong lStack_350;
  longlong local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  longlong local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 local_2f0;
  undefined4 local_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined8 local_2dc;
  undefined8 local_2d4;
  undefined8 uStack_2cc;
  undefined8 local_2c4;
  undefined8 uStack_2bc;
  undefined8 local_2b4;
  undefined8 uStack_2ac;
  undefined8 local_2a4;
  undefined8 uStack_29c;
  undefined4 local_294;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_f8;
  undefined4 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  local_438 = param_6[0x72].QuadPart;
  local_450 = param_3;
  if (local_438 == 0) {
    local_440 = -1;
  }
  else {
    QueryPerformanceCounter(&local_368);
    local_440 = CONCAT44(local_368.s.HighPart,local_368.s.LowPart);
  }
  local_470 = param_5[0x22];
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_3b8 = 0;
  lStack_3b0 = 0;
  local_398 = 0xffffffff;
  local_390 = 0;
  uStack_388 = 0;
  local_380 = 0;
  uStack_378 = 0;
  local_370 = 0xffffffff00000000;
  local_4c8 = *(longlong *)(param_1 + 8);
  local_4c0 = param_6;
  local_4b8 = CONCAT44(local_4b8._4_4_,2);
  FUN_1447f79ee(param_1);
  if (lStack_3b0 == 0) goto LAB_1400ff095;
  if (local_3a8._4_1_ == '\x01') {
    uVar14 = (ulonglong)(int)param_2[1];
    if ((longlong)uVar14 < 1) goto LAB_1400ff095;
    uVar22 = 0;
    bVar26 = false;
    do {
      if ((((param_4 >> ((uint)uVar22 & 0x1f) & 1) != 0) &&
          (lVar15 = *(longlong *)(*param_2 + uVar22 * 8), *(longlong *)(lVar15 + 0x23e0) == 0)) &&
         (((*(byte *)((longlong)param_6 + 0x72) & 1) != 0 || (*(longlong *)(lVar15 + 0x20) == 0))))
      break;
      uVar22 = uVar22 + 1;
      bVar26 = uVar14 <= uVar22;
    } while (uVar22 != uVar14);
    if (bVar26) goto LAB_1400ff095;
  }
  FUN_1448712b0(param_1,local_470,&local_3b8,param_5[0x21]);
  iVar12 = (int)param_2[1];
  if (0 < iVar12) {
    uVar14 = 0;
    local_48c = param_4;
    local_480 = param_2;
    local_478 = param_1;
    do {
      if ((((param_4 >> ((uint)uVar14 & 0x1f) & 1) != 0) &&
          ((lVar15 = *(longlong *)(*param_2 + uVar14 * 8), *(char *)(lVar15 + 0x23f2) != '\x01' ||
           (*(uint *)(lVar15 + 0x1dd0) < 2)))) &&
         ((local_3a8._4_1_ != '\x01' ||
          ((*(longlong *)(lVar15 + 0x23e0) == 0 &&
           ((*(longlong *)(lVar15 + 0x20) == 0 || ((*(byte *)((longlong)param_6 + 0x72) & 1) != 0)))
           ))))) {
        if ((*(char *)(param_1 + 0x120) == '\x01') && ((*(byte *)(param_1 + 0x13c) & 0x40) != 0)) {
          LVar4 = param_6[0x2e];
          LVar5 = param_6[0x2c];
          LVar6 = param_6[0x2d];
          LVar32 = LVar6;
          LVar31 = LVar5;
          if (((-1 < *(int *)(param_1 + 0x198)) &&
              (*(int *)(param_1 + 0x198) < *(int *)(local_3b8 + 0x60))) &&
             (((*(byte *)(param_1 + 0xf0) & 1) != 0 || (*(char *)(param_6 + 0x71) == '\x01')))) {
            LVar31.s = (_struct_19)
                       ((double)LVar4 * (double)param_6[0x28] +
                        (double)LVar6 * (double)param_6[0x24] +
                        (double)LVar5 * (double)param_6[0x20] + param_6[0x2c]);
            LVar32.s = (_struct_19)
                       ((double)LVar4 * (double)param_6[0x29] +
                        (double)LVar6 * (double)param_6[0x25] +
                        (double)LVar5 * (double)param_6[0x21] + param_6[0x2d]);
            LVar4.s = (_struct_19)
                      ((double)LVar4 * (double)param_6[0x2a] +
                       (double)LVar6 * (double)param_6[0x26] + (double)LVar5 * (double)param_6[0x22]
                      + param_6[0x2e]);
          }
          fVar29 = *(float *)((longlong)param_6 + 0x38c);
          if (0.0 <= fVar29) {
            fVar29 = fVar29 * fVar29;
          }
          else {
            dVar30 = *(double *)(lVar15 + 0x1048) - (double)LVar31;
            dVar28 = *(double *)(lVar15 + 0x1050) - (double)LVar32;
            dVar27 = *(double *)(lVar15 + 0x1058) - (double)LVar4;
            fVar29 = (float)(dVar27 * dVar27 + dVar28 * dVar28 + dVar30 * dVar30);
          }
          if ((fVar29 < *(float *)(param_1 + 0x150) * *(float *)(param_1 + 0x150)) ||
             (*(float *)(param_1 + 0x154) * *(float *)(param_1 + 0x154) < fVar29))
          goto LAB_1400febf3;
        }
        local_3c8 = 0;
        uStack_3c0 = 0;
        local_498 = uVar14;
        if (*(char *)(param_1 + 0xf4) == '\0') {
          uStack_3c0 = 1;
          FUN_1447d253c(&local_3c8,0);
          uVar13 = 1;
          FUN_144b37ece(local_3c8);
        }
        else {
          uVar8 = *(uint *)(lStack_3b0 + 0x180);
          if ((int)uVar8 < 1) {
            uVar13 = 0;
            if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(uVar8);
            }
          }
          else {
            uStack_3c0 = (ulonglong)uVar8;
            FUN_1447d253c(&local_3c8,0);
            FUN_144b37ece(local_3c8);
            uVar13 = uVar8;
          }
        }
        local_368.s.LowPart = 0;
        local_368.s.HighPart = local_368.s.HighPart & 0xffffff00;
        local_360 = 0xffffffff;
        local_330 = 0;
        local_338 = 0;
        local_348 = 0;
        uStack_340 = 0;
        local_358 = 0;
        lStack_350 = 0;
        local_328 = 0xffffffffffffffff;
        local_300 = 0;
        local_310 = 0;
        uStack_308 = 0;
        local_320 = 0;
        uStack_318 = 0;
        local_2f8 = 0x3ff0000000000000;
        local_2f0 = 0;
        local_2ec = 0xffffffff;
        uStack_2e8 = 0xffffffff;
        uStack_2e4 = 0xffffffff;
        uStack_2e0 = 0xffffffff;
        local_2dc = 0xffffffff00000000;
        local_2a4 = 0;
        uStack_29c = 0;
        local_2b4 = 0;
        uStack_2ac = 0;
        local_2c4 = 0;
        uStack_2bc = 0;
        local_2d4 = 0;
        uStack_2cc = 0;
        local_294 = 0x7f7fffff;
        local_288 = 0x4000000000000000;
        uStack_280 = 0x3f800000;
        local_f8 = 0xc00000000;
        local_e8 = 0;
        local_e0 = 0;
        local_d8 = 0xffffffffffffffff;
        local_d0 = 0xffffffff;
        local_c8 = 0;
        local_460 = lVar15;
        if (uVar13 == 1) {
          if ((local_3a8._6_1_ != '\0') || (local_3a8._7_1_ == '\x01')) {
            local_4c0 = &local_368;
            FUN_143ab9d3a(param_1,&local_3b8,param_6,lVar15);
          }
          lVar15 = FUN_144af26ca(param_5[0x1d]);
          uVar13 = 1;
          if (*(char *)(param_1 + 0x120) == '\0') {
            uVar13 = *(uint *)(lStack_3b0 + 0x120);
          }
          lVar24 = *(longlong *)(lVar15 + 0x168);
          if (lVar24 != 0) {
            *(undefined8 *)(lVar15 + 0x168) = 0;
            LOCK();
            puVar1 = (uint *)(lVar24 + 8);
            uVar8 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar8 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(lVar24 + 8);
              LOCK();
              uVar8 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar8 >> 0x1e & 1) == 0) {
                bVar7 = *(byte *)(lVar24 + 0xd);
                plVar16 = (longlong *)FUN_14001cc68(0x10,8);
                plVar16[1] = lVar24;
                plVar20 = DAT_14ca843c0;
                plVar19 = DAT_14ca843c8;
                if ((bVar7 & 2) == 0) {
                  do {
                    *plVar16 = (longlong)plVar20;
                    LOCK();
                    bVar26 = plVar20 != DAT_14ca843c0;
                    plVar19 = plVar16;
                    if (bVar26) {
                      plVar20 = DAT_14ca843c0;
                      plVar19 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar19;
                    UNLOCK();
                  } while (bVar26);
                }
                else {
                  do {
                    *plVar16 = (longlong)plVar19;
                    LOCK();
                    bVar26 = plVar19 != DAT_14ca843c8;
                    plVar20 = plVar16;
                    if (bVar26) {
                      plVar19 = DAT_14ca843c8;
                      plVar20 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar20;
                    UNLOCK();
                  } while (bVar26);
                }
              }
            }
          }
          uVar14 = local_498;
          *(undefined4 *)(lVar15 + 0x170) = 0xffffffff;
          plVar20 = (longlong *)param_6[0x5f].QuadPart;
          if (local_3a8._7_1_ == '\0') {
            if (local_3a8._6_1_ != '\0') {
              iVar12 = -1;
              if (local_3a8._5_1_ == '\0') goto LAB_1400fe68b;
              goto LAB_1400fdb76;
            }
          }
          else if (local_3a8._5_1_ == '\0') {
LAB_1400fe68b:
            local_3e8 = 0;
            uStack_3e0 = 0;
            lVar24 = param_5[0x21];
            *(longlong *)(lVar24 + 0x40) = *(longlong *)(lVar24 + 0x40) + (ulonglong)uVar13;
            FUN_1431f2978(lVar24,&local_400,*(undefined8 *)(lVar24 + 0x38),uVar13);
            local_3d8 = local_3f0;
            local_3e8 = CONCAT44(uStack_3fc,local_400);
            uVar13 = FUN_143aa4dee(&local_368,lStack_3b0,&local_3e8);
            lVar24 = local_3d8;
            if (local_3d8 == 0) {
              lVar18 = *(longlong *)(lVar15 + 0x168);
              if (lVar18 == 0) {
                *(undefined4 *)(lVar15 + 0x170) = 0;
                goto LAB_1400fe854;
              }
              *(undefined8 *)(lVar15 + 0x168) = 0;
LAB_1400fe783:
              LOCK();
              puVar1 = (uint *)(lVar18 + 8);
              uVar8 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar8 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(lVar18 + 8);
                LOCK();
                uVar8 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar8 >> 0x1e & 1) == 0) {
                  bVar7 = *(byte *)(lVar18 + 0xd);
                  plVar16 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar16[1] = lVar18;
                  plVar20 = DAT_14ca843c0;
                  plVar19 = DAT_14ca843c8;
                  uVar14 = local_498;
                  if ((bVar7 & 2) == 0) {
                    do {
                      *plVar16 = (longlong)plVar20;
                      LOCK();
                      bVar26 = plVar20 != DAT_14ca843c0;
                      plVar19 = plVar16;
                      if (bVar26) {
                        plVar20 = DAT_14ca843c0;
                        plVar19 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar19;
                      UNLOCK();
                    } while (bVar26);
                  }
                  else {
                    do {
                      *plVar16 = (longlong)plVar19;
                      LOCK();
                      bVar26 = plVar19 != DAT_14ca843c8;
                      plVar20 = plVar16;
                      if (bVar26) {
                        plVar19 = DAT_14ca843c8;
                        plVar20 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar20;
                      UNLOCK();
                    } while (bVar26);
                  }
                }
              }
              *(undefined4 *)(lVar15 + 0x170) = 0;
              if (lVar24 == 0) goto LAB_1400fe854;
            }
            else {
              LOCK();
              *(int *)(local_3d8 + 8) = *(int *)(local_3d8 + 8) + 1;
              UNLOCK();
              lVar18 = *(longlong *)(lVar15 + 0x168);
              if (lVar18 != local_3d8) {
                *(longlong *)(lVar15 + 0x168) = local_3d8;
                LOCK();
                *(int *)(local_3d8 + 8) = *(int *)(local_3d8 + 8) + 1;
                UNLOCK();
                if (lVar18 != 0) goto LAB_1400fe783;
              }
              *(undefined4 *)(lVar15 + 0x170) = 0;
            }
            LOCK();
            puVar1 = (uint *)(lVar24 + 8);
            uVar8 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar8 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(lVar24 + 8);
              LOCK();
              uVar8 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar8 >> 0x1e & 1) == 0) {
                bVar7 = *(byte *)(lVar24 + 0xd);
                plVar16 = (longlong *)FUN_14001cc68(0x10,8);
                plVar16[1] = lVar24;
                plVar20 = DAT_14ca843c0;
                plVar19 = DAT_14ca843c8;
                uVar14 = local_498;
                if ((bVar7 & 2) == 0) {
                  do {
                    *plVar16 = (longlong)plVar20;
                    LOCK();
                    bVar26 = plVar20 != DAT_14ca843c0;
                    plVar19 = plVar16;
                    if (bVar26) {
                      plVar20 = DAT_14ca843c0;
                      plVar19 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar19;
                    UNLOCK();
                  } while (bVar26);
                }
                else {
                  do {
                    *plVar16 = (longlong)plVar19;
                    LOCK();
                    bVar26 = plVar19 != DAT_14ca843c8;
                    plVar20 = plVar16;
                    if (bVar26) {
                      plVar19 = DAT_14ca843c8;
                      plVar20 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar20;
                    UNLOCK();
                  } while (bVar26);
                }
              }
            }
          }
          else {
            LOCK();
            plVar19 = plVar20 + 9;
            iVar12 = (int)*plVar19;
            *(int *)plVar19 = (int)*plVar19 + 1;
            UNLOCK();
LAB_1400fdb76:
            local_328 = CONCAT44(iVar12,(undefined4)local_328);
            cVar11 = (**(code **)(*plVar20 + 0xe0))(plVar20,local_470,&local_368);
            if (cVar11 != '\0') {
              uVar23 = (undefined4)local_d8;
              lVar24 = *(longlong *)(lVar15 + 0x168);
              if (lVar24 != local_e0) {
                *(longlong *)(lVar15 + 0x168) = local_e0;
                if (local_e0 != 0) {
                  LOCK();
                  *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
                  UNLOCK();
                }
                if (lVar24 != 0) {
                  LOCK();
                  puVar1 = (uint *)(lVar24 + 8);
                  uVar8 = *puVar1;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  if ((uVar8 & 0x3fffffff) == 1) {
                    puVar1 = (uint *)(lVar24 + 8);
                    LOCK();
                    uVar8 = *puVar1;
                    *puVar1 = *puVar1 | 0x40000000;
                    UNLOCK();
                    if ((uVar8 >> 0x1e & 1) == 0) {
                      bVar7 = *(byte *)(lVar24 + 0xd);
                      plVar16 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar16[1] = lVar24;
                      plVar20 = DAT_14ca843c0;
                      plVar19 = DAT_14ca843c8;
                      uVar14 = local_498;
                      if ((bVar7 & 2) == 0) {
                        do {
                          *plVar16 = (longlong)plVar20;
                          LOCK();
                          bVar26 = plVar20 != DAT_14ca843c0;
                          plVar19 = plVar16;
                          if (bVar26) {
                            plVar20 = DAT_14ca843c0;
                            plVar19 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar19;
                          UNLOCK();
                        } while (bVar26);
                      }
                      else {
                        do {
                          *plVar16 = (longlong)plVar19;
                          LOCK();
                          bVar26 = plVar19 != DAT_14ca843c8;
                          plVar20 = plVar16;
                          if (bVar26) {
                            plVar19 = DAT_14ca843c8;
                            plVar20 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar20;
                          UNLOCK();
                        } while (bVar26);
                      }
                    }
                  }
                }
              }
              *(undefined4 *)(lVar15 + 0x170) = uVar23;
            }
          }
LAB_1400fe854:
          if (uVar13 != 0) {
            lVar25 = lVar15 + 8;
            FUN_14475e90a(param_1,local_470,&local_3b8,lVar25);
            local_4c0 = param_6;
            local_4c8 = local_450;
            local_4b8 = lVar25;
            FUN_144af0d8a(param_1,&local_3e8,&local_3b8,local_460);
            lVar18 = local_3e8;
            lVar24 = *(longlong *)(lVar15 + 0x178);
            *(longlong *)(lVar15 + 0x178) = local_3e8;
            local_3e8 = 0;
            if (lVar24 != 0) {
              LOCK();
              puVar1 = (uint *)(lVar24 + 8);
              uVar8 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar8 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(lVar24 + 8);
                LOCK();
                uVar8 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar8 >> 0x1e & 1) == 0) {
                  bVar7 = *(byte *)(lVar24 + 0xd);
                  plVar16 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar16[1] = lVar24;
                  plVar20 = DAT_14ca843c0;
                  plVar19 = DAT_14ca843c8;
                  if ((bVar7 & 2) == 0) {
                    do {
                      *plVar16 = (longlong)plVar20;
                      LOCK();
                      bVar26 = plVar20 != DAT_14ca843c0;
                      plVar19 = plVar16;
                      if (bVar26) {
                        plVar20 = DAT_14ca843c0;
                        plVar19 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar19;
                      UNLOCK();
                    } while (bVar26);
                  }
                  else {
                    do {
                      *plVar16 = (longlong)plVar19;
                      LOCK();
                      bVar26 = plVar19 != DAT_14ca843c8;
                      plVar20 = plVar16;
                      if (bVar26) {
                        plVar19 = DAT_14ca843c8;
                        plVar20 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar20;
                      UNLOCK();
                    } while (bVar26);
                  }
                }
              }
              lVar24 = local_3e8;
              if (local_3e8 != 0) {
                LOCK();
                puVar1 = (uint *)(local_3e8 + 8);
                uVar8 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar8 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(local_3e8 + 8);
                  LOCK();
                  uVar8 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar8 >> 0x1e & 1) == 0) {
                    bVar7 = *(byte *)(local_3e8 + 0xd);
                    plVar16 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar16[1] = lVar24;
                    plVar20 = DAT_14ca843c0;
                    plVar19 = DAT_14ca843c8;
                    if ((bVar7 & 2) == 0) {
                      do {
                        *plVar16 = (longlong)plVar20;
                        LOCK();
                        bVar26 = plVar20 != DAT_14ca843c0;
                        plVar19 = plVar16;
                        if (bVar26) {
                          plVar20 = DAT_14ca843c0;
                          plVar19 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar19;
                        UNLOCK();
                      } while (bVar26);
                    }
                    else {
                      do {
                        *plVar16 = (longlong)plVar19;
                        LOCK();
                        bVar26 = plVar19 != DAT_14ca843c8;
                        plVar20 = plVar16;
                        if (bVar26) {
                          plVar19 = DAT_14ca843c8;
                          plVar20 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar20;
                        UNLOCK();
                      } while (bVar26);
                    }
                  }
                }
              }
              lVar18 = *(longlong *)(lVar15 + 0x178);
            }
            lVar24 = *(longlong *)(lVar15 + 0x148);
            if (lVar24 != lVar18) {
              *(longlong *)(lVar15 + 0x148) = lVar18;
              if (lVar18 != 0) {
                LOCK();
                *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
                UNLOCK();
              }
              if (lVar24 != 0) {
                LOCK();
                puVar1 = (uint *)(lVar24 + 8);
                uVar8 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar8 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(lVar24 + 8);
                  LOCK();
                  uVar8 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar8 >> 0x1e & 1) == 0) {
                    bVar7 = *(byte *)(lVar24 + 0xd);
                    plVar16 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar16[1] = lVar24;
                    plVar20 = DAT_14ca843c0;
                    plVar19 = DAT_14ca843c8;
                    if ((bVar7 & 2) == 0) {
                      do {
                        *plVar16 = (longlong)plVar20;
                        LOCK();
                        bVar26 = plVar20 != DAT_14ca843c0;
                        plVar19 = plVar16;
                        if (bVar26) {
                          plVar20 = DAT_14ca843c0;
                          plVar19 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar19;
                        UNLOCK();
                      } while (bVar26);
                    }
                    else {
                      do {
                        *plVar16 = (longlong)plVar19;
                        LOCK();
                        bVar26 = plVar19 != DAT_14ca843c8;
                        plVar20 = plVar16;
                        if (bVar26) {
                          plVar19 = DAT_14ca843c8;
                          plVar20 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar20;
                        UNLOCK();
                      } while (bVar26);
                    }
                  }
                }
              }
            }
            local_488 = CONCAT44(local_488._4_4_,uVar13);
            iVar12 = local_328._4_4_;
            if (local_328._4_4_ == -1) {
              iVar12 = *(int *)(lStack_3b0 + 0x5c);
            }
            iVar21 = (int)param_5[1];
            iVar9 = (int)param_5[2];
            iVar10 = (iVar9 + 0x44) / 0x44;
            *(int *)(param_5 + 2) = iVar9 + 1;
            if (iVar21 < iVar10) {
              do {
                local_468 = lVar25;
                local_458 = CONCAT44(local_458._4_4_,iVar21);
                lVar15 = FUN_14001cc68(0x3fc0,0x10);
                lVar24 = 0;
                do {
                  *(undefined8 *)(lVar15 + 0xa8 + lVar24) = 0;
                  puVar2 = (undefined8 *)(lVar15 + 0xb8 + lVar24);
                  *puVar2 = 0;
                  puVar2[1] = 0;
                  *(undefined8 *)(lVar15 + 200 + lVar24) = 0;
                  *(undefined8 *)(lVar15 + 0xd0 + lVar24) = 0xffffffff;
                  *(undefined8 *)(lVar15 + 0xd8 + lVar24) = 0xff0000ffffffff;
                  *(undefined1 *)(lVar15 + 0xe0 + lVar24) = 0;
                  *(undefined4 *)(lVar15 + 0xe4 + lVar24) = 0x40c00f07;
                  pbVar3 = (byte *)(lVar15 + 0xe8 + lVar24);
                  *pbVar3 = *pbVar3 & 0xfc;
                  *(undefined1 **)(lVar15 + 0xb0 + lVar24) = &DAT_100000001;
                  FUN_14470b9e0(lVar24 + lVar15,1);
                  lVar24 = lVar24 + 0xf0;
                } while (lVar24 != 0x3fc0);
                iVar21 = (int)param_5[1];
                *(uint *)(param_5 + 1) = iVar21 + 1U;
                if (*(uint *)((longlong)param_5 + 0xc) < iVar21 + 1U) {
                  FUN_14002baf6(param_5,iVar21);
                }
                *(longlong *)(*param_5 + (longlong)iVar21 * 8) = lVar15;
                iVar21 = (int)local_458 + 1;
                uVar14 = local_498;
                param_1 = local_478;
                lVar25 = local_468;
              } while (iVar21 != iVar10);
            }
            lVar15 = (ulonglong)(uint)(iVar9 % 0x44) * 0xf0 +
                     *(longlong *)(*param_5 + (longlong)(iVar9 / 0x44) * 8);
            local_4a0 = local_3a8._7_1_;
            local_4b0 = (undefined4)local_488;
            local_4c0 = param_6;
            local_4c8 = local_460;
            local_4b8 = lVar25;
            local_4a8 = iVar12;
            FUN_143aba726(param_1,local_470,&local_3b8,lVar15);
            FUN_1436a14f8(param_5,uVar14 & 0xffffffff,lVar15);
            param_2 = local_480;
            param_4 = local_48c;
          }
        }
        else {
          uVar14 = (ulonglong)uVar13;
          local_458 = uVar14;
          if (local_3a8._6_1_ == '\0') {
            if ((uVar13 != 0) && (local_3a8._7_1_ != '\0')) goto LAB_1400fdc5f;
          }
          else if (uVar13 != 0) {
LAB_1400fdc5f:
            lVar24 = 0;
            uVar22 = 0;
            do {
              local_4c0 = (LARGE_INTEGER *)(local_3c8 + lVar24);
              local_4b8 = CONCAT44(local_4b8._4_4_,(int)uVar22);
              FUN_143aba1b2(param_1,&local_3b8,param_6,lVar15);
              uVar22 = uVar22 + 1;
              lVar24 = lVar24 + 0x2b0;
            } while (uVar14 != uVar22);
          }
          local_428[2] = 0;
          local_428[3] = 0;
          FUN_14049c370(local_428 + 2,uVar13,1);
          local_428[0] = 0;
          local_428[1] = 0;
          FUN_14049c54e(local_428,uVar13,1);
          if (0 < (int)uVar13) {
            uVar22 = 0;
            do {
              uVar17 = FUN_144af26ca(param_5[0x1d]);
              *(undefined8 *)(local_428[2] + uVar22 * 8) = uVar17;
              *(longlong *)(local_428[0] + uVar22 * 8) =
                   *(longlong *)(local_428[2] + uVar22 * 8) + 8;
              uVar22 = uVar22 + 1;
            } while (uVar14 != uVar22);
            uVar14 = 0;
            do {
              local_488 = *(longlong *)(local_428[0] + uVar14 * 8);
              lVar15 = *(longlong *)(local_428[2] + uVar14 * 8);
              FUN_144af096e(&local_368,uVar14 * 0x2b0 + local_3c8);
              uVar22 = 1;
              if ((*(char *)(param_1 + 0x120) == '\0') &&
                 (uVar22 = 0, (longlong)uVar14 < (longlong)*(int *)(lStack_3b0 + 0x168))) {
                uVar22 = (ulonglong)*(uint *)(*(longlong *)(lStack_3b0 + 0x160) + uVar14 * 4);
              }
              lVar24 = *(longlong *)(local_488 + 0x160);
              if (lVar24 != 0) {
                *(undefined8 *)(local_488 + 0x160) = 0;
                LOCK();
                puVar1 = (uint *)(lVar24 + 8);
                uVar13 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar13 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(lVar24 + 8);
                  LOCK();
                  uVar13 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar13 >> 0x1e & 1) == 0) {
                    bVar7 = *(byte *)(lVar24 + 0xd);
                    plVar16 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar16[1] = lVar24;
                    plVar20 = DAT_14ca843c0;
                    plVar19 = DAT_14ca843c8;
                    if ((bVar7 & 2) == 0) {
                      do {
                        *plVar16 = (longlong)plVar20;
                        LOCK();
                        bVar26 = plVar20 != DAT_14ca843c0;
                        plVar19 = plVar16;
                        if (bVar26) {
                          plVar20 = DAT_14ca843c0;
                          plVar19 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar19;
                        UNLOCK();
                      } while (bVar26);
                    }
                    else {
                      do {
                        *plVar16 = (longlong)plVar19;
                        LOCK();
                        bVar26 = plVar19 != DAT_14ca843c8;
                        plVar20 = plVar16;
                        if (bVar26) {
                          plVar19 = DAT_14ca843c8;
                          plVar20 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar20;
                        UNLOCK();
                      } while (bVar26);
                    }
                  }
                }
              }
              *(undefined4 *)(local_488 + 0x168) = 0xffffffff;
              plVar20 = (longlong *)param_6[0x5f].QuadPart;
              if (local_3a8._7_1_ == '\0') {
                if (local_3a8._6_1_ != '\0') {
                  iVar12 = -1;
                  if (local_3a8._5_1_ == '\0') goto LAB_1400fdf5c;
                  goto LAB_1400fde62;
                }
              }
              else if (local_3a8._5_1_ == '\0') {
LAB_1400fdf5c:
                local_3e8 = 0;
                uStack_3e0 = 0;
                lVar24 = param_5[0x21];
                *(longlong *)(lVar24 + 0x40) = *(longlong *)(lVar24 + 0x40) + uVar22;
                FUN_1431f2978(lVar24,&local_400,*(undefined8 *)(lVar24 + 0x38));
                local_3d8 = local_3f0;
                local_3e8 = CONCAT44(uStack_3fc,local_400);
                uVar13 = FUN_143aa4dee(&local_368,lStack_3b0,&local_3e8);
                lVar24 = local_3d8;
                uVar22 = (ulonglong)uVar13;
                if (local_3d8 == 0) {
                  lVar18 = *(longlong *)(local_488 + 0x160);
                  if (lVar18 == 0) {
                    *(undefined4 *)(local_488 + 0x168) = 0;
                    goto LAB_1400fe138;
                  }
                  *(undefined8 *)(local_488 + 0x160) = 0;
LAB_1400fe039:
                  LOCK();
                  puVar1 = (uint *)(lVar18 + 8);
                  uVar8 = *puVar1;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  if ((uVar8 & 0x3fffffff) == 1) {
                    puVar1 = (uint *)(lVar18 + 8);
                    LOCK();
                    uVar8 = *puVar1;
                    *puVar1 = *puVar1 | 0x40000000;
                    UNLOCK();
                    if ((uVar8 >> 0x1e & 1) == 0) {
                      bVar7 = *(byte *)(lVar18 + 0xd);
                      plVar16 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar16[1] = lVar18;
                      plVar20 = DAT_14ca843c0;
                      plVar19 = DAT_14ca843c8;
                      if ((bVar7 & 2) == 0) {
                        do {
                          *plVar16 = (longlong)plVar20;
                          LOCK();
                          bVar26 = plVar20 != DAT_14ca843c0;
                          plVar19 = plVar16;
                          if (bVar26) {
                            plVar20 = DAT_14ca843c0;
                            plVar19 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar19;
                          UNLOCK();
                        } while (bVar26);
                      }
                      else {
                        do {
                          *plVar16 = (longlong)plVar19;
                          LOCK();
                          bVar26 = plVar19 != DAT_14ca843c8;
                          plVar20 = plVar16;
                          if (bVar26) {
                            plVar19 = DAT_14ca843c8;
                            plVar20 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar20;
                          UNLOCK();
                        } while (bVar26);
                      }
                    }
                  }
                  uVar22 = (ulonglong)uVar13;
                  *(undefined4 *)(local_488 + 0x168) = 0;
                  if (lVar24 == 0) goto LAB_1400fe138;
                }
                else {
                  LOCK();
                  *(int *)(local_3d8 + 8) = *(int *)(local_3d8 + 8) + 1;
                  UNLOCK();
                  lVar18 = *(longlong *)(local_488 + 0x160);
                  if (lVar18 != local_3d8) {
                    *(longlong *)(local_488 + 0x160) = local_3d8;
                    LOCK();
                    *(int *)(local_3d8 + 8) = *(int *)(local_3d8 + 8) + 1;
                    UNLOCK();
                    if (lVar18 != 0) goto LAB_1400fe039;
                  }
                  *(undefined4 *)(local_488 + 0x168) = 0;
                }
                uVar22 = (ulonglong)uVar13;
                LOCK();
                puVar1 = (uint *)(lVar24 + 8);
                uVar13 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar13 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(lVar24 + 8);
                  LOCK();
                  uVar13 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar13 >> 0x1e & 1) == 0) {
                    bVar7 = *(byte *)(lVar24 + 0xd);
                    plVar16 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar16[1] = lVar24;
                    plVar20 = DAT_14ca843c0;
                    plVar19 = DAT_14ca843c8;
                    if ((bVar7 & 2) == 0) {
                      do {
                        *plVar16 = (longlong)plVar20;
                        LOCK();
                        bVar26 = plVar20 != DAT_14ca843c0;
                        plVar19 = plVar16;
                        if (bVar26) {
                          plVar20 = DAT_14ca843c0;
                          plVar19 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar19;
                        UNLOCK();
                      } while (bVar26);
                    }
                    else {
                      do {
                        *plVar16 = (longlong)plVar19;
                        LOCK();
                        bVar26 = plVar19 != DAT_14ca843c8;
                        plVar20 = plVar16;
                        if (bVar26) {
                          plVar19 = DAT_14ca843c8;
                          plVar20 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar20;
                        UNLOCK();
                      } while (bVar26);
                    }
                  }
                }
              }
              else {
                LOCK();
                plVar19 = plVar20 + 9;
                iVar12 = (int)*plVar19;
                *(int *)plVar19 = (int)*plVar19 + 1;
                UNLOCK();
LAB_1400fde62:
                local_328 = CONCAT44(iVar12,(undefined4)local_328);
                local_e8 = 0;
                if ((longlong)uVar14 < (longlong)*(int *)(lStack_3b0 + 400)) {
                  local_e8 = *(undefined4 *)(*(longlong *)(lStack_3b0 + 0x188) + uVar14 * 4);
                }
                cVar11 = (**(code **)(*plVar20 + 0xe0))(plVar20,local_470,&local_368);
                if (cVar11 != '\0') {
                  uVar23 = (undefined4)local_d8;
                  lVar24 = *(longlong *)(local_488 + 0x160);
                  if (lVar24 != local_e0) {
                    *(longlong *)(local_488 + 0x160) = local_e0;
                    if (local_e0 != 0) {
                      LOCK();
                      *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
                      UNLOCK();
                    }
                    if (lVar24 != 0) {
                      LOCK();
                      puVar1 = (uint *)(lVar24 + 8);
                      uVar13 = *puVar1;
                      *puVar1 = *puVar1 - 1;
                      UNLOCK();
                      if ((uVar13 & 0x3fffffff) == 1) {
                        puVar1 = (uint *)(lVar24 + 8);
                        LOCK();
                        uVar13 = *puVar1;
                        *puVar1 = *puVar1 | 0x40000000;
                        UNLOCK();
                        if ((uVar13 >> 0x1e & 1) == 0) {
                          bVar7 = *(byte *)(lVar24 + 0xd);
                          plVar16 = (longlong *)FUN_14001cc68(0x10,8);
                          plVar16[1] = lVar24;
                          plVar20 = DAT_14ca843c0;
                          plVar19 = DAT_14ca843c8;
                          if ((bVar7 & 2) == 0) {
                            do {
                              *plVar16 = (longlong)plVar20;
                              LOCK();
                              bVar26 = plVar20 != DAT_14ca843c0;
                              plVar19 = plVar16;
                              if (bVar26) {
                                plVar20 = DAT_14ca843c0;
                                plVar19 = DAT_14ca843c0;
                              }
                              DAT_14ca843c0 = plVar19;
                              UNLOCK();
                            } while (bVar26);
                          }
                          else {
                            do {
                              *plVar16 = (longlong)plVar19;
                              LOCK();
                              bVar26 = plVar19 != DAT_14ca843c8;
                              plVar20 = plVar16;
                              if (bVar26) {
                                plVar19 = DAT_14ca843c8;
                                plVar20 = DAT_14ca843c8;
                              }
                              DAT_14ca843c8 = plVar20;
                              UNLOCK();
                            } while (bVar26);
                          }
                        }
                      }
                    }
                  }
                  *(undefined4 *)(local_488 + 0x168) = uVar23;
                }
              }
LAB_1400fe138:
              lVar24 = local_488;
              if ((int)uVar22 != 0) {
                local_468 = CONCAT44(local_468._4_4_,(int)uVar22);
                FUN_14475e90a(param_1,local_470,&local_3b8,local_488);
                local_4c8 = local_450;
                local_4c0 = param_6;
                local_4b8 = lVar24;
                FUN_144af0d8a(param_1,&local_3e8,&local_3b8,local_460);
                lVar18 = local_3e8;
                lVar24 = *(longlong *)(lVar15 + 0x178);
                *(longlong *)(lVar15 + 0x178) = local_3e8;
                local_3e8 = 0;
                if (lVar24 != 0) {
                  LOCK();
                  puVar1 = (uint *)(lVar24 + 8);
                  uVar13 = *puVar1;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  if ((uVar13 & 0x3fffffff) == 1) {
                    puVar1 = (uint *)(lVar24 + 8);
                    LOCK();
                    uVar13 = *puVar1;
                    *puVar1 = *puVar1 | 0x40000000;
                    UNLOCK();
                    if ((uVar13 >> 0x1e & 1) == 0) {
                      bVar7 = *(byte *)(lVar24 + 0xd);
                      plVar16 = (longlong *)FUN_14001cc68(0x10,8);
                      plVar16[1] = lVar24;
                      plVar20 = DAT_14ca843c0;
                      plVar19 = DAT_14ca843c8;
                      if ((bVar7 & 2) == 0) {
                        do {
                          *plVar16 = (longlong)plVar20;
                          LOCK();
                          bVar26 = plVar20 != DAT_14ca843c0;
                          plVar19 = plVar16;
                          if (bVar26) {
                            plVar20 = DAT_14ca843c0;
                            plVar19 = DAT_14ca843c0;
                          }
                          DAT_14ca843c0 = plVar19;
                          UNLOCK();
                        } while (bVar26);
                      }
                      else {
                        do {
                          *plVar16 = (longlong)plVar19;
                          LOCK();
                          bVar26 = plVar19 != DAT_14ca843c8;
                          plVar20 = plVar16;
                          if (bVar26) {
                            plVar19 = DAT_14ca843c8;
                            plVar20 = DAT_14ca843c8;
                          }
                          DAT_14ca843c8 = plVar20;
                          UNLOCK();
                        } while (bVar26);
                      }
                    }
                  }
                  lVar24 = local_3e8;
                  if (local_3e8 != 0) {
                    LOCK();
                    puVar1 = (uint *)(local_3e8 + 8);
                    uVar13 = *puVar1;
                    *puVar1 = *puVar1 - 1;
                    UNLOCK();
                    if ((uVar13 & 0x3fffffff) == 1) {
                      puVar1 = (uint *)(local_3e8 + 8);
                      LOCK();
                      uVar13 = *puVar1;
                      *puVar1 = *puVar1 | 0x40000000;
                      UNLOCK();
                      if ((uVar13 >> 0x1e & 1) == 0) {
                        bVar7 = *(byte *)(local_3e8 + 0xd);
                        plVar16 = (longlong *)FUN_14001cc68(0x10,8);
                        plVar16[1] = lVar24;
                        plVar20 = DAT_14ca843c0;
                        plVar19 = DAT_14ca843c8;
                        if ((bVar7 & 2) == 0) {
                          do {
                            *plVar16 = (longlong)plVar20;
                            LOCK();
                            bVar26 = plVar20 != DAT_14ca843c0;
                            plVar19 = plVar16;
                            if (bVar26) {
                              plVar20 = DAT_14ca843c0;
                              plVar19 = DAT_14ca843c0;
                            }
                            DAT_14ca843c0 = plVar19;
                            UNLOCK();
                          } while (bVar26);
                        }
                        else {
                          do {
                            *plVar16 = (longlong)plVar19;
                            LOCK();
                            bVar26 = plVar19 != DAT_14ca843c8;
                            plVar20 = plVar16;
                            if (bVar26) {
                              plVar19 = DAT_14ca843c8;
                              plVar20 = DAT_14ca843c8;
                            }
                            DAT_14ca843c8 = plVar20;
                            UNLOCK();
                          } while (bVar26);
                        }
                      }
                    }
                  }
                  lVar18 = *(longlong *)(lVar15 + 0x178);
                }
                lVar15 = *(longlong *)(local_488 + 0x140);
                uVar23 = (undefined4)local_468;
                if (lVar15 != lVar18) {
                  *(longlong *)(local_488 + 0x140) = lVar18;
                  if (lVar18 != 0) {
                    LOCK();
                    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
                    UNLOCK();
                  }
                  if (lVar15 != 0) {
                    LOCK();
                    puVar1 = (uint *)(lVar15 + 8);
                    uVar13 = *puVar1;
                    *puVar1 = *puVar1 - 1;
                    UNLOCK();
                    if ((uVar13 & 0x3fffffff) == 1) {
                      puVar1 = (uint *)(lVar15 + 8);
                      LOCK();
                      uVar13 = *puVar1;
                      *puVar1 = *puVar1 | 0x40000000;
                      UNLOCK();
                      if ((uVar13 >> 0x1e & 1) == 0) {
                        bVar7 = *(byte *)(lVar15 + 0xd);
                        plVar16 = (longlong *)FUN_14001cc68(0x10,8);
                        plVar16[1] = lVar15;
                        uVar23 = (undefined4)local_468;
                        plVar20 = DAT_14ca843c0;
                        plVar19 = DAT_14ca843c8;
                        if ((bVar7 & 2) == 0) {
                          do {
                            *plVar16 = (longlong)plVar20;
                            LOCK();
                            bVar26 = plVar20 != DAT_14ca843c0;
                            plVar19 = plVar16;
                            if (bVar26) {
                              plVar20 = DAT_14ca843c0;
                              plVar19 = DAT_14ca843c0;
                            }
                            DAT_14ca843c0 = plVar19;
                            UNLOCK();
                          } while (bVar26);
                        }
                        else {
                          do {
                            *plVar16 = (longlong)plVar19;
                            LOCK();
                            bVar26 = plVar19 != DAT_14ca843c8;
                            plVar20 = plVar16;
                            if (bVar26) {
                              plVar19 = DAT_14ca843c8;
                              plVar20 = DAT_14ca843c8;
                            }
                            DAT_14ca843c8 = plVar20;
                            UNLOCK();
                          } while (bVar26);
                        }
                      }
                    }
                  }
                }
                iVar12 = local_328._4_4_;
                if ((local_328._4_4_ == -1) &&
                   (iVar12 = -1, (longlong)uVar14 < (longlong)*(int *)(lStack_3b0 + 0x178))) {
                  iVar12 = *(int *)(*(longlong *)(lStack_3b0 + 0x170) + uVar14 * 4);
                }
                iVar21 = (int)param_5[1];
                iVar9 = (int)param_5[2];
                iVar10 = (iVar9 + 0x44) / 0x44;
                *(int *)(param_5 + 2) = iVar9 + 1;
                if (iVar21 < iVar10) {
                  do {
                    local_430 = uVar14;
                    local_444 = iVar21;
                    lVar15 = FUN_14001cc68(0x3fc0,0x10);
                    lVar24 = 0;
                    do {
                      *(undefined8 *)(lVar15 + 0xa8 + lVar24) = 0;
                      puVar2 = (undefined8 *)(lVar15 + 0xb8 + lVar24);
                      *puVar2 = 0;
                      puVar2[1] = 0;
                      *(undefined8 *)(lVar15 + 200 + lVar24) = 0;
                      *(undefined8 *)(lVar15 + 0xd0 + lVar24) = 0xffffffff;
                      *(undefined8 *)(lVar15 + 0xd8 + lVar24) = 0xff0000ffffffff;
                      *(undefined1 *)(lVar15 + 0xe0 + lVar24) = 0;
                      *(undefined4 *)(lVar15 + 0xe4 + lVar24) = 0x40c00f07;
                      pbVar3 = (byte *)(lVar15 + 0xe8 + lVar24);
                      *pbVar3 = *pbVar3 & 0xfc;
                      *(undefined1 **)(lVar15 + 0xb0 + lVar24) = &DAT_100000001;
                      FUN_14470b9e0(lVar24 + lVar15,1);
                      lVar24 = lVar24 + 0xf0;
                    } while (lVar24 != 0x3fc0);
                    iVar21 = (int)param_5[1];
                    *(uint *)(param_5 + 1) = iVar21 + 1U;
                    if (*(uint *)((longlong)param_5 + 0xc) < iVar21 + 1U) {
                      FUN_14002baf6(param_5,iVar21);
                    }
                    *(longlong *)(*param_5 + (longlong)iVar21 * 8) = lVar15;
                    iVar21 = local_444 + 1;
                    uVar14 = local_430;
                    uVar23 = (int)local_468;
                  } while (iVar21 != iVar10);
                }
                local_4b0 = uVar23;
                param_1 = local_478;
                lVar15 = (ulonglong)(uint)(iVar9 % 0x44) * 0xf0 +
                         *(longlong *)(*param_5 + (longlong)(iVar9 / 0x44) * 8);
                local_4a0 = local_3a8._7_1_;
                local_4c0 = param_6;
                local_4c8 = local_460;
                local_4b8 = local_488;
                local_4a8 = iVar12;
                FUN_143aba726(local_478,local_470,&local_3b8,lVar15);
                FUN_1436a14f8(param_5,local_498,lVar15);
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 != local_458);
          }
          if (local_428[0] != 0) {
            FUN_1400020a8();
          }
          param_2 = local_480;
          uVar14 = local_498;
          param_4 = local_48c;
          if (local_428[2] != 0) {
            FUN_1400020a8();
            param_4 = local_48c;
          }
        }
        lVar15 = local_e0;
        if (local_e0 != 0) {
          LOCK();
          puVar1 = (uint *)(local_e0 + 8);
          uVar13 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar13 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_e0 + 8);
            LOCK();
            uVar13 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar13 >> 0x1e & 1) == 0) {
              bVar7 = *(byte *)(local_e0 + 0xd);
              plVar16 = (longlong *)FUN_14001cc68(0x10,8);
              plVar16[1] = lVar15;
              plVar20 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c8;
              uVar14 = local_498;
              param_2 = local_480;
              param_1 = local_478;
              param_4 = local_48c;
              if ((bVar7 & 2) == 0) {
                do {
                  *plVar16 = (longlong)plVar20;
                  LOCK();
                  bVar26 = plVar20 != DAT_14ca843c0;
                  plVar19 = plVar16;
                  if (bVar26) {
                    plVar20 = DAT_14ca843c0;
                    plVar19 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar19;
                  UNLOCK();
                } while (bVar26);
              }
              else {
                do {
                  *plVar16 = (longlong)plVar19;
                  LOCK();
                  bVar26 = plVar19 != DAT_14ca843c8;
                  plVar20 = plVar16;
                  if (bVar26) {
                    plVar19 = DAT_14ca843c8;
                    plVar20 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar20;
                  UNLOCK();
                } while (bVar26);
              }
            }
          }
        }
        lVar15 = local_330;
        if (local_330 != 0) {
          LOCK();
          puVar1 = (uint *)(local_330 + 8);
          uVar13 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar13 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_330 + 8);
            LOCK();
            uVar13 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar13 >> 0x1e & 1) == 0) {
              bVar7 = *(byte *)(local_330 + 0xd);
              plVar16 = (longlong *)FUN_14001cc68(0x10,8);
              plVar16[1] = lVar15;
              plVar20 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c8;
              uVar14 = local_498;
              param_2 = local_480;
              param_1 = local_478;
              param_4 = local_48c;
              if ((bVar7 & 2) == 0) {
                do {
                  *plVar16 = (longlong)plVar20;
                  LOCK();
                  bVar26 = plVar20 != DAT_14ca843c0;
                  plVar19 = plVar16;
                  if (bVar26) {
                    plVar20 = DAT_14ca843c0;
                    plVar19 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar19;
                  UNLOCK();
                } while (bVar26);
              }
              else {
                do {
                  *plVar16 = (longlong)plVar19;
                  LOCK();
                  bVar26 = plVar19 != DAT_14ca843c8;
                  plVar20 = plVar16;
                  if (bVar26) {
                    plVar19 = DAT_14ca843c8;
                    plVar20 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar20;
                  UNLOCK();
                } while (bVar26);
              }
            }
          }
        }
        lVar15 = local_348;
        if (local_348 != 0) {
          LOCK();
          puVar1 = (uint *)(local_348 + 8);
          uVar13 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar13 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_348 + 8);
            LOCK();
            uVar13 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar13 >> 0x1e & 1) == 0) {
              bVar7 = *(byte *)(local_348 + 0xd);
              plVar16 = (longlong *)FUN_14001cc68(0x10,8);
              plVar16[1] = lVar15;
              plVar20 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c8;
              uVar14 = local_498;
              if ((bVar7 & 2) == 0) {
                do {
                  *plVar16 = (longlong)plVar20;
                  LOCK();
                  bVar26 = plVar20 != DAT_14ca843c0;
                  plVar19 = plVar16;
                  if (bVar26) {
                    plVar20 = DAT_14ca843c0;
                    plVar19 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar19;
                  UNLOCK();
                } while (bVar26);
              }
              else {
                do {
                  *plVar16 = (longlong)plVar19;
                  LOCK();
                  bVar26 = plVar19 != DAT_14ca843c8;
                  plVar20 = plVar16;
                  if (bVar26) {
                    plVar19 = DAT_14ca843c8;
                    plVar20 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar20;
                  UNLOCK();
                } while (bVar26);
              }
            }
          }
        }
        lVar15 = lStack_350;
        if (lStack_350 != 0) {
          LOCK();
          puVar1 = (uint *)(lStack_350 + 8);
          uVar13 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar13 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lStack_350 + 8);
            LOCK();
            uVar13 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar13 >> 0x1e & 1) == 0) {
              bVar7 = *(byte *)(lStack_350 + 0xd);
              plVar16 = (longlong *)FUN_14001cc68(0x10,8);
              plVar16[1] = lVar15;
              plVar20 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c8;
              uVar14 = local_498;
              param_2 = local_480;
              param_1 = local_478;
              param_4 = local_48c;
              if ((bVar7 & 2) == 0) {
                do {
                  *plVar16 = (longlong)plVar20;
                  LOCK();
                  bVar26 = plVar20 != DAT_14ca843c0;
                  plVar19 = plVar16;
                  if (bVar26) {
                    plVar20 = DAT_14ca843c0;
                    plVar19 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar19;
                  UNLOCK();
                } while (bVar26);
              }
              else {
                do {
                  *plVar16 = (longlong)plVar19;
                  LOCK();
                  bVar26 = plVar19 != DAT_14ca843c8;
                  plVar20 = plVar16;
                  if (bVar26) {
                    plVar19 = DAT_14ca843c8;
                    plVar20 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar20;
                  UNLOCK();
                } while (bVar26);
              }
            }
          }
        }
        lVar15 = local_358;
        if (local_358 != 0) {
          LOCK();
          puVar1 = (uint *)(local_358 + 8);
          uVar13 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar13 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(local_358 + 8);
            LOCK();
            uVar13 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar13 >> 0x1e & 1) == 0) {
              bVar7 = *(byte *)(local_358 + 0xd);
              plVar16 = (longlong *)FUN_14001cc68(0x10,8);
              plVar16[1] = lVar15;
              plVar20 = DAT_14ca843c0;
              plVar19 = DAT_14ca843c8;
              uVar14 = local_498;
              param_2 = local_480;
              param_1 = local_478;
              param_4 = local_48c;
              if ((bVar7 & 2) == 0) {
                do {
                  *plVar16 = (longlong)plVar20;
                  LOCK();
                  bVar26 = plVar20 != DAT_14ca843c0;
                  plVar19 = plVar16;
                  if (bVar26) {
                    plVar20 = DAT_14ca843c0;
                    plVar19 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar19;
                  UNLOCK();
                } while (bVar26);
              }
              else {
                do {
                  *plVar16 = (longlong)plVar19;
                  LOCK();
                  bVar26 = plVar19 != DAT_14ca843c8;
                  plVar20 = plVar16;
                  if (bVar26) {
                    plVar19 = DAT_14ca843c8;
                    plVar20 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar20;
                  UNLOCK();
                } while (bVar26);
              }
            }
          }
        }
        FUN_144aef1bc(local_3c8);
        if (local_3c8 != 0) {
          FUN_1400020a8();
        }
        iVar12 = (int)param_2[1];
      }
LAB_1400febf3:
      uVar14 = uVar14 + 1;
    } while ((longlong)uVar14 < (longlong)iVar12);
  }
LAB_1400ff095:
  lVar15 = local_440;
  if ((local_440 != -1) && (QueryPerformanceCounter(&local_368), local_438 != 0)) {
    *(longlong *)(local_438 + 0x48) =
         *(longlong *)(local_438 + 0x48) +
         (CONCAT44(local_368.s.HighPart,local_368.s.LowPart) - lVar15);
  }
  if ((local_b0 ^ (ulonglong)auStack_4e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400ff13e FUN_1400ff13e body=31 status=ok
// SIG undefined FUN_1400ff13e(void)

undefined1
FUN_1400ff13e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1400ff15e(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 1400ff15e FUN_1400ff15e body=113 status=ok
// SIG undefined FUN_1400ff15e(void)

undefined8 FUN_1400ff15e(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 == *(uint *)(param_2 + 0x38)) {
    uVar2 = 1;
    if ((uVar1 & 0xff) != 0) {
      lVar5 = *(longlong *)(param_2 + 0x30);
      if (*(longlong *)(param_2 + 0x30) == 0) {
        lVar5 = param_2;
      }
      lVar3 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar3 = param_1;
      }
      uVar6 = 0;
      do {
        lVar4 = 0;
        while ((*(longlong *)(lVar3 + lVar4) != *(longlong *)(lVar5 + uVar6 * 0x18) ||
               (*(int *)(lVar3 + 8 + lVar4) != *(int *)(lVar5 + 8 + uVar6 * 0x18)))) {
          lVar4 = lVar4 + 0x18;
          if ((ulonglong)((uVar1 & 0xff) << 3) * 3 == lVar4) goto LAB_1400ff1cb;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != ((ulonglong)uVar1 & 0xff));
    }
  }
  else {
LAB_1400ff1cb:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1400ff1cf FUN_1400ff1cf body=173 status=ok
// SIG undefined FUN_1400ff1cf(void)

void FUN_1400ff1cf(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    uVar2 = FUN_1400ff27c();
    plVar3 = (longlong *)FUN_144718840(lVar5,uVar2);
    if ((plVar3 != (longlong *)0x0) &&
       (plVar4 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3), *plVar4 != 0)) {
      plVar4 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3);
      if ((plVar4 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar4 + 8))(plVar4), cVar1 != '\0')
         ) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      lVar5 = (**(code **)(*(longlong *)*param_1 + 0x180))();
      if ((lVar5 == 0) || (DAT_14c950c29 == '\0')) {
        if (lVar5 == 0) {
          return;
        }
      }
      else {
        FUN_1456cec3c(lVar5);
      }
      lVar5 = FUN_140175e7c(lVar5);
      if (lVar5 != 0) {
        FUN_147481638(lVar5,plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1400ff27c FUN_1400ff27c body=228 status=ok
// SIG undefined FUN_1400ff27c(void)

longlong FUN_1400ff27c(void)

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
  if (DAT_14caa8808 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147480507;
    local_40 = FUN_1463293e6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/DataflowSimulation",L"DataflowSimulationInterface",&DAT_14caa8808,
                  &DAT_147480506);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8808;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ff362 FUN_1400ff362 body=180 status=ok
// SIG undefined FUN_1400ff362(void)

int FUN_1400ff362(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x14);
        cVar1 = FUN_1400ff418(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1400ff3f0;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1400ff3f0:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400ff418 FUN_1400ff418 body=164 status=ok
// SIG undefined FUN_1400ff418(void)

bool FUN_1400ff418(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  bVar5 = true;
  if ((uVar1 != uVar3) || (uVar2 != param_2[1])) {
    if ((uVar2 == 0) ||
       (((((int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0)) ||
        ((*(uint *)(lVar4 + 0x10) != uVar2 || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))))) {
      if ((param_2[1] != 0) &&
         (((-1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)) &&
          ((lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar4 != 0 &&
           (*(uint *)(lVar4 + 0x10) == param_2[1])))))) {
        bVar5 = (*(uint *)(lVar4 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar5 = false;
    }
  }
  return bVar5;
}



// FUNCTION 1400ff4bc FUN_1400ff4bc body=3078 status=ok
// SIG undefined FUN_1400ff4bc(void)

void FUN_1400ff4bc(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  uint *puVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  int iVar23;
  code *pcVar24;
  uint uVar25;
  bool bVar26;
  bool bVar27;
  undefined1 auStack_298 [32];
  code **local_278;
  longlong *local_268;
  undefined8 uStack_260;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_23c;
  undefined4 local_234;
  longlong local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  longlong local_1f8;
  code *local_1e8;
  longlong *local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  longlong local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  int local_114;
  longlong local_108;
  undefined4 local_100;
  code *local_f8;
  longlong *local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  code *local_b8 [2];
  longlong *local_a8;
  longlong local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_298;
  bVar26 = 0 < (int)param_2[1];
  if ((bool)*(char *)(param_1 + 0x2ce) == bVar26) goto LAB_1400ff756;
  *(bool *)(param_1 + 0x2ce) = bVar26;
  uVar19 = 0;
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  iVar18 = *(int *)(param_1 + 0x338);
  if (iVar18 == 0) {
    uVar20 = 1;
    iVar23 = 0;
    iVar12 = 0;
  }
  else {
    puVar11 = *(uint **)(param_1 + 0x330);
    if (*(uint **)(param_1 + 0x330) == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 800);
    }
    uVar25 = *puVar11;
    if (uVar25 == 0) {
      iVar12 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar12 = iVar18 + -1;
      }
      uVar19 = 0;
      uVar20 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar20 = uVar19;
      }
      iVar23 = 0;
      do {
        if (uVar20 == uVar19) goto LAB_1400ff72c;
        iVar23 = iVar23 + 0x20;
        uVar25 = puVar11[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar25 == 0);
    }
    else {
      uVar19 = 0;
      iVar23 = 0;
    }
    uVar20 = (ulonglong)(-uVar25 & uVar25);
    uVar3 = uVar20 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    iVar12 = (iVar23 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
    if (iVar18 <= iVar12) {
      iVar12 = iVar18;
    }
  }
  if (iVar12 < iVar18) {
    uVar25 = 0xffffffff;
    do {
      local_268 = *(longlong **)(*(longlong *)(param_1 + 0x310) + (longlong)iVar12 * 0x10);
      if (local_268 != (longlong *)0x0) {
        cVar5 = (**(code **)(*local_268 + 0x340))(local_268,0);
        if (cVar5 == '\0') {
LAB_1400ff65e:
          FUN_140282c6a(&local_148,local_b8,&local_268,0);
        }
        else if ((longlong)(int)param_2[1] != 0) {
          lVar22 = 0;
          do {
            if (*(longlong **)(*param_2 + lVar22) == local_268) {
              if ((*(char *)(param_1 + 0x2ce) == '\x01') &&
                 (cVar5 = (**(code **)(*local_268 + 0x340))(local_268,5), cVar5 == '\0'))
              goto LAB_1400ff65e;
              break;
            }
            lVar22 = lVar22 + 8;
          } while ((longlong)(int)param_2[1] * 8 != lVar22);
        }
      }
      uVar25 = uVar25 & ~(uint)uVar20;
      puVar11 = *(uint **)(param_1 + 0x330);
      if (*(uint **)(param_1 + 0x330) == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 800);
      }
      iVar18 = *(int *)(param_1 + 0x338);
      iVar12 = (int)uVar19;
      lVar22 = (longlong)iVar12;
      uVar13 = puVar11[lVar22] & uVar25;
      if (uVar13 == 0) {
        iVar14 = iVar18 + 0x1e;
        if (-1 < iVar18 + -1) {
          iVar14 = iVar18 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar15 = iVar14;
        if (iVar14 < iVar12) {
          iVar15 = iVar12;
        }
        if (iVar14 <= iVar12) break;
        lVar16 = 0;
        while( true ) {
          iVar23 = iVar23 + 0x20;
          uVar13 = puVar11[lVar22 + lVar16 + 1];
          if (uVar13 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar15 - lVar22 == lVar16) goto LAB_1400ff712;
        }
        uVar19 = (ulonglong)(iVar12 + (int)lVar16 + 1);
        uVar25 = 0xffffffff;
      }
      uVar20 = (ulonglong)(-uVar13 & uVar13);
      uVar3 = uVar20 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar12 = (iVar23 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar18);
LAB_1400ff712:
    if ((int)uStack_140 != local_114) {
      pcVar24 = (code *)0x0;
      local_178 = 0;
      local_170 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_16c = 0xffffffff00000080;
      local_164 = 0;
      local_158 = 0;
      local_150 = 0;
      FUN_147d1f44e(&local_198,&local_148);
      FUN_14003fbd6();
      plVar9 = DAT_14caea080;
      uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x210) + 8);
      uVar8 = (**(code **)(*DAT_14caea080 + 0x2b0))(DAT_14caea080);
      FUN_14582fb3e(plVar9,&local_1a8,uVar8,uVar4);
      local_248 = 0;
      local_240 = 0;
      local_268 = (longlong *)0x0;
      uStack_260 = 0;
      local_23c = 0xffffffff00000080;
      local_234 = 0;
      local_228 = 0;
      local_220 = 0;
      FUN_147d1f44e(&local_268,&local_198);
      local_218 = plVar9;
      uStack_210 = local_1a8;
      uStack_20c = uStack_1a4;
      uStack_208 = uStack_1a0;
      uStack_204 = uStack_19c;
      local_1e8 = (code *)0x0;
      uStack_200 = uVar4;
      local_1f8 = param_1;
      plVar9 = (longlong *)FUN_14001cc68(0x80,8);
      *plVar9 = (longlong)&PTR_LAB_14aa8f520;
      local_1d8 = plVar9;
      FUN_147befd6c(plVar9 + 1,&local_268);
      *(undefined4 *)(plVar9 + 0xb) = (undefined4)local_218;
      *(undefined4 *)((longlong)plVar9 + 0x5c) = local_218._4_4_;
      *(undefined4 *)(plVar9 + 0xc) = uStack_210;
      *(undefined4 *)((longlong)plVar9 + 100) = uStack_20c;
      *(undefined4 *)(plVar9 + 0xd) = uStack_208;
      *(undefined4 *)((longlong)plVar9 + 0x6c) = uStack_204;
      *(undefined4 *)(plVar9 + 0xe) = uStack_200;
      *(undefined4 *)((longlong)plVar9 + 0x74) = uStack_1fc;
      plVar9[0xf] = local_1f8;
      if (plVar9 != (longlong *)&DAT_fffffffffffffff8) {
        pcVar24 = FUN_1436b9b2e;
        local_1e8 = FUN_1436b9b2e;
      }
      if (DAT_14ca9a43c == 2) {
        LOCK();
        bVar26 = DAT_14cb00c10 == '\0';
        if (bVar26) {
          DAT_14cb00c10 = '\x01';
        }
        UNLOCK();
        if (!bVar26) {
          FUN_1447d2058(&DAT_14cb00c10);
        }
        if (*(undefined **)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0
             ) == &DAT_14cb00c08) {
          local_b8[0] = local_1e8;
          local_a8 = local_1d8;
          local_1d8 = (longlong *)0x0;
          local_88 = local_1b8;
          uStack_84 = uStack_1b4;
          uStack_80 = uStack_1b0;
          uStack_7c = uStack_1ac;
          if (local_1e8 != (code *)0x0) {
            local_1e8 = (code *)0x0;
          }
          local_78 = 0;
          FUN_1401a96bc(&DAT_14cb00c08,local_b8,L"UpdateSkelProxyLODSectionElementsCmd",
                        &DAT_14cb07700);
LAB_1400ffa26:
          (*(code *)(&PTR_LAB_14a3931f0)[local_78])();
          bVar26 = false;
        }
        else {
          if (DAT_14cb00c18 != 0) {
            local_b8[0] = local_1e8;
            local_a8 = local_1d8;
            local_1d8 = (longlong *)0x0;
            local_88 = local_1b8;
            uStack_84 = uStack_1b4;
            uStack_80 = uStack_1b0;
            uStack_7c = uStack_1ac;
            if (local_1e8 != (code *)0x0) {
              local_1e8 = (code *)0x0;
            }
            local_78 = 0;
            FUN_1401a98c8(&DAT_14cb00c08,local_b8,L"UpdateSkelProxyLODSectionElementsCmd",
                          &DAT_14cb07700);
            goto LAB_1400ffa26;
          }
          bVar26 = true;
        }
        LOCK();
        bVar27 = DAT_14cb00c10 == '\x01';
        if (bVar27) {
          DAT_14cb00c10 = '\0';
        }
        UNLOCK();
        if (!bVar27) {
          FUN_14008cdb0(&DAT_14cb00c10);
        }
        plVar9 = local_1d8;
        pcVar24 = local_1e8;
        if (bVar26) goto LAB_1400ffa71;
      }
      else {
LAB_1400ffa71:
        local_f8 = pcVar24;
        local_e8 = plVar9;
        local_1d8 = (longlong *)0x0;
        local_d8 = local_1c8;
        uStack_d4 = uStack_1c4;
        uStack_d0 = uStack_1c0;
        uStack_cc = uStack_1bc;
        local_c8 = local_1b8;
        uStack_c4 = uStack_1b4;
        uStack_c0 = uStack_1b0;
        uStack_bc = uStack_1ac;
        if (pcVar24 != (code *)0x0) {
          local_1e8 = (code *)0x0;
        }
        lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar18 = *(int *)(lVar22 + 0xc60);
        if (DAT_14c86a9fc == 0) {
          if (iVar18 == 2) goto LAB_1400ffaed;
          if (iVar18 != 1) goto LAB_1400ffae8;
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_1400ffaed;
LAB_1400ffb35:
          if (DAT_14ca9a438 == '\0') {
            if ((DAT_14c86a9f8 != '\x01') || (iVar18 = *(int *)(lVar22 + 0xc60), iVar18 == 2)) {
LAB_140100080:
              pcVar24 = local_f8;
              plVar9 = local_e8;
              if (local_e8 == (longlong *)0x0) {
                plVar9 = (longlong *)&local_d8;
              }
              uVar8 = (**(code **)(*plVar9 + 8))();
              (*pcVar24)(uVar8);
              goto LAB_1400ffc41;
            }
            if (iVar18 == 1) {
              DVar6 = FUN_140ad26c0();
              DVar7 = GetCurrentThreadId();
              if (DVar6 == DVar7) goto LAB_140100080;
            }
          }
          if (DAT_14ca9a43c == 0) {
            puVar2 = (undefined8 *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x308);
            puVar11 = (uint *)*puVar2;
            if (puVar11 != (uint *)0x0) goto LAB_1400ffd7a;
            while( true ) {
              uVar25 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar25 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar25 | 1;
                __tlregdtor(&LAB_1436b995f);
              }
              lVar22 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              puVar10 = *(undefined4 **)(lVar22 + 0x310);
              *(undefined8 *)(lVar22 + 0x310) = 0;
              if (puVar10 == (undefined4 *)0x0) {
                puVar10 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar10 = 0xffffffff;
              *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
              puVar10[0x12] = 0;
              *puVar2 = puVar10;
              FUN_140217a48(puVar2);
              puVar11 = (uint *)*puVar2;
LAB_1400ffd7a:
              puVar21 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 0xfU & 0xfffffffffffffff0);
              puVar17 = (uint *)(puVar21 + 0x1e);
              uVar25 = puVar11[0x12];
              if (puVar17 <= puVar11 + 0x4000) break;
              while( true ) {
                *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
                LOCK();
                uVar13 = *puVar11;
                *puVar11 = *puVar11 + uVar25 + 1;
                UNLOCK();
                if ((uVar13 ^ uVar25) != 0xffffffff) break;
                puVar11 = (uint *)*puVar2;
                *puVar11 = 0xffffffff;
                *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
                puVar11[0x12] = 0;
                *puVar2 = puVar11;
                puVar21 = (undefined8 *)((longlong)puVar11 + 0x67U & 0xfffffffffffffff0);
                puVar17 = (uint *)(puVar21 + 0x1e);
                uVar25 = 0;
                if (puVar17 <= puVar11 + 0x4000) {
                  uVar25 = 1;
                  goto LAB_1400ffdfa;
                }
              }
            }
            uVar25 = uVar25 + 1;
LAB_1400ffdfa:
            *(uint **)(puVar11 + 0x10) = puVar17;
            puVar11[0x12] = uVar25;
            FUN_1447247dc(puVar21,0);
            *puVar21 = &PTR_FUN_14aa8f510;
            puVar21[0x16] = local_f8;
            puVar21[0x18] = local_e8;
            local_e8 = (longlong *)0x0;
            *(undefined4 *)(puVar21 + 0x1c) = local_c8;
            *(undefined4 *)((longlong)puVar21 + 0xe4) = uStack_c4;
            *(undefined4 *)(puVar21 + 0x1d) = uStack_c0;
            *(undefined4 *)((longlong)puVar21 + 0xec) = uStack_bc;
            *(undefined4 *)(puVar21 + 0x1a) = local_d8;
            *(undefined4 *)((longlong)puVar21 + 0xd4) = uStack_d4;
            *(undefined4 *)(puVar21 + 0x1b) = uStack_d0;
            *(undefined4 *)((longlong)puVar21 + 0xdc) = uStack_cc;
            if (local_f8 != (code *)0x0) {
              local_f8 = (code *)0x0;
            }
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar25 = DAT_14c7585c8 >> 10 & 3;
              iVar18 = 0;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar25 < 2) {
                uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar25];
                iVar18 = 0;
              }
              else {
                uVar19 = 2;
              }
            }
            else {
              iVar18 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              uVar19 = 5;
            }
            if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
            }
            puVar21[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar21[9] = puVar21;
            puVar21[10] = puVar21;
            lVar22 = *(longlong *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
            if (lVar22 == 0) {
              uVar20 = 1;
              if ((char)uVar19 != '\x06') {
                uVar20 = uVar19;
              }
              uVar19 = uVar20;
              uVar8 = 0;
            }
            else {
              if ((char)uVar19 == '\x06') {
                uVar19 = *(ulonglong *)(lVar22 + 0x38) >> 0x3b;
              }
              uVar8 = *(undefined8 *)(lVar22 + 0x30);
            }
            puVar21[0xf] = uVar8;
            puVar21[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar21 + 0x1c) = iVar18;
            if (puVar21 == (undefined8 *)0x0) {
              local_b8[0] = (code *)CONCAT71(local_b8[0]._1_7_,1);
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
              UNLOCK();
              local_b8[0] = (code *)CONCAT71(local_b8[0]._1_7_,1);
              FUN_1447439e4(puVar21);
              LOCK();
              piVar1 = (int *)(puVar21 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar21)(puVar21,1);
              }
            }
          }
          else {
            local_b8[0] = (code *)0x0;
            local_a8 = (longlong *)FUN_14001cc68(0x50,0x10);
            *local_a8 = (longlong)&PTR_LAB_14aa8f4f0;
            local_a8[2] = (longlong)local_f8;
            local_a8[4] = (longlong)local_e8;
            local_e8 = (longlong *)0x0;
            *(undefined4 *)(local_a8 + 8) = local_c8;
            *(undefined4 *)((longlong)local_a8 + 0x44) = uStack_c4;
            *(undefined4 *)(local_a8 + 9) = uStack_c0;
            *(undefined4 *)((longlong)local_a8 + 0x4c) = uStack_bc;
            *(undefined4 *)(local_a8 + 6) = local_d8;
            *(undefined4 *)((longlong)local_a8 + 0x34) = uStack_d4;
            *(undefined4 *)(local_a8 + 7) = uStack_d0;
            *(undefined4 *)((longlong)local_a8 + 0x3c) = uStack_cc;
            if (local_f8 != (code *)0x0) {
              local_f8 = (code *)0x0;
            }
            if (local_a8 != (longlong *)&DAT_fffffffffffffff0) {
              local_b8[0] = FUN_1436b98c4;
            }
            local_278 = local_b8;
            FUN_14005a792(&DAT_14ca9a440,L"UpdateSkelProxyLODSectionElementsCmd",&DAT_14cb07700);
            if (local_b8[0] != (code *)0x0) {
              plVar9 = local_a8;
              if (local_a8 == (longlong *)0x0) {
                plVar9 = local_98;
              }
              (**(code **)(*plVar9 + 0x10))();
            }
          }
        }
        else {
LAB_1400ffae8:
          if (iVar18 != 0x10) goto LAB_1400ffb35;
LAB_1400ffaed:
          pcVar24 = local_f8;
          plVar9 = local_e8;
          if (local_e8 == (longlong *)0x0) {
            plVar9 = (longlong *)&local_d8;
          }
          uVar8 = (**(code **)(*plVar9 + 8))(plVar9);
          (*pcVar24)(uVar8);
        }
LAB_1400ffc41:
        if (local_f8 != (code *)0x0) {
          plVar9 = (longlong *)&local_d8;
          if (local_e8 != (longlong *)0x0) {
            plVar9 = local_e8;
          }
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      if (local_1e8 != (code *)0x0) {
        plVar9 = local_1d8;
        if (local_1d8 == (longlong *)0x0) {
          plVar9 = (longlong *)&local_1c8;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      local_220 = 0;
      if (local_228 != 0) {
        FUN_1400020a8();
      }
      FUN_1404dc9c0(&local_268);
      local_150 = 0;
      if (local_158 != 0) {
        FUN_1400020a8();
      }
      FUN_1404dc9c0(&local_198);
    }
  }
LAB_1400ff72c:
  local_100 = 0;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1404dc9c0(&local_148);
LAB_1400ff756:
  if ((local_60 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1401000e4 FUN_1401000e4 body=275 status=ok
// SIG undefined FUN_1401000e4(void)

void FUN_1401000e4(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1401001f8 FUN_1401001f8 body=614 status=ok
// SIG undefined FUN_1401001f8(void)

void FUN_1401001f8(double *param_1,longlong param_2,longlong param_3,int param_4,uint param_5,
                  longlong param_6,longlong *param_7)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  double *pdVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  pdVar18 = (double *)(param_3 + 0x18);
  if (*(char *)(param_3 + 0x3e) == '\0') {
    pdVar18 = param_1 + 5;
  }
  iVar19 = (int)*(short *)(param_3 + 0x36);
  uVar21 = SUB84(*pdVar18,0);
  uVar22 = (undefined4)((ulonglong)*pdVar18 >> 0x20);
  iVar16 = (int)*(short *)(param_3 + 0x38);
  if (0xffff < *(uint *)(param_1 + 7)) {
    lVar12 = *(longlong *)(param_2 + 0x10);
    uVar14 = (ulonglong)(*(uint *)(param_1 + 7) >> 10 & 0xffffffc0);
    cVar10 = *(char *)(lVar12 + 0x3e + uVar14);
    if (cVar10 == '\x01') {
      iVar16 = (int)*(short *)(param_3 + 0x3a);
    }
    if ((byte)(cVar10 - 1U) < 2) {
      uVar9 = *(undefined8 *)(lVar12 + 0x18 + uVar14);
      uVar21 = (undefined4)uVar9;
      uVar22 = (undefined4)((ulonglong)uVar9 >> 0x20);
      iVar19 = (int)*(short *)(lVar12 + 0x36 + uVar14);
    }
    if (cVar10 == '\x02') {
      iVar16 = (int)*(short *)(param_3 + 0x3c);
    }
  }
  iVar20 = *(int *)(param_6 + 0x14) + -1;
  if (param_4 < iVar20) {
    iVar20 = param_4;
  }
  dVar2 = *(double *)(param_6 + 0x50);
  iVar17 = iVar16 * *(int *)(param_6 + 0x14) + iVar20;
  piVar1 = (int *)(*param_7 + (longlong)iVar17 * 4);
  *piVar1 = *piVar1 + 1;
  dVar3 = *param_1;
  dVar4 = param_1[1];
  dVar5 = param_1[4];
  dVar6 = param_1[3];
  dVar7 = *(double *)(param_6 + 0x40);
  dVar8 = *(double *)(param_6 + 0x48);
  iVar16 = (int)param_7[3];
  *(uint *)(param_7 + 3) = iVar16 + 1U;
  if (*(uint *)((longlong)param_7 + 0x1c) < iVar16 + 1U) {
    FUN_1401000e4(param_7 + 2,iVar16);
  }
  lVar12 = param_7[2];
  lVar15 = (longlong)iVar16 * 0x30;
  *(int *)(lVar12 + lVar15) = iVar17;
  *(float *)(lVar12 + 0x10 + lVar15) = (float)((dVar3 + dVar6) * 0.5 + dVar7);
  *(float *)(lVar12 + 0x14 + lVar15) = (float)((dVar4 + dVar5) * 0.5 + dVar8);
  *(float *)(lVar12 + 0x18 + lVar15) = (float)((double)CONCAT44(uVar22,uVar21) + dVar2);
  *(int *)(lVar12 + 0x1c + lVar15) = iVar19;
  uVar13 = 0;
  if (*(char *)(param_6 + 0x288) != '\0') {
    uVar13 = (uint)(iVar20 != *(int *)(param_6 + 0x14) + -1) << 8;
  }
  uVar11 = *(uint *)(param_6 + 0xc);
  *(uint *)(lVar12 + 0x20 + lVar15) =
       (uint)(iVar20 < *(int *)(param_6 + 0x14) + -2) << 9 | param_5 & 0xff | uVar13;
  if (uVar11 == param_5) {
    uVar21 = *(undefined4 *)(param_6 + 0x18);
  }
  else {
    uVar21 = 0;
  }
  *(undefined4 *)(lVar12 + 0x24 + lVar15) = uVar21;
  *(float *)(lVar12 + 0x28 + lVar15) = (float)(dVar6 - dVar3);
  *(float *)(lVar12 + 0x2c + lVar15) = (float)(dVar5 - dVar4);
  *(int *)(param_7 + 4) = (int)param_7[4] + 1;
  return;
}



// FUNCTION 14010045e FUN_14010045e body=18 status=ok
// SIG undefined FUN_14010045e(void)

void FUN_14010045e(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_14480f766(param_1 + 0x3c8);
    return;
  }
  return;
}



// FUNCTION 140100470 FUN_140100470 body=47 status=ok
// SIG undefined FUN_140100470(void)

undefined8 * FUN_140100470(undefined8 *param_1)

{
  *param_1 = &DAT_14a171d50;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1401004a0();
  return param_1;
}



// FUNCTION 1401004a0 FUN_1401004a0 body=128 status=ok
// SIG undefined FUN_1401004a0(void)

undefined8 FUN_1401004a0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar2 = *param_2;
  lVar5 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    *(longlong *)(param_1 + 8) = lVar2;
    lVar5 = lVar2;
  }
  if (((lVar5 != 0) && (lVar5 == lVar2)) && (uVar1 = *(uint *)(param_2 + 1), uVar1 != 0xffffffff)) {
    uVar4 = uVar1 >> 6;
    if (*(int *)(param_1 + 0x18) <= (int)uVar4) {
      FUN_140100520((longlong *)(param_1 + 0x10),uVar4 + 1,CONCAT71((int7)((ulonglong)lVar2 >> 8),1)
                   );
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    uVar3 = *(ulonglong *)(lVar2 + (ulonglong)uVar4 * 8);
    if ((uVar3 >> (uVar1 & 0x3f) & 1) == 0) {
      *(ulonglong *)(lVar2 + (ulonglong)uVar4 * 8) = uVar3 | 1L << (sbyte)(uVar1 & 0x3f);
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 140100520 FUN_140100520 body=134 status=ok
// SIG undefined FUN_140100520(void)

void FUN_140100520(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_1401005a8(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 8 + *param_1),0,(ulonglong)uVar2 << 3);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_14709b4d8(param_1);
    return;
  }
  return;
}



// FUNCTION 1401005a8 FUN_1401005a8 body=353 status=ok
// SIG undefined FUN_1401005a8(void)

void FUN_1401005a8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14010062d;
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
LAB_14010062d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14010070a FUN_14010070a body=290 status=ok
// SIG undefined FUN_14010070a(void)

undefined8 FUN_14010070a(char param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
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
  
  uVar2 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_10 = uVar2;
  if (param_1 == '\0') {
    if (DAT_14cb366a0 == (longlong *)0x0) {
      local_30 = &local_18;
      local_18 = FUN_1449e2820;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_140eca530;
      local_38 = &LAB_148063819;
      local_40 = &LAB_1460672b6;
      local_48 = L"Niagara";
      local_50 = 0;
      local_58 = 0x10000006;
      local_60 = 8;
      local_68 = 0x130;
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
    }
    plVar1 = DAT_14cb366a0;
    uVar2 = DAT_14cb366a0[0x22];
    if (uVar2 == 0) {
      (**(code **)(*DAT_14cb366a0 + 1000))(DAT_14cb366a0);
      uVar2 = plVar1[0x22];
    }
    param_1 = *(char *)(uVar2 + 0xe5);
  }
  else {
    param_1 = param_1 + -1;
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)(uVar2 >> 8),param_1 == '\0');
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14010082e FUN_14010082e body=21 status=ok
// SIG undefined FUN_14010082e(void)

undefined8 FUN_14010082e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14010084e FUN_14010084e body=173 status=ok
// SIG undefined FUN_14010084e(void)

void FUN_14010084e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1401008e5;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1401008e5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140100902 FUN_140100902 body=95 status=ok
// SIG undefined FUN_140100902(void)

void FUN_140100902(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = **(longlong **)(param_1 + 0x70);
  while (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 8);
    *(longlong *)(param_1 + 0x70) = lVar2;
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_141267490(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar3;
    lVar2 = **(longlong **)(param_1 + 0x70);
  }
  return;
}



// FUNCTION 140100962 FUN_140100962 body=187 status=ok
// SIG undefined FUN_140100962(void)

undefined8 * FUN_140100962(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pbVar4 = (byte *)(**(code **)(*param_3 + 8))(param_3);
  FUN_1400d69c8(param_1,&local_38,param_3);
  *param_2 = local_38;
  cVar1 = *(char *)(param_1 + 3);
  *(char *)(param_2 + 1) = cVar1;
  bVar2 = pbVar4[0x30];
  bVar3 = *(byte *)(param_1 + 4);
  if (*(byte *)(param_1 + 4) == 0) {
    bVar3 = bVar2;
  }
  *(byte *)((longlong)param_2 + 9) = bVar3;
  *(byte *)((longlong)param_2 + 6) =
       (byte)((ulonglong)local_38 >> 0x30) & 0xf7 | (bVar2 == bVar3 && cVar1 == '\0') << 3;
  *(byte *)((longlong)param_2 + 10) =
       *pbVar4 >> 4 & (*(byte *)(param_1 + 2) & 8) == 0 | *(byte *)((longlong)param_2 + 10) & 0xfe;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140100a1e FUN_140100a1e body=841 status=ok
// SIG undefined FUN_140100a1e(void)

uint FUN_140100a1e(int *param_1,longlong *param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint *puVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  puVar3 = (ulonglong *)(**(code **)(*param_2 + 8))(param_2);
  iVar1 = *(int *)((longlong)&DAT_14c873434 +
                  (ulonglong)((uint)*(byte *)((longlong)param_3 + 5) * 0x30));
  iVar8 = iVar1;
  if ((param_3[5] & 1) == 0) {
    if (iVar1 < 0x49) {
      if (iVar1 < 0x2c) {
        if (iVar1 == 0x1b) {
          iVar8 = 0x1c;
        }
        else if (iVar1 == 0x13) {
LAB_140100cdf:
          iVar8 = 0x15;
        }
        else if (iVar1 == 0x27) goto LAB_140100d5d;
      }
      else if (iVar1 == 0x46) {
        iVar8 = 0x47;
      }
      else if (iVar1 == 0x35) {
LAB_140100d00:
        iVar8 = 0x38;
      }
      else if (iVar1 == 0x2c) {
LAB_140100abd:
        iVar8 = 0x2e;
      }
    }
    else if (iVar1 < 0x61) {
      if (iVar1 == 0x5a) {
        iVar8 = 0x57;
      }
      else if (iVar1 == 0x4c) {
        iVar8 = 0x4d;
      }
      else if (iVar1 == 0x49) {
        iVar8 = 0x4a;
      }
    }
    else if (iVar1 == 0x61) {
      iVar8 = 0x62;
    }
  }
  else if (iVar1 < 0x5a) {
    if (iVar1 < 0x46) {
      if (iVar1 < 0x27) {
        if (iVar1 == 0x13) goto LAB_140100cdf;
        if (iVar1 == 0x1b) {
          iVar8 = 0x1d;
        }
      }
      else if (iVar1 == 0x27) {
LAB_140100d5d:
        iVar8 = 0x29;
      }
      else {
        if (iVar1 == 0x2c) goto LAB_140100abd;
        if (iVar1 == 0x35) goto LAB_140100d00;
      }
    }
    else if (iVar1 == 0x46) {
      iVar8 = 0x48;
    }
    else if (iVar1 == 0x4c) {
      iVar8 = 0x4e;
    }
    else if (iVar1 == 0x49) {
      iVar8 = 0x4b;
    }
  }
  else {
    iVar8 = 0x5b;
    if ((iVar1 != 0x5a) && (iVar8 = iVar1, iVar1 == 0x61)) {
      iVar8 = 99;
    }
  }
  uVar2 = *(uint *)((longlong)&DAT_14c873434 +
                   (ulonglong)((uint)*(byte *)((longlong)puVar3 + 0x33) * 0x30));
  uVar4 = (ulonglong)uVar2;
  uVar7 = (uint)*puVar3;
  if ((uVar7 >> 0x19 & 1) == 0) {
    if (((*puVar3 & 4) == 0) || ((uVar2 != 0x36 && (uVar2 != 0x29)))) goto LAB_140100b0f;
    *param_1 = iVar8;
    param_1[2] = 0x1688;
LAB_140100b54:
    bVar9 = false;
  }
  else {
    uVar4 = FUN_147365ff0(uVar4,(uVar7 & 0x10) >> 4);
LAB_140100b0f:
    *param_1 = iVar8;
    param_1[2] = 0x1688;
    uVar2 = (uint)uVar4;
    if (uVar2 < 0x30) {
      if ((0x580000UL >> (uVar4 & 0x3f) & 1) == 0) {
        if ((0xb00000000000U >> (uVar4 & 0x3f) & 1) == 0) goto LAB_140100b42;
        bVar9 = iVar8 == 0x2f;
      }
      else {
        bVar9 = iVar8 == 0x16;
      }
    }
    else {
LAB_140100b42:
      if (uVar2 == 0x67) {
        bVar9 = iVar8 == 0x31;
      }
      else {
        if (uVar2 != 0x68) goto LAB_140100b54;
        bVar9 = iVar8 == 0x23;
      }
    }
  }
  bVar6 = (byte)param_3[3] & 7;
  if (bVar6 == 1) {
    if ((4 < *(byte *)((longlong)puVar3 + 0x32)) ||
       ((0x1aU >> (*(byte *)((longlong)puVar3 + 0x32) & 0x1f) & 1) == 0)) {
      if (*(byte *)((longlong)puVar3 + 0x31) < 2) {
        param_1[1] = 4;
        param_1[4] = (uint)(byte)param_3[4];
        param_1[5] = (uint)*(byte *)((longlong)param_3 + 9);
        param_1[6] = (uint)bVar9;
      }
      else {
        param_1[1] = 6;
      }
      goto switchD_140100be6_default;
    }
switchD_140100be6_caseD_2:
    if (*(byte *)((longlong)puVar3 + 0x31) < 2) {
      param_1[1] = 5;
      param_1[6] = (uint)*param_3;
      param_1[7] = (uint)param_3[1];
      param_1[4] = (uint)(byte)param_3[4];
      param_1[5] = (uint)*(byte *)((longlong)param_3 + 9);
      param_1[8] = (uint)bVar9;
      goto switchD_140100be6_default;
    }
    param_1[1] = 7;
    param_1[4] = (uint)*param_3;
    uVar2 = (uint)param_3[1];
    goto LAB_140100b91;
  }
  switch(bVar6) {
  case 2:
    goto switchD_140100be6_caseD_2;
  case 3:
    param_1[1] = 9;
    break;
  case 4:
    param_1[1] = 10;
    param_1[4] = (uint)(byte)param_3[4];
    param_1[5] = (uint)*(byte *)((longlong)param_3 + 9);
    param_1[6] = (uint)*param_3 * 6;
    param_1[7] = (uint)param_3[1];
    goto switchD_140100be6_default;
  case 5:
    param_1[1] = 8;
    break;
  default:
    goto switchD_140100be6_default;
  }
  param_1[4] = (uint)(byte)param_3[4];
  uVar2 = (uint)*(byte *)((longlong)param_3 + 9);
LAB_140100b91:
  param_1[5] = uVar2;
switchD_140100be6_default:
  puVar5 = (uint *)(**(code **)(*param_2 + 8))(param_2);
  return *puVar5 >> 0x1d & 0xffffff01;
}



// FUNCTION 140100d68 FUN_140100d68 body=54 status=ok
// SIG undefined FUN_140100d68(void)

void FUN_140100d68(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = switchD_143c3d4dc::caseD_57();
  if (lVar1 == 0) {
    FUN_144862176(param_1 + 0x960,param_2);
    return;
  }
  return;
}



// FUNCTION 140100d9e FUN_140100d9e body=25 status=ok
// SIG undefined FUN_140100d9e(void)

undefined8 FUN_140100d9e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140100db8 FUN_140100db8 body=109 status=ok
// SIG undefined FUN_140100db8(void)

void FUN_140100db8(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  FUN_140100e25(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x34) != 0)) {
    FUN_1498d3d08(param_1 + 0x28);
  }
  iVar1 = *(int *)(param_1 + 0x44);
  FUN_140100e25(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
    FUN_1498d3d08(param_1 + 0x38);
    return;
  }
  return;
}



// FUNCTION 140100e25 FUN_140100e25 body=166 status=ok
// SIG undefined FUN_140100e25(void)

void FUN_140100e25(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x148);
    do {
      *(undefined4 *)(plVar1 + 9) = 0;
      if (plVar1[8] != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*(int *)((longlong)plVar1 + 0xc) != 0) {
        FUN_1447a08a2(plVar1,0);
      }
      plVar1[6] = 0xffffffff;
      *(undefined4 *)(plVar1 + 5) = 0;
      if (0x80 < *(uint *)((longlong)plVar1 + 0x2c)) {
        *(undefined4 *)((longlong)plVar1 + 0x2c) = 0x80;
        FUN_1446efbd8(plVar1 + 2);
      }
      if (plVar1[4] != 0) {
        FUN_1400020a8();
      }
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x34;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140100ecc FUN_140100ecc body=200 status=ok
// SIG undefined FUN_140100ecc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140100ecc(ushort param_1)

{
  undefined *puVar1;
  
  if ((DAT_14cb7f870 == 0) || (*(int *)(DAT_14cb7f870 + 0x348) <= (int)(uint)param_1)) {
    puVar1 = &DAT_14cb7f878;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb7f8b8) {
      FUN_144b3d300(&DAT_14cb7f8b8);
      if (DAT_14cb7f8b8 == -1) {
        DAT_14cb7f878 = 0;
        _DAT_14cb7f880 = 0;
        uRam000000014cb7f888 = 0;
        _DAT_14cb7f890 = 0;
        DAT_14cb7f898 = 0;
        _DAT_14cb7f8a0 = 0;
        _DAT_14cb7f8a8 = 0x3f800000;
        DAT_14cb7f8ac = 1;
        _DAT_14cb7f8b0 = 0x3f800000;
        atexit((_func_5014 *)&LAB_143d6a67e);
        _Init_thread_footer(&DAT_14cb7f8b8);
      }
    }
  }
  else {
    puVar1 = (undefined *)((ulonglong)param_1 * 0x40 + *(longlong *)(DAT_14cb7f870 + 0x340));
  }
  return puVar1;
}



// FUNCTION 140100f9f FUN_140100f9f body=19 status=ok
// SIG undefined FUN_140100f9f(void)

void FUN_140100f9f(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 140100fb2 FUN_140100fb2 body=294 status=ok
// SIG undefined FUN_140100fb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140100fb2(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cb98d18 = _DAT_14cb98d18 + 1;
  UNLOCK();
  plVar2 = DAT_14cb98d10;
  if (DAT_14cb98d10 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    do {
      lVar3 = plVar2[2];
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) & 0x40018000) == 0)) {
        uVar1 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          if ((*(uint *)(lVar3 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
            lVar3 = lVar3 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_140101034:
            plVar4 = plVar2;
            if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) break;
          }
        }
        else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
          lVar3 = 0;
          goto LAB_140101034;
        }
      }
      plVar2 = (longlong *)*plVar2;
      plVar4 = (longlong *)0x0;
    } while (plVar2 != (longlong *)0x0);
  }
  param_1[1] = plVar4;
  param_1[2] = &DAT_14cb98d10;
  LOCK();
  _DAT_14cb98d18 = _DAT_14cb98d18 + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_1401010d8(param_1 + 1);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cb98d10;
  LOCK();
  _DAT_14cb98d18 = _DAT_14cb98d18 + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_1401010d8(param_1 + 4);
  LOCK();
  _DAT_14cb98d18 = _DAT_14cb98d18 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 1401010d8 FUN_1401010d8 body=63 status=ok
// SIG undefined FUN_1401010d8(void)

void FUN_1401010d8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while ((lVar2 != 0 &&
         (plVar1 = (longlong *)param_1[2], lVar2 = FUN_1447210f0(*(undefined8 *)(lVar2 + 0x10)),
         lVar2 != *plVar1))) {
    lVar2 = FUN_144b3a506(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140101118 FUN_140101118 body=38 status=ok
// SIG undefined FUN_140101118(void)

bool FUN_140101118(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_14010113e();
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(longlong *)(lVar1 + 0x21f0) == param_1;
  }
  return bVar2;
}



// FUNCTION 14010113e FUN_14010113e body=519 status=ok
// SIG undefined FUN_14010113e(void)

longlong FUN_14010113e(longlong param_1)

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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1459f2e4c;
      local_38 = &LAB_148c39de3;
      local_40 = &LAB_1457a9eb2;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_1401011cf;
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      param_1 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x3c0);
      if ((DAT_14c950c29 & param_1 != 0) == 0) {
        if (param_1 == 0) goto LAB_1401011cd;
      }
      else {
        FUN_1456cec3c(param_1);
        if (DAT_14cbadd90 == 0) {
          local_30 = &local_18;
          local_18 = FUN_141030f22;
          local_20 = FUN_14081d0ea;
          local_28 = &LAB_1459f2e4c;
          local_38 = &LAB_148c39de3;
          local_40 = &LAB_1457a9eb2;
          local_48 = &DAT_149e063b2;
          local_50 = 0;
          local_58 = 0x10000004;
          local_60 = 0x10;
          local_68 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
      }
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30))
      goto LAB_1401011cf;
    }
  }
LAB_1401011cd:
  param_1 = 0;
LAB_1401011cf:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140101346 FUN_140101346 body=101 status=ok
// SIG undefined FUN_140101346(void)

void FUN_140101346(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x38))(plVar3,param_2,param_3,param_4,param_5);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1401013ad FUN_1401013ad body=687 status=ok
// SIG undefined FUN_1401013ad(void)

void FUN_1401013ad(void)

{
  return;
}



// FUNCTION 14010165c FUN_14010165c body=66 status=ok
// SIG undefined FUN_14010165c(void)

void FUN_14010165c(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if ((longlong *)plVar1[-2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-2] + 0x10))();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14010169e FUN_14010169e body=159 status=ok
// SIG undefined FUN_14010169e(void)

void FUN_14010169e(double *param_1,double *param_2)

{
  double dVar1;
  double _Y;
  
  dVar1 = param_1[3];
  _Y = param_2[2] * param_1[2] + *param_2 * *param_1 + param_1[1] * param_2[1];
  if ((((dVar1 != 0.0) || (NAN(dVar1))) || (_Y != 0.0)) || (NAN(_Y))) {
    dVar1 = atan2(_Y,dVar1);
    for (dVar1 = dVar1 + dVar1; 3.1415927410125732 < dVar1; dVar1 = dVar1 + -6.2831854820251465) {
    }
    for (; dVar1 < -3.1415927410125732; dVar1 = dVar1 + 6.2831854820251465) {
    }
  }
  return;
}



// FUNCTION 14010173e FUN_14010173e body=87 status=ok
// SIG undefined FUN_14010173e(void)

longlong FUN_14010173e(void)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  cVar1 = FUN_1401018cc();
  if (cVar1 == '\0') {
    lVar3 = 0;
  }
  else {
    plVar2 = (longlong *)FUN_1448c2e86();
    (**(code **)(*plVar2 + 8))(plVar2);
    plVar2 = (longlong *)FUN_1448c2e86();
    lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,DAT_14cacc668,0);
    lVar3 = lVar3 + -8;
    plVar2 = (longlong *)FUN_1448c2e86();
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return lVar3;
}



// FUNCTION 140101796 FUN_140101796 body=93 status=ok
// SIG undefined FUN_140101796(void)

void FUN_140101796(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1447563a6(param_1,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
    }
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return;
}



// FUNCTION 1401017f4 FUN_1401017f4 body=215 status=ok
// SIG undefined FUN_1401017f4(void)

void FUN_1401017f4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
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



// FUNCTION 1401018cc FUN_1401018cc body=389 status=ok
// SIG undefined FUN_1401018cc(void)

ulonglong FUN_1401018cc(void)

{
  int iVar1;
  undefined8 unaff_RBX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8338a0) {
    FUN_144b3d300(&DAT_14c8338a0);
    if (DAT_14c8338a0 == -1) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
  }
  (**(code **)(DAT_14c8337f0 + 8))(&DAT_14c8337f0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8338a0) {
    FUN_144b3d300(&DAT_14c8338a0);
    if (DAT_14c8338a0 == -1) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
  }
  iVar1 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,DAT_14cacc668);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8338a0) {
    FUN_144b3d300(&DAT_14c8338a0);
    if (DAT_14c8338a0 == -1) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
  }
  (**(code **)(DAT_14c8337f0 + 0x10))(&DAT_14c8337f0);
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0 < iVar1) & 0xffffffff;
}



// FUNCTION 140101a52 FUN_140101a52 body=103 status=ok
// SIG undefined FUN_140101a52(void)

void * FUN_140101a52(void *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)((longlong)param_1 + 0x88) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x8c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
  }
  else {
    FUN_140101aba(param_1,iVar1);
    if (iVar1 != 0) {
      _Dst = *(void **)((longlong)param_1 + 0x80);
      if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
        _Dst = param_1;
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 140101aba FUN_140101aba body=254 status=ok
// SIG undefined FUN_140101aba(void)

void FUN_140101aba(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 8;
    if (8 < param_2) {
      uVar2 = (longlong)(int)param_2 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar2 < 0x7ff1) {
            uVar2 = (ulonglong)
                    (ushort)(&DAT_14c841d90)
                            [0x32 - (byte)(&DAT_14c841e00)
                                          [(longlong)(int)param_2 & 0xfffffffffffffff]];
          }
          else {
            uVar3 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar3 = (ulonglong)DAT_14c841df8;
            }
            uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
          }
        }
        else {
          uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
        }
      }
      uVar1 = (uint)(uVar2 >> 4);
      uVar4 = 0x7fffffff;
      if ((int)param_2 <= (int)uVar1) {
        uVar4 = uVar1;
      }
    }
  }
  if (((int)param_3 < (int)uVar4) &&
     ((param_3 = uVar4, 8 < uVar4 || (uVar4 = 0, *(longlong *)(param_1 + 0x80) != 0)))) {
    FUN_1446efa72((longlong *)(param_1 + 0x80),0,uVar4,0x10);
  }
  *(uint *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 140101bb8 FUN_140101bb8 body=106 status=ok
// SIG undefined FUN_140101bb8(void)

longlong FUN_140101bb8(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) == iVar1) {
    FUN_14791f866(param_1,iVar1);
  }
  lVar3 = (longlong)param_2 * 0x18;
  memmove((void *)(*param_1 + lVar3 + 0x18),(void *)(*param_1 + lVar3),
          (ulonglong)(uint)(iVar1 - param_2) * 0x18);
  lVar2 = *param_1;
  FUN_140102019(lVar3 + lVar2);
  return lVar3 + lVar2;
}



// FUNCTION 140101c22 FUN_140101c22 body=452 status=ok
// SIG undefined FUN_140101c22(void)

void FUN_140101c22(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  if (*(int *)(param_1 + 0x35c) != 0) {
    FUN_14481578e(param_1 + 0x350,0);
  }
  *(undefined4 *)(param_1 + 0x368) = 0;
  if (*(int *)(param_1 + 0x36c) != 0) {
    FUN_140678446(param_1 + 0x360,0);
  }
  *(undefined4 *)(param_1 + 0x378) = 0;
  if (*(int *)(param_1 + 0x37c) != 0) {
    FUN_14482f6fa(param_1 + 0x370,0);
  }
  *(undefined4 *)(param_1 + 0x388) = 0;
  if (*(int *)(param_1 + 0x38c) != 0) {
    FUN_14482f6fa(param_1 + 0x380,0);
  }
  *(undefined4 *)(param_1 + 0x398) = 0;
  if (*(int *)(param_1 + 0x39c) != 0) {
    FUN_140678446(param_1 + 0x390,0);
  }
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  if (*(int *)(param_1 + 0x3ac) != 0) {
    FUN_14482f6fa(param_1 + 0x3a0,0);
  }
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  if (*(int *)(param_1 + 0x3bc) != 0) {
    FUN_14482f6fa(param_1 + 0x3b0,0);
  }
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  if (*(int *)(param_1 + 0x3cc) != 0) {
    FUN_140678446(param_1 + 0x3c0,0);
  }
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  if (*(int *)(param_1 + 0x3dc) != 0) {
    FUN_14482f6fa(param_1 + 0x3d0,0);
  }
  *(undefined4 *)(param_1 + 1000) = 0;
  if (*(int *)(param_1 + 0x3ec) != 0) {
    FUN_14482f6fa(param_1 + 0x3e0,0);
  }
  if (*(int *)(param_1 + 0x42c) < 0) {
    *(undefined4 *)(param_1 + 0x428) = 0;
    FUN_14010237e(param_1 + 0x420,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x428) = 0;
  }
  *(undefined1 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  if (*(int *)(param_1 + 0x344) != 0) {
    FUN_14482f6fa(param_1 + 0x338,0);
  }
  *(undefined8 *)(param_1 + 0x32c) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  return;
}



// FUNCTION 140101de6 FUN_140101de6 body=498 status=ok
// SIG undefined FUN_140101de6(void)

void FUN_140101de6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  
  uVar8 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14010237e(param_1,0);
    uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  }
  iVar1 = (int)param_2[1];
  if (iVar1 == 0) {
LAB_140101ebd:
    *(char *)(param_1 + 2) = (char)param_2[2];
    return;
  }
  iVar11 = (int)uVar8;
  if ((char)param_1[2] == '\0') {
    FUN_14010202e(*param_1,uVar8);
    *(undefined1 *)(param_1 + 2) = 1;
  }
  if ((char)param_2[2] == '\0') {
    FUN_144716af1(*param_2,(int)param_2[1]);
    *(undefined1 *)(param_2 + 2) = 1;
  }
  iVar7 = iVar11;
  if (iVar11 < iVar1) {
    iVar7 = iVar1;
  }
  iVar7 = iVar7 / 2 + iVar7;
  if (-1 < iVar7) {
    if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
      FUN_14010237e(param_1);
    }
    if ((iVar11 != 0) || (iVar11 = 0, iVar1 < 1)) {
      uVar10 = 0;
      lVar9 = 0xc;
      iVar11 = 0;
      do {
        if ((iVar11 == iVar1) && ((longlong)uVar10 <= (longlong)(int)uVar8)) goto LAB_140101ebd;
        lVar2 = *param_1;
        puVar5 = (undefined8 *)(*param_2 + (longlong)iVar11 * 0x10);
        lVar3 = *(longlong *)(*param_2 + (longlong)iVar11 * 0x10);
        lVar4 = *(longlong *)(lVar2 + -0xc + lVar9);
        if (lVar4 == lVar3) {
          *(undefined4 *)(lVar2 + -4 + lVar9) = *(undefined4 *)(puVar5 + 1);
          *(undefined1 *)(lVar2 + lVar9) = *(undefined1 *)((longlong)puVar5 + 0xc);
LAB_140101f42:
          iVar11 = iVar11 + 1;
        }
        else {
          iVar7 = (int)lVar4 - (int)lVar3;
          if (iVar7 == 0) {
            iVar7 = (int)((ulonglong)lVar4 >> 0x20) - (int)((ulonglong)lVar3 >> 0x20);
          }
          if (-1 < iVar7) {
            puVar6 = (undefined8 *)FUN_140101bb8(param_1,uVar10 & 0xffffffff);
            uVar8 = (ulonglong)*(uint *)(param_1 + 1);
            *puVar6 = *puVar5;
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar5 + 1);
            *(undefined1 *)((longlong)puVar6 + 0xc) = *(undefined1 *)((longlong)puVar5 + 0xc);
            goto LAB_140101f42;
          }
          *(undefined4 *)(lVar2 + -4 + lVar9) = 0;
          *(undefined1 *)(lVar2 + lVar9) = 0;
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x18;
      } while ((uVar10 != uVar8) || (iVar1 <= iVar11));
    }
    iVar7 = (iVar1 - iVar11) + (int)param_1[1];
    if (-1 < iVar7) {
      if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
        FUN_14010237e(param_1);
      }
      iVar7 = iVar1 - iVar11;
      if (iVar7 != 0 && iVar11 <= iVar1) {
        uVar8 = (longlong)iVar11 << 4 | 0xc;
        do {
          lVar9 = *param_2;
          puVar5 = (undefined8 *)FUN_140101fd8(param_1);
          *puVar5 = *(undefined8 *)(lVar9 + -0xc + uVar8);
          *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(lVar9 + -4 + uVar8);
          *(undefined1 *)((longlong)puVar5 + 0xc) = *(undefined1 *)(lVar9 + uVar8);
          uVar8 = uVar8 + 0x10;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      goto LAB_140101ebd;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar7);
}



// FUNCTION 140101fd8 FUN_140101fd8 body=65 status=ok
// SIG undefined FUN_140101fd8(void)

longlong FUN_140101fd8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14791f866(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_140102019(lVar2);
  return lVar2;
}



// FUNCTION 140102019 FUN_140102019 body=21 status=ok
// SIG undefined FUN_140102019(void)

void FUN_140102019(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 14010202e FUN_14010202e body=846 status=ok
// SIG undefined FUN_14010202e(void)

void FUN_14010202e(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  longlong *plVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  float fVar21;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0x18 + -0x18;
    local_358 = param_1;
    fVar21 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar21 + fVar21);
    plVar15 = &local_358;
    do {
      piVar7 = (int *)*plVar15;
      piVar16 = (int *)plVar15[1];
      iVar18 = (int)plVar15[2];
      iVar14 = (int)((ulonglong)((longlong)piVar16 - (longlong)piVar7) >> 3);
      piVar19 = piVar16;
      piVar12 = piVar7;
      if (iVar18 != 0) {
LAB_1401020fb:
        uVar9 = iVar14 * -0x55555555 + 1;
        if (8 < (int)uVar9) {
          uVar10 = (ulonglong)(uVar9 >> 1);
          uVar1 = *(undefined8 *)(piVar7 + uVar10 * 6 + 4);
          uVar2 = *(undefined8 *)(piVar7 + uVar10 * 6);
          uVar3 = *(undefined8 *)(piVar7 + uVar10 * 6 + 2);
          *(undefined8 *)(piVar7 + uVar10 * 6 + 4) = *(undefined8 *)(piVar7 + 4);
          uVar4 = *(undefined8 *)(piVar7 + 2);
          *(undefined8 *)(piVar7 + uVar10 * 6) = *(undefined8 *)piVar7;
          *(undefined8 *)(piVar7 + uVar10 * 6 + 2) = uVar4;
          *(undefined8 *)(piVar7 + 4) = uVar1;
          *(undefined8 *)piVar7 = uVar2;
          *(undefined8 *)(piVar7 + 2) = uVar3;
          piVar11 = piVar16 + 6;
          piVar8 = piVar7;
          do {
            piVar5 = piVar8 + 6;
            piVar17 = piVar8 + 6;
            do {
              piVar8 = piVar17;
              piVar13 = piVar5;
              if (piVar16 < piVar8) break;
              iVar14 = *piVar7 - *piVar8;
              if (*piVar7 - *piVar8 == 0) {
                iVar14 = piVar7[1] - piVar8[1];
              }
              piVar5 = piVar13 + 6;
              piVar17 = piVar8 + 6;
            } while (-1 < iVar14);
            piVar5 = piVar11 + -0xc;
            do {
              piVar17 = piVar11;
              piVar20 = piVar5;
              piVar11 = piVar17 + -6;
              if (piVar11 <= piVar7) break;
              iVar14 = *piVar11 - *piVar7;
              if (*piVar11 - *piVar7 == 0) {
                iVar14 = piVar17[-5] - piVar7[1];
              }
              piVar5 = piVar20 + -6;
            } while (-1 < iVar14);
            if (piVar11 < piVar8) goto LAB_1401021fa;
            uVar1 = *(undefined8 *)(piVar8 + 4);
            uVar2 = *(undefined8 *)piVar8;
            uVar3 = *(undefined8 *)(piVar8 + 2);
            *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(piVar17 + -2);
            uVar4 = *(undefined8 *)(piVar17 + -4);
            *(undefined8 *)piVar8 = *(undefined8 *)piVar11;
            *(undefined8 *)(piVar8 + 2) = uVar4;
            *(undefined8 *)(piVar17 + -2) = uVar1;
            *(undefined8 *)piVar11 = uVar2;
            *(undefined8 *)(piVar17 + -4) = uVar3;
          } while( true );
        }
        if (piVar7 < piVar16) {
          do {
            piVar19 = piVar7;
            if (piVar7 + 6 <= piVar16) {
              iVar18 = *piVar7;
              piVar12 = piVar7 + 6;
              piVar11 = piVar7;
              do {
                iVar14 = iVar18 - *piVar12;
                if (iVar14 == 0) {
                  iVar14 = piVar11[1] - piVar12[1];
                }
                piVar19 = piVar12;
                iVar6 = *piVar12;
                if (-1 < iVar14) {
                  piVar19 = piVar11;
                  iVar6 = iVar18;
                }
                iVar18 = iVar6;
                piVar12 = piVar12 + 6;
                piVar11 = piVar19;
              } while (piVar12 <= piVar16);
            }
            local_48 = *(undefined8 *)(piVar19 + 4);
            local_58 = *(undefined8 *)piVar19;
            uStack_50 = *(undefined8 *)(piVar19 + 2);
            uVar2 = local_58;
            uVar3 = uStack_50;
            *(undefined8 *)(piVar19 + 4) = *(undefined8 *)(piVar16 + 4);
            uVar1 = *(undefined8 *)(piVar16 + 2);
            *(undefined8 *)piVar19 = *(undefined8 *)piVar16;
            *(undefined8 *)(piVar19 + 2) = uVar1;
            *(undefined8 *)(piVar16 + 4) = local_48;
            local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
            *piVar16 = (int)local_58;
            piVar16[1] = local_58._4_4_;
            piVar16[2] = (int)uStack_50;
            piVar16[3] = uStack_50._4_4_;
            piVar16 = piVar16 + -6;
            local_58 = uVar2;
            uStack_50 = uVar3;
          } while (piVar7 < piVar16);
        }
        goto LAB_140102361;
      }
LAB_140102376:
      FUN_14791f5ed(piVar7);
LAB_140102361:
      plVar15 = plVar15 + -3;
    } while (&local_358 <= plVar15);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1401021fa:
  local_48 = *(undefined8 *)(piVar7 + 4);
  local_58 = *(undefined8 *)piVar7;
  uStack_50 = *(undefined8 *)(piVar7 + 2);
  uVar2 = local_58;
  uVar3 = uStack_50;
  *(undefined8 *)(piVar7 + 4) = *(undefined8 *)(piVar17 + -2);
  uVar1 = *(undefined8 *)(piVar17 + -4);
  *(undefined8 *)piVar7 = *(undefined8 *)piVar11;
  *(undefined8 *)(piVar7 + 2) = uVar1;
  *(undefined8 *)(piVar17 + -2) = local_48;
  local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
  *piVar11 = (int)local_58;
  piVar17[-5] = local_58._4_4_;
  piVar17[-4] = (int)uStack_50;
  piVar17[-3] = uStack_50._4_4_;
  iVar18 = iVar18 + -1;
  piVar17 = piVar17 + -0xc;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if ((longlong)piVar20 - (longlong)piVar12 < (longlong)piVar19 - (longlong)piVar13) {
    if (piVar8 < piVar16) {
      *plVar15 = (longlong)piVar8;
      plVar15[1] = (longlong)piVar16;
      *(int *)(plVar15 + 2) = iVar18;
      plVar15 = plVar15 + 3;
    }
    piVar13 = piVar7;
    if (piVar11 <= piVar7 + 6) goto LAB_140102361;
  }
  else {
    if (piVar7 + 6 < piVar11) {
      *plVar15 = (longlong)piVar7;
      plVar15[1] = (longlong)piVar17;
      *(int *)(plVar15 + 2) = iVar18;
      plVar15 = plVar15 + 3;
    }
    piVar7 = piVar8;
    piVar17 = piVar16;
    piVar20 = piVar16;
    if (piVar16 <= piVar8) goto LAB_140102361;
  }
  iVar14 = (int)((ulonglong)((longlong)piVar20 - (longlong)piVar13) >> 3);
  piVar16 = piVar17;
  piVar19 = piVar20;
  piVar12 = piVar13;
  if (iVar18 == 0) goto LAB_140102376;
  goto LAB_1401020fb;
}



// FUNCTION 14010237e FUN_14010237e body=337 status=ok
// SIG undefined FUN_14010237e(void)

void FUN_14010237e(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x555) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x1ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1401023eb;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x1ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_1401023eb:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x18)) {
      uVar3 = uVar4 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,4);
  }
  return;
}



// FUNCTION 1401024cf FUN_1401024cf body=694 status=ok
// SIG undefined FUN_1401024cf(void)

void FUN_1401024cf(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  longlong *plVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  float fVar19;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_358 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar19 + fVar19);
    plVar13 = &local_358;
    do {
      piVar6 = (int *)*plVar13;
      piVar14 = (int *)plVar13[1];
      iVar16 = (int)plVar13[2];
      iVar12 = (int)((ulonglong)((longlong)piVar14 - (longlong)piVar6) >> 4);
      piVar17 = piVar14;
      piVar8 = piVar6;
      if (iVar16 != 0) {
LAB_14010256d:
        if (8 < (int)(iVar12 + 1U)) {
          uVar9 = (ulonglong)(iVar12 + 1U >> 1);
          uVar1 = *(undefined8 *)(piVar6 + uVar9 * 4);
          uVar2 = *(undefined8 *)(piVar6 + uVar9 * 4 + 2);
          uVar3 = *(undefined8 *)(piVar6 + 2);
          *(undefined8 *)(piVar6 + uVar9 * 4) = *(undefined8 *)piVar6;
          *(undefined8 *)(piVar6 + uVar9 * 4 + 2) = uVar3;
          *(undefined8 *)piVar6 = uVar1;
          *(undefined8 *)(piVar6 + 2) = uVar2;
          piVar10 = piVar14 + 4;
          piVar7 = piVar6;
          do {
            piVar4 = piVar7 + 4;
            piVar15 = piVar7 + 4;
            do {
              piVar7 = piVar15;
              piVar11 = piVar4;
              if (piVar14 < piVar7) break;
              iVar12 = *piVar6 - *piVar7;
              if (*piVar6 - *piVar7 == 0) {
                iVar12 = piVar6[1] - piVar7[1];
              }
              piVar4 = piVar11 + 4;
              piVar15 = piVar7 + 4;
            } while (-1 < iVar12);
            piVar4 = piVar10 + -8;
            do {
              piVar15 = piVar10;
              piVar18 = piVar4;
              piVar10 = piVar15 + -4;
              if (piVar10 <= piVar6) break;
              iVar12 = *piVar10 - *piVar6;
              if (*piVar10 - *piVar6 == 0) {
                iVar12 = piVar15[-3] - piVar6[1];
              }
              piVar4 = piVar18 + -4;
            } while (-1 < iVar12);
            if (piVar10 < piVar7) goto LAB_1401026e2;
            uVar1 = *(undefined8 *)piVar7;
            uVar2 = *(undefined8 *)(piVar7 + 2);
            uVar3 = *(undefined8 *)(piVar15 + -2);
            *(undefined8 *)piVar7 = *(undefined8 *)piVar10;
            *(undefined8 *)(piVar7 + 2) = uVar3;
            *(undefined8 *)piVar10 = uVar1;
            *(undefined8 *)(piVar15 + -2) = uVar2;
          } while( true );
        }
        if (piVar6 < piVar14) {
          do {
            piVar17 = piVar6;
            if (piVar6 + 4 <= piVar14) {
              iVar16 = *piVar6;
              piVar8 = piVar6 + 4;
              piVar10 = piVar6;
              do {
                iVar12 = iVar16 - *piVar8;
                if (iVar12 == 0) {
                  iVar12 = piVar10[1] - piVar8[1];
                }
                piVar17 = piVar8;
                iVar5 = *piVar8;
                if (-1 < iVar12) {
                  piVar17 = piVar10;
                  iVar5 = iVar16;
                }
                iVar16 = iVar5;
                piVar8 = piVar8 + 4;
                piVar10 = piVar17;
              } while (piVar8 <= piVar14);
            }
            local_58 = *(undefined8 *)piVar17;
            uStack_50 = *(undefined8 *)(piVar17 + 2);
            uVar2 = local_58;
            uVar3 = uStack_50;
            uVar1 = *(undefined8 *)(piVar14 + 2);
            *(undefined8 *)piVar17 = *(undefined8 *)piVar14;
            *(undefined8 *)(piVar17 + 2) = uVar1;
            local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
            *piVar14 = (int)local_58;
            piVar14[1] = local_58._4_4_;
            piVar14[2] = (int)uStack_50;
            piVar14[3] = uStack_50._4_4_;
            piVar14 = piVar14 + -4;
            local_58 = uVar2;
            uStack_50 = uVar3;
          } while (piVar6 < piVar14);
        }
        goto LAB_1401025eb;
      }
LAB_140102627:
      FUN_14791f22b(piVar6);
LAB_1401025eb:
      plVar13 = plVar13 + -3;
    } while (&local_358 <= plVar13);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1401026e2:
  local_58 = *(undefined8 *)piVar6;
  uStack_50 = *(undefined8 *)(piVar6 + 2);
  uVar2 = local_58;
  uVar3 = uStack_50;
  uVar1 = *(undefined8 *)(piVar15 + -2);
  *(undefined8 *)piVar6 = *(undefined8 *)piVar10;
  *(undefined8 *)(piVar6 + 2) = uVar1;
  local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
  *piVar10 = (int)local_58;
  piVar15[-3] = local_58._4_4_;
  piVar15[-2] = (int)uStack_50;
  piVar15[-1] = uStack_50._4_4_;
  iVar16 = iVar16 + -1;
  piVar15 = piVar15 + -8;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if ((longlong)piVar18 - (longlong)piVar8 < (longlong)piVar17 - (longlong)piVar11) {
    if (piVar7 < piVar14) {
      *plVar13 = (longlong)piVar7;
      plVar13[1] = (longlong)piVar14;
      *(int *)(plVar13 + 2) = iVar16;
      plVar13 = plVar13 + 3;
    }
    piVar11 = piVar6;
    if (piVar10 <= piVar6 + 4) goto LAB_1401025eb;
  }
  else {
    if (piVar6 + 4 < piVar10) {
      *plVar13 = (longlong)piVar6;
      plVar13[1] = (longlong)piVar15;
      *(int *)(plVar13 + 2) = iVar16;
      plVar13 = plVar13 + 3;
    }
    piVar6 = piVar7;
    piVar15 = piVar14;
    piVar18 = piVar14;
    if (piVar14 <= piVar7) goto LAB_1401025eb;
  }
  iVar12 = (int)((ulonglong)((longlong)piVar18 - (longlong)piVar11) >> 4);
  piVar14 = piVar15;
  piVar17 = piVar18;
  piVar8 = piVar11;
  if (iVar16 == 0) goto LAB_140102627;
  goto LAB_14010256d;
}



// FUNCTION 140102786 FUN_140102786 body=702 status=ok
// SIG undefined FUN_140102786(void)

void FUN_140102786(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  longlong *plVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  float fVar19;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_358 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar19 + fVar19);
    plVar14 = &local_358;
    do {
      piVar7 = (int *)*plVar14;
      piVar15 = (int *)plVar14[1];
      iVar16 = (int)plVar14[2];
      iVar13 = (int)((ulonglong)((longlong)piVar15 - (longlong)piVar7) >> 4);
      piVar8 = piVar7;
      piVar11 = piVar15;
      piVar17 = piVar7;
      if (iVar16 != 0) {
LAB_14010284c:
        if (8 < (int)(iVar13 + 1U)) {
          uVar9 = (ulonglong)(iVar13 + 1U >> 1);
          uVar1 = *(undefined8 *)(piVar7 + uVar9 * 4);
          uVar2 = *(undefined8 *)(piVar7 + uVar9 * 4 + 2);
          uVar3 = *(undefined8 *)(piVar7 + 2);
          *(undefined8 *)(piVar7 + uVar9 * 4) = *(undefined8 *)piVar7;
          *(undefined8 *)(piVar7 + uVar9 * 4 + 2) = uVar3;
          *(undefined8 *)piVar7 = uVar1;
          *(undefined8 *)(piVar7 + 2) = uVar2;
          piVar10 = piVar15 + 4;
          piVar8 = piVar7;
          do {
            piVar4 = piVar8 + 4;
            piVar5 = piVar8 + 4;
            do {
              piVar8 = piVar5;
              piVar12 = piVar4;
              if (piVar15 < piVar8) break;
              iVar13 = *piVar7 - *piVar8;
              if (*piVar7 - *piVar8 == 0) {
                iVar13 = piVar7[1] - piVar8[1];
              }
              piVar4 = piVar12 + 4;
              piVar5 = piVar8 + 4;
            } while (-1 < iVar13);
            piVar4 = piVar10 + -8;
            do {
              piVar5 = piVar10;
              piVar18 = piVar4;
              piVar10 = piVar5 + -4;
              if (piVar10 <= piVar7) break;
              iVar13 = *piVar10 - *piVar7;
              if (*piVar10 - *piVar7 == 0) {
                iVar13 = piVar5[-3] - piVar7[1];
              }
              piVar4 = piVar18 + -4;
            } while (-1 < iVar13);
            if (piVar10 < piVar8) goto code_r0x0001401028ec;
            uVar1 = *(undefined8 *)piVar8;
            uVar2 = *(undefined8 *)(piVar8 + 2);
            uVar3 = *(undefined8 *)(piVar5 + -2);
            *(undefined8 *)piVar8 = *(undefined8 *)piVar10;
            *(undefined8 *)(piVar8 + 2) = uVar3;
            *(undefined8 *)piVar10 = uVar1;
            *(undefined8 *)(piVar5 + -2) = uVar2;
          } while( true );
        }
        if (piVar7 < piVar15) {
          do {
            piVar8 = piVar7;
            if (piVar7 + 4 <= piVar15) {
              iVar16 = *piVar7;
              piVar11 = piVar7 + 4;
              piVar17 = piVar7;
              do {
                iVar13 = iVar16 - *piVar11;
                if (iVar13 == 0) {
                  iVar13 = piVar17[1] - piVar11[1];
                }
                piVar8 = piVar11;
                iVar6 = *piVar11;
                if (-1 < iVar13) {
                  piVar8 = piVar17;
                  iVar6 = iVar16;
                }
                iVar16 = iVar6;
                piVar11 = piVar11 + 4;
                piVar17 = piVar8;
              } while (piVar11 <= piVar15);
            }
            local_58 = *(undefined8 *)piVar8;
            uStack_50 = *(undefined8 *)(piVar8 + 2);
            uVar2 = local_58;
            uVar3 = uStack_50;
            uVar1 = *(undefined8 *)(piVar15 + 2);
            *(undefined8 *)piVar8 = *(undefined8 *)piVar15;
            *(undefined8 *)(piVar8 + 2) = uVar1;
            local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
            *piVar15 = (int)local_58;
            piVar15[1] = local_58._4_4_;
            piVar15[2] = (int)uStack_50;
            piVar15[3] = uStack_50._4_4_;
            piVar15 = piVar15 + -4;
            local_58 = uVar2;
            uStack_50 = uVar3;
          } while (piVar7 < piVar15);
        }
        goto LAB_1401029dd;
      }
LAB_1401029f2:
      FUN_1474da528(piVar8);
LAB_1401029dd:
      plVar14 = plVar14 + -3;
    } while (&local_358 <= plVar14);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001401028ec:
  local_58 = *(undefined8 *)piVar7;
  uStack_50 = *(undefined8 *)(piVar7 + 2);
  uVar2 = local_58;
  uVar3 = uStack_50;
  uVar1 = *(undefined8 *)(piVar5 + -2);
  *(undefined8 *)piVar7 = *(undefined8 *)piVar10;
  *(undefined8 *)(piVar7 + 2) = uVar1;
  local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (int)((ulonglong)uStack_50 >> 0x20);
  *piVar10 = (int)local_58;
  piVar5[-3] = local_58._4_4_;
  piVar5[-2] = (int)uStack_50;
  piVar5[-1] = uStack_50._4_4_;
  iVar16 = iVar16 + -1;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if ((longlong)piVar18 - (longlong)piVar17 < (longlong)piVar11 - (longlong)piVar12) {
    if (piVar8 < piVar15) {
      *plVar14 = (longlong)piVar8;
      plVar14[1] = (longlong)piVar15;
      *(int *)(plVar14 + 2) = iVar16;
      plVar14 = plVar14 + 3;
    }
    piVar8 = piVar7;
    piVar12 = piVar7;
    piVar15 = piVar5 + -8;
    if (piVar10 <= piVar7 + 4) goto LAB_1401029dd;
  }
  else {
    if (piVar7 + 4 < piVar10) {
      *plVar14 = (longlong)piVar7;
      plVar14[1] = (longlong)(piVar5 + -8);
      *(int *)(plVar14 + 2) = iVar16;
      plVar14 = plVar14 + 3;
    }
    piVar18 = piVar15;
    if (piVar15 <= piVar8) goto LAB_1401029dd;
  }
  iVar13 = (int)((ulonglong)((longlong)piVar18 - (longlong)piVar12) >> 4);
  piVar7 = piVar8;
  piVar11 = piVar18;
  piVar17 = piVar12;
  if (iVar16 == 0) goto LAB_1401029f2;
  goto LAB_14010284c;
}



// FUNCTION 140102a46 FUN_140102a46 body=29 status=ok
// SIG undefined FUN_140102a46(void)

void FUN_140102a46(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140102a64 FUN_140102a64 body=31 status=ok
// SIG undefined FUN_140102a64(void)

undefined8 FUN_140102a64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140102a84 FUN_140102a84 body=96 status=ok
// SIG undefined FUN_140102a84(void)

void FUN_140102a84(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[2];
  param_1[2] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  FUN_140102ae4(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar2 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_1478c37fe(param_1);
    return;
  }
  return;
}



// FUNCTION 140102ae4 FUN_140102ae4 body=40 status=ok
// SIG undefined FUN_140102ae4(void)

void FUN_140102ae4(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140102b0c(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 140102b0c FUN_140102b0c body=99 status=ok
// SIG undefined FUN_140102b0c(void)

void FUN_140102b0c(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140102b70 FUN_140102b70 body=326 status=ok
// SIG undefined FUN_140102b70(void)

undefined8 FUN_140102b70(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  *(undefined2 *)(param_1 + 0x489) = 0;
  cVar2 = FUN_143ca640c();
  if (cVar2 != '\0') {
    return 1;
  }
  lVar3 = *param_2;
  if (((((*(int *)(lVar3 + 0xdc4) == 0) || (uVar1 = *(uint *)(lVar3 + 0xdc0), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 == 0 ||
       (*(int *)(lVar5 + 0x10) != *(int *)(lVar3 + 0xdc4))))) ||
     ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)) {
    if (*(int *)(lVar3 + 0xcec) != 0) {
      uVar1 = *(uint *)(lVar3 + 0xce8);
      if ((int)uVar1 < 0) {
        return 0;
      }
      if (DAT_14c9647dc <= (int)uVar1) {
        return 0;
      }
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(lVar3 + 0xcec))) &&
         (((*(uint *)(lVar5 + 8) & 0x10200000) == 0 && ((*(byte *)(lVar3 + 0xcc0) & 4) == 0)))) {
        *(undefined1 *)(param_1 + 0x48a) = 1;
        memcpy((void *)(param_1 + 0x1f0),(void *)(param_1 + 0x3e0),0x90);
        *(undefined1 *)(param_1 + 0x1e8) = 3;
        uVar6 = 0x3f800000;
        lVar3 = 0x2c0;
        goto LAB_140102ca8;
      }
    }
    uVar4 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x489) = 1;
    *(undefined1 *)(param_1 + 0x1e8) = 1;
    *(undefined4 *)(param_1 + 0x2c0) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1cc) = 0x3f800000;
    uVar6 = 0;
    lVar3 = 0x1d0;
LAB_140102ca8:
    *(undefined4 *)(param_1 + lVar3) = uVar6;
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 140102cb6 FUN_140102cb6 body=268 status=ok
// SIG undefined FUN_140102cb6(void)

undefined8 FUN_140102cb6(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined1 *)(param_1 + 0x2cc) = 0;
  if ((*(byte *)(param_1 + 0x1dc) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x2c0) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x1cc) = 0x3f80000000000000;
    memcpy((void *)(param_1 + 0x1f0),(void *)(param_1 + 0x60),0x90);
    *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x100);
    *(undefined1 *)(param_1 + 0x1e8) = *(undefined1 *)(param_1 + 0x108);
    return CONCAT71((int7)((ulonglong)*(undefined8 *)(param_1 + 0x100) >> 8),1);
  }
  lVar2 = *param_2;
  if (*(int *)(lVar2 + 0xdc4) != 0) {
    uVar1 = *(uint *)(lVar2 + 0xdc0);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(lVar2 + 0xdc4))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      if (*(int *)(param_1 + 0x2c8) == -1) {
        return 0;
      }
      if (*(int *)(lVar2 + 0xcf8) == -1) {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x2cc) = 1;
      *(undefined1 *)(param_1 + 0x1e8) = 1;
      *(undefined4 *)(param_1 + 0x2c0) = 0x3f800000;
      *(undefined8 *)(param_1 + 0x1cc) = 0x3f800000;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140102dc2 FUN_140102dc2 body=105 status=ok
// SIG undefined FUN_140102dc2(void)

void FUN_140102dc2(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  
  if (param_2 != 0) {
    pcVar4 = (char *)(param_1 + 0x540);
    do {
      if (*pcVar4 == '\x01') {
        FUN_144815b4a(pcVar4 + -0x4c8);
        *pcVar4 = '\0';
      }
      plVar3 = *(longlong **)(pcVar4 + -0x500);
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
      pcVar4 = pcVar4 + 0x548;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140102e2b FUN_140102e2b body=310 status=ok
// SIG undefined FUN_140102e2b(void)

undefined1 FUN_140102e2b(void)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca43330) {
    FUN_144b3d300(&DAT_14ca43330);
    if (DAT_14ca43330 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.gbx.ProjectOverrideForegroundAsBackgroundDepth",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14ca43328 = 0;
      }
      else {
        DAT_14ca43328 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14ca43330);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca43338) {
    FUN_144b3d300(&DAT_14ca43338);
    lVar1 = DAT_14ca43328;
    if (DAT_14ca43338 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar4 = 0;
      }
      else {
        bVar2 = FUN_144a61b4f();
        uVar4 = (ulonglong)(bVar2 ^ 1);
      }
      DAT_14ca43334 = *(int *)(lVar1 + uVar4 * 4) != 0;
      _Init_thread_footer(&DAT_14ca43338);
    }
  }
  return DAT_14ca43334;
}



// FUNCTION 140102f62 FUN_140102f62 body=551 status=ok
// SIG undefined FUN_140102f62(void)

void FUN_140102f62(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  void **local_78;
  void *local_70;
  undefined2 *local_68;
  int local_60;
  void *local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_1449027d0(param_1,&local_58);
    plVar4 = *(longlong **)((longlong)local_58 + 0x4d0);
    AcquireSRWLockExclusive((PSRWLOCK)(plVar4 + 0x2d));
    plVar7 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (param_3 == 0) {
      local_58 = (void *)0x0;
      plStack_50 = (longlong *)0x0;
    }
    else {
      FUN_14010318a(param_3,&local_68,0);
      puVar11 = local_68;
      if (local_60 == 0) {
        puVar11 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_58,L"TextureRenderTarget2D\'%s\'",puVar11);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((longlong)(int)plVar4[1] != 0) {
      lVar10 = *plVar4;
      lVar12 = (longlong)(int)plVar4[1] * 0xb0 + lVar10;
      local_80 = 0;
      do {
        iVar3 = *(int *)(lVar10 + 0x50);
        if ((longlong)iVar3 != 0) {
          lVar5 = *(longlong *)(lVar10 + 0x48);
          lVar9 = 0;
          do {
            if ((*(longlong *)(lVar5 + lVar9) != 0) &&
               (cVar8 = FUN_140c3e654(*(longlong *)(lVar5 + lVar9) + 0x90,param_2), cVar8 != '\0'))
            {
              if ((local_80 & 1) == 0) {
                *(int *)(plVar4 + 0x2c) = (int)plVar4[0x2c] + 1;
              }
              lVar6 = *(longlong *)(lVar5 + lVar9);
              local_78 = (void **)(lVar6 + 0x50);
              if (local_78 != &local_58) {
                local_80 = (ulonglong)(int)plStack_50;
                local_70 = local_58;
                *(int *)(lVar6 + 0x58) = (int)plStack_50;
                if ((int)plStack_50 == 0 && *(int *)(lVar6 + 0x5c) == 0) {
                  *(undefined4 *)(lVar6 + 0x5c) = 0;
                }
                else {
                  FUN_1446dd670(local_78,local_80);
                  if ((int)local_80 != 0) {
                    memcpy(*local_78,local_70,local_80 * 2);
                  }
                }
              }
              lVar6 = *(longlong *)(lVar5 + lVar9);
              *(undefined1 *)(lVar6 + 0x88) = 0;
              local_80 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
            }
            lVar9 = lVar9 + 0x10;
          } while ((longlong)iVar3 * 0x10 != lVar9);
        }
        lVar10 = lVar10 + 0xb0;
      } while (lVar10 != lVar12);
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(plVar4 + 0x2d));
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14010318a FUN_14010318a body=34 status=ok
// SIG undefined FUN_14010318a(void)

undefined8 * FUN_14010318a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1401031ac(0,param_3,param_2);
  return param_2;
}



// FUNCTION 1401031ac FUN_1401031ac body=146 status=ok
// SIG undefined FUN_1401031ac(void)

void FUN_1401031ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  undefined1 *local_230;
  ulonglong *local_228;
  char local_220;
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_238 = local_218;
  local_220 = '\0';
  local_228 = &local_18;
  local_230 = local_238;
  FUN_144750bde(param_1,param_2,&local_238);
  FUN_1400020e8(param_3,local_238,(ulonglong)((longlong)local_230 - (longlong)local_238) >> 1);
  if (local_220 == '\x01') {
    FUN_1400020a8(local_238);
  }
  if ((local_18 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



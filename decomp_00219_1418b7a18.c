// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1418b7a18 FUN_1418b7a18 body=729 status=ok
// SIG undefined FUN_1418b7a18(void)

void FUN_1418b7a18(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(char *)((longlong)param_1 + 0x172) != param_2) && (param_1[0x18] != 0)) {
    lVar6 = FUN_1449db7f2();
    lVar4 = param_1[0x18];
    if ((((lVar4 != 0) &&
         ((((lVar6 != 0 && (lVar5 = *(longlong *)(lVar4 + 0x10), lVar5 != 0)) &&
           (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
          ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30 && (lVar6 = (**(code **)(*param_1 + 0x180))(param_1), lVar6 != 0)))))) &&
        ((bVar3 = *(byte *)(lVar6 + 0x152), bVar3 == 1 ||
         ((bVar3 < 7 && ((0x68U >> (bVar3 & 0x1f) & 1) != 0)))))) &&
       ((plVar7 = (longlong *)FUN_1449baec6(lVar6), plVar7 != (longlong *)0x0 &&
        (lVar6 = param_1[5], lVar6 != 0)))) {
      *(char *)((longlong)param_1 + 0x172) = param_2;
      plVar8 = (longlong *)param_1[6];
      if (param_2 == '\0') {
        local_60 = lVar6;
        if (plVar8 == (longlong *)0x0) {
          local_58 = (longlong *)0x0;
          (**(code **)(*plVar7 + 0x2e0))(plVar7);
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          local_58 = plVar8;
          (**(code **)(*plVar7 + 0x2e0))(plVar7);
          LOCK();
          plVar1 = plVar8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        local_70 = param_1[5];
        plVar8 = (longlong *)param_1[6];
        if (plVar8 == (longlong *)0x0) {
          local_68 = (longlong *)0x0;
          (**(code **)(*plVar7 + 0x2e8))(plVar7,lVar4,&local_70,5000);
          goto LAB_1418b7a39;
        }
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        local_68 = plVar8;
        (**(code **)(*plVar7 + 0x2e8))(plVar7,lVar4,&local_70,5000);
      }
      else {
        local_40 = lVar6;
        if (plVar8 == (longlong *)0x0) {
          local_38 = (longlong *)0x0;
          (**(code **)(*plVar7 + 0x2f0))(plVar7,lVar4);
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          local_38 = plVar8;
          (**(code **)(*plVar7 + 0x2f0))(plVar7,lVar4);
          LOCK();
          plVar1 = plVar8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        local_50 = param_1[5];
        plVar8 = (longlong *)param_1[6];
        if (plVar8 == (longlong *)0x0) {
          local_48 = (longlong *)0x0;
          (**(code **)(*plVar7 + 0x2d8))(plVar7,&local_50,5000);
          goto LAB_1418b7a39;
        }
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        local_48 = plVar8;
        (**(code **)(*plVar7 + 0x2d8))(plVar7,&local_50,5000);
      }
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
LAB_1418b7a39:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418b7cf2 FUN_1418b7cf2 body=135 status=ok
// SIG undefined FUN_1418b7cf2(void)

void FUN_1418b7cf2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x210) != 0) {
    if (*(longlong *)(param_1 + 0x220) != 0) {
      FUN_14480f766(*(longlong *)(param_1 + 0x210) + 0x88);
      *(undefined8 *)(param_1 + 0x220) = 0;
    }
    *(undefined8 *)(param_1 + 0x210) = 0;
    plVar3 = *(longlong **)(param_1 + 0x218);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x218) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001418b7d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1418b7d7a FUN_1418b7d7a body=168 status=ok
// SIG undefined FUN_1418b7d7a(void)

undefined8 FUN_1418b7d7a(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 0x1a8) + 8);
  puVar3 = &DAT_14c9485f0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = puVar2;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xc0);
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_1400b2348(puVar3,&local_38,1);
  puVar4 = local_38;
  if ((int)uStack_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"%s_%d",puVar4,uVar1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1418b7e24 FUN_1418b7e24 body=216 status=ok
// SIG undefined FUN_1418b7e24(void)

longlong * FUN_1418b7e24(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (lVar5 == 0) {
    uVar3 = FUN_14656b672();
    lVar5 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x10) = lVar5;
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
LAB_1418b7e97:
    plVar1 = *(longlong **)(lVar4 + 0x18);
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar6 = (longlong *)(lVar4 + 0x20);
    goto LAB_1418b7ead;
  }
  if ((lVar5 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 8));
        *(longlong *)(param_1 + 0x18) = lVar4;
        if (lVar4 != 0) goto LAB_1418b7e97;
        goto LAB_1418b7ec7;
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
LAB_1418b7ec7:
  plVar6 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar6;
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar6 = plVar6 + 1;
LAB_1418b7ead:
  *(int *)(param_2 + 1) = (int)*plVar6;
  return param_2;
}



// FUNCTION 1418b7efc FUN_1418b7efc body=65 status=ok
// SIG undefined FUN_1418b7efc(void)

void FUN_1418b7efc(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  FUN_1400b22c2(param_2,&DAT_149e02088);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



// FUNCTION 1418b7f3e FUN_1418b7f3e body=37 status=ok
// SIG undefined FUN_1418b7f3e(void)

void FUN_1418b7f3e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x98);
  FUN_140d5d920(param_2);
  return;
}



// FUNCTION 1418b7f64 FUN_1418b7f64 body=29 status=ok
// SIG undefined FUN_1418b7f64(void)

undefined8 FUN_1418b7f64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b7f82 FUN_1418b7f82 body=95 status=ok
// SIG undefined FUN_1418b7f82(void)

ulonglong * FUN_1418b7f82(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "OnAnimationStarted";
  local_18 = 0x12;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b7fe2 FUN_1418b7fe2 body=29 status=ok
// SIG undefined FUN_1418b7fe2(void)

undefined8 FUN_1418b7fe2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b8000 FUN_1418b8000 body=95 status=ok
// SIG undefined FUN_1418b8000(void)

ulonglong * FUN_1418b8000(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "OnAnimationCompleted";
  local_18 = 0x14;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b8060 FUN_1418b8060 body=29 status=ok
// SIG undefined FUN_1418b8060(void)

undefined8 FUN_1418b8060(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b807e FUN_1418b807e body=95 status=ok
// SIG undefined FUN_1418b807e(void)

ulonglong * FUN_1418b807e(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "OnAnimationStopped";
  local_18 = 0x12;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b80de FUN_1418b80de body=1522 status=ok
// SIG undefined FUN_1418b80de(void)

undefined8
FUN_1418b80de(undefined8 param_1,longlong *param_2,int *param_3,undefined1 *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined2 *puVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*param_3 == 0) || (*param_3 == 3)) {
    uVar9 = 0;
    if (param_4 != (undefined1 *)0x0 && param_5 == 2) {
      *param_4 = 1;
      iVar7 = (**(code **)(*param_2 + 8))(param_2);
      if (iVar7 != 0) {
        uVar12 = 0;
        do {
          if (DAT_14cb907b8 == (longlong *)0x0) {
            local_58 = FUN_1449e2820;
            local_60 = FUN_14081d0ea;
            local_68 = FUN_14081d0ea;
            local_70 = &local_58;
            local_78 = &LAB_1489c8acb;
            local_80 = &LAB_146027b0e;
            local_88 = L"Engine";
            local_90 = 0;
            local_98 = 0x10000006;
            local_a0 = 8;
            local_a8 = 0x128;
            FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
          }
          plVar3 = DAT_14cb907b8;
          lVar14 = DAT_14cb907b8[0x22];
          if (lVar14 == 0) {
            (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
            lVar14 = plVar3[0x22];
          }
          if ((longlong)*(int *)(lVar14 + 0x50) != 0) {
            puVar16 = *(undefined8 **)(lVar14 + 0x48);
            puVar17 = puVar16 + (longlong)*(int *)(lVar14 + 0x50) * 2;
            do {
              uVar9 = (**(code **)(*param_2 + 0x10))(param_2,uVar12);
              FUN_1400b22c2(&local_58,uVar9);
              pcVar10 = local_58;
              if (local_50 == 0) {
                pcVar10 = (code *)&DAT_149dfb77a;
              }
              puVar11 = &DAT_149dfb77a;
              if (*(int *)(puVar16 + 1) != 0) {
                puVar11 = (undefined2 *)*puVar16;
              }
              lVar13 = 0;
              while( true ) {
                uVar1 = *(ushort *)((longlong)puVar11 + lVar13);
                uVar15 = (uint)uVar1;
                uVar2 = *(ushort *)(pcVar10 + lVar13);
                uVar8 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1418b81fe;
                  }
                  iVar7 = uVar15 - uVar8;
                  goto LAB_1418b8236;
                }
                if (uVar1 == 0) break;
LAB_1418b81fe:
                lVar13 = lVar13 + 2;
              }
              iVar7 = 0;
LAB_1418b8236:
              if (local_58 != (code *)0x0) {
                FUN_1400020a8();
              }
              if (iVar7 == 0) {
                *param_4 = 0;
              }
              puVar16 = puVar16 + 2;
            } while (puVar16 != puVar17);
          }
          if ((longlong)*(int *)(lVar14 + 0x60) != 0) {
            puVar16 = *(undefined8 **)(lVar14 + 0x58);
            puVar17 = puVar16 + (longlong)*(int *)(lVar14 + 0x60) * 2;
            do {
              uVar9 = (**(code **)(*param_2 + 0x10))(param_2,uVar12);
              FUN_1400b22c2(&local_58,uVar9);
              pcVar10 = local_58;
              if (local_50 == 0) {
                pcVar10 = (code *)&DAT_149dfb77a;
              }
              puVar11 = &DAT_149dfb77a;
              if (*(int *)(puVar16 + 1) != 0) {
                puVar11 = (undefined2 *)*puVar16;
              }
              lVar14 = 0;
              while( true ) {
                uVar1 = *(ushort *)((longlong)puVar11 + lVar14);
                uVar15 = (uint)uVar1;
                uVar2 = *(ushort *)(pcVar10 + lVar14);
                uVar8 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1418b82bc;
                  }
                  iVar7 = uVar15 - uVar8;
                  goto LAB_1418b82f4;
                }
                if (uVar1 == 0) break;
LAB_1418b82bc:
                lVar14 = lVar14 + 2;
              }
              iVar7 = 0;
LAB_1418b82f4:
              if (local_58 != (code *)0x0) {
                FUN_1400020a8();
              }
              if (iVar7 == 0) {
                *param_4 = 0;
              }
              puVar16 = puVar16 + 2;
            } while (puVar16 != puVar17);
          }
          uVar12 = uVar12 + 1;
          uVar8 = (**(code **)(*param_2 + 8))(param_2);
          uVar9 = 0;
        } while (uVar12 < uVar8);
      }
    }
    goto LAB_1418b812f;
  }
  if (DAT_14cb907b8 == (longlong *)0x0) {
    local_70 = &local_58;
    local_58 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_14081d0ea;
    local_78 = &LAB_1489c8acb;
    local_80 = &LAB_146027b0e;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10000006;
    local_a0 = 8;
    local_a8 = 0x128;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
  }
  plVar3 = DAT_14cb907b8;
  lVar14 = DAT_14cb907b8[0x22];
  if (lVar14 == 0) {
    (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
    lVar14 = plVar3[0x22];
  }
  if ((param_5 == 2) && (*(char *)(lVar14 + 0x46) == '\0')) {
    cVar5 = (**(code **)(*param_2 + 0x38))(param_2);
    if (cVar5 != '\n') goto LAB_1418b83a8;
LAB_1418b8391:
    uVar9 = 1;
    if (param_4 == (undefined1 *)0x0) goto LAB_1418b812f;
    uVar6 = 0;
    uVar4 = uVar9;
  }
  else {
    uVar9 = 0;
    if (param_5 != 2) goto LAB_1418b812f;
LAB_1418b83a8:
    iVar7 = (**(code **)(*param_2 + 8))(param_2);
    if (iVar7 != 0) {
      uVar12 = 0;
      do {
        if ((longlong)*(int *)(lVar14 + 0x50) != 0) {
          puVar16 = *(undefined8 **)(lVar14 + 0x48);
          puVar17 = puVar16 + (longlong)*(int *)(lVar14 + 0x50) * 2;
          do {
            uVar9 = (**(code **)(*param_2 + 0x10))(param_2,uVar12);
            FUN_1400b22c2(&local_58,uVar9);
            pcVar10 = local_58;
            if (local_50 == 0) {
              pcVar10 = (code *)&DAT_149dfb77a;
            }
            puVar11 = &DAT_149dfb77a;
            if (*(int *)(puVar16 + 1) != 0) {
              puVar11 = (undefined2 *)*puVar16;
            }
            lVar13 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar11 + lVar13);
              uVar15 = (uint)uVar1;
              uVar2 = *(ushort *)(pcVar10 + lVar13);
              uVar8 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1418b8428;
                }
                iVar7 = uVar15 - uVar8;
                goto LAB_1418b8460;
              }
              if (uVar1 == 0) break;
LAB_1418b8428:
              lVar13 = lVar13 + 2;
            }
            iVar7 = 0;
LAB_1418b8460:
            if (local_58 != (code *)0x0) {
              FUN_1400020a8();
            }
            if (iVar7 == 0) goto LAB_1418b8391;
            puVar16 = puVar16 + 2;
          } while (puVar16 != puVar17);
        }
        if ((longlong)*(int *)(lVar14 + 0x60) != 0) {
          puVar16 = *(undefined8 **)(lVar14 + 0x58);
          puVar17 = puVar16 + (longlong)*(int *)(lVar14 + 0x60) * 2;
          do {
            uVar9 = (**(code **)(*param_2 + 0x10))(param_2,uVar12);
            FUN_1400b22c2(&local_58,uVar9);
            pcVar10 = local_58;
            if (local_50 == 0) {
              pcVar10 = (code *)&DAT_149dfb77a;
            }
            puVar11 = &DAT_149dfb77a;
            if (*(int *)(puVar16 + 1) != 0) {
              puVar11 = (undefined2 *)*puVar16;
            }
            lVar13 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar11 + lVar13);
              uVar15 = (uint)uVar1;
              uVar2 = *(ushort *)(pcVar10 + lVar13);
              uVar8 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1418b84e6;
                }
                iVar7 = uVar15 - uVar8;
                goto LAB_1418b8517;
              }
              if (uVar1 == 0) break;
LAB_1418b84e6:
              lVar13 = lVar13 + 2;
            }
            iVar7 = 0;
LAB_1418b8517:
            if (local_58 != (code *)0x0) {
              FUN_1400020a8();
            }
            if (iVar7 == 0) goto LAB_1418b8391;
            puVar16 = puVar16 + 2;
          } while (puVar16 != puVar17);
        }
        uVar12 = uVar12 + 1;
        uVar8 = (**(code **)(*param_2 + 8))(param_2);
      } while (uVar12 < uVar8);
    }
    uVar6 = 1;
    uVar9 = 0;
    uVar4 = 0;
    if (param_4 == (undefined1 *)0x0) goto LAB_1418b812f;
  }
  uVar9 = uVar4;
  *param_4 = uVar6;
LAB_1418b812f:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1418b86d2 FUN_1418b86d2 body=29 status=ok
// SIG undefined FUN_1418b86d2(void)

undefined8 FUN_1418b86d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b86f0 FUN_1418b86f0 body=95 status=ok
// SIG undefined FUN_1418b86f0(void)

ulonglong * FUN_1418b86f0(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FGbxUIEvent_AnalogCursor";
  local_18 = 0x18;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b8750 FUN_1418b8750 body=29 status=ok
// SIG undefined FUN_1418b8750(void)

undefined8 FUN_1418b8750(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b876e FUN_1418b876e body=95 status=ok
// SIG undefined FUN_1418b876e(void)

ulonglong * FUN_1418b876e(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FGbxUIEvent_CSP_UnregisterWidget";
  local_18 = 0x20;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b87ce FUN_1418b87ce body=95 status=ok
// SIG undefined FUN_1418b87ce(void)

ulonglong * FUN_1418b87ce(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FGbxUIEvent_SelfExecuting";
  local_18 = 0x19;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b882e FUN_1418b882e body=61 status=ok
// SIG undefined FUN_1418b882e(void)

longlong FUN_1418b882e(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x50);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b886c FUN_1418b886c body=255 status=ok
// SIG undefined FUN_1418b886c(void)

void FUN_1418b886c(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
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
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418b896c FUN_1418b896c body=199 status=ok
// SIG undefined FUN_1418b896c(void)

void FUN_1418b896c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_2 * 0x40;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0x200) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 4]];
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
  if ((int)param_2 <= (int)(uVar1 >> 6)) {
    uVar2 = uVar1 >> 6 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 1418b8a34 FUN_1418b8a34 body=137 status=ok
// SIG undefined FUN_1418b8a34(void)

void FUN_1418b8a34(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 6,8);
      uVar3 = uVar3 >> 6;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x40,8);
    }
  }
  return;
}



// FUNCTION 1418b8abe FUN_1418b8abe body=201 status=ok
// SIG undefined FUN_1418b8abe(void)

void FUN_1418b8abe(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = (longlong)param_2 * 0x40;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar1 < 0x7ff1) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)
                        [0x32 - (byte)(&DAT_14c841e00)[((longlong)param_2 & 0x3ffffffffffffffU) * 4]
                        ];
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
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 6)) {
    uVar3 = uVar1 >> 6 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x40,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1418b8b88 FUN_1418b8b88 body=330 status=ok
// SIG undefined FUN_1418b8b88(void)

void FUN_1418b8b88(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  size_t sVar2;
  uint uVar3;
  wchar_t *_Str;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [128];
  undefined1 *local_50;
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)*param_2;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_50 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_48 = (undefined1 *)0x0;
      local_40 = 0;
      goto LAB_1418b8c35;
    }
  }
  local_50 = (undefined1 *)0x0;
  sVar2 = wcslen(_Str);
  local_40 = FUN_14475aa65(0,_Str,sVar2 & 0xffffffff);
  uVar3 = local_40 + 1;
  local_48 = (undefined1 *)0x0;
  if (0x80 < uVar3) {
    FUN_1446efa72(&local_50,0,uVar3,1);
    local_48 = local_50;
  }
  if (local_48 == (undefined1 *)0x0) {
    local_48 = local_d0;
  }
  FUN_14475a98a(local_48,uVar3,_Str,(int)sVar2 + 1);
LAB_1418b8c35:
  (**(code **)(*plVar1 + 600))(plVar1,local_48);
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418b8cd4 FUN_1418b8cd4 body=93 status=ok
// SIG undefined FUN_1418b8cd4(void)

void FUN_1418b8cd4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b478830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1418b8d32 FUN_1418b8d32 body=439 status=ok
// SIG undefined FUN_1418b8d32(void)

void FUN_1418b8d32(longlong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  wchar_t *_Str;
  uint uVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = (longlong *)*param_2;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_58 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      goto LAB_1418b8de5;
    }
  }
  local_58 = (undefined1 *)0x0;
  sVar2 = wcslen(_Str);
  local_48 = FUN_14475aa65(0,_Str,sVar2 & 0xffffffff);
  uVar4 = local_48 + 1;
  local_50 = (undefined1 *)0x0;
  if (0x80 < uVar4) {
    FUN_1446efa72(&local_58,0,uVar4,1);
    local_50 = local_58;
  }
  if (local_50 == (undefined1 *)0x0) {
    local_50 = local_d8;
  }
  FUN_14475a98a(local_50,uVar4,_Str,(int)sVar2 + 1);
LAB_1418b8de5:
  puVar1 = local_50;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x210))(plVar3);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,puVar1,4);
    (**(code **)(*plVar3 + 0x128))(plVar3,(int)param_1[2]);
    (**(code **)(*plVar3 + 0x128))(plVar3,(int)*(char *)((longlong)param_1 + 0x14));
    (**(code **)(*plVar3 + 0x128))(plVar3,(int)*(char *)((longlong)param_1 + 0x15));
    (**(code **)(*plVar3 + 0x128))(plVar3,(int)*(char *)((longlong)param_1 + 0x16));
    (**(code **)(*plVar3 + 0x58))(plVar3);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418b8eea FUN_1418b8eea body=439 status=ok
// SIG undefined FUN_1418b8eea(void)

void FUN_1418b8eea(longlong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  wchar_t *_Str;
  uint uVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = (longlong *)*param_2;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_58 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      goto LAB_1418b8f9d;
    }
  }
  local_58 = (undefined1 *)0x0;
  sVar2 = wcslen(_Str);
  local_48 = FUN_14475aa65(0,_Str,sVar2 & 0xffffffff);
  uVar5 = local_48 + 1;
  local_50 = (undefined1 *)0x0;
  if (0x80 < uVar5) {
    FUN_1446efa72(&local_58,0,uVar5,1);
    local_50 = local_58;
  }
  if (local_50 == (undefined1 *)0x0) {
    local_50 = local_d8;
  }
  FUN_14475a98a(local_50,uVar5,_Str,(int)sVar2 + 1);
LAB_1418b8f9d:
  puVar1 = local_50;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x210))(plVar3);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,puVar1,3);
    if ((int)param_1[3] == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)param_1[2];
    }
    (**(code **)(*plVar3 + 0xd0))(plVar3,puVar4);
    (**(code **)(*plVar3 + 0xf0))(plVar3,(char)param_1[4]);
    (**(code **)(*plVar3 + 0xe8))(plVar3,*(undefined4 *)((longlong)param_1 + 0x24));
    (**(code **)(*plVar3 + 0x58))(plVar3);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418b90a2 FUN_1418b90a2 body=422 status=ok
// SIG undefined FUN_1418b90a2(void)

void FUN_1418b90a2(longlong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  wchar_t *_Str;
  uint uVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = (longlong *)*param_2;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_58 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      goto LAB_1418b9155;
    }
  }
  local_58 = (undefined1 *)0x0;
  sVar2 = wcslen(_Str);
  local_48 = FUN_14475aa65(0,_Str,sVar2 & 0xffffffff);
  uVar5 = local_48 + 1;
  local_50 = (undefined1 *)0x0;
  if (0x80 < uVar5) {
    FUN_1446efa72(&local_58,0,uVar5,1);
    local_50 = local_58;
  }
  if (local_50 == (undefined1 *)0x0) {
    local_50 = local_d8;
  }
  FUN_14475a98a(local_50,uVar5,_Str,(int)sVar2 + 1);
LAB_1418b9155:
  puVar1 = local_50;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x210))(plVar3);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,puVar1,2);
    if ((int)param_1[3] == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)param_1[2];
    }
    (**(code **)(*plVar3 + 0xd0))(plVar3,puVar4);
    (**(code **)(*plVar3 + 0x120))(plVar3,(int)param_1[4]);
    (**(code **)(*plVar3 + 0x58))(plVar3);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418b924a FUN_1418b924a body=562 status=ok
// SIG undefined FUN_1418b924a(void)

void FUN_1418b924a(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  ulonglong *local_68;
  ulonglong local_60;
  ulonglong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = 0;
  local_78[1] = 0;
  iVar10 = 0;
  plVar8 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_60 = 0;
  local_68 = (ulonglong *)0x0;
  (**(code **)(*plVar8 + 0x1c8))(plVar8,&local_68,&local_60);
  uVar3 = local_60;
  puVar2 = local_68;
  local_4c = (uint)local_60;
  local_58 = local_68;
  if (0 < (int)(uint)local_60) {
    iVar10 = 0;
    uVar9 = 0x7fffffff;
    uVar6 = (uint)local_60;
    do {
      if (uVar9 == 0) {
        iVar10 = -1;
        break;
      }
      iVar4 = iVar10;
      if (((((ulonglong)local_58 & 7) == 0) && (local_4c = uVar6, 7 < uVar6)) &&
         (uVar7 = uVar9, 7 < (int)uVar9)) {
        while (uVar9 = uVar7, iVar4 = iVar10, local_4c = uVar6,
              (*local_58 & 0x8080808080808080) == 0) {
          local_58 = local_58 + 1;
          iVar10 = iVar10 + 8;
          local_4c = uVar6 - 8;
          uVar9 = uVar7 - 8;
          bVar1 = (int)uVar6 < 0x10;
          uVar6 = local_4c;
          iVar4 = iVar10;
          if ((bVar1) || (bVar1 = uVar7 < 0x10, uVar7 = uVar9, bVar1)) break;
        }
      }
LAB_1418b9335:
      do {
        iVar10 = iVar4;
        if (((int)uVar6 < 1) || ((int)uVar9 < 1)) break;
        uVar7 = FUN_14003e942(&local_58,&local_4c);
        uVar6 = local_4c;
        if (uVar7 < 0x10000) {
          uVar9 = uVar9 - 1;
          iVar4 = iVar10 + 1;
          if (0x7f < uVar7) goto LAB_1418b9335;
        }
        else {
          if (1 < uVar9) {
            uVar9 = uVar9 - 2;
            iVar4 = iVar10 + 2;
            goto LAB_1418b9335;
          }
          uVar9 = 0;
        }
        iVar10 = iVar10 + 1;
        iVar4 = iVar10;
      } while (((ulonglong)local_58 & 7) != 0);
    } while (0 < (int)uVar6);
  }
  FUN_1409ee492(local_78,iVar10 + 1,1);
  *(undefined2 *)(local_78[0] + (longlong)iVar10 * 2) = 0;
  FUN_1446e71a3(local_78[0],(longlong)iVar10,puVar2,uVar3 & 0xffffffff);
  plVar8 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar8 + 0x1d8))(plVar8,&local_58);
  plVar8 = (longlong *)(**(code **)(*param_2 + 8))(param_2,2);
  (**(code **)(*plVar8 + 0x1d8))(plVar8,&local_60);
  cVar5 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar5 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_78,
               local_58._0_4_,(uint)local_60);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b947e FUN_1418b947e body=101 status=ok
// SIG undefined FUN_1418b947e(void)

void FUN_1418b947e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b478eb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418b94e4 FUN_1418b94e4 body=330 status=ok
// SIG undefined FUN_1418b94e4(void)

void FUN_1418b94e4(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  size_t sVar2;
  uint uVar3;
  wchar_t *_Str;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [128];
  undefined1 *local_50;
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)*param_2;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_50 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_48 = (undefined1 *)0x0;
      local_40 = 0;
      goto LAB_1418b9591;
    }
  }
  local_50 = (undefined1 *)0x0;
  sVar2 = wcslen(_Str);
  local_40 = FUN_14475aa65(0,_Str,sVar2 & 0xffffffff);
  uVar3 = local_40 + 1;
  local_48 = (undefined1 *)0x0;
  if (0x80 < uVar3) {
    FUN_1446efa72(&local_50,0,uVar3,1);
    local_48 = local_50;
  }
  if (local_48 == (undefined1 *)0x0) {
    local_48 = local_d0;
  }
  FUN_14475a98a(local_48,uVar3,_Str,(int)sVar2 + 1);
LAB_1418b9591:
  (**(code **)(*plVar1 + 600))(plVar1,local_48);
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418b9630 FUN_1418b9630 body=458 status=ok
// SIG undefined FUN_1418b9630(void)

void FUN_1418b9630(longlong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  wchar_t *_Str;
  uint uVar5;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  int local_e0;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar3 = (longlong *)*param_2;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_58 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      goto LAB_1418b96e3;
    }
  }
  local_58 = (undefined1 *)0x0;
  sVar2 = wcslen(_Str);
  local_48 = FUN_14475aa65(0,_Str,sVar2 & 0xffffffff);
  uVar5 = local_48 + 1;
  local_50 = (undefined1 *)0x0;
  if (0x80 < uVar5) {
    FUN_1446efa72(&local_58,0,uVar5,1);
    local_50 = local_58;
  }
  if (local_50 == (undefined1 *)0x0) {
    local_50 = local_d8;
  }
  FUN_14475a98a(local_50,uVar5,_Str,(int)sVar2 + 1);
LAB_1418b96e3:
  puVar1 = local_50;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x210))(plVar3);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,puVar1,2);
    (**(code **)(*plVar3 + 0x128))(plVar3,(int)param_1[2]);
    FUN_1400021e4((longlong)param_1 + 0x14,&local_e8);
    puVar4 = local_e8;
    if (local_e0 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    (**(code **)(*plVar3 + 0xd0))(plVar3,puVar4);
    if (local_e8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*plVar3 + 0x58))(plVar3);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418b97fc FUN_1418b97fc body=83 status=ok
// SIG undefined FUN_1418b97fc(void)

undefined8 * FUN_1418b97fc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b47b0e0;
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



// FUNCTION 1418b9850 FUN_1418b9850 body=101 status=ok
// SIG undefined FUN_1418b9850(void)

undefined8 * FUN_1418b9850(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_14b47b0e0;
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_1 + 0x30);
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 1418b98b6 FUN_1418b98b6 body=101 status=ok
// SIG undefined FUN_1418b98b6(void)

undefined8 * FUN_1418b98b6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_14b47b110;
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_1 + 0x30);
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 1418b991c FUN_1418b991c body=29 status=ok
// SIG undefined FUN_1418b991c(void)

undefined8 FUN_1418b991c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b993a FUN_1418b993a body=68 status=ok
// SIG undefined FUN_1418b993a(void)

undefined8 * FUN_1418b993a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b47b050;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b997e FUN_1418b997e body=163 status=ok
// SIG undefined FUN_1418b997e(void)

undefined8 FUN_1418b997e(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)(param_3 + 0x20);
  local_30 = *(undefined8 *)(param_3 + 0x28);
  local_28 = *(longlong **)(param_3 + 0x30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_140230656(&local_38);
  FUN_1405af5a4(param_1,*(undefined4 *)(param_3 + 0xc),uVar4);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b9a22 FUN_1418b9a22 body=163 status=ok
// SIG undefined FUN_1418b9a22(void)

undefined8 FUN_1418b9a22(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)(param_3 + 0x20);
  local_30 = *(undefined8 *)(param_3 + 0x28);
  local_28 = *(longlong **)(param_3 + 0x30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_140230656(&local_38);
  FUN_1405af5a4(param_1,*(undefined4 *)(param_3 + 0xc),uVar4);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418b9ac6 FUN_1418b9ac6 body=243 status=ok
// SIG undefined FUN_1418b9ac6(void)

undefined8 FUN_1418b9ac6(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((((*(char *)(param_1 + 0x34) == '\0') &&
       ((((*(float *)(param_3 + 0x30) != 0.0 || (NAN(*(float *)(param_3 + 0x30)))) ||
         (*(float *)(param_3 + 0x34) != 0.0)) || (NAN(*(float *)(param_3 + 0x34)))))) &&
      ((((*(float *)(param_3 + 0x20) != 0.0 || (NAN(*(float *)(param_3 + 0x20)))) ||
        (*(float *)(param_3 + 0x24) != 0.0)) || (NAN(*(float *)(param_3 + 0x24)))))) &&
     ((longlong)*(int *)(param_1 + 0x20) != 0)) {
    iVar1 = *(int *)(param_3 + 0xc);
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar4 = (longlong)*(int *)(param_1 + 0x20) * 0x70;
    do {
      lVar2 = FUN_140059518(lVar3 + 8);
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0xe0) == iVar1)) {
        if ((lVar3 != 0) &&
           ((lVar3 = FUN_1400f3ad8(lVar3 + 8), lVar3 != 0 && (*(char *)(param_1 + 0x34) == '\0'))))
        {
          *(undefined1 *)(param_1 + 0x34) = 1;
        }
        break;
      }
      lVar3 = lVar3 + 0x70;
      lVar4 = lVar4 + -0x70;
    } while (lVar4 != 0);
  }
  if (10.0 < *(float *)(param_3 + 0x30) * *(float *)(param_3 + 0x30) +
             *(float *)(param_3 + 0x34) * *(float *)(param_3 + 0x34)) {
    FUN_1405af5a4(param_1,*(undefined4 *)(param_3 + 0xc),0);
  }
  return 0;
}



// FUNCTION 1418b9bba FUN_1418b9bba body=23 status=ok
// SIG undefined FUN_1418b9bba(void)

undefined8 FUN_1418b9bba(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_1405af5a4(param_1,*(undefined4 *)(param_3 + 0xc),0);
  return 0;
}



// FUNCTION 1418b9bd2 FUN_1418b9bd2 body=23 status=ok
// SIG undefined FUN_1418b9bd2(void)

undefined8 FUN_1418b9bd2(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_1405af5a4(param_1,*(undefined4 *)(param_3 + 0xc),0);
  return 0;
}



// FUNCTION 1418b9bea FUN_1418b9bea body=349 status=ok
// SIG undefined FUN_1418b9bea(void)

longlong FUN_1418b9bea(undefined8 param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  size_t sVar3;
  longlong lVar4;
  wchar_t *_Str;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  wchar_t *local_48;
  int local_40;
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_2;
  FUN_1400021e4(&local_28,local_38);
  FUN_1400b22c2(&local_48,&DAT_14b47b6d4);
  _Str = L"";
  if (local_40 != 0) {
    _Str = local_48;
  }
  if (_Str == (wchar_t *)0x0) {
    bVar6 = false;
  }
  else {
    sVar3 = wcslen(_Str);
    local_50 = 0xffffffff;
    local_58 = 0;
    iVar2 = FUN_1447ee042(local_38,_Str,sVar3 & 0xffffffff,1);
    bVar6 = iVar2 != -1;
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (!bVar6) {
    if (param_3 == '\0') {
      FUN_1410293e6();
      lVar4 = (longlong)DAT_14cb92ff8;
      if (lVar4 != 0) {
        lVar1 = lVar4 * 8;
        lVar5 = 0;
        do {
          bVar6 = *(longlong *)(DAT_14cb92ff0 + lVar5) == param_2;
          lVar4 = CONCAT71((int7)((ulonglong)lVar4 >> 8),bVar6);
          if (bVar6) break;
          bVar6 = lVar1 + -8 != lVar5;
          lVar5 = lVar5 + 8;
        } while (bVar6);
        goto LAB_1418b9d1e;
      }
    }
    else {
      FUN_14102937c();
      lVar4 = (longlong)DAT_14cb92fe0;
      if (lVar4 != 0) {
        lVar1 = lVar4 * 8;
        lVar5 = 0;
        do {
          bVar6 = *(longlong *)(DAT_14cb92fd8 + lVar5) == param_2;
          lVar4 = CONCAT71((int7)((ulonglong)lVar4 >> 8),bVar6);
          if (bVar6) break;
          bVar6 = lVar1 + -8 != lVar5;
          lVar5 = lVar5 + 8;
        } while (bVar6);
        goto LAB_1418b9d1e;
      }
    }
  }
  lVar4 = 0;
LAB_1418b9d1e:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1418b9d48 FUN_1418b9d48 body=64 status=ok
// SIG undefined FUN_1418b9d48(void)

void FUN_1418b9d48(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      bVar1 = *(byte *)(lVar4 + 0x18);
      if ((bVar1 & 1) == 0) {
        *(byte *)(lVar4 + 0x18) = bVar1 | 1;
        FUN_140834d9a();
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 1418b9d88 FUN_1418b9d88 body=64 status=ok
// SIG undefined FUN_1418b9d88(void)

void FUN_1418b9d88(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x58);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      bVar1 = *(byte *)(lVar4 + 0x18);
      if ((bVar1 & 1) != 0) {
        *(byte *)(lVar4 + 0x18) = bVar1 & 0xfe;
        FUN_140834d9a();
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 1418b9dc8 FUN_1418b9dc8 body=379 status=ok
// SIG undefined FUN_1418b9dc8(void)

longlong * FUN_1418b9dc8(longlong *param_1,uint param_2,longlong *param_3,undefined4 *param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50 [2];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar6 * 0x14);
        if (*plVar4 == *param_3) {
          if (plVar4 != (longlong *)0x0) goto LAB_1418b9f02;
          break;
        }
        iVar6 = *(int *)((longlong)plVar4 + 0xc);
      } while (iVar6 != -1);
    }
  }
  FUN_14487db2c(param_1,local_50);
  *local_48 = *param_3;
  *(undefined4 *)(local_48 + 1) = *param_4;
  *(undefined4 *)((longlong)local_48 + 0xc) = 0xffffffff;
  local_58 = 0;
  cVar2 = FUN_1401719bc(param_1,param_2,local_48,local_50);
  if (cVar2 == '\0') {
    uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
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
    if (((int)uVar3 < 1) || (iVar6 <= (int)param_1[9])) {
      param_2 = (int)param_1[9] - 1U & param_2;
      *(uint *)(local_48 + 2) = param_2;
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      *(undefined4 *)((longlong)local_48 + 0xc) =
           *(undefined4 *)
            ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
           local_50[0];
    }
    else {
      *(int *)(param_1 + 9) = iVar6;
      FUN_14487ddf8(param_1);
    }
  }
  plVar4 = (longlong *)(*param_1 + (longlong)local_50[0] * 0x14);
LAB_1418b9f02:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4 + 1;
}



// FUNCTION 1418b9f44 FUN_1418b9f44 body=29 status=ok
// SIG undefined FUN_1418b9f44(void)

undefined8 FUN_1418b9f44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b9f61 FUN_1418b9f61 body=35 status=ok
// SIG undefined FUN_1418b9f61(void)

void FUN_1418b9f61(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1402309ae(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b47d360;
  return;
}



// FUNCTION 1418b9f84 FUN_1418b9f84 body=65 status=ok
// SIG undefined FUN_1418b9f84(void)

void FUN_1418b9f84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b486310;
  param_1[5] = &PTR_LAB_14b486980;
  param_1[6] = &PTR_LAB_14b4869c0;
  FUN_140485912(param_1 + 0x75);
  FUN_140bcca3c(param_1);
  return;
}



// FUNCTION 1418b9fc6 FUN_1418b9fc6 body=40 status=ok
// SIG undefined FUN_1418b9fc6(void)

undefined8 FUN_1418b9fc6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418b9fee FUN_1418b9fee body=40 status=ok
// SIG undefined FUN_1418b9fee(void)

undefined8 FUN_1418b9fee(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ba01e FUN_1418ba01e body=59 status=ok
// SIG undefined FUN_1418ba01e(void)

void FUN_1418ba01e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x98);
  FUN_140e6d4da(param_2);
  *param_2 = &PTR_FUN_14b487170;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 1418ba05a FUN_1418ba05a body=99 status=ok
// SIG undefined FUN_1418ba05a(void)

void FUN_1418ba05a(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1e) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *param_2 = &PTR_FUN_14b4aaac0;
  *(undefined1 *)(param_2 + 0xf) = 1;
  *(undefined4 *)((longlong)param_2 + 0x79) = 0;
  return;
}



// FUNCTION 1418ba0be FUN_1418ba0be body=45 status=ok
// SIG undefined FUN_1418ba0be(void)

undefined8 FUN_1418ba0be(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 1418ba0ec FUN_1418ba0ec body=134 status=ok
// SIG undefined FUN_1418ba0ec(void)

void FUN_1418ba0ec(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x548);
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_2 + 7,0x14,1);
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0x1010101;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 1;
  *param_2 = &PTR_FUN_14b484c20;
  FUN_140bbae66(param_2 + 0x10);
  param_2[0xa8] = 0;
  *(undefined1 *)(param_2 + 0xa9) = 0;
  return;
}



// FUNCTION 1418ba18e FUN_1418ba18e body=131 status=ok
// SIG undefined FUN_1418ba18e(void)

undefined8 * FUN_1418ba18e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x550);
  }
  return param_1;
}



// FUNCTION 1418ba212 FUN_1418ba212 body=45 status=ok
// SIG undefined FUN_1418ba212(void)

undefined8 FUN_1418ba212(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 1418ba278 FUN_1418ba278 body=165 status=ok
// SIG undefined FUN_1418ba278(void)

void FUN_1418ba278(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x6e8);
  FUN_140c2310e(param_2);
  *param_2 = &PTR_FUN_14b485360;
  FUN_140785382(param_2 + 0x33,10);
  *(undefined4 *)(param_2 + 0x3a) = 0x1010101;
  param_2[0x3b] = 0;
  *(undefined2 *)(param_2 + 0x3f) = 4;
  *(undefined4 *)(param_2 + 0x3c) = 0x42340000;
  *(undefined1 *)(param_2 + 0x40) = 3;
  *(char *)(param_2 + 0x41) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_2 + 0x42) = 0;
  FUN_140bbae66(param_2 + 0x43);
  param_2[0xdb] = 0;
  *(undefined1 *)(param_2 + 0xdc) = 0;
  return;
}



// FUNCTION 1418ba355 FUN_1418ba355 body=49 status=ok
// SIG undefined FUN_1418ba355(void)

longlong FUN_1418ba355(void)

{
  if (DAT_14cb93798 == 0) {
    FUN_14000fc22(&DAT_14cb93798,&PTR_FUN_14b488c60);
  }
  return DAT_14cb93798;
}



// FUNCTION 1418ba386 FUN_1418ba386 body=7 status=ok
// SIG undefined FUN_1418ba386(void)

void FUN_1418ba386(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 1418ba38d FUN_1418ba38d body=49 status=ok
// SIG undefined FUN_1418ba38d(void)

longlong FUN_1418ba38d(void)

{
  if (DAT_14cb939b0 == 0) {
    FUN_14073dd9a(&DAT_14cb939b0,&PTR_LAB_14b48c880);
  }
  return DAT_14cb939b0;
}



// FUNCTION 1418ba3be FUN_1418ba3be body=1534 status=ok
// SIG undefined FUN_1418ba3be(void)

void FUN_1418ba3be(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined7 uStack_20;
  undefined1 uStack_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_20 = 0;
  uStack_19 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_48 = (undefined *)FUN_1446ddbd2();
      local_40 = FUN_1409e12a0;
      local_50 = 0;
      local_58 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_20 = (undefined7)uVar2;
      uStack_19 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_20);
    }
  }
  uStack_24 = uStack_24 & 0xffffff;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1409f1a5c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,(longlong)&uStack_24 + 3);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,(longlong)&uStack_24 + 3);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,(longlong)&uStack_24 + 3);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_24._3_1_ = (undefined1)uVar2;
      uStack_20 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,(longlong)&uStack_24 + 3);
    }
  }
  uStack_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1405ebbb2;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_28 = (undefined4)uVar2;
      uStack_24 = (uint)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_28);
    }
  }
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = (undefined *)FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_2c = (int)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = CONCAT71(local_58._1_7_,local_2c != 0);
  FUN_140980406(param_1,CONCAT17(uStack_19,uStack_20),uStack_24._3_1_,uStack_28);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ba9bd FUN_1418ba9bd body=49 status=ok
// SIG undefined FUN_1418ba9bd(void)

longlong FUN_1418ba9bd(void)

{
  if (DAT_14cb93b08 == 0) {
    FUN_14086a14e(&DAT_14cb93b08,&PTR_FUN_14b48df20);
  }
  return DAT_14cb93b08;
}



// FUNCTION 1418ba9ee FUN_1418ba9ee body=184 status=ok
// SIG undefined FUN_1418ba9ee(void)

undefined8 * FUN_1418ba9ee(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = param_2[1];
  uVar2 = FUN_14477b664(param_2[2]);
  uVar2 = FUN_14477b664(uVar2);
  param_1[2] = uVar2;
  param_1[3] = param_2[3];
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[4] = param_2[4];
  uVar2 = FUN_14477b664(param_2[5]);
  uVar2 = FUN_14477b664(uVar2);
  param_1[5] = uVar2;
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  param_1[10] = param_2[10];
  lVar1 = param_2[0xb];
  param_1[0xb] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  uVar2 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  return param_1;
}



// FUNCTION 1418baaa6 FUN_1418baaa6 body=57 status=ok
// SIG undefined FUN_1418baaa6(void)

void FUN_1418baaa6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93d08 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93d08 = FUN_140002ddd(FUN_1465741de,uVar1,L"WeaponBehaviorDef_PreUse");
  }
  return;
}



// FUNCTION 1418baaec FUN_1418baaec body=49 status=ok
// SIG undefined FUN_1418baaec(void)

longlong FUN_1418baaec(void)

{
  if (DAT_14cb942d0 == 0) {
    FUN_14073dd9a(&DAT_14cb942d0,&PTR_LAB_14b4a1920);
  }
  return DAT_14cb942d0;
}



// FUNCTION 1418bab1d FUN_1418bab1d body=75 status=ok
// SIG undefined FUN_1418bab1d(void)

void FUN_1418bab1d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b4a7690;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0x3f0000003f000000;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0x3f00000000000000;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0x3f000000;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0x3f00000000000000;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0x3f00000000000000;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0x3f0000003f000000;
  *(undefined4 *)((longlong)puVar1 + 100) = 0x3f000000;
  return;
}



// FUNCTION 1418bab68 FUN_1418bab68 body=40 status=ok
// SIG undefined FUN_1418bab68(void)

undefined8 FUN_1418bab68(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418bab90 FUN_1418bab90 body=121 status=ok
// SIG undefined FUN_1418bab90(void)

void FUN_1418bab90(undefined8 param_1,undefined8 *param_2)

{
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 7) = 0x3002;
  *param_2 = &PTR_FUN_14b4a47a0;
  *(undefined4 *)(param_2 + 9) = 1;
  *(undefined4 *)(param_2 + 0xb) = 0x4fc71eb4;
  FUN_1405c5fa2();
  param_2[0xe] = &DAT_14cb769e8;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xd] = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 1418bac0a FUN_1418bac0a body=164 status=ok
// SIG undefined FUN_1418bac0a(void)

void FUN_1418bac0a(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x458) != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x450);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x458) + 0x18))();
      FUN_140e9795c(uVar3,*(undefined4 *)(param_1 + 0x464),1);
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x458) + 0x18))();
      iVar1 = *(int *)(param_1 + 0x464);
      if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar4 + 0xa8))) {
        lVar5 = (longlong)iVar1 * 0x170;
        FUN_140e7ecae(lVar4,*(longlong *)(lVar4 + 0xa0) + lVar5);
        *(undefined8 *)(*(longlong *)(lVar4 + 0xa0) + 0x28 + lVar5) = 0;
        *(undefined8 *)(*(longlong *)(lVar4 + 0xa0) + 0x30 + lVar5) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1418bacae FUN_1418bacae body=95 status=ok
// SIG undefined FUN_1418bacae(void)

void FUN_1418bacae(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)FUN_1409179ca();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_140ee5b12();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_140ee5b12();
      plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
      if ((plVar1 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001418bad02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x20))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1418bad0e FUN_1418bad0e body=580 status=ok
// SIG undefined FUN_1418bad0e(void)

void FUN_1418bad0e(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0 && (param_3 & 1) != 0) {
    if (DAT_14cb939a8 == 0) {
      local_70 = &local_50;
      local_50 = FUN_140940982;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_146522c26;
      local_78 = &LAB_148a0db91;
      local_80 = &LAB_146572ba7;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 8;
      local_a8 = 0xdd8;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
    }
    if (((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) &&
       (*(byte *)(param_1 + 0x48) != 0)) {
      lVar5 = 0;
      bVar4 = *(byte *)(param_1 + 0x48);
      do {
        if ((((bVar4 & 1) != 0) && ((int)lVar5 < *(int *)(param_2 + 0xbf0))) &&
           (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xbe8) + 8 + lVar5 * 0x88),
           plVar1 != (longlong *)0x0)) {
          if ((*(char *)((longlong)plVar1 + 0x39) == '\0') &&
             (lVar3 = FUN_1405faa04(param_1 + 0x30), lVar3 != 0)) {
            *(undefined1 *)((longlong)plVar1 + 0x39) = 1;
            if ((*(longlong *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0x58) - 1U < 0xfffffffe)
               ) {
              (**(code **)(*plVar1 + 0x300))(plVar1,param_1 + 0x50);
            }
            FUN_1405faa04(param_1 + 0x30);
            (**(code **)(*plVar1 + 0x2e8))(plVar1);
          }
          if ((*(longlong *)(param_1 + 0x70) != 0) && ((longlong)*(int *)(param_1 + 0x80) != 0)) {
            lVar3 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0x78) + lVar3) != 0) {
                (**(code **)(*plVar1 + 0x2f8))(plVar1,param_1 + 0x68,1);
                break;
              }
              lVar3 = lVar3 + 8;
            } while ((longlong)*(int *)(param_1 + 0x80) * 8 != lVar3);
          }
        }
        lVar5 = lVar5 + 1;
        bVar2 = 1 < bVar4;
        bVar4 = bVar4 >> 1;
      } while (bVar2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418baf54 FUN_1418baf54 body=121 status=ok
// SIG undefined FUN_1418baf54(void)

uint * FUN_1418baf54(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_14095be44(param_4);
  if (lVar2 == 0) {
    plVar3 = (longlong *)FUN_148a1c910(param_4);
    if (plVar3 != (longlong *)0x0) {
      bVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined1 *)(param_1 + 8));
      goto LAB_1418baf93;
    }
  }
  else if ((*(longlong *)(lVar2 + 0xb28) != 0) &&
          (plVar3 = *(longlong **)(lVar2 + 0xb30), plVar3 != (longlong *)0x0)) {
    bVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined1 *)(lVar2 + 0xbe3));
    goto LAB_1418baf93;
  }
  bVar1 = 0;
LAB_1418baf93:
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = (uint)bVar1;
  *(undefined1 *)(param_2 + 8) = 1;
  return param_2;
}



// FUNCTION 1418bafce FUN_1418bafce body=470 status=ok
// SIG undefined FUN_1418bafce(void)

void FUN_1418bafce(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x4f0) == 0) goto LAB_1418bb04d;
  FUN_140a9d838(param_1,param_1 + 0x430,*(undefined1 *)(*(longlong *)(param_1 + 0x4f0) + 0xbd8),0);
  if (((((*(int *)(param_1 + 0x838) == 0) || (uVar1 = *(uint *)(param_1 + 0x834), (int)uVar1 < 0))
       || (DAT_14c9647dc <= (int)uVar1)) ||
      ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 == 0 ||
       (*(int *)(lVar2 + 0x10) != *(int *)(param_1 + 0x838))))) ||
     ((*(uint *)(lVar2 + 8) & 0x10200000) != 0)) goto LAB_1418bb04d;
  FUN_1403c747e(param_1,&local_20,*(undefined8 *)(param_1 + 0x73c));
  if (local_20 == (longlong *)0x0) goto LAB_1418bb04d;
  if (*(int *)(param_1 + 0x4ec) == 0) {
LAB_1418bb17f:
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x4e8);
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(int *)(puVar4 + 2) != *(int *)(param_1 + 0x4ec) ||
          ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)))) goto LAB_1418bb17f;
      uVar3 = *puVar4;
    }
  }
  local_48 = 0;
  FUN_14071ab80(local_20,&local_38,param_1 + 0x700,uVar3);
  local_38 = 0;
  local_30 = 0xffffffffffffffff;
  if ((local_20 != (longlong *)0x0) &&
     (*(int *)(local_20 + 0x21) = (int)local_20[0x21] + -1, (int)local_20[0x26] < 1)) {
    FUN_1400847bc(local_20 + 0x17,0);
    if ((int)local_20[0x21] == 0) {
      FUN_140087e46(local_20);
      if (*local_20 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_1418bb04d;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_20);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_20);
      }
    }
  }
LAB_1418bb04d:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418bb1ca FUN_1418bb1ca body=473 status=ok
// SIG undefined FUN_1418bb1ca(void)

void FUN_1418bb1ca(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x4f0) == 0) goto LAB_1418bb249;
  FUN_140a9d838(param_1,param_1 + 0x450,*(undefined1 *)(*(longlong *)(param_1 + 0x4f0) + 0xbd8),0);
  if (((((*(int *)(param_1 + 0x838) == 0) || (uVar1 = *(uint *)(param_1 + 0x834), (int)uVar1 < 0))
       || (DAT_14c9647dc <= (int)uVar1)) ||
      ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 == 0 ||
       (*(int *)(lVar2 + 0x10) != *(int *)(param_1 + 0x838))))) ||
     ((*(uint *)(lVar2 + 8) & 0x10200000) != 0)) goto LAB_1418bb249;
  FUN_1403c747e(param_1,&local_20,*(undefined8 *)(param_1 + 0x73c));
  if (local_20 == (longlong *)0x0) goto LAB_1418bb249;
  if (*(int *)(param_1 + 0x4ec) == 0) {
LAB_1418bb37e:
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x4e8);
    uVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar3 == (undefined8 *)0x0) ||
         ((*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x4ec) ||
          ((*(uint *)(puVar3 + 1) & 0x10200000) != 0)))) goto LAB_1418bb37e;
      uVar4 = *puVar3;
    }
  }
  local_48 = 0;
  FUN_14071ab80(local_20,&local_38,param_1 + 0x720,uVar4);
  local_38 = 0;
  local_30 = 0xffffffffffffffff;
  if ((local_20 != (longlong *)0x0) &&
     (*(int *)(local_20 + 0x21) = (int)local_20[0x21] + -1, (int)local_20[0x26] < 1)) {
    FUN_1400847bc(local_20 + 0x17,0);
    if ((int)local_20[0x21] == 0) {
      FUN_140087e46(local_20);
      if (*local_20 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_1418bb249;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_20);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_20);
      }
    }
  }
LAB_1418bb249:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418bb3a4 FUN_1418bb3a4 body=314 status=ok
// SIG undefined FUN_1418bb3a4(void)

void FUN_1418bb3a4(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0x30);
  bVar1 = *(byte *)(lVar3 + 0xbd8);
  if ((int)(uint)bVar1 < *(int *)(lVar3 + 0xbf0)) {
    lVar3 = *(longlong *)
             (*(longlong *)(lVar3 + 0xbe8) + 0x20 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
    if (lVar3 != 0) {
      FUN_140457ffc(lVar3 + 0x40,param_1);
    }
  }
  if ((*(byte *)(param_1 + 0x2d1) & 0x20) != 0) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x1b0);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x5d8))();
      if (lVar3 != 0) {
        lVar4 = FUN_1449f3324();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0x268);
          local_28 = *(undefined4 *)(*(longlong *)(param_1 + 0x178) + 0x270);
          local_20 = 0;
          FUN_145815ce0(lVar3,&local_30,lVar3 + 0x960,0);
        }
      }
    }
    *(byte *)(param_1 + 0x2d1) = *(byte *)(param_1 + 0x2d1) & 0xdf;
  }
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x2d8))();
  }
  if (0 < *(int *)(param_1 + 0xe8)) {
    FUN_14053d8da(param_1 + 0xe0,1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418bb4e0 FUN_1418bb4e0 body=1999 status=ok
// SIG undefined FUN_1418bb4e0(void)

void FUN_1418bb4e0(longlong *param_1)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined ***pppuVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  undefined1 *local_d8;
  code *local_d0;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  longlong *local_90;
  code *local_78;
  int local_70;
  undefined ***local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  bVar1 = *(byte *)((longlong)param_1 + 0x2d1);
  bVar4 = bVar1 & 0x7f | *(char *)(param_1[0x2f] + 0x2b8) << 7;
  *(byte *)((longlong)param_1 + 0x2d1) = bVar4;
  if ((bVar1 & 8) == 0) {
    *(byte *)((longlong)param_1 + 0x2d1) = bVar4 | 8;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14b4aa430;
    local_78 = (code *)&LAB_143ec80a8;
    local_b8 = &LAB_143ec80a8;
    local_a8 = 0;
    local_98 = &PTR_LAB_14b4aa430;
    local_90 = param_1;
    local_50 = param_1;
    (**(code **)(*(longlong *)(param_1[6] + 0x8c0) + 0x48))(param_1[6] + 0x8c0,0);
    if ((*(byte *)((longlong)param_1 + 0x2fa) != 0) &&
       (*(uint *)(param_1[0x2f] + 0xa0) == (uint)*(byte *)((longlong)param_1 + 0x2fa))) {
      *(byte *)((longlong)param_1 + 0x2d1) = *(byte *)((longlong)param_1 + 0x2d1) | 0x10;
    }
    if (local_78 != (code *)0x0) {
      pppuVar11 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar11 = &local_58;
      }
      (*(code *)(*pppuVar11)[2])();
    }
  }
  bVar1 = *(byte *)(param_1 + 7);
  if (((int)(uint)bVar1 < *(int *)(param_1[6] + 0xbf0)) &&
     (lVar8 = *(longlong *)
               (*(longlong *)(param_1[6] + 0xbe8) + 0x20 +
               (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), lVar8 != 0)) {
    local_78 = (code *)0x0;
    local_70 = 0;
    FUN_1446efa72(&local_78,0,3,0x10);
    pcVar3 = local_78;
    local_70 = 3;
    *(undefined ***)local_78 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar15 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar15 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar15;
    *(longlong *)(local_78 + 0x10) = lVar12;
    *(undefined ***)local_78 = &PTR_FUN_14b4aa450;
    *(undefined8 *)(local_78 + 0x18) = 0;
    iVar6 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar2 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_78 + 0x18) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      iVar6 = *(int *)(lVar15 + 0x10);
      if (*(int *)(lVar15 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar14 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar14);
        }
        LOCK();
        iVar6 = *(int *)(lVar15 + 0x10);
        bVar16 = iVar6 == 0;
        if (bVar16) {
          *(int *)(lVar15 + 0x10) = iVar14;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar16) {
          iVar6 = iVar14;
        }
      }
    }
    *(int *)(pcVar3 + 0x1c) = iVar6;
    *(undefined1 **)(pcVar3 + 0x20) = &LAB_143ec3e36;
    FUN_1448b6402(lVar8 + 0x70,local_c0,&local_78);
    if (local_70 != 0) {
      if (local_78 == (code *)0x0) goto LAB_1418bb6f3;
      (*(code *)**(undefined8 **)local_78)(local_78,0);
      FUN_1446efa72(&local_78,0,0,0x10);
      local_70 = 0;
    }
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1418bb6f3:
  if (param_1[0x56] == 0) goto LAB_1418bb7bf;
  plVar10 = *(longlong **)(param_1[6] + 0x1b0);
  if (plVar10 != (longlong *)0x0) {
    lVar8 = *plVar10;
    if (*(code **)(lVar8 + 0x5e8) == FUN_140972dde) {
      if (plVar10[0x76] == 0) {
        if (*(code **)(lVar8 + 0x5f8) == FUN_144784df4) {
          if (*(code **)(plVar10[0x784] + 0x18) == (code *)&LAB_144904684) {
            if (((((*(int *)((longlong)plVar10 + 0x75b4) == 0) ||
                  (uVar2 = *(uint *)(plVar10 + 0xeb6), (int)uVar2 < 0)) ||
                 (DAT_14c9647dc <= (int)uVar2)) ||
                ((plVar13 = (longlong *)
                            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                 plVar13 == (longlong *)0x0 ||
                 ((int)plVar13[2] != *(int *)((longlong)plVar10 + 0x75b4))))) ||
               ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) goto LAB_1418bb7b8;
            if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
              lVar8 = *plVar13;
            }
            else {
              lVar8 = 0;
            }
            lVar8 = lVar8 + 0x110;
          }
          else {
            lVar8 = (**(code **)(plVar10[0x784] + 0x18))(plVar10 + 0x784);
          }
          if (lVar8 == 0) goto LAB_1418bb7b8;
          lVar8 = *(longlong *)(lVar8 + 0x20);
        }
        else {
          lVar8 = (**(code **)(lVar8 + 0x5f8))(plVar10);
        }
        if (lVar8 == 0) goto LAB_1418bb7b8;
        lVar8 = *(longlong *)(lVar8 + 0x3b0);
        goto LAB_1418bb870;
      }
    }
    else {
      lVar8 = (**(code **)(lVar8 + 0x5e8))(plVar10);
LAB_1418bb870:
      if (lVar8 == 0) goto LAB_1418bb7b8;
      lVar8 = *plVar10;
    }
    cVar5 = (**(code **)(lVar8 + 0x700))(plVar10);
    if ((cVar5 != '\0') || (iVar6 = FUN_14487fd02(param_1[6]), iVar6 != 3)) {
      *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) | 0x80;
      lVar8 = plVar10[0x78];
      if (lVar8 != 0) {
        if (DAT_14caf9cd0 == 0) {
          local_e0 = &local_78;
          local_78 = FUN_141030f22;
          local_d0 = FUN_14081d0ea;
          local_d8 = &LAB_1463c0cc2;
          local_e8 = &LAB_147c9db5b;
          local_f0 = &LAB_1463f9c44;
          local_f8 = &DAT_149e063b2;
          local_100 = 0x2000000000;
          local_108 = 0x10000004;
          local_110 = 8;
          local_118 = 0x958;
          FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
        }
        if (((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) == DAT_14caf9cd0 + 0x30)) &&
           (lVar8 = *(longlong *)(lVar8 + 0x448), lVar8 != 0)) {
          uVar9 = FUN_1405e72a0();
          plVar10 = (longlong *)FUN_144718840(lVar8,uVar9);
          if ((plVar10 != (longlong *)0x0) &&
             (lVar8 = (**(code **)(*plVar10 + 0x10))(plVar10), lVar8 != 0)) {
            FUN_140457ffc(lVar8 + 0x38,param_1);
            local_78 = (code *)0x0;
            local_70 = 0;
            FUN_1446efa72(&local_78,0,3,0x10);
            pcVar3 = local_78;
            local_70 = 3;
            *(undefined ***)local_78 = &PTR_LAB_149e020b0;
            LOCK();
            UNLOCK();
            lVar12 = DAT_14c758608 + 1;
            lVar15 = DAT_14c758608 + 1;
            if (lVar12 == 0) {
              LOCK();
              UNLOCK();
              lVar12 = DAT_14c758608 + 2;
              lVar15 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar15;
            *(longlong *)(local_78 + 0x10) = lVar12;
            *(undefined ***)local_78 = &PTR_FUN_14b4aa450;
            *(undefined8 *)(local_78 + 0x18) = 0;
            iVar6 = 0;
            if (param_1 != (longlong *)0x0) {
              uVar2 = *(uint *)((longlong)param_1 + 0xc);
              *(uint *)(local_78 + 0x18) = uVar2;
              if ((int)uVar2 < DAT_14c9647dc) {
                lVar15 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
              }
              else {
                lVar15 = 0;
              }
              iVar6 = *(int *)(lVar15 + 0x10);
              if (*(int *)(lVar15 + 0x10) == 0) {
                LOCK();
                iVar6 = DAT_14c964868 + 1;
                UNLOCK();
                iVar14 = DAT_14c964868 + 1;
                bVar16 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar6;
                if (bVar16) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar14);
                }
                LOCK();
                iVar6 = *(int *)(lVar15 + 0x10);
                bVar16 = iVar6 == 0;
                if (bVar16) {
                  *(int *)(lVar15 + 0x10) = iVar14;
                  iVar6 = 0;
                }
                UNLOCK();
                if (bVar16) {
                  iVar6 = iVar14;
                }
              }
            }
            *(int *)(pcVar3 + 0x1c) = iVar6;
            *(undefined1 **)(pcVar3 + 0x20) = &LAB_140d4e3a2;
            FUN_1448b6402(lVar8 + 0x38,local_c0,&local_78);
            if (local_70 == 0) {
LAB_1418bba12:
              if (local_78 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_78 != (code *)0x0) {
              (*(code *)**(undefined8 **)local_78)(local_78,0);
              FUN_1446efa72(&local_78,0,0,0x10);
              local_70 = 0;
              goto LAB_1418bba12;
            }
            *(undefined4 *)((longlong)param_1 + 0x324) = 0;
            bVar1 = *(byte *)(param_1 + 7);
            if (((int)(uint)bVar1 < *(int *)(param_1[6] + 0xbf0)) &&
               (plVar10 = *(longlong **)
                           (*(longlong *)(param_1[6] + 0xbe8) + 0x10 +
                           (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8),
               plVar10 != (longlong *)0x0)) {
              uVar7 = (**(code **)(*plVar10 + 0x2b8))();
              *(undefined4 *)((longlong)param_1 + 0x324) = uVar7;
            }
            goto LAB_1418bb7bf;
          }
        }
      }
    }
  }
LAB_1418bb7b8:
  *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) & 0x7f;
LAB_1418bb7bf:
  cVar5 = (**(code **)(*param_1 + 0x480))(param_1);
  if ((cVar5 != '\0') && ((*(byte *)(param_1 + 5) & 1) == 0)) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
    if (param_1[6] != 0) {
      FUN_140b8222c(param_1[6],param_1,1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418bbcb0 FUN_1418bbcb0 body=233 status=ok
// SIG undefined FUN_1418bbcb0(void)

ulonglong FUN_1418bbcb0(longlong *param_1,undefined4 param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  undefined7 uVar6;
  ulonglong uVar5;
  
  *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) & 0xe7 | ((byte)param_2 ^ 1) << 4;
  plVar2 = (longlong *)param_1[0x16];
  if ((plVar2 != (longlong *)0x0) && ((char)plVar2[0xc] == '\x01')) {
    cVar3 = (**(code **)(*plVar2 + 0x2f0))(plVar2,param_2);
    if (cVar3 == '\0') {
      uVar5 = 0;
      goto LAB_1418bbd5b;
    }
  }
  cVar3 = (**(code **)(*param_1 + 0x2b8))(param_1);
  uVar6 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (cVar3 == '\0') {
    uVar5 = CONCAT71(uVar6,1);
    if (param_1[0x60] == 0) goto LAB_1418bbd5b;
    cVar3 = FUN_1402273fc(param_1[6]);
    if (cVar3 == '\0') goto LAB_1418bbd5b;
    lVar4 = *param_1;
  }
  else {
    if ((byte)param_2 == 0) {
      lVar4 = param_1[6];
      uVar5 = CONCAT71(uVar6,1);
      if (*(char *)(lVar4 + 0x178) == '\x03') {
        bVar1 = *(byte *)(param_1 + 7);
        if ((int)(uint)bVar1 < *(int *)(lVar4 + 0xbf0)) {
          plVar2 = *(longlong **)
                    (*(longlong *)(lVar4 + 0xbe8) + 0x10 +
                    (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x360))();
          }
        }
      }
      goto LAB_1418bbd5b;
    }
    lVar4 = *param_1;
    param_2 = 1;
  }
  uVar5 = CONCAT71(uVar6,1);
  (**(code **)(lVar4 + 0x420))(param_1,param_2);
LAB_1418bbd5b:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1418bbd9a FUN_1418bbd9a body=270 status=ok
// SIG undefined FUN_1418bbd9a(void)

undefined8 FUN_1418bbd9a(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(*(longlong *)(param_1 + 0x178) + 0x2b3) == '\x01') {
    uVar2 = FUN_1406f3fb0(*(longlong *)(param_1 + 0x178) + 0x2ce);
    local_88[0] = 0;
    local_60 = 0;
    FUN_1456bb102(local_88,*(undefined8 *)(param_1 + 0x30));
    FUN_1448729ea(uVar2,local_58,local_88);
    uVar2 = FUN_144a7b41a(local_58,0x3f800000);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar3 = local_58;
      if (0x18 < local_40) {
        pppuVar3 = (undefined8 ***)local_58[0];
      }
      (*pcVar1)(pppuVar3);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(local_58[0]);
    }
    FUN_144a5ac3a(local_88);
  }
  else {
    uVar2 = 0x3f800000;
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418bbeaa FUN_1418bbeaa body=92 status=ok
// SIG undefined FUN_1418bbeaa(void)

void FUN_1418bbeaa(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  if (param_2 == '\0') {
    FUN_140b820e8(param_1);
    return;
  }
  lVar1 = (**(code **)(*param_1 + 0x180))(param_1);
  param_1[0x5d] = *(longlong *)(lVar1 + 0x6d0);
  if ((*(byte *)(param_1 + 0x5a) & 0x20) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001418bbefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x420))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1418bbf06 FUN_1418bbf06 body=91 status=ok
// SIG undefined FUN_1418bbf06(void)

void FUN_1418bbf06(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 7);
  if ((int)(uint)bVar1 < *(int *)(param_1[6] + 0xbf0)) {
    plVar2 = *(longlong **)
              (*(longlong *)(param_1[6] + 0xbe8) + 0x10 +
              (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*param_1 + 0x310))();
                    /* WARNING: Could not recover jumptable at 0x0001418bbf57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x358))(plVar2,uVar3,0,*(code **)(*plVar2 + 0x358));
      return;
    }
  }
  return;
}



// FUNCTION 1418bbf62 FUN_1418bbf62 body=900 status=ok
// SIG undefined FUN_1418bbf62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_1418bbf62(longlong *param_1,void *param_2,undefined8 param_3,undefined8 *param_4,
                    undefined1 param_5,longlong param_6,undefined4 param_7,undefined1 param_8)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined2 local_97;
  undefined1 local_95;
  undefined2 local_94;
  undefined1 local_92;
  undefined2 local_91;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined1 local_7f;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar1 = param_1[6];
  lVar11 = *(longlong *)(lVar1 + 0x1b0);
  if (param_6 == 0) {
    param_6 = DAT_14cb94980;
  }
  local_a0 = 0;
  local_58 = 0;
  local_50 = 0x800000000;
  local_38 = 0;
  local_30 = 0x400000000;
  local_98 = 1;
  local_8c = 0;
  local_a8 = param_6;
  local_97 = 1;
  local_7f = 1;
  local_94 = 0;
  local_92 = 0;
  if (lVar11 != 0) {
    local_30 = 0x400000001;
    local_48 = *(undefined4 *)(lVar11 + 0xc);
    local_a0 = *(undefined8 *)(lVar11 + 0x18);
  }
  local_91 = 0x101;
  local_95 = param_5;
  local_80 = param_8;
  local_84 = param_7;
  local_b8 = _DAT_14cad0ee0;
  uStack_b0 = uRam000000014cad0ee8;
  local_c8 = _DAT_14cad0ed0;
  uStack_c0 = _DAT_14cad0ed8;
  lVar11 = 0;
  do {
    cVar9 = *(char *)((longlong)&uStack_c0 + lVar11 + 7);
    bVar2 = *(char *)((longlong)&local_c8 + lVar11) == '\x02';
    bVar3 = *(char *)((longlong)&local_c8 + lVar11 + 1) == '\x02';
    bVar4 = *(char *)((longlong)&local_c8 + lVar11 + 2) == '\x02';
    bVar5 = *(char *)((longlong)&local_c8 + lVar11 + 3) == '\x02';
    bVar6 = *(char *)((longlong)&local_c8 + lVar11 + 4) == '\x02';
    bVar7 = *(char *)((longlong)&local_c8 + lVar11 + 5) == '\x02';
    bVar8 = *(char *)((longlong)&local_c8 + lVar11 + 6) == '\x02';
    if ((bool)(~bVar2 & 1)) {
      *(undefined1 *)((longlong)&local_c8 + lVar11) = 2;
    }
    if ((bool)(~bVar3 & 1)) {
      *(undefined1 *)((longlong)&local_c8 + lVar11 + 1) = 2;
    }
    if ((bool)(~bVar4 & 1)) {
      *(undefined1 *)((longlong)&local_c8 + lVar11 + 2) = 2;
    }
    if ((bool)(~bVar5 & 1)) {
      *(undefined1 *)((longlong)&local_c8 + lVar11 + 3) = 2;
    }
    if ((bool)(~bVar6 & 1)) {
      *(undefined1 *)((longlong)&local_c8 + lVar11 + 4) = 2;
    }
    if ((bool)(~bVar7 & 1)) {
      *(undefined1 *)((longlong)&local_c8 + lVar11 + 5) = 2;
    }
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&local_c8 + lVar11 + 6) = 2;
    }
    if ((bool)(~(*(char *)((longlong)&local_c8 + lVar11 + 7) == '\x02') & 1)) {
      *(undefined1 *)((longlong)&local_c8 + lVar11 + 7) = 2;
    }
    if ((bool)(~bVar2 & 1)) {
      *(undefined1 *)((longlong)&uStack_c0 + lVar11) = 2;
    }
    if ((bool)(~bVar3 & 1)) {
      *(undefined1 *)((longlong)&uStack_c0 + lVar11 + 1) = 2;
    }
    if ((bool)(~bVar4 & 1)) {
      *(undefined1 *)((longlong)&uStack_c0 + lVar11 + 2) = 2;
    }
    if ((bool)(~bVar5 & 1)) {
      *(undefined1 *)((longlong)&uStack_c0 + lVar11 + 3) = 2;
    }
    if ((bool)(~bVar6 & 1)) {
      *(undefined1 *)((longlong)&uStack_c0 + lVar11 + 4) = 2;
    }
    if ((bool)(~bVar7 & 1)) {
      *(undefined1 *)((longlong)&uStack_c0 + lVar11 + 5) = 2;
    }
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&uStack_c0 + lVar11 + 6) = 2;
    }
    if ((bool)(~(cVar9 == '\x02') & 1)) {
      *(undefined1 *)((longlong)&uStack_c0 + lVar11 + 7) = 2;
    }
    lVar11 = lVar11 + 0x10;
  } while (lVar11 != 0x20);
  local_88 = *(undefined1 *)(lVar1 + 0xb4a);
  uVar12 = (ulonglong)*(byte *)(lVar1 + 0xb48);
  if ((((uVar12 != 6) && (*(char *)(lVar1 + 0xb49) != '\0')) && (*(byte *)(lVar1 + 0xb48) < 6)) &&
     (cVar9 = (*(char *)(lVar1 + 0xb49) != '\x01') * '\x02',
     cVar9 != *(char *)((longlong)&uStack_b0 + uVar12 + 2))) {
    *(char *)((longlong)&uStack_b0 + uVar12 + 2) = cVar9;
  }
  memset(param_2,0,0x100);
  *(undefined4 *)((longlong)param_2 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0xffffffff;
  uVar10 = (**(code **)(*param_1 + 0x180))(param_1);
  local_d8 = &local_c8;
  local_e0 = &local_a8;
  local_e8 = 0x10;
  cVar9 = FUN_1400b50cc(uVar10,param_2,param_3,param_4);
  if (cVar9 == '\0') {
    *(undefined8 *)((longlong)param_2 + 0x20) = param_4[2];
    uVar10 = param_4[1];
    *(undefined8 *)((longlong)param_2 + 0x10) = *param_4;
    *(undefined8 *)((longlong)param_2 + 0x18) = uVar10;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418bc2e8 FUN_1418bc2e8 body=236 status=ok
// SIG undefined FUN_1418bc2e8(void)

undefined4 *
FUN_1418bc2e8(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar2 = FUN_1447262c2(param_4);
  if (lVar2 == 0) {
LAB_1418bc372:
    lVar2 = FUN_1403e5e94(param_4);
    uVar4 = 0;
    if (lVar2 == 0) goto LAB_1418bc345;
    bVar1 = *(byte *)(lVar2 + 0xbd8);
    if ((*(int *)(lVar2 + 0xbf0) <= (int)(uint)bVar1) ||
       (lVar2 = *(longlong *)
                 (*(longlong *)(lVar2 + 0xbe8) + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8)
       , lVar2 == 0)) goto LAB_1418bc345;
    lVar3 = FUN_140086c3a();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1418bc345;
  }
  else {
    lVar3 = FUN_140086c3a();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1418bc372;
  }
  uVar4 = 0;
  if ((0.0 < *(float *)(lVar2 + 0x1c4)) || (0.0 < *(float *)(lVar2 + 0x1d0))) {
    uVar4 = FUN_140284a0c(lVar2);
  }
LAB_1418bc345:
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = uVar4;
  *(undefined1 *)(param_2 + 8) = 3;
  return param_2;
}



// FUNCTION 1418bc3d4 FUN_1418bc3d4 body=1695 status=ok
// SIG undefined FUN_1418bc3d4(void)

void FUN_1418bc3d4(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar10 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = uVar10;
    plVar12 = *(longlong **)(param_1 + 0x88);
    if (plVar12 == (longlong *)0x0) goto LAB_1418bc455;
    *(undefined8 *)(param_1 + 0x88) = 0;
LAB_1418bc869:
    LOCK();
    plVar2 = plVar12 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    if (plVar3 == (longlong *)0x0) goto LAB_1418bc455;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x80) = uVar10;
    plVar12 = *(longlong **)(param_1 + 0x88);
    if (plVar3 == plVar12) {
      LOCK();
      plVar12 = plVar3 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x88) = plVar3;
      if (plVar12 != (longlong *)0x0) goto LAB_1418bc869;
    }
  }
  LOCK();
  plVar12 = plVar3 + 1;
  *(int *)plVar12 = (int)*plVar12 + -1;
  UNLOCK();
  if ((int)*plVar12 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_1418bc455:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar3 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  bVar8 = *(byte *)(param_1 + 0xc4);
  bVar7 = ((char)param_4 == '\0') << 4;
  *(byte *)(param_1 + 0xc4) = bVar8 & 0xef | bVar7;
  *(byte *)(param_1 + 0xc4) =
       bVar8 & 0xcf | bVar7 | (*(byte *)(*(longlong *)(param_1 + 0x80) + 0xd0) & 8) << 2;
  lVar4 = *param_3;
  uVar10 = FUN_140a00fd3();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_1403f69f4(lVar5,uVar10,0);
  }
  puVar13 = &local_a0;
  FUN_140ccc900(lVar4,puVar13,uVar10,param_4);
  if (local_80 == 3) {
    uVar14 = local_a0;
    bVar8 = 3;
  }
  else {
    puVar11 = &local_78;
    FUN_1400b56fe(puVar11,&local_a0,3);
    uVar14 = 0;
    if (local_58 != 0) {
      uVar14 = local_78;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar11 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar6)(puVar11);
    }
    bVar8 = local_80;
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
      bVar8 = local_80;
    }
  }
  *(undefined4 *)(param_1 + 0x90) = uVar14;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar8 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar13 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar6)(puVar13);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  lVar4 = *param_3;
  uVar10 = FUN_140a00fd3();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_1403f69f4(lVar5,uVar10,1);
  }
  puVar13 = &local_a0;
  FUN_140ccc900(lVar4,puVar13,uVar10,param_4);
  if (local_80 == 3) {
    uVar14 = local_a0;
    bVar8 = 3;
  }
  else {
    puVar11 = &local_78;
    FUN_1400b56fe(puVar11,&local_a0,3);
    uVar14 = 0;
    if (local_58 != 0) {
      uVar14 = local_78;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar11 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar6)(puVar11);
    }
    bVar8 = local_80;
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
      bVar8 = local_80;
    }
  }
  *(undefined4 *)(param_1 + 0x94) = uVar14;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar8 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar13 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar6)(puVar13);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  lVar4 = *param_3;
  uVar10 = FUN_140a00fd3();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_1403f69f4(lVar5,uVar10,2);
  }
  puVar13 = &local_a0;
  FUN_140ccc900(lVar4,puVar13,uVar10,param_4);
  if (local_80 == 3) {
    uVar9 = 3;
    uVar14 = local_a0;
  }
  else {
    puVar11 = &local_78;
    FUN_1400b56fe(puVar11,&local_a0,3);
    uVar14 = 0;
    if (local_58 != 0) {
      uVar14 = local_78;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar11 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar6)(puVar11);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
    uVar9 = (uint)local_80;
  }
  *(undefined4 *)(param_1 + 0x98) = uVar14;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar9 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar13 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar6)(puVar13);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  lVar4 = *param_3;
  uVar10 = FUN_140a00fd3();
  lVar5 = *(longlong *)(lVar4 + 0x200);
  if (lVar5 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_1403f69f4(lVar5,uVar10,3);
  }
  puVar13 = &local_a0;
  FUN_140ccc900(lVar4,puVar13,uVar10,param_4);
  if (local_80 == 3) {
    uVar9 = 3;
    uVar14 = local_a0;
  }
  else {
    puVar11 = &local_78;
    FUN_1400b56fe(puVar11,&local_a0,3);
    uVar14 = 0;
    if (local_58 != 0) {
      uVar14 = local_78;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar11 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar6)(puVar11);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
    uVar9 = (uint)local_80;
  }
  *(undefined4 *)(param_1 + 0x9c) = uVar14;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar9 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar13 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar6)(puVar13);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar3 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418bcc9a FUN_1418bcc9a body=1002 status=ok
// SIG undefined FUN_1418bcc9a(void)

void FUN_1418bcc9a(longlong *param_1,float param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  byte bVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  lVar5 = param_1[6];
  if ((((*(byte *)(param_1[0x10] + 0xd0) & 1) != 0) || (*(char *)(lVar5 + 0x178) == '\x03')) ||
     ((*(longlong **)(lVar5 + 0x1b0) != (longlong *)0x0 &&
      (cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x1b0) + 0x700))(), cVar3 != '\0')))) {
    if ((-1 < *(char *)((longlong)param_1 + 0xc4)) &&
       (lVar4 = (**(code **)(*param_1 + 0x180))(param_1),
       (double)*(float *)(param_1 + 0x17) <= *(double *)(lVar4 + 0x6d0))) {
      fVar10 = *(float *)(param_1 + 0x18);
      if (fVar10 <= 0.0) {
        fVar10 = *(float *)(param_1 + 0x12);
      }
      fVar10 = 0.0 - fVar10;
      if (((0.0 < fVar10) && (fVar8 = *(float *)(param_1 + 0x14), fVar8 < 1.0)) ||
         ((fVar10 < 0.0 && (fVar8 = *(float *)(param_1 + 0x14), 0.0 < fVar8)))) {
        fVar8 = fVar10 * param_2 + fVar8;
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        *(float *)(param_1 + 0x14) = fVar8;
      }
    }
    if (((*(byte *)(param_1[0x10] + 0xd0) & 4) != 0) && (*(char *)(lVar5 + 0x178) == '\x03')) {
      fVar10 = *(float *)((longlong)param_1 + 0xbc);
      if (0.0 < fVar10) {
        fVar10 = fVar10 - param_2;
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        *(float *)((longlong)param_1 + 0xbc) = fVar10;
      }
      if (1.0 <= *(float *)(param_1 + 0x14)) {
        if ((*(byte *)((longlong)param_1 + 0xc4) & 4) != 0) goto LAB_1418bcd0e;
        bVar6 = true;
      }
      else {
        bVar6 = 0.0 < fVar10;
        if (((*(byte *)((longlong)param_1 + 0xc4) & 4) == 0) != bVar6) goto LAB_1418bcd0e;
      }
      FUN_14093f318(param_1,bVar6);
    }
  }
LAB_1418bcd0e:
  fVar10 = ABS(*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x16));
  if (1e-08 < fVar10) {
    lVar4 = param_1[0x10];
    if ((*(char *)(lVar5 + 0x178) == '\x03') && ((*(byte *)(lVar4 + 0xd0) & 1) == 0)) {
      bVar1 = *(byte *)((longlong)param_1 + 0xb4);
      bVar7 = (byte)(int)(*(float *)(param_1 + 0x14) * 100.0);
      *(byte *)((longlong)param_1 + 0xb4) = bVar7;
      if ((*(byte *)((longlong)param_1 + 0xc4) & 4) != 0) {
        bVar7 = bVar7 | 0x80;
        *(byte *)((longlong)param_1 + 0xb4) = bVar7;
      }
      if (bVar7 != bVar1) {
        FUN_14093f51c(lVar5,fVar10,(*(byte *)((longlong)param_1 + 0xc4) & 0x10) >> 4);
        lVar4 = param_1[0x10];
      }
    }
    if (*(longlong *)(lVar4 + 0x1cc) != 0) {
      bVar1 = *(byte *)((longlong)param_1 + 0xc4);
      if ((bVar1 & 0x40) == 0) {
        if ((((*(byte *)(lVar4 + 0x1c8) & 1) == 0) &&
            (fVar10 = *(float *)(param_1 + 0x16), *(float *)(lVar4 + 0x1d4) <= fVar10)) &&
           (*(float *)(param_1 + 0x14) <= fVar10 && fVar10 != *(float *)(param_1 + 0x14))) {
          *(byte *)((longlong)param_1 + 0xc4) = bVar1 | 0x40;
          uVar2 = *(undefined1 *)(param_1[6] + 0xbd8);
          *(undefined1 *)((longlong)param_1 + 0xb5) = uVar2;
          FUN_140980406(param_1[6],*(undefined8 *)(lVar4 + 0x1cc),uVar2,0,0);
        }
      }
      else if (*(float *)(param_1 + 0x14) <= *(float *)(lVar4 + 0x1d8) &&
               *(float *)(lVar4 + 0x1d8) != *(float *)(param_1 + 0x14)) {
        *(byte *)((longlong)param_1 + 0xc4) = bVar1 & 0xbf;
        FUN_140994e4c(param_1[6],*(undefined8 *)(lVar4 + 0x1cc),
                      *(undefined1 *)((longlong)param_1 + 0xb5),0);
      }
    }
    FUN_14485dd80(param_1 + 7);
    if (*(longlong *)(param_1[0x10] + 0x198) != 0) {
      uVar9 = (undefined4)param_1[0x14];
      lVar5 = FUN_1447e736e(param_1[0x10] + 0x1a0);
      if (lVar5 != 0) {
        uVar9 = FUN_1449e6cbc(lVar5);
      }
      (**(code **)(*(longlong *)(param_1[6] + 0x8c0) + 0x50))
                (param_1[6] + 0x8c0,*(undefined8 *)(param_1[0x10] + 0x198),uVar9,0);
    }
    fVar10 = *(float *)(param_1 + 0x14);
    *(float *)(param_1 + 0x16) = fVar10;
    if (((fVar10 == 0.0) && (!NAN(fVar10))) &&
       (((*(byte *)((longlong)param_1 + 0xc4) & 4) == 0 && ((*(byte *)(param_1 + 5) & 1) != 0)))) {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
      if (param_1[6] != 0) {
        FUN_140b8233c(param_1[6] + 0xd88,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1418bd2dc FUN_1418bd2dc body=147 status=ok
// SIG undefined FUN_1418bd2dc(void)

longlong * FUN_1418bd2dc(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(param_1 + 0xc0);
  plVar2 = *(longlong **)(param_1 + 0xc0);
  if (*(code **)(*plVar2 + 0x50) != FUN_144828418) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x50))();
  }
  FUN_1447a1fc0(plVar2);
  plVar2 = (longlong *)*plVar4;
  pcVar1 = *(code **)(*plVar2 + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar3 = plVar2 + 3;
    if (plVar2[5] != 0) {
      plVar3 = (longlong *)(plVar2[5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar3 = plVar2 + 2;
  }
  else {
    plVar3 = (longlong *)(*pcVar1)(plVar2);
  }
  if ((int)plVar3[1] < 2) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  }
  return plVar4;
}



// FUNCTION 1418bd370 FUN_1418bd370 body=101 status=ok
// SIG undefined FUN_1418bd370(void)

void FUN_1418bd370(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4a9e10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418bd3d6 FUN_1418bd3d6 body=370 status=ok
// SIG undefined FUN_1418bd3d6(void)

void FUN_1418bd3d6(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418bd45f;
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
LAB_1418bd45f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1418bd548 FUN_1418bd548 body=29 status=ok
// SIG undefined FUN_1418bd548(void)

undefined8 FUN_1418bd548(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418bd566 FUN_1418bd566 body=269 status=ok
// SIG undefined FUN_1418bd566(void)

void FUN_1418bd566(longlong param_1,int param_2)

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



// FUNCTION 1418bd674 FUN_1418bd674 body=255 status=ok
// SIG undefined FUN_1418bd674(void)

void FUN_1418bd674(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
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
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418bd774 FUN_1418bd774 body=93 status=ok
// SIG undefined FUN_1418bd774(void)

void FUN_1418bd774(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4aa4c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1418bd7d2 FUN_1418bd7d2 body=277 status=ok
// SIG undefined FUN_1418bd7d2(void)

undefined8 FUN_1418bd7d2(longlong param_1,undefined4 param_2)

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
    if (iVar1 == 2) goto LAB_1418bd8e1;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1418bd8e1;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1418bd8e1:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1418bd88e;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_1418bd88e;
    }
  }
  uVar6 = 0;
LAB_1418bd88e:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418bd8e8 FUN_1418bd8e8 body=93 status=ok
// SIG undefined FUN_1418bd8e8(void)

void FUN_1418bd8e8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4aa7a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1418bd946 FUN_1418bd946 body=27 status=ok
// SIG undefined FUN_1418bd946(void)

void FUN_1418bd946(longlong *param_1)

{
  (**(code **)(*param_1 + 0x2f8))();
  *(undefined1 *)((longlong)param_1 + 0x66) = 0;
  return;
}



// FUNCTION 1418bd962 FUN_1418bd962 body=43 status=ok
// SIG undefined FUN_1418bd962(void)

bool FUN_1418bd962(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_14095be44(param_3);
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(lVar1 + 0xbd8) == *(char *)(param_1 + 0x10);
  }
  return bVar2;
}



// FUNCTION 1418bd98e FUN_1418bd98e body=102 status=ok
// SIG undefined FUN_1418bd98e(void)

undefined8 * FUN_1418bd98e(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_14b4aaac0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined4 *)((longlong)param_1 + 0x79) = 0;
  return param_1;
}



// FUNCTION 1418bd9f4 FUN_1418bd9f4 body=97 status=ok
// SIG undefined FUN_1418bd9f4(void)

void FUN_1418bd9f4(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14066e964();
  local_30 = FUN_140343d7a(param_1);
  FUN_140bc9530(&local_28);
  *(undefined4 *)(param_1 + 0xd8) = local_28;
  *(undefined4 *)(param_1 + 0xdc) = uStack_24;
  *(undefined4 *)(param_1 + 0xe0) = uStack_20;
  *(undefined4 *)(param_1 + 0xe4) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418bda56 FUN_1418bda56 body=736 status=ok
// SIG undefined FUN_1418bda56(void)

undefined8 FUN_1418bda56(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
    if (*(int *)(param_1 + 0xdc) != 0) {
      uVar4 = *(uint *)(param_1 + 0xd8);
      uVar8 = 0;
      if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_1418bdbfe;
      lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      if ((lVar7 == 0) ||
         ((*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0xdc) ||
          ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)))) goto LAB_1418bdc51;
      lVar7 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar5 = local_48;
      local_40 = 3;
      FUN_14045cb56(param_1,&local_38);
      plVar2 = local_30;
      if (local_30 == (longlong *)0x0) {
        *puVar5 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        puVar5[2] = lVar9;
        *puVar5 = &PTR_FUN_14b4ab860;
        puVar5[3] = local_38;
        puVar5[4] = 0;
        puVar5[5] = FUN_140c1709e;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *puVar5 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        puVar5[2] = lVar9;
        *puVar5 = &PTR_FUN_14b4ab860;
        puVar5[3] = local_38;
        puVar5[4] = local_30;
        LOCK();
        *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
        UNLOCK();
        puVar5[5] = FUN_140c1709e;
        LOCK();
        plVar1 = local_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_30 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar3 = (int *)((longlong)local_30 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
        }
      }
      FUN_1448b6402(lVar7 + 0x28,&local_38,&local_48);
      if (local_40 == 0) {
LAB_1418bdbdb:
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_48 != (undefined8 *)0x0) {
        (**(code **)*local_48)(local_48,0);
        FUN_1446efa72(&local_48,0,0,0x10);
        local_40 = 0;
        goto LAB_1418bdbdb;
      }
      *(undefined8 *)(param_1 + 0xf0) = local_38;
      *(undefined1 *)(param_1 + 0xec) = 0;
      uVar8 = 1;
      goto LAB_1418bdbfe;
    }
  }
LAB_1418bdc51:
  uVar8 = 0;
LAB_1418bdbfe:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418bdd38 FUN_1418bdd38 body=1137 status=ok
// SIG undefined FUN_1418bdd38(void)

void FUN_1418bdd38(longlong param_1)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *_Dst;
  undefined8 *_Dst_00;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined1 local_5c;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  uVar7 = DAT_14cb94cf0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = FUN_140a48832();
  lVar6 = FUN_140c48046(param_1 + 0x80,uVar5,uVar7,0);
  if (lVar6 != 0) {
    local_70 = 0;
    uVar7 = FUN_140c4800c();
    lVar8 = FUN_140c47e50(lVar6,uVar7,&local_70);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 0x78) = 0;
      *(undefined1 *)(lVar8 + 0x7b) = 0;
      *(undefined2 *)(lVar8 + 0x71) = 0x201;
      puVar12 = (undefined8 *)(param_1 + 0x1a0);
      _Dst = (longlong *)(lVar8 + 0x88);
      bVar1 = *(byte *)(lVar8 + 0xa8);
      if (bVar1 == *(byte *)(param_1 + 0x1c0)) {
        if (0x18 < *(ushort *)(param_1 + 0x1b8)) {
          puVar12 = *(undefined8 **)(param_1 + 0x1a0);
        }
        if (0x18 < *(ushort *)(lVar8 + 0xa0)) {
          _Dst = (longlong *)*_Dst;
        }
        uVar9 = (ulonglong)((uint)bVar1 * 0x120);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar9);
        if (pcVar3 == (code *)0x0) {
          memcpy(_Dst,puVar12,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar9));
        }
        else {
          (*pcVar3)(_Dst,puVar12);
        }
      }
      else {
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
        if (pcVar3 != (code *)0x0) {
          plVar10 = _Dst;
          if (0x18 < *(ushort *)(lVar8 + 0xa0)) {
            plVar10 = (longlong *)*_Dst;
          }
          (*pcVar3)(plVar10);
        }
        if (0x18 < *(ushort *)(lVar8 + 0xa0)) {
          FUN_1400020a8(*_Dst);
        }
        bVar1 = *(byte *)(param_1 + 0x1c0);
        uVar4 = (uint)bVar1;
        uVar2 = *(ushort *)(param_1 + 0x1b8);
        *(ushort *)(lVar8 + 0xa0) = uVar2;
        plVar10 = _Dst;
        if (0x18 < uVar2) {
          local_88 = (ulonglong)bVar1;
          plVar10 = (longlong *)FUN_14001cc68(uVar2,0);
          *_Dst = (longlong)plVar10;
          puVar12 = (undefined8 *)*puVar12;
          uVar4 = (uint)local_88;
        }
        pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar4 * 0x120));
        if (pcVar3 == (code *)0x0) {
          memcpy(plVar10,puVar12,
                 (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar4 * 0x120)));
        }
        else {
          (*pcVar3)(plVar10,puVar12);
        }
        *(undefined1 *)(lVar8 + 0xa8) = *(undefined1 *)(param_1 + 0x1c0);
      }
      *(undefined1 *)(lVar8 + 0xb0) = *(undefined1 *)(param_1 + 0x1c8);
      *(undefined1 *)(lVar8 + 0x261) = 1;
      *(undefined1 *)(lVar8 + 0x1d8) = 0;
      local_78 = local_4c;
      local_70 = DAT_14cb72618;
      local_68 = *(undefined1 *)(param_1 + 0x1d0);
      local_64 = DAT_14cb72620;
      local_5c = *(undefined1 *)(param_1 + 0x1d1);
      local_58 = DAT_14cb72628;
      local_50 = *(undefined1 *)(param_1 + 0x1d2);
      local_80 = &local_70;
      FUN_140c482d4(lVar8);
      *(undefined1 *)(lVar8 + 0x2a0) = *(undefined1 *)(param_1 + 0x210);
      puVar12 = (undefined8 *)(param_1 + 0x1e0);
      _Dst_00 = (undefined8 *)(lVar8 + 0x270);
      bVar1 = *(byte *)(lVar8 + 0x290);
      if (bVar1 == *(byte *)(param_1 + 0x200)) {
        if (0x18 < *(ushort *)(param_1 + 0x1f8)) {
          puVar12 = *(undefined8 **)(param_1 + 0x1e0);
        }
        if (0x18 < *(ushort *)(lVar8 + 0x288)) {
          _Dst_00 = (undefined8 *)*_Dst_00;
        }
        uVar9 = (ulonglong)((uint)bVar1 * 0x120);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar9);
        if (pcVar3 == (code *)0x0) {
          memcpy(_Dst_00,puVar12,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar9));
        }
        else {
          (*pcVar3)(_Dst_00,puVar12);
        }
      }
      else {
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
        if (pcVar3 != (code *)0x0) {
          puVar11 = _Dst_00;
          if (0x18 < *(ushort *)(lVar8 + 0x288)) {
            puVar11 = (undefined8 *)*_Dst_00;
          }
          (*pcVar3)(puVar11);
        }
        if (0x18 < *(ushort *)(lVar8 + 0x288)) {
          FUN_1400020a8(*_Dst_00);
        }
        bVar1 = *(byte *)(param_1 + 0x200);
        uVar2 = *(ushort *)(param_1 + 0x1f8);
        *(ushort *)(lVar8 + 0x288) = uVar2;
        puVar11 = _Dst_00;
        if (0x18 < uVar2) {
          puVar11 = (undefined8 *)FUN_14001cc68(uVar2,0);
          *_Dst_00 = puVar11;
          puVar12 = (undefined8 *)*puVar12;
        }
        uVar9 = (ulonglong)((uint)bVar1 * 0x120);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar9);
        if (pcVar3 == (code *)0x0) {
          memcpy(puVar11,puVar12,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar9));
        }
        else {
          (*pcVar3)(puVar11,puVar12);
        }
        *(undefined1 *)(lVar8 + 0x290) = *(undefined1 *)(param_1 + 0x200);
      }
      *(undefined1 *)(lVar8 + 0x298) = *(undefined1 *)(param_1 + 0x208);
    }
    local_70 = 0;
    uVar7 = FUN_140ffa79a();
    lVar6 = FUN_140c47e50(lVar6,uVar7,&local_70);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 0x78) = 0;
      *(undefined1 *)(lVar6 + 0x7b) = 0;
      *(undefined2 *)(lVar6 + 0x71) = 0x201;
      *(undefined1 *)(lVar6 + 0x1c) = *(undefined1 *)(param_1 + 0x211);
      FUN_140ffb226(lVar6 + 0x80,param_1 + 0x218);
      *(undefined8 *)(lVar6 + 0x540) = *(undefined8 *)(param_1 + 0x6d8);
      *(undefined4 *)(lVar6 + 0x548) = *(undefined4 *)(param_1 + 0x6e0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418be1aa FUN_1418be1aa body=745 status=ok
// SIG undefined FUN_1418be1aa(void)

longlong FUN_1418be1aa(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  longlong local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    if (DAT_14cad00c8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1479b7a0c;
      local_60 = &LAB_1463b464e;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000005;
      local_80 = 8;
      local_88 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_1418be22f;
    }
    iVar1 = *(int *)(DAT_14cad00c8 + 0x38);
    if (((iVar1 <= *(int *)(lVar2 + 0x38)) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad00c8 + 0x30))
       && (lVar2 = *param_2, lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x38) < iVar1) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad00c8 + 0x30
           ) {
          lVar4 = lVar2;
        }
      }
      lVar2 = FUN_14081cebe();
      if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30 &&
          ((0 < *(int *)(param_1 + 0xd10) &&
           (lVar2 = *(longlong *)(**(longlong **)(param_1 + 0xd08) + 0x48), lVar2 != 0)))))) {
        lVar4 = *param_2;
        if ((lVar4 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar4);
LAB_1418be2cf:
          if (DAT_14cad00c8 == 0) {
            local_50 = &local_30;
            local_30 = FUN_144a7958c;
            local_40 = FUN_14081d0ea;
            local_48 = FUN_14081d0ea;
            local_58 = &LAB_1479b7a0c;
            local_60 = &LAB_1463b464e;
            local_68 = L"Engine";
            local_70 = 0;
            local_78 = 0x10000005;
            local_80 = 8;
            local_88 = 0x110;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            if (DAT_14cad00c8 == 0) goto LAB_1418be46f;
          }
          if (*(int *)(lVar4 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_1418be46f;
          lVar3 = 0;
          if (*(longlong *)
               (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
              DAT_14cad00c8 + 0x30) {
            lVar3 = lVar4;
          }
        }
        else {
          if (lVar4 != 0) goto LAB_1418be2cf;
LAB_1418be46f:
          lVar3 = 0;
        }
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
           (*(longlong *)(lVar2 + 0xa8) == param_1)) goto LAB_1418be25b;
      }
    }
  }
LAB_1418be22f:
  local_38 = *param_2;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar2 = FUN_1448d517c(param_1,&local_38);
LAB_1418be25b:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1418be494 FUN_1418be494 body=372 status=ok
// SIG undefined FUN_1418be494(void)

void FUN_1418be494(longlong param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  longlong lVar7;
  undefined1 auStack_68 [47];
  byte local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = *(char *)(param_1 + 0x60);
  if (cVar1 < '\0' != (bool)(char)param_2) {
    bVar2 = *(byte *)(param_1 + 0xd50);
    FUN_1406966b6(param_1,&DAT_14cac9d44,param_2);
    if ((*(byte *)(param_1 + 0xd50) & 0x10) == 0) {
      bVar6 = *(byte *)(param_1 + 0x60) >> 7;
    }
    else {
      bVar6 = 1;
    }
    if (((*(char *)(param_1 + 0xcf8) == '\x01') && ((*(byte *)(param_1 + 0xd50) & 0x18) == 8)) &&
       (-1 < *(char *)(param_1 + 0x60))) {
      FUN_148a1f5aa(param_1);
    }
    if ((byte)(cVar1 < '\0' | (bVar2 & 0x10) >> 4) != bVar6) {
      local_39 = bVar6;
      FUN_1447cd2ec(param_1 + 0xa50);
    }
    iVar3 = *(int *)(param_1 + 0xd10);
    if ((longlong)iVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0xd08);
      lVar7 = 0;
      do {
        uVar5 = *(undefined8 *)(lVar4 + lVar7);
        FUN_140cf5864(uVar5);
        FUN_140cf57c4(uVar5);
        FUN_1409d56ca(uVar5);
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar3 * 8 != lVar7);
    }
    iVar3 = *(int *)(param_1 + 0xd20);
    if ((longlong)iVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0xd18);
      lVar7 = 0;
      do {
        FUN_1409d56a8(*(undefined8 *)(lVar4 + lVar7));
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar3 * 8 != lVar7);
    }
    if ((*(char *)(param_1 + 0x60) < '\0') &&
       ((*(longlong *)(param_1 + 0xd60) == DAT_14cb94e30 ||
        ((*(byte *)(param_1 + 0xb90) & 0x30) != 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418be61e FUN_1418be61e body=209 status=ok
// SIG undefined FUN_1418be61e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1418be61e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb94ef8) {
    FUN_144b3d300(&DAT_14cb94ef8);
    if (DAT_14cb94ef8 == -1) {
      _DAT_14cb94e68 = 0;
      DAT_14cb94e70 = 0;
      _DAT_14cb94ec8 = 0;
      _DAT_14cb94ed0 = 0;
      _DAT_14cb94e78 = 0;
      uRam000000014cb94e80 = 0;
      _DAT_14cb94e88 = 0;
      uRam000000014cb94e90 = 0;
      _DAT_14cb94e98 = 0;
      uRam000000014cb94ea0 = 0;
      _DAT_14cb94ea8 = 0;
      uRam000000014cb94eb0 = 0;
      _DAT_14cb94ed4 = 0xffffffff00000080;
      _DAT_14cb94edc = 0;
      _DAT_14cb94ee8 = 0;
      _DAT_14cb94ef0 = 0;
      _DAT_14cb94e60 = &PTR_FUN_14b4a7930;
      atexit((_func_5014 *)&LAB_143eca43a);
      _Init_thread_footer(&DAT_14cb94ef8);
    }
  }
  return &DAT_14cb94e60;
}



// FUNCTION 1418be6f0 FUN_1418be6f0 body=426 status=ok
// SIG undefined FUN_1418be6f0(void)

void FUN_1418be6f0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((((*(char *)(param_1 + 0xb91) != '\0') && ((*(byte *)(param_1 + 0xb90) & 4) != 0)) &&
      (*(longlong *)(param_1 + 0xb38) != 0)) && (*(longlong **)(param_1 + 0xb40) != (longlong *)0x0)
     ) {
    (**(code **)(**(longlong **)(param_1 + 0xb40) + 0x38))();
  }
  *(undefined1 *)(param_1 + 0xb91) = 0;
  lVar2 = FUN_1401b4c98();
  lVar3 = *(longlong *)(param_1 + 0xb78);
  if (lVar3 != 0) {
    uVar7 = (uint)lVar3;
    if ((int)(uVar7 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
      lVar8 = lVar2 + 0x18;
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        lVar8 = *(longlong *)(lVar2 + 0x28);
      }
      if ((*(uint *)(lVar8 + (ulonglong)((uVar7 & 0xffffff) >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0)
      {
        lVar2 = *(longlong *)(lVar2 + 8);
        lVar8 = (ulonglong)(uVar7 & 0xffffff) * 0x70;
        if (((lVar2 + lVar8 != 0) && (*(longlong *)(lVar2 + 0x60 + lVar8) == lVar3)) &&
           (*(char *)(lVar2 + 1 + lVar8) != '\x04')) {
          FUN_1405a424c();
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0xb78) = 0;
  *(undefined1 *)(param_1 + 0xd45) = 0;
  if ((*(char *)(param_1 + 0x178) == '\x03') && (*(char *)(param_1 + 0xd35) != '\x01')) {
    *(undefined1 *)(param_1 + 0xd35) = 0;
    uVar1 = *(ulonglong *)(param_1 + 0x28);
    if (uVar1 < 0xffffffff00000000) {
      plVar6 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar6 = (longlong *)0x0;
      }
      (**(code **)(*plVar6 + 0x58))(plVar6,param_1,uVar1,0x18);
    }
    else {
      uVar7 = (uint)uVar1;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
        puVar4 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar4 = DAT_14c998080;
        }
        if ((*(uint *)(puVar4 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
          lVar3 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
          puVar5 = *(uint **)(lVar3 + 0x18);
          if (*(uint **)(lVar3 + 0x18) == (uint *)0x0) {
            puVar5 = (uint *)(lVar3 + 8);
          }
          *puVar5 = *puVar5 | 0x1000000;
          *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
        }
      }
    }
  }
  *(byte *)(param_1 + 0xb90) = *(byte *)(param_1 + 0xb90) & 0xf9;
  return;
}



// FUNCTION 1418be89a FUN_1418be89a body=81 status=ok
// SIG undefined FUN_1418be89a(void)

void FUN_1418be89a(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *(undefined1 *)(param_1 + 0xba8) = 0;
  if (*(longlong *)(param_1 + 0xba0) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0xba0);
    uVar2 = FUN_1401b4c98();
    lVar3 = FUN_144a61814(uVar2,puVar1);
    if (lVar3 != 0) {
      FUN_1405a424c(uVar2,*puVar1);
    }
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 1418be8fa FUN_1418be8fa body=35 status=ok
// SIG undefined FUN_1418be8fa(void)

void FUN_1418be8fa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  *(float *)(param_1 + 0xc18) = (float)*(double *)(lVar1 + 0x6d0);
  return;
}



// FUNCTION 1418be91e FUN_1418be91e body=480 status=ok
// SIG undefined FUN_1418be91e(void)

void FUN_1418be91e(longlong *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  longlong *local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x19a) = 0;
  if (param_1[0x19b] != 0) {
    plVar4 = param_1 + 0x19b;
    lVar5 = FUN_1447210f0(param_1);
    if (*(longlong *)(lVar5 + 0x1f0) == 0) {
      puVar6 = (undefined8 *)(lVar5 + 0x458);
    }
    else {
      puVar6 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar6;
    lVar5 = FUN_144a61814(uVar2,plVar4);
    if (lVar5 != 0) {
      FUN_1405a424c(uVar2,*plVar4);
    }
    *plVar4 = 0;
  }
  bVar1 = *(byte *)(param_1 + 0x17b);
  if ((int)(uint)bVar1 < (int)param_1[0x17e]) {
    if (*(longlong *)(param_1[0x17d] + 0x20 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8) != 0)
    {
      plVar4 = (longlong *)FUN_1401654a2(param_1);
      if (plVar4 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar4 + 0x40))(plVar4);
        if (cVar3 == '\0') {
          (**(code **)(*plVar4 + 0x80))(plVar4,0,0);
        }
      }
      local_30 = *(byte *)(param_1 + 0x1aa) >> 1 & 1;
      local_38 = param_1;
      FUN_1447cd2ec(param_1 + 0x144);
      if ((param_1[0x163] != 0) && ((longlong *)param_1[0x164] != (longlong *)0x0)) {
        lVar5 = (**(code **)(*(longlong *)param_1[0x164] + 0x18))();
        uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),(char)param_1[0x1aa]) &
                0xffffffffffffff02;
        local_30 = (byte)uVar7 >> 1;
        uVar7 = CONCAT71((int7)(uVar7 >> 8),local_30);
        local_38 = param_1;
        FUN_1447cd2ec(lVar5 + 8);
        FUN_140b969f2(lVar5 + 0x18,param_1,uVar7 & 0xffffffff);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    plVar4 = *(longlong **)(param_1[0x17d] + 0x10 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
    if (plVar4 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar4 + 0x2f8))();
      if (cVar3 != '\0') {
        (**(code **)(*param_1 + 0x808))(param_1,0xffffffff,0,0);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1408bd412(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58,&DAT_14cb95128);
}



// FUNCTION 1418beb12 FUN_1418beb12 body=120 status=ok
// SIG undefined FUN_1418beb12(void)

void FUN_1418beb12(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0xcd8) != 0) {
    lVar3 = FUN_1447210f0();
    if (lVar3 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0xcd8);
      lVar3 = FUN_1447210f0(param_1);
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar4 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar4;
      lVar3 = FUN_144a61814(uVar2,puVar1);
      if (lVar3 != 0) {
        FUN_1405a424c(uVar2,*puVar1);
      }
      *puVar1 = 0;
    }
  }
  return;
}



// FUNCTION 1418beb8a FUN_1418beb8a body=762 status=ok
// SIG undefined FUN_1418beb8a(void)

longlong * FUN_1418beb8a(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ushort uVar4;
  undefined8 ***pppuVar5;
  code *pcVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  FUN_140082e80(param_4,&local_60);
  if (local_60 != 0) {
    FUN_140ccc900(local_60,local_50,param_3,*(undefined1 *)(param_1 + 8));
    if (DAT_14c9a85d0 != (code *)0x0) {
      (*DAT_14c9a85d0)(param_2);
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
    }
    *(ushort *)(param_2 + 3) = local_38;
    if (local_38 < 0x19) {
      uVar2 = (ulonglong)((uint)local_30 * 0x120);
      pcVar6 = *(code **)((longlong)&DAT_14c9a85b8 + uVar2);
      if ((pcVar6 == (code *)0x0) &&
         (pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + uVar2), pcVar6 == (code *)0x0)) {
        memcpy(param_2,local_50,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar2));
      }
      else {
        (*pcVar6)(param_2,local_50);
      }
    }
    else {
      *param_2 = (longlong)local_50[0];
      local_50[0] = (undefined8 ***)0x0;
      local_38 = 0;
    }
    *(byte *)(param_2 + 4) = local_30;
    local_30 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      pppuVar5 = local_50;
      if (0x18 < local_38) {
        pppuVar5 = (undefined8 ***)local_50[0];
      }
      (*DAT_14c9a85d0)(pppuVar5);
    }
    if (0x18 < local_38) {
      FUN_1400020a8(local_50[0]);
    }
    if (((char)param_2[4] == '\0') && (*(int *)(param_1 + 8) == 0)) {
      FUN_140d4c8ba(local_60,local_50,param_3);
      uVar4 = *(ushort *)(param_2 + 3);
      if (DAT_14c9a85d0 != (code *)0x0) {
        plVar3 = param_2;
        if (0x18 < uVar4) {
          plVar3 = (longlong *)*param_2;
        }
        (*DAT_14c9a85d0)(plVar3);
        uVar4 = *(ushort *)(param_2 + 3);
      }
      if (0x18 < uVar4) {
        FUN_1400020a8(*param_2);
      }
      *(ushort *)(param_2 + 3) = local_38;
      if (local_38 < 0x19) {
        uVar2 = (ulonglong)((uint)local_30 * 0x120);
        pcVar6 = *(code **)((longlong)&DAT_14c9a85b8 + uVar2);
        if ((pcVar6 == (code *)0x0) &&
           (pcVar6 = *(code **)((longlong)&DAT_14c9a85b0 + uVar2), pcVar6 == (code *)0x0)) {
          memcpy(param_2,local_50,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar2));
        }
        else {
          (*pcVar6)(param_2,local_50);
        }
      }
      else {
        *param_2 = (longlong)local_50[0];
        local_50[0] = (undefined8 ***)0x0;
        local_38 = 0;
      }
      *(byte *)(param_2 + 4) = local_30;
      local_30 = 0;
      if (DAT_14c9a85d0 != (code *)0x0) {
        pppuVar5 = local_50;
        if (0x18 < local_38) {
          pppuVar5 = (undefined8 ***)local_50[0];
        }
        (*DAT_14c9a85d0)(pppuVar5);
      }
      if (0x18 < local_38) {
        FUN_1400020a8(local_50[0]);
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418bee86 FUN_1418bee86 body=703 status=ok
// SIG undefined FUN_1418bee86(void)

void FUN_1418bee86(longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  code ***pppcVar7;
  undefined4 uVar8;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  undefined1 *local_d8;
  code *local_d0;
  code **local_c8 [3];
  ushort local_b0;
  byte local_a8;
  char local_a0 [16];
  longlong *local_90;
  undefined4 local_78 [2];
  char local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_140e46776(param_1,param_1 + 0x108,param_2);
  local_a0[0] = '\0';
  local_78[0] = 0;
  FUN_1456bb102(local_a0,param_2);
  local_70 = '\0';
  local_48[0] = 0;
  if (param_2 != 0) {
    cVar2 = *(char *)(param_2 + 0x178);
    if (DAT_14cb939a8 == 0) {
      local_e0 = (code **)local_c8;
      local_c8[0] = (code **)FUN_140940982;
      local_d0 = FUN_14081d0ea;
      local_d8 = &LAB_146522c26;
      local_e8 = &LAB_148a0db91;
      local_f0 = &LAB_146572ba7;
      local_f8 = L"Engine";
      local_100 = 0;
      local_108 = 0x10000004;
      local_110 = 8;
      local_118 = 0xdd8;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
    }
    if ((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) {
      uVar3 = *(undefined4 *)(param_2 + 0x8f8);
      if ((longlong)*(int *)(param_1 + 0x298) != 0) {
        puVar5 = *(undefined8 **)(param_1 + 0x290);
        lVar6 = (longlong)*(int *)(param_1 + 0x298) << 5;
        do {
          *(undefined4 *)(param_2 + 0x8f8) = *(undefined4 *)(puVar5 + 3);
          if ((*(char *)((longlong)puVar5 + 0x15) == '\x01') ||
             ((*(char *)((longlong)puVar5 + 0x15) == '\x02' && (cVar2 == '\x03')))) {
            uVar8 = FUN_143daac96(puVar5);
            local_b0 = 4;
            local_c8[0] = (code **)CONCAT44(local_c8[0]._4_4_,uVar8);
            local_a8 = 3;
            FUN_140e4698e(*puVar5,local_a0,local_c8);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
            if (pcVar4 != (code *)0x0) {
              pppcVar7 = local_c8;
              if (0x18 < local_b0) {
                pppcVar7 = (code ***)local_c8[0];
              }
              (*pcVar4)(pppcVar7);
            }
            if (0x18 < local_b0) {
              FUN_1400020a8(local_c8[0]);
            }
          }
          puVar5 = puVar5 + 4;
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0);
      }
      *(undefined4 *)(param_2 + 0x8f8) = uVar3;
    }
  }
  FUN_1448173f8(local_48);
  if (local_70 != '\0') {
    if (local_70 == '\x01') {
      local_68 = 0;
    }
    else if ((local_70 == '\x03') && (local_60 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))();
      }
    }
    local_70 = '\0';
  }
  FUN_1448173f8(local_78);
  if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418bf146 FUN_1418bf146 body=499 status=ok
// SIG undefined FUN_1418bf146(void)

void FUN_1418bf146(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 2;
  *(undefined8 *)(param_1 + 0x90) = 0;
  if ((*(longlong *)(param_2 + 0x28) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0xe0), plVar1 != (longlong *)0x0)) {
    if (DAT_14cb6fd70 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_1487a9cc9;
      local_50 = FUN_1465433f8;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
    }
    lVar2 = (**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb6fd70);
    if (lVar2 != 0) {
      if (DAT_14cb6fd70 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_1487a9cc9;
        local_50 = FUN_1465433f8;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
      }
      lVar3 = FUN_144718840(lVar2,DAT_14cb6fd70);
      if ((lVar2 != lVar3) && (lVar3 != 0)) {
        uVar4 = FUN_14023bf44(lVar3);
        *(undefined4 *)(param_1 + 0x90) = uVar4;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418bf33a FUN_1418bf33a body=126 status=ok
// SIG undefined FUN_1418bf33a(void)

undefined8 * FUN_1418bf33a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418bf3b8 FUN_1418bf3b8 body=68 status=ok
// SIG undefined FUN_1418bf3b8(void)

undefined8 * FUN_1418bf3b8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ab860;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418bf3fc FUN_1418bf3fc body=101 status=ok
// SIG undefined FUN_1418bf3fc(void)

void FUN_1418bf3fc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ab980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418bf462 FUN_1418bf462 body=101 status=ok
// SIG undefined FUN_1418bf462(void)

void FUN_1418bf462(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4aba60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418bf4c8 FUN_1418bf4c8 body=29 status=ok
// SIG undefined FUN_1418bf4c8(void)

undefined8 FUN_1418bf4c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418bf4e6 FUN_1418bf4e6 body=373 status=ok
// SIG undefined FUN_1418bf4e6(void)

void FUN_1418bf4e6(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418bf56f;
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
LAB_1418bf56f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 1418bf65c FUN_1418bf65c body=29 status=ok
// SIG undefined FUN_1418bf65c(void)

undefined8 FUN_1418bf65c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418bf67a FUN_1418bf67a body=171 status=ok
// SIG undefined FUN_1418bf67a(void)

undefined4 FUN_1418bf67a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_1 + 0x88);
  plVar4 = (longlong *)FUN_1401e3228();
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
    uVar3 = 0;
  }
  else {
    (**(code **)(*plVar4 + 0x68))(plVar4,&local_38);
    uVar3 = 0;
    if (local_38 != (longlong *)0x0) {
      uVar3 = (**(code **)(*local_38 + 0xd0))();
    }
  }
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418bf726 FUN_1418bf726 body=40 status=ok
// SIG undefined FUN_1418bf726(void)

undefined8 FUN_1418bf726(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_140a68038(1);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418bf740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x218))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1418bf74e FUN_1418bf74e body=83 status=ok
// SIG undefined FUN_1418bf74e(void)

undefined8 * FUN_1418bf74e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1418bf7a2 FUN_1418bf7a2 body=29 status=ok
// SIG undefined FUN_1418bf7a2(void)

undefined8 FUN_1418bf7a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418bf7c0 FUN_1418bf7c0 body=63 status=ok
// SIG undefined FUN_1418bf7c0(void)

void FUN_1418bf7c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1418bf800 FUN_1418bf800 body=196 status=ok
// SIG undefined FUN_1418bf800(void)

void FUN_1418bf800(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  dataBuilder *pdVar1;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [16];
  longlong local_58;
  int local_50;
  undefined1 local_48 [16];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1401e7e86(local_48);
  FUN_1401e7e86(local_68,param_3);
  pdVar1 = (dataBuilder *)*param_1;
  FUN_14482e566(local_68);
  local_70 = local_50 + local_58;
  local_78 = local_58;
  FUN_14482e566(local_48);
  local_80 = local_30 + local_38;
  local_88 = local_38;
  bifrost::telemetry::activity::dataBuilder::add(pdVar1,&local_88,&local_78);
  FUN_1401e7e48(local_68);
  FUN_1401e7e48(local_48);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418bf8c5 FUN_1418bf8c5 body=248 status=ok
// SIG undefined FUN_1418bf8c5(void)

void FUN_1418bf8c5(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 *local_78;
  undefined1 local_70 [16];
  longlong local_60;
  int local_58;
  undefined1 local_50 [16];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1401e7e86(local_50);
  FUN_1401e7e86(local_70,param_3);
  local_90 = *param_4;
  local_78 = &local_90;
  local_88 = param_4[1];
  local_80 = FUN_143effb12;
  FUN_14482e566(local_70);
  local_98 = local_58 + local_60;
  local_a0 = local_60;
  FUN_14482e566(local_50);
  local_a8 = local_38 + local_40;
  local_b0 = local_40;
  bifrost::telemetry::addTableRow(*(undefined8 *)(param_1 + 0x2b8),&local_b0,&local_a0,&local_80);
  FUN_1401e7e48(local_70);
  FUN_1401e7e48(local_50);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418bf9be FUN_1418bf9be body=41 status=ok
// SIG undefined FUN_1418bf9be(void)

void FUN_1418bf9be(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_141175be2(param_1);
    param_1 = param_1 + 0x138;
  }
  return;
}



// FUNCTION 1418bf9e8 FUN_1418bf9e8 body=305 status=ok
// SIG undefined FUN_1418bf9e8(void)

void FUN_1418bf9e8(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1418bfa82;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_1418bfa5b:
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
      goto LAB_1418bfa5b;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1418bfa82;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1418bfa82:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418bfb1a FUN_1418bfb1a body=233 status=ok
// SIG undefined FUN_1418bfb1a(void)

void FUN_1418bfb1a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x30);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x30,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1418bfc03 FUN_1418bfc03 body=185 status=ok
// SIG undefined FUN_1418bfc03(void)

void FUN_1418bfc03(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = 0;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar8);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(param_1 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      *(undefined8 *)(param_1 + 0x10 + lVar8) = 0;
      iVar3 = *(int *)(param_2 + 0x18 + lVar8);
      _Src = *(void **)(param_2 + 0x10 + lVar8);
      *(int *)(param_1 + 0x18 + lVar8) = iVar3;
      if ((longlong)iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x1c + lVar8) = 0;
      }
      else {
        FUN_1446dd670(param_1 + 0x10 + lVar8,iVar3,0);
        memcpy(*(void **)(param_1 + 0x10 + lVar8),_Src,(longlong)iVar3 * 2);
      }
      plVar4 = *(longlong **)(param_2 + lVar8 + 0x20);
      *(longlong **)(param_1 + 0x20 + lVar8) = plVar4;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      *(undefined4 *)(param_1 + 0x28 + lVar8) = *(undefined4 *)(param_2 + lVar8 + 0x28);
      lVar8 = lVar8 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1418bfcbc FUN_1418bfcbc body=375 status=ok
// SIG undefined FUN_1418bfcbc(void)

undefined8 * FUN_1418bfcbc(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1418bfe34 FUN_1418bfe34 body=766 status=ok
// SIG undefined FUN_1418bfe34(void)

undefined8
FUN_1418bfe34(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 != (longlong *)0x0) {
    uVar4 = (**(code **)(*param_1 + 0x180))();
    lVar5 = FUN_140b70372(uVar4);
    uVar4 = 0;
    if ((lVar5 == 0) || (*param_2 == 0)) goto LAB_1418bff84;
    if (param_2[2] != 0) {
      cVar3 = FUN_140b70752(lVar5,(int)param_1[0x1c]);
      if (cVar3 != '\0') {
        lVar5 = *param_2;
        uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
        local_90 = param_5;
        local_98 = (longlong *)param_4;
        FUN_140b6db2a(uVar4,lVar5,0,param_3);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
      }
    }
    FUN_1446f470e(&local_60,L"SHIFT",1);
    (**(code **)(*param_1 + 0x180))(param_1);
    local_70 = local_60;
    plVar6 = (longlong *)FUN_1401e3228();
    if (plVar6 == (longlong *)0x0) {
      local_58 = (longlong *)0x0;
      plStack_50 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar6 + 0x28))(plVar6,&local_58);
      plVar6 = local_58;
      if (local_58 != (longlong *)0x0) {
        FUN_140056680(&local_80,L"default");
        local_98 = &local_80;
        (**(code **)(*plVar6 + 0x1d0))(plVar6,&local_70,(int)param_1[0x1c],*param_2);
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        plVar6 = local_68;
        if (local_70 != 0) {
          local_80 = local_70;
          local_78 = local_68;
          if (local_68 == (longlong *)0x0) {
            local_98 = param_5;
            FUN_140b6ca98(param_1,&local_80,param_3,param_4);
          }
          else {
            LOCK();
            *(int *)(local_68 + 1) = (int)local_68[1] + 1;
            UNLOCK();
            local_98 = param_5;
            FUN_140b6ca98(param_1,&local_80,param_3,param_4);
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
          }
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_68 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar2 = (int *)((longlong)local_68 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_68 + 0x10))(local_68);
              }
            }
          }
          plVar6 = plStack_50;
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_50)(plStack_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          uVar4 = 1;
          goto LAB_1418bff84;
        }
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_68 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)local_68 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_68 + 0x10))(local_68);
            }
          }
        }
      }
    }
    plVar6 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_50)(plStack_50);
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
  uVar4 = 0;
LAB_1418bff84:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c0138 FUN_1418c0138 body=815 status=ok
// SIG undefined FUN_1418c0138(void)

/* WARNING: Removing unreachable block (ram,0x0001418c0390) */
/* WARNING: Removing unreachable block (ram,0x0001418c039b) */
/* WARNING: Removing unreachable block (ram,0x0001418c03af) */

void FUN_1418c0138(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int *piVar3;
  longlong *plVar4;
  undefined **ppuVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined **local_b8;
  undefined **ppuStack_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined **local_80;
  undefined **local_78;
  undefined **local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  ppuVar5 = local_90;
  if ((param_4 & 0x20) != 0) {
    local_78 = (undefined **)(param_1 + 0x18);
    local_80 = (undefined **)&DAT_100000000;
    local_70 = (undefined **)&DAT_ffffffff;
    local_68 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_1449c0562(&local_80);
    }
    local_a0 = local_80;
    local_98 = local_78;
    local_90 = local_70;
    ppuVar5 = local_90;
    local_88 = local_68;
    local_84 = local_64;
    local_90._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_a8 = (longlong *)(param_1 + 8);
    if (local_90._4_4_ < *(int *)(local_78 + 3)) {
      iVar7 = local_90._4_4_;
      local_90 = ppuVar5;
      do {
        if (param_2 != 0) {
          FUN_1413d9c32(param_2,&local_80,param_3,(longlong)iVar7 * 0x20 + *local_a8);
          local_b8 = (undefined **)0x0;
          ppuStack_b0 = (undefined **)0x0;
          if ((&DAT_149fc1b6e)[(byte)local_68] == '\x01') {
            local_b8 = local_78;
            if (local_70 == (undefined **)0x0) {
              ppuStack_b0 = (undefined **)0x0;
            }
            else {
              LOCK();
              *(int *)(local_70 + 1) = *(int *)(local_70 + 1) + 1;
              UNLOCK();
              ppuStack_b0 = local_70;
            }
          }
          local_80 = &PTR_FUN_14a184370;
          (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[(byte)local_68])(&local_78);
          ppuVar5 = ppuStack_b0;
          if (local_b8 != (undefined **)0x0) {
            lVar8 = *local_a8 + (longlong)local_90._4_4_ * 0x20 + 8;
            local_80 = local_b8;
            local_78 = ppuStack_b0;
            if (ppuStack_b0 == (undefined **)0x0) {
              cVar6 = FUN_1414bd16c(lVar8,&local_80);
            }
            else {
              LOCK();
              *(int *)(ppuStack_b0 + 1) = *(int *)(ppuStack_b0 + 1) + 1;
              UNLOCK();
              cVar6 = FUN_1414bd16c(lVar8,&local_80);
              if (ppuVar5 != (undefined **)0x0) {
                LOCK();
                ppuVar1 = ppuVar5 + 1;
                *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
                UNLOCK();
                if (*(int *)ppuVar1 == 0) {
                  (**(code **)*ppuVar5)(ppuVar5);
                  LOCK();
                  piVar3 = (int *)((longlong)ppuVar5 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
                  }
                }
              }
            }
            if (cVar6 != '\0') {
              if ((*(int *)(param_1 + 0x60) != 0) &&
                 (plVar4 = *(longlong **)(param_1 + 0x58), plVar4 != (longlong *)0x0)) {
                (**(code **)(*plVar4 + 0x60))(plVar4,&local_b8);
              }
              ppuVar1 = ppuStack_b0;
              ppuVar5 = local_90;
              if (ppuStack_b0 != (undefined **)0x0) {
                LOCK();
                ppuVar2 = ppuStack_b0 + 1;
                *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
                UNLOCK();
                if (*(int *)ppuVar2 == 0) {
                  (**(code **)*ppuStack_b0)(ppuStack_b0);
                  LOCK();
                  piVar3 = (int *)((longlong)ppuVar1 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  ppuVar5 = local_90;
                  if (*piVar3 == 0) {
                    (**(code **)(*ppuVar1 + 0x10))(ppuVar1);
                    ppuVar5 = local_90;
                  }
                }
              }
              break;
            }
          }
          ppuVar5 = ppuStack_b0;
          if (ppuStack_b0 != (undefined **)0x0) {
            LOCK();
            ppuVar1 = ppuStack_b0 + 1;
            *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
            UNLOCK();
            if (*(int *)ppuVar1 == 0) {
              (**(code **)*ppuStack_b0)(ppuStack_b0);
              LOCK();
              piVar3 = (int *)((longlong)ppuVar5 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
              }
            }
          }
        }
        local_90 = (undefined **)CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
        FUN_1449c0562(&local_a0);
        iVar7 = local_90._4_4_;
        ppuVar5 = local_90;
      } while (local_90._4_4_ < *(int *)(local_98 + 3));
    }
  }
  local_90 = ppuVar5;
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c0468 FUN_1418c0468 body=843 status=ok
// SIG undefined FUN_1418c0468(void)

undefined8 FUN_1418c0468(longlong *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_4c8 [36];
  int local_4a4;
  undefined8 local_4a0;
  longlong *local_498;
  ulonglong local_490;
  ulonglong local_488;
  longlong *local_480;
  undefined8 local_478;
  int local_470;
  undefined2 *local_468;
  undefined2 *local_460;
  ulonglong *local_458;
  char local_450;
  undefined2 local_448 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  local_468 = local_448;
  local_450 = '\0';
  local_458 = &local_48;
  local_480 = param_1 + 2;
  local_488 = 0x100000000;
  local_478 = 0xffffffff;
  local_470 = 0;
  local_4a0 = param_2;
  local_460 = local_468;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_478._0_4_ = 0xffffffff;
    local_478._4_4_ = 0;
    uVar18 = 0;
  }
  else {
    FUN_1449c0562();
    uVar18 = local_488 & 0xffffffff;
    uVar15 = local_488 >> 0x20;
  }
  if (local_478._4_4_ < (int)local_480[3]) {
    bVar7 = false;
    uVar14 = (uint)local_478;
    iVar16 = local_478._4_4_;
    iVar11 = local_470;
    local_498 = local_480;
    do {
      local_4a4 = iVar11;
      local_490 = uVar18;
      if (bVar7) {
        if (local_458 <= local_460 + 1) {
          FUN_140213274(&local_468,1);
        }
        *local_460 = 0x2c;
        local_460 = local_460 + 1;
      }
      lVar12 = (longlong)iVar16;
      uVar8 = *(uint *)(*param_1 + 8 + lVar12 * 0x28);
      iVar11 = uVar8 - 1;
      if (uVar8 == 0) {
        iVar11 = 0;
      }
      pvVar4 = *(void **)(*param_1 + lVar12 * 0x28);
      lVar17 = (longlong)iVar11;
      if (local_458 <= local_460 + lVar17) {
        FUN_140213274(&local_468,lVar17);
      }
      puVar1 = local_460;
      if (1 < uVar8) {
        memcpy(local_460,pvVar4,lVar17 * 2);
        local_460 = puVar1 + lVar17;
      }
      if (local_458 <= local_460 + 1) {
        FUN_140213274(&local_468,1);
      }
      *local_460 = 0x3a;
      puVar1 = local_460 + 1;
      pvVar4 = *(void **)(*param_1 + 0x10 + lVar12 * 0x28);
      uVar8 = *(uint *)(*param_1 + 0x18 + lVar12 * 0x28);
      iVar11 = uVar8 - 1;
      if (uVar8 == 0) {
        iVar11 = 0;
      }
      lVar12 = (longlong)iVar11;
      puVar6 = (ulonglong *)(local_460 + lVar12 + 1);
      local_460 = puVar1;
      if (local_458 <= puVar6) {
        FUN_140213274(&local_468,lVar12);
      }
      puVar1 = local_460;
      if (1 < uVar8) {
        memcpy(local_460,pvVar4,lVar12 * 2);
        local_460 = puVar1 + lVar12;
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar13 = (longlong *)local_498[2];
      if ((longlong *)local_498[2] == (longlong *)0x0) {
        plVar13 = local_498;
      }
      iVar3 = (int)local_498[3];
      iVar16 = (int)local_490;
      lVar12 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar13 + lVar12 * 4) & uVar14;
      uVar18 = local_490;
      iVar11 = local_4a4;
      if (uVar8 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar16) {
          iVar10 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar17 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar8 = *(uint *)((longlong)plVar13 + lVar17 * 4 + lVar12 * 4 + 4);
          if (uVar8 != 0) break;
          lVar17 = lVar17 + 1;
          if (iVar10 - lVar12 == lVar17) goto LAB_1418c073c;
        }
        uVar14 = 0xffffffff;
        uVar18 = (ulonglong)(iVar16 + (int)lVar17 + 1);
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar2 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar16 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      bVar7 = true;
    } while (iVar16 < iVar3);
  }
LAB_1418c073c:
  uVar5 = local_4a0;
  *local_460 = 0;
  FUN_140056680(local_4a0,local_468);
  if (local_450 == '\x01') {
    FUN_1400020a8(local_468);
  }
  if ((local_48 ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c07b4 FUN_1418c07b4 body=358 status=ok
// SIG undefined FUN_1418c07b4(void)

void FUN_1418c07b4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  longlong local_a8 [5];
  ulonglong uStack_80;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8[4] = 0;
  uStack_80 = 0;
  FUN_1403de9f2(param_2,local_a8 + 4,&DAT_149e06196,1);
  if ((longlong)(int)uStack_80 == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = (longlong)(int)uStack_80 << 4;
    lVar4 = local_a8[4];
    do {
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_a8[0] = 0;
      local_a8[1] = 0;
      FUN_140056680(&local_78,&DAT_149e31048);
      local_b0 = 0;
      local_b8 = 1;
      cVar1 = FUN_1407cdbc6(lVar4,&local_78,local_a8 + 2,local_a8);
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (cVar1 != '\0') {
        local_78 = local_a8 + 2;
        local_70 = local_a8;
        FUN_1411f1c38(param_1,local_64,&local_78,0);
      }
      if (local_a8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_a8[2] != 0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
    uVar2 = uStack_80 & 0xffffffff;
  }
  FUN_1447a1747(local_a8[4],uVar2);
  if (local_a8[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c091c FUN_1418c091c body=254 status=ok
// SIG undefined FUN_1418c091c(void)

longlong FUN_1418c091c(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  *(undefined1 *)(param_2 + 0x168) = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 == 0) {
    return param_2;
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  iVar2 = (int)param_3[1];
  lVar4 = lVar3;
LAB_1418c095e:
  if (*(int *)(lVar4 + 0x40) == iVar2) {
    if (1 < iVar2) {
      lVar9 = 0;
      do {
        uVar5 = *(ushort *)(*(longlong *)(lVar4 + 0x38) + lVar9);
        uVar6 = (ulonglong)uVar5;
        uVar7 = *(ushort *)(*param_3 + lVar9);
        if (uVar5 == uVar7) {
          if (uVar5 == 0) break;
        }
        else {
          if (0x7f < (uVar7 | uVar5)) goto LAB_1418c09aa;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar10 = (ulonglong)uVar7;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar10]) goto LAB_1418c09aa;
        }
        lVar9 = lVar9 + 2;
      } while( true );
    }
    goto LAB_1418c09c6;
  }
  if (*(int *)(lVar4 + 0x40) + iVar2 == 1) goto LAB_1418c09c6;
  goto LAB_1418c09b0;
LAB_1418c09aa:
  if (uVar5 == uVar7) {
LAB_1418c09c6:
    uVar8 = (int)(lVar4 - lVar3 >> 3) * -0x5b05b05b;
    if ((int)uVar8 < 0) {
      return param_2;
    }
    if (iVar1 <= (int)uVar8) {
      return param_2;
    }
    if (lVar3 + (ulonglong)(uVar8 & 0x7fffffff) * 0x168 == param_2) {
      return param_2;
    }
    FUN_1411769de(param_2);
    *(undefined1 *)(param_2 + 0x168) = 1;
    return param_2;
  }
LAB_1418c09b0:
  lVar4 = lVar4 + 0x168;
  if (lVar4 == (longlong)iVar1 * 0x168 + lVar3) {
    return param_2;
  }
  goto LAB_1418c095e;
}



// FUNCTION 1418c0a1a FUN_1418c0a1a body=437 status=ok
// SIG undefined FUN_1418c0a1a(void)

undefined8 FUN_1418c0a1a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 auStack_88 [32];
  longlong *local_68;
  int local_60;
  uint local_5c;
  uint *local_58;
  uint local_50;
  int local_4c;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = (longlong *)(param_1 + 0x48);
  local_58 = (uint *)(param_1 + 0x58);
  iVar1 = *(int *)(param_1 + 0x70);
  local_5c = 1;
  if (iVar1 == 0) {
    local_48 = 0;
    local_60 = 0;
    local_4c = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
      puVar7 = local_58;
    }
    uVar8 = *puVar7;
    if (uVar8 == 0) {
      iVar6 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar6 = iVar1 + -1;
      }
      uVar10 = 0;
      uVar9 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar9 = uVar10;
      }
      local_60 = (int)uVar9 + 1;
      local_48 = (int)uVar9 * 0x20 + 0x20;
      iVar6 = 0;
      do {
        local_4c = iVar1;
        if (uVar9 == uVar10) goto LAB_1418c0ae5;
        iVar6 = iVar6 + 0x20;
        uVar8 = puVar7[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar8 == 0);
      local_60 = (int)uVar10;
      local_48 = iVar6;
    }
    else {
      local_48 = 0;
      local_60 = 0;
    }
    local_5c = -uVar8 & uVar8;
    uVar9 = (ulonglong)local_5c * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_4c = (local_48 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar1 <= local_4c) {
      local_4c = iVar1;
    }
  }
LAB_1418c0ae5:
  local_50 = 0xffffffff;
  if (local_4c < iVar1) {
    do {
      if (*(int *)(*local_68 + 0x10 + (longlong)local_4c * 0x20) != 0) {
        lVar3 = *local_68 + (longlong)local_4c * 0x20;
        plVar11 = (longlong *)(lVar3 + 8);
        plVar2 = (longlong *)*plVar11;
        if ((plVar2 != (longlong *)0x0) && (cVar4 = (**(code **)(*plVar2 + 0x30))(), cVar4 != '\0'))
        {
          if (*(int *)(lVar3 + 0x10) == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = (longlong *)*plVar11;
          }
          cVar4 = (**(code **)(*plVar11 + 0x58))(plVar11,param_2,param_3,param_4);
          uVar5 = 1;
          if (cVar4 != '\0') goto LAB_1418c0b88;
        }
      }
      local_50 = local_50 & ~local_5c;
      FUN_1449c0562(&local_60);
    } while (local_4c < (int)local_58[6]);
  }
  uVar5 = 0;
LAB_1418c0b88:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1418c0bd0 FUN_1418c0bd0 body=93 status=ok
// SIG undefined FUN_1418c0bd0(void)

void FUN_1418c0bd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4f0020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1418c0c2e FUN_1418c0c2e body=68 status=ok
// SIG undefined FUN_1418c0c2e(void)

undefined8 * FUN_1418c0c2e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4f2060;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c0c72 FUN_1418c0c72 body=118 status=ok
// SIG undefined FUN_1418c0c72(void)

void FUN_1418c0c72(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f20d0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b4f2060;
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



// FUNCTION 1418c0cf6 FUN_1418c0cf6 body=249 status=ok
// SIG undefined FUN_1418c0cf6(void)

undefined4 * FUN_1418c0cf6(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  pvVar2 = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  pvVar2 = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  pvVar2 = *(void **)(param_2 + 10);
  param_1[0xc] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy(*(void **)(param_1 + 10),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  return param_1;
}



// FUNCTION 1418c0def FUN_1418c0def body=35 status=ok
// SIG undefined FUN_1418c0def(void)

void FUN_1418c0def(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140312256(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b507700;
  return;
}



// FUNCTION 1418c0e12 FUN_1418c0e12 body=40 status=ok
// SIG undefined FUN_1418c0e12(void)

undefined8 FUN_1418c0e12(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c0e4c FUN_1418c0e4c body=93 status=ok
// SIG undefined FUN_1418c0e4c(void)

void FUN_1418c0e4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b50a110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1418c0eaa FUN_1418c0eaa body=180 status=ok
// SIG undefined FUN_1418c0eaa(void)

void FUN_1418c0eaa(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  
  FUN_144842962();
  lVar1 = *(longlong *)(param_1 + 0x678);
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x40) != 0)) {
    lVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x38) + lVar4) == *(longlong *)(param_1 + 0x680)) {
        uVar3 = (int)(lVar4 >> 2) * -0x49249249;
        *(uint *)(param_1 + 0x68c) = uVar3;
        if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(lVar1 + 0x40))) {
          puVar2 = (undefined4 *)
                   (*(longlong *)(lVar1 + 0x38) + (ulonglong)(uVar3 & 0x7fffffff) * 0x1c + 8);
          goto LAB_1418c0f32;
        }
        break;
      }
      lVar4 = lVar4 + 0x1c;
    } while ((longlong)*(int *)(lVar1 + 0x40) * 0x1c != lVar4);
  }
  *(undefined8 *)(param_1 + 0x680) = 0;
  *(undefined4 *)(param_1 + 0x68c) = 0xffffffff;
  puVar2 = &DAT_149e1e2f4;
LAB_1418c0f32:
  *(undefined4 *)(param_1 + 0x690) = *puVar2;
  return;
}



// FUNCTION 1418c0f5e FUN_1418c0f5e body=80 status=ok
// SIG undefined FUN_1418c0f5e(void)

void FUN_1418c0f5e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1401c3c2c();
  uVar1 = *(undefined8 *)(param_1 + 0x678);
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    lVar2 = FUN_1448abda6(param_1);
  }
  lVar2 = FUN_1402a1570(lVar2,uVar1);
  if (lVar2 != 0) {
    FUN_140c57f2c(lVar2);
    return;
  }
  return;
}



// FUNCTION 1418c0fae FUN_1418c0fae body=79 status=ok
// SIG undefined FUN_1418c0fae(void)

void FUN_1418c0fae(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1448c4a0e();
  uVar1 = *(undefined8 *)(param_1 + 0x678);
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    lVar2 = FUN_1448abda6(param_1);
  }
  lVar2 = FUN_1402a1570(lVar2,uVar1);
  if (lVar2 != 0) {
    FUN_140c57f2c(lVar2);
    return;
  }
  return;
}



// FUNCTION 1418c0ffe FUN_1418c0ffe body=81 status=ok
// SIG undefined FUN_1418c0ffe(void)

undefined8 * FUN_1418c0ffe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b50b3f0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c1050 FUN_1418c1050 body=40 status=ok
// SIG undefined FUN_1418c1050(void)

undefined8 FUN_1418c1050(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c1078 FUN_1418c1078 body=265 status=ok
// SIG undefined FUN_1418c1078(void)

undefined8 * FUN_1418c1078(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_14b50c110;
  param_1[5] = &PTR_LAB_14b50cb10;
  param_1[6] = &PTR_LAB_14b50cb50;
  param_1[0x55] = &PTR_LAB_14b50cba0;
  param_1[0x56] = &PTR_LAB_14b50cc20;
  param_1[0x57] = &PTR_LAB_14b50cc30;
  if (param_1[0xcd] != 0) {
    LOCK();
    *(int *)(param_1[0xce] + 8) = *(int *)(param_1[0xce] + 8) + -1;
    UNLOCK();
    plVar2 = param_1 + 0xcb;
    puVar4 = (undefined8 *)param_1[0xce];
    if (param_1[0xcb] == 0) {
      uVar6 = 0;
      puVar7 = puVar4;
    }
    else {
      *(undefined8 *)(param_1[0xcb] + 8) = 0;
      uVar6 = param_1[0xcb];
      puVar7 = (undefined8 *)param_1[0xce];
    }
    LOCK();
    plVar3 = (longlong *)*puVar7;
    if (plVar2 == plVar3) {
      *puVar7 = uVar6;
    }
    UNLOCK();
    if (plVar2 != plVar3) {
      while ((longlong *)param_1[0xcc] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar5 = *plVar2;
      *(longlong *)param_1[0xcc] = lVar5;
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 8) = param_1[0xcc];
      }
    }
    param_1[0xcd] = 0;
    param_1[0xce] = 0;
    *plVar2 = 0;
    param_1[0xcc] = 0;
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c1182 FUN_1418c1182 body=93 status=ok
// SIG undefined FUN_1418c1182(void)

void FUN_1418c1182(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b50ce70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1418c11df FUN_1418c11df body=49 status=ok
// SIG undefined FUN_1418c11df(void)

longlong FUN_1418c11df(void)

{
  if (DAT_14cb991d0 == 0) {
    FUN_14073dd9a(&DAT_14cb991d0,&PTR_LAB_14b513e00);
  }
  return DAT_14cb991d0;
}



// FUNCTION 1418c1210 FUN_1418c1210 body=49 status=ok
// SIG undefined FUN_1418c1210(void)

longlong FUN_1418c1210(void)

{
  if (DAT_14cb994b8 == 0) {
    FUN_14073dd9a(&DAT_14cb994b8,&PTR_LAB_14b51c640);
  }
  return DAT_14cb994b8;
}



// FUNCTION 1418c1242 FUN_1418c1242 body=550 status=ok
// SIG undefined FUN_1418c1242(void)

void FUN_1418c1242(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong unaff_RBX;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = *(longlong *)(param_1 + 0x28);
  if ((lVar7 != 0) && ((longlong)*(int *)(lVar7 + 0x18) != 0)) {
    plVar6 = *(longlong **)(lVar7 + 0x10);
    lVar7 = (longlong)*(int *)(lVar7 + 0x18) << 3;
    do {
      if ((*plVar6 != 0) && (lVar4 = *(longlong *)(*plVar6 + 0x10), lVar4 != 0)) {
        if (*(longlong *)(lVar4 + 0xb0) == 0) {
          lVar4 = FUN_1448abda6();
          if (lVar4 == 0) goto LAB_1418c1387;
          lVar4 = *(longlong *)(*plVar6 + 0x10);
        }
        plVar1 = *(longlong **)(lVar4 + 0x990);
        if ((plVar1 != (longlong *)0x0) && (*(char *)(lVar4 + 0x9b8) == '\x01')) {
          lVar4 = *(longlong *)(lVar4 + 0xb0);
          if (lVar4 == 0) {
            lVar4 = FUN_1448abda6();
          }
          if ((*(longlong *)(lVar4 + 0x260) == 0) ||
             (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x260) + 0x38), lVar4 == 0)) {
            uVar5 = 0;
          }
          else {
            lVar4 = *(longlong *)(lVar4 + 0x9c8);
            if (lVar4 == 0) goto LAB_1418c1387;
            uVar5 = CONCAT71((int7)(unaff_RBX >> 8),*(undefined1 *)(lVar4 + 0x430));
          }
          plVar3 = (longlong *)(**(code **)(**(longlong **)(*plVar6 + 0x10) + 0x5b8))();
          if (plVar3 == (longlong *)0x0) {
LAB_1418c1376:
            unaff_RBX = 0;
          }
          else {
            if (DAT_14caf9cd0 == 0) {
              local_50 = &local_38;
              local_38 = FUN_141030f22;
              local_40 = FUN_14081d0ea;
              local_48 = &LAB_1463c0cc2;
              local_58 = &LAB_147c9db5b;
              local_60 = &LAB_1463f9c44;
              local_68 = &DAT_149e063b2;
              local_70 = 0x2000000000;
              local_78 = 0x10000004;
              local_80 = 8;
              local_88 = 0x958;
              FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
            }
            if (((*(int *)(plVar3[2] + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38)) ||
                (*(longlong *)
                  (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8)
                 != DAT_14caf9cd0 + 0x30)) ||
               (cVar2 = (**(code **)(*plVar3 + 0x6c8))(plVar3), cVar2 == '\0')) goto LAB_1418c1376;
            unaff_RBX = uVar5 ^ 1;
          }
          (**(code **)(*plVar1 + 0x78))(plVar1,plVar6,unaff_RBX & 0xffffffff);
        }
      }
LAB_1418c1387:
      plVar6 = plVar6 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418c1480 FUN_1418c1480 body=134 status=ok
// SIG undefined FUN_1418c1480(void)

undefined8 FUN_1418c1480(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  
  if (((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0) &&
     ((*(byte *)((longlong)param_1 + 0x9f) & 0x40) == 0)) {
    lVar3 = param_1[0x16];
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6(param_1);
    }
    bVar1 = *(byte *)(lVar3 + 0x152);
    if (bVar1 != 1) {
      if (6 < bVar1) {
        return 0;
      }
      if ((0x68U >> (bVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
    }
    if (((*(longlong *)(lVar3 + 0x260) != 0) && (lVar3 = FUN_140da6e0e(), lVar3 != 0)) &&
       (cVar2 = (**(code **)(*param_1 + 0x5d8))(param_1), cVar2 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1418c1506 FUN_1418c1506 body=315 status=ok
// SIG undefined FUN_1418c1506(void)

void FUN_1418c1506(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1418c1570;
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
LAB_1418c1570:
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



// FUNCTION 1418c1642 FUN_1418c1642 body=70 status=ok
// SIG undefined FUN_1418c1642(void)

void FUN_1418c1642(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x90);
    *(undefined8 **)(param_1 + 0x90) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 1418c1688 FUN_1418c1688 body=269 status=ok
// SIG undefined FUN_1418c1688(void)

void FUN_1418c1688(longlong param_1,int param_2)

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



// FUNCTION 1418c1796 FUN_1418c1796 body=72 status=ok
// SIG undefined FUN_1418c1796(void)

void FUN_1418c1796(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418c17de FUN_1418c17de body=1665 status=ok
// SIG undefined FUN_1418c17de(void)

void FUN_1418c17de(longlong param_1,float param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  ushort uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  ushort *puVar15;
  longlong lVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  longlong *local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c0 = (double)((ulonglong)local_c0 & 0xffffffff00000000);
  local_110 = param_3;
  FUN_1448158c6(&local_a8,&local_c0,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x50));
  if (0 < (int)uStack_a0) {
    lVar19 = 0x4e;
    lVar23 = 4;
    lVar24 = 0;
    lVar20 = 0;
    lVar22 = 0;
    do {
      lVar8 = *(longlong *)(param_1 + 0x690);
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x38);
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x48);
      if ((((DAT_14c763b3f == '\0') && (lVar22 < *(int *)(param_1 + 0x6a8))) &&
          (lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x6a0) + lVar22 * 8), lVar11 != 0)) &&
         (lVar11 = *(longlong *)(lVar11 + 0x10), lVar11 != 0)) {
        if (*(char *)(*local_110 + 1 + lVar22 * 2) == '\x01') {
          dVar30 = *(double *)(lVar8 + 8 + lVar23 * 2);
          dVar29 = *(double *)(lVar8 + 0x10 + lVar23 * 2);
          dVar3 = *(double *)(lVar8 + 0x18 + lVar23 * 2);
        }
        else {
          dVar30 = (double)*(float *)(lVar9 + -0x70 + lVar19 * 2);
          dVar3 = *(double *)(param_1 + 0x108) * dVar30 + *(double *)(lVar8 + 0x30 + lVar23 * 2);
          dVar29 = *(double *)(param_1 + 0x100) * dVar30 + *(double *)(lVar8 + 0x28 + lVar23 * 2);
          dVar30 = dVar30 * *(double *)(param_1 + 0xf8) + *(double *)(lVar8 + 0x20 + lVar23 * 2);
        }
        if (*(longlong *)(lVar11 + 0x48) != 0) {
          uVar5 = *(undefined1 *)(lVar9 + lVar19 * 2);
          lVar12 = *(longlong *)(*(longlong *)(lVar11 + 8) + 0x9c8);
          lVar13 = *(longlong *)(lVar12 + 0xaa8);
          lVar16 = (longlong)*(int *)(*(longlong *)(lVar11 + 0x48) + 0x18) * 0x88;
          *(double *)(lVar13 + 0x58 + lVar16) = dVar30;
          *(double *)(lVar13 + 0x60 + lVar16) = dVar29;
          *(double *)(lVar13 + 0x68 + lVar16) = dVar3;
          lVar13 = *(longlong *)(lVar12 + 0xaa8);
          lVar16 = (longlong)*(int *)(*(longlong *)(lVar11 + 0x48) + 0x18) * 0x88;
          puVar1 = (undefined8 *)(lVar8 + 0x50 + lVar23 * 2);
          uVar4 = *puVar1;
          uVar17 = puVar1[1];
          *(undefined8 *)(lVar13 + 0x80 + lVar16) = *(undefined8 *)(lVar8 + 0x60 + lVar23 * 2);
          puVar1 = (undefined8 *)(lVar13 + 0x70 + lVar16);
          *puVar1 = uVar4;
          puVar1[1] = uVar17;
          *(undefined1 *)
           (*(longlong *)(lVar12 + 0xaa8) +
           (longlong)*(int *)(*(longlong *)(lVar11 + 0x48) + 0x18) * 0x88) = uVar5;
        }
      }
      if (*(char *)(lVar9 + lVar19 * 2) == '\x01') {
        lVar11 = *(longlong *)(lVar10 + lVar20);
        fVar25 = (*(float *)(lVar8 + lVar23 * 2) - *(float *)(lVar11 + 0x5c)) -
                 *(float *)(lVar9 + -0x70 + lVar19 * 2);
        fVar26 = 0.0;
        if (0.0 <= fVar25) {
          fVar26 = fVar25;
        }
        *(float *)(lVar10 + 8 + lVar20) = fVar26;
        fVar26 = *(float *)(lVar11 + 0x38) - fVar26;
        *(float *)(lVar10 + 0x48 + lVar20) = fVar26;
        lVar8 = *(longlong *)(param_1 + 0x670);
        puVar1 = (undefined8 *)(lVar8 + lVar24);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(lVar10 + 0x10 + lVar20);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        *(undefined8 *)(lVar10 + 0x20 + lVar20) = *(undefined8 *)(lVar8 + 0x10 + lVar24);
        fVar25 = *(float *)(lVar10 + 0xc + lVar20);
        fVar25 = *(float *)(lVar11 + 0x3c) * fVar26 -
                 ((fVar25 - fVar26) / param_2) *
                 *(float *)(lVar11 + 0x44 + (ulonglong)(fVar25 <= fVar26) * 4);
        *(float *)(lVar10 + 0x28 + lVar20) = fVar25;
        *(float *)(lVar10 + 0xc + lVar20) = fVar26;
        dVar30 = (double)fVar25;
        local_b0 = *(double *)(param_1 + 0x108) * dVar30;
        local_b8 = *(double *)(param_1 + 0x100) * dVar30;
        local_c0 = dVar30 * *(double *)(param_1 + 0xf8);
        lVar8 = *(longlong *)(param_1 + 0x650);
        lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x48) + lVar20);
        local_c8 = *(double *)(lVar8 + 0x10 + lVar24) + *(double *)(lVar11 + 0x28);
        local_d0 = *(double *)(lVar8 + 8 + lVar24) + *(double *)(lVar11 + 0x20);
        local_d8 = *(double *)(lVar8 + lVar24) + *(double *)(lVar11 + 0x18);
        if (DAT_14c763b3f == '\x01') {
          local_118 = 0;
          FUN_140c32aac(param_1,&local_c0,&local_d8,1);
        }
        fVar26 = *(float *)(*(longlong *)(lVar10 + lVar20) + 0x58);
        fVar26 = fVar25 * fVar26 +
                 (1.0 - fVar26) * *(float *)(*(longlong *)(lVar10 + lVar20) + 0x4c);
        *(float *)(lVar9 + -0x58 + lVar19 * 2) = fVar26;
        *(bool *)(lVar9 + lVar19 * 2) = 1e-08 < fVar26;
        plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x48);
        uVar27 = 0;
        uVar28 = 0;
        if ((plVar14 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar14 + 0xc))) {
          uVar4 = *(undefined8 *)(*(longlong *)(*plVar14 + 0x3b0) + (longlong)(int)plVar14[1] * 8);
          uVar27 = (undefined4)uVar4;
          uVar28 = (undefined4)((ulonglong)uVar4 >> 0x20);
        }
        *(float *)(lVar9 + -0xc + lVar19 * 2) =
             (float)((double)CONCAT44(uVar28,uVar27) /
                    (double)*(int *)(*(longlong *)(param_1 + 0x1a0) + 0x40));
        *(float *)(local_a8 + lVar22 * 4) = fVar26;
      }
      else {
        lVar8 = *(longlong *)(lVar10 + lVar20);
        fVar25 = ((*(float *)(lVar8 + 0x30) + *(float *)(lVar8 + 0x5c) + *(float *)(lVar8 + 0x34) +
                  *(float *)(lVar9 + -0x70 + lVar19 * 2)) - *(float *)(lVar8 + 0x5c)) -
                 *(float *)(*(longlong *)(lVar9 + -0x9c + lVar19 * 2) + 0x1c);
        fVar26 = 0.0;
        if (0.0 <= fVar25) {
          fVar26 = fVar25;
        }
        *(float *)(lVar10 + 8 + lVar20) = fVar26;
        *(float *)(lVar10 + 0x48 + lVar20) = *(float *)(lVar8 + 0x38) - fVar26;
        *(undefined4 *)(lVar9 + -0x58 + lVar19 * 2) = 0;
        *(undefined1 *)(lVar9 + lVar19 * 2) = 0;
      }
      lVar22 = lVar22 + 1;
      lVar20 = lVar20 + 0x88;
      lVar24 = lVar24 + 0x18;
      lVar19 = lVar19 + 0x74;
      lVar23 = lVar23 + 0x80;
    } while (lVar22 < (int)uStack_a0);
  }
  if (DAT_14c763b3e == '\0') {
    lVar19 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1a0) + 0xa0);
    if (lVar19 != 0) {
      lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x98);
      lVar22 = 0;
      do {
        if (*(int *)(lVar20 + 0x10 + lVar22) == 2) {
          puVar15 = *(ushort **)(lVar20 + 8 + lVar22);
          uVar6 = *puVar15;
          uVar18 = (ulonglong)uVar6;
          uVar7 = puVar15[1];
          uVar21 = (ulonglong)uVar7;
          fVar26 = *(float *)(lVar20 + 0x18 + lVar22);
          local_d8 = (double)(*(float *)(local_a8 + uVar18 * 4) - *(float *)(local_a8 + uVar21 * 4))
          ;
          local_c8 = *(double *)(param_1 + 0x108) * local_d8;
          local_d0 = *(double *)(param_1 + 0x100) * local_d8;
          local_d8 = local_d8 * *(double *)(param_1 + 0xf8);
          dVar30 = (double)fVar26;
          local_b0 = local_c8 * dVar30;
          local_b8 = local_d0 * dVar30;
          local_c0 = dVar30 * local_d8;
          dVar30 = (double)-fVar26;
          local_c8 = local_c8 * dVar30;
          local_d0 = local_d0 * dVar30;
          local_d8 = local_d8 * dVar30;
          lVar23 = *(longlong *)(param_1 + 0x650);
          lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x48);
          lVar8 = *(longlong *)(lVar24 + (ulonglong)uVar6 * 0x80 + uVar18 * 8);
          local_e0 = *(double *)(lVar23 + 0x10 + uVar18 * 0x18) + *(double *)(lVar8 + 0x28);
          local_e8 = *(double *)(lVar23 + 8 + uVar18 * 0x18) + *(double *)(lVar8 + 0x20);
          local_f0 = *(double *)(lVar23 + uVar18 * 0x18) + *(double *)(lVar8 + 0x18);
          local_118 = 0;
          FUN_140c32aac(param_1,&local_c0,&local_f0,CONCAT71((int7)((ulonglong)lVar24 >> 8),1));
          lVar23 = *(longlong *)(param_1 + 0x650);
          lVar24 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x48) +
                    (ulonglong)uVar7 * 0x80 + uVar21 * 8);
          local_f8 = *(double *)(lVar23 + 0x10 + uVar21 * 0x18) + *(double *)(lVar24 + 0x28);
          local_100 = *(double *)(lVar23 + 8 + uVar21 * 0x18) + *(double *)(lVar24 + 0x20);
          local_108 = *(double *)(lVar23 + uVar21 * 0x18) + *(double *)(lVar24 + 0x18);
          local_118 = 0;
          FUN_140c32aac(param_1,&local_d8,&local_108,1);
        }
        lVar22 = lVar22 + 0x20;
      } while (lVar19 * 0x20 != lVar22);
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418c1e60 FUN_1418c1e60 body=26 status=ok
// SIG undefined FUN_1418c1e60(void)

void FUN_1418c1e60(undefined8 param_1)

{
  FUN_1406f2b4a();
  FUN_1406f29dc(param_1);
  return;
}



// FUNCTION 1418c1e7a FUN_1418c1e7a body=351 status=ok
// SIG undefined FUN_1418c1e7a(void)

void FUN_1418c1e7a(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 2;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418c1efe;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
    }
  }
LAB_1418c1efe:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 1)) {
    uVar7 = uVar5 >> 1 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,2,1);
  return;
}



// FUNCTION 1418c1fda FUN_1418c1fda body=269 status=ok
// SIG undefined FUN_1418c1fda(void)

void FUN_1418c1fda(longlong param_1,int param_2)

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



// FUNCTION 1418c20e8 FUN_1418c20e8 body=49 status=ok
// SIG undefined FUN_1418c20e8(void)

longlong FUN_1418c20e8(void)

{
  if (DAT_14cb99c00 == 0) {
    FUN_140f50038(&DAT_14cb99c00,&PTR_s__Script_VivoxCore_14b52591f_1_14b525900);
  }
  return DAT_14cb99c00;
}



// FUNCTION 1418c2120 FUN_1418c2120 body=186 status=ok
// SIG undefined FUN_1418c2120(void)

undefined8 FUN_1418c2120(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_3;
  cVar1 = FUN_140988638(&local_20,L"VIVOX",1);
  if (cVar1 != '\0') {
    local_24 = -1;
    cVar1 = FUN_141369f9a(local_20,L"User=");
    if (cVar1 != '\0') {
      FUN_14619c2be(local_38,&local_20,1);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      if (local_24 < *(int *)(param_1 + 0x18)) {
        uVar2 = FUN_143f92416(*(undefined8 *)
                               (*(longlong *)(param_1 + 0x10) + (longlong)local_24 * 0x10),local_20)
        ;
        goto LAB_1418c2155;
      }
    }
  }
  uVar2 = 0;
LAB_1418c2155:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c21e8 FUN_1418c21e8 body=42 status=ok
// SIG undefined FUN_1418c21e8(void)

void FUN_1418c21e8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fbcba4(puVar1);
  *puVar1 = &PTR_FUN_14b52c2e0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  return;
}



// FUNCTION 1418c2212 FUN_1418c2212 body=151 status=ok
// SIG undefined FUN_1418c2212(void)

void FUN_1418c2212(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140fbcba4(puVar1);
  *(undefined1 *)(puVar1 + 0x21) = 1;
  *puVar1 = &PTR_FUN_14b536610;
  *(undefined1 *)(puVar1 + 0x2c) = 0;
  puVar1[0x2d] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  *(undefined1 *)(puVar1 + 0x2e) = 1;
  puVar1[0x2f] = 0;
  *(undefined1 *)(puVar1 + 0x30) = 0;
  puVar1[0x31] = 0x3ff0000000000000;
  puVar1[0x32] = 0x3f847ae147ae147b;
  *(undefined1 *)(puVar1 + 0x34) = 0;
  *(undefined1 *)(puVar1 + 0x36) = 0;
  puVar1[0x38] = 0;
  puVar1[0x3a] = 0;
  return;
}



// FUNCTION 1418c22aa FUN_1418c22aa body=85 status=ok
// SIG undefined FUN_1418c22aa(void)

void FUN_1418c22aa(byte *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = *param_1 & 0xfd;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_14001d63e(param_1 + 0x18,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  plVar3 = (longlong *)*param_2;
  *(longlong **)(lVar2 + (longlong)iVar1 * 0x10) = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(int *)(lVar2 + (longlong)iVar1 * 0x10 + 8) = (int)param_2[1];
  return;
}



// FUNCTION 1418c2300 FUN_1418c2300 body=158 status=ok
// SIG undefined FUN_1418c2300(void)

void FUN_1418c2300(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))
            (*(longlong **)(param_1 + 0x138),&local_28,*(undefined8 *)(param_1 + 0x58));
  if ((longlong *)(param_1 + 0x168) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x168) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x168) = local_28;
    *(undefined4 *)(param_1 + 0x170) = local_20;
    *(undefined4 *)(param_1 + 0x174) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c23a0 FUN_1418c23a0 body=70 status=ok
// SIG undefined FUN_1418c23a0(void)

undefined8 * FUN_1418c23a0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b52c2e0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_140ee3dc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c23e6 FUN_1418c23e6 body=81 status=ok
// SIG undefined FUN_1418c23e6(void)

void FUN_1418c23e6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  FUN_14101eafe();
  if (param_2 != 0) {
    uVar1 = FUN_140e2120e();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418c2434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x38))(plVar2,param_1,param_3,*(code **)(*plVar2 + 0x38));
      return;
    }
  }
  return;
}



// FUNCTION 1418c2438 FUN_1418c2438 body=89 status=ok
// SIG undefined FUN_1418c2438(void)

undefined8 * FUN_1418c2438(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b53da70;
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
  }
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
  }
  FUN_140d4e91c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c2492 FUN_1418c2492 body=40 status=ok
// SIG undefined FUN_1418c2492(void)

undefined8 FUN_1418c2492(undefined8 param_1,int param_2)

{
  FUN_140d4e91c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c24dc FUN_1418c24dc body=59 status=ok
// SIG undefined FUN_1418c24dc(void)

undefined8 * FUN_1418c24dc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b53f0d0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c2518 FUN_1418c2518 body=221 status=ok
// SIG undefined FUN_1418c2518(void)

void FUN_1418c2518(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x3f800000;
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
  *(longlong **)(param_2 + 4) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_2[6] = DAT_14c844848;
  return;
}



// FUNCTION 1418c25f6 FUN_1418c25f6 body=43 status=ok
// SIG undefined FUN_1418c25f6(void)

void FUN_1418c25f6(undefined8 param_1,undefined8 *param_2)

{
  FUN_1410279c6(param_2);
  *param_2 = &PTR_FUN_14b53db60;
  param_2[0x12] = 0;
  return;
}



// FUNCTION 1418c2622 FUN_1418c2622 body=29 status=ok
// SIG undefined FUN_1418c2622(void)

undefined8 FUN_1418c2622(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c2640 FUN_1418c2640 body=66 status=ok
// SIG undefined FUN_1418c2640(void)

void FUN_1418c2640(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b53d760;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001418c267e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1418c2682 FUN_1418c2682 body=29 status=ok
// SIG undefined FUN_1418c2682(void)

undefined8 FUN_1418c2682(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c269f FUN_1418c269f body=49 status=ok
// SIG undefined FUN_1418c269f(void)

longlong FUN_1418c269f(void)

{
  if (DAT_14cb9aa68 == 0) {
    FUN_14073dd9a(&DAT_14cb9aa68,&PTR_LAB_14b545520);
  }
  return DAT_14cb9aa68;
}



// FUNCTION 1418c26d0 FUN_1418c26d0 body=49 status=ok
// SIG undefined FUN_1418c26d0(void)

longlong FUN_1418c26d0(void)

{
  if (DAT_14cb9b030 == 0) {
    FUN_14086a14e(&DAT_14cb9b030,&PTR_FUN_14b54db28);
  }
  return DAT_14cb9b030;
}



// FUNCTION 1418c2701 FUN_1418c2701 body=49 status=ok
// SIG undefined FUN_1418c2701(void)

longlong FUN_1418c2701(void)

{
  if (DAT_14cb9b558 == 0) {
    FUN_14073dd9a(&DAT_14cb9b558,&PTR_LAB_14b55d110);
  }
  return DAT_14cb9b558;
}



// FUNCTION 1418c2751 FUN_1418c2751 body=49 status=ok
// SIG undefined FUN_1418c2751(void)

longlong FUN_1418c2751(void)

{
  if (DAT_14cb9d610 == 0) {
    FUN_14086a14e(&DAT_14cb9d610,&PTR_FUN_14b598fe8);
  }
  return DAT_14cb9d610;
}



// FUNCTION 1418c2782 FUN_1418c2782 body=49 status=ok
// SIG undefined FUN_1418c2782(void)

longlong FUN_1418c2782(void)

{
  if (DAT_14cb9dba8 == 0) {
    FUN_14073dd9a(&DAT_14cb9dba8,&PTR_LAB_14b5a2430);
  }
  return DAT_14cb9dba8;
}



// FUNCTION 1418c27b3 FUN_1418c27b3 body=49 status=ok
// SIG undefined FUN_1418c27b3(void)

longlong FUN_1418c27b3(void)

{
  if (DAT_14cb9e550 == 0) {
    FUN_140f50038(&DAT_14cb9e550,&PTR_s__Script_BinkMediaPlayer_14b5a70a0);
  }
  return DAT_14cb9e550;
}



// FUNCTION 1418c27e4 FUN_1418c27e4 body=49 status=ok
// SIG undefined FUN_1418c27e4(void)

longlong FUN_1418c27e4(void)

{
  if (DAT_14cb9e538 == 0) {
    FUN_14073dd9a(&DAT_14cb9e538,&PTR_LAB_14b5a6cc0);
  }
  return DAT_14cb9e538;
}



// FUNCTION 1418c2815 FUN_1418c2815 body=295 status=ok
// SIG undefined FUN_1418c2815(void)

longlong FUN_1418c2815(longlong param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar3 = uVar2 & 0x7fffffff ^ uVar2 >> 0x10;
  uVar2 = *(uint *)(param_1 + 0x248);
  uVar6 = uVar2 & uVar3;
  lVar4 = param_1 + 0x230;
  if (*(longlong *)(param_1 + 0x238) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x238);
  }
  do {
    if (*(uint *)(lVar4 + (longlong)(int)uVar6 * 4) == uVar3) {
      lVar7 = *(longlong *)(param_1 + 0x220);
      if (*(longlong *)(param_1 + 0x220) == 0) {
        lVar7 = param_1 + 0x218;
      }
      iVar1 = *(int *)(lVar7 + (longlong)(int)uVar6 * 4);
      lVar7 = (longlong)iVar1 * 0x10;
      if (*(ulonglong *)(*(longlong *)(param_1 + 0x1d8) + lVar7) == param_2) {
        if (((iVar1 != -1) &&
            (plVar5 = (longlong *)(*(longlong *)(param_1 + 0x1d8) + lVar7 + 8),
            plVar5 != (longlong *)0x0)) && (lVar4 = *plVar5, lVar4 != 0)) goto LAB_1418c2917;
        goto LAB_1418c28eb;
      }
    }
    uVar6 = uVar6 + 1 & uVar2;
    if (uVar6 == (uVar3 + *(int *)(param_1 + 0x24c) + 1 & uVar2)) {
LAB_1418c28eb:
      FUN_1447ec05f(&local_38);
      lVar4 = FUN_14473c272(param_1,&local_38,0);
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x38))();
      }
LAB_1418c2917:
      if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return lVar4;
    }
  } while( true );
}



// FUNCTION 1418c293d FUN_1418c293d body=49 status=ok
// SIG undefined FUN_1418c293d(void)

longlong FUN_1418c293d(void)

{
  if (DAT_14cb9e8f0 == 0) {
    FUN_14073dd9a(&DAT_14cb9e8f0,&PTR_LAB_14b5ac640);
  }
  return DAT_14cb9e8f0;
}



// FUNCTION 1418c296e FUN_1418c296e body=49 status=ok
// SIG undefined FUN_1418c296e(void)

longlong FUN_1418c296e(void)

{
  if (DAT_14cb9e9b8 == 0) {
    FUN_14073dd9a(&DAT_14cb9e9b8,&PTR_LAB_14b5aef70);
  }
  return DAT_14cb9e9b8;
}



// FUNCTION 1418c29a0 FUN_1418c29a0 body=101 status=ok
// SIG undefined FUN_1418c29a0(void)

undefined8 * FUN_1418c29a0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_14b5afc70;
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  puVar2[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_1 + 0x30);
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 1418c2a06 FUN_1418c2a06 body=29 status=ok
// SIG undefined FUN_1418c2a06(void)

undefined8 FUN_1418c2a06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c2a24 FUN_1418c2a24 body=93 status=ok
// SIG undefined FUN_1418c2a24(void)

void FUN_1418c2a24(longlong param_1)

{
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14020496a(&local_20,param_1);
  if (local_1c != 0 || local_20 != 0) {
    FUN_148b781e8(param_1 + 0x3a0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c2a82 FUN_1418c2a82 body=35 status=ok
// SIG undefined FUN_1418c2a82(void)

void FUN_1418c2a82(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1402309ae(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b5bd730;
  return;
}



// FUNCTION 1418c2aa5 FUN_1418c2aa5 body=39 status=ok
// SIG undefined FUN_1418c2aa5(void)

void FUN_1418c2aa5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1402309ae(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b5bdb60;
  *(undefined1 *)(puVar1 + 7) = 1;
  return;
}



// FUNCTION 1418c2acc FUN_1418c2acc body=39 status=ok
// SIG undefined FUN_1418c2acc(void)

void FUN_1418c2acc(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1402309ae(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b5bf440;
  *(undefined1 *)(puVar1 + 7) = 1;
  return;
}



// FUNCTION 1418c2af3 FUN_1418c2af3 body=39 status=ok
// SIG undefined FUN_1418c2af3(void)

void FUN_1418c2af3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1402309ae(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b5bf870;
  *(undefined1 *)(puVar1 + 7) = 0;
  return;
}



// FUNCTION 1418c2b1a FUN_1418c2b1a body=35 status=ok
// SIG undefined FUN_1418c2b1a(void)

void FUN_1418c2b1a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1402309ae(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b5bfc10;
  return;
}



// FUNCTION 1418c2b3d FUN_1418c2b3d body=35 status=ok
// SIG undefined FUN_1418c2b3d(void)

void FUN_1418c2b3d(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1402309ae(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b5c00c0;
  return;
}



// FUNCTION 1418c2b60 FUN_1418c2b60 body=40 status=ok
// SIG undefined FUN_1418c2b60(void)

undefined8 FUN_1418c2b60(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c2b88 FUN_1418c2b88 body=40 status=ok
// SIG undefined FUN_1418c2b88(void)

undefined8 FUN_1418c2b88(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c2bb0 FUN_1418c2bb0 body=40 status=ok
// SIG undefined FUN_1418c2bb0(void)

undefined8 FUN_1418c2bb0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c2bd8 FUN_1418c2bd8 body=40 status=ok
// SIG undefined FUN_1418c2bd8(void)

undefined8 FUN_1418c2bd8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c2c00 FUN_1418c2c00 body=40 status=ok
// SIG undefined FUN_1418c2c00(void)

undefined8 FUN_1418c2c00(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c2c28 FUN_1418c2c28 body=40 status=ok
// SIG undefined FUN_1418c2c28(void)

undefined8 FUN_1418c2c28(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c2c50 FUN_1418c2c50 body=153 status=ok
// SIG undefined FUN_1418c2c50(void)

undefined8 FUN_1418c2c50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140311eb6(param_2,param_3);
    FUN_140311eb6(param_2 + 0x10,param_3 + 0x10);
    FUN_140311eb6(param_2 + 0x20,param_3 + 0x20);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_3 + 0x50);
    uVar1 = *(undefined4 *)(param_3 + 0x30);
    uVar2 = *(undefined4 *)(param_3 + 0x34);
    uVar3 = *(undefined4 *)(param_3 + 0x38);
    uVar4 = *(undefined4 *)(param_3 + 0x3c);
    uVar5 = *(undefined4 *)(param_3 + 0x44);
    uVar6 = *(undefined4 *)(param_3 + 0x48);
    uVar7 = *(undefined4 *)(param_3 + 0x4c);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 0x40);
    *(undefined4 *)(param_2 + 0x44) = uVar5;
    *(undefined4 *)(param_2 + 0x48) = uVar6;
    *(undefined4 *)(param_2 + 0x4c) = uVar7;
    *(undefined4 *)(param_2 + 0x30) = uVar1;
    *(undefined4 *)(param_2 + 0x34) = uVar2;
    *(undefined4 *)(param_2 + 0x38) = uVar3;
    *(undefined4 *)(param_2 + 0x3c) = uVar4;
    lVar8 = *(longlong *)(param_3 + 0x58);
    if (DAT_14c950c29 == '\x01') {
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar8 = *(longlong *)(param_3 + 0x58);
      }
    }
    param_3 = param_3 + 0x60;
    *(longlong *)(param_2 + 0x58) = lVar8;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 1418c2cea FUN_1418c2cea body=92 status=ok
// SIG undefined FUN_1418c2cea(void)

void FUN_1418c2cea(longlong *param_1)

{
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418c2d46 FUN_1418c2d46 body=1146 status=ok
// SIG undefined FUN_1418c2d46(void)

void FUN_1418c2d46(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
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
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_1418c2e31;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_1418c2e31:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1409e12a0;
      local_50 = 0;
      local_58 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_1418c2efe;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_1418c2efe:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1406413d0(param_1,1);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c31c2 FUN_1418c31c2 body=644 status=ok
// SIG undefined FUN_1418c31c2(void)

void FUN_1418c31c2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined2 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined2 local_2b;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2b = 1;
  local_29 = '\0';
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
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
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2b);
            goto LAB_1418c32b0;
          }
        }
        _Src = (undefined2 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_2b) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2b,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2b,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_2b,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_2b,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2b);
  }
LAB_1418c32b0:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar5 = *(char *)(param_1 + 0x2832);
  if ((cVar5 != local_29) && (*(char *)(param_1 + 0x2831) != cVar5)) {
    *(char *)(param_1 + 0x2831) = cVar5;
    FUN_140c7a916(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c344e FUN_1418c344e body=89 status=ok
// SIG undefined FUN_1418c344e(void)

undefined8 * FUN_1418c344e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x8e0);
  _Src = *(void **)(param_1 + 0x8d8);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1418c34a8 FUN_1418c34a8 body=98 status=ok
// SIG undefined FUN_1418c34a8(void)

void FUN_1418c34a8(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)((longlong)param_2 + 0xf) = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b5d0f40;
  FUN_144894d4c(param_2 + 4);
  param_2[0x11c] = 0;
  param_2[0x11d] = 0;
  param_2[0x11e] = 0;
  param_2[0x11f] = 0;
  param_2[0x120] = 0;
  param_2[0x121] = 0;
  param_2[0x122] = 0;
  param_2[0x123] = 0;
  param_2[0x124] = 0;
  param_2[0x125] = 0;
  *(undefined4 *)((longlong)param_2 + 0x92f) = 0;
  *(undefined2 *)(param_2 + 2) = 0x101;
  return;
}



// FUNCTION 1418c354e FUN_1418c354e body=118 status=ok
// SIG undefined FUN_1418c354e(void)

undefined8 * FUN_1418c354e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5dfa60;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_14075386c(param_1 + 0x81);
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1407538a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c35ea FUN_1418c35ea body=80 status=ok
// SIG undefined FUN_1418c35ea(void)

void FUN_1418c35ea(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  FUN_1400d6974(local_38);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c363c FUN_1418c363c body=67 status=ok
// SIG undefined FUN_1418c363c(void)

void FUN_1418c363c(undefined8 param_1,undefined8 *param_2)

{
  FUN_1409e6ae2(param_2);
  *param_2 = &PTR_FUN_14b962a70;
  *(undefined2 *)(param_2 + 0x8b) = 0;
  *(undefined4 *)((longlong)param_2 + 0x46c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x45c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x463) = 0;
  return;
}



// FUNCTION 1418c3690 FUN_1418c3690 body=59 status=ok
// SIG undefined FUN_1418c3690(void)

void FUN_1418c3690(undefined8 param_1,longlong *param_2)

{
  if (param_2[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_2,(int)param_2[1]);
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418c36cc FUN_1418c36cc body=717 status=ok
// SIG undefined FUN_1418c36cc(void)

undefined8 FUN_1418c36cc(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 != 0) {
    do {
      if (param_3 != param_2) {
        local_78 = 0;
        uStack_70 = 0;
        lVar3 = param_3[1];
        if ((longlong)(int)lVar3 != 0) {
          local_90 = *param_3;
          lVar6 = 0;
          do {
            if ((*(int *)(local_90 + 8 + lVar6) != 0) &&
               (*(longlong **)(local_90 + lVar6) != (longlong *)0x0)) {
              local_88 = 0;
              local_80 = 0;
              (**(code **)(**(longlong **)(local_90 + lVar6) + 0x40))();
              lVar5 = (longlong)(int)uStack_70;
              uVar2 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar2);
              if (uStack_70._4_4_ < uVar2) {
                FUN_1447a71f6(&local_78);
              }
              lVar5 = lVar5 * 0x10;
              *(undefined8 *)(local_78 + lVar5) = 0;
              *(undefined4 *)(local_78 + 8 + lVar5) = 0;
              *(undefined8 *)(local_78 + lVar5) = local_88;
              local_88 = 0;
              *(undefined4 *)(local_78 + 8 + lVar5) = local_80;
              local_80 = 0;
              FUN_1449db362(&local_88);
            }
            lVar6 = lVar6 + 0x10;
          } while ((longlong)(int)lVar3 * 0x10 != lVar6);
        }
        FUN_1448a8284(param_2);
        if (&local_78 == param_2) {
          uVar4 = uStack_70 & 0xffffffff;
        }
        else {
          FUN_144760e21(*param_2,(int)param_2[1]);
          if (*param_2 != 0) {
            FUN_1400020a8();
          }
          *param_2 = local_78;
          local_78 = 0;
          *(int *)(param_2 + 1) = (int)uStack_70;
          *(uint *)((longlong)param_2 + 0xc) = uStack_70._4_4_;
          uStack_70 = 0;
          uVar4 = 0;
        }
        FUN_144760e21(local_78,uVar4);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      lVar3 = param_3[3];
      if (DAT_14c950c29 == 1) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = param_3[3];
        }
      }
      bVar1 = DAT_14c950c29;
      param_2[3] = lVar3;
      param_2[4] = param_3[4];
      lVar3 = param_3[5];
      if ((bVar1 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = param_3[5];
          bVar1 = DAT_14c950c29;
        }
      }
      param_2[5] = lVar3;
      *(short *)(param_2 + 6) = (short)param_3[6];
      lVar3 = param_3[7];
      if ((bVar1 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = param_3[7];
          bVar1 = DAT_14c950c29;
        }
      }
      param_2[7] = lVar3;
      param_2[8] = param_3[8];
      lVar3 = param_3[9];
      if ((bVar1 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = param_3[9];
        }
      }
      param_2[9] = lVar3;
      param_2[10] = param_3[10];
      *(char *)(param_2 + 0xb) = (char)param_3[0xb];
      FUN_140b177d4(param_2 + 0xc,param_3 + 0xc);
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x10;
      param_3 = param_3 + 0x10;
    } while (param_4 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1418c399a FUN_1418c399a body=59 status=ok
// SIG undefined FUN_1418c399a(void)

void FUN_1418c399a(longlong *param_1)

{
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418c39d5 FUN_1418c39d5 body=49 status=ok
// SIG undefined FUN_1418c39d5(void)

longlong FUN_1418c39d5(void)

{
  if (DAT_14cba00e0 == 0) {
    FUN_14086a14e(&DAT_14cba00e0,&PTR_FUN_14b5e4e18);
  }
  return DAT_14cba00e0;
}



// FUNCTION 1418c3a06 FUN_1418c3a06 body=49 status=ok
// SIG undefined FUN_1418c3a06(void)

longlong FUN_1418c3a06(void)

{
  if (DAT_14cba0180 == 0) {
    FUN_14073dd9a(&DAT_14cba0180,&PTR_LAB_14b5e6130);
  }
  return DAT_14cba0180;
}



// FUNCTION 1418c3a38 FUN_1418c3a38 body=57 status=ok
// SIG undefined FUN_1418c3a38(void)

void FUN_1418c3a38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0378 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0378 = FUN_140002ddd(FUN_1465a90c2,uVar1,L"DLCAspect");
  }
  return;
}



// FUNCTION 1418c3a72 FUN_1418c3a72 body=88 status=ok
// SIG undefined FUN_1418c3a72(void)

longlong * FUN_1418c3a72(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1418c3aca FUN_1418c3aca body=1670 status=ok
// SIG undefined FUN_1418c3aca(void)

void FUN_1418c3aca(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(char *)((longlong)param_1 + 0x3ac) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3ac) = 0;
  }
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  lVar3 = DAT_14c9a3d60;
  if ((int)param_1[0x44] != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = (int)param_1[0x44] + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x214) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x214) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if ((int)param_1[0x41] != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = (int)param_1[0x41] + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x41) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x1fc) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x1fc) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if ((int)param_1[0x3e] != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = (int)param_1[0x3e] + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x3e) = 0;
  }
  FUN_144760e21(param_1[0x3b],(int)param_1[0x3c]);
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x38],(int)param_1[0x39]);
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x35],(int)param_1[0x36]);
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x24],(int)param_1[0x25]);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x19],(int)param_1[0x1a]);
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x14],(int)param_1[0x15]);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xf],(int)param_1[0x10]);
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[10],(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418c4150 FUN_1418c4150 body=57 status=ok
// SIG undefined FUN_1418c4150(void)

void FUN_1418c4150(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0c08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0c08 = FUN_140002ddd(FUN_1465abe2d,uVar1,L"GbxActorPartDef_DisplayName");
  }
  return;
}



// FUNCTION 1418c418a FUN_1418c418a body=84 status=ok
// SIG undefined FUN_1418c418a(void)

longlong * FUN_1418c418a(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1418c41de FUN_1418c41de body=84 status=ok
// SIG undefined FUN_1418c41de(void)

longlong * FUN_1418c41de(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1418c4232 FUN_1418c4232 body=76 status=ok
// SIG undefined FUN_1418c4232(void)

void FUN_1418c4232(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb0);
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b6011d0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 1418c42a8 FUN_1418c42a8 body=179 status=ok
// SIG undefined FUN_1418c42a8(void)

undefined8 * FUN_1418c42a8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b603bc0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 1418c4378 FUN_1418c4378 body=45 status=ok
// SIG undefined FUN_1418c4378(void)

undefined8 FUN_1418c4378(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1418c43a6 FUN_1418c43a6 body=45 status=ok
// SIG undefined FUN_1418c43a6(void)

undefined8 FUN_1418c43a6(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1418c43d3 FUN_1418c43d3 body=49 status=ok
// SIG undefined FUN_1418c43d3(void)

longlong FUN_1418c43d3(void)

{
  if (DAT_14cba1160 == 0) {
    FUN_14086a14e(&DAT_14cba1160,&PTR_FUN_14b609d70);
  }
  return DAT_14cba1160;
}



// FUNCTION 1418c4404 FUN_1418c4404 body=138 status=ok
// SIG undefined FUN_1418c4404(void)

undefined8 * FUN_1418c4404(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac4f5c0;
  param_1[0x26] = &PTR_FUN_14ac52c10;
  if (param_1[0x2e] != 0) {
    FUN_14387f5b2(param_1 + 0x26);
  }
  FUN_1403d7f26(param_1 + 0x26);
  *param_1 = &PTR_FUN_14ac4dde0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 1418c448e FUN_1418c448e body=138 status=ok
// SIG undefined FUN_1418c448e(void)

undefined8 * FUN_1418c448e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac4f5c0;
  param_1[0x26] = &PTR_FUN_14ac52c10;
  if (param_1[0x2e] != 0) {
    FUN_14387f5b2(param_1 + 0x26);
  }
  FUN_1403d7f26(param_1 + 0x26);
  *param_1 = &PTR_FUN_14ac4dde0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x268);
  }
  return param_1;
}



// FUNCTION 1418c4518 FUN_1418c4518 body=71 status=ok
// SIG undefined FUN_1418c4518(void)

undefined8 * FUN_1418c4518(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1418c4560 FUN_1418c4560 body=118 status=ok
// SIG undefined FUN_1418c4560(void)

undefined8 FUN_1418c4560(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cbc5818 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cbc5818,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c45d8 FUN_1418c45d8 body=112 status=ok
// SIG undefined FUN_1418c45d8(void)

undefined8 * FUN_1418c45d8(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14494321d(0x140);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 1418c4648 FUN_1418c4648 body=79 status=ok
// SIG undefined FUN_1418c4648(void)

undefined8 * FUN_1418c4648(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b60fba0;
  plVar2 = (longlong *)param_1[0x1a];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1407e87c4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c4698 FUN_1418c4698 body=118 status=ok
// SIG undefined FUN_1418c4698(void)

undefined8 FUN_1418c4698(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cbc5838 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cbc5838,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c4710 FUN_1418c4710 body=57 status=ok
// SIG undefined FUN_1418c4710(void)

void FUN_1418c4710(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1bd0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1bd0 = FUN_140002ddd(FUN_1465b15e0,uVar1,L"GbxRewardData_Experience");
  }
  return;
}



// FUNCTION 1418c4749 FUN_1418c4749 body=49 status=ok
// SIG undefined FUN_1418c4749(void)

longlong FUN_1418c4749(void)

{
  if (DAT_14cba1d48 == 0) {
    FUN_14073dd9a(&DAT_14cba1d48,&PTR_LAB_14b61fba0);
  }
  return DAT_14cba1d48;
}



// FUNCTION 1418c477a FUN_1418c477a body=259 status=ok
// SIG undefined FUN_1418c477a(void)

void FUN_1418c477a(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14b624670;
  if (DAT_14c947fe0 == 0) {
    lVar1 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar1);
    DAT_14c947fe0 = lVar1;
  }
  FUN_140045924(DAT_14c947fe0,&local_38,&DAT_14cb790d0,1);
  param_2[4] = local_38;
  *(undefined4 *)(param_2 + 8) = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined4 *)(param_2 + 0xf) = 0xf00000d0;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 0x3f800000;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c487e FUN_1418c487e body=447 status=ok
// SIG undefined FUN_1418c487e(void)

undefined8 FUN_1418c487e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(param_3 + 8 + lVar5);
      if (*(longlong *)(param_2 + 8 + lVar5) != lVar3) {
        *(undefined8 *)(param_2 + 0x18 + lVar5) = 0;
      }
      *(longlong *)(param_2 + 8 + lVar5) = lVar3;
      if (*(longlong *)(param_2 + 0x10 + lVar5) != *(longlong *)(param_3 + 0x10 + lVar5)) {
        *(undefined8 *)(param_2 + 0x18 + lVar5) = 0;
      }
      uVar4 = FUN_14477b664();
      uVar4 = FUN_14477b664(uVar4);
      *(undefined8 *)(param_2 + 0x10 + lVar5) = uVar4;
      *(undefined8 *)(param_2 + 0x18 + lVar5) = *(undefined8 *)(param_3 + 0x18 + lVar5);
      lVar3 = *(longlong *)(param_3 + 0x20 + lVar5);
      if (*(longlong *)(param_2 + 0x20 + lVar5) != lVar3) {
        *(undefined8 *)(param_2 + 0x30 + lVar5) = 0;
      }
      *(longlong *)(param_2 + 0x20 + lVar5) = lVar3;
      if (*(longlong *)(param_2 + 0x28 + lVar5) != *(longlong *)(param_3 + 0x28 + lVar5)) {
        *(undefined8 *)(param_2 + 0x30 + lVar5) = 0;
      }
      uVar4 = FUN_14477b664();
      uVar4 = FUN_14477b664(uVar4);
      *(undefined8 *)(param_2 + 0x28 + lVar5) = uVar4;
      *(undefined8 *)(param_2 + 0x30 + lVar5) = *(undefined8 *)(param_3 + 0x30 + lVar5);
      *(undefined1 *)(param_2 + 0x38 + lVar5) = *(undefined1 *)(param_3 + 0x38 + lVar5);
      *(undefined4 *)(param_2 + 0x40 + lVar5) = *(undefined4 *)(param_3 + 0x40 + lVar5);
      lVar3 = *(longlong *)(param_3 + 0x48 + lVar5);
      if (*(longlong *)(param_2 + 0x48 + lVar5) != lVar3) {
        *(undefined8 *)(param_2 + 0x58 + lVar5) = 0;
      }
      *(longlong *)(param_2 + 0x48 + lVar5) = lVar3;
      if (*(longlong *)(param_2 + 0x50 + lVar5) != *(longlong *)(param_3 + 0x50 + lVar5)) {
        *(undefined8 *)(param_2 + 0x58 + lVar5) = 0;
      }
      uVar4 = FUN_14477b664();
      uVar4 = FUN_14477b664(uVar4);
      *(undefined8 *)(param_2 + 0x50 + lVar5) = uVar4;
      *(undefined8 *)(param_2 + 0x58 + lVar5) = *(undefined8 *)(param_3 + 0x58 + lVar5);
      puVar1 = (undefined8 *)(param_3 + 0x60 + lVar5);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x60 + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      lVar3 = *(longlong *)(param_3 + 0x70 + lVar5);
      if ((*(longlong *)(param_2 + 0x70 + lVar5) != lVar3) ||
         (*(int *)(param_2 + 0x78 + lVar5) != *(int *)(param_3 + 0x78 + lVar5))) {
        *(longlong *)(param_2 + 0x70 + lVar5) = lVar3;
        *(undefined4 *)(param_2 + 0x78 + lVar5) = *(undefined4 *)(param_3 + 0x78 + lVar5);
        *(undefined8 *)(param_2 + 0x80 + lVar5) = 0;
      }
      *(undefined4 *)(param_2 + 0x88 + lVar5) = *(undefined4 *)(param_3 + 0x88 + lVar5);
      lVar5 = lVar5 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1418c4a3e FUN_1418c4a3e body=87 status=ok
// SIG undefined FUN_1418c4a3e(void)

longlong * FUN_1418c4a3e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    *param_2 = lVar1;
    if (lVar1 == 0) {
      lVar1 = 0;
      goto LAB_1418c4a76;
    }
  }
  else {
    FUN_1456cec3c(lVar1);
    *param_2 = lVar1;
  }
  uVar2 = FUN_1403ec9c0();
  lVar1 = FUN_144718840(lVar1,uVar2);
LAB_1418c4a76:
  param_2[1] = lVar1;
  return param_2;
}



// FUNCTION 1418c4aa2 FUN_1418c4aa2 body=18 status=ok
// SIG undefined FUN_1418c4aa2(void)

undefined1 FUN_1418c4aa2(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  return *(undefined1 *)(lVar1 + 0x50);
}



// FUNCTION 1418c4aba FUN_1418c4aba body=83 status=ok
// SIG undefined FUN_1418c4aba(void)

void FUN_1418c4aba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b635770;
  if (param_1[8] == 0) {
    *param_1 = &PTR_FUN_14b0e70a0;
  }
  else {
    FUN_140872868(param_1);
    *param_1 = &PTR_FUN_14b0e70a0;
    if (param_1[8] != 0) {
      FUN_140872868(param_1);
    }
  }
  FUN_1403d7c6c(param_1);
  return;
}



// FUNCTION 1418c4b0e FUN_1418c4b0e body=118 status=ok
// SIG undefined FUN_1418c4b0e(void)

undefined8 FUN_1418c4b0e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cbd33b0 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cbd33b0,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c4b86 FUN_1418c4b86 body=117 status=ok
// SIG undefined FUN_1418c4b86(void)

undefined8 * FUN_1418c4b86(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 1418c4bfb FUN_1418c4bfb body=46 status=ok
// SIG undefined FUN_1418c4bfb(void)

void FUN_1418c4bfb(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14060481e(puVar1,param_1);
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b6556d0;
  return;
}



// FUNCTION 1418c4c29 FUN_1418c4c29 body=46 status=ok
// SIG undefined FUN_1418c4c29(void)

void FUN_1418c4c29(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14060481e(puVar1,param_1);
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b655d60;
  return;
}



// FUNCTION 1418c4c58 FUN_1418c4c58 body=40 status=ok
// SIG undefined FUN_1418c4c58(void)

undefined8 FUN_1418c4c58(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c4c80 FUN_1418c4c80 body=40 status=ok
// SIG undefined FUN_1418c4c80(void)

undefined8 FUN_1418c4c80(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418c4ca8 FUN_1418c4ca8 body=238 status=ok
// SIG undefined FUN_1418c4ca8(void)

void FUN_1418c4ca8(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[0xd] = 0;
  *param_2 = &PTR_FUN_14b65b2d0;
  if (DAT_14c947fe0 == 0) {
    lVar1 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar1);
    DAT_14c947fe0 = lVar1;
  }
  FUN_140045924(DAT_14c947fe0,&local_38,&DAT_14cb790d0,1);
  param_2[1] = local_38;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 0xb) = 0xf00000d0;
  param_2[0xc] = 0;
  *(undefined4 *)(param_2 + 0xd) = 0x3f800000;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418c4d97 FUN_1418c4d97 body=49 status=ok
// SIG undefined FUN_1418c4d97(void)

longlong FUN_1418c4d97(void)

{
  if (DAT_14cba40c0 == 0) {
    FUN_14086a14e(&DAT_14cba40c0,&PTR_FUN_14b6630e0);
  }
  return DAT_14cba40c0;
}


